// gamepad_sdl.h - the first physical controller, through SDL_Gamepad: opened
// on hot-plug, read into the shared virtual pad as kPadSourceController, and
// rumbled on request. Called only from the SDL host's thread (main.cpp and
// controls_host.cpp). SDL's standard mapping names DualSense, Xbox and MFi
// buttons alike, so there are no per-controller tables here.
// Design: docs/superpowers/specs/2026-09-17-touch-controls-design.md, 7.2.
#pragma once

#include <SDL3/SDL.h>

#include <cstdint>

namespace controls {

// SDL_EVENT_GAMEPAD_ADDED opens the pad when none is open;
// SDL_EVENT_GAMEPAD_REMOVED of the open one zeroes its source (the game sees
// every release), marks it disconnected, closes it and opens any other pad
// still attached. Button and axis events of the open pad update the source
// at once, so a press and release inside one pump both reach the edge queue.
void gamepad_handle_event(const SDL_Event &e);
// Once per pump, after the events: re-reads the open pad's whole state into
// the source (a no-op when nothing changed).
void gamepad_poll();
bool gamepad_connected();
// SDL_RumbleGamepad on the open pad; false when there is none or SDL refused.
bool gamepad_rumble(uint16_t low, uint16_t high, uint32_t ms);

} // namespace controls
