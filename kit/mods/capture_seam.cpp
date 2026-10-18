// capture_seam.cpp - the capture harness as the host exposes it to a mod.
//
// WHY THIS FILE IS HERE. Page tracking and shim capture are written in
// mods/native. The mods CMake target globs mods/*.cpp and
// nothing globs mods/native. Including the two implementations from this
// one globbed file puts them in every host, which is the arrangement the glob
// was introduced for. Each is included exactly once in
// the process: the mods test binary compiles this file through the same glob,
// so its test bridge includes only the test files.
#include "native/page_track.cpp"
#include "../platform/os.h"
#include "native/shim_capture.cpp"
#include "native/replay.h"
#include "../runtime/guest.h"
#include "../runtime/mods_seam.h"
#include "pop_mod_api.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

// The entry points a capture mod calls. A mod is a dylib loaded with
// -undefined dynamic_lookup, so it declares these itself and the loader binds
// them to the host at load time. They are C so a .c mod can declare them.
extern "C" {
void mods_capture_unwound(void);
int pop_capture_available(void);
int pop_capture_begin(uint32_t max_pages, uint32_t max_calls);
int pop_capture_write(const char *path, uint32_t target, const pop_cpu_v1 *entry,
                      const pop_cpu_v1 *exit_state, uint32_t live_flags, const char **why);
}

// Called by the hook runtime when a guest longjmp abandoned hook frames.
//
// The capture mod's wrap hook opens both windows, calls the original, and
// closes them. A guest longjmp out of the original jumps straight over the
// close, and nothing else would ever run it: page tracking would stay armed
// with the whole arena PROT_NONE and this module's fault handler installed
// over whatever was there before, and the next guest memory access on any
// thread would fault into a handler whose bookkeeping had been abandoned.
//
// So the unwind closes them. The capture is discarded rather than salvaged: a
// candidate that left through a longjmp did not run to a return, and its exit
// CPU state was never taken. Only dropping the owning thread's opening frame
// cancels: another thread can exit while the candidate is at a checkpoint,
// and an unwind confined to a nested invocation does not escape the capture.
namespace {
std::atomic<uintptr_t> g_capture_owner{0};
uint32_t g_capture_depth = 0; // published with owner, read only by that thread
thread_local bool t_cancelled_by_unwind = false;
} // namespace

void mods_capture_unwound(void) {
    if (g_capture_owner.load(std::memory_order_acquire) != (uintptr_t)os_thread_self() ||
        !g_capture_depth || mods_hook_depth() >= g_capture_depth)
        return;
    t_cancelled_by_unwind = true;
    g_capture_owner.store(0, std::memory_order_release);
    const char *ignored = nullptr;
    if (pop_pagetrack::active())
        pop_pagetrack::end(nullptr, nullptr, &ignored);
    if (pop_shimcap::active())
        pop_shimcap::end(nullptr, nullptr, &ignored);
}

