// midi.h - the host's MIDI synth.
//
// The five entry points the WINMM shim calls are declared by the runtime, in
// runtime/win32.h, because that is where the contract belongs: the
// shim compiles against them and links whatever weak defaults or real
// implementation the build supplies. This header adds only what the host and
// its tests want to ask about the synth afterwards.
#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Builds the synth and loads the bank, ONCE, at host startup: on the main
// thread, after the executable is loaded so the bank path can be resolved, and
// before the guest entry point runs. Every later host_midi_* call arrives on a
// guest thread holding the cooperative scheduler baton, which stops every other
// guest thread until it returns, so parsing a SoundFont there would freeze the
// game at the moment the music starts. Returns non-zero if a synth is ready.
//
// `sf2_path` is a host filesystem path to the bank, or null to use Apple's
// built-in General MIDI voices. win32_midi_soundfont_path() resolves the game's
// own through the file shim.
int host_midi_startup(const char *sf2_path);

// The five the shim calls, repeated here so a host file that includes only
// this header still sees them. host_midi_open publishes what startup built and
// parses nothing; its `sf2_path` is ignored and kept only because the shim's
// contract passes it. The return is non-zero if a synth is open.
int host_midi_open(const char *sf2_path);
void host_midi_short(uint32_t msg);
void host_midi_sysex(const void *data, uint32_t bytes);
void host_midi_reset(void);
void host_midi_close(void);

// Which of the three synths is running, in words, or "" when none is. A run
// that sounds wrong says which one it got rather than leaving it to be guessed.
const char *host_midi_synth_name(void);
int host_midi_is_open(void);
// Notes started since the synth opened. A note-on with velocity zero is a
// note-off and is not counted, which is how most scores end a note.
uint32_t host_midi_notes_started(void);

#ifdef __cplusplus
}
#endif
