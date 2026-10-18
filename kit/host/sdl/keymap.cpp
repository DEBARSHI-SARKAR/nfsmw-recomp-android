#include "keymap.h"

#include <SDL3/SDL_keycode.h>
#include <SDL3/SDL_scancode.h>

namespace {
struct Row {
    int scancode;
    uint16_t key;
};
// One row per key input.cpp's table can deliver; the numbers on the right
// are the macOS virtual key codes that table is keyed on.
const Row kRows[] = {
    {SDL_SCANCODE_A, 0x00},
    {SDL_SCANCODE_S, 0x01},
    {SDL_SCANCODE_D, 0x02},
    {SDL_SCANCODE_F, 0x03},
    {SDL_SCANCODE_H, 0x04},
    {SDL_SCANCODE_G, 0x05},
    {SDL_SCANCODE_Z, 0x06},
    {SDL_SCANCODE_X, 0x07},
    {SDL_SCANCODE_C, 0x08},
    {SDL_SCANCODE_V, 0x09},
    {SDL_SCANCODE_B, 0x0B},
    {SDL_SCANCODE_Q, 0x0C},
    {SDL_SCANCODE_W, 0x0D},
    {SDL_SCANCODE_E, 0x0E},
    {SDL_SCANCODE_R, 0x0F},
    {SDL_SCANCODE_Y, 0x10},
    {SDL_SCANCODE_T, 0x11},
    {SDL_SCANCODE_1, 0x12},
    {SDL_SCANCODE_2, 0x13},
    {SDL_SCANCODE_3, 0x14},
    {SDL_SCANCODE_4, 0x15},
    {SDL_SCANCODE_6, 0x16},
    {SDL_SCANCODE_5, 0x17},
    {SDL_SCANCODE_EQUALS, 0x18},
    {SDL_SCANCODE_9, 0x19},
    {SDL_SCANCODE_7, 0x1A},
    {SDL_SCANCODE_MINUS, 0x1B},
    {SDL_SCANCODE_8, 0x1C},
    {SDL_SCANCODE_0, 0x1D},
    {SDL_SCANCODE_RIGHTBRACKET, 0x1E},
    {SDL_SCANCODE_O, 0x1F},
    {SDL_SCANCODE_U, 0x20},
    {SDL_SCANCODE_LEFTBRACKET, 0x21},
    {SDL_SCANCODE_I, 0x22},
    {SDL_SCANCODE_P, 0x23},
    {SDL_SCANCODE_RETURN, 0x24},
    {SDL_SCANCODE_L, 0x25},
    {SDL_SCANCODE_J, 0x26},
    {SDL_SCANCODE_APOSTROPHE, 0x27},
    {SDL_SCANCODE_K, 0x28},
    {SDL_SCANCODE_SEMICOLON, 0x29},
    {SDL_SCANCODE_BACKSLASH, 0x2A},
    {SDL_SCANCODE_COMMA, 0x2B},
    {SDL_SCANCODE_SLASH, 0x2C},
    {SDL_SCANCODE_N, 0x2D},
    {SDL_SCANCODE_M, 0x2E},
    {SDL_SCANCODE_PERIOD, 0x2F},
    {SDL_SCANCODE_TAB, 0x30},
    {SDL_SCANCODE_SPACE, 0x31},
    {SDL_SCANCODE_GRAVE, 0x32},
    {SDL_SCANCODE_BACKSPACE, 0x33},
    {SDL_SCANCODE_ESCAPE, 0x35},
    {SDL_SCANCODE_RGUI, 0x36},
    {SDL_SCANCODE_LGUI, 0x37},
    {SDL_SCANCODE_LSHIFT, 0x38},
    {SDL_SCANCODE_CAPSLOCK, 0x39},
    {SDL_SCANCODE_LALT, 0x3A},
    {SDL_SCANCODE_LCTRL, 0x3B},
    {SDL_SCANCODE_RSHIFT, 0x3C},
    {SDL_SCANCODE_RALT, 0x3D},
    {SDL_SCANCODE_RCTRL, 0x3E},
    {SDL_SCANCODE_KP_PERIOD, 0x41},
    {SDL_SCANCODE_KP_MULTIPLY, 0x43},
    {SDL_SCANCODE_KP_PLUS, 0x45},
    {SDL_SCANCODE_NUMLOCKCLEAR, 0x47},
    {SDL_SCANCODE_KP_DIVIDE, 0x4B},
    {SDL_SCANCODE_KP_ENTER, 0x4C},
    {SDL_SCANCODE_KP_MINUS, 0x4E},
    {SDL_SCANCODE_KP_0, 0x52},
    {SDL_SCANCODE_KP_1, 0x53},
    {SDL_SCANCODE_KP_2, 0x54},
    {SDL_SCANCODE_KP_3, 0x55},
    {SDL_SCANCODE_KP_4, 0x56},
    {SDL_SCANCODE_KP_5, 0x57},
    {SDL_SCANCODE_KP_6, 0x58},
    {SDL_SCANCODE_KP_7, 0x59},
    {SDL_SCANCODE_KP_8, 0x5B},
    {SDL_SCANCODE_KP_9, 0x5C},
    {SDL_SCANCODE_F5, 0x60},
    {SDL_SCANCODE_F6, 0x61},
    {SDL_SCANCODE_F7, 0x62},
    {SDL_SCANCODE_F3, 0x63},
    {SDL_SCANCODE_F8, 0x64},
    {SDL_SCANCODE_F9, 0x65},
    {SDL_SCANCODE_F11, 0x67},
    {SDL_SCANCODE_PRINTSCREEN, 0x69},
    {SDL_SCANCODE_SCROLLLOCK, 0x6B},
    {SDL_SCANCODE_F10, 0x6D},
    {SDL_SCANCODE_F12, 0x6F},
    {SDL_SCANCODE_PAUSE, 0x71},
    {SDL_SCANCODE_HOME, 0x73},
    {SDL_SCANCODE_PAGEUP, 0x74},
    {SDL_SCANCODE_DELETE, 0x75},
    {SDL_SCANCODE_F4, 0x76},
    {SDL_SCANCODE_END, 0x77},
    {SDL_SCANCODE_F2, 0x78},
    {SDL_SCANCODE_PAGEDOWN, 0x79},
    {SDL_SCANCODE_F1, 0x7A},
    {SDL_SCANCODE_LEFT, 0x7B},
    {SDL_SCANCODE_RIGHT, 0x7C},
    {SDL_SCANCODE_DOWN, 0x7D},
    {SDL_SCANCODE_UP, 0x7E},
};
} // namespace

