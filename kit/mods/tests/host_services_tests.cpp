// host_services_tests.cpp - main-thread rules, the menu registry and the
// content-hashed texture provider.
#include "mods_tests.h"
#include "../../platform/os.h"
#include "../mods_internal.h"
#include <string>
#include <thread>

static const PopModApi *test_provider(uint32_t owner);

namespace {
PopModApi g_api;
int g_opened = 0;

void setup() {
    mods_host_services_remove_all(MODS_OWNER_FIRST_MOD);
    mods_settings_reset();
    mods_host_set_main_thread();
    memset(&g_api, 0, sizeof g_api);
    g_api.version = POP_MOD_API_VERSION;
    g_api.size = (uint32_t)sizeof(PopModApi);
    g_api.mod_index = MODS_OWNER_FIRST_MOD;
    g_api.mod_id = "test.host";
    mods_set_context_provider(test_provider);
    mods_fill_host_api(&g_api);
    mods_settings_declare(MODS_OWNER_FIRST_MOD, "test.host", "ui_scale", "UI scale",
                          POP_SETTING_INT, 2, 1, 4);
    mods_settings_declare(MODS_OWNER_FIRST_MOD, "test.host", "shadows", "Shadows", POP_SETTING_BOOL,
                          1, 0, 1);
}
} // namespace

static const PopModApi *test_provider(uint32_t owner) {
    return owner == MODS_OWNER_FIRST_MOD ? &g_api : nullptr;
}

MOD_TEST_SUITE(host_services_are_main_thread_only) {
    setup();
    MOD_CHECK_EQ(
        g_api.register_menu_item(
            &g_api, "options", "Test", [](const PopModApi *, void *) { ++g_opened; }, nullptr),
        POP_OK);

    PopModStatus off = POP_OK, off2 = POP_OK, off3 = POP_OK;
    PopSettingDesc d{(uint32_t)sizeof(PopSettingDesc), "extra", "Extra", POP_SETTING_INT, 1, 0, 5};
    std::thread([&] {
        off = g_api.register_menu_item(&g_api, "options", "Other", nullptr, nullptr);
        off2 = g_api.register_setting(&g_api, &d);
        off3 = g_api.texture_override_provider(&g_api, nullptr, nullptr);
    }).join();
    MOD_CHECK_EQ(off, POP_E_WRONG_THREAD);
    MOD_CHECK_EQ(off2, POP_E_WRONG_THREAD);
    MOD_CHECK_EQ(off3, POP_E_WRONG_THREAD);
    MOD_CHECK_EQ(g_api.register_setting(&g_api, &d), POP_OK);
    // A dynamically registered setting keeps its owner's id, so it is saved
    // and reloaded under that mod rather than under an empty name.
    int64_t v = 0;
    MOD_CHECK_EQ(mods_settings_get(MODS_OWNER_FIRST_MOD, "extra", &v), POP_OK);
    uint32_t owner = 0;
    const char *mod_id = nullptr;
    for (uint32_t i = 0; i < mods_settings_entry_count(); ++i) {
        const char *key = nullptr, *label = nullptr;
        int32_t kind = 0;
        int64_t value = 0, mn = 0, mx = 0;
        mods_settings_entry(i, &owner, &mod_id, &key, &label, &kind, &value, &mn, &mx);
        if (std::string(key) == "extra")
            MOD_CHECK_STR(mod_id, "test.host");
    }
}

MOD_TEST_SUITE(menu_entry_opens_the_page_through_the_public_api) {
    setup();
    MOD_CHECK_EQ(g_api.register_menu_item(
                     &g_api, "options", "Test mod",
                     [](const PopModApi *api, void *) {
                         // The public contract: a mod never calls an internal function.
                         MOD_CHECK_EQ(api->open_settings_page(api, api->mod_id), POP_OK);
                     },
                     nullptr),
                 POP_OK);
    MOD_CHECK_EQ(mods_menu_entry_count(), 1u);
    uint32_t owner = 0;
    const char *path = nullptr, *label = nullptr;
    MOD_CHECK(mods_menu_entry(0, &owner, &path, &label));
    MOD_CHECK_STR(path, "options");
    MOD_CHECK_STR(label, "Test mod");

    MOD_CHECK(!mods_page_visible());
    MOD_CHECK_EQ(mods_menu_activate(0), POP_OK);
    MOD_CHECK(mods_page_visible());
    // Three rows: this mod's menu entry, which the page lists first because a
    // person registered it to be chosen, then its two settings.
    MOD_CHECK_EQ(mods_page_line_count(), 3u);
    MOD_CHECK(std::string(mods_page_line(0)).find("Test mod") != std::string::npos);
    MOD_CHECK(std::string(mods_page_line(1)).find("UI scale") != std::string::npos);
    mods_page_close();
}

