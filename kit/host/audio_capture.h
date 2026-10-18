// audio_capture.h - what the mixer actually produced, written to a WAV.
//
// The shim can say every sound was delivered and the run can still sound
// wrong, because everything between the guest handing over PCM and the
// speakers is the host's. This writes the mixer's own output to a file so it
// can be listened to, and measures four things about it while it goes past:
//
//   * how long it ran
//   * discontinuities: consecutive samples that jump more than half of full
//     scale. A join in the wrong place, a buffer scheduled over another, a
//     rate that changed under a playing node - they all sound like a click and
//     they all look like this.
//   * silent gaps longer than 50 ms that happened while a sound was playing.
//     Silence with nothing scheduled is correct; silence with something
//     scheduled is the sound not arriving.
//   * the longest unbroken stretch of sound, which is what a run that is
//     mostly working looks like from a distance.
//
// The writer is arithmetic and a file handle, with no audio API in it, so
// the measurements can be tested against samples a test makes up.
#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Opens a capture at `rate` Hz, stereo, 16-bit. `path` may be null, which
// measures the output and writes nothing - which is what an unattended run
// wants. Returns non-zero if the capture is on.
int host_capture_open(const char *path, uint32_t rate);

// One block of the mixer's output, deinterleaved floats in -1..1. `right` may
// be null for a mono source, which is written to both sides. `busy` says
// whether the host had anything playing while this block was rendered: it is
// what separates a gap from a rest.
void host_capture_write(const float *left, const float *right, uint32_t frames, int busy);

// Finishes the file, patching the header with the lengths that were not known
// when it was opened.
void host_capture_close(void);
int host_capture_active(void);

struct HostCaptureStats {
    double seconds; // total captured
    uint64_t frames;
    uint32_t rate;
    uint32_t discontinuities; // jumps of more than half full scale
    uint32_t silent_gaps;     // silences over 50 ms with a sound playing
    uint32_t short_dropouts;  // silences of 50 ms or less, same condition
    uint32_t sound_runs;      // unbroken stretches of sound
    double longest_gap;       // the worst of them
    double longest_sound;     // the longest unbroken stretch of sound
    double sounding;          // total time that was not silence
    float peak;
    double peak_at;       // when the loudest sample went past
    uint32_t peak_voices; // how many channels were live at that instant
    // Of the plays that were noted: how many left no sound at all where they
    // began, and how many started and were gone again inside 150 ms. A run
    // where the game asks for hundreds of sounds and a listener hears a few
    // says which of the two it is.
    uint32_t plays_noted;
    uint32_t plays_absent;
    uint32_t plays_cut_short;
    // Samples the mix put above full scale before anything clamped them. The
    // original summed at the game's gains and clipped, so this is not a fault
    // to fix but the number that says how often it happens - and it is the
    // number that showed a peak limiter was riding 5 dB of gain reduction and
    // pulling the whole mix down with it.
    uint64_t clipped_samples;
    float worst_over;
};
void host_capture_stats(struct HostCaptureStats *out);

// A sound the host was asked to start, recorded against the capture's own
// clock so the mix can be asked afterwards whether it was ever heard. This is
// the instrument for "the game played 781 sounds and I heard a handful": every
// play is stamped, and at the end each one is looked for in the audio.
void host_capture_note_play(int32_t channel);

// Where the capture has reached, in seconds of rendered audio. Everything else
// the host logs is stamped with this, so a line in the log and a hole in the
// wave are the same instant rather than two clocks that have to be reconciled.
double host_capture_now(void);

// Every silence that happened while a sound was playing, in the order they
// happened: when it started and how long it lasted. This is the list that says
// where to look in the wave and which log lines to read around it.
struct HostCaptureGap {
    double at;
    double seconds;
};
uint32_t host_capture_gaps(struct HostCaptureGap *out, uint32_t max);
// Where the jumps were, in seconds, so the log around each can be read.
uint32_t host_capture_jumps(double *out, uint32_t max);
// One line per number, for a report.
void host_capture_print(void *file);

#ifdef __cplusplus
}
#endif
