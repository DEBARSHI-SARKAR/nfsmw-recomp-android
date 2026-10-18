#pragma once
#include <algorithm>
#include <cstdint>

// Fractional monotonic deadlines survive millisecond scheduler rounding.
// A late frame starts a new phase instead of trying to catch up in a burst.
class FrameDeadline {
    int rate_ = 0;
    int64_t deadline_ = 0;

  public:
    void begin(int rate, int64_t now_ns) {
        if (rate != 40 && rate != 60 && rate != 120) {
            rate_ = 0;
            deadline_ = 0;
            return;
        }
        const int64_t period = 1000000000LL / rate;
        if (rate_ != rate || !deadline_ || now_ns > deadline_ + period)
            deadline_ = now_ns + period;
        // The guest also reaches begin while inactive, when it skips drawing
        // and never reaches wait_ms. Those passes must not accumulate future
        // slots: returning to the window would otherwise sleep 100 ms on each
        // frame until an arbitrarily large backlog was exhausted.
        else
            deadline_ = std::min(deadline_ + period, now_ns + period);
        rate_ = rate;
    }
    uint32_t wait_ms(int64_t now_ns) const {
        if (!rate_ || now_ns >= deadline_)
            return 0;
        return uint32_t(std::min<int64_t>((deadline_ - now_ns + 999999) / 1000000, 100));
    }
};
