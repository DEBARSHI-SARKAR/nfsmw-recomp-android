// Soundlib.dll's singleton MIDI helper, measured with Capstone over its
// exported x86 bodies. The five imported exports pop these bytes at RET:
// CreateMidi 0, OpenMidi 4, StopMidi 0, SetMidiVolume 4, FreeMidi 0.
// The other two exports, PlayMidi and GetMidiVolume, also have RET 0.
// There are no handle arguments: CreateMidi returns BOOL. OpenMidi takes
// char **, starts the segment and sets 5000 repeats. Set/GetMidiVolume pass
// a signed DirectMusic master volume (millibels), not a 0..100 percentage.
// The host supplies a synth event seam; this module schedules SMF tracks on
// the guest frame seam, without adding a host thread or borrowing guest data.
#include "com.h"
#include "dx.h"
#include "../host/midi.h"
#include "../runtime/imports.h"
#include "../runtime/memory.h"
#include "../runtime/win32.h"
#include "../platform/os.h"
#include <algorithm>
#include <array>
#include <cmath>
#include <iterator>
#include <vector>

namespace {
constexpr uint32_t ERROR_MIDI = 0x80004005u;
struct Event {
    uint64_t tick = 0, us = 0;
    uint32_t message = 0, tempo = 0;
    std::vector<uint8_t> sysex;
};
std::vector<Event> events;
bool opened = false, playing = false;
int32_t volume = 0;
std::array<uint8_t, 16> channel_volume{};
size_t next_event = 0;
uint32_t last_ms = 0, repeats = 0;
uint64_t elapsed_us = 0, duration_us = 0;

uint16_t be16(const uint8_t *p) {
    return (uint16_t)((p[0] << 8) | p[1]);
}
uint32_t be32(const uint8_t *p) {
    return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}
bool vlq(const std::vector<uint8_t> &b, size_t &at, size_t end, uint32_t &value) {
    value = 0;
    for (int i = 0; i < 4 && at < end; ++i) {
        uint8_t v = b[at++];
        value = (value << 7) | (v & 127);
        if (!(v & 128))
            return true;
    }
    return false;
}

// Parse bounded track chunks and merge format 1 events by absolute tick.
// Tempo changes from the merged sequence apply before converting later ticks.
// Unsupported formats (including SMPTE timing) fail OpenMidi explicitly.
bool parse_midi(const std::vector<uint8_t> &b, std::vector<Event> &out, uint64_t &duration) {
    if (b.size() < 14 || memcmp(b.data(), "MThd", 4) != 0)
        return false;
    uint32_t header = be32(b.data() + 4);
    if (header < 6 || header > b.size() - 8)
        return false;
    uint16_t format = be16(b.data() + 8), tracks = be16(b.data() + 10);
    uint16_t division = be16(b.data() + 12);
    if (format > 1 || !tracks || (format == 0 && tracks != 1) || !division || (division & 0x8000))
        return false;
    size_t at = 8 + header;
    for (uint16_t track = 0; track < tracks; ++track) {
        if (b.size() - at < 8 || memcmp(b.data() + at, "MTrk", 4) != 0)
            return false;
        uint32_t bytes = be32(b.data() + at + 4);
        at += 8;
        if (bytes > b.size() - at)
            return false;
        size_t end = at + bytes;
        uint64_t tick = 0;
        uint8_t running = 0;
        bool ended = false;
        while (at < end) {
            uint32_t delta = 0;
            if (!vlq(b, at, end, delta) || at == end)
                return false;
            tick += delta;
            Event e;
            e.tick = tick;
            uint8_t status = b[at];
            if (status & 128)
                ++at;
            else if (running)
                status = running;
            else
                return false;
            if (status < 0xf0) {
                running = status;
                uint32_t size = (status & 0xe0) == 0xc0 ? 1 : 2;
                if (size > end - at)
                    return false;
                e.message = status;
                for (uint32_t i = 0; i < size; ++i) {
                    if (b[at] & 128)
                        return false;
                    e.message |= (uint32_t)b[at++] << (8 + i * 8);
                }
            } else {
                running = 0;
                uint8_t type = 0;
                if (status == 0xff) {
                    if (at == end)
                        return false;
                    type = b[at++];
                } else if (status != 0xf0 && status != 0xf7) {
                    return false;
                }
                uint32_t size = 0;
                if (!vlq(b, at, end, size) || size > end - at)
                    return false;
                if (status == 0xff) {
                    if (type == 0x51) {
                        if (size != 3)
                            return false;
                        e.tempo = (uint32_t)b[at] << 16 | (uint32_t)b[at + 1] << 8 | b[at + 2];
                        if (!e.tempo)
                            return false;
                    } else if (type == 0x2f) {
                        if (size != 0)
                            return false;
                        ended = true;
                    }
                } else {
                    if (status == 0xf0)
                        e.sysex.push_back(0xf0);
                    e.sysex.insert(e.sysex.end(), b.begin() + (ptrdiff_t)at,
                                   b.begin() + (ptrdiff_t)(at + size));
                }
                at += size;
            }
            out.push_back(std::move(e));
            if (ended) {
                at = end;
                break;
            }
        }
        if (!ended)
            return false;
    }
    std::stable_sort(out.begin(), out.end(),
                     [](const Event &a, const Event &b) { return a.tick < b.tick; });
    uint64_t tick = 0, us = 0, remainder = 0;
    uint32_t tempo = 500000;
    for (auto &e : out) {
        uint64_t units = (e.tick - tick) * tempo + remainder;
        us += units / division;
        remainder = units % division;
        e.us = us;
        tick = e.tick;
        if (e.tempo)
            tempo = e.tempo;
    }
    duration = us;
    return !out.empty();
}

void send_volume(uint32_t ch) {
    double gain = std::pow(10.0, volume / 2000.0);
    uint32_t level = (uint32_t)std::clamp(std::lround(channel_volume[ch] * gain), 0l, 127l);
    host_midi_short(0xb0 | ch | 7u << 8 | level << 16);
}
void stop() {
    if (opened)
        host_midi_reset();
    playing = false;
}
void pump() {
    if (!playing)
        return;
    uint32_t now = host_millis();
    elapsed_us += (uint64_t)(uint32_t)(now - last_ms) * 1000;
    last_ms = now;
    // A delayed frame may cross several repeats. Bound work per frame while
    // retaining the remaining elapsed time for the next tick.
    for (uint32_t budget = 0; budget < 4096; ++budget) {
        if (next_event == events.size()) {
            if (!duration_us || !repeats) {
                stop();
                return;
            }
            --repeats;
            elapsed_us -= duration_us;
            next_event = 0;
            host_midi_reset();
            channel_volume.fill(100);
            for (uint32_t ch = 0; ch < 16; ++ch)
                send_volume(ch);
        }
        const Event &e = events[next_event];
        if (e.us > elapsed_us)
            return;
        ++next_event;
        if (e.message) {
            if ((e.message & 0xfff0) == 0x07b0) {
                uint32_t ch = e.message & 15;
                channel_volume[ch] = (uint8_t)(e.message >> 16);
                send_volume(ch);
            } else {
                host_midi_short(e.message);
            }
        }
        if (!e.sysex.empty())
            host_midi_sysex(e.sysex.data(), (uint32_t)e.sysex.size());
    }
}
void play() {
    stop();
    channel_volume.fill(100);
    for (uint32_t ch = 0; ch < 16; ++ch)
        send_volume(ch);
    next_event = 0;
    elapsed_us = 0;
    last_ms = host_millis();
    repeats = 5000;
    playing = !events.empty();
    pump();
}
void create_midi(X86 *c) {
    soundlib_reset();
    std::string sf2 = win32_midi_soundfont_path();
    opened = host_midi_open(sf2.empty() ? nullptr : sf2.c_str()) != 0;
    channel_volume.fill(100);
    set_eax(c, opened ? 1 : 0);
}

// OpenMidi's sole argument points to a guest ANSI string pointer, matching
// the DLL's extra dereference before MultiByteToWideChar. Use the normal
// read resolver for case folding, overlays and drive mapping.
void open_midi(X86 *c) {
    set_eax(c, ERROR_MIDI);
    uint32_t ref = arg(c, 0);
    if (!opened || !ref || !gm_valid(ref, 4))
        return;
    uint32_t name = rd32(ref);
    if (!name || !gm_valid(name, 1))
        return;
    std::string path = win32_host_path_op(gm_str(name), WIN32_FILE_READ);
    int fd = path.empty() ? -1 : os_fd_open(path.c_str(), OS_O_RDONLY);
    if (fd < 0)
        return;
    OsStat st{};
    if (os_fd_stat(fd, &st) != 0 || !st.is_regular || !st.size || st.size > INT32_MAX) {
        os_fd_close(fd);
        return;
    }
    std::vector<uint8_t> bytes((size_t)st.size);
    size_t got = 0;
    while (got < bytes.size()) {
        int64_t n = os_fd_read(fd, bytes.data() + got, bytes.size() - got);
        if (n <= 0)
            break;
        got += (size_t)n;
    }
    os_fd_close(fd);
    std::vector<Event> parsed;
    uint64_t duration = 0;
    if (got != bytes.size() || !parse_midi(bytes, parsed, duration))
        return;
    stop();
    events = std::move(parsed);
    duration_us = duration;
    play();
    set_eax(c, 0);
}
void play_midi(X86 *c) {
    if (opened && !events.empty()) {
        play();
        set_eax(c, 0);
    } else {
        set_eax(c, ERROR_MIDI);
    }
}
void stop_midi(X86 *c) {
    stop();
    set_eax(c, 0);
}
void set_volume(X86 *c) {
    volume = std::clamp((int32_t)arg(c, 0), -10000, 2000);
    if (opened)
        for (uint32_t ch = 0; ch < 16; ++ch)
            send_volume(ch);
    set_eax(c, 0);
}
void get_volume(X86 *c) {
    set_eax(c, (uint32_t)volume);
}
void free_midi(X86 *c) {
    soundlib_reset();
    set_eax(c, 0);
}
const ImportShim shims[] = {
    {"Soundlib.dll", "CreateMidi", 0, create_midi},
    {"Soundlib.dll", "OpenMidi", 1, open_midi},
    {"Soundlib.dll", "PlayMidi", 0, play_midi},
    {"Soundlib.dll", "StopMidi", 0, stop_midi},
    {"Soundlib.dll", "SetMidiVolume", 1, set_volume},
    {"Soundlib.dll", "GetMidiVolume", 0, get_volume},
    {"Soundlib.dll", "FreeMidi", 0, free_midi},
};
} // namespace

void soundlib_register() {
    imports_register(shims, std::size(shims));
}
void soundlib_frame_pump(X86 *c) {
    if (c)
        pump();
}
void soundlib_reset() {
    stop();
    if (opened)
        host_midi_close();
    opened = false;
    events.clear();
    next_event = 0;
    volume = 0;
    duration_us = elapsed_us = 0;
}
