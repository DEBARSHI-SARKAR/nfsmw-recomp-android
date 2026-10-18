#pragma once
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <deque>
#include <vector>

// Monotonic seconds; no display-link tick or GPU submission is counted as a
// displayed frame. Offscreen/fallback completions are deliberately excluded.
struct FramePacingSnapshot {
    double new_fps = 0, display_fps = 0, median_ms = 0, p95_ms = 0, gpu_ms = 0, age_ms = 0;
    double repeat_percent = 0;
    uint64_t new_frames = 0, repeats = 0, drops = 0;
    std::vector<double> intervals_ms;
};
class FramePacing {
    struct Event {
        double time, gpu_ms, age_ms;
        bool repeat;
    };
    std::deque<Event> events;
    std::deque<double> intervals;
    double first = -1, last_new = -1;
    uint64_t unique = 0, repeated = 0;

  public:
    void displayed(double ts, bool repeat, double gpu_ms, double age_ms) {
        if (!std::isfinite(ts) || ts < 0 || (!events.empty() && ts < events.back().time))
            return;
        if (first < 0)
            first = ts;
        if (repeat)
            ++repeated;
        else {
            ++unique;
            if (last_new >= 0 && ts > last_new) {
                intervals.push_back((ts - last_new) * 1000);
                if (intervals.size() > 120)
                    intervals.pop_front();
            }
            last_new = ts;
        }
        events.push_back({ts, std::max(0.0, gpu_ms), std::max(0.0, age_ms), repeat});
        while (events.size() > 1024 || (!events.empty() && events.front().time < ts - 2))
            events.pop_front();
    }
    FramePacingSnapshot snapshot(double now, uint64_t drops) const {
        FramePacingSnapshot s;
        s.new_frames = unique;
        s.repeats = repeated;
        s.drops = drops;
        int n = 0, r = 0;
        double gpu = 0, age = 0;
        for (const auto &e : events)
            if (e.time > now - 2 && e.time <= now) {
                ++n;
                r += e.repeat;
                gpu += e.gpu_ms;
                age += e.age_ms;
            }
        const double span = first >= 0 ? std::min(2.0, std::max(0.0, now - first)) : 0;
        if (span >= 0.25) {
            s.new_fps = (n - r) / span;
            s.display_fps = n / span;
        }
        if (n) {
            s.gpu_ms = gpu / n;
            s.age_ms = age / n;
            s.repeat_percent = 100.0 * r / n;
        }
        if (last_new >= 0 && now - last_new < 2 && !intervals.empty()) {
            s.intervals_ms.assign(intervals.begin(), intervals.end());
            auto sorted = s.intervals_ms;
            std::sort(sorted.begin(), sorted.end());
            s.median_ms = sorted[sorted.size() / 2];
            s.p95_ms = sorted[size_t(std::ceil(sorted.size() * .95)) - 1];
        }
        return s;
    }
};
