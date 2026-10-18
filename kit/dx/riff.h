// RIFF WAVE images remain in guest memory; pcm is a guest address.
#pragma once
#include <stdint.h>

struct RiffWave {
    uint32_t pcm;
    uint32_t pcm_bytes;
    uint32_t rate;
    uint16_t channels;
    uint16_t bits;
};

bool riff_parse_wave(uint32_t guest_ptr, uint32_t bytes, RiffWave *out);
