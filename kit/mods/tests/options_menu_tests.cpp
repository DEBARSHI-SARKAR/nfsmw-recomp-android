#include "mods_tests.h"
#include "../mods_internal.h"
#include "../options_menu.h"
#include "../display_settings.h"
#include "../controls_settings.h"
#include "../../runtime/loader.h"
#include "../../runtime/imports.h"
#include "../../runtime/memory.h"
#include "../../runtime/win32.h"
#include "../../dx/host_api.h"

MOD_TEST_SUITE(native_options_preserve_navigation_and_apply_controls) {
    sched_set_guest_thread(true);
    mods_hooks_reset();
    mem_init();
    MOD_CHECK(loader_load(nullptr));
    MOD_CHECK(mods_symbols_load(nullptr));
    loader_init_context(loader_context());
    mods_host_set_main_thread();
    mods_overlay_set_profile_dir(mod_test_dir("native-options"));
    mods_overlay_reset();
    mods_settings_reset();
    mods_display_reset();
    mods_display_init();
    // The original menu initializer uses the CRT allocator for list indices.
    wr32(0x5e33a4, 0);
    wr32(0x5e26c8 + 9 * 4, heap_alloc(24, true));
    wr32(0x5d46ac, 0);
    MOD_CHECK(mods_options_init());
    guest_call(loader_context(), 0x459f40);
    constexpr uint32_t page = 0x5d9e38, controller = 0x5d7368;
    const uint32_t entries = rd32(page + 8);
    MOD_CHECK(entries != 0x5d9970);
    MOD_CHECK_EQ(rd32(page + 4), 47);
    for (unsigned i = 0; i < 34 * 8; i += 4)
        MOD_CHECK_EQ(rd32(entries + i), rd32(0x5d9970 + i));
    MOD_CHECK_EQ(rd32(page + 12), 0x4c3800); // original Back/pause lifecycle
    MOD_CHECK(imports_is_trampoline(rd32(controller + 8)));
    auto activate = [&](unsigned row, unsigned direction = 1) {
        wr32(0x749ce0, direction);
        guest_call(loader_context(), 0x45b460, entries + (34 + row) * 8);
    };
    auto update = [&] { guest_call(loader_context(), rd32(controller + 8), controller); };
    auto flags = [&](unsigned i) { return rd32(rd32(entries + i * 8 + 4)) & 3; };
    activate(0);
    update();
    MOD_CHECK_EQ(rd32(controller + 12), 4);
    MOD_CHECK_EQ(flags(1), 3);
    for (unsigned i : {25u, 27u, 29u, 33u, 34u, 35u, 36u, 37u, 38u, 39u, 40u, 41u})
        MOD_CHECK_EQ(flags(i), 0);
    MOD_CHECK_EQ(flags(42), 3);
    activate(3); // actual native type-8 activation changes Rendering
    MOD_CHECK_EQ(mods_display_value(DISPLAY_RENDERING), 1);
    MOD_CHECK_EQ(mods_display_classic(), 0);
    mods_display_transition(1, HOST_SCREEN_GAMEPLAY);
    MOD_CHECK_EQ(mods_display_classic(), 1);
    activate(3, 3);
    mods_display_transition(1, HOST_SCREEN_GAMEPLAY);
    MOD_CHECK_EQ(mods_display_classic(), 0); // same level, next frame
    activate(4);
    MOD_CHECK_EQ(mods_display_textures(), 0);
    activate(5, 3);
    MOD_CHECK_EQ(mods_display_filtering(), 2);
    activate(6);
    MOD_CHECK_EQ(mods_display_scale(), 1);
    activate(7);
    mods_display_transition(1, HOST_SCREEN_GAMEPLAY);
    MOD_CHECK_EQ(mods_display_wide(), 0);
    activate(1);
    update();
    MOD_CHECK_EQ(rd32(controller + 12), 5);
    // Window, frame limit and overlay, then five of the controls' seven rows
    // (layout, size, opacity, haptics, edit): eight rows exactly fill the
    // tab. pad_with_controller and snap show only on the F10 fallback page.
    for (unsigned i : {37u, 38u, 39u, 40u, 41u, 42u, 43u, 44u})
        MOD_CHECK_EQ(flags(i), 0);
    // The Mods tab's pagination buttons stay hidden: nothing on this tab may
    // alias their slots.
    MOD_CHECK_EQ(flags(45), 3);
    MOD_CHECK_EQ(flags(46), 3);
    activate(4);
    MOD_CHECK_EQ(mods_display_fps(), 40);
    activate(5);
    MOD_CHECK_EQ(mods_display_overlay(), 1);
    // The five rows at control(6..10) are, in order, layout, size, opacity,
    // haptics and edit - not pad_with_controller or snap.
    const int layout_before = mods_controls_value(CONTROLS_LAYOUT_ROW);
    activate(6); // control(6): row 3, CONTROLS_LAYOUT_ROW
    MOD_CHECK(mods_controls_value(CONTROLS_LAYOUT_ROW) != layout_before); // always turns over
    const int size_before = mods_controls_value(CONTROLS_SIZE_ROW);
    activate(7); // control(7): row 4, CONTROLS_SIZE_ROW
    MOD_CHECK(mods_controls_value(CONTROLS_SIZE_ROW) != size_before || size_before == 2);
    const int opacity_before = mods_controls_value(CONTROLS_OPACITY_ROW);
    activate(8); // control(8): row 5, CONTROLS_OPACITY_ROW
    MOD_CHECK(mods_controls_value(CONTROLS_OPACITY_ROW) != opacity_before || opacity_before == 100);
    const int haptics = mods_controls_value(CONTROLS_HAPTICS_ROW);
    activate(9); // control(9): row 6, CONTROLS_HAPTICS_ROW
    MOD_CHECK_EQ(mods_controls_value(CONTROLS_HAPTICS_ROW), 1 - haptics);
    activate(9);
    MOD_CHECK_EQ(mods_controls_value(CONTROLS_HAPTICS_ROW), haptics);
    MOD_CHECK(!mods_controls_take_edit_request());
    activate(10); // control(10): row 7, CONTROLS_EDIT_ROW
    MOD_CHECK(mods_controls_take_edit_request());
    // The display API still follows the original Graphics resolution selector.
    wr8(0x89d15c, 2);
    wr8(0x749cf0, 1);
    wr32(0x89cf28, 1920);
    wr32(0x89cf2c, 1080);
    wr32(0x89cf30, 16);
    MOD_CHECK_EQ(mods_display_value(DISPLAY_CLASSIC_MODE), 1);
    MOD_CHECK(mods_display_line(DISPLAY_CLASSIC_MODE) == "Resolution: 1920x1080");
    MOD_CHECK_EQ(mods_display_set(DISPLAY_CLASSIC_MODE, 2), POP_E_RANGE);
    MOD_CHECK_EQ(mods_display_nudge(DISPLAY_CLASSIC_MODE, 1), POP_OK);
    MOD_CHECK_EQ(mods_display_value(DISPLAY_CLASSIC_MODE), 0); // wraps
    // Selecting an original tab and Back remains the original callback path.
    wr32(0x749ce0, 1);
    guest_call(loader_context(), 0x45b460, entries + 25 * 8);
    update();
    MOD_CHECK_EQ(rd32(controller + 12), 0);
    MOD_CHECK_EQ(flags(37), 3);
    // Dynamically registered settings remain reachable beyond one page.
    for (unsigned i = 0; i < 12; ++i) {
        const std::string key = "item" + std::to_string(i);
        mods_settings_declare(90, "fixture.options", key.c_str(), key.c_str(), POP_SETTING_INT, 0,
                              0, 5);
    }
    activate(2);
    update();
    MOD_CHECK_EQ(rd32(controller + 12), 6);
    MOD_CHECK_EQ(flags(45), 3);
    MOD_CHECK_EQ(flags(46), 0);
    activate(12);
    update(); // next page: only items 8 through 11
    MOD_CHECK_EQ(flags(45), 0);
    MOD_CHECK_EQ(flags(46), 3);
    MOD_CHECK_EQ(flags(41), 3);
    activate(3);
    int64_t changed = -1;
    MOD_CHECK_EQ(mods_settings_get(90, "item8", &changed), POP_OK);
    MOD_CHECK_EQ(changed, 1);
    activate(11);
    update();
    activate(3, 3);
    MOD_CHECK_EQ(mods_settings_get(90, "item0", &changed), POP_OK);
    MOD_CHECK_EQ(changed, 0);
    // High-resolution text measurement grows with the glyph destinations,
    // keeping mouse hit rectangles and centered native labels in agreement.
    const uint32_t font = heap_alloc(256 * 8, true) + 0x100, out = heap_alloc(8, true);
    wr16(font + 65 * 8 - 0xfc, 8);
    wr16(font + 65 * 8 - 0xfa, 12);
    wr32(0x749cd8, 13);
    wr8(0x88f000, 2);
    wr32(0x89c669, 0x80000000);
    wr16(0x89c6d1, 2160);
    wr32(0x5da078, 0);
    guest_call(loader_context(), 0x516b80, font, out, 65);
    MOD_CHECK_EQ(rd32(out), 36);
    MOD_CHECK_EQ(rd32(out + 4), 54);
    wr32(0x749cd8, 0);
    guest_call(loader_context(), 0x516b80, font, out, 65);
    MOD_CHECK_EQ(rd32(out), 8);
    MOD_CHECK_EQ(rd32(out + 4), 12);
    mods_hooks_reset();
    MOD_CHECK_EQ(rd32(page + 8), 0x5d9970);
    MOD_CHECK_EQ(rd32(page + 4), 34);
    MOD_CHECK_EQ(rd32(controller + 8), 0x4c4840);
    mods_settings_reset();
    mods_display_reset();
    mods_overlay_set_profile_dir(nullptr);
    mods_overlay_reset();
}
