#include "mods_tests.h"
#include "../mods_internal.h"
#include "../../runtime/loader.h"
#include "../../runtime/memory.h"
#include "../../runtime/win32.h"
#include <filesystem>
#include <fstream>
#include <vector>

namespace {
constexpr uint32_t load_config = 0x49a9d0, write_config = 0x49ad20;
uint32_t now = 1000;
uint32_t clock_ms() {
    return now;
}
void boot(const std::string &profile) {
    sched_set_guest_thread(true);
    mods_hooks_reset();
    mem_init();
    MOD_CHECK(loader_load(nullptr));
    MOD_CHECK(mods_symbols_load(nullptr));
    loader_init_context(loader_context());
    mods_overlay_set_profile_dir(profile.c_str());
    mods_overlay_reset();
    mods_settings_reset();
    MOD_CHECK(mods_settings_load(mods_settings_path()));
    mods_host_set_main_thread();
    wr8(0x89cc14, 'C');
    gm_put_str(0x89cc15, "POP3.CD", 128);
    guest_call(loader_context(), 0x49a940); // real default initialization
}
void frame() {
    now += 300;
    guest_call(loader_context(), 0x49c9f0);
}
void save() {
    wr32(0x89c661, rd32(0x89c661) | 0x40000);
    guest_call(loader_context(), write_config);
}
std::vector<char> bytes(const std::string &path) {
    std::ifstream in(path, std::ios::binary);
    return {std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>()};
}
void modes() {
    wr32(0x5cdc50, 2);
    for (uint32_t i = 0; i < 2; ++i) {
        const uint32_t p = 0x98ea30 + 12 * i;
        wr32(p, i ? 800 : 640);
        wr32(p + 4, i ? 600 : 480);
        wr32(p + 8, 16);
    }
}
uint32_t graphics_controls(int choice) {
    constexpr uint32_t root = 0x1100000, control = 0x1101000, labels = 0x1101800;
    memset(gm_ptr(root), 0, 0x3000);
    wr32(0x5d9e40, root);
    for (uint32_t off : {0x64u, 0x6cu, 0x74u, 0x7cu, 0x84u, 0x5cu}) {
        const uint32_t p = root + 0x100 + off * 8;
        wr32(root + off, p);
        wr32(p + 0x28, root + 0x2000);
    }
    wr32(0x5d46a8, 0); // the resolution label buffer above is already allocated
    wr32(control + 0x2c, labels);
    wr32(control + 0x30, choice);
    wr32(labels, 399);
    wr32(labels + 4, 400);
    wr32(labels + 8, 401);
    wr32(0x89c669, 0); // front-end options; no live Direct3D device required
    return control;
}
} // namespace

MOD_TEST_SUITE(game_settings_resolution_and_quick_defaults_restart) {
    const std::string profile = mod_test_dir("game-settings-graphics");
    boot(profile);
    modes();
    wr8(0x749cf0, 1);
    guest_call(loader_context(), 0x49c570);
    MOD_CHECK_EQ(rd8(0x749cf0), 0); // original enumeration discards 800x600
    MOD_CHECK(mods_game_settings_init());
    wr8(0x749cf0, 1);
    guest_call(loader_context(), 0x49c570);
    MOD_CHECK_EQ(rd8(0x749cf0), 1);
    MOD_CHECK_EQ(rd8(0x984590), 0); // frontend current mode stays separate
    wr8(0x749cf0, 99);
    guest_call(loader_context(), 0x49c570);
    MOD_CHECK_EQ(rd8(0x749cf0), 0); // unavailable selection falls back safely
    save();
    guest_call(loader_context(), load_config);
    for (int choice = 0; choice < 3; ++choice) {
        uint32_t control = graphics_controls(choice);
        guest_call(loader_context(), 0x4c54e0, control); // real bulk preset callback
        MOD_CHECK_EQ(rd8(0x749cf0), choice == 2 ? 1 : 0);
        // A custom option AFTER the preset must survive too: restarting must
        // not simply replay Quick Defaults and erase the user's adjustments.
        wr32(0x895da4, rd32(0x895da4) ^ 0x8000);
        const uint32_t graphics = rd32(0x895da4), audio = rd32(0x895da8);
        host_set_time_source(clock_ms);
        frame();
        host_clear_time_source();
        boot(profile);
        MOD_CHECK(mods_game_settings_init());
        guest_call(loader_context(), load_config);
        modes();
        guest_call(loader_context(), 0x49c570);
        MOD_CHECK_EQ(rd8(0x749cf0), choice == 2 ? 1 : 0);
        control = graphics_controls(0);
        wr32(0x5d46ac, 1);
        guest_call(loader_context(), 0x4c5390, control); // original options initializer
        MOD_CHECK_EQ(rd32(control + 0x30), choice);
        MOD_CHECK_EQ(rd32(0x895da4) & 0x80018000, graphics & 0x80018000);
        MOD_CHECK_EQ(rd32(0x895da8) & 0x4000000, audio & 0x4000000);
    }
    mods_hooks_reset();
    mods_settings_reset();
    mods_overlay_set_profile_dir(nullptr);
    mods_overlay_reset();
}

