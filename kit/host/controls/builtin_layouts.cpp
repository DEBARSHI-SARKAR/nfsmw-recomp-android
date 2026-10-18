// builtin_layouts.cpp - see builtin_layouts.h.
#include "builtin_layouts.h"

namespace controls {

namespace {

// The split on-screen keyboard. Pinned to host/keypad_layout.cpp's geometry
// (a fixed 8x5 grid of 32/36/40pt keys, 4pt gap, bottom-corner halves, with
// a HIDE/KEYS tab above each) by controls_tests.cpp's legacy oracle. The
// PAD tab (the next layout) sits at the bottom centre of the safe area;
// collapsed KEYS tabs must stay above the system gesture strip on tablets.
const char *kKeysTablet = R"JSON({
  "version": 1,
  "name": "keys",
  "safe_inset": true,
  "groups": [
    {
      "id": "left",
      "grid": {"cols": 8, "rows": 5, "key": 36, "gap": 4},
      "anchor": "bottom-left",
      "controls": [
        {"kind": "key", "scancode": "Escape", "label": "Esc", "col": 0, "row": 0},
        {"kind": "key", "scancode": "F1", "col": 1, "row": 0},
        {"kind": "key", "scancode": "F2", "col": 2, "row": 0},
        {"kind": "key", "scancode": "F3", "col": 3, "row": 0},
        {"kind": "key", "scancode": "F4", "col": 4, "row": 0},
        {"kind": "key", "scancode": "F5", "col": 5, "row": 0},
        {"kind": "key", "scancode": "F6", "col": 6, "row": 0},
        {"kind": "key", "scancode": "Insert", "label": "Ins", "col": 7, "row": 0},
        {"kind": "key", "scancode": "Grave", "label": "`", "col": 0, "row": 1},
        {"kind": "key", "scancode": "1", "col": 1, "row": 1},
        {"kind": "key", "scancode": "2", "col": 2, "row": 1},
        {"kind": "key", "scancode": "3", "col": 3, "row": 1},
        {"kind": "key", "scancode": "4", "col": 4, "row": 1},
        {"kind": "key", "scancode": "5", "col": 5, "row": 1},
        {"kind": "key", "scancode": "6", "col": 6, "row": 1},
        {"kind": "key", "scancode": "Home", "col": 7, "row": 1},
        {"kind": "key", "scancode": "Tab", "col": 0, "row": 2},
        {"kind": "key", "scancode": "Q", "col": 1, "row": 2},
        {"kind": "key", "scancode": "W", "col": 2, "row": 2},
        {"kind": "key", "scancode": "E", "col": 3, "row": 2},
        {"kind": "key", "scancode": "R", "col": 4, "row": 2},
        {"kind": "key", "scancode": "T", "col": 5, "row": 2},
        {"kind": "key", "scancode": "LeftBracket", "label": "[", "col": 6, "row": 2},
        {"kind": "key", "scancode": "PageUp", "label": "PgUp", "col": 7, "row": 2},
        {"kind": "key", "scancode": "LShift", "label": "Shift", "col": 0, "row": 3},
        {"kind": "key", "scancode": "A", "col": 1, "row": 3},
        {"kind": "key", "scancode": "S", "col": 2, "row": 3},
        {"kind": "key", "scancode": "D", "col": 3, "row": 3},
        {"kind": "key", "scancode": "F", "col": 4, "row": 3},
        {"kind": "key", "scancode": "G", "col": 5, "row": 3},
        {"kind": "key", "scancode": "RightBracket", "label": "]", "col": 6, "row": 3},
        {"kind": "key", "scancode": "PageDown", "label": "PgDn", "col": 7, "row": 3},
        {"kind": "key", "scancode": "LCtrl", "label": "Ctrl", "col": 0, "row": 4},
        {"kind": "key", "scancode": "LAlt", "label": "Alt", "col": 1, "row": 4},
        {"kind": "key", "scancode": "Z", "col": 2, "row": 4},
        {"kind": "key", "scancode": "X", "col": 3, "row": 4},
        {"kind": "key", "scancode": "C", "col": 4, "row": 4},
        {"kind": "key", "scancode": "V", "col": 5, "row": 4},
        {"kind": "key", "scancode": "B", "col": 6, "row": 4},
        {"kind": "key", "scancode": "Backslash", "label": "\\", "col": 7, "row": 4}
      ]
    },
    {
      "id": "right",
      "grid": {"cols": 8, "rows": 5, "key": 36, "gap": 4},
      "anchor": "bottom-right",
      "controls": [
        {"kind": "key", "scancode": "F7", "col": 0, "row": 0},
        {"kind": "key", "scancode": "F8", "col": 1, "row": 0},
        {"kind": "key", "scancode": "F9", "col": 2, "row": 0},
        {"kind": "key", "scancode": "F10", "col": 3, "row": 0},
        {"kind": "key", "scancode": "F11", "col": 4, "row": 0},
        {"kind": "key", "scancode": "F12", "col": 5, "row": 0},
        {"kind": "key", "scancode": "Delete", "label": "Del", "col": 6, "row": 0},
        {"kind": "key", "scancode": "End", "col": 7, "row": 0},
        {"kind": "key", "scancode": "7", "col": 0, "row": 1},
        {"kind": "key", "scancode": "8", "col": 1, "row": 1},
        {"kind": "key", "scancode": "9", "col": 2, "row": 1},
        {"kind": "key", "scancode": "0", "col": 3, "row": 1},
        {"kind": "key", "scancode": "Minus", "label": "-", "col": 4, "row": 1},
        {"kind": "key", "scancode": "Equals", "label": "=", "col": 5, "row": 1},
        {"kind": "key", "scancode": "Backspace", "label": "Bksp", "col": 6, "row": 1, "span": 2},
        {"kind": "key", "scancode": "Y", "col": 0, "row": 2},
        {"kind": "key", "scancode": "U", "col": 1, "row": 2},
        {"kind": "key", "scancode": "I", "col": 2, "row": 2},
        {"kind": "key", "scancode": "O", "col": 3, "row": 2},
        {"kind": "key", "scancode": "P", "col": 4, "row": 2},
        {"kind": "key", "scancode": "Semicolon", "label": ";", "col": 5, "row": 2},
        {"kind": "key", "scancode": "Apostrophe", "label": "'", "col": 6, "row": 2},
        {"kind": "key", "scancode": "Return", "label": "Enter", "col": 7, "row": 2},
        {"kind": "key", "scancode": "H", "col": 0, "row": 3},
        {"kind": "key", "scancode": "J", "col": 1, "row": 3},
        {"kind": "key", "scancode": "K", "col": 2, "row": 3},
        {"kind": "key", "scancode": "L", "col": 3, "row": 3},
        {"kind": "key", "scancode": "Comma", "label": ",", "col": 4, "row": 3},
        {"kind": "key", "scancode": "Period", "label": ".", "col": 5, "row": 3},
        {"kind": "key", "scancode": "Slash", "label": "/", "col": 6, "row": 3},
        {"kind": "key", "scancode": "Up", "label": "^", "col": 7, "row": 3},
        {"kind": "key", "scancode": "Space", "col": 0, "row": 4, "span": 3},
        {"kind": "key", "scancode": "N", "col": 3, "row": 4},
        {"kind": "key", "scancode": "M", "col": 4, "row": 4},
        {"kind": "key", "scancode": "Left", "label": "<", "col": 5, "row": 4},
        {"kind": "key", "scancode": "Down", "label": "v", "col": 6, "row": 4},
        {"kind": "key", "scancode": "Right", "label": ">", "col": 7, "row": 4}
      ]
    },
    {
      "id": "tabs",
      "controls": [
        {"kind": "toggle", "target": "left", "label": "HIDE", "label_off": "KEYS",
         "anchor": "bottom-left", "w": 64, "h": 20, "stack_on": "left"},
        {"kind": "toggle", "target": "right", "label": "HIDE", "label_off": "KEYS",
         "anchor": "bottom-right", "w": 64, "h": 20, "stack_on": "right"},
        {"kind": "toggle", "target": "next", "label": "PAD", "anchor": "bottom-center",
         "w": 64, "h": 20}
      ]
    }
  ]
})JSON";

