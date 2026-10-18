#include "mods_tests.h"
#include "../animation_clock.h"
#include "../display_settings.h"
#include "../mods_internal.h"
#include "../../runtime/loader.h"
#include "../../runtime/memory.h"
#include "../../runtime/win32.h"
#include "../../runtime/intrinsics.h"
#include <array>
#include <cstdlib>
#include <vector>
#include "../../platform/os.h"

MOD_TEST_SUITE(animation_clock_elapsed_time) {
    for (uint32_t rate : {14u, 20u, 24u, 40u, 60u}) {
        for (uint32_t fps : {40u, 60u, 120u}) {
            AnimationClock clock;
            uint32_t steps = 0;
            for (uint32_t frame = 0; frame <= 10 * fps; ++frame) {
                clock.sample(1000 + frame * 1000 / fps, rate, true, 500 + frame);
                steps += clock.steps();
            }
            MOD_CHECK_EQ(steps, 1 + 10 * rate);
            MOD_CHECK_EQ(clock.visual_tick(), 501 + 10 * rate);
        }
    }
    AnimationClock clock;
    clock.sample(0xfffffff0, 40, true, 100);
    clock.sample(9, 40, true, 103); // real millisecond counter wrap
    MOD_CHECK_EQ(clock.steps(), 1u);
    clock.sample(34, 40, false, 104);
    clock.sample(1034, 40, false, 105);
    clock.sample(1059, 40, true, 106);
    MOD_CHECK_EQ(clock.steps(), 0u);
    MOD_CHECK_EQ(clock.visual_tick(), 102u);
    clock.sample(1084, 40, true, 107);
    MOD_CHECK_EQ(clock.steps(), 1u);
    clock.sample(10000, 40, true, 108); // suspend/loading debt is dropped
    MOD_CHECK_EQ(clock.steps(), 0u);
    clock.sample(10025, 40, true, 109);
    MOD_CHECK_EQ(clock.steps(), 1u);
    clock.reset();
    // Irregular frame times preserve fractional progress, not a rounded
    // per-frame multiplier. A presentation-cap change needs no clock reset.
    uint32_t sum = 0, now = 1000;
    clock.sample(now, 60, true, 0);
    sum += clock.steps();
    for (uint32_t dt : {8u, 9u, 16u, 17u, 25u, 25u}) {
        now += dt;
        clock.sample(now, 60, true, 0);
        sum += clock.steps();
    }
    MOD_CHECK_EQ(sum, 7u);
    MOD_CHECK_EQ(legacy_animation_rate(40, 2, 0), 40u);
    MOD_CHECK_EQ(legacy_animation_rate(40, 2, 8), 60u);
    MOD_CHECK_EQ(legacy_animation_rate(40, 2, 1), 24u);
    MOD_CHECK_EQ(legacy_animation_rate(40, 2, 4), 20u);
    MOD_CHECK_EQ(legacy_animation_rate(40, 2, 7), 14u);
    MOD_CHECK_EQ(legacy_animation_rate(40, 7, 8), 40u);
}