MOD_TEST_SUITE(game_settings_higher_resolutions) {
    const std::string profile = mod_test_dir("game-settings-higher-modes");
    const uint32_t sizes[][2] = {{640, 480},   {800, 600},   {1024, 768}, {1280, 720},
                                 {1920, 1080}, {2560, 1440}, {3840, 2160}};
    auto enumerate = [&] {
        constexpr uint32_t desc = 0x1100000, device = 0x1101000;
        memset(gm_ptr(device), 0, 0x514);
        wr32(0x5cdc50, 0);
        for (uint32_t i = 0; i < 7; ++i) {
            memset(gm_ptr(desc), 0, 108);
            wr32(desc, 108);
            wr32(desc + 12, sizes[i][0]);
            wr32(desc + 8, sizes[i][1]);
            wr32(desc + 84, 16);
            guest_call(loader_context(), 0x4b0e80, desc, device);
            MOD_CHECK_EQ(rd32(desc + 12), sizes[i][0]); // borrowed descriptor restored
            MOD_CHECK_EQ(rd32(desc + 8), sizes[i][1]);
        }
        guest_call(loader_context(), 0x49c570);
    };
    boot(profile);
    wr8(0x89c66d, 0xa0);
    enumerate();
    MOD_CHECK_EQ(rd8(0x89d15c), 2); // original restriction, despite seven offers
    MOD_CHECK(mods_game_settings_init());
    enumerate();
    MOD_CHECK_EQ(rd8(0x89d15c), 7);
    MOD_CHECK_EQ(rd32(0x5adc61), 6);
    MOD_CHECK_EQ(rd8(0x89c66d), 0xa0); // no persistent flag change
    for (uint32_t i = 0; i < 7; ++i) {
        MOD_CHECK_EQ(rd32(0x89cf1c + i * 12), sizes[i][0]);
        MOD_CHECK_EQ(rd32(0x89cf20 + i * 12), sizes[i][1]);
    }
    wr8(0x749cf0, 6);
    save();
    boot(profile);
    MOD_CHECK(mods_game_settings_init());
    guest_call(loader_context(), load_config);
    enumerate();
    MOD_CHECK_EQ(rd8(0x749cf0), 6);
    MOD_CHECK_EQ(rd8(0x984590), 0);
    wr32(0x5cdc50, 48);
    wr32(0x98ea30 + 48 * 12, 0x12345678);
    guest_call(loader_context(), 0x4b0e80, 0x1100000, 0x1101000);
    MOD_CHECK_EQ(rd32(0x5cdc50), 48);
    MOD_CHECK_EQ(rd32(0x98ea30 + 48 * 12), 0x12345678u);
    MOD_CHECK_EQ(loader_context()->r[R_EAX], 0);
    mods_hooks_reset();
    mods_settings_reset();
    mods_overlay_set_profile_dir(nullptr);
    mods_overlay_reset();
}