// A DualSense-shaped pad: floating sticks in the bottom corners, the dpad
// beside the left one, the face diamond in the bottom-right corner,
// shoulders in the top corners and the system buttons at the bottom centre.
// L3 and R3 are not on screen by default. Translucent, unlike the keyboard.
const char *kPadTablet = R"JSON({
  "version": 1,
  "name": "pad",
  "opacity": 0.7,
  "groups": [
    {
      "id": "sticks",
      "controls": [
        {"kind": "stick", "stick": "left", "mode": "floating", "anchor": "bottom-left",
         "x": 24, "y": 24, "radius": 110},
        {"kind": "stick", "stick": "right", "mode": "floating", "anchor": "bottom-right",
         "x": 250, "y": 24, "radius": 90}
      ]
    },
    {
      "id": "buttons",
      "controls": [
        {"kind": "dpad", "anchor": "bottom-left", "x": 250, "y": 40, "size": 130},
        {"kind": "button", "button": "triangle", "anchor": "bottom-right", "x": 92, "y": 164, "size": 64},
        {"kind": "button", "button": "circle", "anchor": "bottom-right", "x": 24, "y": 96, "size": 64},
        {"kind": "button", "button": "cross", "anchor": "bottom-right", "x": 92, "y": 28, "size": 64},
        {"kind": "button", "button": "square", "anchor": "bottom-right", "x": 160, "y": 96, "size": 64},
        {"kind": "button", "button": "l1", "anchor": "top-left", "x": 24, "y": 24, "w": 110, "h": 44},
        {"kind": "button", "button": "l2", "anchor": "top-left", "x": 24, "y": 76, "w": 110, "h": 44},
        {"kind": "button", "button": "r1", "anchor": "top-right", "x": 24, "y": 24, "w": 110, "h": 44},
        {"kind": "button", "button": "r2", "anchor": "top-right", "x": 24, "y": 76, "w": 110, "h": 44},
        {"kind": "button", "button": "select", "anchor": "bottom-center", "x": -70, "y": 16, "w": 70, "h": 30},
        {"kind": "button", "button": "ps", "anchor": "bottom-center", "x": 0, "y": 12, "size": 40},
        {"kind": "button", "button": "start", "anchor": "bottom-center", "x": 70, "y": 16, "w": 70, "h": 30}
      ]
    },
    {
      "id": "tabs",
      "controls": [
        {"kind": "toggle", "target": "next", "label": "KEYS", "anchor": "top-center",
         "y": 8, "w": 72, "h": 28},
        {"kind": "action", "action": "settings", "label": "F10", "anchor": "top-center",
         "x": 72, "y": 8, "w": 56, "h": 28}
      ]
    }
  ]
})JSON";

