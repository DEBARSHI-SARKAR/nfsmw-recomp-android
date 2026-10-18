// Keep the original CONFIG00 format and option masks. The original game only
// calls its writer at shutdown, yet reloads the file when starting a game.
#include "mods_internal.h"
#include "game_config.h"
#include "options_menu.h"
#include "../runtime/win32.h"
#include "../runtime/memory.h"
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstring>

namespace {
constexpr uint32_t table = 0x5a9a60, land_flags = 0x89c661;
constexpr uint32_t load_config = 0x49a9d0, write_config = 0x49ad20;
constexpr uint32_t resolution = 0x749cf0, resolution_count = 0x89d15c;
constexpr const char *quick_key = "quick_defaults";
bool installed = false, ready = false;
uint32_t last_poll = 0;
std::vector<uint8_t> baseline;
constexpr uint32_t minimap_source = 0x64f474, minimap_pixels = 0x64f478;
uint32_t minimap_w = 0, minimap_h = 0, minimap_pitch = 256, minimap_allocation = 0,
         minimap_capacity = 0;

uint32_t minimap_call(uint32_t address, const uint32_t *args = nullptr, uint32_t count = 0) {
    X86 *c = guest_current_context();
    const X86 saved = *c;
    const uint32_t result = guest_call(c, address, args, count);
    *c = saved;
    return result;
}
void minimap_released(const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *) {
    // A later CRT allocation may reuse the same address for a smaller block.
    // Pointer equality alone cannot carry capacity across guest teardown.
    minimap_w = minimap_h = minimap_allocation = minimap_capacity = 0;
    minimap_pitch = 256;
}
void minimap_dimensions(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    const uint32_t caller = rd32(cpu->esp);
    const uint32_t out_w = rd32(cpu->esp + 12), out_h = rd32(cpu->esp + 16);
    mods_call_next(api, inv, cpu);
    // Only the raster producers own these buffers. Other callers use the
    // same layout query for drawing/picking and must not invalidate them.
    if (caller != 0x42006e && caller != 0x41fd21)
        return;
    const uint32_t w = rd32(out_w), h = rd32(out_h);
    if (w == minimap_w && h == minimap_h)
        return;
    // The original full-map allocation is also cached by pointer alone.
    // Rebuild both buffers before either producer writes a different size.
    minimap_call(0x41fff0);
    minimap_w = w;
    minimap_h = h;
    minimap_pitch = 256;
    minimap_allocation = minimap_capacity = 0;
}
// Replace the minimap scroll path when the selected mode exceeds the original buffer size.
// Allocate through the guest CRT so resolution and level teardown retain matching ownership.
void scroll_minimap(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    const uint32_t w = rd32(cpu->esp + 4), h = rd32(cpu->esp + 8);
    if (w <= 256 && h <= 256) {
        mods_call_next(api, inv, cpu);
        return;
    }
    const uint32_t source = rd32(minimap_source), old = rd32(minimap_pixels);
    const uint32_t pitch = (std::max(256u, w) + 7u) & ~7u;
    if (!w || !h || w > 3840 || h > 2160 || !source || !old || !gm_valid(source, uint64_t(w) * h)) {
        minimap_pitch = 0;
        mods_hook_return(api, cpu, 0, 0);
        return;
    }
    const uint32_t bytes = pitch * std::max(256u, h);
    if (old != minimap_allocation || pitch != minimap_pitch || bytes > minimap_capacity) {
        // These pointers are freed by the guest CRT at resolution/level
        // teardown; allocate through that same allocator, not the host heap.
        const uint32_t replacement = minimap_call(0x55c210, &bytes, 1);
        if (!replacement) {
            minimap_pitch = 0;
            mods_hook_return(api, cpu, 0, 0);
            return;
        }
        memset(gm_ptr(replacement), 0, bytes);
        minimap_call(0x55bdd0, &old, 1);
        wr32(minimap_pixels, replacement);
        minimap_allocation = replacement;
        minimap_pitch = pitch;
        minimap_capacity = bytes;
    }
    const uint32_t player = rd8(0x89c6f0);
    if (player >= 4) {
        minimap_pitch = 0;
        mods_hook_return(api, cpu, 0, 0);
        return;
    }
    const uint32_t camera = 0x89d1c8 + player * 0xc65;
    const uint32_t x = uint8_t((rd16(camera + 0x24) >> 8 & 0xfe) + 128) * w / 256;
    const uint32_t y = uint8_t((rd16(camera + 0x26) >> 8 & 0xfe) + 128) * h / 256;
    // The original four-quadrant wrap, with a row stride that accommodates
    // the active minimap instead of its hard-coded 256-byte rows.
    for (uint32_t row = 0; row < h; ++row) {
        const uint8_t *src = gm_ptr(source + ((row + h - y) % h) * w);
        uint8_t *dst = gm_ptr(minimap_allocation + row * pitch);
        memcpy(dst, src + x, w - x);
        memcpy(dst + w - x, src, x);
    }
    mods_hook_return(api, cpu, 0, 0);
}
void minimap_draw_buffer(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    const uint32_t desc = rd32(cpu->esp + 4);
    // Entity markers use the guest's normal software drawing context.
    // Its descriptor must agree with the expanded terrain buffer's stride.
    if (minimap_allocation && rd32(minimap_pixels) == minimap_allocation && gm_valid(desc, 16) &&
        rd32(desc) == minimap_allocation) {
        // The original stores a pointer to this descriptor for subsequent
        // marker draws. Keep the corrected pitch for its whole stack lifetime.
        wr32(desc + 12, minimap_pitch);
        mods_call_next(api, inv, cpu);
    } else
        mods_call_next(api, inv, cpu);
}
void minimap_markers(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    if (!minimap_pitch) {
        mods_hook_return(api, cpu, 0, 0);
        return;
    }
    mods_call_next(api, inv, cpu);
}
void minimap_upload(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    // The texture conversion call independently hard-codes the source pitch.
    const uint32_t slot = cpu->esp + 16, old = rd32(slot);
    if (!minimap_pitch && rd32(cpu->esp) == 0x41fe02) {
        mods_hook_return(api, cpu, 0, 24);
        return;
    }
    const bool adjust = minimap_allocation && rd32(cpu->esp) == 0x41fe02 &&
                        rd32(cpu->esp + 4) == minimap_allocation;
    if (adjust)
        wr32(slot, minimap_pitch);
    mods_call_next(api, inv, cpu);
    if (adjust)
        wr32(slot, old);
}

std::vector<uint8_t> snapshot(bool masked) {
    std::vector<uint8_t> out;
    // The pinned image's 59 descriptors are 20 bytes each. Type 4 stores the
    // whole flag word on disk but restores only its descriptor's option bit.
    for (uint32_t i = 0; i < 59; ++i) {
        const uint32_t d = table + i * 20, p = rd32(d), n = rd16(d + 16);
        if (masked && rd8(d + 18) == 4) {
            const uint32_t value = rd32(p) & rd32(d + 4);
            for (uint32_t b = 0; b < 4; ++b)
                out.push_back(uint8_t(value >> (8 * b)));
        } else
            for (uint32_t b = 0; b < n; ++b)
                out.push_back(rd8(p + b));
    }
    return out;
}
std::vector<uint8_t> read_saved(const std::string &guest_path) {
    std::ifstream in(win32_host_path(guest_path), std::ios::binary);
    return {std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>()};
}
// Save changed original option bits through the guest writer and verify the resulting files.
// Advance the baseline only after success so failed writes remain pending for retry.
bool flush_changed() {
    if (!ready || snapshot(true) == baseline)
        return true;
    X86 *c = guest_current_context();
    const X86 saved = *c;
    // Force a write even when a value happens to match the ORIGINAL loader's
    // old comparison fields. Our baseline advances after each successful save.
    wr32(land_flags, rd32(land_flags) | 0x40000);
    const auto expected = snapshot(false);
    guest_call(c, write_config);
    *c = saved;
    const auto dat = read_saved(gm_str(0x98d1d0));
    const auto ver = read_saved(gm_str(0x98d250));
    if (dat == expected && ver.size() == 68 && ver[0] == 0x30 && !ver[1] && !ver[2] && !ver[3]) {
        baseline = snapshot(true);
        log_msg(1, "settings: saved in-game options to the writable profile");
        return true;
    } else {
        wr32(land_flags, rd32(land_flags) | 0x40000);
        LOGW("settings: could not save in-game options; retaining pending changes");
        return false;
    }
}
// Flush pending edits before invoking the original configuration loader.
// A failed save defers reload rather than replacing current settings with stale disk contents.
void reload(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    // If storage is unavailable, reloading the old file would discard the
    // user's pending changes. Keep them in memory and retry at a later frame.
    if (!flush_changed()) {
        mods_hook_return(api, cpu, cpu->eax, 0);
        return;
    }
    mods_call_next(api, inv, cpu);
    // Respect the game's explicit NOCONFIG mode, including at initial boot.
    ready = !(rd32(land_flags) & 0x20000000);
    baseline = snapshot(true);
    last_poll = rd32(0x5ca840);
}
// Apply queued Options actions each frame and poll changed game settings at most four times a second.
void after_frame(const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *) {
    mods_options_frame();
    if (!ready)
        return;
    const uint32_t now = rd32(0x5ca840); // maybe_update_framerate's clock sample
    if (uint32_t(now - last_poll) < 250)
        return;
    last_poll = now;
    flush_changed();
}
// Expose the full supported mode list while preserving the saved Graphics selection.
void enumerate_modes(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    const uint8_t chosen = rd8(resolution);
    // 0049c62e otherwise filters the enumerated 16-bit list down to exactly
    // 640x480 and 800x600. Enable its existing full-list path only for this
    // call; the command-line/level flag must keep its original meaning elsewhere.
    const uint8_t flags = rd8(0x89c66d);
    wr8(0x89c66d, flags | 4);
    mods_call_next(api, inv, cpu);
    wr8(0x89c66d, (rd8(0x89c66d) & ~4) | (flags & 4));
    // init_screen_resolutions unconditionally replaces the CONFIG00 choice
    // with its 640x480 index. Keep that mode for the frontend's CURRENT mode,
    // but retain a supported user choice for the graphics menu and next game.
    if (chosen < rd8(resolution_count))
        wr8(resolution, chosen);
}
// Admit validated high-resolution modes without overflowing the guest resolution tables.
void enumerate_display_mode(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    const uint32_t desc = rd32(cpu->esp + 4), before = rd32(0x5cdc50);
    // The first table holds 64 entries, but init_screen_resolutions copies
    // into a 48-entry table. Stop before either can overflow.
    if (before >= 48) {
        mods_hook_return(api, cpu, 0, 8);
        return;
    }
    const uint32_t w = rd32(desc + 12), h = rd32(desc + 8);
    if ((w <= 1600 && h <= 1600) || w > 3840 || h > 2160 || rd32(desc + 84) != 16) {
        mods_call_next(api, inv, cpu);
        return;
    }
    // 004b0e86/004b0e93 reject dimensions above 1600 before checking the
    // device's pixel-format capabilities. Let the original callback perform
    // those checks, then retain the actual offered size in its accepted row.
    wr32(desc + 12, std::min(w, 1600u));
    wr32(desc + 8, std::min(h, 1600u));
    mods_call_next(api, inv, cpu);
    wr32(desc + 12, w);
    wr32(desc + 8, h);
    if (rd32(0x5cdc50) == before + 1) {
        wr32(0x98ea30 + before * 12, w);
        wr32(0x98ea34 + before * 12, h);
    }
}
// Scale camera zoom from its original reference height for newly supported resolutions.
// Rendering and picking share the same camera value, avoiding compounded scaling on repeated resets.
void scale_camera_for_resolution(const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *) {
    const uint32_t w = rd16(0x89c6cf), h = rd16(0x89c6d1);
    if (w <= 1024 && h <= 768)
        return; // retain the original supported camera views
    // VCONFIG0 has no camera records for the new modes. Its pixel-space zoom
    // otherwise stays at the nearest old mode (the flyby even uses 640x480),
    // exposing terrain outside the authored mesh bounds at 4K. Scale the
    // rendered zoom by the active camera record's reference height. The
    // original reset copied this value immediately before this AFTER hook,
    // so repeated camera updates cannot compound the scale. Both forward
    // projection and picking consume this same player-camera value.
    const uint32_t reference_h = rd16(0x88f036), player = rd8(0x89c6f0);
    const int32_t zoom = int32_t(rd32(0x88f00c));
    if (!reference_h || player >= 4 || zoom <= 0)
        return;
    const int64_t scaled = int64_t(zoom) * h / reference_h;
    if (scaled > 0 && scaled <= INT32_MAX)
        wr32(0x89d1c8 + player * 0xc65 + 0x2a, uint32_t(scaled));
}
// Restore the saved preset label without reapplying it over individually restored graphics choices.
void initialize_quick_defaults(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv,
                               void *) {
    int64_t value = -1;
    mods_settings_get(MODS_OWNER_RUNTIME, quick_key, &value);
    if (value >= 0 && value <= 2) {
        const uint32_t control = rd32(cpu->esp + 4);
        wr32(control + 0x30, uint32_t(value));
        wr32(0x5d46ac, 0); // one-time hardware autodetection is already satisfied
        // CONFIG00 already restored the individual options. Applying a preset
        // again here would erase any subsequent custom adjustments.
        mods_hook_return(api, cpu, cpu->eax, 0);
    } else
        mods_call_next(api, inv, cpu);
}
// Run the original graphics preset, then persist its selection and resulting individual options.
void apply_quick_defaults(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    const uint32_t control = rd32(cpu->esp + 4);
    mods_call_next(api, inv, cpu);
    const uint32_t choice = rd32(control + 0x30);
    if (choice <= 2)
        mods_settings_set(MODS_OWNER_RUNTIME, quick_key, choice);
    flush_changed();
}
} // namespace

