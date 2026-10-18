// Bink video imports decode through FFmpeg when available. A build without
// it returns a finished record; Smacker remains refused. All decoder state
// stays on the host, keyed by a 32-bit guest record address.
#include "dx.h"
#include "com.h"
#include "host_api.h"
#include "video_frame.h"
#include "../runtime/imports.h"
#include "../runtime/memory.h"
#include "../runtime/win32.h"
#include "../platform/os.h"

#include <algorithm>
#include <cmath>
#include <errno.h>
#include <string.h>
#include <iterator>

#ifdef RECOMP_HAVE_FFMPEG
extern "C" {
#include <libavformat/avformat.h>
#include <libavcodec/avcodec.h>
}
#include <deque>
#include <map>
#include <memory>
#include <vector>
#endif

namespace {

constexpr uint32_t BINK_RECORD_BYTES = 0x100;
constexpr uint32_t BINK_FILE_HANDLE = 0x00800000;
constexpr uint32_t BINK_FROM_MEMORY = 0x04000000;
uint32_t g_error_string = 0;
char g_error[512] = {};

void ret0(X86 *c) {
    set_eax(c, 0);
}
void ret1(X86 *c) {
    set_eax(c, 1);
}

bool video_error(const char *text) {
    snprintf(g_error, sizeof g_error, "%s", text);
    LOGW("bink: %s", g_error);
    return false;
}

bool check_open_flags(uint32_t flags) {
    if (flags & BINK_FROM_MEMORY)
        return video_error("memory-resident video is not supported");
    uint32_t ignored = flags & ~(BINK_FILE_HANDLE | BINK_FROM_MEMORY);
    if (ignored)
        LOGV("bink: ignoring open flags %08x", ignored);
    return true;
}

#ifdef RECOMP_HAVE_FFMPEG
bool decoder_error(const char *operation, int code) {
    char detail[AV_ERROR_MAX_STRING_SIZE], message[512];
    av_strerror(code, detail, sizeof detail);
    snprintf(message, sizeof message, "%s: %s", operation, detail);
    return video_error(message);
}

// Only the guest baton holder touches a player. Audio service reads ahead
// without advancing the visible frame: compressed video packets are retained
// for DoFrame, and the host mixer copies every submitted PCM chunk.
struct BinkPlayer {
    AVFormatContext *input = nullptr;
    AVIOContext *io = nullptr;
    int file_fd = -1;
    int64_t file_start = 0, file_length = 0, file_position = 0;
    AVCodecContext *video = nullptr, *audio = nullptr;
    AVFrame *frame = nullptr, *audio_frame = nullptr;
    std::deque<AVPacket *> video_packets;
    std::vector<int16_t> pending;
    size_t pending_pos = 0;
    int video_index = -1, audio_index = -1;
    int32_t channel = -1;
    AVRational fps{};
    uint32_t t0 = 0, paused_at = 0, count = 0, current = 1;
    bool paused = false;
    bool eof = false, flushed = false, failed = false;
    bool have_frame = false, audio_started = false, audio_unavailable = false;