// The pad+keys layout: the keyboard halves at 30pt keys, the two sticks at
// mid-height on either side, and a smaller face diamond above the right
// half (the pad layout's diamond at 52pt, raised by the half's 5 * 34pt
// height plus 12). Its NEXT tab stays where keys puts its PAD tab, at the
// bottom centre between the halves.
std::string pad_and_keys_tablet() {
    std::string s = kKeysTablet;
    const auto replace_all = [&s](const std::string &from, const std::string &to) {
        for (size_t at = s.find(from); at != std::string::npos; at = s.find(from, at + to.size()))
            s.replace(at, from.size(), to);
    };
    replace_all("\"name\": \"keys\"", "\"name\": \"pad+keys\"");
    replace_all("\"key\": 36", "\"key\": 30");
    replace_all("\"label\": \"PAD\"", "\"label\": \"NEXT\"");
    const std::string tail = "\n  ]\n}";
    const size_t end = s.rfind(tail);
    if (end == std::string::npos)
        return std::string();
    s.replace(end, tail.size(), R"JSON(,
    {
      "id": "sticks",
      "controls": [
        {"kind": "stick", "stick": "left", "mode": "floating", "anchor": "center-left",
         "x": 24, "y": -90, "radius": 80},
        {"kind": "stick", "stick": "right", "mode": "floating", "anchor": "center-right",
         "x": 24, "y": -90, "radius": 80}
      ]
    },
    {
      "id": "face",
      "controls": [
        {"kind": "button", "button": "triangle", "anchor": "bottom-right", "x": 80, "y": 318, "size": 52},
        {"kind": "button", "button": "circle", "anchor": "bottom-right", "x": 24, "y": 262, "size": 52},
        {"kind": "button", "button": "cross", "anchor": "bottom-right", "x": 80, "y": 206, "size": 52},
        {"kind": "button", "button": "square", "anchor": "bottom-right", "x": 136, "y": 262, "size": 52}
      ]
    },
    {
      "id": "actions",
      "controls": [
        {"kind": "action", "action": "settings", "label": "F10", "anchor": "top-center",
         "y": 8, "w": 72, "h": 28}
      ]
    }
  ]
})JSON");
    return s;
}

// ---------------------------------------------------------------- phones
//
// A phone in landscape has about 750 x 390 pt inside its side insets, less
// than half the tablet's area, so the pad keeps the tablet's parts at about
// two thirds their size and moves both sticks to the bottom corners: the
// middle of the bottom edge is the only room left for the system buttons,
// and on a tablet that is where the inboard right stick sits. Keeping the
// group ids and their order ("sticks", "buttons", "tabs") the same as the
// tablet pad keeps the hidden-group bits, which are stored per layout name,
// meaning the same thing after a rotation.