MOD_TEST_SUITE(opening_the_page_is_a_host_service) {
    setup();
    mods_page_close();
    // The page is host state the presenter reads while it draws, so opening it
    // off the main thread is refused like the other three host services, and
    // refused means nothing moved.
    const uint32_t cursor_before = mods_page_cursor();
    PopModStatus off = POP_OK;
    std::thread([&] { off = g_api.open_settings_page(&g_api, g_api.mod_id); }).join();
    MOD_CHECK_EQ(off, POP_E_WRONG_THREAD);
    // Unchanged: still hidden, and the cursor is where it was before the call.
    // The row count is not part of "unchanged" - the page builds its rows from
    // the current registries whether it is showing them or not.
    MOD_CHECK(!mods_page_visible());
    MOD_CHECK_EQ(mods_page_cursor(), cursor_before);
    // And on the main thread it opens, so the refusal is about the thread and
    // not about the call.
    MOD_CHECK_EQ(g_api.open_settings_page(&g_api, g_api.mod_id), POP_OK);
    MOD_CHECK(mods_page_visible());
    mods_page_close();
}

MOD_TEST_SUITE(a_provider_may_register_another_while_it_runs) {
    setup();
    static int g_second_calls = 0;
    g_second_calls = 0;
    // The first provider registers a second one and then declines. Dispatching
    // from the live vector would have reallocated it under the loop.
    MOD_CHECK_EQ(g_api.texture_override_provider(
                     &g_api,
                     [](const PopModApi *api, uint64_t, int32_t, int32_t, int32_t, uint8_t **,
                        uint32_t *, void *) -> int32_t {
                         api->texture_override_provider(
                             api,
                             [](const PopModApi *, uint64_t, int32_t, int32_t, int32_t, uint8_t **,
                                uint32_t *, void *) -> int32_t {
                                 ++g_second_calls;
                                 return 0;
                             },
                             nullptr);
                         return 0;
                     },
                     nullptr),
                 POP_OK);

    uint8_t *pixels = nullptr;
    uint32_t bytes = 0;
    MOD_CHECK_EQ(mods_texture_override(7, 4, 4, 0, &pixels, &bytes), 0);
    // The one registered mid-pass is not consulted in that pass, because the
    // pass is walking the list as it was when it started.
    MOD_CHECK_EQ(g_second_calls, 0);
    // It is registered, though, and the next upload asks it.
    MOD_CHECK_EQ(mods_texture_override(7, 4, 4, 0, &pixels, &bytes), 0);
    MOD_CHECK(g_second_calls >= 1);
    mods_host_services_remove_all(MODS_OWNER_FIRST_MOD);
}

MOD_TEST_SUITE(a_provider_may_remove_providers_while_it_runs) {
    setup();
    static int g_later_calls = 0;
    g_later_calls = 0;
    // The first provider takes every provider off the registry, its own
    // included, and declines. The second must not be called after that: its
    // callback and its user pointer belong to a mod that has just been told
    // it is gone, and a snapshot taken before the pass would still be holding
    // them.
    MOD_CHECK_EQ(g_api.texture_override_provider(
                     &g_api,
                     [](const PopModApi *, uint64_t, int32_t, int32_t, int32_t, uint8_t **,
                        uint32_t *, void *) -> int32_t {
                         mods_host_services_remove_all(MODS_OWNER_FIRST_MOD);
                         return 0;
                     },
                     nullptr),
                 POP_OK);
    MOD_CHECK_EQ(g_api.texture_override_provider(
                     &g_api,
                     [](const PopModApi *, uint64_t, int32_t, int32_t, int32_t, uint8_t **,
                        uint32_t *, void *) -> int32_t {
                         ++g_later_calls;
                         return 0;
                     },
                     nullptr),
                 POP_OK);

    uint8_t *pixels = nullptr;
    uint32_t bytes = 0;
    MOD_CHECK_EQ(mods_texture_override(11, 4, 4, 0, &pixels, &bytes), 0);
    MOD_CHECK_EQ(g_later_calls, 0);
    // And the removal really happened once the pass was over, rather than
    // being lost with it.
    MOD_CHECK_EQ(mods_texture_override(11, 4, 4, 0, &pixels, &bytes), 0);
    MOD_CHECK_EQ(g_later_calls, 0);
}

