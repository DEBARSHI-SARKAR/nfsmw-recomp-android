// sink.h - where the mixer's output goes. One implementation opens the
// platform's audio device through SDL; the other renders on demand for tests
// and the headless hosts.
#pragma once
#include <stdint.h>

#include <functional>
#include <memory>

struct AudioSink {
    virtual ~AudioSink() = default;
    // Starts pulling: `render` is called on the sink's thread with
    // deinterleaved float buffers to fill. `rate` is the rate the mixer
    // renders at; the sink converts to the device's own if they differ.
    virtual bool start(double rate,
                       std::function<void(float *left, float *right, uint32_t frames)> render) = 0;
    virtual void stop() = 0;
    virtual bool running() const = 0;
    // Stop pulling from the device without tearing the stream down; resume later.
    virtual void pause(bool paused) = 0;
};
std::unique_ptr<AudioSink> make_sdl_sink();