const char *kPadPhoneLandscape = R"JSON({
  "version": 1,
  "name": "pad",
  "opacity": 0.7,
  "groups": [
    {
      "id": "sticks",
      "controls": [
        {"kind": "stick", "stick": "left", "mode": "floating", "anchor": "bottom-left",
         "x": 24, "y": 24, "radius": 70},
        {"kind": "stick", "stick": "right", "mode": "floating", "anchor": "bottom-right",
         "x": 24, "y": 24, "radius": 70}
      ]
    },
    {
      "id": "buttons",
      "controls": [
        {"kind": "dpad", "anchor": "bottom-left", "x": 170, "y": 24, "size": 100},
        {"kind": "button", "button": "triangle", "anchor": "bottom-right", "x": 231, "y": 123, "size": 48},
        {"kind": "button", "button": "circle", "anchor": "bottom-right", "x": 180, "y": 72, "size": 48},
        {"kind": "button", "button": "cross", "anchor": "bottom-right", "x": 231, "y": 21, "size": 48},
        {"kind": "button", "button": "square", "anchor": "bottom-right", "x": 282, "y": 72, "size": 48},
        {"kind": "button", "button": "l1", "anchor": "top-left", "x": 24, "y": 12, "w": 80, "h": 34},
        {"kind": "button", "button": "l2", "anchor": "top-left", "x": 24, "y": 52, "w": 80, "h": 34},
        {"kind": "button", "button": "r1", "anchor": "top-right", "x": 24, "y": 12, "w": 80, "h": 34},
        {"kind": "button", "button": "r2", "anchor": "top-right", "x": 24, "y": 52, "w": 80, "h": 34},
        {"kind": "button", "button": "select", "anchor": "bottom-center", "x": -58, "y": 8, "w": 56, "h": 26},
        {"kind": "button", "button": "ps", "anchor": "bottom-center", "x": 0, "y": 8, "w": 56, "h": 26},
        {"kind": "button", "button": "start", "anchor": "bottom-center", "x": 58, "y": 8, "w": 56, "h": 26}
      ]
    },
    {
      "id": "tabs",
      "controls": [
        {"kind": "toggle", "target": "next", "label": "KEYS", "anchor": "top-center",
         "y": 8, "w": 72, "h": 28},
        {"kind": "action", "action": "settings", "label": "F10", "anchor": "top-center",
         "x": 68, "y": 8, "w": 56, "h": 28}
      ]
    }
  ]
})JSON";

// Two 5x4 thumb blocks in the bottom corners, 30pt keys: the letters in
// QWERTY order, the modifiers and Esc along the left block's bottom row and
// an arrow cluster in the right block's. The digits, punctuation and the
// function keys do not fit; F-keys live in this form's pad+keys layout.
const char *kKeysPhoneLandscape = R"JSON({
  "version": 1,
  "name": "keys",
  "safe_inset": true,
  "groups": [
    {
      "id": "left",
      "grid": {"cols": 5, "rows": 4, "key": 30, "gap": 3},
      "anchor": "bottom-left",
      "controls": [
        {"kind": "key", "scancode": "Q", "col": 0, "row": 0},
        {"kind": "key", "scancode": "W", "col": 1, "row": 0},
        {"kind": "key", "scancode": "E", "col": 2, "row": 0},
        {"kind": "key", "scancode": "R", "col": 3, "row": 0},
        {"kind": "key", "scancode": "T", "col": 4, "row": 0},
        {"kind": "key", "scancode": "A", "col": 0, "row": 1},
        {"kind": "key", "scancode": "S", "col": 1, "row": 1},
        {"kind": "key", "scancode": "D", "col": 2, "row": 1},
        {"kind": "key", "scancode": "F", "col": 3, "row": 1},
        {"kind": "key", "scancode": "G", "col": 4, "row": 1},
        {"kind": "key", "scancode": "Z", "col": 0, "row": 2},
        {"kind": "key", "scancode": "X", "col": 1, "row": 2},
        {"kind": "key", "scancode": "C", "col": 2, "row": 2},
        {"kind": "key", "scancode": "V", "col": 3, "row": 2},
        {"kind": "key", "scancode": "B", "col": 4, "row": 2},
        {"kind": "key", "scancode": "Escape", "label": "Esc", "col": 0, "row": 3},
        {"kind": "key", "scancode": "LShift", "label": "Sft", "col": 1, "row": 3},
        {"kind": "key", "scancode": "LCtrl", "label": "Ctl", "col": 2, "row": 3},
        {"kind": "key", "scancode": "LAlt", "label": "Alt", "col": 3, "row": 3},
        {"kind": "key", "scancode": "Space", "label": "Spc", "col": 4, "row": 3}
      ]
    },
    {
      "id": "right",
      "grid": {"cols": 5, "rows": 4, "key": 30, "gap": 3},
      "anchor": "bottom-right",
      "controls": [
        {"kind": "key", "scancode": "Y", "col": 0, "row": 0},
        {"kind": "key", "scancode": "U", "col": 1, "row": 0},
        {"kind": "key", "scancode": "I", "col": 2, "row": 0},
        {"kind": "key", "scancode": "O", "col": 3, "row": 0},
        {"kind": "key", "scancode": "P", "col": 4, "row": 0},
        {"kind": "key", "scancode": "H", "col": 0, "row": 1},
        {"kind": "key", "scancode": "J", "col": 1, "row": 1},
        {"kind": "key", "scancode": "K", "col": 2, "row": 1},
        {"kind": "key", "scancode": "L", "col": 3, "row": 1},
        {"kind": "key", "scancode": "Backspace", "label": "Bks", "col": 4, "row": 1},
        {"kind": "key", "scancode": "N", "col": 0, "row": 2},
        {"kind": "key", "scancode": "M", "col": 1, "row": 2},
        {"kind": "key", "scancode": "Tab", "col": 2, "row": 2},
        {"kind": "key", "scancode": "Up", "label": "^", "col": 3, "row": 2},
        {"kind": "key", "scancode": "Return", "label": "Ent", "col": 0, "row": 3, "span": 2},
        {"kind": "key", "scancode": "Left", "label": "<", "col": 2, "row": 3},
        {"kind": "key", "scancode": "Down", "label": "v", "col": 3, "row": 3},
        {"kind": "key", "scancode": "Right", "label": ">", "col": 4, "row": 3}
      ]
    },
    {
      "id": "tabs",
      "controls": [
        {"kind": "toggle", "target": "left", "label": "HIDE", "label_off": "KEYS",
         "anchor": "bottom-left", "w": 64, "h": 20, "stack_on": "left"},
        {"kind": "toggle", "target": "right", "label": "HIDE", "label_off": "KEYS",
         "anchor": "bottom-right", "w": 64, "h": 20, "stack_on": "right"},
        {"kind": "toggle", "target": "next", "label": "PAD", "anchor": "bottom-center",
         "w": 64, "h": 20}
      ]
    }
  ]
})JSON";

