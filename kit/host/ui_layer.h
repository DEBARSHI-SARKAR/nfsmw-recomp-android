// Guest-resolution UI reconstructed from a frame's recorded writes.
#pragma once
#include "../dx/host_api.h"
#include <vector>

struct UiElement {
    uint64_t id;
    int x, y, w, h;
    HostSurfaceId src;
    bool is_cursor, is_hud;
    uint32_t first_seq, last_seq;
    std::vector<uint8_t> rgba;
    std::vector<uint8_t> mask; // One byte per pixel: 1 where this element drew.
};

struct UiFrame {
    std::vector<UiElement> elements;
    int guest_w, guest_h;
};

// The caller keeps f alive for the call. Output owns all its bytes and retains
// no frame pointers or leases. previous may alias out. The presenter supplies
// the active guest surface dimensions; extracted coordinates use that mode.
// FMV returns an empty UI: the presenter uses the complete decoded image.
// Replays 1:1 indexed/RGB565 copies (source extents for stretches are absent
// from HostBlitRecord). Fills use the format of a same-frame screen copy/CPU
// payload; with no format evidence their mask remains empty. Cross-format
// copies and fill-only frames require destination format metadata in the ABI.
void ui_layer_extract(HostFrameHandle f, int guest_w, int guest_h, const UiFrame *previous,
                      UiFrame *out);
