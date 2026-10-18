// A media file the guest asked Media Foundation to play, decoded on the host
// with FFmpeg. Video comes out as opaque ARGB frames with the time each is
// due; audio as interleaved signed 16-bit samples. Nothing here touches guest
// memory: the Media Foundation objects above it own that side.
#pragma once
#include <cstdint>
#include <string>
#include <vector>

namespace mf {

struct VideoFrame {
    int32_t width = 0, height = 0;
    double pts = 0;             // seconds from the start of the stream
    std::vector<uint32_t> argb; // width * height, top row first
};

class Media {
  public:
    Media() = default;
    ~Media();
    Media(const Media &) = delete;
    Media &operator=(const Media &) = delete;

    // Opens `path` (a host path) and reads its stream layout. False leaves the
    // object closed and, when `why` is given, says what the decoder refused.
    bool open(const std::string &path, std::string *why = nullptr);
    void close();
    bool is_open() const;

    bool has_video() const;
    bool has_audio() const;
    int32_t width() const;
    int32_t height() const;
    double duration() const; // seconds; 0 when the container does not say
    int32_t audio_rate() const;
    int32_t audio_channels() const;

    // Decodes until the next video frame is ready, appending any audio decoded
    // on the way. False means the file ended (or there is no video at all).
    bool next_video(VideoFrame *out);
    // Decodes audio until at least `samples` interleaved samples are queued or
    // the file ends. Audio-only files need this; with video, next_video feeds
    // the same queue.
    void fill_audio(size_t samples);
    // Hands over everything decoded so far, leaving the queue empty.
    std::vector<int16_t> take_audio();
    bool finished() const;

    // Opaque to callers; the decoder file defines it.
    struct State;

  private:
    State *s_ = nullptr;
};

} // namespace mf
