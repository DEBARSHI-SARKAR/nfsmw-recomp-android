// settings_page_tests.cpp - navigation, editing and the drawing itself.
#include "mods_tests.h"
#include "../display_settings.h"
#include "../mods_internal.h"
#include "../../runtime/memory.h"
#include <limits>
#include <string>
#include <vector>

static const PopModApi *page_test_provider(uint32_t owner);

namespace {
PopModApi g_a, g_b;

// The page filters its rows by the mod id it gets from the context provider,
// so a suite that opens the page for "a.mod" has to be a run in which owner
// FIRST_MOD really is a.mod. Without this the filter matches whatever provider
// the previous suite installed and the page comes back empty.
void install_context() {
    memset(&g_a, 0, sizeof g_a);
    g_a.version = POP_MOD_API_VERSION;
    g_a.size = (uint32_t)sizeof(PopModApi);
    g_a.mod_index = MODS_OWNER_FIRST_MOD;
    g_a.mod_id = "a.mod";
    g_b = g_a;
    g_b.mod_index = MODS_OWNER_FIRST_MOD + 1;
    g_b.mod_id = "b.mod";
    mods_set_context_provider(page_test_provider);
}

// The page's keyboard is the runtime's and outlives a suite, so every suite
// here hands it back. F10 is reserved by the page, and a later suite pressing
// it would otherwise open a page nobody in that suite knows about.
void teardown() {
    mods_page_close();
    mods_input_remove_all(MODS_OWNER_RUNTIME);
}

void setup() {
    // The registries this suite counts rows from, emptied first. Another
    // suite's leftover menu entry or key handler would be an extra row and an
    // extra consumer, and every count below would be one out.
    mods_host_services_remove_all(MODS_OWNER_FIRST_MOD);
    mods_host_services_remove_all(MODS_OWNER_FIRST_MOD + 1);
    mods_input_remove_all(MODS_OWNER_FIRST_MOD);
    mods_settings_reset();
    mods_host_set_main_thread();
    mods_settings_declare(MODS_OWNER_FIRST_MOD, "a.mod", "ui_scale", "UI scale", POP_SETTING_INT, 2,
                          1, 4);
    mods_settings_declare(MODS_OWNER_FIRST_MOD, "a.mod", "shadows", "Shadows", POP_SETTING_BOOL, 1,
                          0, 1);
    mods_settings_declare(MODS_OWNER_FIRST_MOD + 1, "b.mod", "volume", "Volume", POP_SETTING_INT, 5,
                          0, 10);
    install_context();
    mods_page_init();
    mods_page_close();
}
} // namespace

static const PopModApi *page_test_provider(uint32_t owner) {
    if (owner == MODS_OWNER_FIRST_MOD)
        return &g_a;
    if (owner == MODS_OWNER_FIRST_MOD + 1)
        return &g_b;
    return nullptr;
}

MOD_TEST_SUITE(page_navigates_and_edits) {
    setup();
    MOD_CHECK_EQ(mods_page_open("a.mod"), POP_OK);
    MOD_CHECK(mods_page_visible());
    MOD_CHECK_EQ(mods_page_line_count(), 2u); // only that mod's
    MOD_CHECK_EQ(mods_page_cursor(), 0u);

    int64_t v = 0;
    mods_input_key(0xcd, 0, true);
    mods_input_key(0xcd, 0, false); // RIGHT
    mods_input_key(0xcd, 0, true);
    mods_input_key(0xcd, 0, false);
    MOD_CHECK_EQ(mods_settings_get(MODS_OWNER_FIRST_MOD, "ui_scale", &v), POP_OK);
    MOD_CHECK_EQ(v, 4);
    mods_input_key(0xcd, 0, true);
    mods_input_key(0xcd, 0, false); // clamps
    MOD_CHECK_EQ(mods_settings_get(MODS_OWNER_FIRST_MOD, "ui_scale", &v), POP_OK);
    MOD_CHECK_EQ(v, 4);
    mods_input_key(0xcb, 0, true);
    mods_input_key(0xcb, 0, false); // LEFT
    MOD_CHECK_EQ(mods_settings_get(MODS_OWNER_FIRST_MOD, "ui_scale", &v), POP_OK);
    MOD_CHECK_EQ(v, 3);

    mods_input_key(0xd0, 0, true);
    mods_input_key(0xd0, 0, false); // DOWN
    MOD_CHECK_EQ(mods_page_cursor(), 1u);
    mods_input_key(0x1c, 0, true);
    mods_input_key(0x1c, 0, false); // RETURN
    MOD_CHECK_EQ(mods_settings_get(MODS_OWNER_FIRST_MOD, "shadows", &v), POP_OK);
    MOD_CHECK_EQ(v, 0);

    // Every key the page uses is consumed while it is open, so the game does
    // not act on the same press.
    MOD_CHECK(mods_input_key(0xd0, 0, true));
    mods_input_key(0xd0, 0, false);
    mods_input_key(0x01, 0, true);
    mods_input_key(0x01, 0, false); // ESCAPE
    MOD_CHECK(!mods_page_visible());
    // Closed, the same key is the game's again.
    MOD_CHECK(!mods_input_key(0xd0, 0, true));
    mods_input_key(0xd0, 0, false);
    teardown();
}

