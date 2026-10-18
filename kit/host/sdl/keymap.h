// keymap.h - SDL scancodes and modifier state in the host's own numbering.
//
// The host's key codes are positional and numbered as macOS virtual keys
// (input.h); the DirectInput and Win32 tables in input.cpp are keyed on them
// and the input gate's tests name keys by them. SDL scancodes are positional
// too, so the two are one table apart, and this is that table.
#pragma once
#include <stdint.h>

// The host key code for an SDL scancode, or 0xffff for a key the host has no
// row for. (0 is a real key: the A key.)
uint16_t host_keycode_from_scancode(int sdl_scancode);
// The host's modifier flags (the layout input.h's host_modifier_* read: left
// and right sides as separate bits, plus caps lock) from an SDL_Keymod.
uint32_t host_modifier_flags_from_sdl(uint32_t sdl_keymod);
