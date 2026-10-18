// WinMM waveform output, also exported by multimedia redirection DLLs. A
// WAVEHDR stays in queue until its decoded PCM reaches the device clock.
#include "com.h"
#include "dx.h"
#include "host_api.h"
#include "../runtime/imports.h"
#include <algorithm>
#include <cmath>
#include <deque>
#include <map>
#include <memory>
#include <vector>
#ifdef RECOMP_HAVE_FFMPEG
extern "C" {
#include <libavcodec/avcodec.h>
}
#endif
namespace {
struct Buffer {
    uint32_t header;
    uint64_t start, end;
    std::vector<uint8_t> pcm;
};
struct Wave {
    int channel = -1, rate = 0, channels = 0, bits = 0, block = 0;
    uint16_t format = 0;
    uint32_t volume = 0xffffffff;
    bool paused = false, started = false;
    uint64_t completed = 0, epoch = 0, queued = 0, total = 0;
    std::deque<Buffer> buffers;
#ifdef RECOMP_HAVE_FFMPEG
    AVCodecContext *decoder = nullptr;
    AVFrame *frame = nullptr;
    AVPacket *packet = nullptr;
#endif
    ~Wave() {
        if (channel >= 0) {
            host_audio_stop(channel);
            dx_free_audio_channel(channel);
        }
#ifdef RECOMP_HAVE_FFMPEG
        avcodec_free_context(&decoder);
        av_frame_free(&frame);
        av_packet_free(&packet);
#endif
    }
};
std::map<uint32_t, std::unique_ptr<Wave>> waves;
uint32_t next_wave = 0x57415601;
Wave *get(uint32_t id) {
    auto it = waves.find(id);
    return it == waves.end() ? nullptr : it->second.get();
}
int gain(const Wave &w) {
    double v = std::max(w.volume & 65535, w.volume >> 16) / 65535.0;
    return v > 0 ? int(std::lround(2000 * std::log10(v))) : -10000;
}
void collect(Wave &w) {
    if (w.started)
        w.completed = std::min(w.total, w.epoch + host_audio_played_bytes(w.channel));
    while (!w.buffers.empty() && w.buffers.front().end <= w.completed) {
        auto h = w.buffers.front().header;
        if (gm_valid(h, 32))
            wr32(h + 16, (rd32(h + 16) & ~0x10u) | 1);
        w.buffers.pop_front();
    }
}
void pump(Wave &w) {
    collect(w);
    if (w.paused)
        return;
    uint32_t ahead = uint32_t(w.rate * w.channels * (w.bits / 8));
    for (auto &b : w.buffers) {
        if (w.queued >= b.end)
            continue;
        size_t offset = size_t(w.queued - b.start);
        uint32_t n = uint32_t(b.pcm.size() - offset);
        if (!w.started) {
            HostAudioPlay p{};
            p.channel = w.channel;
            p.pcm = b.pcm.data() + offset;
            p.bytes = n;
            p.sample_rate = w.rate;
            p.channels = w.channels;
            p.bits = w.bits;
            p.volume = gain(w);
            host_audio_play(&p);
            if (host_audio_stream(w.channel) < 0) {
                host_audio_stop(w.channel);
                return;
            }
            w.started = true;
            w.epoch = w.completed;
            w.queued += n;
        } else {
            if (host_audio_queued_bytes(w.channel) >= ahead)
                return;
            int taken = host_audio_queue(w.channel, b.pcm.data() + offset, n);
            if (taken <= 0)
                return;
            w.queued += uint32_t(taken);
            if (uint32_t(taken) < n)
                return;
        }
    }
}
void reset(Wave &w) {
    host_audio_stop(w.channel);
    for (auto &b : w.buffers)
        if (gm_valid(b.header, 32))
            wr32(b.header + 16, (rd32(b.header + 16) & ~0x10u) | 1);
    w.buffers.clear();
    w.started = false;
    w.paused = false;
    w.completed = w.epoch = w.queued = w.total = 0;
#ifdef RECOMP_HAVE_FFMPEG
    if (w.decoder)
        avcodec_flush_buffers(w.decoder);
#endif
}
bool decode(Wave &w, uint32_t ptr, uint32_t size, std::vector<uint8_t> &pcm) {
    if (w.format == 1) {
        pcm.assign(g_mem + ptr, g_mem + ptr + size);
        return true;
    }
#ifdef RECOMP_HAVE_FFMPEG
    if (!w.decoder || size % w.block)
        return false;
    for (uint32_t offset = 0; offset < size; offset += w.block) {
        av_packet_unref(w.packet);
        if (av_new_packet(w.packet, w.block) < 0)
            return false;
        memcpy(w.packet->data, g_mem + ptr + offset, w.block);
        if (avcodec_send_packet(w.decoder, w.packet) < 0)
            return false;
        while (avcodec_receive_frame(w.decoder, w.frame) >= 0) {
            auto &f = *w.frame;
            if (f.format != AV_SAMPLE_FMT_S16P && f.format != AV_SAMPLE_FMT_S16)
                return false;
            size_t old = pcm.size();
            pcm.resize(old + size_t(f.nb_samples) * w.channels * 2);
            for (int i = 0; i < f.nb_samples; ++i)
                for (int ch = 0; ch < w.channels; ++ch) {
                    const uint8_t *src = f.format == AV_SAMPLE_FMT_S16P
                                             ? f.extended_data[ch] + i * 2
                                             : f.extended_data[0] + (i * w.channels + ch) * 2;
                    memcpy(pcm.data() + old + (size_t(i) * w.channels + ch) * 2, src, 2);
                }
            av_frame_unref(w.frame);
        }
    }
    return true;
#else
    return false;
#endif
}
void open_wave(X86 *c) {
    set_eax(c, 32);
    uint32_t out = arg(c, 0), fmt = arg(c, 2), flags = arg(c, 5);
    if (out && gm_valid(out, 4))
        wr32(out, 0);
    if (!fmt || !gm_valid(fmt, 16))
        return;
    // Callback-free playback and WAVE_FORMAT_QUERY. Unsupported callback modes
    // must fail explicitly rather than claiming completion events were sent.
    if (flags & 0x70000) {
        set_eax(c, 8);
        return;
    }
    auto w = std::make_unique<Wave>();
    w->format = rd16(fmt);
    w->channels = rd16(fmt + 2);
    w->rate = rd32(fmt + 4);
    w->bits = rd16(fmt + 14);
    w->block = rd16(fmt + 12);
    if (w->rate <= 0 || w->rate > 192000 || (w->channels != 1 && w->channels != 2) || !w->block)
        return;
    if (w->format == 1) {
        if ((w->bits != 8 && w->bits != 16) || w->block != w->channels * w->bits / 8)
            return;
    } else if (w->format == 0x11) {
#ifdef RECOMP_HAVE_FFMPEG
        if (!gm_valid(fmt, 20) || rd16(fmt + 16) < 2 || w->bits != 4)
            return;
        const AVCodec *codec = avcodec_find_decoder(AV_CODEC_ID_ADPCM_IMA_WAV);
        if (!codec)
            return;
        w->decoder = avcodec_alloc_context3(codec);
        if (!w->decoder)
            return;
        w->decoder->sample_rate = w->rate;
        w->decoder->block_align = w->block;
        w->decoder->bits_per_coded_sample = 4;
        av_channel_layout_default(&w->decoder->ch_layout, w->channels);
        if (avcodec_open2(w->decoder, codec, nullptr) < 0)
            return;
        w->frame = av_frame_alloc();
        w->packet = av_packet_alloc();
        if (!w->frame || !w->packet)
            return;
        w->bits = 16;
#else
        return;
#endif
    } else
        return;
    if (flags & 1) {
        set_eax(c, 0);
        return;
    }
    if (!out || !gm_valid(out, 4)) {
        set_eax(c, 11);
        return;
    }
    w->channel = dx_alloc_audio_channel();
    if (w->channel < 0) {
        set_eax(c, 4);
        return;
    }
    uint32_t h = next_wave++;
    waves[h] = std::move(w);
    wr32(out, h);
    set_eax(c, 0);
    LOGV("waveOut: opened %08x format=%x", h, rd16(fmt));
}
void prepare(X86 *c) {
    auto w = get(arg(c, 0));
    uint32_t h = arg(c, 1);
    set_eax(c, 5);
    if (!w)
        return;
    if (arg(c, 2) < 32 || !h || !gm_valid(h, 32)) {
        set_eax(c, 11);
        return;
    }
    wr32(h + 16, rd32(h + 16) | 2);
    set_eax(c, 0);
}
void unprepare(X86 *c) {
    auto w = get(arg(c, 0));
    uint32_t h = arg(c, 1);
    set_eax(c, 5);
    if (!w)
        return;
    collect(*w);
    if (arg(c, 2) < 32 || !h || !gm_valid(h, 32)) {
        set_eax(c, 11);
        return;
    }
    if (rd32(h + 16) & 0x10) {
        set_eax(c, 33);
        return;
    }
    wr32(h + 16, rd32(h + 16) & ~2u);
    set_eax(c, 0);
}
void write_wave(X86 *c) {
    auto w = get(arg(c, 0));
    uint32_t h = arg(c, 1);
    set_eax(c, 5);
    if (!w)
        return;
    pump(*w);
    if (arg(c, 2) < 32 || !h || !gm_valid(h, 32)) {
        set_eax(c, 11);
        return;
    }
    uint32_t flags = rd32(h + 16), ptr = rd32(h), size = rd32(h + 4);
    if (!(flags & 2)) {
        set_eax(c, 34);
        return;
    }
    if (flags & 0x10) {
        set_eax(c, 33);
        return;
    }
    if ((flags & 0xc) || !ptr || size > 16 * 1024 * 1024 || !gm_valid(ptr, size)) {
        set_eax(c, 11);
        return;
    }
    Buffer b{};
    b.header = h;
    b.start = w->total;
    if (!decode(*w, ptr, size, b.pcm)) {
        set_eax(c, 32);
        return;
    }
    b.end = b.start + b.pcm.size();
    w->total = b.end;
    w->buffers.push_back(std::move(b));
    wr32(h + 16, (flags & ~1u) | 0x10);
    pump(*w);
    set_eax(c, 0);
}
void pause_wave(X86 *c) {
    auto w = get(arg(c, 0));
    set_eax(c, 5);
    if (!w)
        return;
    collect(*w);
    host_audio_stop(w->channel);
    w->started = false;
    w->paused = true;
    w->queued = w->completed;
    set_eax(c, 0);
}
void restart(X86 *c) {
    auto w = get(arg(c, 0));
    set_eax(c, 5);
    if (w) {
        w->paused = false;
        pump(*w);
        set_eax(c, 0);
    }
}
void reset_wave(X86 *c) {
    auto w = get(arg(c, 0));
    set_eax(c, 5);
    if (w) {
        reset(*w);
        set_eax(c, 0);
    }
}
void close_wave(X86 *c) {
    auto w = get(arg(c, 0));
    set_eax(c, 5);
    if (!w)
        return;
    collect(*w);
    if (!w->buffers.empty()) {
        set_eax(c, 33);
        return;
    }
    waves.erase(arg(c, 0));
    set_eax(c, 0);
}
void position(X86 *c) {
    auto w = get(arg(c, 0));
    uint32_t p = arg(c, 1);
    set_eax(c, 5);
    if (!w)
        return;
    if (arg(c, 2) < 12 || !p || !gm_valid(p, 12)) {
        set_eax(c, 11);
        return;
    }
    pump(*w);
    uint64_t frames = w->completed / (w->channels * (w->bits / 8));
    uint32_t type = rd32(p);
    if (type == 2)
        wr32(p + 4, uint32_t(frames));
    else if (type == 4)
        wr32(p + 4, uint32_t(w->completed));
    else {
        wr32(p, 1);
        wr32(p + 4, uint32_t(frames * 1000 / w->rate));
    }
    set_eax(c, 0);
}
void set_volume(X86 *c) {
    auto w = get(arg(c, 0));
    set_eax(c, 5);
    if (w) {
        w->volume = arg(c, 1);
        host_audio_set_volume(w->channel, gain(*w));
        set_eax(c, 0);
    }
}
void num_devices(X86 *c) {
    set_eax(c, 1);
}
#define W(name, n, fn)                                                                             \
    {"WINMM.dll", #name, n, fn}, {                                                                 \
        "_INMM.dll", #name, n, fn                                                                  \
    }
const ImportShim shims[] = {
    W(waveOutOpen, 6, open_wave),        W(waveOutClose, 1, close_wave),
    W(waveOutPrepareHeader, 3, prepare), W(waveOutUnprepareHeader, 3, unprepare),
    W(waveOutWrite, 3, write_wave),      W(waveOutPause, 1, pause_wave),
    W(waveOutRestart, 1, restart),       W(waveOutReset, 1, reset_wave),
    W(waveOutGetPosition, 3, position),  W(waveOutSetVolume, 2, set_volume),
    W(waveOutGetNumDevs, 0, num_devices)};
} // namespace
void waveout_register() {
    imports_register(shims, std::size(shims));
}
// Guest ExitProcess may abandon open wave handles. Release their host channels
// before the host destroys its audio device and synchronization primitives.
void waveout_shutdown() {
    waves.clear();
}
void waveout_frame_pump(X86 *c) {
    if (c)
        for (auto &pair : waves)
            pump(*pair.second);
}
