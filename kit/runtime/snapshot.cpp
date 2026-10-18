// snapshot.cpp - see snapshot.h.
#include "snapshot.h"
#include "loader.h"

#include <errno.h>
#include <stdio.h>
#include <string.h>
#include "../platform/os.h"

namespace {

// mkdir -p for the directory part of `path`.
void make_parent_dirs(const std::string &path) {
    size_t slash = path.find_last_of('/');
    if (slash == std::string::npos || slash == 0)
        return;
    std::string dir = path.substr(0, slash);
    std::string acc;
    size_t i = 0;
    while (i < dir.size()) {
        size_t next = dir.find('/', i);
        if (next == std::string::npos)
            next = dir.size();
        acc.append(dir, i, next - i);
        if (!acc.empty())
            os_mkdir(acc.c_str()); // EEXIST is fine
        acc.push_back('/');
        i = next + 1;
    }
}

const uint32_t IMAGE_SCN_MEM_WRITE = 0x80000000u;

} // namespace

bool snapshot_dump(const std::string &path, uint32_t lo, uint32_t hi) {
    if (hi <= lo || !gm_valid(lo, hi - lo)) {
        LOGW("snapshot_dump(%s): bad range %08x..%08x", path.c_str(), lo, hi);
        return false;
    }
    make_parent_dirs(path);
    FILE *f = fopen(path.c_str(), "wb");
    if (!f) {
        LOGW("snapshot_dump(%s): %s", path.c_str(), strerror(errno));
        return false;
    }
    size_t n = hi - lo;
    bool ok = fwrite(gm_ptr(lo), 1, n, f) == n;
    if (fclose(f) != 0)
        ok = false;
    if (!ok)
        LOGW("snapshot_dump(%s): short write", path.c_str());
    return ok;
}

size_t snapshot_dump_regions(const std::string &dir, const std::string &tag,
                             const std::vector<SnapshotRegion> &regions) {
    size_t n = 0;
    for (const SnapshotRegion &r : regions) {
        std::string path = dir + "/" + tag + "." + r.name + ".bin";
        if (snapshot_dump(path, r.lo, r.hi))
            ++n;
    }
    return n;
}

std::vector<SnapshotRegion> snapshot_writable_image_regions() {
    std::vector<SnapshotRegion> out;
    uint32_t limit = loader_image_limit();
    if (!limit)
        return out;
    for (const SectionInfo &s : loader_sections()) {
        if (!(s.characteristics & IMAGE_SCN_MEM_WRITE))
            continue;
        uint32_t lo = s.va;
        uint32_t hi = s.va + s.vsize;
        if (hi > limit)
            hi = limit;
        if (hi <= lo)
            continue;
        // Section names repeat in some images; the address keeps the file name
        // unique and makes the dump self-describing.
        char buf[64];
        snprintf(buf, sizeof buf, "%s_%08x", s.name.c_str(), lo);
        for (char *p = buf; *p; ++p)
            if (*p == '.' || *p == '/' || *p == ' ')
                *p = '_';
        out.push_back(SnapshotRegion{buf, lo, hi});
    }
    return out;
}

uint64_t snapshot_hash(uint32_t lo, uint32_t hi) {
    uint64_t h = 1469598103934665603ull;
    if (hi <= lo || !gm_valid(lo, hi - lo))
        return 0;
    const uint8_t *p = gm_ptr(lo);
    for (uint32_t i = 0, n = hi - lo; i < n; ++i) {
        h ^= p[i];
        h *= 1099511628211ull;
    }
    return h;
}
