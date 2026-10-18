#pragma once
// Binding Task 6 value types, for branches that have not merged its producer.
// No extraction implementation or production test double is supplied here.
// Once ui_layer.h is present, production includes that authoritative header.
#include "../dx/host_api.h"
#include <vector>
struct UiElement {
    uint64_t id;
    int x, y, w, h;
    HostSurfaceId src;
    bool is_cursor, is_hud;
    uint32_t first_seq, last_seq;
    std::vector<uint8_t> rgba;
    std::vector<uint8_t> mask;
};
struct UiFrame {
    std::vector<UiElement> elements;
    int guest_w, guest_h;
};
