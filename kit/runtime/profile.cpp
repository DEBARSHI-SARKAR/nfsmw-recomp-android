#include "profile.h"
#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <mutex>
#include <thread>
#include "../platform/os.h"

extern "C" const int recomp_profile_enabled = [] {
    const char *value = recomp_env("PROFILE");
    return value && std::strcmp(value, "1") == 0;
}();
// Generated table supplies names; runtime-only tests need no generated table.
extern "C" __attribute__((weak)) const char *recomp_profile_name(uint32_t) {
    return nullptr;
}
namespace {
struct ThreadState {
    ProfileSlot slot;
    std::vector<uint32_t> stack;
};
// Intentionally process-lifetime: a sampler snapshot can outlive thread exit.
thread_local ThreadState *local = nullptr;
struct State {
    std::atomic<bool> stop{false};
    std::thread sampler;
    std::mutex mutex;
    std::map<uint32_t, uint64_t> counts;
    uint64_t idle = 0;
    double guest_ms = 0;
    uint64_t guest_frames = 0;
};
State &state() {
    static State *s = new State;
    return *s;
}
void report() {
    profile_stop();
    auto rows = profile_snapshot();
    uint64_t total = 0;
    for (auto row : rows)
        total += row.samples;
    fprintf(stderr,
            "profile: 1000 Hz baton-holder wall samples; includes shims/host waits in caller\n");
    fprintf(stderr, "profile: attributed=%llu idle=%llu\n", (unsigned long long)total,
            (unsigned long long)state().idle);
    for (size_t i = 0; i < rows.size() && i < 30; ++i) {
        auto row = rows[i];
        const char *name = recomp_profile_name(row.index);
        if (!name) {
            fprintf(stderr, "profile: unresolved index=%u samples=%llu\n", row.index,
                    (unsigned long long)row.samples);
            continue;
        }
        fprintf(stderr, "profile: %s %.2f%% %llu\n", name,
                total ? 100.0 * row.samples / total : 0.0, (unsigned long long)row.samples);
    }
    auto &s = state();
    std::lock_guard<std::mutex> lock(s.mutex);
    if (s.guest_frames)
        fprintf(stderr, "profile: guest_ms_per_frame=%.3f\n", s.guest_ms / s.guest_frames);
    else
        fprintf(stderr, "profile: guest_ms_per_frame omitted: no phase stats supplied\n");
}
void start() {
    static const bool started = [] {
        std::atexit(report);
        state().sampler = std::thread([] {
            auto &s = state();
            auto next = std::chrono::steady_clock::now();
            while (!s.stop.load(std::memory_order_relaxed)) {
                next += std::chrono::milliseconds(1);
                std::this_thread::sleep_until(next);
                auto *slot = sched_current_holder_slot();
                uint32_t top = slot ? slot->top.load(std::memory_order_relaxed) : PROFILE_IDLE;
                std::lock_guard<std::mutex> lock(s.mutex);
                if (top == PROFILE_IDLE)
                    ++s.idle;
                else
                    ++s.counts[top];
                // A stalled sampler must not manufacture catch-up samples.
                auto now = std::chrono::steady_clock::now();
                if (now > next + std::chrono::milliseconds(1))
                    next = now;
            }
        });
        return true;
    }();
    (void)started;
}
} // namespace
void profile_note_guest_ms(double milliseconds) {
    if (!recomp_profile_enabled || !std::isfinite(milliseconds) || milliseconds < 0)
        return;
    start();
    auto &s = state();
    std::lock_guard<std::mutex> lock(s.mutex);
    s.guest_ms += milliseconds;
    ++s.guest_frames;
}
extern "C" void recomp_profile_push(uint32_t index) {
    if (!recomp_profile_enabled)
        return;
    if (!local) {
        local = new ThreadState;
        sched_register_profile_slot(&local->slot);
        start();
    }
    local->stack.push_back(index);
    local->slot.top.store(index, std::memory_order_relaxed);
}
extern "C" uint32_t recomp_profile_depth() {
    return local ? static_cast<uint32_t>(local->stack.size()) : 0;
}
extern "C" void recomp_profile_truncate(uint32_t depth) {
    if (!local)
        return;
    if (depth < local->stack.size())
        local->stack.resize(depth);
    local->slot.top.store(local->stack.empty() ? PROFILE_IDLE : local->stack.back(),
                          std::memory_order_relaxed);
}
extern "C" void recomp_profile_pop() {
    uint32_t depth = recomp_profile_depth();
    if (depth)
        recomp_profile_truncate(depth - 1);
}
void profile_stop() {
    auto &s = state();
    s.stop.store(true, std::memory_order_relaxed);
    if (s.sampler.joinable())
        s.sampler.join();
}
std::vector<ProfileSample> profile_snapshot() {
    auto &s = state();
    std::lock_guard<std::mutex> lock(s.mutex);
    std::vector<ProfileSample> rows;
    for (auto [index, samples] : s.counts)
        rows.push_back({index, samples});
    std::sort(rows.begin(), rows.end(), [](auto a, auto b) {
        return a.samples != b.samples ? a.samples > b.samples : a.index < b.index;
    });
    return rows;
}
