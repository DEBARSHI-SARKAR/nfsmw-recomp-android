// Read-only AVIFile and Video for Windows adapters. RIFF data and codec state
// live on the host; all handles and output buffers seen by the guest stay 32-bit.
#include "com.h"
#include "dx.h"
#include "video_frame.h"
#include "../runtime/imports.h"
#include "../runtime/win32.h"
#include "../platform/os.h"
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <map>
#include <memory>
#include <vector>
#ifdef RECOMP_HAVE_FFMPEG
extern "C" {
#include <libavcodec/avcodec.h>
}
#endif
namespace {
constexpr uint32_t four(char a, char b, char c, char d) {
    return uint32_t(a) | uint32_t(b) << 8 | uint32_t(c) << 16 | uint32_t(d) << 24;
}
constexpr uint32_t bad = 0x8004406c, format_error = 0x80044066, buffer_small = 0x80044074;
uint32_t le32(const uint8_t *p) {
    return p[0] | uint32_t(p[1]) << 8 | uint32_t(p[2]) << 16 | uint32_t(p[3]) << 24;
}
struct Chunk {
    uint32_t offset, bytes;
    bool key;
};
struct Stream {
    std::vector<uint8_t> header, format;
    std::vector<Chunk> chunks;
    uint32_t type = 0, scale = 0, rate = 0, start = 0, length = 0, sample_size = 0;
};
struct File {
    std::vector<uint8_t> data;
    std::vector<Stream> streams;
};
struct StreamRef {
    std::shared_ptr<File> file;
    size_t index;
};
std::map<uint32_t, std::shared_ptr<File>> files;
std::map<uint32_t, StreamRef> streams;
struct ReadSpan {
    uint32_t bytes, stream;
};
std::map<uint32_t, ReadSpan> reads;
uint32_t next_handle = 0x41560001;
int stream_number(uint32_t id) {
    int a = id & 255, b = (id >> 8) & 255;
    if (a < '0' || a > '9' || b < '0' || b > '9')
        return -1;
    return (a - '0') * 10 + b - '0';
}
// Parse bounded RIFF/LIST chunks, retaining compressed packets in their original
// file storage. Index flags supply the keyframe search used during frame drops.
bool walk(File &f, size_t pos, size_t end, int stream, bool movi, unsigned depth = 0) {
    if (depth > 8)
        return false;
    while (pos + 8 <= end) {
        uint32_t id = le32(&f.data[pos]), bytes = le32(&f.data[pos + 4]);
        size_t data = pos + 8;
        if (bytes > end - data)
            return false;
        if (id == four('L', 'I', 'S', 'T') && bytes >= 4) {
            uint32_t type = le32(&f.data[data]);
            int child = stream;
            if (type == four('s', 't', 'r', 'l')) {
                child = int(f.streams.size());
                f.streams.emplace_back();
            }
            if (!walk(f, data + 4, data + bytes, child, movi || type == four('m', 'o', 'v', 'i'),
                      depth + 1))
                return false;
        } else if (stream >= 0 && id == four('s', 't', 'r', 'h') && bytes >= 56) {
            auto &s = f.streams[stream];
            s.header.assign(f.data.begin() + data, f.data.begin() + data + bytes);
            s.type = le32(&f.data[data]);
            s.scale = le32(&f.data[data + 20]);
            s.rate = le32(&f.data[data + 24]);
            s.start = le32(&f.data[data + 28]);
            s.length = le32(&f.data[data + 32]);
            s.sample_size = le32(&f.data[data + 44]);
        } else if (stream >= 0 && id == four('s', 't', 'r', 'f')) {
            f.streams[stream].format.assign(f.data.begin() + data, f.data.begin() + data + bytes);
        } else if (movi) {
            int n = stream_number(id);
            if (n >= 0 && size_t(n) < f.streams.size()) {
                auto &s = f.streams[n];
                s.chunks.push_back(
                    {uint32_t(data), bytes, s.chunks.empty() || (id >> 16) == ('d' | 'b' << 8)});
            }
        } else if (id == four('i', 'd', 'x', '1')) {
            std::vector<size_t> positions(f.streams.size());
            for (size_t at = data; at + 16 <= data + bytes; at += 16) {
                int n = stream_number(le32(&f.data[at]));
                if (n < 0 || size_t(n) >= f.streams.size())
                    continue;
                auto &s = f.streams[n];
                size_t ix = positions[n]++;
                if (ix < s.chunks.size())
                    s.chunks[ix].key = (le32(&f.data[at + 4]) & 0x10) != 0;
            }
        }
        pos = data + bytes + (bytes & 1);
    }
    return true;
}
void noop(X86 *c) {
    set_eax(c, 0);
}
void open_file(X86 *c) {
    set_eax(c, format_error);
    uint32_t out = arg(c, 0);
    if (!out || !gm_valid(out, 4))
        return;
    wr32(out, 0);
    if ((arg(c, 2) & 3) != 0 || !arg(c, 1))
        return; // read only
    std::string path = win32_host_path_op(gm_str(arg(c, 1)), WIN32_FILE_READ);
    int fd = path.empty() ? -1 : os_fd_open(path.c_str(), OS_O_RDONLY);
    if (fd < 0)
        return;
    OsStat st{};
    if (os_fd_stat(fd, &st) != 0 || !st.is_regular || st.size < 12 || st.size > 512 * 1024 * 1024) {
        os_fd_close(fd);
        return;
    }
    auto f = std::make_shared<File>();
    f->data.resize(size_t(st.size));
    size_t got = 0;
    while (got < f->data.size()) {
        auto n = os_fd_read(fd, f->data.data() + got, f->data.size() - got);
        if (n <= 0)
            break;
        got += size_t(n);
    }
    os_fd_close(fd);
    if (got != f->data.size() || le32(f->data.data()) != four('R', 'I', 'F', 'F') ||
        le32(f->data.data() + 8) != four('A', 'V', 'I', ' '))
        return;
    uint64_t end = uint64_t(le32(f->data.data() + 4)) + 8;
    if (end > f->data.size() || !walk(*f, 12, size_t(end), -1, false) || f->streams.empty())
        return;
    for (auto &s : f->streams)
        if (s.header.empty() || s.format.empty() || !s.scale || !s.rate)
            return;
    uint32_t h = next_handle++;
    files[h] = f;
    wr32(out, h);
    set_eax(c, 0);
    LOGV("AVIFile: opened %s (%zu streams)", path.c_str(), f->streams.size());
}
void get_stream(X86 *c) {
    set_eax(c, bad);
    uint32_t out = arg(c, 1);
    if (!out || !gm_valid(out, 4))
        return;
    wr32(out, 0);
    auto it = files.find(arg(c, 0));
    if (it == files.end())
        return;
    uint32_t type = arg(c, 2), skip = arg(c, 3);
    for (size_t i = 0; i < it->second->streams.size(); ++i) {
        if (type && type != it->second->streams[i].type)
            continue;
        if (skip) {
            --skip;
            continue;
        }
        uint32_t h = next_handle++;
        streams[h] = {it->second, i};
        wr32(out, h);
        set_eax(c, 0);
        return;
    }
}
Stream *get(uint32_t h) {
    auto it = streams.find(h);
    return it == streams.end() ? nullptr : &it->second.file->streams[it->second.index];
}
void release_file(X86 *c) {
    files.erase(arg(c, 0));
    set_eax(c, 0);
}
void release_stream(X86 *c) {
    streams.erase(arg(c, 0));
    for (auto it = reads.begin(); it != reads.end();)
        if (it->second.stream == arg(c, 0))
            it = reads.erase(it);
        else
            ++it;
    set_eax(c, 0);
}
void info(X86 *c) {
    auto s = get(arg(c, 0));
    uint32_t out = arg(c, 1);
    set_eax(c, bad);
    if (!s || arg(c, 2) < 140 || !out || !gm_valid(out, 140))
        return;
    gm_zero(out, 140);
    const auto &h = s->header;
    memcpy(g_mem + out, h.data(), 12);
    memcpy(g_mem + out + 16, h.data() + 12, 4);
    wr32(out + 20, s->scale);
    wr32(out + 24, s->rate);
    wr32(out + 28, s->start);
    wr32(out + 32, s->length);
    wr32(out + 36, le32(h.data() + 16));
    memcpy(g_mem + out + 40, h.data() + 36, 12);
    // AVIStreamHeader uses a 16-bit RECT; AVISTREAMINFO uses a 32-bit RECT.
    for (unsigned i = 0; i < 4; ++i)
        wr32(out + 52 + i * 4, uint32_t(int16_t(h[48 + i * 2] | h[49 + i * 2] << 8)));
    set_eax(c, 0);
}
void read_format(X86 *c) {
    auto s = get(arg(c, 0));
    uint32_t out = arg(c, 2), size = arg(c, 3);
    set_eax(c, bad);
    if (!s || !size || !gm_valid(size, 4))
        return;
    uint32_t capacity = rd32(size);
    wr32(size, uint32_t(s->format.size()));
    if (out) {
        if (capacity < s->format.size()) {
            set_eax(c, buffer_small);
            return;
        }
        if (!gm_valid(out, uint32_t(s->format.size())))
            return;
        memcpy(g_mem + out, s->format.data(), s->format.size());
    }
    set_eax(c, 0);
}
void read_stream(X86 *c) {
    auto s = get(arg(c, 0));
    set_eax(c, bad);
    uint32_t bytes_out = arg(c, 5), samples_out = arg(c, 6);
    if (bytes_out && gm_valid(bytes_out, 4))
        wr32(bytes_out, 0);
    if (samples_out && gm_valid(samples_out, 4))
        wr32(samples_out, 0);
    if (!s || int32_t(arg(c, 1)) < int32_t(s->start))
        return;
    uint32_t index = arg(c, 1) - s->start, count = arg(c, 2), out = arg(c, 3), cap = arg(c, 4);
    if (index >= s->length) {
        set_eax(c, 0);
        return;
    }
    if (count == UINT32_MAX)
        count = s->sample_size ? std::max(1u, cap / s->sample_size) : 1;
    count = std::min(count, s->length - index);
    uint64_t need = uint64_t(count) * s->sample_size;
    if (!s->sample_size) {
        if (index >= s->chunks.size()) {
            set_eax(c, 0);
            return;
        }
        count = std::min(count, uint32_t(s->chunks.size() - index));
        need = 0;
        for (uint32_t i = 0; i < count; ++i)
            need += s->chunks[index + i].bytes;
    }
    if (need > UINT32_MAX)
        return;
    if (out && (cap < need || !gm_valid(out, uint32_t(need)))) {
        set_eax(c, buffer_small);
        return;
    }
    const auto &data = streams.find(arg(c, 0))->second.file->data;
    uint32_t copied = 0;
    if (out && s->sample_size) {
        uint64_t skip = uint64_t(index) * s->sample_size;
        for (auto &ch : s->chunks) {
            if (skip >= ch.bytes) {
                skip -= ch.bytes;
                continue;
            }
            uint32_t n = uint32_t(std::min<uint64_t>(ch.bytes - skip, need - copied));
            memcpy(g_mem + out + copied, data.data() + ch.offset + skip, n);
            copied += n;
            skip = 0;
            if (copied == need)
                break;
        }
    } else if (out)
        for (uint32_t i = 0; i < count; ++i) {
            auto &ch = s->chunks[index + i];
            memcpy(g_mem + out + copied, data.data() + ch.offset, ch.bytes);
            copied += ch.bytes;
        }
    if (out && copied != need)
        return;
    if (bytes_out && gm_valid(bytes_out, 4))
        wr32(bytes_out, uint32_t(need));
    if (samples_out && gm_valid(samples_out, 4))
        wr32(samples_out, count);
    if (out && !s->sample_size)
        reads[out] = {uint32_t(need), arg(c, 0)};
    set_eax(c, 0);
}
void sample_to_time(X86 *c) {
    auto s = get(arg(c, 0));
    set_eax(c, s ? uint32_t(int64_t(int32_t(arg(c, 1))) * s->scale * 1000 / s->rate) : UINT32_MAX);
}
void time_to_sample(X86 *c) {
    auto s = get(arg(c, 0));
    set_eax(c, s ? uint32_t(int64_t(int32_t(arg(c, 1))) * s->rate / (int64_t(s->scale) * 1000))
                 : UINT32_MAX);
}
void find_sample(X86 *c) {
    auto s = get(arg(c, 0));
    set_eax(c, UINT32_MAX);
    if (!s)
        return;
    int64_t n = int32_t(arg(c, 1)) - int64_t(s->start);
    uint32_t flags = arg(c, 2);
    if (flags & 8)
        n = 0;
    int step = (flags & 4) ? -1 : 1;
    if (step < 0)
        n = std::min(n, int64_t(s->length) - 1);
    for (; n >= 0 && n < s->length; n += step) {
        bool key = s->sample_size || (size_t(n) < s->chunks.size() && s->chunks[size_t(n)].key);
        if (!(flags & 0x10) || key) {
            set_eax(c, uint32_t(n) + s->start);
            return;
        }
    }
}
#ifdef RECOMP_HAVE_FFMPEG
struct Codec {
    AVCodecContext *context = nullptr;
    AVFrame *frame = nullptr;
    AVPacket *packet = nullptr;
    ~Codec() {
        av_packet_free(&packet);
        av_frame_free(&frame);
        avcodec_free_context(&context);
    }
};
std::map<uint32_t, std::unique_ptr<Codec>> codecs;
void locate(X86 *c) {
    set_eax(c, 0);
    uint32_t in = arg(c, 2);
    if (arg(c, 0) != four('v', 'i', 'd', 'c') || arg(c, 4) != 2 || !in || !gm_valid(in, 40))
        return;
    uint32_t compression = rd32(in + 16);
    if (compression != four('I', 'V', '5', '0'))
        return;
    const AVCodec *decoder = avcodec_find_decoder(AV_CODEC_ID_INDEO5);
    if (!decoder)
        return;
    auto codec = std::make_unique<Codec>();
    codec->context = avcodec_alloc_context3(decoder);
    if (!codec->context)
        return;
    codec->context->width = int32_t(rd32(in + 4));
    codec->context->height = int32_t(rd32(in + 8));
    codec->context->thread_count = 1;
    if (codec->context->width <= 0 || codec->context->height <= 0 ||
        avcodec_open2(codec->context, decoder, nullptr) < 0)
        return;
    codec->frame = av_frame_alloc();
    codec->packet = av_packet_alloc();
    if (!codec->frame || !codec->packet)
        return;
    uint32_t h = next_handle++;
    codecs[h] = std::move(codec);
    set_eax(c, h);
}
int decode(uint32_t h, uint32_t flags, uint32_t input_fmt, uint32_t input, uint32_t output_fmt,
           uint32_t output) {
    auto it = codecs.find(h);
    if (it == codecs.end())
        return -8;
    auto &d = *it->second;
    if (!input_fmt || !gm_valid(input_fmt, 40))
        return -6;
    uint32_t bytes = rd32(input_fmt + 20);
    auto r = reads.find(input);
    if (r != reads.end())
        bytes = r->second.bytes;
    // Empty AVI video samples and ICDECOMPRESS_NULLFRAME repeat the preceding
    // image. Feeding an empty packet to FFmpeg would instead drain the codec.
    if ((flags & 0x10000000u) || (r != reads.end() && !bytes))
        return 0;
    if (!input || !bytes || bytes > 64 * 1024 * 1024 || !gm_valid(input, bytes))
        return -6;
    av_packet_unref(d.packet);
    if (av_new_packet(d.packet, int(bytes)) < 0)
        return -3;
    memcpy(d.packet->data, g_mem + input, bytes);
    if (avcodec_send_packet(d.context, d.packet) < 0)
        return -100;
    int result = avcodec_receive_frame(d.context, d.frame);
    if (result == AVERROR(EAGAIN))
        return 0;
    if (result < 0)
        return -100;
    if (flags & 0xa0000000u) {
        av_frame_unref(d.frame);
        return 0;
    }
    if (!output_fmt || !gm_valid(output_fmt, 40) || !output)
        return -6;
    int32_t width = int32_t(rd32(output_fmt + 4)), height = int32_t(rd32(output_fmt + 8));
    uint16_t bits = rd16(output_fmt + 14);
    auto &f = *d.frame;
    LOGV("VfW: frame %dx%d format=%d to %dx%d %u bits", f.width, f.height, f.format, width, height,
         bits);
    if (width != f.width || height == INT32_MIN || std::abs(height) != f.height ||
        (bits != 16 && bits != 24 && bits != 32))
        return -2;
    if (f.format != AV_PIX_FMT_YUV410P && f.format != AV_PIX_FMT_YUV420P)
        return -2;
    uint64_t pitch = (uint64_t(width) * bits + 31) / 32 * 4, total = pitch * f.height;
    if (total > UINT32_MAX || !gm_valid(output, uint32_t(total)))
        return -6;
    bool rgb565 =
        rd32(output_fmt + 16) == 3 && gm_valid(output_fmt, 52) && rd32(output_fmt + 44) == 0x7e0;
    VideoSurfaceType type = bits == 16 ? (rgb565 ? VIDEO_RGB565 : VIDEO_RGB555) : VIDEO_XRGB8888;
    unsigned shift = f.format == AV_PIX_FMT_YUV410P ? 2 : 1;
    std::vector<uint8_t> row(size_t(width) * 4);
    for (int y = 0; y < f.height; ++y) {
        uint8_t *dest = g_mem + output + (height > 0 ? f.height - 1 - y : y) * pitch;
        uint8_t *converted = bits == 24 ? row.data() : dest;
        video_frame_convert_row(converted, f.data[0] + y * f.linesize[0],
                                f.data[1] + (y >> shift) * f.linesize[1],
                                f.data[2] + (y >> shift) * f.linesize[2], width, type, shift);
        if (bits == 24)
            for (int x = 0; x < width; ++x)
                memcpy(dest + x * 3, row.data() + x * 4, 3);
    }
    av_frame_unref(d.frame);
    return 0;
}
void decompress(X86 *c) {
    set_eax(c, decode(arg(c, 0), arg(c, 1), arg(c, 2), arg(c, 3), arg(c, 4), arg(c, 5)));
}
void send_message(X86 *c) {
    auto it = codecs.find(arg(c, 0));
    set_eax(c, uint32_t(-8));
    if (it == codecs.end())
        return;
    uint32_t msg = arg(c, 1), p = arg(c, 2);
    if (msg == 0x403c || msg == 0x400c) {
        avcodec_flush_buffers(it->second->context);
        set_eax(c, 0);
        return;
    }
    if (msg == 0x400e || msg == 0x403f || msg == 0x403d || msg == 0x400b) {
        set_eax(c, 0);
        return;
    }
    if (msg == 0x403e && arg(c, 3) >= 52 && p && gm_valid(p, 52)) {
        set_eax(c,
                decode(arg(c, 0), rd32(p), rd32(p + 4), rd32(p + 8), rd32(p + 12), rd32(p + 16)));
        return;
    }
    set_eax(c, uint32_t(-1));
}
void close_codec(X86 *c) {
    set_eax(c, codecs.erase(arg(c, 0)) ? 0 : uint32_t(-8));
}
#else
void locate(X86 *c) {
    set_eax(c, 0);
}
void decompress(X86 *c) {
    set_eax(c, uint32_t(-1));
}
void send_message(X86 *c) {
    set_eax(c, uint32_t(-1));
}
void close_codec(X86 *c) {
    set_eax(c, uint32_t(-8));
}
#endif
#define AVI(name, n, fn) {"AVIFIL32.dll", #name, n, fn}
const ImportShim shims[] = {AVI(AVIFileInit, 0, noop),
                            AVI(AVIFileExit, 0, noop),
                            AVI(AVIFileOpenA, 4, open_file),
                            AVI(AVIFileGetStream, 4, get_stream),
                            AVI(AVIFileRelease, 1, release_file),
                            AVI(AVIStreamRelease, 1, release_stream),
                            AVI(AVIStreamInfoA, 3, info),
                            AVI(AVIStreamReadFormat, 4, read_format),
                            AVI(AVIStreamRead, 7, read_stream),
                            AVI(AVIStreamBeginStreaming, 4, noop),
                            AVI(AVIStreamEndStreaming, 1, noop),
                            AVI(AVIStreamFindSample, 3, find_sample),
                            AVI(AVIStreamSampleToTime, 2, sample_to_time),
                            AVI(AVIStreamTimeToSample, 2, time_to_sample),
                            {"MSVFW32.dll", "ICLocate", 5, locate},
                            {"MSVFW32.dll", "ICDecompress", ARGC_CDECL, decompress},
                            {"MSVFW32.dll", "ICSendMessage", 4, send_message},
                            {"MSVFW32.dll", "ICClose", 1, close_codec}};
} // namespace
void avi_register() {
    imports_register(shims, std::size(shims));
}