namespace {
uint32_t fake_ms = 0;
uint32_t test_clock() {
    return fake_ms;
}
constexpr uint32_t entity_base = 0x1000000, stride = 0x100;
constexpr uint32_t count = 6;
void setup_world(int cap, uint8_t frame_flags = 0) {
    sched_set_guest_thread(true);
    mods_hooks_reset();
    mods_settings_reset();
    mods_host_set_main_thread();
    mem_init();
    MOD_CHECK(loader_load(nullptr));
    MOD_CHECK(mods_symbols_load(nullptr));
    loader_init_context(loader_context());
    mods_display_init();
    MOD_CHECK_EQ(mods_display_set(DISPLAY_FPS, cap), POP_OK);
    MOD_CHECK(mods_animation_init());
    host_set_time_source(test_clock);
    wr8(0x88f000, 2);
    wr8(0x89c661, 0);
    wr8(0x96ead4, frame_flags);
    wr8(0x89ce62, 40);
    wr32(0x897981, 500);
    wr32(0x890324, entity_base);
    wr32(0x890330, entity_base + 3 * stride);
    for (uint32_t i = 0; i < count; ++i) {
        const uint32_t p = entity_base + i * stride;
        memset(gm_ptr(p), 0, stride);
        wr32(p + 4, (i == 2 || i == 5) ? 0 : p + stride);
        wr16(p + 0x33, 8);
        wr8(p + 0x3a, i);
        wr8(p + 42, 1);
        const uint8_t mode = i < 2 ? 1 : i == 2 ? 2 : i == 3 ? 3 : 4;
        const uint32_t definition = 0x5a6af8 + 11 * i;
        wr8(definition + 1, 120);
        wr8(definition + 3, i == 2 ? 2 : 1);
        wr8(definition + 4, mode);
        if (i == 1 || i == 3 || i == 4)
            wr32(p + 0x14, 0x40000);
        if (i == 4) {
            wr16(p + 0x35, 0x1000);
            wr8(p + 0x71, 255);
        }
    }
    wr32(0x59df44, 0x1100000);
    wr8(0x1100000 + 8 * 6 + 1, 255);
    for (uint32_t i = 0; i < 8; ++i)
        wr8(0x5aa118 + i, i);
    wr8(0x5aa120, 8);
    wr32(0x87cc0c, 0);
    wr16(0x87ccae, 255);
    // The small real palette selector exercises a generated visual clock read.
    wr8(0x89ce6c, 0);
    wr8(0x89d17c, 0);
    wr8(0x89c6e7, 13);
}
std::array<uint32_t, 18> state() {
    std::array<uint32_t, 18> out{};
    for (uint32_t i = 0; i < count; ++i) {
        uint32_t p = entity_base + i * stride;
        out[i * 3] = rd16(p + 0x37) | (uint32_t(rd8(p + 0x39)) << 16);
        out[i * 3 + 1] = rd16(p + 0x33) | (uint32_t(rd16(p + 0x35)) << 16);
        out[i * 3 + 2] = rd16(p + 0x72);
    }
    return out;
}
std::array<uint32_t, 18> run(int fps, uint8_t flags, bool corrected) {
    setup_world(corrected ? (fps == 40 ? 1 : fps == 60 ? 2 : 3) : 0, flags);
    uint32_t last_turn = ~0u;
    X86 *c = loader_context();
    const uint32_t stack = c->r[R_ESP];
    for (int frame = 0; frame <= 10 * fps; ++frame) {
        fake_ms = 1000 + uint32_t(frame) * 1000 / fps;
        guest_call(c, 0x49c9f0);
        uint32_t tick = rd32(0x897981) + 1;
        wr32(0x897981, tick);
        if ((fake_ms - 1000) / 100 != last_turn) {
            last_turn = (fake_ms - 1000) / 100;
            wr32(entity_base + stride + 0x18, tick);
        }
        guest_call(c, 0x4ee770);
        const auto visual = recomp_visual_animation_tick(tick);
        MOD_CHECK_EQ(guest_call(c, 0x47a8b0) & 255, 30 + (visual & 3));
        MOD_CHECK_EQ(rd32(0x897981), tick); // interpolation counter is never swapped
        MOD_CHECK_EQ(c->r[R_ESP], stack);
    }
    auto out = state();
    host_clear_time_source();
    mods_hooks_reset();
    mods_settings_reset();
    return out;
}
} // namespace

MOD_TEST_SUITE(animation_real_guest_cadence) {
    // Compare the shipping hook to the ORIGINAL generated animation routines
    // at the original cadence, including sprite and morph wrap rules.
    for (uint8_t flags : {uint8_t(0), uint8_t(8), uint8_t(1), uint8_t(4), uint8_t(2)}) {
        const auto baseline = run(legacy_animation_rate(40, 2, flags), flags, false);
        for (int fps : {40, 60, 120}) {
            const auto actual = run(fps, flags, true);
            for (size_t i = 0; i < actual.size(); ++i)
                MOD_CHECK_EQ(actual[i], baseline[i]);
        }
    }
    // Original and pinned fixture hosts retain per-render animation verbatim.
    const auto original = run(120, 0, false);
    for (const char *pin : {"RECOMP_PIN_CLOCK"}) {
        os_setenv(pin, "1000,8");
        const auto pinned = run(120, 0, true);
        os_unsetenv(pin);
        MOD_CHECK(pinned == original);
    }
}
