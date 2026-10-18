#pragma once
// Task 6 interface double: no extractor implementation and no production
// fallback. The test runner uses ui_layer.h automatically once it is available.
#include "../../dx/host_api.h"
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
