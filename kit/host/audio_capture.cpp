// audio_capture.cpp - see audio_capture.h.
#include "audio_capture.h"

#include <math.h>
#include <stdio.h>
#include <string.h>

#include <mutex>
#include <vector>

namespace {

// A sample that rounds to zero in sixteen bits is silence, because that is what
// the file will hold. Nothing finer than the format can be measured.
const float kSilence = 1.0f / 32768.0f;
// Silence is a property of a stretch of sound, not of one sample. Every
// waveform passes through zero twice a cycle, so asking sample by sample
// reports a break in the middle of a held note - the first measurement of this
// run said the longest unbroken sound in seventy-five seconds was 2.5 seconds,
// which was the counting and not the audio. A five-millisecond window is
// shorter than anything a person hears as a gap and longer than any zero
// crossing at an audible frequency.
const double kWindowSeconds = 0.005;
// A click, which is not the same as a large step between neighbouring samples.
//
// The first version of this counted any step over half of full scale and was
// wrong, in a way that only showed once the movie's audio started playing at
// all. Loud content above about eight kilohertz has steps that big between
// every pair of samples at 48 kHz - a full-scale eleven kilohertz tone swings
// nearly the whole range four times a cycle - so a bright passage counted as
// dozens of clicks a second while a genuinely spliced one counted as none.
// The waveform said so plainly: at every "jump" the samples were oscillating
// between plus and minus twenty thousand, which is a tone and not a seam.
//
// A click is a step that does not belong with the ones around it. So the test
// is both: over half of full scale, AND several times larger than the steps
// this passage has been making. The running average has a time constant of a
// few milliseconds, long enough not to be dragged up by the click itself.
const float kJump = 0.5f;
const float kJumpRatio = 6.0f;
const float kDeltaDecay = 0.997f; // about 3 ms at 48 kHz
const double kGapSeconds = 0.050;

std::mutex g_mutex;
FILE *g_file = nullptr;
bool g_on = false;
uint32_t g_rate = 48000;
uint64_t g_frames = 0;
uint32_t g_discontinuities = 0;
uint32_t g_silent_gaps = 0;
uint32_t g_short_dropouts = 0; // silences of 50 ms or less, with sound playing
uint32_t g_sound_runs = 0;     // unbroken stretches of sound
uint64_t g_longest_gap = 0;    // frames
uint64_t g_longest_sound = 0;  // frames
uint64_t g_sounding = 0;       // frames that were not silence
float g_peak = 0.0f;
uint64_t g_clipped = 0;

// Carried across blocks, so a click on a block boundary is still a click.
float g_last_l = 0.0f, g_last_r = 0.0f;
bool g_have_last = false;
float g_delta_average = 0.0f;
uint64_t g_run = 0; // length of the current run, in frames
bool g_run_silent = true;
bool g_run_busy = false;
// The window being filled: its length, its loudest sample, and whether
// anything was playing while it was rendered.
uint32_t g_window = 240;
uint32_t g_window_frames = 0;
float g_window_peak = 0.0f;
bool g_window_busy = false;
bool g_started = false; // a run exists to extend

std::vector<int16_t> g_scratch;
// Every silence that happened with a sound playing, however short. The list is
// the point of the instrument: a count says the mix is broken, a list says
// where to look.
std::vector<HostCaptureGap> g_gaps;
const size_t kMaxGaps = 4096;
std::vector<double> g_jumps; // where the discontinuities were
// Every window's peak, so a play noted at time t can be looked for afterwards
// rather than guessed at. At five milliseconds a window this is a few hundred
// kilobytes for a two-minute run.
std::vector<float> g_window_peaks;
struct NotedPlay {
    double at;
    int32_t channel;
};
std::vector<NotedPlay> g_plays;
const size_t kMaxPlays = 8192;
double g_peak_at = 0.0;
uint32_t g_peak_voices = 0;

void put32(uint8_t *p, uint32_t v) {
    p[0] = (uint8_t)v;
    p[1] = (uint8_t)(v >> 8);
    p[2] = (uint8_t)(v >> 16);
    p[3] = (uint8_t)(v >> 24);
}
void put16(uint8_t *p, uint16_t v) {
    p[0] = (uint8_t)v;
    p[1] = (uint8_t)(v >> 8);
}

// A 44-byte canonical WAVE header. The two lengths are not known until the
// capture is closed, so they go in as zero and are patched then.
void write_header(FILE *f, uint32_t rate, uint32_t data_bytes) {
    uint8_t h[44];
    memcpy(h, "RIFF", 4);
    put32(h + 4, 36 + data_bytes);
    memcpy(h + 8, "WAVEfmt ", 8);
    put32(h + 16, 16); // PCM header size
    put16(h + 20, 1);  // PCM
    put16(h + 22, 2);  // stereo
    put32(h + 24, rate);
    put32(h + 28, rate * 2 * 2); // byte rate
    put16(h + 32, 4);            // block align
    put16(h + 34, 16);           // bits
    memcpy(h + 36, "data", 4);
    put32(h + 40, data_bytes);
    fwrite(h, 1, sizeof h, f);
}

int16_t to_pcm16(float v) {
    if (v > 1.0f)
        v = 1.0f;
    if (v < -1.0f)
        v = -1.0f;
    float scaled = v * 32767.0f;
    return (int16_t)(scaled < 0 ? scaled - 0.5f : scaled + 0.5f);
}

// Ends the run that just finished and starts counting a new one.
void end_run();

// One finished window, silent or not, added to the run it belongs to.
void close_window() {
    if (!g_window_frames)
        return;
    if (g_window_peaks.size() < 4u * 1024u * 1024u)
        g_window_peaks.push_back(g_window_peak);
    bool silent = g_window_peak < kSilence;
    if (!silent)
        g_sounding += g_window_frames;
    if (!g_started) {
        g_started = true;
        g_run_silent = silent;
        g_run_busy = false;
    } else if (silent != g_run_silent) {
        end_run();
        g_run_silent = silent;
        g_run_busy = false;
    }
    if (g_window_busy)
        g_run_busy = true;
    g_run += g_window_frames;
    g_window_frames = 0;
    g_window_peak = 0.0f;
    g_window_busy = false;
}

void end_run() {
    if (!g_run)
        return;
    if (g_run_silent) {
        // A silence is a gap only if something was supposed to be heard.
        double seconds = g_rate ? (double)g_run / (double)g_rate : 0.0;
        if (g_run_busy) {
            if (g_gaps.size() < kMaxGaps) {
                // g_frames counts what has been written; the run being closed
                // ends there. A run that began before the first block would
                // underflow this, and did.
                uint64_t start = g_frames > g_run ? g_frames - g_run : 0;
                double at = g_rate ? (double)start / (double)g_rate : 0.0;
                g_gaps.push_back({at, seconds});
            }
            if (seconds > kGapSeconds) {
                ++g_silent_gaps;
                if (g_run > g_longest_gap)
                    g_longest_gap = g_run;
            } else {
                // Too short to be called a gap and too many to ignore: a mix
                // that keeps dropping to digital silence for a few
                // milliseconds is not a mix that is working.
                ++g_short_dropouts;
            }
        }
    } else {
        ++g_sound_runs;
        if (g_run > g_longest_sound)
            g_longest_sound = g_run;
    }
    g_run = 0;
}

} // namespace