MOD_TEST_SUITE(page_activates_a_menu_entry) {
    setup();
    static int g_activated = 0;
    g_activated = 0;
    PopModApi &api = g_a; // the same context the page filters by
    mods_fill_host_api(&api);
    MOD_CHECK_EQ(api.register_menu_item(
                     &api, "options", "Do the thing",
                     [](const PopModApi *, void *) { ++g_activated; }, nullptr),
                 POP_OK);

    MOD_CHECK_EQ(mods_page_open("a.mod"), POP_OK);
    // The menu entry is a row on the page, listed before the settings.
    MOD_CHECK_EQ(mods_page_line_count(), 3u);
    MOD_CHECK(std::string(mods_page_line(0)).find("Do the thing") != std::string::npos);
    // RETURN on it runs the mod's callback - the route from a host keypress to
    // a registered menu item, which is what makes register_menu_item useful.
    MOD_CHECK_EQ(mods_page_cursor(), 0u);
    mods_input_key(0x1c, 0, true);
    mods_input_key(0x1c, 0, false);
    MOD_CHECK_EQ(g_activated, 1);
    // And RETURN on a setting row still edits rather than activating anything.
    mods_input_key(0xd0, 0, true);
    mods_input_key(0xd0, 0, false);
    mods_input_key(0x1c, 0, true);
    mods_input_key(0x1c, 0, false);
    MOD_CHECK_EQ(g_activated, 1);
    teardown();
}

