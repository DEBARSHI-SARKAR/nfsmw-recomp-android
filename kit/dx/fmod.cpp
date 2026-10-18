// FMOD 3 stdcall exports. Samples own copied PCM; streams own their encoded
// input and decode on the guest frame seam. Guest channel numbers are local
// to FMOD, while host voices come from the shared DX allocator.
#include "com.h"
#include "dx.h"
#include "host_api.h"
#include "mp3_source.h"
#include "riff.h"
#include "../runtime/imports.h"
#include "../runtime/memory.h"
#include "../runtime/win32.h"
#include "../platform/os.h"
#include <algorithm>
#include <cmath>
#include <iterator>
#include <map>
#include <vector>

namespace {
constexpr uint32_t FREE = 0xffffffffu, LOOP_NORMAL = 2, LOADMEMORY = 0x8000;
struct Sample {
    uint32_t rate = 0;
    uint16_t channels = 0, bits = 0;
    std::vector<uint8_t> pcm;
    bool loop = false;
};
struct Stream {
    Mp3Source source;
    std::vector<int16_t> pending;
    size_t pending_pos = 0;
    int32_t channel = -1;
    bool playing = false, paused = false, loop = false;
    uint64_t submitted = 0, resume_frame = 0;
};
struct Channel {
    int32_t host = -1;
    uint32_t sample = 0, stream = 0, rate = 0;
    int32_t volume = 255, pan = 128;
};
std::map<uint32_t, Sample> samples;
std::map<int32_t, uint32_t> slots;
std::map<uint32_t, Stream> streams;
std::vector<Channel> channels;
uint32_t next_handle = 1, driver_name = 0;

int32_t volume_mb(int32_t v) {
    v = std::clamp(v, 0, 255);
    return v == 0 ? -10000 : (int32_t)std::lround(2000.0 * std::log10(v / 255.0));
}
int32_t pan_mb(int32_t p) {
    p = std::clamp(p, 0, 255);
    return (p - 128) * 10000 / (p < 128 ? 128 : 127);
}

bool read_file(uint32_t name, std::vector<uint8_t> &bytes) {
    if (!name || !gm_valid(name, 1))
        return false;
    std::string path = win32_host_path_op(gm_str(name), WIN32_FILE_READ);
    int fd = path.empty() ? -1 : os_fd_open(path.c_str(), OS_O_RDONLY);
    if (fd < 0)
        return false;
    OsStat st{};
    if (os_fd_stat(fd, &st) != 0 || !st.is_regular || !st.size || st.size > INT32_MAX) {
        os_fd_close(fd);
        return false;
    }
    bytes.resize((size_t)st.size);
    size_t got = 0;
    while (got < bytes.size()) {
        int64_t n = os_fd_read(fd, bytes.data() + got, bytes.size() - got);
        if (n <= 0)
            break;
        got += (size_t)n;
    }
    os_fd_close(fd);
    return got == bytes.size();
}

// Revoke the stream's channel reference before making its host voice reusable.
void stop_channel(Channel &ch) {
    if (ch.host >= 0) {
        host_audio_stop(ch.host);
        dx_free_audio_channel(ch.host);
    }
    if (auto it = streams.find(ch.stream); it != streams.end()) {
        it->second.channel = -1;
        it->second.playing = false;
    }
    ch = Channel{};
}
void clear_state() {
    for (auto &ch : channels)
        stop_channel(ch);
    channels.clear();
    samples.clear();
    slots.clear();
    streams.clear();
}
void free_sample(uint32_t handle) {
    if (!samples.count(handle))
        return;
    for (auto &ch : channels)
        if (ch.sample == handle)
            stop_channel(ch);
    samples.erase(handle);
    for (auto it = slots.begin(); it != slots.end();)
        if (it->second == handle)
            it = slots.erase(it);
        else
            ++it;
}

// FREE chooses an idle guest channel. Paused streams retain their reservation;
// completed one-shot samples relinquish it when the next play needs a voice.
int32_t select_channel(uint32_t requested) {
    if (requested == FREE) {
        for (uint32_t i = 0; i < channels.size(); ++i) {
            auto &ch = channels[i];
            if (ch.host < 0 || (!ch.stream && !host_audio_is_playing(ch.host))) {
                requested = i;
                break;
            }
        }
    }
    if (requested >= channels.size())
        return -1;
    Channel &ch = channels[requested];
    stop_channel(ch);
    ch.host = dx_alloc_audio_channel();
    return ch.host >= 0 ? (int32_t)requested : -1;
}
void init(X86 *c) {
    clear_state();
    channels.resize((size_t)std::clamp((int32_t)arg(c, 1), 1, 128));
    set_eax(c, 1);
}
void close(X86 *c) {
    clear_state();
    set_eax(c, 0);
}
void ret1(X86 *c) {
    set_eax(c, 1);
}
void get_driver_name(X86 *c) {
    if (!driver_name) {
        driver_name = heap_alloc(16, true);
        if (driver_name)
            gm_put_str(driver_name, "recomp mixer", 16);
    }
    set_eax(c, driver_name);
}

// The memory form has no length parameter. Bound the RIFF size by the guest
// arena and, when available, its allocation. File input uses the same parser
// through a temporary guest image which is released after copying the PCM.
void load_wav(X86 *c) {
    set_eax(c, 0);
    if (channels.empty())
        return;
    uint32_t image = arg(c, 1), mode = arg(c, 2), allocated_image = 0;
    uint64_t bytes = 0;
    if (mode & LOADMEMORY) {
        if (!image || !gm_valid(image, 12))
            return;
        bytes = (uint64_t)rd32(image + 4) + 8;
        uint32_t allocated = heap_size(image);
        if (bytes > UINT32_MAX || (allocated != UINT32_MAX && bytes > allocated))
            return;
    } else {
        std::vector<uint8_t> data;
        if (!read_file(image, data))
            return;
        bytes = data.size();
        image = allocated_image = heap_alloc((uint32_t)bytes);
        if (!image)
            return;
        memcpy(g_mem + image, data.data(), data.size());
    }
    RiffWave wave{};
    Sample sample;
    bool ok = riff_parse_wave(image, (uint32_t)bytes, &wave);
    if (ok) {
        sample.rate = wave.rate;
        sample.channels = wave.channels;
        sample.bits = wave.bits;
        sample.loop = (mode & LOOP_NORMAL) != 0;
        sample.pcm.assign(g_mem + wave.pcm, g_mem + wave.pcm + wave.pcm_bytes);
    }
    if (allocated_image)
        heap_free(allocated_image);
    if (!ok)
        return;
    int32_t slot = (int32_t)arg(c, 0);
    if (slot == -1) {
        slot = 0;
        while (slots.count(slot))
            ++slot;
    }
    if (slot < 0)
        return;
    if (auto it = slots.find(slot); it != slots.end())
        free_sample(it->second);
    uint32_t handle = next_handle++;
    samples.emplace(handle, std::move(sample));
    slots[slot] = handle;
    set_eax(c, handle);
}
void sample_free(X86 *c) {
    free_sample(arg(c, 0));
    set_eax(c, 0);
}
void get_defaults(X86 *c) {
    auto it = samples.find(arg(c, 0));
    set_eax(c, 0);
    if (it == samples.end())
        return;
    uint32_t values[] = {it->second.rate, 255, 128, 128};
    for (uint32_t i = 0; i < 4; ++i) {
        uint32_t p = arg(c, i + 1);
        if (p && !gm_valid(p, 4))
            return;
    }
    for (uint32_t i = 0; i < 4; ++i)
        if (uint32_t p = arg(c, i + 1))
            wr32(p, values[i]);
    set_eax(c, 1);
}
void set_loop(X86 *c) {
    auto it = samples.find(arg(c, 0));
    if (it != samples.end())
        it->second.loop = (arg(c, 1) & LOOP_NORMAL) != 0;
    set_eax(c, it != samples.end() ? 1 : 0);
}
void play_sound(X86 *c) {
    set_eax(c, FREE);
    auto it = samples.find(arg(c, 1));
    if (it == samples.end())
        return;
    const Sample &s = it->second;
    int32_t idx = select_channel(arg(c, 0));
    if (idx < 0)
        return;
    Channel &ch = channels[(size_t)idx];
    ch.sample = it->first;
    ch.rate = arg(c, 2) == FREE || !arg(c, 2) ? s.rate : std::min(arg(c, 2), (uint32_t)INT32_MAX);
    ch.volume = arg(c, 3) == FREE ? 255 : std::clamp((int32_t)arg(c, 3), 0, 255);
    ch.pan = arg(c, 4) == FREE ? 128 : std::clamp((int32_t)arg(c, 4), 0, 255);
    HostAudioPlay p{};
    p.channel = ch.host;
    p.pcm = s.pcm.data();
    p.bytes = (uint32_t)s.pcm.size();
    p.sample_rate = (int32_t)ch.rate;
    p.channels = s.channels;
    p.bits = s.bits;
    p.loop = s.loop ? 1 : 0;
    p.volume = volume_mb(ch.volume);
    p.pan = pan_mb(ch.pan);
    host_audio_play(&p);
    host_audio_set_frequency(ch.host, ch.rate);
    set_eax(c, (uint32_t)idx);
}
void stop_sound(X86 *c) {
    uint32_t idx = arg(c, 0);
    if (idx == FREE)
        for (auto &ch : channels)
            stop_channel(ch);
    else if (idx < channels.size())
        stop_channel(channels[idx]);
    set_eax(c, 1);
}
void set_volume(X86 *c) {
    uint32_t idx = arg(c, 0);
    if (idx < channels.size()) {
        auto &ch = channels[idx];
        ch.volume = std::clamp((int32_t)arg(c, 1), 0, 255);
        if (ch.host >= 0)
            host_audio_set_volume(ch.host, volume_mb(ch.volume));
    }
    set_eax(c, 1);
}
void set_pan(X86 *c) {
    uint32_t idx = arg(c, 0);
    if (idx < channels.size()) {
        auto &ch = channels[idx];
        ch.pan = std::clamp((int32_t)arg(c, 1), 0, 255);
        if (ch.host >= 0)
            host_audio_set_pan(ch.host, pan_mb(ch.pan));
    }
    set_eax(c, 1);
}
void set_frequency(X86 *c) {
    uint32_t idx = arg(c, 0), hz = arg(c, 1);
    if (idx < channels.size() && hz && hz <= INT32_MAX) {
        auto &ch = channels[idx];
        ch.rate = hz;
        if (ch.host >= 0)
            host_audio_set_frequency(ch.host, hz);
    }
    set_eax(c, 1);
}
void open_mpeg(X86 *c) {
    set_eax(c, 0);
    std::vector<uint8_t> bytes;
    if (channels.empty() || (arg(c, 1) & LOADMEMORY) || !read_file(arg(c, 0), bytes))
        return;
    Stream s;
    if (!s.source.open(bytes))
        return;
    s.loop = (arg(c, 1) & LOOP_NORMAL) != 0;
    uint32_t handle = next_handle++;
    streams.emplace(handle, std::move(s));
    set_eax(c, handle);
}

// Start at an audible PCM frame, decoding skipped frames too so the MP3 bit
// reservoir is restored on resume. Prefetched audio is discarded on pause.
bool start_stream(Stream &s) {
    Channel &ch = channels[(size_t)s.channel];
    s.source.seek_frames(0);
    uint64_t skip = s.resume_frame;
    for (;;) {
        if (!s.source.decode_next(s.pending))
            return false;
        uint64_t frames = s.pending.size() / s.source.channels();
        if (skip < frames) {
            s.pending_pos = (size_t)skip * s.source.channels();
            break;
        }
        skip -= frames;
    }
    HostAudioPlay p{};
    p.channel = ch.host;
    p.pcm = s.pending.data() + s.pending_pos;
    p.bytes = (uint32_t)(s.pending.size() - s.pending_pos) * 2;
    p.sample_rate = (int32_t)ch.rate;
    p.channels = (int32_t)s.source.channels();
    p.bits = 16;
    p.volume = volume_mb(ch.volume);
    p.pan = pan_mb(ch.pan);
    host_audio_play(&p);
    host_audio_set_frequency(ch.host, ch.rate);
    s.submitted = p.bytes;
    s.pending.clear();
    s.pending_pos = 0;
    if (host_audio_stream(ch.host) < 0) {
        stop_channel(ch);
        return false;
    }
    return true;
}

// Keep one second queued, retaining a refused or partially accepted frame.
// Decoder EOF releases a voice only after all submitted audio has played.
void update_stream(Stream &s) {
    if (!s.playing || s.paused || s.channel < 0)
        return;
    Channel &ch = channels[(size_t)s.channel];
    uint32_t ahead = s.source.rate() * s.source.channels() * 2;
    uint32_t budget = ahead;
    while (host_audio_queued_bytes(ch.host) < ahead && budget) {
        if (s.pending.empty()) {
            if (!s.source.decode_next(s.pending)) {
                if (!s.loop)
                    break;
                s.source.seek_frames(0);
                if (!s.source.decode_next(s.pending))
                    break;
            }
            s.pending_pos = 0;
        }
        uint32_t bytes = (uint32_t)(s.pending.size() - s.pending_pos) * 2;
        int32_t taken = host_audio_queue(ch.host, s.pending.data() + s.pending_pos, bytes);
        if (taken <= 0)
            return;
        uint32_t accepted = std::min((uint32_t)taken, bytes);
        s.submitted += accepted;
        s.pending_pos += accepted / 2;
        budget -= std::min(budget, accepted);
        if (s.pending_pos >= s.pending.size())
            s.pending.clear();
    }
    if (!s.loop && s.source.drained() && s.pending.empty() &&
        host_audio_played_bytes(ch.host) >= s.submitted)
        stop_channel(ch);
}
void play_stream(X86 *c) {
    set_eax(c, FREE);
    auto it = streams.find(arg(c, 1));
    if (it == streams.end())
        return;
    Stream &s = it->second;
    if (s.channel >= 0)
        stop_channel(channels[(size_t)s.channel]);
    int32_t idx = select_channel(arg(c, 0));
    if (idx < 0)
        return;
    Channel &ch = channels[(size_t)idx];
    ch.stream = it->first;
    ch.rate = s.source.rate();
    s.channel = idx;
    s.resume_frame = 0;
    s.playing = true;
    if (!s.paused && !start_stream(s)) {
        stop_channel(ch);
        return;
    }
    set_eax(c, (uint32_t)idx);
}
void set_paused(X86 *c) {
    auto it = streams.find(arg(c, 0));
    set_eax(c, 0);
    if (it == streams.end())
        return;
    Stream &s = it->second;
    bool paused = arg(c, 1) != 0;
    if (paused != s.paused && s.playing && s.channel >= 0) {
        Channel &ch = channels[(size_t)s.channel];
        if (paused) {
            s.resume_frame += host_audio_played_bytes(ch.host) / (s.source.channels() * 2);
            uint64_t duration = (uint64_t)s.source.duration_frames();
            if (s.loop && duration)
                s.resume_frame %= duration;
            host_audio_stop(ch.host);
            s.pending.clear();
        } else if (!start_stream(s)) {
            stop_channel(ch);
        }
    }
    s.paused = paused;
    set_eax(c, 1);
}
void close_stream(X86 *c) {
    auto it = streams.find(arg(c, 0));
    if (it != streams.end()) {
        if (it->second.channel >= 0)
            stop_channel(channels[(size_t)it->second.channel]);
        streams.erase(it);
    }
    set_eax(c, 1);
}
#define FMOD(name, bytes, fn) {"fmod.dll", "_FSOUND_" #name "@" #bytes, (bytes) / 4, fn}
const ImportShim shims[] = {
    FMOD(Init, 12, init),
    FMOD(Close, 0, close),
    FMOD(SetOutput, 4, ret1),
    FMOD(SetDriver, 4, ret1),
    FMOD(GetDriverName, 4, get_driver_name),
    FMOD(Sample_LoadWav, 12, load_wav),
    FMOD(Sample_Free, 4, sample_free),
    FMOD(Sample_GetDefaults, 20, get_defaults),
    FMOD(Sample_SetLoopMode, 8, set_loop),
    FMOD(PlaySoundAttrib, 20, play_sound),
    FMOD(StopSound, 4, stop_sound),
    FMOD(SetVolume, 8, set_volume),
    FMOD(SetPan, 8, set_pan),
    FMOD(SetFrequency, 8, set_frequency),
    FMOD(Stream_OpenMpeg, 8, open_mpeg),
    FMOD(Stream_Play, 8, play_stream),
    FMOD(Stream_SetPaused, 8, set_paused),
    FMOD(Stream_Close, 4, close_stream),
};
#undef FMOD
} // namespace

void fmod_register() {
    imports_register(shims, std::size(shims));
}
void fmod_frame_pump(X86 *c) {
    if (c)
        for (auto &entry : streams)
            update_stream(entry.second);
}
void fmod_reset() {
    clear_state();
    // The arena was discarded by mem_init; never free an address from it.
    driver_name = 0;
}