// Landscape pad+keys is the pad without its dpad and system buttons, plus a
// single strip of the keys a game most often binds to a menu or a save. The
// strip's HIDE tab sits beside it in the top-left corner rather than stacked
// on it, which for a top-anchored group would land above the screen; the
// strip must have a tab of its own because the hidden-group bits are shared
// with the portrait layout, where that same group can be hidden.
const char *kPadKeysPhoneLandscape = R"JSON({
  "version": 1,
  "name": "pad+keys",
  "safe_inset": true,
  "groups": [
    {
      "id": "left",
      "grid": {"cols": 10, "rows": 1, "key": 30, "gap": 3},
      "anchor": "top-center",
      "y": 8,
      "controls": [
        {"kind": "key", "scancode": "Escape", "label": "Esc", "col": 0, "row": 0},
        {"kind": "key", "scancode": "F1", "col": 1, "row": 0},
        {"kind": "key", "scancode": "F2", "col": 2, "row": 0},
        {"kind": "key", "scancode": "F3", "col": 3, "row": 0},
        {"kind": "key", "scancode": "F4", "col": 4, "row": 0},
        {"kind": "key", "scancode": "F5", "col": 5, "row": 0},
        {"kind": "key", "scancode": "Tab", "col": 6, "row": 0},
        {"kind": "key", "scancode": "Return", "label": "Ent", "col": 7, "row": 0},
        {"kind": "key", "scancode": "Space", "label": "Spc", "col": 8, "row": 0},
        {"kind": "key", "scancode": "Backspace", "label": "Bks", "col": 9, "row": 0}
      ]
    },
    {
      "id": "tabs",
      "controls": [
        {"kind": "toggle", "target": "left", "label": "HIDE", "label_off": "KEYS",
         "anchor": "top-left", "x": 24, "y": 12, "w": 64, "h": 20},
        {"kind": "toggle", "target": "next", "label": "NEXT", "anchor": "bottom-center",
         "w": 64, "h": 20},
        {"kind": "action", "action": "settings", "label": "F10", "anchor": "top-right",
         "x": 24, "y": 12, "w": 56, "h": 20}
      ]
    },
    {
      "id": "sticks",
      "controls": [
        {"kind": "stick", "stick": "left", "mode": "floating", "anchor": "bottom-left",
         "x": 24, "y": 24, "radius": 70},
        {"kind": "stick", "stick": "right", "mode": "floating", "anchor": "bottom-right",
         "x": 24, "y": 24, "radius": 70}
      ]
    },
    {
      "id": "face",
      "controls": [
        {"kind": "button", "button": "triangle", "anchor": "bottom-right", "x": 226, "y": 108, "size": 42},
        {"kind": "button", "button": "circle", "anchor": "bottom-right", "x": 180, "y": 62, "size": 42},
        {"kind": "button", "button": "cross", "anchor": "bottom-right", "x": 226, "y": 16, "size": 42},
        {"kind": "button", "button": "square", "anchor": "bottom-right", "x": 272, "y": 62, "size": 42}
      ]
    }
  ]
})JSON";

