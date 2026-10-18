// gamepad_sdl.cpp - see gamepad_sdl.h.
#include "gamepad_sdl.h"

#include "vpad.h"

#include <stdio.h>

namespace controls {

namespace {

SDL_Gamepad *g_pad = nullptr;
SDL_JoystickID g_id = 0;
bool g_buttons[kSdlPadButtonCount] = {};
int16_t g_axes[kSdlAxisCount] = {};

void publish() {
    vpad().set_source(kPadSourceController, pad_from_sdl(g_buttons, g_axes));
}

// Reads every mapped button and axis from SDL's current state.
void read_all() {
    for (int i = 0; i < kSdlPadButtonCount; ++i)
        g_buttons[i] = SDL_GetGamepadButton(g_pad, SDL_GamepadButton(i));
    for (int i = 0; i < kSdlAxisCount; ++i)
        g_axes[i] = SDL_GetGamepadAxis(g_pad, SDL_GamepadAxis(i));
}

void open_pad(SDL_JoystickID id) {
    SDL_Gamepad *pad = SDL_OpenGamepad(id);
    if (!pad) {
        fprintf(stderr, "[controls] could not open gamepad %u: %s\n", unsigned(id), SDL_GetError());
        return;
    }
    g_pad = pad;
    g_id = id;
    const char *name = SDL_GetGamepadName(pad);
    fprintf(stderr, "[controls] gamepad connected: %s\n", name ? name : "(unnamed)");
    read_all();
    publish();
    vpad().set_controller_connected(true);
}

// Opens the first attached pad, if any, when none is open. `skip` is an
// instance SDL may still list although it is going away (the one whose
// SDL_EVENT_GAMEPAD_REMOVED is being handled); 0 skips nothing.
void open_any(SDL_JoystickID skip) {
    if (g_pad)
        return;
    int count = 0;
    SDL_JoystickID *ids = SDL_GetGamepads(&count);
    if (!ids)
        return;
    for (int i = 0; i < count && !g_pad; ++i)
        if (ids[i] != skip)
            open_pad(ids[i]);
    SDL_free(ids);
}

void close_pad() {
    // Zero first, so a mapped binding or a buffered reader sees every release
    // before the pad is reported gone.
    for (bool &b : g_buttons)
        b = false;
    for (int16_t &a : g_axes)
        a = 0;
    publish();
    vpad().set_controller_connected(false);
    SDL_CloseGamepad(g_pad);
    g_pad = nullptr;
    g_id = 0;
    fprintf(stderr, "[controls] gamepad disconnected\n");
}

} // namespace

void gamepad_handle_event(const SDL_Event &e) {
    switch (e.type) {
    case SDL_EVENT_GAMEPAD_ADDED:
        if (!g_pad)
            open_pad(e.gdevice.which);
        break;
    case SDL_EVENT_GAMEPAD_REMOVED:
        if (g_pad && e.gdevice.which == g_id) {
            const SDL_JoystickID gone = g_id;
            close_pad();
            open_any(gone);
        }
        break;
    case SDL_EVENT_GAMEPAD_BUTTON_DOWN:
    case SDL_EVENT_GAMEPAD_BUTTON_UP:
        if (g_pad && e.gbutton.which == g_id && e.gbutton.button < kSdlPadButtonCount) {
            g_buttons[e.gbutton.button] = e.gbutton.down;
            publish();
        }
        break;
    case SDL_EVENT_GAMEPAD_AXIS_MOTION:
        if (g_pad && e.gaxis.which == g_id && e.gaxis.axis < kSdlAxisCount) {
            g_axes[e.gaxis.axis] = e.gaxis.value;
            publish();
        }
        break;
    default:
        break;
    }
}

void gamepad_poll() {
    // A pad whose SDL_EVENT_GAMEPAD_ADDED went somewhere else (the launcher
    // drains its own events) never reaches gamepad_handle_event, so while
    // nothing is open, look for one every kScanIntervalMs.
    if (!g_pad) {
        constexpr uint64_t kScanIntervalMs = 2000;
        static uint64_t next_scan_ms = 0;
        const uint64_t now_ms = SDL_GetTicks();
        if (now_ms >= next_scan_ms) {
            next_scan_ms = now_ms + kScanIntervalMs;
            open_any(0);
        }
    }
    if (!g_pad)
        return;
    read_all();
    publish();
}

bool gamepad_connected() {
    return g_pad != nullptr;
}

bool gamepad_rumble(uint16_t low, uint16_t high, uint32_t ms) {
    return g_pad && SDL_RumbleGamepad(g_pad, low, high, ms);
}

} // namespace controls