MOD_TEST_SUITE(game_settings_camera_scales_without_changing_zoom_preferences) {
    boot(mod_test_dir("game-settings-camera"));
    MOD_CHECK(mods_game_settings_init());
    guest_call(loader_context(), 0x416f50, 0x88f004); // original camera defaults
    wr8(0x89c6f0, 0);
    wr32(0x89d17c, 0);
    const uint32_t original_zoom = rd32(0x88f00c);
    const uint32_t cases[][3] = {{640, 480, original_zoom},
                                 {800, 600, original_zoom},
                                 {1024, 768, original_zoom},
                                 {1280, 720, original_zoom * 720 / 480},
                                 {1920, 1080, original_zoom * 1080 / 480},
                                 {2560, 1440, original_zoom * 3},
                                 {3840, 2160, original_zoom * 2160 / 480},
                                 {800, 600, original_zoom}};
    for (const auto &size : cases) {
        wr16(0x89c6cf, size[0]);
        wr16(0x89c6d1, size[1]);
        for (int repeat = 0; repeat < 3; ++repeat) {
            guest_call(loader_context(), 0x47f480);
            MOD_CHECK_EQ(rd32(0x89d1f2), size[2]);
            MOD_CHECK_EQ(rd32(0x88f00c), original_zoom);
            MOD_CHECK_EQ(rd16(0x88f036), 480);
        }
    }
    // The higher-resolution camera record has its own reference height.
    wr16(0x89c6cf, 3840);
    wr16(0x89c6d1, 2160);
    wr16(0x88f036, 1024);
    guest_call(loader_context(), 0x47f480);
    MOD_CHECK_EQ(rd32(0x89d1f2), uint32_t(uint64_t(original_zoom) * 2160 / 1024));
    mods_hooks_reset();
    mods_settings_reset();
    mods_overlay_set_profile_dir(nullptr);
    mods_overlay_reset();
}

MOD_TEST_SUITE(game_settings_minimap_buffer_bounds_and_wrap) {
    boot(mod_test_dir("game-settings-minimap"));
    X86 *c = loader_context();
    // Use the CRT's normal large-block path and an initialized heap lock.
    // No application entry point is needed for this pixel/lifetime test.
    wr32(0x5e33a4, 0);
    wr32(0x5e26c8 + 9 * 4, heap_alloc(24, true));
    wr8(0x89c6f0, 0);
    wr16(0x89d1ec, 0x3456);
    wr16(0x89d1ee, 0xabcd);
    constexpr uint32_t source = 0x2000000, dest = 0x2100000;
    memset(gm_ptr(source), 0x65, 192 * 384);
    memset(gm_ptr(dest), 0xa5, 256 * 384 + 256);
    wr32(0x64f474, source);
    wr32(0x64f478, dest);
    guest_call(c, 0x420100, 192, 384); // original fixed 64 KiB buffer overrun
    MOD_CHECK(rd8(dest + 65536) != 0xa5);

    MOD_CHECK(mods_game_settings_init());
    const uint32_t sizes[][2] = {{192, 384}, {640, 480}, {640, 480},
                                 {575, 432}, {320, 240}, {128, 128}};
    for (const auto &size : sizes) {
        const uint32_t w = size[0], h = size[1], pitch = (std::max(256u, w) + 7u) & ~7u;
        const uint32_t src = heap_alloc(w * h, true), old = heap_alloc(65536, true);
        const uint32_t guard = heap_alloc(256, true);
        MOD_CHECK_EQ(guard, old + 65536);
        memset(gm_ptr(guard), 0xa5, 256);
        for (uint32_t y = 0; y < h; ++y)
            for (uint32_t x = 0; x < w; ++x)
                wr8(src + y * w + x, uint8_t((x * 7 + y * 13) % 251 + 1));
        wr32(0x64f474, src);
        wr32(0x64f478, old);
        for (uint32_t pos : {0u, 0x3456u, 0x8000u, 0xffffu}) {
            wr16(0x89d1ec, pos);
            wr16(0x89d1ee, pos ^ 0xabcd);
            guest_call(c, 0x420100, w, h);
            const uint32_t pixels = rd32(0x64f478);
            MOD_CHECK(heap_size(pixels) >= pitch * std::max(256u, h));
            for (uint32_t i = 0; i < 256; ++i)
                MOD_CHECK_EQ(rd8(guard + i), 0xa5);
            // Independent per-pixel toroidal lookup verifies both camera
            // wrap directions, odd widths, tall maps and the original sizes.
            const uint32_t cx = (((pos >> 8) & 254) + 128) & 255;
            const uint32_t cy = ((((pos ^ 0xabcd) >> 8) & 254) + 128) & 255;
            bool same = true;
            for (uint32_t y = 0; y < h; ++y)
                for (uint32_t x = 0; x < w; ++x) {
                    const uint32_t sx = (x + cx * w / 256) % w, sy = (y + h - cy * h / 256) % h;
                    same &= rd8(pixels + y * pitch + x) == rd8(src + sy * w + sx);
                }
            MOD_CHECK(same);
            constexpr uint32_t desc = 0x2200000;
            memset(gm_ptr(desc), 0, 36);
            wr32(desc, pixels);
            wr32(desc + 4, w);
            wr32(desc + 8, h);
            wr32(desc + 12, 256);
            wr32(desc + 32, 8);
            guest_call(c, 0x5280f0, desc);
            MOD_CHECK_EQ(rd32(rd32(0xd05b08) + 12), pitch);
        }
        guest_call(c, 0x41fff0); // real guest teardown frees both CRT buffers
        MOD_CHECK_EQ(rd32(0x64f474), 0);
        MOD_CHECK_EQ(rd32(0x64f478), 0);
        MOD_CHECK(!heap_owns(src));
        MOD_CHECK(!heap_owns(old));
        heap_free(guard);
        MOD_CHECK(heap_check().empty());
    }
    mods_hooks_reset();
    mods_settings_reset();
    mods_overlay_set_profile_dir(nullptr);
    mods_overlay_reset();
}