// Begin a capture session and reset its waveform statistics. A file path additionally
// opens PCM output; an already active session is left intact.
extern "C" int host_capture_open(const char *path, uint32_t rate) {
    std::lock_guard<std::mutex> lock(g_mutex);
    if (g_on)
        return 1;
    g_rate = rate ? rate : 48000;
    g_frames = 0;
    g_discontinuities = g_silent_gaps = 0;
    g_short_dropouts = g_sound_runs = 0;
    g_gaps.clear();
    g_jumps.clear();
    g_window_peaks.clear();
    g_plays.clear();
    g_peak_at = 0.0;
    g_peak_voices = 0;
    g_longest_gap = g_longest_sound = g_sounding = 0;
    g_peak = 0.0f;
    g_clipped = 0;
    g_have_last = false;
    g_delta_average = 0.0f;
    g_run = 0;
    g_run_silent = true;
    g_run_busy = false;
    g_started = false;
    g_window = (uint32_t)(g_rate * kWindowSeconds);
    if (!g_window)
        g_window = 1;
    g_window_frames = 0;
    g_window_peak = 0.0f;
    g_window_busy = false;
    g_file = nullptr;
    if (path && *path) {
        g_file = fopen(path, "wb");
        if (!g_file) {
            fprintf(stderr, "[host] audio capture: cannot write %s\n", path);
            return 0;
        }
        write_header(g_file, g_rate, 0);
    }
    g_on = true;
    return 1;
}

