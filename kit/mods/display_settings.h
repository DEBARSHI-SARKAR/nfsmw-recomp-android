#pragma once
#include "../runtime/display_seam.h"
#include "pop_mod_api.h"
#include <string>
#include <vector>
enum DisplayRow {
    DISPLAY_RENDERING,
    DISPLAY_UI_SCALE,
    DISPLAY_WIDE,
    DISPLAY_WINDOW,
    DISPLAY_CLASSIC_MODE,
    DISPLAY_FPS,
    DISPLAY_OVERLAY,
    DISPLAY_TEXTURES,
    DISPLAY_FILTERING,
    DISPLAY_ROW_COUNT
};
// game.toml [settings] rows sets one bit per row in RECOMP_SETTINGS_ROWS, in
// the order above; the controls rows share the bit after the display rows.
constexpr int DISPLAY_CONTROLS_BIT = DISPLAY_ROW_COUNT;
bool mods_settings_row_listed(int bit);
#ifdef POPM_TESTING
// The kit's tests see every row whatever the game lists; one that checks the
// list sets its own mask (bits as RECOMP_SETTINGS_ROWS).
void mods_settings_rows_for_test(unsigned mask);
#endif
struct DisplayMode {
    int w, h, bpp;
};
void mods_display_init();
void mods_display_live_defaults();
void mods_display_default_overlay(int mode);
void mods_display_reset();
bool mods_display_row_applies(DisplayRow row);
int mods_display_value(DisplayRow row);
PopModStatus mods_display_set(DisplayRow row, int value);
PopModStatus mods_display_nudge(DisplayRow row, int delta);
bool mods_display_pending(DisplayRow row);
std::string mods_display_line(DisplayRow row);
// Task 14 file: {"modes":[{"w":640,"h":480,"bpp":16,"passed":true}, ...]}.
// Also accepts width/height and status:"pass". Missing lists retain the
// labelled baseline fallback; a probe with no survivors disables Classic.
// An explicitly loaded app resource takes precedence over the cwd fallback.
bool mods_display_load_modes(const char *path);