namespace {

const char kB64[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

void base64(std::string &out, const uint8_t *p, size_t n) {
    out.clear();
    out.reserve((n + 2) / 3 * 4);
    size_t i = 0;
    for (; i + 3 <= n; i += 3) {
        uint32_t v = (uint32_t)p[i] << 16 | (uint32_t)p[i + 1] << 8 | p[i + 2];
        out += kB64[(v >> 18) & 63];
        out += kB64[(v >> 12) & 63];
        out += kB64[(v >> 6) & 63];
        out += kB64[v & 63];
    }
    if (i < n) {
        uint32_t v = (uint32_t)p[i] << 16 | (i + 1 < n ? (uint32_t)p[i + 1] << 8 : 0);
        out += kB64[(v >> 18) & 63];
        out += kB64[(v >> 12) & 63];
        out += (i + 1 < n) ? kB64[(v >> 6) & 63] : '=';
        out += '=';
    }
}

void write_cpu(FILE *f, const char *key, const pop_cpu_v1 *c) {
    std::fprintf(
        f,
        "  \"%s\": {\"size\": %u, \"eax\": %u, \"ecx\": %u, \"edx\": %u, \"ebx\": %u,\n"
        "    \"esp\": %u, \"ebp\": %u, \"esi\": %u, \"edi\": %u, \"eip\": %u,\n"
        "    \"target\": %u, \"phase\": %u,\n"
        "    \"cf\": %u, \"zf\": %u, \"sf\": %u, \"of\": %u, \"pf\": %u, \"af\": %u, \"df\": %u,\n"
        "    \"fpu_top\": %u, \"fpu_cw\": %u, \"fpu_sw\": %u, \"fpu_tag\": %u,\n"
        "    \"st\": [",
        key, c->size, c->eax, c->ecx, c->edx, c->ebx, c->esp, c->ebp, c->esi, c->edi, c->eip,
        c->target, c->phase, c->cf, c->zf, c->sf, c->of, c->pf, c->af, c->df, c->fpu_top, c->fpu_cw,
        c->fpu_sw, c->fpu_tag);
    for (int i = 0; i < 8; ++i) {
        // %a, so a double survives the round trip exactly. %g would not, and a
        // capture that changes an FPU value on its way to disk is worthless.
        std::fprintf(f, "%s\"%a\"", i ? ", " : "", c->st[i]);
    }
    std::fprintf(f, "]}");
}

const char *g_why = "";

} // namespace

int pop_capture_available(void) {
    const char *t = recomp_env("TESTING");
    return (t && *t) ? 1 : 0;
}

int pop_capture_begin(uint32_t max_pages, uint32_t max_calls) {
    if (max_pages == 0 || max_pages > pop_replay::max_pages)
        return 0;
    if (max_calls == 0 || max_calls > pop_replay::max_calls)
        return 0;
    // Shim capture first. If page tracking were armed first, installing the
    // observer would itself run with the arena inaccessible for no reason.
    if (!pop_shimcap::begin(max_calls))
        return 0;
    if (!pop_pagetrack::begin(max_pages)) {
        const char *ignored = nullptr;
        pop_shimcap::end(nullptr, nullptr, &ignored);
        return 0;
    }
    g_capture_depth = mods_hook_depth();
    t_cancelled_by_unwind = false;
    g_capture_owner.store((uintptr_t)os_thread_self(), std::memory_order_release);
    return 1;
}

// Close the capture windows and serialize a validated function entry/exit corpus.
// Every failure restores page access and removes observation before returning a diagnostic.
int pop_capture_write(const char *path, uint32_t target, const pop_cpu_v1 *entry,
                      const pop_cpu_v1 *exit_state, uint32_t live_flags, const char **why) {
    if (t_cancelled_by_unwind) {
        if (why)
            *why = "capture cancelled by unwind";
        return 0;
    }
    if (g_capture_owner.load(std::memory_order_acquire) != (uintptr_t)os_thread_self()) {
        if (why)
            *why = "this thread does not own a capture window";
        return 0;
    }
    g_capture_owner.store(0, std::memory_order_release);
    const pop_pagetrack::Touch *touches = nullptr;
    size_t touch_count = 0;
    const char *page_why = "";
    const bool pages_ok = pop_pagetrack::end(&touches, &touch_count, &page_why);

    const pop_shimcap::Call *calls = nullptr;
    size_t call_count = 0;
    const char *call_why = "";
    const bool calls_ok = pop_shimcap::end(&calls, &call_count, &call_why);

    // Both windows are always closed before anything can return, so a
    // rejection never leaves the arena inaccessible or the observer installed.
    if (!pages_ok || !calls_ok) {
        g_why = !pages_ok ? page_why : call_why;
        if (why)
            *why = g_why;
        return 0;
    }
    if (touch_count == 0) {
        g_why = "the candidate touched no guest memory at all, which no real "
                "function does: the capture is not evidence of a run";
        if (why)
            *why = g_why;
        return 0;
    }
    if (!path || !*path || !entry || !exit_state) {
        g_why = "capture output path or CPU snapshot missing";
        if (why)
            *why = g_why;
        return 0;
    }

    FILE *f = std::fopen(path, "wb");
    if (!f) {
        g_why = "cannot open the capture output path for writing";
        if (why)
            *why = g_why;
        return 0;
    }
    const size_t page = pop_pagetrack::page_size();
    std::fprintf(f,
                 "{\n  \"version\": 1,\n  \"target\": %u,\n"
                 "  \"arena_size\": %u,\n  \"page_size\": %u,\n"
                 "  \"live_flags\": %u,\n",
                 target, (unsigned)GUEST_SIZE, (unsigned)page, live_flags);
    write_cpu(f, "entry", entry);
    std::fprintf(f, ",\n");
    write_cpu(f, "exit", exit_state);
    std::fprintf(f, ",\n");

    std::string b64;
    std::fprintf(f, "  \"pages\": [\n");
    for (size_t i = 0; i < touch_count; ++i) {
        const pop_pagetrack::Touch &t = touches[i];
        std::fprintf(f, "    {\"address\": %u, \"read\": %s, \"written\": %s,\n", t.address,
                     t.read ? "true" : "false", t.written ? "true" : "false");
        base64(b64, t.entry, page);
        std::fprintf(f, "     \"entry\": \"%s\"", b64.c_str());
        if (t.written) {
            // The exit contents are read out of the arena now, after the
            // window closed and the pages became readable again.
            base64(b64, (const uint8_t *)(g_mem + t.address), page);
            std::fprintf(f, ",\n     \"exit\": \"%s\"", b64.c_str());
        }
        std::fprintf(f, "}%s\n", i + 1 < touch_count ? "," : "");
    }
    std::fprintf(f, "  ],\n  \"calls\": [\n");
    for (size_t i = 0; i < call_count; ++i) {
        std::fprintf(f, "    {\"function\": \"%s\", \"arguments\": [", calls[i].function.c_str());
        for (size_t a = 0; a < calls[i].arguments.size(); ++a)
            std::fprintf(f, "%s%u", a ? ", " : "", calls[i].arguments[a]);
        std::fprintf(f, "], \"result\": %u}%s\n", calls[i].result, i + 1 < call_count ? "," : "");
    }
    std::fprintf(f, "  ]\n}\n");
    const bool ok = std::ferror(f) == 0;
    if (std::fclose(f) != 0 || !ok) {
        std::remove(path);
        g_why = "the capture could not be written completely";
        if (why)
            *why = g_why;
        return 0;
    }
    if (why)
        *why = "";
    return 1;
}
