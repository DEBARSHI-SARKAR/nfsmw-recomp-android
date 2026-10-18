#include "animation_clock.h"
#include "game_config.h"
#include "display_settings.h"
#include "mods_internal.h"
#include "../runtime/win32.h"
#include <cstdlib>
#include <cstdio>
#include "../platform/os.h"

namespace {
AnimationClock animation_clock;
bool installed = false;
bool timing_enabled() {
    return mods_display_fps() != 0 && !recomp_env("PIN_CLOCK");
}

void frame_time(const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *) {
    if (!timing_enabled()) {
        animation_clock.reset();
        return;
    }
    // maybe_update_framerate just read the real GetTickCount into 005ca840.
    // Keep its render counter/rate untouched: position interpolation uses both.
    const uint8_t state = rd8(0x88f000);
    const auto rate = legacy_animation_rate(rd8(0x89ce62), state, rd8(0x96ead4));
    const bool running = state != 2 || !(rd8(0x89c661) & 2);
    animation_clock.sample(rd32(0x5ca840), rate, running, rd32(0x897981));
}

void animate_units(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    if (!animation_clock.active() || !timing_enabled()) {
        mods_call_next(api, inv, cpu);
        return;
    }
    uint32_t render_units = 0, turn_units = 0;
    if (!(rd8(0x89c661) & 2)) {
        // Walk the same two allocated lists as 004ee770. Retain the original
        // per-unit routine, including its turn-stamp test, morph completion,
        // sprite wrapping, footprints, and any user hooks on that routine.
        X86 *context = guest_current_context();
        for (uint32_t head : {0x890324u, 0x890330u}) {
            for (uint32_t entity = rd32(head); entity; entity = rd32(entity + 4)) {
                const uint16_t flags = rd16(entity + 0x35);
                const uint8_t mode = rd8(0x5a6af8 + 11u * rd8(entity + 0x3a) + 4);
                const bool turn = animation_follows_turn(mode, flags, rd32(entity + 0x14));
                if (turn)
                    ++turn_units;
                else
                    ++render_units;
                const uint32_t steps = turn ? 1 : animation_clock.steps();
                for (uint32_t i = 0; i < steps; ++i)
                    guest_call(context, 0x4ee7b0, entity);
            }
        }
    }
    // Optional bounded diagnostics for comparing live 40/60/120 FPS runs.
    static FILE *trace = []() -> FILE * {
        const char *path = recomp_env("ANIMATION_TRACE");
        FILE *file = path ? fopen(path, "w") : nullptr;
        if (file) {
            setvbuf(file, nullptr, _IOLBF, 0);
            fprintf(file, "ms,render_tick,visual_tick,animation_steps,simulation_turn,render_units,"
                          "turn_units\n");
        }
        return file;
    }();
    static uint32_t trace_rows = 0;
    if (trace && trace_rows++ < 60000)
        fprintf(trace, "%u,%u,%u,%u,%u,%u,%u\n", rd32(0x5ca840), rd32(0x897981),
                animation_clock.visual_tick(), animation_clock.steps(), mods_simulation_turn(),
                render_units, turn_units);
    mods_hook_return(api, cpu, cpu->eax, 0);
}
} // namespace

// Only audited visual phase/blink reads in generated code use this seam.
// The original global remains a rendered-frame ID for movement interpolation.
extern "C" uint32_t recomp_visual_animation_tick(uint32_t original) {
    return animation_clock.active() ? animation_clock.visual_tick() : original;
}

bool mods_animation_init() {
#if !RECOMP_MODS_BUILTIN_POPULOUS
    return true; // this game has none of Populous's routines (game.toml [mods] builtin)
#endif
    if (installed)
        return true;
    uint32_t ids[2]{};
    if (mods_hook_install_ex(MODS_OWNER_RUNTIME, 0x49c9f0, 0, frame_time, POP_HOOK_AFTER,
                             POP_HOOK_NO_GAME_VIEW, nullptr, &ids[0]) != POP_OK)
        return false;
    if (mods_hook_install_ex(MODS_OWNER_RUNTIME, 0x4ee770, 0, animate_units, POP_HOOK_WRAP,
                             POP_HOOK_NO_GAME_VIEW, nullptr, &ids[1]) != POP_OK) {
        mods_hook_remove(MODS_OWNER_RUNTIME, ids[0]);
        return false;
    }
    installed = true;
    return true;
}
void mods_animation_reset() {
    installed = false;
    animation_clock.reset();
}