MOD_TEST_SUITE(texture_provider_is_content_keyed) {
    setup();
    uint8_t *pixels = nullptr;
    uint32_t bytes = 0;
    MOD_CHECK_EQ(mods_texture_override(0x1234u, 64, 64, 0, &pixels, &bytes), 0);

    static uint8_t rgba[4 * 4 * 4];
    memset(rgba, 0x7f, sizeof rgba);
    MOD_CHECK_EQ(g_api.texture_override_provider(
                     &g_api,
                     [](const PopModApi *api, uint64_t hash, int32_t w, int32_t h, int32_t,
                        uint8_t **out, uint32_t *out_bytes, void *) -> int32_t {
                         MOD_CHECK(api != nullptr);
                         if (hash != 0xabcdef0123456789ull)
                             return 0;
                         *out = rgba;
                         *out_bytes = (uint32_t)(w * h * 4);
                         return 1;
                     },
                     nullptr),
                 POP_OK);
    MOD_CHECK_EQ(mods_texture_override(0xabcdef0123456789ull, 4, 4, 0, &pixels, &bytes), 1);
    MOD_CHECK(pixels == rgba);
    MOD_CHECK_EQ(bytes, 64u);
    MOD_CHECK_EQ(mods_texture_override(0x9999u, 4, 4, 0, &pixels, &bytes), 0);

    // A provider that returns too few bytes is refused rather than trusted.
    mods_host_services_remove_all(MODS_OWNER_FIRST_MOD);
    MOD_CHECK_EQ(g_api.texture_override_provider(
                     &g_api,
                     [](const PopModApi *, uint64_t, int32_t, int32_t, int32_t, uint8_t **out,
                        uint32_t *out_bytes, void *) -> int32_t {
                         *out = rgba;
                         *out_bytes = 4;
                         return 1;
                     },
                     nullptr),
                 POP_OK);
    MOD_CHECK_EQ(mods_texture_override(1, 4, 4, 0, &pixels, &bytes), 0);

    mods_host_services_remove_all(MODS_OWNER_FIRST_MOD);
    MOD_CHECK_EQ(mods_menu_entry_count(), 0u);
    MOD_CHECK_EQ(mods_texture_override(0xabcdef0123456789ull, 4, 4, 0, &pixels, &bytes), 0);
}