MOD_TEST_SUITE(game_settings_reload_and_restart) {
    const std::string profile = mod_test_dir("game-settings");
    boot(profile);
    wr8(0x895db4, 93);
    wr8(0x895db5, 41); // sound and music volume
    save();
    guest_call(loader_context(), load_config);
    MOD_CHECK_EQ(rd8(0x895db4), 93);
    MOD_CHECK_EQ(rd8(0x895db5), 41);
    // Negative control: the shipping game reloads an old file before it ever
    // reaches the sole write_config00 call at process shutdown.
    wr8(0x895db4, 26);
    wr8(0x895db5, 17);
    guest_call(loader_context(), load_config);
    MOD_CHECK_EQ(rd8(0x895db4), 93);
    MOD_CHECK_EQ(rd8(0x895db5), 41);
    MOD_CHECK(mods_game_settings_init());
    guest_call(loader_context(), load_config);
    wr8(0x895db4, 26);
    wr8(0x895db5, 17);
    wr32(0x895da4, rd32(0x895da4) ^ 0x1000); // a saved graphics option
    wr16(0x895dad, 7);                       // game speed
    wr8(0x89d161, 19);                       // scroll setting
    const uint32_t flags = rd32(0x895da4);
    guest_call(loader_context(), load_config);
    MOD_CHECK_EQ(rd8(0x895db4), 26);
    MOD_CHECK_EQ(rd8(0x895db5), 17);
    MOD_CHECK_EQ(rd32(0x895da4) & 0x1000, flags & 0x1000);
    MOD_CHECK_EQ(rd16(0x895dad), 7);
    MOD_CHECK_EQ(rd8(0x89d161), 19);
    // New image, new handles, no explicit shutdown save. The original loader
    // alone must understand the persisted files produced by the shipping fix.
    boot(profile);
    guest_call(loader_context(), load_config);
    MOD_CHECK_EQ(rd8(0x895db4), 26);
    MOD_CHECK_EQ(rd8(0x895db5), 17);
    MOD_CHECK_EQ(rd32(0x895da4) & 0x1000, flags & 0x1000);
    MOD_CHECK_EQ(rd16(0x895dad), 7);
    MOD_CHECK_EQ(rd8(0x89d161), 19);
    MOD_CHECK_EQ(bytes(profile + "/POP3.CD/SAVE/CONFIG00.DAT").size(), 177u);
    MOD_CHECK_EQ(bytes(profile + "/POP3.CD/SAVE/CONFIG00.VER").size(), 68u);
    mods_hooks_reset();
    mods_overlay_set_profile_dir(nullptr);
    mods_overlay_reset();
}

