#pragma once
#include <cstdint>

// One clock sample per draw, measured in real milliseconds. The fractional
// remainder survives cap changes and uneven frames; rendering never sets rate.
class AnimationClock {
    uint32_t last_ms_ = 0, fraction_ = 0, visual_ = 0, steps_ = 0;
    bool active_ = false, running_ = false;

  public:
    void reset() {
        *this = {};
    }
    void sample(uint32_t now, uint32_t rate, bool running, uint32_t original_tick) {
        if (!active_) {
            active_ = true;
            last_ms_ = now;
            running_ = running;
            visual_ = original_tick;
            steps_ = running ? 1 : 0;
            visual_ += steps_;
            return;
        }
        const uint32_t elapsed = now - last_ms_; // also handles millisecond wrap
        last_ms_ = now;
        steps_ = 0;
        if (!running || !running_ || elapsed > 250) {
            // Pause, loading and suspend do not create animation catch-up debt.
            fraction_ = 0;
            running_ = running;
            return;
        }
        fraction_ += elapsed * rate;
        steps_ = fraction_ / 1000;
        fraction_ %= 1000;
        visual_ += steps_;
    }
    bool active() const {
        return active_;
    }
    uint32_t steps() const {
        return steps_;
    }
    uint32_t visual_tick() const {
        return visual_;
    }
};

// The two original draw-limit paths, independent of the new presentation cap.
inline uint32_t legacy_animation_rate(uint8_t draw_limit, uint8_t state, uint8_t flags) {
    if (state == 2 && flags) {
        if (flags & 2)
            return 14;
        if (flags & 4)
            return 20;
        if (flags & 1)
            return 24;
        return 60;
    }
    return draw_limit ? draw_limit : 40;
}

// 004ee7b0 tests the simulation stamp only in modes 1, 2 and ordinary 4.
// Mode 3 and the special morph in mode 4 always advance on draws.
inline bool animation_follows_turn(uint8_t mode, uint16_t object_flags, uint32_t motion_flags) {
    return (motion_flags & 0x40000) &&
           (mode == 1 || mode == 2 || (mode == 4 && !(object_flags & 0x1000)));
}
