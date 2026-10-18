// Shared dumpat bookkeeping and guest-thread evidence, independent of the GPU.
#pragma once
#include "present.h"
#include <cstdint>
#include <cstdio>
#include <string>
#include <initializer_list>

struct HostDumpAt {
    bool armed = false, at_least = false;
    std::string metric, name;
    double threshold = 0;
    uint32_t fired = 0, replaced = 0, write_failures = 0;

    void arm(const char *clock, const char *label, double anchor, bool inclusive) {
        if (armed)
            ++replaced;
        armed = true;
        metric = clock;
        name = label;
        threshold = anchor;
        at_least = inclusive;
    }
    uint32_t unfired() const {
        return replaced + (armed ? 1u : 0u);
    }
};

struct HostDumpAtSample {
    bool gameplay;
    double value;
    uint32_t turn, command_frame, present, guest_ms;
    uint64_t frame_id;
    const char *clock;
};

struct HostSimDumpRegion {
    const char *name;
    const void *data;
    size_t bytes;
};

// Both live and fixture writers use the same filenames, checked writes and
// close handling. The JSON producer runs synchronously under the guest baton.
template <class WriteJson>
bool host_write_simdump(const char *dir, const char *name,
                        std::initializer_list<HostSimDumpRegion> regions, WriteJson write_json) {
    const std::string base = std::string(dir) + "/" + name;
    bool ok = true;
    for (const auto &r : regions) {
        FILE *f = fopen((base + "." + r.name + ".bin").c_str(), "wb");
        bool written = f && r.data && r.bytes;
        if (written)
            written = fwrite(r.data, 1, r.bytes, f) == r.bytes;
        if (f && fclose(f))
            written = false;
        ok = written && ok;
    }
    FILE *f = fopen((base + ".entities.json").c_str(), "wb");
    if (!f)
        return false;
    const bool written = write_json(f) && !ferror(f);
    const bool closed = fclose(f) == 0;
    return ok && written && closed;
}

// Called at the first eligible completed guest present, before releasing its
// arena/baton. Image completion can be deferred, but guest evidence cannot.
template <class WriteSimDump>
bool host_dumpat_fire(HostDumpAt &request, const HostDumpAtSample &s, const char *dir,
                      bool sim_regions, WriteSimDump write_simdump) {
    if (!host_dumpat_should_fire(request.armed, s.gameplay, s.value, request.threshold,
                                 request.at_least))
        return false;
    request.armed = false;
    ++request.fired;
    bool ok = !sim_regions || write_simdump(request.name.c_str());
    const auto path = std::string(dir) + "/smoke_" + request.name + "_provenance.txt";
    if (FILE *f = fopen(path.c_str(), "wb")) {
        fprintf(f, "name %s\narmed_on %s%s%g\n", request.name.c_str(), request.metric.c_str(),
                request.at_least ? ">=" : ">", request.threshold);
        if (request.metric != "turn" && request.metric != "command_frame")
            fprintf(f, "%s %g\n", request.metric.c_str(), s.value);
        fprintf(f, "turn %u\ncommand_frame %u\npresent %u\nguest_ms %u\nclock %s\nframe_id %llu\n",
                s.turn, s.command_frame, s.present, s.guest_ms, s.clock ? s.clock : "",
                (unsigned long long)s.frame_id);
        if (ferror(f))
            ok = false;
        if (fclose(f))
            ok = false;
    } else
        ok = false;
    if (!ok)
        ++request.write_failures;
    printf(
        "[smoke] dumpat %s fired at %s %g, turn %u, command_frame %u, present %u, guest %u ms%s\n",
        request.name.c_str(), request.metric.c_str(), s.value, s.turn, s.command_frame, s.present,
        s.guest_ms, ok ? "" : " (evidence FAILED)");
    fflush(stdout);
    return true;
}
