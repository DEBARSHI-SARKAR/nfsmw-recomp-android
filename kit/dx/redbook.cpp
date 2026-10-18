// File-backed CD audio. The game configuration supplies the original disc's
// one-based track order (an empty path denotes a data track). Decode and queue
// on the guest baton; the audio device only receives copied PCM.
#include "com.h"
#include "dx.h"
#include "host_api.h"
#include "mf_media.h"
#include "game_config.h"
#include "../runtime/imports.h"
#include "../runtime/win32.h"
#include <algorithm>
#include <cmath>
#include <memory>
#include <vector>

namespace {
struct Track {
    std::string path;
    uint32_t start = 0, end = 0;
};
std::vector<Track> tracks;
bool opened = false, playing = false;
int channel = -1, volume = 127;
std::unique_ptr<mf::Media> media;
std::vector<int16_t> pending;
size_t pending_pos = 0;
uint64_t submitted = 0, remaining_samples = 0;
constexpr uint32_t handle = 0x52424401;
int gain() {
    return volume ? int(std::lround(2000 * std::log10(volume / 127.0))) : -10000;
}
void stop() {
    if (channel >= 0)
        host_audio_stop(channel);
    playing = false;
    media.reset();
    pending.clear();
    pending_pos = 0;
    submitted = 0;
}
bool valid(X86 *c) {
    return opened && arg(c, 0) == handle;
}
void open_cd(X86 *c) {
    set_eax(c, 0);
    if (arg(c, 0) != 0)
        return;
    if (!opened) {
        tracks.clear();
        const char *paths[] = RECOMP_CD_AUDIO_TRACKS;
        uint32_t position = 0;
        for (auto p : paths) {
            if (!p)
                break;
            Track t;
            t.start = t.end = position;
            if (*p) {
                t.path = win32_host_path_op(p, WIN32_FILE_READ);
                mf::Media probe;
                if (!probe.open(t.path) || !probe.has_audio()) {
                    tracks.clear();
                    return;
                }
                t.end = position + uint32_t(std::lround(probe.duration() * 1000));
            }
            position = t.end;
            tracks.push_back(std::move(t));
        }
        if (tracks.empty() || !position)
            return;
        channel = dx_alloc_audio_channel();
        if (channel < 0)
            return;
        opened = true;
        volume = 127;
        LOGV("redbook: opened %zu configured tracks (%u ms)", tracks.size(), position);
    }
    set_eax(c, handle);
}
void close_cd(X86 *c) {
    if (valid(c)) {
        stop();
        dx_free_audio_channel(channel);
        channel = -1;
        opened = false;
    }
    set_eax(c, 0);
}
void track_count(X86 *c) {
    set_eax(c, valid(c) ? uint32_t(tracks.size()) : 0);
}
void track_info(X86 *c) {
    uint32_t n = arg(c, 1);
    set_eax(c, 0);
    if (!valid(c) || !n || n > tracks.size())
        return;
    auto &t = tracks[n - 1];
    if (arg(c, 2) && gm_valid(arg(c, 2), 4))
        wr32(arg(c, 2), t.start);
    if (arg(c, 3) && gm_valid(arg(c, 3), 4))
        wr32(arg(c, 3), t.end);
    set_eax(c, 1);
}
void update() {
    if (!playing || !media)
        return;
    const uint32_t ahead = media->audio_rate() * media->audio_channels() * 2;
    while (host_audio_queued_bytes(channel) < ahead && remaining_samples) {
        if (pending.empty()) {
            media->fill_audio(media->audio_rate() * media->audio_channels() / 4);
            pending = media->take_audio();
            pending_pos = 0;
            if (pending.size() > remaining_samples)
                pending.resize(size_t(remaining_samples));
            if (pending.empty()) {
                remaining_samples = 0;
                break;
            }
        }
        uint32_t bytes = uint32_t(pending.size() - pending_pos) * 2;
        int taken;
        if (!submitted) {
            HostAudioPlay p{};
            p.channel = channel;
            p.pcm = pending.data();
            p.bytes = bytes;
            p.sample_rate = media->audio_rate();
            p.channels = media->audio_channels();
            p.bits = 16;
            p.volume = gain();
            host_audio_play(&p);
            if (host_audio_stream(channel) < 0) {
                stop();
                return;
            }
            taken = int(bytes);
        } else
            taken = host_audio_queue(channel, pending.data() + pending_pos, bytes);
        if (taken <= 0)
            break;
        submitted += uint32_t(taken);
        remaining_samples -= uint32_t(taken) / 2;
        pending_pos += uint32_t(taken) / 2;
        if (pending_pos == pending.size())
            pending.clear();
    }
    if (!remaining_samples && host_audio_played_bytes(channel) >= submitted)
        playing = false;
}
void play_cd(X86 *c) {
    set_eax(c, 0);
    if (!valid(c))
        return;
    stop();
    uint32_t start = arg(c, 1), end = arg(c, 2);
    for (auto &t : tracks) {
        if (t.path.empty() || start < t.start || start >= t.end || end <= start)
            continue;
        media = std::make_unique<mf::Media>();
        if (!media->open(t.path) || !media->has_audio()) {
            stop();
            return;
        }
        // A partial-track request is uncommon; discard decoded samples to its
        // precise position without exposing FFmpeg seek/keyframe rounding.
        uint64_t skip =
            uint64_t(start - t.start) * media->audio_rate() / 1000 * media->audio_channels();
        while (skip) {
            media->fill_audio(size_t(std::min<uint64_t>(skip, 65536)));
            auto pcm = media->take_audio();
            if (pcm.empty()) {
                stop();
                return;
            }
            size_t n = size_t(std::min<uint64_t>(skip, pcm.size()));
            skip -= n;
            if (n < pcm.size())
                pending.assign(pcm.begin() + n, pcm.end());
        }
        remaining_samples = uint64_t(std::min(end, t.end) - start) * media->audio_rate() / 1000 *
                            media->audio_channels();
        if (pending.size() > remaining_samples)
            pending.resize(size_t(remaining_samples));
        playing = true;
        update();
        set_eax(c, 1);
        return;
    }
}
void stop_cd(X86 *c) {
    if (valid(c))
        stop();
    set_eax(c, 1);
}
void status(X86 *c) {
    update();
    set_eax(c, !valid(c) ? 0 : playing ? 2 : 3);
}
void set_volume(X86 *c) {
    if (valid(c)) {
        volume = std::clamp(int32_t(arg(c, 1)), 0, 127);
        host_audio_set_volume(channel, gain());
    }
    set_eax(c, uint32_t(volume));
}
#define RB(name, bytes, fn) {"mss32.dll", "_AIL_redbook_" #name "@" #bytes, bytes / 4, fn}
const ImportShim shims[] = {RB(open, 4, open_cd),       RB(close, 4, close_cd),
                            RB(tracks, 4, track_count), RB(track_info, 16, track_info),
                            RB(play, 12, play_cd),      RB(stop, 4, stop_cd),
                            RB(status, 4, status),      RB(set_volume, 8, set_volume)};
} // namespace
void redbook_frame_pump(X86 *c) {
    if (c)
        update();
}
void redbook_register() {
    imports_register(shims, std::size(shims));
}