MOD_TEST_SUITE(game_settings_autosave_all_options_and_retry) {
    const std::string profile = mod_test_dir("game-settings-frame");
    boot(profile);
    save();
    MOD_CHECK(mods_game_settings_init());
    guest_call(loader_context(), load_config);
    host_set_time_source(clock_ms);
    // Exercise every actual config descriptor, including shared flag words,
    // byte/word/dword values, and the last descriptor in the pinned image.
    std::vector<uint32_t> wanted;
    for (uint32_t i = 0; i < 59; ++i) {
        const uint32_t d = 0x5a9a60 + 20 * i, p = rd32(d), n = rd16(d + 16);
        if (rd8(d + 18) == 4)
            wr32(p, rd32(p) ^ rd32(d + 4));
        else if (n == 1)
            wr8(p, rd8(p) ^ 1);
        else if (n == 2)
            wr16(p, rd16(p) ^ 1);
        else
            wr32(p, rd32(p) ^ 1);
    }
    for (uint32_t i = 0; i < 59; ++i) {
        const uint32_t d = 0x5a9a60 + 20 * i, p = rd32(d), n = rd16(d + 16);
        wanted.push_back(rd8(d + 18) == 4 ? rd32(p) & rd32(d + 4)
                         : n == 1         ? rd8(p)
                         : n == 2         ? rd16(p)
                                          : rd32(p));
    }
    frame();
    const auto saved = bytes(profile + "/POP3.CD/SAVE/CONFIG00.DAT");
    const auto stamp = std::filesystem::last_write_time(profile + "/POP3.CD/SAVE/CONFIG00.DAT");
    for (int i = 0; i < 10; ++i)
        frame();
    MOD_CHECK(std::filesystem::last_write_time(profile + "/POP3.CD/SAVE/CONFIG00.DAT") == stamp);
    MOD_CHECK(bytes(profile + "/POP3.CD/SAVE/CONFIG00.DAT") == saved);
    boot(profile);
    guest_call(loader_context(), load_config);
    for (uint32_t i = 0; i < 59; ++i) {
        const uint32_t d = 0x5a9a60 + 20 * i, p = rd32(d), n = rd16(d + 16);
        const uint32_t got = rd8(d + 18) == 4 ? rd32(p) & rd32(d + 4)
                             : n == 1         ? rd8(p)
                             : n == 2         ? rd16(p)
                                              : rd32(p);
        MOD_CHECK_EQ(got, wanted[i]);
    }
    MOD_CHECK(mods_game_settings_init());
    guest_call(loader_context(), load_config);
    const std::string backup = profile + "-saved";
    std::filesystem::rename(profile, backup);
    {
        std::ofstream blocker(profile);
        blocker << "unavailable";
    }
    wr8(0x895db4, 23);
    guest_call(loader_context(), load_config); // failed save must not lose edits
    MOD_CHECK_EQ(rd8(0x895db4), 23);
    std::filesystem::remove(profile);
    std::filesystem::rename(backup, profile);
    host_set_time_source(clock_ms);
    frame();
    boot(profile);
    guest_call(loader_context(), load_config);
    MOD_CHECK_EQ(rd8(0x895db4), 23);
    host_clear_time_source();
    mods_hooks_reset();
    mods_overlay_set_profile_dir(nullptr);
    mods_overlay_reset();
}