// Accumulate rendered stereo samples, gap statistics and optional 16-bit PCM output.
// The capture mutex protects both the file and measurements from concurrent readers.
extern "C" void host_capture_write(const float *left, const float *right, uint32_t frames,
                                   int busy) {
    std::lock_guard<std::mutex> lock(g_mutex);
    if (!g_on || !left || !frames)
        return;
    if (!right)
        right = left;

    if (g_file)
        g_scratch.resize((size_t)frames * 2);
    for (uint32_t i = 0; i < frames; ++i) {
        float l = left[i], r = right[i];
        if (g_have_last) {
            float dl = l - g_last_l, dr = r - g_last_r;
            if (dl < 0)
                dl = -dl;
            if (dr < 0)
                dr = -dr;
            float d = dl > dr ? dl : dr;
            if (d > kJump && d > g_delta_average * kJumpRatio) {
                ++g_discontinuities;
                if (g_jumps.size() < kMaxGaps && g_rate)
                    g_jumps.push_back((double)(g_frames + i) / (double)g_rate);
            }
            g_delta_average = g_delta_average * kDeltaDecay + d * (1.0f - kDeltaDecay);
        }
        g_last_l = l;
        g_last_r = r;
        g_have_last = true;

        float al = l < 0 ? -l : l, ar = r < 0 ? -r : r;
        float loud = al > ar ? al : ar;
        if (loud > 1.0f)
            ++g_clipped;
        if (loud > g_peak) {
            g_peak = loud;
            if (g_rate)
                g_peak_at = (double)(g_frames + i) / (double)g_rate;
            g_peak_voices = (uint32_t)(busy < 0 ? 0 : busy);
        }
        if (loud > g_window_peak)
            g_window_peak = loud;
        if (busy)
            g_window_busy = true;
        if (++g_window_frames >= g_window)
            close_window();

        if (g_file) {
            g_scratch[(size_t)i * 2 + 0] = to_pcm16(l);
            g_scratch[(size_t)i * 2 + 1] = to_pcm16(r);
        }
    }
    g_frames += frames;
    if (g_file)
        fwrite(g_scratch.data(), sizeof(int16_t), (size_t)frames * 2, g_file);
}

extern "C" void host_capture_close(void) {
    std::lock_guard<std::mutex> lock(g_mutex);
    if (!g_on)
        return;
    close_window();
    end_run();
    if (g_file) {
        uint32_t data_bytes = (uint32_t)(g_frames * 4);
        fseek(g_file, 0, SEEK_SET);
        write_header(g_file, g_rate, data_bytes);
        fclose(g_file);
        g_file = nullptr;
    }
    g_on = false;
}

extern "C" uint32_t host_capture_jumps(double *out, uint32_t max) {
    std::lock_guard<std::mutex> lock(g_mutex);
    uint32_t n = (uint32_t)g_jumps.size();
    if (out && max) {
        uint32_t give = n < max ? n : max;
        for (uint32_t i = 0; i < give; ++i)
            out[i] = g_jumps[i];
    }
    return n;
}

extern "C" void host_capture_note_play(int32_t channel) {
    std::lock_guard<std::mutex> lock(g_mutex);
    if (!g_on || g_plays.size() >= kMaxPlays)
        return;
    double at = g_rate ? (double)g_frames / (double)g_rate : 0.0;
    g_plays.push_back({at, channel});
}

extern "C" double host_capture_now(void) {
    std::lock_guard<std::mutex> lock(g_mutex);
    return g_rate ? (double)g_frames / (double)g_rate : 0.0;
}

extern "C" uint32_t host_capture_gaps(struct HostCaptureGap *out, uint32_t max) {
    std::lock_guard<std::mutex> lock(g_mutex);
    uint32_t n = (uint32_t)g_gaps.size();
    if (out && max) {
        uint32_t give = n < max ? n : max;
        for (uint32_t i = 0; i < give; ++i)
            out[i] = g_gaps[i];
    }
    return n;
}

extern "C" int host_capture_active(void) {
    std::lock_guard<std::mutex> lock(g_mutex);
    return g_on ? 1 : 0;
}