#include "../display_settings.h"
#include "../../dx/host_api.h"
#include <cmath>
#include <fstream>
namespace {
int anchor_calls = 0, last_h = 0, last_v = 0;
uint64_t last_anchor = 0;
int drawable_w = 0, drawable_h = 0;
int mode_offers = 0, offered_w = 0, offered_h = 0;
} // namespace
extern "C" int host_display_offer_mode(int w, int h, int) {
    ++mode_offers;
    offered_w = w;
    offered_h = h;
    return 1;
}
extern "C" int32_t host_display_anchor(uint64_t id, int8_t h, int8_t v, int) {
    ++anchor_calls;
    last_anchor = id;
    last_h = h;
    last_v = v;
    return POP_OK;
}
extern "C" float host_display_aspect() {
    return drawable_h ? float(drawable_w) / drawable_h : 4.0f / 3.0f;
}
MOD_TEST_SUITE(display_api_thread_and_aspect) {
    setup();
    drawable_w = 3840;
    drawable_h = 2160;
    MOD_CHECK(std::fabs(g_api.host_aspect(&g_api) - 16.0f / 9.0f) < 0.00001f);
    drawable_w = drawable_h = 0;
    MOD_CHECK(std::fabs(g_api.host_aspect(&g_api) - 4.0f / 3.0f) < 0.00001f);
    PopModStatus set = POP_OK, clear = POP_OK;
    const int before = anchor_calls;
    std::thread([&] {
        set = g_api.set_anchor(&g_api, 42, 1, -1);
        clear = g_api.clear_anchor(&g_api, 42);
    }).join();
    MOD_CHECK_EQ(set, POP_E_WRONG_THREAD);
    MOD_CHECK_EQ(clear, POP_E_WRONG_THREAD);
    MOD_CHECK_EQ(anchor_calls, before);
    MOD_CHECK_EQ(g_api.set_anchor(&g_api, 42, 1, -1), POP_OK);
    MOD_CHECK_EQ(last_anchor, 42u);
    MOD_CHECK_EQ(last_h, 1);
    MOD_CHECK_EQ(last_v, -1);
    MOD_CHECK_EQ(g_api.set_anchor(&g_api, 42, 2, 0), POP_E_RANGE);
    MOD_CHECK_EQ(g_api.clear_anchor(&g_api, 42), POP_OK);
    uint32_t epoch = 99;
    MOD_CHECK_EQ(g_api.display_transition(&g_api, &epoch), POP_OK);
    MOD_CHECK_EQ(epoch, 0u);
    MOD_CHECK_EQ(g_api.display_transition(&g_api, nullptr), POP_E_INVAL);
    MOD_CHECK_EQ(g_api.ui_elements(&g_api, nullptr, 0), 0u);
}
MOD_TEST_SUITE(display_settings_apply_at_next_frame_without_epoch_change) {
    setup();
    mods_display_init();
    mods_display_transition(10, HOST_SCREEN_GAMEPLAY);
    MOD_CHECK_EQ(mods_display_set(DISPLAY_RENDERING, 1), POP_OK);
    MOD_CHECK_EQ(mods_display_set(DISPLAY_WIDE, 0), POP_OK);
    MOD_CHECK(mods_display_pending(DISPLAY_RENDERING));
    MOD_CHECK(mods_display_pending(DISPLAY_WIDE));
    MOD_CHECK_EQ(mods_display_classic(), 0);
    MOD_CHECK_EQ(mods_display_wide(), 1);
    MOD_CHECK(mods_display_line(DISPLAY_RENDERING).find("pending") == std::string::npos);
    mods_display_transition(10, HOST_SCREEN_GAMEPLAY);
    MOD_CHECK_EQ(mods_display_classic(), 1);
    mods_display_transition(11, HOST_SCREEN_GAMEPLAY);
    MOD_CHECK_EQ(mods_display_classic(), 1);
    MOD_CHECK_EQ(mods_display_wide(), 0);
    MOD_CHECK(!mods_display_pending(DISPLAY_RENDERING));
    g_api.mod_id = "core.display";
    mods_display_transition(12, HOST_SCREEN_MENU);
    MOD_CHECK_EQ(mods_display_set(DISPLAY_RENDERING, 0), POP_OK);
    mods_display_transition(12, HOST_SCREEN_MENU);
    drawable_w = 3840;
    drawable_h = 2160;
    MOD_CHECK(std::fabs(g_api.host_aspect(&g_api) - 4.f / 3.f) < 0.00001f);
    g_api.mod_id = "other.mod";
    MOD_CHECK(std::fabs(g_api.host_aspect(&g_api) - 16.f / 9.f) < 0.00001f);
    g_api.mod_id = "core.display";
    MOD_CHECK_EQ(mods_display_set(DISPLAY_WIDE, 1), POP_OK);
    mods_display_transition(12, HOST_SCREEN_MENU);
    MOD_CHECK(std::fabs(g_api.host_aspect(&g_api) - 16.f / 9.f) < 0.00001f);
    drawable_w = drawable_h = 0;
    MOD_CHECK_EQ(mods_display_classic(), 0);
    MOD_CHECK_EQ(mods_display_wide(), 1);
    MOD_CHECK(!mods_display_pending(DISPLAY_RENDERING));
    MOD_CHECK_EQ(mods_display_set(DISPLAY_UI_SCALE, 4), POP_OK);
    MOD_CHECK_EQ(mods_display_scale(), 4);
    MOD_CHECK_EQ(mods_display_set(DISPLAY_UI_SCALE, 5), POP_E_RANGE);
    mods_display_reset();
}
MOD_TEST_SUITE(enhanced_preserves_selected_resolution) {
    setup();
    MOD_CHECK(mods_display_load_modes("tools/recomp/baseline/classic-modes.json"));
    mode_offers = 0;
    mods_display_init();
    MOD_CHECK_EQ(mode_offers, 0); // startup keeps the saved game mode
    MOD_CHECK_EQ(mods_display_set(DISPLAY_CLASSIC_MODE, 1), POP_OK);
    MOD_CHECK_EQ(mods_display_set(DISPLAY_RENDERING, 1), POP_OK);
    MOD_CHECK_EQ(mode_offers, 1);
    MOD_CHECK_EQ(offered_w, 800);
    MOD_CHECK_EQ(offered_h, 600);
    MOD_CHECK_EQ(mods_display_set(DISPLAY_RENDERING, 0), POP_OK);
    mods_display_transition(12, HOST_SCREEN_MENU);
    MOD_CHECK_EQ(mode_offers, 1); // no 640x480 replacement on returning to Enhanced
    mods_display_reset();
}
MOD_TEST_SUITE(display_page_and_passing_mode_list) {
    setup();
    char path[512];
    snprintf(path, sizeof path, "%s/pop-display-modes-XXXXXX", os_temp_dir());
    int fd = os_mkstemp(path);
    MOD_CHECK(fd >= 0);
    if (fd < 0)
        return;
    os_fd_close(fd);
    {
        std::ofstream f(path);
        f << R"({"modes":[{"w":640,"h":480,"bpp":16,"passed":true},{"w":800,"h":600,"bpp":16,"passed":false},{"width":1920,"height":1080,"bpp":16,"status":"pass"}]})";
    }
    MOD_CHECK(mods_display_load_modes(path));
    os_unlink(path);
    mods_page_init();
    mods_page_open(nullptr);
    MOD_CHECK(std::string(mods_page_line(0)).find("Rendering: Enhanced") != std::string::npos);
    MOD_CHECK(std::string(mods_page_line(1)).find("UI scale: auto") != std::string::npos);
    MOD_CHECK(std::string(mods_page_line(2)).find("Wide view: on") != std::string::npos);
    MOD_CHECK(std::string(mods_page_line(3)).find("Display: windowed") != std::string::npos);
    MOD_CHECK(std::string(mods_page_line(4)).find("Resolution: 640x480") != std::string::npos);
    MOD_CHECK_EQ(mods_display_set(DISPLAY_CLASSIC_MODE, 2),
                 POP_E_RANGE); // failing 800x600 excluded
    mods_display_transition(30, HOST_SCREEN_GAMEPLAY);
    mods_input_key(0xcd, 0, true);
    mods_input_key(0xcd, 0, false);
    MOD_CHECK(mods_display_pending(DISPLAY_RENDERING));
    mods_display_transition(31, HOST_SCREEN_GAMEPLAY);
    MOD_CHECK(std::string(mods_page_line(0)).find("pending until next level") == std::string::npos);
    mods_page_close();
    mods_input_remove_all(MODS_OWNER_RUNTIME);
    mods_display_reset();
}