MOD_TEST_SUITE(page_edits_clamp_at_the_int64_bounds) {
    setup();
    // T4's settings are 64-bit and nothing stops a mod declaring the whole
    // range, so the step that would leave it is the one that must not be
    // taken: signed overflow is undefined, not merely a wrong number.
    const int64_t lo = std::numeric_limits<int64_t>::min();
    const int64_t hi = std::numeric_limits<int64_t>::max();
    mods_settings_declare(MODS_OWNER_FIRST_MOD, "a.mod", "huge", "Huge", POP_SETTING_INT, hi, lo,
                          hi);
    // Two degenerate ranges, where the only value allowed is the bound itself
    // and the bound is the end of the type. A guard that computes `max - step`
    // to decide whether to step overflows on these before it decides anything.
    mods_settings_declare(MODS_OWNER_FIRST_MOD, "a.mod", "floor", "Floor", POP_SETTING_INT, lo, lo,
                          lo);
    mods_settings_declare(MODS_OWNER_FIRST_MOD, "a.mod", "ceil", "Ceil", POP_SETTING_INT, hi, hi,
                          hi);
    MOD_CHECK_EQ(mods_page_open("a.mod"), POP_OK);
    MOD_CHECK_EQ(mods_page_line_count(), 5u);
    // Down to it, then push against the top.
    mods_input_key(0xd0, 0, true);
    mods_input_key(0xd0, 0, false);
    mods_input_key(0xd0, 0, true);
    mods_input_key(0xd0, 0, false);
    MOD_CHECK_EQ(mods_page_cursor(), 2u);
    int64_t v = 0;
    mods_input_key(0xcd, 0, true);
    mods_input_key(0xcd, 0, false); // RIGHT
    MOD_CHECK_EQ(mods_settings_get(MODS_OWNER_FIRST_MOD, "huge", &v), POP_OK);
    MOD_CHECK(v == hi);
    // And against the bottom.
    MOD_CHECK_EQ(mods_settings_set(MODS_OWNER_FIRST_MOD, "huge", lo), POP_OK);
    mods_input_key(0xcb, 0, true);
    mods_input_key(0xcb, 0, false); // LEFT
    MOD_CHECK_EQ(mods_settings_get(MODS_OWNER_FIRST_MOD, "huge", &v), POP_OK);
    MOD_CHECK(v == lo);
    // One step in from each end still moves, so the guard is a bound and not
    // a freeze.
    MOD_CHECK_EQ(mods_settings_set(MODS_OWNER_FIRST_MOD, "huge", lo + 1), POP_OK);
    mods_input_key(0xcb, 0, true);
    mods_input_key(0xcb, 0, false);
    MOD_CHECK_EQ(mods_settings_get(MODS_OWNER_FIRST_MOD, "huge", &v), POP_OK);
    MOD_CHECK(v == lo);
    MOD_CHECK_EQ(mods_settings_set(MODS_OWNER_FIRST_MOD, "huge", hi - 1), POP_OK);
    mods_input_key(0xcd, 0, true);
    mods_input_key(0xcd, 0, false);
    MOD_CHECK_EQ(mods_settings_get(MODS_OWNER_FIRST_MOD, "huge", &v), POP_OK);
    MOD_CHECK(v == hi);

    // min == max == INT64_MIN, pushed up: the only legal value is the one it
    // already has, and reaching for the next one must not compute it.
    mods_input_key(0xd0, 0, true);
    mods_input_key(0xd0, 0, false);
    MOD_CHECK_EQ(mods_page_cursor(), 3u);
    mods_input_key(0xcd, 0, true);
    mods_input_key(0xcd, 0, false); // RIGHT
    MOD_CHECK_EQ(mods_settings_get(MODS_OWNER_FIRST_MOD, "floor", &v), POP_OK);
    MOD_CHECK(v == lo);
    mods_input_key(0xcb, 0, true);
    mods_input_key(0xcb, 0, false); // LEFT
    MOD_CHECK_EQ(mods_settings_get(MODS_OWNER_FIRST_MOD, "floor", &v), POP_OK);
    MOD_CHECK(v == lo);

    // min == max == INT64_MAX, pushed down.
    mods_input_key(0xd0, 0, true);
    mods_input_key(0xd0, 0, false);
    MOD_CHECK_EQ(mods_page_cursor(), 4u);
    mods_input_key(0xcb, 0, true);
    mods_input_key(0xcb, 0, false); // LEFT
    MOD_CHECK_EQ(mods_settings_get(MODS_OWNER_FIRST_MOD, "ceil", &v), POP_OK);
    MOD_CHECK(v == hi);
    mods_input_key(0xcd, 0, true);
    mods_input_key(0xcd, 0, false); // RIGHT
    MOD_CHECK_EQ(mods_settings_get(MODS_OWNER_FIRST_MOD, "ceil", &v), POP_OK);
    MOD_CHECK(v == hi);
    teardown();
}

MOD_TEST_SUITE(page_toggles_on_its_reserved_key) {
    setup();
    MOD_CHECK(!mods_page_visible());
    MOD_CHECK(mods_input_key(0x44, 0x79, true)); // F10, consumed
    mods_input_key(0x44, 0x79, false);
    MOD_CHECK(mods_page_visible());
    // Three mod settings, the controls' seven rows and either all nine
    // display rows or only the three host controls when no symbols are available.
    MOD_CHECK_EQ(mods_page_line_count(), mods_symbols_count() ? 19u : 13u);
    MOD_CHECK(mods_input_key(0x44, 0x79, true));
    mods_input_key(0x44, 0x79, false);
    MOD_CHECK(!mods_page_visible());
    teardown();
}

MOD_TEST_SUITE(page_shows_only_the_rows_the_game_lists) {
    // game.toml [settings] rows = ["window", "performance_overlay", "controls"]
    mods_settings_rows_for_test(1u << DISPLAY_WINDOW | 1u << DISPLAY_OVERLAY |
                                1u << DISPLAY_CONTROLS_BIT);
    setup();
    mods_page_open(nullptr);
    // Three mod settings, Display, Performance overlay and the controls' seven.
    MOD_CHECK_EQ(mods_page_line_count(), 12u);
    MOD_CHECK(std::string(mods_page_line(0)).find("Display:") == 0);
    MOD_CHECK(std::string(mods_page_line(1)).find("Performance overlay:") == 0);
    MOD_CHECK(std::string(mods_page_line(2)).find("Controls") == 0);
    // An unlisted row cannot be set and keeps its neutral value.
    MOD_CHECK_EQ(mods_display_set(DISPLAY_UI_SCALE, 3), POP_E_STATE);
    MOD_CHECK_EQ(mods_display_set(DISPLAY_RENDERING, 1), POP_E_STATE);
    MOD_CHECK_EQ(mods_display_scale(), 0);
    MOD_CHECK_EQ(mods_display_classic(), 0);
    mods_page_close();
    teardown();
    // Without the controls rows.
    mods_settings_rows_for_test(1u << DISPLAY_WINDOW | 1u << DISPLAY_OVERLAY);
    setup();
    mods_page_open(nullptr);
    MOD_CHECK_EQ(mods_page_line_count(), 5u);
    mods_page_close();
    teardown();
    mods_settings_rows_for_test((2u << DISPLAY_CONTROLS_BIT) - 1);
}

