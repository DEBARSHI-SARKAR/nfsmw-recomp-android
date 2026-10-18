// launcher_sdl.h - the launcher screen in the app's SDL window, and each
// target's platform (pickers, storage). launcher_sdl.cpp is shared;
// launcher_platform_desktop.cpp is macOS, Windows and Linux,
// launcher_platform_android.cpp is Android, and host/sdl/platform_ui_ios.mm
// holds the iPadOS one.
#pragma once
#include "launcher_ui.h"

#include <SDL3/SDL.h>

#include <memory>
#include <string>

namespace gpu {
class Device;
}

namespace launcher {

struct RunOptions {
    std::string known;    // a folder or executable already resolved ("" if none)
    double auto_play = 0; // seconds a ready game waits before starting (mobile)
    std::string
        dump_path; // RECOMP_LAUNCHER_DUMP: write each drawn frame here (PPM; relative to $HOME)
    // RECOMP_LAUNCHER_KEYS: scripted input for smoke runs, one step every
    // 300 ms: up, down, left, right, next, previous, enter, back, drop:<path>,
    // wait (a step that does nothing).
    std::string keys;
    // Why the game cannot start here (no GPU device); "" when it can.
    std::string unplayable;
};

// Shows the launcher until the player plays or quits. With no `device`
// (a GPU the host cannot use), it draws through SDL's window surface. Returns the game's
// executable, or "" when the player quit. The window keeps its surface; the
// launcher's swapchain is gone when this returns.
std::string run(SDL_Window *window, gpu::Device *device, void *native_surface, Platform &platform,
                const RunOptions &options);

// This target's platform. It never deletes the object: a background import
// is a detached OS thread by design (ImportService keeps the process alive
// after Android tears the activity down) and keeps calling through it until
// the process dies, so the platform outlives SDL main and leaks. The custom
// deleter lets callers keep the unique_ptr shape without destroying it.
using PlatformDeleter = void (*)(Platform *);
std::unique_ptr<Platform, PlatformDeleter> make_platform(SDL_Window *window);

// Whether the player asked for the launcher at start: --launcher, the
// RECOMP_LAUNCHER switch, or Shift or Alt held.
bool requested(int argc, char **argv);

} // namespace launcher