MOD_TEST_SUITE(display_pacing_overlay_and_domain) {
    setup();
    mods_display_live_defaults();
    mods_page_init();
    MOD_CHECK_EQ(mods_display_fps(), 60);
    MOD_CHECK_EQ(mods_display_overlay(), 2);
    mods_display_transition(10, HOST_SCREEN_GAMEPLAY);
    for (int choice = 0; choice < 4; ++choice) {
        const int rates[] = {0, 40, 60, 120};
        MOD_CHECK_EQ(mods_display_set(DISPLAY_FPS, choice), POP_OK);
        MOD_CHECK_EQ(mods_display_fps(), rates[choice]);
        MOD_CHECK(!mods_display_pending(DISPLAY_FPS));
    }
    MOD_CHECK_EQ(mods_display_set(DISPLAY_FPS, 4), POP_E_RANGE);
    MOD_CHECK_EQ(mods_display_fps(), 120);
    MOD_CHECK(mods_input_key(0x57, 0, true));
    MOD_CHECK_EQ(mods_display_overlay(), 0);
    MOD_CHECK(mods_input_key(0x57, 0, false));
    MOD_CHECK_EQ(mods_display_overlay(), 0);
    mods_input_key(0x57, 0, true);
    mods_input_key(0x57, 0, false);
    MOD_CHECK_EQ(mods_display_overlay(), 1);
    mods_display_scene_domain(852, 480);
    MOD_CHECK_EQ(mods_display_scene_width(640, 480), 852);
    MOD_CHECK_EQ(mods_display_scene_width(800, 600), 800); // mode change invalidates old height
    mods_display_transition(11, HOST_SCREEN_MENU);
    MOD_CHECK_EQ(mods_display_set(DISPLAY_RENDERING, 1), POP_OK);
    mods_display_transition(11, HOST_SCREEN_MENU);
    MOD_CHECK_EQ(mods_display_scene_width(640, 480), 640);
    drawable_w = 1920;
    drawable_h = 1080;
    MOD_CHECK(std::fabs(g_api.host_aspect(&g_api) - 4.f / 3.f) < 0.00001f);
    drawable_w = drawable_h = 0;
    mods_page_close();
    mods_input_remove_all(MODS_OWNER_RUNTIME);
    mods_display_reset();
}

