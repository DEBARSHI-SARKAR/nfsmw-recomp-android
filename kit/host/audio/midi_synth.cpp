// midi_synth.cpp - the game's music, which is MIDI through a SoundFont.
//
// Populous has no streamed music. It looks for a midiOut device whose name
// begins with "SoundFont", opens it, sends a twelve-byte sysex, and then plays
// the score note by note with midiOutShortMsg. The bank it means is
// Sound/POPFIGHT.SF2, which ships with the game. Nothing in the game renders
// a note itself, so with no host synth there is simply no music.
//
// The synth here is TinySoundFont, rendered by the mixer as its music source:
// one output, so the music and the effects never compete for the device, and
// the same code on every platform.
//
// WHEN THE BANK IS LOADED
//
// Every host_midi_* call except the first arrives on a guest thread holding
// the cooperative scheduler baton, which stops every other guest thread until
// it returns. Parsing a SoundFont there would freeze the whole game at the
// moment the music starts. So the synth is built at host startup -
// host_midi_startup, on the main thread after the executable is loaded and
// before the guest entry point runs. midiOutOpen afterwards only publishes
// what already exists.
//
// The synth has one lock, over TinySoundFont's state: the render thread holds
// it for a block and a guest thread holds it for one message. Neither side
// calls into the mixer while holding it, so it orders after the mixer's own
// locks and takes part in no inversion.
#include "../audio.h"
#include "../midi.h"

#include <atomic>
#include <mutex>
#include <stdio.h>
#include <string.h>
#include <vector>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"
#define TSF_IMPLEMENTATION
#include "third_party/tsf/tsf.h"
#pragma clang diagnostic pop

namespace {

tsf *g_synth = nullptr;
std::mutex g_synth_mutex;
double g_synth_rate = 0.0;
const char *g_which = "";

// g_ready publishes the synth. g_live is the game's own open device: a synth
// that is built but not opened accepts nothing, and one that has been closed
// goes back to accepting nothing without being torn down.
std::atomic<bool> g_ready{false};
std::atomic<bool> g_live{false};

std::atomic<uint32_t> g_shorts{0}, g_sysexes{0}, g_notes_on{0};

// A short message is one, two or three bytes and the status byte says which.
int message_length(uint8_t status) {
    if (status < 0x80)
        return 0;
    uint8_t high = (uint8_t)(status & 0xf0);
    if (high == 0xc0 || high == 0xd0)
        return 2;
    if (high == 0xf0)
        return 0; // system messages do not come this way
    return 3;
}

// The mixer's music source: adds one block of the synth at the mixer's rate.
void render_music(void *, float *left, float *right, uint32_t frames) {
    std::lock_guard<std::mutex> held(g_synth_mutex);
    if (!g_synth || !g_live.load(std::memory_order_acquire))
        return;
    const double rate = host_audio_render_rate();
    if (rate != g_synth_rate) {
        g_synth_rate = rate;
        tsf_set_output(g_synth, TSF_STEREO_UNWEAVED, int(rate), 0.0f);
    }
    static std::vector<float> scratch;
    scratch.assign(size_t(frames) * 2, 0.0f);
    tsf_render_float(g_synth, scratch.data(), int(frames), 0);
    for (uint32_t i = 0; i < frames; ++i) {
        left[i] += scratch[i];
        right[i] += scratch[frames + i];
    }
}

// Everything off, on all sixteen channels. Synth lock held.
void all_off_locked() {
    if (!g_synth)
        return;
    for (int ch = 0; ch < 16; ++ch) {
        tsf_channel_midi_control(g_synth, ch, 120, 0); // all sound off
        tsf_channel_midi_control(g_synth, ch, 123, 0); // all notes off
        tsf_channel_midi_control(g_synth, ch, 121, 0); // reset controllers
        tsf_channel_set_pitchwheel(g_synth, ch, 8192);
    }
}

} // namespace

extern "C" int host_midi_startup(const char *sf2_path) {
    if (g_ready.load(std::memory_order_acquire))
        return 1;
    if (!host_audio_engine()) {
        printf("[host] midi: there is no audio engine, so there is no music\n");
        fflush(stdout);
        return 0;
    }
    if (!sf2_path || !*sf2_path) {
        printf("[host] midi: no SoundFont was found, so the music is accepted and not heard\n");
        fflush(stdout);
        return 0;
    }
    tsf *synth = tsf_load_filename(sf2_path);
    if (!synth) {
        printf("[host] midi: %s would not load, so the music is accepted and not heard\n",
               sf2_path);
        fflush(stdout);
        return 0;
    }
    g_synth_rate = host_audio_render_rate();
    tsf_set_output(synth, TSF_STEREO_UNWEAVED, int(g_synth_rate), 0.0f);
    tsf_channel_set_bank_preset(synth, 9, 128, 0); // channel 10 is percussion
    {
        std::lock_guard<std::mutex> held(g_synth_mutex);
        g_synth = synth;
    }
    g_which = "TinySoundFont";
    host_audio_set_music_source(render_music, nullptr);
    g_ready.store(true, std::memory_order_release);
    printf("[host] midi: %s, from %s\n", g_which, sf2_path);
    fflush(stdout);
    return 1;
}

