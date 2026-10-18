// snapshot.h - guest memory dumps for the parity harness.
//
// A snapshot is a raw little-endian copy of a half-open guest range written to
// a file, so tools/recomp/parity.py can byte-compare it against the same range
// read out of the Unicorn oracle.  Nothing here interprets the bytes.
#pragma once
#include "guest.h"
#include <stdint.h>
#include <string>
#include <vector>

// Writes g_mem[lo, hi) to `path`.  Returns false and logs on any I/O error or
// when the range is outside the arena.  Creates parent directories.
bool snapshot_dump(const std::string &path, uint32_t lo, uint32_t hi);

struct SnapshotRegion {
    std::string name; // becomes part of the file name
    uint32_t lo;
    uint32_t hi; // exclusive
};

// Writes one file per region as "<dir>/<tag>.<name>.bin".  Returns the number
// of regions written.
size_t snapshot_dump_regions(const std::string &dir, const std::string &tag,
                             const std::vector<SnapshotRegion> &regions);

// The regions the parity comparison uses: every writable image section of the
// loaded PE (loader_sections(), IMAGE_SCN_MEM_WRITE) clipped to
// loader_image_limit(), in address order.  Empty before loader_load().
std::vector<SnapshotRegion> snapshot_writable_image_regions();

// FNV-1a of g_mem[lo, hi), for cheap "did this move at all" checks in logs.
uint64_t snapshot_hash(uint32_t lo, uint32_t hi);
