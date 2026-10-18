// audio_math.cpp - the parts of the mixer that are arithmetic rather than
// AVFoundation, in a file of their own.
//
// They are split out because two hosts want them and only one wants an audio
// device: the windowed host mixes through AVAudioEngine, and the headless smoke
// host only needs to decode the PCM the guest handed over far enough to say
// whether there was a sound in it. Linking AVFoundation to answer that would
// pull an audio device into a run that must not open one.
#include "audio.h"

#include <math.h>
#include <stdint.h>

// ---------------------------------------------------------------------------
// The arithmetic.
// ---------------------------------------------------------------------------
extern "C" float host_audio_gain_from_millibels(int32_t mb) {
    if (mb <= -10000)
        return 0.0f;
    if (mb >= 0)
        return 1.0f;
    return powf(10.0f, (float)mb / 2000.0f);
}

extern "C" void host_audio_pan_gains(int32_t mb, float *left, float *right) {
    // Positive pan attenuates the left channel, negative the right, and the
    // other side is left exactly as it was.
    if (left)
        *left = host_audio_gain_from_millibels(mb > 0 ? -mb : 0);
    if (right)
        *right = host_audio_gain_from_millibels(mb < 0 ? mb : 0);
}

extern "C" uint32_t host_audio_play_rate(uint32_t buffer_rate, uint32_t override_rate,
                                         int overridden) {
    if (overridden && override_rate)
        return override_rate;
    return buffer_rate ? buffer_rate : 22050;
}

extern "C" uint32_t host_audio_frame_bytes(int bits, int channels) {
    if (channels < 1)
        channels = 1;
    return (uint32_t)((bits == 8 ? 1 : 2) * channels);
}

extern "C" uint32_t host_audio_decode_pcm(const void *pcm, uint32_t bytes, int bits, int channels,
                                          float *left, float *right, uint32_t max_frames) {
    if (!pcm || !left)
        return 0;
    if (channels < 1)
        channels = 1;
    uint32_t frame = host_audio_frame_bytes(bits, channels);
    if (!frame)
        return 0;
    uint32_t frames = bytes / frame;
    if (frames > max_frames)
        frames = max_frames;
    const uint8_t *p = (const uint8_t *)pcm;
    for (uint32_t i = 0; i < frames; ++i) {
        float s[2] = {0, 0};
        for (int c = 0; c < channels && c < 2; ++c) {
            if (bits == 8) {
                // Unsigned, silence at 0x80. 0x00 is -1 and 0xff is just under
                // +1, which is the asymmetry the format actually has.
                s[c] = ((float)p[i * frame + c] - 128.0f) / 128.0f;
            } else {
                const uint8_t *q = p + i * frame + c * 2;
                int16_t v = (int16_t)(uint16_t)(q[0] | (q[1] << 8));
                s[c] = (float)v / 32768.0f;
            }
        }
        if (channels == 1)
            s[1] = s[0];
        if (right) {
            left[i] = s[0];
            right[i] = s[1];
        } else {
            left[i] = channels == 1 ? s[0] : (s[0] + s[1]) * 0.5f;
        }
    }
    return frames;
}

extern "C" uint32_t host_audio_wall_clock_bytes(double elapsed, uint32_t rate, int bits,
                                                int channels, uint32_t start_offset,
                                                uint32_t total_bytes, int loop) {
    uint32_t frame = host_audio_frame_bytes(bits, channels);
    if (!frame || !total_bytes || !rate)
        return start_offset;
    if (elapsed < 0.0)
        elapsed = 0.0;
    double bytes = elapsed * (double)rate * (double)frame;
    // A run long enough to overflow this is a run of eight hundred years; the
    // clamp is here so the arithmetic below cannot wrap rather than because it
    // is expected.
    if (bytes > 4.0e18)
        bytes = 4.0e18;
    uint64_t played = (uint64_t)bytes;
    played -= played % frame;
    uint64_t pos = (uint64_t)start_offset + played;
    if (loop)
        return (uint32_t)(pos % total_bytes);
    if (pos >= total_bytes)
        return total_bytes;
    return (uint32_t)pos;
}

extern "C" uint32_t host_audio_position_bytes(uint64_t frames_rendered, uint32_t start_offset,
                                              uint32_t total_bytes, int bits, int channels,
                                              int loop) {
    uint32_t frame = host_audio_frame_bytes(bits, channels);
    if (!frame || !total_bytes)
        return 0;
    uint64_t played = frames_rendered * frame;
    uint64_t pos = (uint64_t)start_offset + played;
    if (loop)
        return (uint32_t)(pos % total_bytes);
    return pos >= total_bytes ? total_bytes : (uint32_t)pos;
}
