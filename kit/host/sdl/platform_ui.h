// platform_ui.h - what the SDL host does differently per platform: hints
// before SDL_Init, where the game comes from, the one window, and the app
// lifecycle. platform_ui_desktop.cpp is macOS, Linux, Windows and Android;
// platform_ui_ios.mm is iPadOS. Everything else in the host is shared.
#pragma once
#include "../game_path.h"

#include <SDL3/SDL.h>

#include <cstdint>
#include <string>

// Hints that must be set before SDL_Init. Desktop: click-through focus, no
// screensaver. iOS/Android: landscape, no synthesized touch->mouse events.
void platform_ui_init_hints();

// The game executable to load. Desktop: --exe, RECOMP_EXE, checkout, saved
// path (may be empty: the caller shows the picker). iOS: Documents/game/<exe>,
// seeded from the bundle; empty with *error set when the bundle has no game or
// the copy failed. Android resolves its external files root directly in main.
GamePath platform_ui_resolve_game(const char *flag, std::string *error);

// The one window. Desktop: window_w x window_h points with a min_w x min_h
// minimum, resizable, centered, hidden until shown. iOS/Android: fullscreen.
// *window_mode receives 0 (desktop window) or 2 (fullscreen).
SDL_Window *platform_ui_create_window(const char *title, int window_w, int window_h, int min_w,
                                      int min_h, SDL_WindowFlags surface_flag, int *window_mode);

// True when `e` was an app lifecycle event this platform consumed
// (background: pause audio and presentation; foreground: resume). Desktop:
// always false.
bool platform_ui_handle_lifecycle(const SDL_Event &e);

// Whether the on-screen controls (host/controls/controls_host.h) should show:
// iOS/Android without a hardware keyboard. Desktop: never.
bool platform_ui_keypad_wanted();

// Whether this is a phone or tablet: the on-screen controls may show at all
// (desktop shows them only under RECOMP_KEYPAD), and a device motor can stand
// in for controller rumble. iOS and Android: true. Desktop: false.
bool platform_ui_touch_device();

// Whether this platform has a pointer the host may hide and confine. Desktop:
// yes. iOS/Android: no; fingers are placed absolutely and a captured host would read
// the OS pointer, which touch never moves.
bool platform_ui_pointer_capture_supported();

// The performance overlay mode a fresh profile starts with: 2 (graph) on the
// developer's desktop, 0 on a player's tablet.
int platform_ui_default_overlay();

// The guest has exited and the host has torn down: a desktop process returns
// from main; iOS and Android end the process after SDL_Quit.
void platform_ui_process_exit(int code);

// A light tap tick for an on-screen control press. iOS: UIImpactFeedbackGenerator
// (light style). Android: performHapticFeedback(KEYBOARD_TAP). Desktop: no-op.
void platform_ui_haptic_tap();

// The device's own motor, standing in for game rumble when no controller is
// connected. `low`/`high` are the guest's low/high-frequency motor strengths
// (0..65535, as SDL_GetGamepadRumble takes them); 0,0 stops the motor.
// iOS: a Core Haptics continuous player, intensity max(low, high)/65535.
// Android: Vibrator.vibrate with an amplitude derived the same way. Desktop: no-op.
void platform_ui_device_rumble(uint16_t low, uint16_t high);