// Snapshot capture statistics, including the sound/silence run still in progress.
// Correlate requested plays with observed energy to expose missing or truncated sound.
extern "C" void host_capture_stats(struct HostCaptureStats *out) {
    if (!out)
        return;
    std::lock_guard<std::mutex> lock(g_mutex);
    double rate = g_rate ? (double)g_rate : 1.0;
    // The run in progress counts towards the answer, or a capture read while it
    // is still going always reports one stretch short.
    uint64_t sound = g_longest_sound, gap = g_longest_gap;
    if (g_run && !g_run_silent && g_run > sound)
        sound = g_run;
    if (g_run && g_run_silent && g_run_busy && g_run > gap)
        gap = g_run;
    out->seconds = (double)g_frames / rate;
    out->frames = g_frames;
    out->rate = g_rate;
    out->discontinuities = g_discontinuities;
    out->silent_gaps = g_silent_gaps;
    out->short_dropouts = g_short_dropouts;
    out->sound_runs = g_sound_runs + (g_run && !g_run_silent ? 1 : 0);
    out->longest_gap = (double)gap / rate;
    out->longest_sound = (double)sound / rate;
    out->sounding = (double)g_sounding / rate;
    out->peak = g_peak;
    out->peak_at = g_peak_at;
    out->peak_voices = g_peak_voices;

    // Each noted play, looked for in the audio that followed it. A sound the
    // host started leaves energy where it began; one that does not was asked
    // for and never heard, whatever the shim's counters say.
    out->clipped_samples = g_clipped;
    out->worst_over = g_peak > 1.0f ? g_peak : 1.0f;
    out->plays_noted = (uint32_t)g_plays.size();
    out->plays_absent = 0;
    out->plays_cut_short = 0;
    const size_t per_second = g_window ? (size_t)(g_rate / g_window) : 200;
    const size_t onset = per_second / 20 + 1;    // 50 ms
    const size_t hold = per_second * 150 / 1000; // 150 ms
    for (const NotedPlay &p : g_plays) {
        size_t w = (size_t)(p.at * (double)per_second);
        if (w >= g_window_peaks.size())
            continue; // the run ended on it
        float best = 0.0f;
        for (size_t i = w; i < g_window_peaks.size() && i < w + onset; ++i)
            if (g_window_peaks[i] > best)
                best = g_window_peaks[i];
        if (best < kSilence) {
            ++out->plays_absent;
            continue;
        }
        size_t quiet = 0;
        for (size_t i = w; i < g_window_peaks.size() && i < w + hold; ++i)
            if (g_window_peaks[i] < kSilence)
                ++quiet;
        if (quiet > hold / 2)
            ++out->plays_cut_short;
    }
}

// Write a human-readable capture report from observed waveform statistics.
// Use this alongside channel counters when investigating audible gaps or clipping.
extern "C" void host_capture_print(void *file) {
    FILE *f = file ? (FILE *)file : stdout;
    HostCaptureStats s;
    host_capture_stats(&s);
    if (!s.frames)
        return;
    fprintf(f,
            "audio capture:      %.1fs at %u Hz, %.1fs of it not silence, "
            "loudest %.3f at %.3fs with %u voice%s live\n",
            s.seconds, s.rate, s.sounding, s.peak, s.peak_at, s.peak_voices,
            s.peak_voices == 1 ? "" : "s");
    fprintf(f,
            "                    %u discontinuities, %u silent gaps over 50 ms "
            "with a sound playing (worst %.3fs)\n",
            s.discontinuities, s.silent_gaps, s.longest_gap);
    fprintf(f,
            "                    %u unbroken stretches of sound, longest %.2fs, "
            "%u dropouts of 50 ms or less\n",
            s.sound_runs, s.longest_sound, s.short_dropouts);
    // The question a listener actually asks: the game played N sounds, how
    // many of them were there. A counter on either side of the call counts
    // calls; this counts audio.
    if (s.clipped_samples)
        fprintf(f,
                "                    %llu samples came out above full scale "
                "(worst %.3f); the original summed and clipped too\n",
                (unsigned long long)s.clipped_samples, (double)s.worst_over);
    if (s.plays_noted)
        fprintf(f,
                "                    %u sounds started, %u left no sound where "
                "they began, %u were gone again inside 150 ms\n",
                s.plays_noted, s.plays_absent, s.plays_cut_short);
    // Where they were, so the log around each one can be read.
    HostCaptureGap gaps[64];
    uint32_t n = host_capture_gaps(gaps, 64);
    if (!n)
        return;
    fprintf(f, "                    silences with a sound playing, at:");
    uint32_t show = n < 64 ? n : 64;
    for (uint32_t i = 0; i < show; ++i) {
        if (i % 6 == 0)
            fprintf(f, "\n                     ");
        fprintf(f, " %.3f+%.0fms", gaps[i].at, gaps[i].seconds * 1000.0);
    }
    if (n > show)
        fprintf(f, " ... and %u more", n - show);
    fprintf(f, "\n");
    double jumps[32];
    uint32_t jn = host_capture_jumps(jumps, 32);
    if (!jn)
        return;
    fprintf(f, "                    jumps of more than half full scale, at:");
    uint32_t js = jn < 32 ? jn : 32;
    for (uint32_t i = 0; i < js; ++i) {
        if (i % 8 == 0)
            fprintf(f, "\n                     ");
        fprintf(f, " %.3f", jumps[i]);
    }
    if (jn > js)
        fprintf(f, " ... and %u more", jn - js);
    fprintf(f, "\n");
}
