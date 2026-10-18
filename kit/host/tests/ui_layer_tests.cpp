#include "../ui_layer.h"
#include "test_frame_builder.h"
#include <algorithm>
#include <cstdio>

static int checks = 0, failures = 0;
#define CHECK(x)                                                                                   \
    do {                                                                                           \
        ++checks;                                                                                  \
        if (!(x)) {                                                                                \
            ++failures;                                                                            \
            std::fprintf(stderr, "FAIL %s:%d: %s\n", __FILE__, __LINE__, #x);                      \
        }                                                                                          \
    } while (0)

static void solid(test_frame_builder &b, HostSurfaceId src, uint32_t rev = 1, uint8_t value = 1) {
    b.revision({src, rev}, 16, 16, 8, std::vector<uint8_t>(16 * 16, value));
}
static bool pixel(const UiElement &e, int x, int y, uint32_t rgb, uint8_t mask = 1) {
    size_t i = size_t(y) * e.w + x;
    return i < e.mask.size() && i * 4 + 3 < e.rgba.size() && e.mask[i] == mask &&
           e.rgba[i * 4] == uint8_t(rgb >> 16) && e.rgba[i * 4 + 1] == uint8_t(rgb >> 8) &&
           e.rgba[i * 4 + 2] == uint8_t(rgb) && e.rgba[i * 4 + 3] == (mask ? 255 : 0);
}

static void test_full_color_cpu_payload() {
    for (int bpp : {24, 32}) {
        test_frame_builder b;
        b.blit(HOST_SRC_CPU, 20, 30, 2, 1);
        b.cpu({141, 73, 19, 0, 223, 163, 101, 0, 0xcd, 0xcd}, bpp, 10);
        UiFrame out{};
        ui_layer_extract(b.frame, 800, 600, nullptr, &out);
        CHECK(out.elements.size() == 1);
        if (out.elements.size() == 1) {
            CHECK(pixel(out.elements[0], 0, 0, 0x13498d));
            CHECK(pixel(out.elements[0], 1, 0, 0x65a3df));
        }
        CHECK(b.balanced());
    }
}

static void test_groups_and_separates() {
    test_frame_builder b;
    solid(b, 4);
    solid(b, 5);
    for (int x : {0, 16, 32})
        b.blit(4, x, 0, 16, 16);
    b.blit(5, 48, 0, 16, 16);
    UiFrame out{};
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(out.guest_w == 640 && out.guest_h == 480);
    CHECK(out.elements.size() == 2);
    if (out.elements.size() != 2)
        return;
    const auto &a = out.elements[0];
    const auto &c = out.elements[1];
    CHECK(a.src == 4 && a.x == 0 && a.y == 0 && a.w == 48 && a.h == 16);
    CHECK(c.src == 5 && c.x == 48 && c.w == 16 && c.h == 16);
    CHECK(a.first_seq == 1 && a.last_seq == 3 && c.first_seq == 4 && c.last_seq == 4);
    CHECK(a.id != 0 && c.id != 0 && a.id != c.id);
    CHECK(a.mask.size() == 48 * 16 && a.rgba.size() == 48 * 16 * 4);
    CHECK(std::all_of(a.mask.begin(), a.mask.end(), [](uint8_t m) { return m == 1; }));
    CHECK(pixel(a, 47, 15, 0xff0000));
    CHECK(b.balanced() && b.revision_acquires > 0 && b.palette_acquires > 0);
}

static void test_cpu_groups_only_with_cpu() {
    test_frame_builder b;
    solid(b, 4);
    b.blit(4, 0, 0, 16, 16);
    for (int x : {16, 32}) {
        b.blit(HOST_SRC_CPU, x, 0, 16, 16);
        b.cpu(std::vector<uint8_t>(16 * 16, 1), 8, 16);
    }
    b.blit(HOST_SRC_CPU, 65, 0, 16, 16);
    b.cpu(std::vector<uint8_t>(16 * 16, 1), 8, 16);
    UiFrame out{};
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(out.elements.size() == 3);
    if (out.elements.size() != 3)
        return;
    CHECK(out.elements[0].src == 4 && out.elements[0].w == 16);
    CHECK(out.elements[1].src == HOST_SRC_CPU && out.elements[1].x == 16 &&
          out.elements[1].w == 32);
    CHECK(out.elements[2].src == HOST_SRC_CPU && out.elements[2].x == 65);
    CHECK(pixel(out.elements[1], 31, 15, 0xff0000));
    CHECK(b.balanced() && b.revision_acquires == 1);
}

static void test_identity_match_and_split() {
    test_frame_builder b;
    solid(b, 4);
    for (int x : {0, 16, 32, 48})
        b.blit(4, x, 0, 16, 16);
    UiFrame previous{}, out{};
    ui_layer_extract(b.frame, 640, 480, nullptr, &previous);
    CHECK(previous.elements.size() == 1);
    if (previous.elements.size() != 1)
        return;
    uint64_t id = previous.elements[0].id;
    CHECK(previous.elements[0].w == 64);
    b.records.erase(b.records.begin() + 1);
    ui_layer_extract(b.frame, 640, 480, &previous, &out);
    CHECK(out.elements.size() == 2);
    if (out.elements.size() != 2)
        return;
    CHECK(out.elements[0].x == 0 && out.elements[0].w == 16 && out.elements[0].id != id);
    CHECK(out.elements[1].x == 32 && out.elements[1].w == 32 && out.elements[1].id == id);
    auto smaller_id = out.elements[0].id;
    ui_layer_extract(b.frame, 640, 480, &out,
                     &out); // The usual retained previous-frame update can be in-place.
    CHECK(out.elements[0].id == smaller_id && out.elements[1].id == id);
    CHECK(b.balanced());
}

static void test_replay_per_element_with_key_and_palette() {
    test_frame_builder b;
    b.palette(1, 1, 0xff0000);
    b.palette(2, 1, 0x00ff00);
    b.palette(2, 2, 0x0000ff);
    b.revision({4, 10}, 3, 1, 8, {1, 0, 1, 99}, 4);
    b.revision({4, 11}, 3, 1, 8, {2, 2, 2});
    b.revision({5, 1}, 3, 1, 8, {1, 1, 1});
    auto &keyed = b.blit(4, 10, 10, 3, 1, 10, 1);
    keyed.has_srckey = 1;
    keyed.src_key_lo = 0;
    keyed.src_key_hi = 0;
    b.blit(5, 10, 10, 3, 1, 1, 2);  // Entirely overwrites the first element on screen.
    b.blit(4, 13, 10, 3, 1, 11, 2); // Same element, different revision AND palette.
    UiFrame out{};
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(out.elements.size() == 2);
    if (out.elements.size() != 2)
        return;
    const auto &a = out.elements[0];
    const auto &c = out.elements[1];
    CHECK(a.src == 4 && a.w == 6 && a.first_seq == 1 && a.last_seq == 3);
    CHECK(pixel(a, 0, 0, 0xff0000));
    CHECK(pixel(a, 1, 0, 0, 0));
    CHECK(pixel(a, 2, 0, 0xff0000));
    CHECK(pixel(a, 3, 0, 0x0000ff));
    CHECK(pixel(c, 0, 0, 0x00ff00) && pixel(c, 1, 0, 0x00ff00));
    CHECK(b.balanced());
    b.revisions.clear();
    b.palettes.clear();
    b.records.clear();
    CHECK(pixel(a, 0, 0, 0xff0000) && pixel(c, 0, 0, 0x00ff00));
}

static void test_cursor_and_hud_flags() {
    test_frame_builder b;
    b.cursor_surface = 9;
    for (auto src : {4u, 5u, 6u, 9u, 1u})
        solid(b, src);
    auto &bg = b.blit(4, 0, 0, 16, 16);
    bg.after_first_draw = 0;
    bg.after_first_hud = 0;
    auto &first = b.blit(5, 20, 0, 16, 16);
    first.after_first_draw = 1;
    first.after_first_hud = 0;
    b.blit(6, 40, 0, 16, 16);
    b.blit(9, 60, 0, 16, 16);
    b.blit(1, 80, 0, 16, 16); // Render-to-render is never HUD.
    b.blit(4, 100, 0, 16, 16).is_upload = 1;
    b.blit(4, 120, 0, 16, 16).dst = 99; // Offscreen surface is not UI.
    UiFrame out{};
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(out.elements.size() == 5);
    if (out.elements.size() != 5)
        return;
    CHECK(!out.elements[0].is_hud && !out.elements[0].is_cursor);
    CHECK(out.elements[1].is_hud && out.elements[2].is_hud);
    CHECK(out.elements[3].is_cursor && out.elements[3].is_hud);
    CHECK(!out.elements[4].is_hud);
    b.screen_class = HOST_SCREEN_MENU;
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(std::none_of(out.elements.begin(), out.elements.end(),
                       [](const UiElement &e) { return e.is_hud; }));
    CHECK(out.elements[3].is_cursor);
    b.screen_class = HOST_SCREEN_FMV;
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(std::none_of(out.elements.begin(), out.elements.end(),
                       [](const UiElement &e) { return e.is_hud; }));
    CHECK(b.balanced());
}

static void test_connectivity_uses_records() {
    test_frame_builder b;
    solid(b, 4);
    // The bridge arrives last; both earlier components must be united.
    for (int x : {0, 32, 16})
        b.blit(4, x, 0, 16, 16);
    b.blit(4, 48, 16, 16, 16); // Corner contact is 8-connected.
    b.blit(4, 65, 33, 16, 16); // A full empty pixel between corners separates.
    UiFrame out{};
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(out.elements.size() == 2);
    if (out.elements.size() != 2)
        return;
    CHECK(out.elements[0].w == 64 && out.elements[0].h == 32);
    CHECK(pixel(out.elements[0], 0, 31, 0, 0)); // Bounding-box holes stay transparent.
    CHECK(pixel(out.elements[0], 63, 31, 0xff0000));
    b.records.clear();
    b.blit(4, 0, 0, 1, 5);
    b.blit(4, 1, 4, 4, 1);
    b.blit(4, 3, 1, 1, 1); // Inside the L's bounding box but disconnected.
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(out.elements.size() == 2);
    CHECK(b.balanced());
}

static void test_movie_bypasses_ui_and_clears_previous() {
    test_frame_builder b;
    solid(b, 4);
    b.blit(4, 0, 0, 16, 16);
    UiFrame out{};
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(out.elements.size() == 1);
    const int leases = b.revision_acquires;
    const int palettes = b.palette_acquires;
    b.records.clear();
    b.screen_class = HOST_SCREEN_FMV;
    // A detailed decoded image produces many changed runs. None is a UI
    // element; the presenter already holds the complete movie image.
    for (int y = 0; y < 280; ++y)
        for (int x = 0; x < 640; x += 8)
            b.blit(4, x, y, 4, 1);
    b.record_reads = 0;
    ui_layer_extract(b.frame, 640, 480, &out, &out);
    CHECK(out.elements.empty());
    CHECK(out.guest_w == 640 && out.guest_h == 480);
    CHECK(b.record_reads == 0);
    CHECK(b.revision_acquires == leases && b.palette_acquires == palettes);
    CHECK(b.balanced());
    // Leaving the movie must restore normal extraction, including HUD flags.
    b.records.clear();
    b.blit(4, 0, 0, 16, 16);
    for (auto cls : {HOST_SCREEN_MENU, HOST_SCREEN_GAMEPLAY}) {
        b.screen_class = cls;
        ui_layer_extract(b.frame, 640, 480, &out, &out);
        CHECK(out.elements.size() == 1);
        if (out.elements.size() == 1) {
            CHECK(pixel(out.elements[0], 0, 0, 0xff0000));
            CHECK(out.elements[0].is_hud == (cls == HOST_SCREEN_GAMEPLAY));
        }
    }
}

static void test_cpu_pitch_rgb565_and_coverage() {
    test_frame_builder b;
    auto &r = b.blit(HOST_SRC_CPU, 20, 30, 2, 2);
    r.src_x = 123;
    r.src_y = 456; // CPU pixels are local to the changed rectangle.
    r.has_dstkey = 1;
    r.dst_key_lo = 7;
    r.dst_key_hi = 8;
    b.cpu({0, 248, 224, 7, 99, 99, 31, 0, 255, 255, 99, 99}, 16, 6);
    b.coverage({1, 0, 1, 1});
    UiFrame out{};
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(out.elements.size() == 1);
    if (out.elements.size() != 1)
        return;
    const auto &e = out.elements[0];
    CHECK(pixel(e, 0, 0, 0xff0000));
    CHECK(pixel(e, 1, 0, 0, 0));
    CHECK(pixel(e, 0, 1, 0x0000ff));
    CHECK(pixel(e, 1, 1, 0xffffff));
    CHECK(b.revision_acquires == 0 && b.palette_acquires == 0 && b.balanced());
    b.records.clear();
    b.blit(HOST_SRC_CPU, 0, 0, 1, 2);
    b.cpu({1, 99, 1, 99}, 8, 2); // Padding is not the second row.
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(pixel(out.elements[0], 0, 1, 0xff0000));
    CHECK(b.balanced());
}

static void test_source_offsets_keys_and_order() {
    test_frame_builder b;
    b.palette(1, 2, 0x00ff00);
    b.palette(1, 3, 0x0000ff);
    b.palette(1, 4, 0xffffff);
    b.revision({4, 1}, 4, 2, 8, {99, 99, 99, 99, 99, 1, 2, 3, 4, 99}, 5);
    auto &r = b.blit(4, 0, 0, 3, 1);
    r.src_x = 1;
    r.src_y = 1;
    r.has_srckey = 1;
    r.src_key_lo = 2;
    r.src_key_hi = 3;
    UiFrame out{};
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(out.elements.size() == 1);
    if (out.elements.size() != 1)
        return;
    CHECK(pixel(out.elements[0], 0, 0, 0, 0));
    CHECK(pixel(out.elements[0], 1, 0, 0, 0));
    CHECK(pixel(out.elements[0], 2, 0, 0xffffff));
    b.records.clear();
    solid(b, 4, 2, 2);
    b.blit(4, 0, 0, 2, 1, 2).seq = 20; // Green, later in submission order.
    b.coverage({0, 1});
    b.blit(4, 0, 0, 2, 1, 1).seq = 10;
    b.records.back().value.src_y = 1;
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(out.elements[0].first_seq == 10 && out.elements[0].last_seq == 20);
    CHECK(pixel(out.elements[0], 0, 0, 0xff0000)); // Zero coverage doesn't erase earlier writes.
    CHECK(pixel(out.elements[0], 1, 0, 0x00ff00));
    CHECK(b.balanced());
}

static void test_identity_animation_and_overlap_threshold() {
    test_frame_builder b;
    solid(b, 4);
    solid(b, 5);
    b.blit(4, 0, 0, 16, 16);
    UiFrame old{}, out{};
    ui_layer_extract(b.frame, 640, 480, nullptr, &old);
    CHECK(old.elements.size() == 1);
    if (old.elements.size() != 1)
        return;
    uint64_t id = old.elements[0].id;
    solid(b, 4, 2, 2);
    auto &r = b.records[0].value;
    r.src.revision = 2;
    r.seq = 70;
    r.palette_version = 2;
    b.palette(2, 2, 0x00ff00);
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(out.elements[0].id == id); // Derived identity excludes animation state.
    CHECK(pixel(out.elements[0], 0, 0, 0x00ff00));
    r.dst_x = 8;
    ui_layer_extract(b.frame, 640, 480, &old, &out);
    CHECK(out.elements[0].id == id); // Exactly half overlaps.
    r.dst_x = 9;
    ui_layer_extract(b.frame, 640, 480, &old, &out);
    CHECK(out.elements[0].id != id); // Less than half, equal-size rectangles.
    r.dst_x = 0;
    r.src = {5, 1};
    ui_layer_extract(b.frame, 640, 480, &old, &out);
    CHECK(out.elements[0].id != id); // Perfect overlap cannot match a different source.
    CHECK(b.balanced());
}

static void test_missing_inputs_and_fill_format() {
    test_frame_builder b;
    solid(b, 4);
    b.blit(4, 0, 0, 1, 1); // Establishes the destination's indexed format.
    b.blit(HOST_SURFACE_NONE, 2, 0, 2, 1).fill_value = 1;
    b.coverage({1, 0});
    b.blit(5, 5, 0, 1, 1);                // Absent retained revision is not current surface data.
    b.blit(4, 7, 0, 1, 1, 1, 99);         // Absent palette is not the current palette.
    b.blit(4, 9, 0, 1, 1).has_dstkey = 1; // No coverage: cannot recover destination-key decision.
    b.blit(4, 11, 0, 0, 1);               // Empty record is discarded.
    UiFrame out{};
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(out.elements.size() == 5);
    if (out.elements.size() != 5)
        return;
    CHECK(!out.elements[1].is_cursor); // HOST_SURFACE_NONE is not a cursor.
    CHECK(pixel(out.elements[1], 0, 0, 0xff0000) && pixel(out.elements[1], 1, 0, 0, 0));
    CHECK(pixel(out.elements[2], 0, 0, 0, 0));
    CHECK(pixel(out.elements[3], 0, 0, 0, 0));
    CHECK(pixel(out.elements[4], 0, 0, 0, 0));
    CHECK(b.balanced());
    b.records.clear();
    b.blit(HOST_SURFACE_NONE, 0, 0, 1, 1).fill_value = 0xf800;
    ui_layer_extract(b.frame, 640, 480, nullptr, &out);
    CHECK(
        pixel(out.elements[0], 0, 0, 0, 0)); // ABI gap: fill-only frames carry no destination bpp.
    ui_layer_extract(b.frame, 640, 480, &out, nullptr);
    CHECK(b.balanced());
    ui_layer_extract({0}, 640, 480, &out, &out);
    CHECK(out.elements.empty() && out.guest_w == 640 && out.guest_h == 480);
}

static void test_selected_resolution_and_switches() {
    test_frame_builder b;
    solid(b, 4);
    UiFrame out{};
    for (int height : {480, 600, 480}) {
        const int width = height * 4 / 3;
        b.records.clear();
        b.blit(4, width - 16, height - 16, 16, 16);
        ui_layer_extract(b.frame, width, height, &out, &out);
        CHECK(out.guest_w == width && out.guest_h == height);
        CHECK(out.elements.size() == 1);
        if (out.elements.size() == 1) {
            CHECK(out.elements[0].x == width - 16 && out.elements[0].y == height - 16);
            CHECK(pixel(out.elements[0], 15, 15, 0xff0000));
        }
        CHECK(b.balanced());
    }
}

int main() {
    const struct {
        const char *name;
        void (*run)();
    } tests[] = {
        {"full-color CPU payload", test_full_color_cpu_payload},
        {"groups and separates", test_groups_and_separates},
        {"selected resolution and switches", test_selected_resolution_and_switches},
        {"CPU groups only with CPU", test_cpu_groups_only_with_cpu},
        {"identity match and split", test_identity_match_and_split},
        {"per-element keys, revisions and palettes", test_replay_per_element_with_key_and_palette},
        {"cursor and HUD flags", test_cursor_and_hud_flags},
        {"record connectivity and holes", test_connectivity_uses_records},
        {"movie bypass and UI transitions", test_movie_bypasses_ui_and_clears_previous},
        {"CPU pitch, RGB565 and destination coverage", test_cpu_pitch_rgb565_and_coverage},
        {"source offsets, key ranges and replay order", test_source_offsets_keys_and_order},
        {"identity animation and overlap threshold", test_identity_animation_and_overlap_threshold},
        {"missing inputs and fill format", test_missing_inputs_and_fill_format},
    };
    for (const auto &t : tests) {
        int before = failures;
        t.run();
        std::printf("%s: %s\n", t.name, before == failures ? "PASS" : "FAIL");
    }
    std::printf("ui_layer_tests: %d checks, %d failures\n", checks, failures);
    return failures ? 1 : 0;
}
