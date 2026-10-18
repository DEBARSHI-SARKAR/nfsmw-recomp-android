// Sampling state is host-only. Slots live until process exit; the sampler never
// dereferences a guest context or another thread's mutable stack.
#pragma once
#include <atomic>
#include <cstdint>
#include <vector>
constexpr uint32_t PROFILE_IDLE = UINT32_MAX;
struct ProfileSlot {
    std::atomic<uint32_t> top{PROFILE_IDLE};
};
struct ProfileSample {
    uint32_t index;
    uint64_t samples;
};
void sched_register_profile_slot(ProfileSlot *slot);
ProfileSlot *sched_current_holder_slot();
std::vector<ProfileSample> profile_snapshot();
void profile_stop();
// Task 0 wiring point: call once per measured frame with guest phase milliseconds.
// No-op with profiling disabled (or invalid input). Until Task 0 calls this,
// guest_ms_per_frame is omitted; enabled reporting averages the supplied frames.
// This does not measure time or change guest/scheduler state.
void profile_note_guest_ms(double milliseconds);
extern "C" {
extern const int recomp_profile_enabled;
void recomp_profile_push(uint32_t index);
void recomp_profile_pop();
uint32_t recomp_profile_depth();
void recomp_profile_truncate(uint32_t depth);
}
