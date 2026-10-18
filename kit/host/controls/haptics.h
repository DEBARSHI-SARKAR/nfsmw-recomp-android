// haptics.h - which motor a rumble command actually drives: a connected
// controller's own motors when there is one, else the touch device's motor,
// else nowhere. RumbleRouter keeps that motor going for as long as the guest
// asks; host/controls/controls_host.cpp feeds it vpad().rumble() and wires
// its outputs to gamepad_rumble and platform_ui_device_rumble. SDL-free.
// Design: docs/superpowers/specs/2026-09-17-touch-controls-design.md, 7.6.
#pragma once

#include <cstdint>
#include <functional>

namespace controls {

enum class RumbleSink { None, Controller, Device };

// controller_connected: a gamepad is open and can rumble itself.
// touch_device: this platform has a device motor to fall back to (iOS/Android).
RumbleSink rumble_sink(bool controller_connected, bool touch_device);

// Where a RumbleRouter sends its commands. 0,0 stops a motor; a controller
// command's `ms` is how long SDL keeps it running (0 with a stop).
struct RumbleOutputs {
    std::function<void(uint16_t low, uint16_t high, uint32_t ms)> controller;
    std::function<void(uint16_t low, uint16_t high)> device;
};

// Turns the guest's latest rumble request into motor commands, called once
// per host pump. A new request (a changed `serial`) goes out at once; a
// non-zero one is then refreshed while it lasts, since SDL's controller
// rumble times out: every kControllerRefreshNs with kControllerMs of
// duration on a controller, every kDeviceRefreshNs on the device. When the
// sink changes (a controller arrives or leaves), the old sink is stopped
// before the new one starts. A zero request stops both sinks once.
class RumbleRouter {
  public:
    static constexpr uint32_t kControllerMs = 1000;
    static constexpr uint64_t kControllerRefreshNs = 500000000ull;
    static constexpr uint64_t kDeviceRefreshNs = 30000000000ull;

    explicit RumbleRouter(RumbleOutputs outputs);
    // serial/low/high: Vpad::rumble_serial() and Vpad::rumble() (serial 0 is
    // "never requested"); sink: rumble_sink() now; now_ns: a monotonic clock.
    void update(uint64_t serial, uint16_t low, uint16_t high, RumbleSink sink, uint64_t now_ns);
    // Stops both motors now and forgets the request that was running, so
    // nothing is refreshed until the guest asks again (a new serial). The
    // host calls this when the layout editor opens, because the pump stops
    // calling update() there and a rumble in flight would otherwise buzz for
    // the whole editing session.
    void stop();

  private:
    void send(RumbleSink sink, uint16_t low, uint16_t high);

    RumbleOutputs out_;
    uint64_t serial_ = 0;
    uint16_t low_ = 0, high_ = 0;
    RumbleSink active_ = RumbleSink::None; // the sink currently running a motor
    uint64_t sent_ns_ = 0;                 // when active_ was last (re)started
};

} // namespace controls