// midiOutOpen. The synth is already built; this only hands it to the game.
extern "C" int host_midi_open(const char *sf2_path) {
    if (!g_ready.load(std::memory_order_acquire)) {
        static bool told = false;
        if (!told) {
            told = true;
            printf("[host] midi: no synth was built at startup%s%s, so the music "
                   "is accepted and not heard; a host that wants it calls "
                   "host_midi_startup before the guest runs\n",
                   sf2_path && *sf2_path ? " and the bank offered here is " : "",
                   sf2_path && *sf2_path ? sf2_path : "");
            fflush(stdout);
        }
        return 0;
    }
    g_shorts.store(0, std::memory_order_relaxed);
    g_sysexes.store(0, std::memory_order_relaxed);
    g_notes_on.store(0, std::memory_order_relaxed);
    g_live.store(true, std::memory_order_release);
    return 1;
}

extern "C" void host_midi_short(uint32_t msg) {
    if (!g_live.load(std::memory_order_acquire))
        return;
    uint8_t status = (uint8_t)(msg & 0xff);
    uint8_t data1 = (uint8_t)((msg >> 8) & 0x7f);
    uint8_t data2 = (uint8_t)((msg >> 16) & 0x7f);
    int length = message_length(status);
    if (!length)
        return;
    g_shorts.fetch_add(1, std::memory_order_relaxed);
    const int ch = status & 0x0f;
    std::lock_guard<std::mutex> held(g_synth_mutex);
    if (!g_synth)
        return;
    switch (status & 0xf0) {
    case 0x80:
        tsf_channel_note_off(g_synth, ch, data1);
        break;
    case 0x90:
        // A note-on with velocity zero is a note-off, which is how most scores
        // end a note; counting it as one on would say the music plays for ever.
        if (data2) {
            g_notes_on.fetch_add(1, std::memory_order_relaxed);
            tsf_channel_note_on(g_synth, ch, data1, data2 / 127.0f);
        } else
            tsf_channel_note_off(g_synth, ch, data1);
        break;
    case 0xb0:
        tsf_channel_midi_control(g_synth, ch, data1, data2);
        break;
    case 0xc0:
        tsf_channel_set_presetnumber(g_synth, ch, data1, ch == 9);
        break;
    case 0xe0:
        tsf_channel_set_pitchwheel(g_synth, ch, data1 | (data2 << 7));
        break;
    default:
        break; // aftertouch: nothing this synth does with it
    }
}

extern "C" void host_midi_sysex(const void *data, uint32_t bytes) {
    if (!g_live.load(std::memory_order_acquire) || !data || !bytes)
        return;
    g_sysexes.fetch_add(1, std::memory_order_relaxed);
    const uint8_t *p = (const uint8_t *)data;
    // The General MIDI reset, which every synth understands.
    static const uint8_t gm_reset[] = {0xf0, 0x7e, 0x7f, 0x09, 0x01, 0xf7};
    if (bytes >= sizeof gm_reset && !memcmp(p, gm_reset, sizeof gm_reset)) {
        std::lock_guard<std::mutex> held(g_synth_mutex);
        all_off_locked();
        return;
    }
    // Everything else is a manufacturer's message for a card this is not.
    // Accepted and dropped, once said out loud.
    static bool told = false;
    if (!told) {
        told = true;
        printf("[host] midi: a %u-byte sysex for another maker's synth was "
               "accepted and dropped (%02x %02x %02x %02x)\n",
               bytes, p[0], bytes > 1 ? p[1] : 0, bytes > 2 ? p[2] : 0, bytes > 3 ? p[3] : 0);
        fflush(stdout);
    }
}

extern "C" void host_midi_reset(void) {
    if (!g_live.load(std::memory_order_acquire))
        return;
    std::lock_guard<std::mutex> held(g_synth_mutex);
    all_off_locked();
}

// midiOutClose. The synth stays built: it is the host's, not the game's, and
// a game that closes and reopens its device gets the same one back.
extern "C" void host_midi_close(void) {
    if (!g_live.exchange(false, std::memory_order_acq_rel))
        return;
    {
        std::lock_guard<std::mutex> held(g_synth_mutex);
        all_off_locked();
    }
    printf("[host] midi: closed after %u messages and %u sysexes, %u notes "
           "started\n",
           g_shorts.load(std::memory_order_relaxed), g_sysexes.load(std::memory_order_relaxed),
           g_notes_on.load(std::memory_order_relaxed));
    fflush(stdout);
}

extern "C" int host_midi_is_open(void) {
    return g_live.load(std::memory_order_acquire) ? 1 : 0;
}

extern "C" const char *host_midi_synth_name(void) {
    return g_ready.load(std::memory_order_acquire) ? g_which : "";
}

extern "C" uint32_t host_midi_notes_started(void) {
    return g_notes_on.load(std::memory_order_relaxed);
}