// In portrait every anchor resolves inside the controls area below the game
// (about 390 x 490 pt on a 4:3 game), which is tall enough to spread the pad
// out: sticks and the face diamond at mid-height where the thumbs rest, the
// dpad and the system buttons along the bottom, the shoulders in a row just
// under the game image.
const char *kPadPhonePortrait = R"JSON({
  "version": 1,
  "name": "pad",
  "opacity": 0.7,
  "safe_inset": true,
  "groups": [
    {
      "id": "sticks",
      "controls": [
        {"kind": "stick", "stick": "left", "mode": "floating", "anchor": "center-left",
         "x": 24, "y": -20, "radius": 80},
        {"kind": "stick", "stick": "right", "mode": "floating", "anchor": "bottom-right",
         "x": 24, "y": 40, "radius": 60}
      ]
    },
    {
      "id": "buttons",
      "controls": [
        {"kind": "dpad", "anchor": "bottom-left", "x": 24, "y": 40, "size": 110},
        {"kind": "button", "button": "triangle", "anchor": "center-right", "x": 78, "y": -92, "size": 60},
        {"kind": "button", "button": "circle", "anchor": "center-right", "x": 16, "y": -30, "size": 60},
        {"kind": "button", "button": "cross", "anchor": "center-right", "x": 78, "y": 32, "size": 60},
        {"kind": "button", "button": "square", "anchor": "center-right", "x": 140, "y": -30, "size": 60},
        {"kind": "button", "button": "l1", "anchor": "top-left", "x": 16, "y": 8, "w": 84, "h": 34},
        {"kind": "button", "button": "l2", "anchor": "top-left", "x": 108, "y": 8, "w": 84, "h": 34},
        {"kind": "button", "button": "r2", "anchor": "top-right", "x": 108, "y": 8, "w": 84, "h": 34},
        {"kind": "button", "button": "r1", "anchor": "top-right", "x": 16, "y": 8, "w": 84, "h": 34},
        {"kind": "button", "button": "select", "anchor": "bottom-center", "x": -60, "y": 8, "w": 56, "h": 26},
        {"kind": "button", "button": "ps", "anchor": "bottom-center", "x": 0, "y": 8, "w": 56, "h": 26},
        {"kind": "button", "button": "start", "anchor": "bottom-center", "x": 60, "y": 8, "w": 56, "h": 26}
      ]
    },
    {
      "id": "tabs",
      "controls": [
        {"kind": "toggle", "target": "next", "label": "KEYS", "anchor": "top-center",
         "y": 44, "w": 72, "h": 28},
        {"kind": "action", "action": "settings", "label": "F10", "anchor": "top-center",
         "x": 68, "y": 44, "w": 56, "h": 28}
      ]
    }
  ]
})JSON";

