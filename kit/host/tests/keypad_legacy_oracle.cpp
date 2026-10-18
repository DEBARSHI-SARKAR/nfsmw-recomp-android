// keypad_legacy_oracle.cpp - see keypad_legacy_oracle.h. Verbatim copy of
// today's keypad_layout.cpp tables and geometry, renamed legacy_*.
#include "keypad_legacy_oracle.h"

#include <cmath>

namespace {
// Spec section 4, rows top to bottom. {label, scancode, col, row, span}.
const KeypadKey kLeft[] = {
    {"Esc", kScanEscape, 0, 0, 1},
    {"F1", kScanF1, 1, 0, 1},
    {"F2", kScanF2, 2, 0, 1},
    {"F3", kScanF3, 3, 0, 1},
    {"F4", kScanF4, 4, 0, 1},
    {"F5", kScanF5, 5, 0, 1},
    {"F6", kScanF6, 6, 0, 1},
    {"Ins", kScanInsert, 7, 0, 1},
    {"`", kScanGrave, 0, 1, 1},
    {"1", kScan1, 1, 1, 1},
    {"2", kScan2, 2, 1, 1},
    {"3", kScan3, 3, 1, 1},
    {"4", kScan4, 4, 1, 1},
    {"5", kScan5, 5, 1, 1},
    {"6", kScan6, 6, 1, 1},
    {"Home", kScanHome, 7, 1, 1},
    {"Tab", kScanTab, 0, 2, 1},
    {"Q", kScanQ, 1, 2, 1},
    {"W", kScanW, 2, 2, 1},
    {"E", kScanE, 3, 2, 1},
    {"R", kScanR, 4, 2, 1},
    {"T", kScanT, 5, 2, 1},
    {"[", kScanLeftBracket, 6, 2, 1},
    {"PgUp", kScanPageUp, 7, 2, 1},
    {"Shift", kScanLShift, 0, 3, 1},
    {"A", kScanA, 1, 3, 1},
    {"S", kScanS, 2, 3, 1},
    {"D", kScanD, 3, 3, 1},
    {"F", kScanF, 4, 3, 1},
    {"G", kScanG, 5, 3, 1},
    {"]", kScanRightBracket, 6, 3, 1},
    {"PgDn", kScanPageDown, 7, 3, 1},
    {"Ctrl", kScanLCtrl, 0, 4, 1},
    {"Alt", kScanLAlt, 1, 4, 1},
    {"Z", kScanZ, 2, 4, 1},
    {"X", kScanX, 3, 4, 1},
    {"C", kScanC, 4, 4, 1},
    {"V", kScanV, 5, 4, 1},
    {"B", kScanB, 6, 4, 1},
    {"\\", kScanBackslash, 7, 4, 1},
};
const KeypadKey kRight[] = {
    {"F7", kScanF7, 0, 0, 1},
    {"F8", kScanF8, 1, 0, 1},
    {"F9", kScanF9, 2, 0, 1},
    {"F10", kScanF10, 3, 0, 1},
    {"F11", kScanF11, 4, 0, 1},
    {"F12", kScanF12, 5, 0, 1},
    {"Del", kScanDelete, 6, 0, 1},
    {"End", kScanEnd, 7, 0, 1},
    {"7", kScan7, 0, 1, 1},
    {"8", kScan8, 1, 1, 1},
    {"9", kScan9, 2, 1, 1},
    {"0", kScan0, 3, 1, 1},
    {"-", kScanMinus, 4, 1, 1},
    {"=", kScanEquals, 5, 1, 1},
    {"Bksp", kScanBackspace, 6, 1, 2},
    {"Y", kScanY, 0, 2, 1},
    {"U", kScanU, 1, 2, 1},
    {"I", kScanI, 2, 2, 1},
    {"O", kScanO, 3, 2, 1},
    {"P", kScanP, 4, 2, 1},
    {";", kScanSemicolon, 5, 2, 1},
    {"'", kScanApostrophe, 6, 2, 1},
    {"Enter", kScanReturn, 7, 2, 1},
    {"H", kScanH, 0, 3, 1},
    {"J", kScanJ, 1, 3, 1},
    {"K", kScanK, 2, 3, 1},
    {"L", kScanL, 3, 3, 1},
    {",", kScanComma, 4, 3, 1},
    {".", kScanPeriod, 5, 3, 1},
    {"/", kScanSlash, 6, 3, 1},
    {"^", kScanUp, 7, 3, 1},
    {"Space", kScanSpace, 0, 4, 3},
    {"N", kScanN, 3, 4, 1},
    {"M", kScanM, 4, 4, 1},
    {"<", kScanLeft, 5, 4, 1},
    {"v", kScanDown, 6, 4, 1},
    {">", kScanRight, 7, 4, 1},
};
int px(double pt, double scale) {
    return int(std::lround(pt * scale));
}
int clamp_size(int size) {
    return size < 0 ? 0 : size > 2 ? 2 : size;
}
int pitch_px(int size, double scale) {
    return px(kKeypadKeyPt[clamp_size(size)] + kKeypadGapPt, scale);
}
int gap_px(double scale) {
    return px(kKeypadGapPt, scale);
}
} // namespace

const KeypadKey *legacy_keypad_keys(KeypadSide side, int *count) {
    if (side == KEYPAD_LEFT) {
        *count = int(sizeof kLeft / sizeof kLeft[0]);
        return kLeft;
    }
    *count = int(sizeof kRight / sizeof kRight[0]);
    return kRight;
}

KeypadRect legacy_keypad_half_rect(KeypadSide side, int size, double scale, int dw, int dh) {
    if (dw <= 0 || dh <= 0)
        return {};
    const int pitch = pitch_px(size, scale);
    KeypadRect r;
    r.w = pitch * kKeypadCols;
    r.h = pitch * kKeypadRows;
    r.x = side == KEYPAD_LEFT ? 0 : dw - r.w;
    r.y = dh - r.h;
    return r;
}

KeypadRect legacy_keypad_tab_rect(KeypadSide side, bool shown, int size, double scale, int dw,
                                  int dh) {
    if (dw <= 0 || dh <= 0)
        return {};
    KeypadRect t;
    t.w = px(kKeypadTabWPt, scale);
    t.h = px(kKeypadTabHPt, scale);
    t.x = side == KEYPAD_LEFT ? 0 : dw - t.w;
    t.y = shown ? legacy_keypad_half_rect(side, size, scale, dw, dh).y - t.h : dh - t.h;
    return t;
}

KeypadRect legacy_keypad_key_rect(KeypadSide side, const KeypadKey &key, int size, double scale,
                                  int dw, int dh) {
    const KeypadRect half = legacy_keypad_half_rect(side, size, scale, dw, dh);
    const int pitch = pitch_px(size, scale), gap = gap_px(scale);
    KeypadRect r;
    r.x = half.x + key.col * pitch + gap / 2;
    r.y = half.y + key.row * pitch + gap / 2;
    r.w = key.span * pitch - gap;
    r.h = pitch - gap;
    return r;
}
