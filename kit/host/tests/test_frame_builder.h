// Test-only implementation of the immutable frame/lease ABI, with no guest.
// Link test_frame_builder.mm instead of ddraw.cpp in a standalone host test.
#pragma once
#include "../../dx/host_api.h"
#include <array>
#include <map>
#include <vector>

struct test_frame_builder {
    struct Revision {
        std::vector<uint8_t> bytes;
        int w, h, pitch, bpp;
        int acquires = 0;
    };
    struct Palette {
        std::array<uint8_t, 768> rgb{};
        int acquires = 0;
    };
    struct Record {
        HostBlitRecord value{};
        std::vector<uint8_t> coverage, cpu_pixels;
    };
    HostFrameHandle frame;
    HostScreenClass screen_class = HOST_SCREEN_GAMEPLAY;
    HostSurfaceId render_surface = 1, cursor_surface = HOST_SURFACE_NONE;
    std::vector<Record> records;
    std::map<uint64_t, Revision> revisions;
    std::map<uint32_t, Palette> palettes;
    int revision_acquires = 0, revision_releases = 0;
    int palette_acquires = 0, palette_releases = 0;
    uint32_t record_reads = 0;

    test_frame_builder();
    ~test_frame_builder();
    test_frame_builder(const test_frame_builder &) = delete;
    test_frame_builder &operator=(const test_frame_builder &) = delete;
    static uint64_t key(HostSurfaceKey k) {
        return (uint64_t(k.surface) << 32) | k.revision;
    }
    void revision(HostSurfaceKey k, int w, int h, int bpp, std::vector<uint8_t> bytes,
                  int pitch = 0);
    void palette(uint32_t version, uint8_t index, uint32_t rgb);
    HostBlitRecord &blit(HostSurfaceId src, int x, int y, int w, int h, uint32_t revision = 1,
                         uint32_t palette = 1);
    void coverage(std::vector<uint8_t> bytes);
    void cpu(std::vector<uint8_t> bytes, int bpp, int pitch);
    bool balanced() const;
};
