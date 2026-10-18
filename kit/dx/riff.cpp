// riff.cpp - RIFF WAVE in guest memory: the header a game hands a sound
// library after reading a .wav itself. PCM (format tag 1) only.
#include "riff.h"
#include "../runtime/memory.h"

// Walk padded chunks without trusting their lengths to fit the guest image.
// A truncated data chunk exposes only its available bytes, never adjacent memory.
bool riff_parse_wave(uint32_t p, uint32_t bytes, RiffWave *out) {
    if (!out || bytes < 12 || !gm_valid(p, bytes) || rd32(p) != 0x46464952 /* RIFF */ ||
        rd32(p + 8) != 0x45564157 /* WAVE */)
        return false;
    uint32_t at = p + 12, end = p + bytes;
    bool have_fmt = false;
    RiffWave wave{};
    while (end - at >= 8) {
        uint32_t id = rd32(at), size = rd32(at + 4);
        uint32_t data = at + 8, available = end - data;
        if (id == 0x20746d66 /* fmt  */) {
            if (size < 16 || size > available || rd16(data) != 1)
                return false;
            wave.channels = rd16(data + 2);
            wave.rate = rd32(data + 4);
            wave.bits = rd16(data + 14);
            if ((wave.channels != 1 && wave.channels != 2) || !wave.rate || wave.rate > INT32_MAX ||
                (wave.bits != 8 && wave.bits != 16))
                return false;
            have_fmt = true;
        } else if (id == 0x61746164 /* data */ && have_fmt) {
            wave.pcm = data;
            wave.pcm_bytes = size > available ? available : size;
            if (!wave.pcm_bytes)
                return false;
            *out = wave;
            return true;
        }
        uint64_t padded = (uint64_t)size + (size & 1u);
        if (padded > available)
            return false;
        at = data + (uint32_t)padded;
    }
    return false;
}
