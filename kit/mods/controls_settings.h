// controls_settings.h - the on-screen controls' persisted values, declared in
// the mod settings store like the display rows so they show on the F10 page
// and survive a relaunch. Replaces the old keypad settings (mods/keypad_
// settings.h); see docs/superpowers/specs/2026-09-17-touch-controls-design.md.
#pragma once
#include "pop_mod_api.h"
#include <stdint.h>
#include <string>
#include <vector>

enum ControlsRow {
    CONTROLS_LAYOUT_ROW,
    CONTROLS_SIZE_ROW,
    CONTROLS_OPACITY_ROW,
    CONTROLS_HAPTICS_ROW,
    CONTROLS_PAD_WITH_CONTROLLER_ROW,
    CONTROLS_SNAP_ROW,
    CONTROLS_EDIT_ROW,
    CONTROLS_ROW_COUNT
};

// The host registers the layout names (LayoutStore::names()) before
// mods_page_init, because mods/ must not depend on host/controls. Until it
// does, the built-in defaults {"pad","keys","pad+keys"} apply. The layout
// setting's range is 0..names.size(); the last index is the Hidden choice.
void mods_controls_set_names(std::vector<std::string> names);
// After mods_controls_set_names: re-declares the layout row's maximum (the
// name list grows when the editor saves a layout under a new name) and
// re-clamps its value.
void mods_controls_refresh_names();
// default_layout: RECOMP_CONTROLS_DEFAULT_LAYOUT, e.g. "pad", "keys",
// "pad+keys" or "hidden". Idempotent; mods_controls_reset() lets the tests
// start over. Migrates a saved host.keypad/* profile the first time it sees one.
void mods_controls_init(const char *default_layout);
void mods_controls_reset();
// True once mods_controls_init has run (and until mods_controls_reset).
bool mods_controls_initialized();
// layout: index into the names list (names.size() is Hidden); size 0..2;
// opacity 20..100 (default 100); haptics/pad_with_controller/snap 0..1; EDIT_ROW: 0.
int mods_controls_value(ControlsRow row);
// names[index], or "" when the layout row is on the Hidden choice.
std::string mods_controls_layout_name();
PopModStatus mods_controls_set(ControlsRow row, int value);
// EDIT_ROW ignores the delta and requests the editor instead of a value change.
PopModStatus mods_controls_nudge(ControlsRow row, int delta);
std::string mods_controls_line(ControlsRow row);
// Which form factor a set of hidden-group bits belongs to; the same order as
// host/controls/layout.h's Form. One layout name's forms need not have the
// same groups -- portrait "keys" is one board where landscape is two halves
// -- so the bits are kept per form and a rotation no longer hides the wrong
// half. The three lanes share one stored value.
enum ControlsForm {
    CONTROLS_FORM_TABLET,
    CONTROLS_FORM_PHONE_LANDSCAPE,
    CONTROLS_FORM_PHONE_PORTRAIT,
    CONTROLS_FORM_COUNT
};
// Hidden groups of the active layout on `form`, bit i = groups[i] hidden.
// Not shown on the settings page; the touch router reads it directly. A
// profile written by the build that stored one set of bits for every form
// hands them to the first form that asks, and keeps them there.
uint32_t mods_controls_hidden_groups(ControlsForm form);
void mods_controls_set_hidden_groups(ControlsForm form, uint32_t bits);
// Writes what the on-screen controls changed since the last call. The host
// calls it once per pump: a toggle press runs on the SDL input thread, and
// mods_settings_set saves the whole profile synchronously, so the press
// itself only marks the value and this flushes it.
void mods_controls_flush();
// Set by the EDIT row; the host polls this and clears it.
bool mods_controls_take_edit_request();
// True while the layout editor is open (the host sets it). The F10 page's
// gates read it too, so the editor takes the pointer and the page's own
// drawing the same way the page does.
bool mods_controls_editing();
void mods_controls_set_editing(bool editing);
