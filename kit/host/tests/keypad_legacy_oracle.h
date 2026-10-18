// keypad_legacy_oracle.h - a frozen, renamed copy of today's split-keypad
// geometry (formerly host/keypad_layout.cpp), used only to pin the built-in "keys"
// controls layout to that exact geometry in controls_tests.cpp. This is a
// regression oracle, not a mirror: it must never be updated to track future
// changes to the controls. Carries its own copies of the old KeypadKey,
// KeypadRect and KeypadSide, which keypad_layout.h no longer declares.
#pragma once

#include "../keypad_layout.h"

enum KeypadSide { KEYPAD_LEFT = 0, KEYPAD_RIGHT = 1 };

struct KeypadKey {
    const char *label; // drawn, at most 5 glyphs
    int scancode;      // KeypadScan value sent while the key is held
    int col, row;      // cell position in the half's grid
    int span;          // width in cells
};

struct KeypadRect {
    int x = 0, y = 0, w = 0, h = 0;
    bool contains(double px, double py) const {
        return w > 0 && h > 0 && px >= x && py >= y && px < x + w && py < y + h;
    }
};

// The old keypad's grid and tab sizes, in points.
constexpr int kKeypadCols = 8, kKeypadRows = 5;
constexpr int kKeypadKeyPt[3] = {32, 36, 40};
constexpr int kKeypadGapPt = 4;
constexpr int kKeypadTabWPt = 64, kKeypadTabHPt = 20;

// The keys of one half, in the same order as keypad_layout.cpp's tables;
// *count receives how many.
const KeypadKey *legacy_keypad_keys(KeypadSide side, int *count);
// The half's rectangle, bottom-aligned in its corner, for a drawable of dw x dh.
KeypadRect legacy_keypad_half_rect(KeypadSide side, int size, double scale, int dw, int dh);
// The tab: above the half's outer corner while shown, in the corner while hidden.
KeypadRect legacy_keypad_tab_rect(KeypadSide side, bool shown, int size, double scale, int dw,
                                  int dh);
// One key's rectangle (the cell minus the gap).
KeypadRect legacy_keypad_key_rect(KeypadSide side, const KeypadKey &key, int size, double scale,
                                  int dw, int dh);