// Portrait is wide enough for one unsplit board: the full 10-column QWERTY
// with a digit row above it and a modifier row, Enter and Backspace at the
// right edge and the arrow cluster in the bottom-right corner. 34pt keys,
// the same as the tablet's small size. The board sits at the bottom of the
// controls area, where the thumbs are and where its two tabs frame it,
// rather than centred with the PAD tab adrift below it.
const char *kKeysPhonePortrait = R"JSON({
  "version": 1,
  "name": "keys",
  "safe_inset": true,
  "groups": [
    {
      "id": "left",
      "grid": {"cols": 10, "rows": 5, "key": 34, "gap": 3},
      "anchor": "bottom-center",
      "y": 28,
      "controls": [
        {"kind": "key", "scancode": "1", "col": 0, "row": 0},
        {"kind": "key", "scancode": "2", "col": 1, "row": 0},
        {"kind": "key", "scancode": "3", "col": 2, "row": 0},
        {"kind": "key", "scancode": "4", "col": 3, "row": 0},
        {"kind": "key", "scancode": "5", "col": 4, "row": 0},
        {"kind": "key", "scancode": "6", "col": 5, "row": 0},
        {"kind": "key", "scancode": "7", "col": 6, "row": 0},
        {"kind": "key", "scancode": "8", "col": 7, "row": 0},
        {"kind": "key", "scancode": "9", "col": 8, "row": 0},
        {"kind": "key", "scancode": "0", "col": 9, "row": 0},
        {"kind": "key", "scancode": "Q", "col": 0, "row": 1},
        {"kind": "key", "scancode": "W", "col": 1, "row": 1},
        {"kind": "key", "scancode": "E", "col": 2, "row": 1},
        {"kind": "key", "scancode": "R", "col": 3, "row": 1},
        {"kind": "key", "scancode": "T", "col": 4, "row": 1},
        {"kind": "key", "scancode": "Y", "col": 5, "row": 1},
        {"kind": "key", "scancode": "U", "col": 6, "row": 1},
        {"kind": "key", "scancode": "I", "col": 7, "row": 1},
        {"kind": "key", "scancode": "O", "col": 8, "row": 1},
        {"kind": "key", "scancode": "P", "col": 9, "row": 1},
        {"kind": "key", "scancode": "A", "col": 0, "row": 2},
        {"kind": "key", "scancode": "S", "col": 1, "row": 2},
        {"kind": "key", "scancode": "D", "col": 2, "row": 2},
        {"kind": "key", "scancode": "F", "col": 3, "row": 2},
        {"kind": "key", "scancode": "G", "col": 4, "row": 2},
        {"kind": "key", "scancode": "H", "col": 5, "row": 2},
        {"kind": "key", "scancode": "J", "col": 6, "row": 2},
        {"kind": "key", "scancode": "K", "col": 7, "row": 2},
        {"kind": "key", "scancode": "L", "col": 8, "row": 2},
        {"kind": "key", "scancode": "Return", "label": "Ent", "col": 9, "row": 2},
        {"kind": "key", "scancode": "LShift", "label": "Sft", "col": 0, "row": 3},
        {"kind": "key", "scancode": "Z", "col": 1, "row": 3},
        {"kind": "key", "scancode": "X", "col": 2, "row": 3},
        {"kind": "key", "scancode": "C", "col": 3, "row": 3},
        {"kind": "key", "scancode": "V", "col": 4, "row": 3},
        {"kind": "key", "scancode": "B", "col": 5, "row": 3},
        {"kind": "key", "scancode": "N", "col": 6, "row": 3},
        {"kind": "key", "scancode": "M", "col": 7, "row": 3},
        {"kind": "key", "scancode": "Up", "label": "^", "col": 8, "row": 3},
        {"kind": "key", "scancode": "Backspace", "label": "Bks", "col": 9, "row": 3},
        {"kind": "key", "scancode": "Escape", "label": "Esc", "col": 0, "row": 4},
        {"kind": "key", "scancode": "Tab", "col": 1, "row": 4},
        {"kind": "key", "scancode": "LCtrl", "label": "Ctl", "col": 2, "row": 4},
        {"kind": "key", "scancode": "LAlt", "label": "Alt", "col": 3, "row": 4},
        {"kind": "key", "scancode": "Space", "col": 4, "row": 4, "span": 3},
        {"kind": "key", "scancode": "Left", "label": "<", "col": 7, "row": 4},
        {"kind": "key", "scancode": "Down", "label": "v", "col": 8, "row": 4},
        {"kind": "key", "scancode": "Right", "label": ">", "col": 9, "row": 4}
      ]
    },
    {
      "id": "tabs",
      "controls": [
        {"kind": "toggle", "target": "left", "label": "HIDE", "label_off": "KEYS",
         "anchor": "bottom-left", "x": 10, "w": 64, "h": 20, "stack_on": "left"},
        {"kind": "toggle", "target": "next", "label": "PAD", "anchor": "bottom-center",
         "w": 64, "h": 20}
      ]
    }
  ]
})JSON";