uint16_t host_keycode_from_scancode(int sdl_scancode) {
    for (const Row &row : kRows)
        if (row.scancode == sdl_scancode)
            return row.key;
    return 0xffff;
}

uint32_t host_modifier_flags_from_sdl(uint32_t mod) {
    // The device-dependent side bits input.cpp's kModifierSides diff, and the
    // generic per-modifier bits the NSEvent layout carried beside them.
    enum : uint32_t {
        LCTRL = 0x1,
        LSHIFT = 0x2,
        RSHIFT = 0x4,
        LCMD = 0x8,
        RCMD = 0x10,
        LALT = 0x20,
        RALT = 0x40,
        RCTRL = 0x2000,
        CAPS = 0x10000,
        ANY_CAPS = 1u << 16,
        ANY_SHIFT = 1u << 17,
        ANY_CTRL = 1u << 18,
        ANY_ALT = 1u << 19,
        ANY_CMD = 1u << 20,
    };
    uint32_t flags = 0;
    if (mod & SDL_KMOD_LSHIFT)
        flags |= LSHIFT | ANY_SHIFT;
    if (mod & SDL_KMOD_RSHIFT)
        flags |= RSHIFT | ANY_SHIFT;
    if (mod & SDL_KMOD_LCTRL)
        flags |= LCTRL | ANY_CTRL;
    if (mod & SDL_KMOD_RCTRL)
        flags |= RCTRL | ANY_CTRL;
    if (mod & SDL_KMOD_LALT)
        flags |= LALT | ANY_ALT;
    if (mod & SDL_KMOD_RALT)
        flags |= RALT | ANY_ALT;
    if (mod & SDL_KMOD_LGUI)
        flags |= LCMD | ANY_CMD;
    if (mod & SDL_KMOD_RGUI)
        flags |= RCMD | ANY_CMD;
    if (mod & SDL_KMOD_CAPS)
        flags |= CAPS | ANY_CAPS;
    return flags;
}
