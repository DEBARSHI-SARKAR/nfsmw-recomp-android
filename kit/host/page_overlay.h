// page_overlay.h - draw the settings page on a frame the HOST owns.
//
// WHY THIS EXISTS RATHER THAN THREE COPIES OF IT. Every presenter is handed a
// pointer to the guest's own DirectDraw surface. Drawing the page there would
// corrupt pixels the game is still reading and would change what the guest
// itself sees - a mod's overlay would become part of the simulation's input.
// So the page is drawn on a copy, and the presenter converts the copy.
//
// Three hosts present frames (headless, smoke, windowed) and all three have
// the same obligation, so the rule lives in one place where it can be tested
// once instead of being restated three times and drifting.
#pragma once
#include <stdint.h>

// Whether the mod runtime is live in this process. False until a host says
// otherwise, so a build with mods disabled - RECOMP_NO_MODS, or a host that
// sets BootOptions::load_mods false - never registers the page's keyboard and
// never draws it. That matters beyond the drawing: the page's key handler
// consumes F10 unconditionally and every key while it is open, so registering
// it with mods off would change what the guest sees.
void host_page_set_enabled(bool enabled);
bool host_page_enabled(void);

// Returns host-owned storage holding `pixels` with the settings page drawn on
// it. The returned pointer is valid until the next call on this thread. The
// bytes behind `pixels` are never written.
//
// `pitch` is the surface's stride in bytes; a non-positive one is treated as
// the tightly packed width, which is what the shims pass for a locked surface
// with no padding.
const void *host_page_overlay(const void *pixels, int w, int h, int bpp, int pitch,
                              const uint32_t *palette);

#include <vector>
// Transparent outside the page. Generated under the guest baton, copied into
// the sealed frame; the presenter never calls the mod/settings registries.
bool host_page_rgba(std::vector<uint8_t> *rgba);