// Portrait pad+keys: the pad in the top of the controls area (every anchor a
// top one, so the pad stays put when the board below it grows), and the
// three letter rows across the bottom.
const char *kPadKeysPhonePortrait = R"JSON({
  "version": 1,
  "name": "pad+keys",
  "safe_inset": true,
  "groups": [
    {
      "id": "left",
      "grid": {"cols": 10, "rows": 3, "key": 34, "gap": 3},
      "anchor": "bottom-center",
      "y": 8,
      "controls": [
        {"kind": "key", "scancode": "Q", "col": 0, "row": 0},
        {"kind": "key", "scancode": "W", "col": 1, "row": 0},
        {"kind": "key", "scancode": "E", "col": 2, "row": 0},
        {"kind": "key", "scancode": "R", "col": 3, "row": 0},
        {"kind": "key", "scancode": "T", "col": 4, "row": 0},
        {"kind": "key", "scancode": "Y", "col": 5, "row": 0},
        {"kind": "key", "scancode": "U", "col": 6, "row": 0},
        {"kind": "key", "scancode": "I", "col": 7, "row": 0},
        {"kind": "key", "scancode": "O", "col": 8, "row": 0},
        {"kind": "key", "scancode": "P", "col": 9, "row": 0},
        {"kind": "key", "scancode": "A", "col": 0, "row": 1},
        {"kind": "key", "scancode": "S", "col": 1, "row": 1},
        {"kind": "key", "scancode": "D", "col": 2, "row": 1},
        {"kind": "key", "scancode": "F", "col": 3, "row": 1},
        {"kind": "key", "scancode": "G", "col": 4, "row": 1},
        {"kind": "key", "scancode": "H", "col": 5, "row": 1},
        {"kind": "key", "scancode": "J", "col": 6, "row": 1},
        {"kind": "key", "scancode": "K", "col": 7, "row": 1},
        {"kind": "key", "scancode": "L", "col": 8, "row": 1},
        {"kind": "key", "scancode": "Return", "label": "Ent", "col": 9, "row": 1},
        {"kind": "key", "scancode": "LShift", "label": "Sft", "col": 0, "row": 2},
        {"kind": "key", "scancode": "Z", "col": 1, "row": 2},
        {"kind": "key", "scancode": "X", "col": 2, "row": 2},
        {"kind": "key", "scancode": "C", "col": 3, "row": 2},
        {"kind": "key", "scancode": "V", "col": 4, "row": 2},
        {"kind": "key", "scancode": "B", "col": 5, "row": 2},
        {"kind": "key", "scancode": "N", "col": 6, "row": 2},
        {"kind": "key", "scancode": "M", "col": 7, "row": 2},
        {"kind": "key", "scancode": "Space", "col": 8, "row": 2, "span": 2}
      ]
    },
    {
      "id": "tabs",
      "controls": [
        {"kind": "toggle", "target": "left", "label": "HIDE", "label_off": "KEYS",
         "anchor": "bottom-left", "x": 10, "w": 64, "h": 20, "stack_on": "left"},
        {"kind": "toggle", "target": "next", "label": "NEXT", "anchor": "bottom-right",
         "x": 10, "w": 64, "h": 20, "stack_on": "left"},
        {"kind": "action", "action": "settings", "label": "F10", "anchor": "top-center",
         "y": 46, "w": 60, "h": 26}
      ]
    },
    {
      "id": "sticks",
      "controls": [
        {"kind": "stick", "stick": "left", "mode": "floating", "anchor": "top-left",
         "x": 24, "y": 60, "radius": 70},
        {"kind": "stick", "stick": "right", "mode": "floating", "anchor": "top-right",
         "x": 24, "y": 220, "radius": 60}
      ]
    },
    {
      "id": "face",
      "controls": [
        {"kind": "dpad", "anchor": "top-left", "x": 24, "y": 230, "size": 110},
        {"kind": "button", "button": "triangle", "anchor": "top-right", "x": 68, "y": 52, "size": 52},
        {"kind": "button", "button": "circle", "anchor": "top-right", "x": 12, "y": 108, "size": 52},
        {"kind": "button", "button": "cross", "anchor": "top-right", "x": 68, "y": 164, "size": 52},
        {"kind": "button", "button": "square", "anchor": "top-right", "x": 124, "y": 108, "size": 52},
        {"kind": "button", "button": "l1", "anchor": "top-left", "x": 16, "y": 8, "w": 84, "h": 34},
        {"kind": "button", "button": "l2", "anchor": "top-left", "x": 108, "y": 8, "w": 84, "h": 34},
        {"kind": "button", "button": "r2", "anchor": "top-right", "x": 108, "y": 8, "w": 84, "h": 34},
        {"kind": "button", "button": "r1", "anchor": "top-right", "x": 16, "y": 8, "w": 84, "h": 34}
      ]
    }
  ]
})JSON";

} // namespace

const char *builtin_layout(const std::string &name, Form form) {
    if (form == Form::PhoneLandscape) {
        if (name == "keys")
            return kKeysPhoneLandscape;
        if (name == "pad")
            return kPadPhoneLandscape;
        if (name == "pad+keys")
            return kPadKeysPhoneLandscape;
        return nullptr;
    }
    if (form == Form::PhonePortrait) {
        if (name == "keys")
            return kKeysPhonePortrait;
        if (name == "pad")
            return kPadPhonePortrait;
        if (name == "pad+keys")
            return kPadKeysPhonePortrait;
        return nullptr;
    }
    if (name == "keys")
        return kKeysTablet;
    if (name == "pad")
        return kPadTablet;
    if (name == "pad+keys") {
        static const std::string text = pad_and_keys_tablet();
        return text.c_str();
    }
    return nullptr;
}

} // namespace controls