// Install persistence, mode enumeration, camera and minimap hooks with rollback on partial failure.
bool mods_game_settings_init() {
#if !RECOMP_MODS_BUILTIN_POPULOUS
    return true; // this game has none of Populous's routines (game.toml [mods] builtin)
#endif
    if (installed)
        return true;
    mods_settings_declare(MODS_OWNER_RUNTIME, "guest.options", quick_key, "Quick Defaults",
                          POP_SETTING_INT, -1, -1, 2);
    const uint32_t addresses[] = {load_config, 0x49c9f0, 0x49c570, 0x4c5390, 0x4c54e0,
                                  0x4b0e80,    0x47f480, 0x44b770, 0x420100, 0x5280f0,
                                  0x42fe70,    0x4202d0, 0x41fff0};
    const int modes[] = {POP_HOOK_WRAP, POP_HOOK_AFTER, POP_HOOK_WRAP, POP_HOOK_WRAP, POP_HOOK_WRAP,
                         POP_HOOK_WRAP, POP_HOOK_AFTER, POP_HOOK_WRAP, POP_HOOK_WRAP, POP_HOOK_WRAP,
                         POP_HOOK_WRAP, POP_HOOK_WRAP,  POP_HOOK_AFTER};
    const PopHookFn callbacks[] = {reload,
                                   after_frame,
                                   enumerate_modes,
                                   initialize_quick_defaults,
                                   apply_quick_defaults,
                                   enumerate_display_mode,
                                   scale_camera_for_resolution,
                                   minimap_dimensions,
                                   scroll_minimap,
                                   minimap_draw_buffer,
                                   minimap_upload,
                                   minimap_markers,
                                   minimap_released};
    uint32_t ids[std::size(addresses)]{};
    for (size_t i = 0; i < std::size(addresses); ++i) {
        if (mods_hook_install_ex(MODS_OWNER_RUNTIME, addresses[i], 0, callbacks[i], modes[i],
                                 POP_HOOK_NO_GAME_VIEW, nullptr, &ids[i]) != POP_OK) {
            for (int j = 0; j < i; ++j)
                mods_hook_remove(MODS_OWNER_RUNTIME, ids[j]);
            return false;
        }
    }
    installed = true;
    return true;
}
void mods_game_settings_reset() {
    installed = ready = false;
    last_poll = 0;
    baseline.clear();
    minimap_w = minimap_h = minimap_allocation = minimap_capacity = 0;
    minimap_pitch = 256;
}