MOD_TEST_SUITE(higher_resolution_provider_validates_layout_and_keeps_legacy_api) {
    setup();
    static uint8_t data[144]{};
    static PopTextureReplacement replacement;
    replacement = {sizeof(replacement), 4, 4, 36, data, sizeof(data)};
    auto cb = +[](const PopModApi *, uint64_t, int32_t, int32_t, int32_t,
                  PopTextureReplacement *out, void *) -> int32_t {
        *out = replacement;
        return 1;
    };
    PopModStatus off = POP_OK;
    std::thread([&] { off = g_api.texture_override_provider_ex(&g_api, cb, nullptr); }).join();
    MOD_CHECK_EQ(off, POP_E_WRONG_THREAD);
    MOD_CHECK_EQ(g_api.texture_override_provider_ex(&g_api, cb, nullptr), POP_OK);
    PopTextureReplacement out{};
    MOD_CHECK_EQ(mods_texture_override_ex(9, 2, 2, 16, &out), 1);
    MOD_CHECK_EQ(out.width, 4);
    MOD_CHECK_EQ(out.pitch, 36);
    MOD_CHECK(out.pixels == data);
    uint8_t *old = nullptr;
    uint32_t bytes = 0;
    MOD_CHECK_EQ(mods_texture_override(9, 2, 2, 16, &old, &bytes), 0);
    replacement.bytes = 143;
    MOD_CHECK_EQ(mods_texture_override_ex(9, 2, 2, 16, &out), 0);
    replacement.bytes = 144;
    replacement.pitch = 15;
    MOD_CHECK_EQ(mods_texture_override_ex(9, 2, 2, 16, &out), 0);
    replacement.pitch = 36;
    replacement.width = 3;
    MOD_CHECK_EQ(mods_texture_override_ex(9, 2, 2, 16, &out), 0);
    replacement.width = replacement.height = 65536;
    MOD_CHECK_EQ(mods_texture_override_ex(9, 2, 2, 16, &out), 0);
    replacement = {sizeof(replacement), 4, 4, 36, data, 144};
    mods_host_services_remove_all(MODS_OWNER_FIRST_MOD);
    MOD_CHECK_EQ(mods_texture_override_ex(9, 2, 2, 16, &out), 0);
}

MOD_TEST_SUITE(hd_controls_persist_across_restart) {
    char dir[512];
    snprintf(dir, sizeof dir, "%s/pop-hd-settings-XXXXXX", os_temp_dir());
    const bool made = os_mkdtemp(dir) == 0;
    MOD_CHECK(made);
    if (!made)
        return;
    const std::string previous_profile = mods_overlay_profile_dir();
    mods_overlay_set_profile_dir(dir);
    setup();
    const std::string path = mods_settings_path();
    MOD_CHECK(mods_settings_load(path.c_str()));
    mods_display_init();
    MOD_CHECK_EQ(mods_display_textures(), 1);
    MOD_CHECK_EQ(mods_display_filtering(), 3);
    mods_display_transition(100, HOST_SCREEN_GAMEPLAY);
    MOD_CHECK_EQ(mods_display_set(DISPLAY_TEXTURES, 0), POP_OK);
    MOD_CHECK_EQ(mods_display_set(DISPLAY_FILTERING, 4), POP_OK);
    MOD_CHECK_EQ(mods_display_textures(), 0);
    MOD_CHECK_EQ(mods_display_filtering(), 4);
    MOD_CHECK_EQ(mods_display_set(DISPLAY_FILTERING, 5), POP_E_RANGE);
    MOD_CHECK(mods_settings_save());
    mods_display_reset();
    mods_settings_reset();
    MOD_CHECK(mods_settings_load(path.c_str()));
    mods_display_init();
    MOD_CHECK_EQ(mods_display_textures(), 0);
    MOD_CHECK_EQ(mods_display_filtering(), 4);
    mods_settings_reset();
    mods_overlay_set_profile_dir(previous_profile.c_str());
    os_unlink(path.c_str());
    os_rmdir(dir);
}
