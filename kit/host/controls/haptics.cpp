// haptics.cpp - see haptics.h.
#include "haptics.h"

#include <utility>

namespace controls {

RumbleSink rumble_sink(bool controller_connected, bool touch_device) {
    if (controller_connected)
        return RumbleSink::Controller;
    if (touch_device)
        return RumbleSink::Device;
    return RumbleSink::None;
}

RumbleRouter::RumbleRouter(RumbleOutputs outputs) : out_(std::move(outputs)) {}

void RumbleRouter::send(RumbleSink sink, uint16_t low, uint16_t high) {
    const bool stop = low == 0 && high == 0;
    if (sink == RumbleSink::Controller && out_.controller)
        out_.controller(low, high, stop ? 0 : kControllerMs);
    else if (sink == RumbleSink::Device && out_.device)
        out_.device(low, high);
}

void RumbleRouter::update(uint64_t serial, uint16_t low, uint16_t high, RumbleSink sink,
                          uint64_t now_ns) {
    const bool changed = serial != serial_;
    if (changed) {
        serial_ = serial;
        low_ = low;
        high_ = high;
    }
    const bool on = low_ != 0 || high_ != 0;
    if (!on) {
        if (changed) { // a stop request: whatever was running, and the other sink too
            send(RumbleSink::Controller, 0, 0);
            send(RumbleSink::Device, 0, 0);
        }
        active_ = RumbleSink::None;
        return;
    }
    if (active_ != sink) {
        send(active_, 0, 0); // the old sink first
        active_ = RumbleSink::None;
    }
    if (sink == RumbleSink::None)
        return;
    const uint64_t period =
        sink == RumbleSink::Controller ? kControllerRefreshNs : kDeviceRefreshNs;
    if (changed || active_ != sink || now_ns - sent_ns_ >= period) {
        send(sink, low_, high_);
        active_ = sink;
        sent_ns_ = now_ns;
    }
}

void RumbleRouter::stop() {
    low_ = high_ = 0;
    send(RumbleSink::Controller, 0, 0);
    send(RumbleSink::Device, 0, 0);
    active_ = RumbleSink::None;
}

} // namespace controls