    ~BinkPlayer() {
        if (channel >= 0) {
            host_audio_stop(channel);
            dx_free_audio_channel(channel);
        }
        for (AVPacket *packet : video_packets)
            av_packet_free(&packet);
        av_frame_free(&frame);
        av_frame_free(&audio_frame);
        avcodec_free_context(&video);
        avcodec_free_context(&audio);
        avformat_close_input(&input);
        // Custom I/O survives close_input, including a failed open. FFmpeg
        // may replace the original buffer, so free the context's current one.
        if (io) {
            av_freep(&io->buffer);
            avio_context_free(&io);
        }
        if (file_fd >= 0)
            os_fd_close(file_fd);
    }
};
std::map<uint32_t, std::unique_ptr<BinkPlayer>> g_players;

BinkPlayer *player_for(uint32_t rec) {
    auto it = g_players.find(rec);
    return it == g_players.end() ? nullptr : it->second.get();
}

// Expose only the host-file window beginning at the guest's saved position.
// All callbacks use the player's reopened descriptor, never the guest's fd.
int read_file_window(void *opaque, uint8_t *buffer, int bytes) {
    auto &p = *static_cast<BinkPlayer *>(opaque);
    if (bytes <= 0)
        return AVERROR(EINVAL);
    size_t wanted = (size_t)std::min<int64_t>(bytes, p.file_length - p.file_position);
    if (!wanted)
        return AVERROR_EOF;
    int64_t got;
    do {
        got = os_fd_read(p.file_fd, buffer, wanted);
    } while (got < 0 && errno == EINTR);
    if (got < 0)
        return AVERROR(errno);
    if (!got)
        return AVERROR_EOF;
    p.file_position += got;
    return (int)got;
}

int64_t seek_file_window(void *opaque, int64_t offset, int whence) {
    auto &p = *static_cast<BinkPlayer *>(opaque);
    whence &= ~AVSEEK_FORCE;
    if (whence == AVSEEK_SIZE)
        return p.file_length;
    int64_t base;
    switch (whence) {
    case SEEK_SET:
        base = 0;
        break;
    case SEEK_CUR:
        base = p.file_position;
        break;
    case SEEK_END:
        base = p.file_length;
        break;
    default:
        return AVERROR(EINVAL);
    }
    // Check the relative addition before computing a host offset; seeking
    // before the stream or beyond the host file must not escape the window.
    if (offset < -base || offset > p.file_length - base)
        return AVERROR(EINVAL);
    int64_t position = base + offset;
    if (os_fd_seek(p.file_fd, p.file_start + position, OS_SEEK_SET) < 0)
        return AVERROR(errno);
    p.file_position = position;
    return position;
}

// Byte zero is the handle's current offset, and AVSEEK_SIZE reports the rest
// of the host file. Bink's own header bounds its frames, so trailing archive
// data is harmless. The player owns every allocation even if open fails.
bool open_file_window(BinkPlayer &p, const std::string &path, int64_t offset) {
    p.file_fd = os_fd_open(path.c_str(), OS_O_RDONLY);
    if (p.file_fd < 0)
        return decoder_error("open video file", AVERROR(errno));
    OsStat st{};
    if (os_fd_stat(p.file_fd, &st) < 0)
        return decoder_error("query video file size", AVERROR(errno));
    if (offset < 0 || st.size > INT64_MAX || (uint64_t)offset > st.size)
        return video_error("video file offset is outside the host file");
    if (os_fd_seek(p.file_fd, offset, OS_SEEK_SET) < 0)
        return decoder_error("seek video file", AVERROR(errno));
    p.file_start = offset;
    p.file_length = (int64_t)st.size - offset;
    p.input = avformat_alloc_context();
    if (!p.input)
        return video_error("cannot allocate video input");
    constexpr int buffer_bytes = 64 * 1024;
    auto *buffer = static_cast<uint8_t *>(av_malloc(buffer_bytes));
    if (!buffer)
        return video_error("cannot allocate video I/O buffer");
    p.io = avio_alloc_context(buffer, buffer_bytes, 0, &p, read_file_window, nullptr,
                              seek_file_window);
    if (!p.io) {
        av_freep(&buffer);
        return video_error("cannot allocate video I/O context");
    }
    p.input->pb = p.io;
    p.input->flags |= AVFMT_FLAG_CUSTOM_IO;
    int rc = avformat_open_input(&p.input, nullptr, nullptr, nullptr);
    return rc < 0 ? decoder_error("open input", rc) : true;
}

// The imported record has two observed layouts. Both pairs describe the
// same 1-based counter; host pointers never enter these guest fields.
void write_frame_count(uint32_t rec, const BinkPlayer &p) {
    wr32(rec + 0x08, p.count);
    wr32(rec + 0x0c, p.current);
    wr32(rec + 0x10, p.count);
    wr32(rec + 0x14, p.current);
}

bool open_decoder(AVFormatContext *input, int index, AVCodecContext **context) {
    const AVCodec *codec = avcodec_find_decoder(input->streams[index]->codecpar->codec_id);
    if (!codec)
        return video_error("decoder is unavailable");
    *context = avcodec_alloc_context3(codec);
    if (!*context)
        return video_error("cannot allocate decoder");
    int rc = avcodec_parameters_to_context(*context, input->streams[index]->codecpar);
    if (rc < 0)
        return decoder_error("copy codec parameters", rc);
    rc = avcodec_open2(*context, codec, nullptr);
    return rc < 0 ? decoder_error("open decoder", rc) : true;
}

// Bink audio is float PCM, packed or planar. Clamp before conversion so
// full-scale peaks and non-finite decoder output cannot overflow s16.
bool decode_audio(BinkPlayer &p, const AVPacket *packet) {
    int rc = avcodec_send_packet(p.audio, packet);
    if (rc < 0)
        return decoder_error("send audio packet", rc);
    while ((rc = avcodec_receive_frame(p.audio, p.audio_frame)) >= 0) {
        const AVFrame &f = *p.audio_frame;
        if (f.format != AV_SAMPLE_FMT_FLT && f.format != AV_SAMPLE_FMT_FLTP)
            return video_error("unsupported audio sample format (expected float PCM)");
        int channels = f.ch_layout.nb_channels;
        if (channels != p.audio->ch_layout.nb_channels || f.sample_rate != p.audio->sample_rate)
            return video_error("audio format changed during playback");
        if (!p.audio_unavailable) {
            for (int i = 0; i < f.nb_samples; ++i)
                for (int ch = 0; ch < channels; ++ch) {
                    const float *samples = reinterpret_cast<const float *>(
                        f.extended_data[f.format == AV_SAMPLE_FMT_FLTP ? ch : 0]);
                    float value = samples[f.format == AV_SAMPLE_FMT_FLTP ? i : i * channels + ch];
                    if (!std::isfinite(value))
                        value = 0;
                    int sample = (int)std::lround(std::clamp(value, -1.0f, 1.0f) * 32768.0f);
                    p.pending.push_back((int16_t)std::clamp(sample, -32768, 32767));
                }
        }
        av_frame_unref(p.audio_frame);
    }
    return rc == AVERROR(EAGAIN) || rc == AVERROR_EOF || decoder_error("receive audio frame", rc);
}

// Demux one packet, retaining video for DoFrame and decoding audio for the
// refill queue. EOF drains the audio decoder once; video drains in DoFrame.
bool read_packet(BinkPlayer &p) {
    if (p.eof)
        return true;
    AVPacket *packet = av_packet_alloc();
    if (!packet)
        return video_error("cannot allocate packet");
    int rc = av_read_frame(p.input, packet);
    if (rc < 0) {
        av_packet_free(&packet);
        if (rc != AVERROR_EOF)
            return decoder_error("read packet", rc);
        p.eof = true;
        return !p.audio || decode_audio(p, nullptr);
    }
    if (packet->stream_index == p.video_index) {
        p.video_packets.push_back(packet);
        return true;
    }
    bool ok = packet->stream_index != p.audio_index || decode_audio(p, packet);
    av_packet_free(&packet);
    return ok;
}

void BinkOpen(X86 *c) {
    set_eax(c, 0);
    g_error[0] = 0;
    uint32_t name = arg(c, 0), flags = arg(c, 1);
    if (!check_open_flags(flags))
        return;
    auto p = std::make_unique<BinkPlayer>();
    std::string guest;
    if (flags & BINK_FILE_HANDLE) {
        std::string path;
        int64_t offset;
        if (!win32_file_handle_position(name, &path, &offset)) {
            video_error("invalid video file handle");
            return;
        }
        if (!open_file_window(*p, path, offset))
            return;
        guest = win32_guest_path(path);
        LOGV("bink: file handle %08x at offset %lld", name, (long long)offset);
    } else {
        if (!name || !gm_valid(name, 1)) {
            video_error("invalid video filename");
            return;
        }
        guest = gm_str(name);
        std::string path = win32_host_path_op(guest, WIN32_FILE_READ);
        if (path.empty()) {
            video_error("cannot resolve video filename");
            return;
        }
        int rc = avformat_open_input(&p->input, path.c_str(), nullptr, nullptr);
        if (rc < 0) {
            decoder_error("open input", rc);
            return;
        }
    }
    int rc = avformat_find_stream_info(p->input, nullptr);
    if (rc < 0) {
        decoder_error("find stream info", rc);
        return;
    }
    for (unsigned i = 0; i < p->input->nb_streams; ++i) {
        AVMediaType type = p->input->streams[i]->codecpar->codec_type;
        if (type == AVMEDIA_TYPE_VIDEO && p->video_index < 0)
            p->video_index = (int)i;
        if (type == AVMEDIA_TYPE_AUDIO && p->audio_index < 0)
            p->audio_index = (int)i;
    }
    if (p->video_index < 0) {
        video_error("input has no video stream");
        return;
    }
    if (!open_decoder(p->input, p->video_index, &p->video) ||
        (p->audio_index >= 0 && !open_decoder(p->input, p->audio_index, &p->audio)))
        return;
    AVStream *stream = p->input->streams[p->video_index];
    p->fps = stream->avg_frame_rate;
    if (p->fps.num <= 0 || p->fps.den <= 0)
        p->fps = stream->r_frame_rate;
    if (p->fps.num <= 0 || p->fps.den <= 0 || p->video->width <= 0 || p->video->height <= 0) {
        video_error("invalid video dimensions or frame rate");
        return;
    }
    int64_t count = stream->nb_frames;
    if (count <= 0 && stream->duration > 0)
        count = av_rescale_q(stream->duration, stream->time_base, av_inv_q(p->fps));
    if (count <= 0 && p->input->duration > 0)
        count = av_rescale_q(p->input->duration, AVRational{1, AV_TIME_BASE}, av_inv_q(p->fps));
    if (count <= 0 || count > UINT32_MAX) {
        video_error("invalid video frame count");
        return;
    }
    if (p->audio && (p->audio->sample_rate <= 0 || p->audio->ch_layout.nb_channels < 1 ||
                     p->audio->ch_layout.nb_channels > 2)) {
        video_error("unsupported audio rate or channel count");
        return;
    }
    p->frame = av_frame_alloc();
    p->audio_frame = av_frame_alloc();
    if (!p->frame || !p->audio_frame) {
        video_error("cannot allocate decoded frames");
        return;
    }
    uint32_t rec = heap_alloc(BINK_RECORD_BYTES, true, 16);
    if (!rec) {
        video_error("cannot allocate video record");
        return;
    }
    memset(g_mem + rec, 0, BINK_RECORD_BYTES);
    wr32(rec, (uint32_t)p->video->width);
    wr32(rec + 4, (uint32_t)p->video->height);
    p->count = (uint32_t)count;
    p->t0 = host_millis();
    write_frame_count(rec, *p);
    LOGW("bink: open \"%s\" -> %dx%d, %u frames, %d/%d fps, record %08x", guest.c_str(),
         p->video->width, p->video->height, p->count, p->fps.num, p->fps.den, rec);
    g_players.emplace(rec, std::move(p));
    set_eax(c, rec);
}

// Start with PCM, convert the shared channel to a stream, then append until
// a second is queued. Refused chunks stay pending for the next service call.
void service_audio(uint32_t rec, BinkPlayer &p) {
    if (p.paused || !p.audio || p.failed || p.audio_unavailable)
        return;
    uint32_t block = (uint32_t)p.audio->ch_layout.nb_channels * 2;
    uint32_t ahead = (uint32_t)p.audio->sample_rate * block;
    while (!p.audio_started || host_audio_queued_bytes(p.channel) < ahead) {
        if (p.pending_pos == p.pending.size()) {
            p.pending.clear();
            p.pending_pos = 0;
            while (p.pending.empty() && !p.eof && !p.failed)
                p.failed = !read_packet(p);
            if (p.failed || p.pending.empty())
                break;
        }
        uint32_t bytes = (uint32_t)(p.pending.size() - p.pending_pos) * 2;
        if (!p.audio_started) {
            p.channel = dx_alloc_audio_channel();
            if (p.channel >= 0) {
                HostAudioPlay play{};
                play.channel = p.channel;
                play.pcm = p.pending.data() + p.pending_pos;
                play.bytes = bytes;
                play.sample_rate = p.audio->sample_rate;
                play.channels = p.audio->ch_layout.nb_channels;
                play.bits = 16;
                host_audio_play(&play);
                p.audio_started = host_audio_stream(p.channel) >= 0;
            }
            if (!p.audio_started) {
                if (p.channel >= 0) {
                    host_audio_stop(p.channel);
                    dx_free_audio_channel(p.channel);
                    p.channel = -1;
                }
                LOGW("bink: host audio streaming unavailable");
                p.audio_unavailable = true;
                p.pending.clear();
                p.pending_pos = 0;
                break;
            }
            p.pending_pos += bytes / 2;
        } else {
            bytes = std::min(bytes, ahead - host_audio_queued_bytes(p.channel));
            bytes -= bytes % block;
            if (!bytes)
                break;
            int32_t taken = host_audio_queue(p.channel, p.pending.data() + p.pending_pos, bytes);
            if (taken <= 0)
                break;
            p.pending_pos += (uint32_t)taken / 2;
        }
    }
    if (p.failed) {
        p.current = p.count;
        write_frame_count(rec, p);
    }
}

// Decode exactly one visible frame. Audio prefetch may already have retained
// its compressed packet, but never changes the guest frame counter.
void BinkDoFrame(X86 *c) {
    set_eax(c, 0);
    uint32_t rec = arg(c, 0);
    BinkPlayer *p = player_for(rec);
    if (!p || p->failed)
        return;
    // Some guests only react to keys/clicks inside the video loop. Finish
    // its record so the outer message loop can handle the pending close.
    if (host_close_requested()) {
        p->current = p->count;
        write_frame_count(rec, *p);
        return;
    }
    p->have_frame = false;
    for (;;) {
        int rc = avcodec_receive_frame(p->video, p->frame);
        if (rc >= 0) {
            if (p->frame->format != AV_PIX_FMT_YUV420P) {
                p->failed = !video_error("unsupported video pixel format (expected YUV420P)");
                break;
            }
            if (p->frame->width != p->video->width || p->frame->height != p->video->height) {
                p->failed = !video_error("video dimensions changed during playback");
                break;
            }
            p->have_frame = true;
            service_audio(rec, *p);
            return;
        }
        if (rc != AVERROR(EAGAIN)) {
            p->failed = !decoder_error("receive video frame", rc);
            break;
        }
        while (p->video_packets.empty() && !p->eof && !p->failed)
            p->failed = !read_packet(*p);
        if (p->failed)
            break;
        AVPacket *packet = nullptr;
        if (!p->video_packets.empty()) {
            packet = p->video_packets.front();
            p->video_packets.pop_front();
        } else if (p->flushed) {
            p->failed = !video_error("video ended before its frame count");
            break;
        } else {
            p->flushed = true;
        }
        rc = avcodec_send_packet(p->video, packet);
        av_packet_free(&packet);
        if (rc < 0) {
            p->failed = !decoder_error("send video packet", rc);
            break;
        }
    }
    // Let a guest leave its playback loop after a fatal decoder error.
    p->current = p->count;
    write_frame_count(rec, *p);
}

void BinkNextFrame(X86 *c) {
    uint32_t rec = arg(c, 0);
    if (BinkPlayer *p = player_for(rec)) {
        if (host_close_requested())
            p->current = p->count;
        else if (p->current < UINT32_MAX)
            ++p->current;
        write_frame_count(rec, *p);
        service_audio(rec, *p);
    }
    set_eax(c, 0);
}

// The SDK stores eight {x, y, width, height} rectangles at +0x34 and their
// count at +0xb4. A decoded frame dirties the whole image; before decode,
// clear the count so the guest never blits an uninitialised frame.
void BinkGetRects(X86 *c) {
    set_eax(c, 0);
    uint32_t rec = arg(c, 0);
    BinkPlayer *p = player_for(rec);
    if (!p)
        return;
    uint32_t count = p->have_frame ? 1 : 0;
    if (count) {
        wr32(rec + 0x34, 0);
        wr32(rec + 0x38, 0);
        wr32(rec + 0x3c, (uint32_t)p->frame->width);
        wr32(rec + 0x40, (uint32_t)p->frame->height);
    }
    wr32(rec + 0xb4, count);
    set_eax(c, count);
}

// Shift the playback origin by the time spent paused, preserving the time
// remaining until the next frame. Repeated pause/resume calls are harmless;
// unsigned subtraction also handles the host's millisecond counter wrapping.
void BinkPause(X86 *c) {
    if (BinkPlayer *p = player_for(arg(c, 0))) {
        if (arg(c, 1)) {
            if (!p->paused) {
                p->paused_at = host_millis();
                p->paused = true;
            }
        } else if (p->paused) {
            p->t0 += host_millis() - p->paused_at;
            p->paused = false;
        }
    }
    set_eax(c, 0);
}

// The guest copies frame N after NextFrame changes the counter to N+1.
// The wait ends at that counter's boundary using host time, never a guest
// rendering clock; unsigned subtraction also handles host_millis wrapping.
void BinkWait(X86 *c) {
    uint32_t rec = arg(c, 0);
    BinkPlayer *p = player_for(rec);
    if (p)
        service_audio(rec, *p);
    uint32_t wait = 0;
    if (p && !p->failed && !host_close_requested()) {
        // The ABI's millisecond expression truncates, rather than rounding.
        int64_t due =
            av_rescale_rnd((int64_t)(p->current - 1) * 1000, p->fps.den, p->fps.num, AV_ROUND_DOWN);
        wait = p->paused || (uint32_t)(host_millis() - p->t0) < (uint64_t)due;
    }
    set_eax(c, wait);
}

void BinkService(X86 *c) {
    set_eax(c, 0);
    uint32_t rec = arg(c, 0);
    if (BinkPlayer *p = player_for(rec))
        service_audio(rec, *p);
}

// Validate the entire destination rectangle before writing any row, using
// wide arithmetic so a guest offset or pitch cannot wrap into valid memory.
void BinkCopyToBuffer(X86 *c) {
    set_eax(c, 0);
    BinkPlayer *p = player_for(arg(c, 0));
    if (!p || !p->have_frame || p->failed)
        return;
    uint32_t type = arg(c, 6) & 0xff;
    if (type != VIDEO_RGB565 && type != VIDEO_RGB555 && type != VIDEO_XRGB8888)
        return;
    uint64_t bpp = type == VIDEO_XRGB8888 ? 4 : 2;
    uint64_t pitch = arg(c, 2), xbytes = (uint64_t)arg(c, 4) * bpp;
    uint64_t rows = std::min(arg(c, 3), (uint32_t)p->frame->height);
    uint64_t row_bytes = (uint64_t)p->frame->width * bpp;
    if (!rows)
        return;
    uint64_t start = (uint64_t)arg(c, 1) + (uint64_t)arg(c, 5) * pitch + xbytes;
    uint64_t span = (rows - 1) * pitch + row_bytes;
    if (!arg(c, 1) || xbytes + row_bytes > pitch || start > UINT32_MAX || span > UINT32_MAX ||
        !gm_valid((uint32_t)start, (uint32_t)span)) {
        video_error("copy destination is outside guest memory or pitch");
        return;
    }
    for (uint32_t row = 0; row < rows; ++row)
        video_frame_convert_row(g_mem + start + row * pitch,
                                p->frame->data[0] + (ptrdiff_t)row * p->frame->linesize[0],
                                p->frame->data[1] + (ptrdiff_t)(row / 2) * p->frame->linesize[1],
                                p->frame->data[2] + (ptrdiff_t)(row / 2) * p->frame->linesize[2],
                                (uint32_t)p->frame->width, (VideoSurfaceType)type);
}

void BinkClose(X86 *c) {
    uint32_t rec = arg(c, 0);
    if (g_players.erase(rec))
        heap_free(rec);
    set_eax(c, 0);
}
#else
// A finished record makes a guest continue past cinematics on builds without
// FFmpeg. It is a successful skip, so GetError remains an empty string.
void BinkOpen(X86 *c) {
    set_eax(c, 0);
    g_error[0] = 0;
    uint32_t name = arg(c, 0), flags = arg(c, 1);
    if (!check_open_flags(flags))
        return;
    if ((flags & BINK_FILE_HANDLE) && !win32_file_handle_position(name, nullptr, nullptr)) {
        video_error("invalid video file handle");
        return;
    }
    uint32_t rec = heap_alloc(BINK_RECORD_BYTES, true, 16);
    if (rec) {
        memset(g_mem + rec, 0, BINK_RECORD_BYTES);
        wr32(rec, 640);
        wr32(rec + 4, 480);
        if (flags & BINK_FILE_HANDLE)
            LOGV("bink: open handle %08x -> finished video record %08x (no decoder)", name, rec);
        else
            LOGV("bink: open \"%s\" -> finished video record %08x (no decoder)",
                 gm_str(name).c_str(), rec);
    } else {
        video_error("cannot allocate video record");
    }
    set_eax(c, rec);
}
void BinkClose(X86 *c) {
    if (arg(c, 0))
        heap_free(arg(c, 0));
    set_eax(c, 0);
}
void BinkDoFrame(X86 *c) {
    ret0(c);
}
void BinkNextFrame(X86 *c) {
    ret0(c);
}
void BinkGetRects(X86 *c) {
    ret0(c);
}
void BinkPause(X86 *c) {
    ret0(c);
}
void BinkWait(X86 *c) {
    ret0(c);
}
void BinkService(X86 *c) {
    ret0(c);
}
void BinkCopyToBuffer(X86 *c) {
    ret0(c);
}
#endif

void BinkDDSurfaceType(X86 *c) {
    ComObj *s = com_this_arg(c);
    uint32_t type = 0;
    if (s && s->kind == K_SURFACE) {
        if (s->bpp == 32 && s->rmask == 0xff0000)
            type = VIDEO_XRGB8888;
        else if (s->bpp == 16 && s->rmask == 0xf800)
            type = VIDEO_RGB565;
        else if (s->bpp == 16 && s->rmask == 0x7c00)
            type = VIDEO_RGB555;
    }
    set_eax(c, type);
}

void BinkGetError(X86 *c) {
    if (!g_error_string)
        g_error_string = heap_alloc(sizeof g_error, true, 16);
    if (g_error_string)
        memcpy(g_mem + g_error_string, g_error, sizeof g_error);
    set_eax(c, g_error_string);
}

#define BINK(name, bytes, fn) {"binkw32.dll", "_Bink" #name "@" #bytes, (bytes) / 4, fn}
#define SMACK(name, bytes, fn) {"smackw32.dll", "_Smack" #name "@" #bytes, (bytes) / 4, fn}

const ImportShim g_video_shims[] = {
    BINK(OpenDirectSound, 4, ret1),
    BINK(GetRects, 8, BinkGetRects),
    BINK(Pause, 8, BinkPause),
    BINK(Open, 8, BinkOpen),
    BINK(OpenMiles, 4, ret0),
    BINK(SetSoundSystem, 8, ret1),
    BINK(DDSurfaceType, 4, BinkDDSurfaceType),
    BINK(DoFrame, 4, BinkDoFrame),
    BINK(NextFrame, 4, BinkNextFrame),
    BINK(Wait, 4, BinkWait),
    BINK(CopyToBuffer, 28, BinkCopyToBuffer),
    BINK(Service, 4, BinkService),
    BINK(GetError, 0, BinkGetError),
    BINK(Close, 4, BinkClose),
    BINK(BufferClose, 4, ret0),
    SMACK(Open, 12, ret0),
    SMACK(SoundUseMSS, 4, ret0),
    SMACK(DoFrame, 4, ret0),
    SMACK(NextFrame, 4, ret0),
    SMACK(Wait, 4, ret0),
    SMACK(ToBuffer, 28, ret0),
    SMACK(Close, 4, ret0),
};

} // namespace

void bink_shutdown() {
#ifdef RECOMP_HAVE_FFMPEG
    // Unlike reset, shutdown runs before the guest heap is discarded. Destroy
    // players here so their audio stops before the host's static state dies.
    while (!g_players.empty()) {
        auto it = g_players.begin();
        uint32_t rec = it->first;
        g_players.erase(it);
        heap_free(rec);
    }
#endif
}

void bink_reset() {
#ifdef RECOMP_HAVE_FFMPEG
    g_players.clear();
#endif
    // mem_init already discarded the old guest heap.
    g_error_string = 0;
    g_error[0] = 0;
}

void bink_register() {
    static bool done = false;
    if (done)
        return;
    done = true;
    imports_register(g_video_shims, std::size(g_video_shims));
}
