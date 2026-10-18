// MP3 decoding shared by DirectShow and Miles streams.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wall"
#pragma GCC diagnostic ignored "-Wextra"
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wsign-compare"
#endif
#define MINIMP3_IMPLEMENTATION
#define MINIMP3_NO_SIMD
#include "../third_party/minimp3/minimp3.h"
#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

#include "mp3_source.h"
#include <algorithm>
#include <limits.h>

// Probe the first frame for format without consuming it from the caller.
bool Mp3Source::open(const std::vector<uint8_t> &bytes) {
    bytes_ = bytes;
    rate_ = channels_ = 0;
    duration_ = -1;
    seek_frames(0);
    if (!decode_frame(first_) || !rate_ || !channels_) {
        bytes_.clear();
        first_.clear();
        drained_ = true;
        return false;
    }
    return true;
}

// Skip metadata and empty frames until one yields PCM, as DirectShow did.
bool Mp3Source::decode_frame(std::vector<int16_t> &out) {
    out.clear();
    int16_t pcm[MINIMP3_MAX_SAMPLES_PER_FRAME];
    while (offset_ < bytes_.size()) {
        mp3dec_frame_info_t info;
        int n = mp3dec_decode_frame(&dec_, bytes_.data() + offset_,
                                    (int)std::min(bytes_.size() - offset_, (size_t)INT_MAX), pcm,
                                    &info);
        if (info.frame_bytes <= 0)
            break;
        offset_ += (size_t)info.frame_bytes;
        if (n > 0) {
            if (!rate_) {
                rate_ = (uint32_t)info.hz;
                channels_ = (uint32_t)info.channels;
            }
            out.assign(pcm, pcm + n * info.channels);
            position_ += (uint64_t)n;
            return true;
        }
    }
    drained_ = true;
    return false;
}

bool Mp3Source::decode_next(std::vector<int16_t> &out) {
    if (!first_.empty()) {
        out.swap(first_);
        first_.clear();
        return true;
    }
    return decode_frame(out);
}

// Preserve DirectShow's frame-aligned seek: parse whole frames without PCM
// decoding until reaching the requested position, then decode on the next read.
void Mp3Source::seek_frames(uint64_t target) {
    offset_ = 0;
    mp3dec_init(&dec_);
    first_.clear();
    position_ = 0;
    drained_ = false;
    while (position_ < target && offset_ < bytes_.size()) {
        mp3dec_frame_info_t info;
        int n = mp3dec_decode_frame(&dec_, bytes_.data() + offset_,
                                    (int)std::min(bytes_.size() - offset_, (size_t)INT_MAX),
                                    nullptr, &info);
        if (info.frame_bytes <= 0)
            break;
        offset_ += (size_t)info.frame_bytes;
        position_ += (uint64_t)n;
    }
}

// Count lazily with an independent parser so duration queries do not seek.
int64_t Mp3Source::duration_frames() {
    if (duration_ >= 0)
        return duration_;
    mp3dec_t dec;
    mp3dec_init(&dec);
    size_t off = 0;
    int64_t total = 0;
    while (off < bytes_.size()) {
        mp3dec_frame_info_t info;
        int n = mp3dec_decode_frame(&dec, bytes_.data() + off,
                                    (int)std::min(bytes_.size() - off, (size_t)INT_MAX), nullptr,
                                    &info);
        if (info.frame_bytes <= 0)
            break;
        off += (size_t)info.frame_bytes;
        total += n;
    }
    duration_ = total;
    return total;
}