MOD_TEST_SUITE(textures_row_says_what_the_pack_holds) {
    mods_display_reset();
    MOD_CHECK(mods_display_line(DISPLAY_TEXTURES) == "Textures: HD pack");
    mods_display_texture_pack(0, 1);
    MOD_CHECK(mods_display_line(DISPLAY_TEXTURES) == "Terrain detail: on");
    mods_display_texture_pack(12, 1);
    MOD_CHECK(mods_display_line(DISPLAY_TEXTURES) == "Textures: HD pack");
    mods_display_texture_pack(0, 0);
    MOD_CHECK(mods_display_line(DISPLAY_TEXTURES) == "Textures: original (no texture pack)");
    mods_display_reset();
}

MOD_TEST_SUITE(page_draws_into_host_storage_only) {
    // The guest arena, mapped before anything asks for an address inside it.
    // Every suite that touches guest memory does this for itself; without it
    // gm_ptr is an offset from a pointer nothing has set.
    mem_init();
    setup();
    // A real guest surface: memory inside the guest's address space, reached
    // through gm_ptr exactly as the DirectDraw shim reaches a surface's
    // pixels. The presenter copies it and draws on the copy, which is the
    // whole contract - the pointer a presenter is handed points at the picture
    // the game is still reading, and this proves the page never goes there.
    const uint32_t kBytes = 320 * 200;
    uint32_t guest_addr = 0;
    MOD_CHECK_EQ(mods_guest_alloc(MODS_OWNER_FIRST_MOD, kBytes, &guest_addr), POP_OK);
    MOD_CHECK(guest_addr != 0);
    uint8_t *guest_pixels = gm_ptr(guest_addr);
    for (uint32_t i = 0; i < kBytes; ++i)
        guest_pixels[i] = (uint8_t)(3 + (i % 5));
    const std::vector<uint8_t> before(guest_pixels, guest_pixels + kBytes);

    std::vector<uint8_t> frame(320 * 200, 7);
    std::vector<uint32_t> palette(256);
    for (uint32_t i = 0; i < 256; ++i)
        palette[i] = (i << 16) | (i << 8) | i;
    mods_page_draw(frame.data(), 320, 200, 8, 320, palette.data());
    // Hidden: nothing is drawn.
    for (uint8_t px : frame)
        MOD_CHECK_EQ(px, 7);

    mods_page_open(nullptr);
    // The presenter's own copy, taken from the guest's surface the way a
    // presenter takes it, and drawn on.
    frame.assign(guest_pixels, guest_pixels + kBytes);
    mods_page_draw(frame.data(), 320, 200, 8, 320, palette.data());
    size_t changed = 0;
    for (uint32_t i = 0; i < kBytes; ++i)
        if (frame[i] != before[i])
            ++changed;
    MOD_CHECK(changed > 100); // a panel and legible text
    // And the guest's own surface is byte for byte what it was.
    MOD_CHECK(memcmp(guest_pixels, before.data(), kBytes) == 0);
    MOD_CHECK_EQ(mods_guest_free(MODS_OWNER_FIRST_MOD, guest_addr), POP_OK);
    frame.assign(320 * 200, 7);
    // It stays inside the frame: the last row is only touched if the page is
    // that tall, and nothing beyond `pitch` is written.
    mods_page_draw(frame.data(), 320, 200, 8, 320, palette.data());
    std::vector<uint8_t> guard(320 * 200, 0xee);
    mods_page_draw(guard.data(), 320, 200, 8, 320, palette.data());
    MOD_CHECK_EQ(guard[320 * 200 - 1], 0xee);

    // 16 bpp is the other mode a host presents.
    std::vector<uint16_t> frame16(320 * 200, 0x1111);
    mods_page_draw(frame16.data(), 320, 200, 16, 640, nullptr);
    size_t changed16 = 0;
    for (uint16_t px : frame16)
        if (px != 0x1111)
            ++changed16;
    MOD_CHECK(changed16 > 100);
    teardown();
}
