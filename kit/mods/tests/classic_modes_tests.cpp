#include "mods_tests.h"
#include "../../platform/os.h"
#include "../mods_internal.h"
#include "../display_settings.h"
#include <fstream>

MOD_TEST_SUITE(classic_page_lists_exactly_survivors) {
    mods_settings_reset();
    mods_display_reset();
    mods_host_set_main_thread();
    char path[512];
    snprintf(path, sizeof path, "%s/pop-classic-list-XXXXXX", os_temp_dir());
    int fd = os_mkstemp(path);
    MOD_CHECK(fd >= 0);
    if (fd < 0)
        return;
    os_fd_close(fd);
    {
        std::ofstream f(path);
        f << R"({"modes":[
        {"w":640,"h":480,"bpp":8,"passed":true,
         "reason":"optional {format} query with \"quotes\"",
         "surface_failures":[{"requested_format":{"bpp":0},"display_mode":[640,480,16]}]},
        {"w":800,"h":600,"bpp":16,"passed":false,"reason":"fault"},
        {"w":1920,"h":1080,"bpp":16,"passed":true},
        {"w":2560,"h":1440,"bpp":8,"status":"blocked",
         "surface_failures":[{"w":320,"h":240,"bpp":16,"passed":true}]},
        {"w":3840,"h":2160,"bpp":32,"passed":true},
        {"w":1920,"h":1080,"bpp":16,"passed":true}]})";
    }
    MOD_CHECK(mods_display_load_modes(path));
    // A resource explicitly loaded by main.mm wins over the repository file.
    mods_page_init();
    mods_page_open(nullptr);
    MOD_CHECK_EQ(mods_display_set(DISPLAY_CLASSIC_MODE, 0), POP_OK);
    MOD_CHECK(std::string(mods_page_line(4)) == "Resolution: 640x480");
    MOD_CHECK_EQ(mods_display_set(DISPLAY_CLASSIC_MODE, 1), POP_OK);
    MOD_CHECK(std::string(mods_page_line(4)) == "Resolution: 1920x1080");
    MOD_CHECK_EQ(mods_display_set(DISPLAY_CLASSIC_MODE, 2), POP_E_RANGE);
    MOD_CHECK_EQ(mods_display_set(DISPLAY_CLASSIC_MODE, -1), POP_E_RANGE);
    mods_page_close();
    mods_input_remove_all(MODS_OWNER_RUNTIME);
    mods_settings_reset();
    mods_display_reset();
    {
        std::ofstream f(path);
        f << R"({"modes":[{"w":640,"h":480,"bpp":16,"passed":false}]})";
    }
    MOD_CHECK(mods_display_load_modes(path));
    mods_page_init();
    mods_page_open(nullptr);
    MOD_CHECK(std::string(mods_page_line(4)) == "Resolution: unavailable");
    MOD_CHECK_EQ(mods_display_set(DISPLAY_CLASSIC_MODE, 0), POP_E_STATE);
    MOD_CHECK_EQ(mods_display_set(DISPLAY_RENDERING, 1), POP_E_STATE);
    MOD_CHECK_EQ(mods_display_classic(), 0);
    mods_page_close();
    mods_input_remove_all(MODS_OWNER_RUNTIME);
    mods_settings_reset();
    mods_display_reset();
    os_unlink(path);
}

MOD_TEST_SUITE(classic_page_committed_survivors) {
    mods_settings_reset();
    mods_display_reset();
    mods_host_set_main_thread();
    MOD_CHECK(mods_display_load_modes("tools/recomp/baseline/classic-modes.json"));
    mods_page_init();
    mods_page_open(nullptr);
    const char *expected[] = {"640x480",   "800x600",   "1024x768", "1280x720",
                              "1920x1080", "2560x1440", "3840x2160"};
    for (int i = 0; i < 7; ++i) {
        MOD_CHECK_EQ(mods_display_set(DISPLAY_CLASSIC_MODE, i), POP_OK);
        MOD_CHECK(std::string(mods_page_line(4)) == std::string("Resolution: ") + expected[i]);
    }
    MOD_CHECK_EQ(mods_display_set(DISPLAY_CLASSIC_MODE, 7), POP_E_RANGE);
    mods_page_close();
    mods_input_remove_all(MODS_OWNER_RUNTIME);
    mods_settings_reset();
    mods_display_reset();
}
