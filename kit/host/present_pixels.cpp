// present_pixels.cpp - the parts of presentation that are arithmetic and files
// rather than Metal.
//
// Split out for the same reason audio_math.cpp is: two hosts want them and only
// one wants a window. The windowed host puts frames on a drawable; the headless
// smoke host expands the same pixels to write them to disk and to measure them.
// Linking MetalKit to do that would pull a view class into a run that must not
// create one.
#include "present.h"
#include "../dx/host_api.h"
#include "../runtime/profile.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../platform/os.h"

#include <algorithm>
#include <atomic>
#include <cmath>
#include <memory>
#include <string>
#include <vector>

#include "indexed_frame.hpp"

// ---------------------------------------------------------------------------
// The frame-rate arithmetic. No Metal, no clock of its own: a test drives it
// with the timestamps it wants to ask about.
// ---------------------------------------------------------------------------
namespace {
// Half a second is twenty frames at 40 fps. A longer gap than that is a load,
// a pause or a stall, and counting it would report a rate nobody saw.
const double kActiveGap = 0.5;
const double kWindow = 5.0;
} // namespace

extern "C" double host_rate_active_gap(void) {
    return kActiveGap;
}
extern "C" double host_rate_window(void) {
    return kWindow;
}

extern "C" void host_rate_meter_reset(HostRateMeter *m) {
    if (!m)
        return;
    memset(m, 0, sizeof *m);
}

extern "C" void host_rate_meter_frame(HostRateMeter *m, double now) {
    if (!m)
        return;
    ++m->drawn;
    if (m->last > 0.0) {
        double gap = now - m->last;
        if (gap > 0.0 && gap <= kActiveGap)
            m->active_seconds += gap;
    }
    m->last = now;

    // A ring of the timestamps still inside the window. Frames older than the
    // window fall out of the front; the ring's own size is the ceiling on how
    // fast a rate it can measure.
    if (m->count == HOST_RATE_WINDOW_FRAMES) {
        m->head = (m->head + 1) % HOST_RATE_WINDOW_FRAMES;
        --m->count;
    }
    m->window[(m->head + m->count) % HOST_RATE_WINDOW_FRAMES] = now;
    ++m->count;
    while (m->count > 1 && now - m->window[m->head] > kWindow) {
        m->head = (m->head + 1) % HOST_RATE_WINDOW_FRAMES;
        --m->count;
    }

    // Only a window that is actually full describes a sustained rate: two
    // frames a millisecond apart are not 1000 fps for five seconds.
    double span = now - m->window[m->head];
    if (m->count > 1 && span >= kWindow * 0.98) {
        double fps = (double)(m->count - 1) / span;
        if (fps > m->best_window_fps)
            m->best_window_fps = fps;
    }
}

// ---------------------------------------------------------------------------
// The pixel maths, with no Metal in it.
// ---------------------------------------------------------------------------
extern "C" void host_present_expand_indexed(const uint8_t *src, int w, int h, int pitch,
                                            const uint32_t *palette, uint8_t *out) {
    if (!src || !out || w <= 0 || h <= 0)
        return;
    // The shim's palette is 0x00RRGGBB: the top byte is padding, not alpha.
    pop::Palette colors{};
    for (int i = 0; i < 256; ++i) {
        uint32_t c = palette ? palette[i] : (uint32_t)(i * 0x010101u);
        colors[i] = pop::RGBA8{(uint8_t)((c >> 16) & 0xff), (uint8_t)((c >> 8) & 0xff),
                               (uint8_t)(c & 0xff), 255};
    }
    pop::IndexedFrame frame{(uint32_t)w, (uint32_t)h, (uint32_t)pitch,
                            std::span<const uint8_t>(src, (size_t)pitch * (size_t)h)};
    // One backend for the process: it holds no per-frame state and a present
    // happens sixty times a second.
    static std::unique_ptr<pop::IndexedFrameBackend> backend = pop::make_cpu_frame_backend();
    std::vector<pop::RGBA8> rgba = backend->expand(frame, colors);
    memcpy(out, rgba.data(), rgba.size() * sizeof(pop::RGBA8));
}

extern "C" void host_present_expand_rgb565(const uint8_t *src, int w, int h, int pitch,
                                           uint8_t *out) {
    if (!src || !out || w <= 0 || h <= 0)
        return;
    for (int y = 0; y < h; ++y) {
        const uint8_t *row = src + (size_t)y * (size_t)pitch;
        uint8_t *o = out + (size_t)y * (size_t)w * 4;
        for (int x = 0; x < w; ++x) {
            uint32_t p = (uint32_t)(row[2 * x] | (row[2 * x + 1] << 8));
            // Scaled, not shifted: 31 has to become 255 or white is not white.
            o[4 * x + 0] = (uint8_t)(((p >> 11) & 0x1f) * 255 / 31);
            o[4 * x + 1] = (uint8_t)(((p >> 5) & 0x3f) * 255 / 63);
            o[4 * x + 2] = (uint8_t)((p & 0x1f) * 255 / 31);
            o[4 * x + 3] = 255;
        }
    }
}

extern "C" void host_present_expand_xrgb8888(const uint8_t *src, int w, int h, int pitch,
                                             uint8_t *out) {
    if (!src || !out || w <= 0 || h <= 0)
        return;
    for (int y = 0; y < h; ++y) {
        const uint8_t *row = src + (size_t)y * (size_t)pitch;
        uint8_t *o = out + (size_t)y * (size_t)w * 4;
        for (int x = 0; x < w; ++x) {
            o[4 * x + 0] = row[4 * x + 2];
            o[4 * x + 1] = row[4 * x + 1];
            o[4 * x + 2] = row[4 * x + 0];
            o[4 * x + 3] = 255;
        }
    }
}

extern "C" struct HostFit host_present_fit(double dw, double dh, int gw, int gh) {
    HostFit fit = {0, 0, dw, dh, 1.0};
    if (gw <= 0 || gh <= 0 || dw <= 0 || dh <= 0)
        return fit;
    double fractional = std::min(dw / gw, dh / gh);
    // A whole multiple keeps every guest pixel the same size on screen, which
    // is what stops 1998 art from shimmering. Below 1:1 there is no whole
    // multiple to take: main.mm sets the window's contentMinSize to the guest
    // mode so that cannot happen, and this fractional fall-back exists only so
    // that a drawable that is somehow smaller still shows the whole frame
    // instead of cropping it.
    double scale = fractional >= 1.0 ? std::floor(fractional) : fractional;
    fit.scale = scale;
    fit.w = std::floor(gw * scale);
    fit.h = std::floor(gh * scale);
    fit.x = std::floor((dw - fit.w) / 2);
    fit.y = std::floor((dh - fit.h) / 2);
    return fit;
}

extern "C" struct HostGameRect host_present_game_rect(int dw, int dh, int gw, int gh,
                                                      int safe_top) {
    const HostGameRect whole = {0, 0, dw, dh};
    if (dh <= dw || gw <= 0 || gh <= 0 || dw <= 0)
        return whole;
    const int top = safe_top > 0 ? safe_top : 0;
    const long h = lround(dw * gh / double(gw));
    if (h > dh - top)
        return whole;
    return {0, top, dw, int(h)};
}

static std::atomic<int> g_present_safe_top{0};
extern "C" void host_present_set_safe_top(int pixels) {
    g_present_safe_top.store(pixels > 0 ? pixels : 0);
}
extern "C" int host_present_safe_top(void) {
    return g_present_safe_top.load();
}

extern "C" void host_present_point_to_game(struct HostGameRect rect, int32_t x, int32_t y,
                                           int32_t *out_x, int32_t *out_y) {
    if (out_x)
        *out_x = x - rect.x;
    if (out_y)
        *out_y = y - rect.y;
}

extern "C" struct HostWindowSize host_window_size_for(int gw, int gh, int uw, int uh,
                                                      double density) {
    HostWindowSize s = {gw, gh, gw, gh};
    if (gw <= 0 || gh <= 0 || uw <= 0 || uh <= 0)
        return s;
    if (density <= 0)
        density = 1;
    const double room_w = uw * 0.95, room_h = uh * 0.95;
    if (gw <= room_w && gh <= room_h) {
        int scale = 1;
        while (scale < 4 && (scale + 1) * gw <= room_w && (scale + 1) * gh <= room_h)
            ++scale;
        s.w = gw * scale;
        s.h = gh * scale;
        return s;
    }
    // Larger than the screen at a point a pixel: count in drawable pixels.
    const int whole = int(std::floor(std::min(room_w * density / gw, room_h * density / gh)));
    if (whole >= 1) {
        s.w = int(std::lround(gw * whole / density));
        s.h = int(std::lround(gh * whole / density));
    } else {
        const double f = std::min(room_w / gw, room_h / gh);
        s.w = int(std::floor(gw * f + 1e-6));
        s.h = int(std::floor(gh * f + 1e-6));
    }
    s.min_w = s.w;
    s.min_h = s.h;
    return s;
}

extern "C" void host_present_point_to_guest(double dw, double dh, int gw, int gh, double px,
                                            double py, int32_t *out_x, int32_t *out_y) {
    if (out_x)
        *out_x = 0;
    if (out_y)
        *out_y = 0;
    if (gw <= 0 || gh <= 0)
        return;
    HostFit fit = host_present_fit(dw, dh, gw, gh);
    if (fit.scale <= 0)
        return;
    double gx = (px - fit.x) / fit.scale;
    double gy = (py - fit.y) / fit.scale;
    if (gx < 0)
        gx = 0;
    if (gy < 0)
        gy = 0;
    if (gx > gw - 1)
        gx = gw - 1;
    if (gy > gh - 1)
        gy = gh - 1;
    if (out_x)
        *out_x = (int32_t)gx;
    if (out_y)
        *out_y = (int32_t)gy;
}

// ---------------------------------------------------------------------------
// Frame dumps.
// ---------------------------------------------------------------------------
extern "C" uint32_t host_dump_every(void) {
    static uint32_t every = 0xffffffffu;
    if (every == 0xffffffffu) {
        const char *v = recomp_env("HOST_DUMP_EVERY");
        every = v ? (uint32_t)strtoul(v, nullptr, 0) : 0;
        if (every) {
            printf("[host] dumping every %u presented frame and its Direct3D "
                   "render target to %s\n",
                   every, host_dump_dir());
            fflush(stdout);
        }
    }
    return every;
}

extern "C" const char *host_dump_dir(void) {
    static std::string dir;
    if (dir.empty()) {
        const char *v = recomp_env("HOST_DUMP_DIR");
        // build/recomp/live/frames belongs to live runs and to whoever is
        // looking at them. Nothing here ever removes a directory: a dump
        // directory is somebody's evidence, and a harness that tidies one up
        // has destroyed the only record of a run that cannot be repeated.
        dir = v ? v : "build/recomp/live/frames";
        // Every component, because the default is three deep and none of it
        // need exist.
        std::string acc;
        for (size_t i = 0; i <= dir.size(); ++i) {
            if (i == dir.size() || dir[i] == '/') {
                if (!acc.empty())
                    os_mkdir(acc.c_str());
            }
            if (i < dir.size())
                acc.push_back(dir[i]);
        }
    }
    return dir.c_str();
}

extern "C" int host_write_ppm(const char *path, const uint8_t *rgb, int w, int h) {
    if (!path || !rgb || w <= 0 || h <= 0)
        return 0;
    FILE *f = fopen(path, "wb");
    if (!f)
        return 0;
    fprintf(f, "P6\n%d %d\n255\n", w, h);
    size_t want = (size_t)w * (size_t)h * 3;
    int ok = fwrite(rgb, 1, want, f) == want;
    fclose(f);
    return ok;
}

// ---------------------------------------------------------------------------
// The stats line. One formatter, two hosts. See present.h for what each phase
// means and why the readback reasons are separate.
// ---------------------------------------------------------------------------
namespace {
std::atomic<uint64_t> g_phase_us[HOST_PHASE_COUNT];
std::atomic<uint64_t> g_upload_count{0};
std::atomic<uint64_t> g_upload_bytes{0};
std::atomic<uint64_t> g_readback[HOST_READBACK_COUNT];

// Whether anything has EVER noted this measure in this process.
//
// A measure nothing instruments yet must be absent from the line, not zero in
// it. Zero says "this happened no times" and the regression rules then hold it
// to zero for ever; absent says "nothing counts this yet" and the first task to
// instrument it produces a new measurement rather than a breach. Printing
// zeros was laying that trap for every one of these at once: the committed
// baseline had every phase at 0.0 and every upload and readback at 0, with
// nothing anywhere calling the note functions.
//
// Noted, not non-zero: a measure that is instrumented and genuinely counted
// nothing this run is a real zero and must stay one.
std::atomic<bool> g_phase_noted[HOST_PHASE_COUNT];
std::atomic<bool> g_upload_noted{false};
std::atomic<bool> g_readback_noted{false};

double phase_ms(HostPhase p) {
    return (double)g_phase_us[p].load(std::memory_order_relaxed) / 1000.0;
}
uint64_t readbacks_total() {
    uint64_t n = 0;
    for (int i = 0; i < HOST_READBACK_COUNT; ++i)
        n += g_readback[i].load(std::memory_order_relaxed);
    return n;
}
} // namespace

extern "C" void host_stats_note_phase(HostPhase phase, double ms) {
    if (phase < 0 || phase >= HOST_PHASE_COUNT || !(ms > 0.0))
        return;
    // Microseconds, because a run accumulates millions of these and adding
    // small doubles to a large one loses them: at 100 seconds of guest time a
    // 3 microsecond call is below the last bit of a double holding 1e5 ms.
    g_phase_us[phase].fetch_add((uint64_t)(ms * 1000.0 + 0.5), std::memory_order_relaxed);
    g_phase_noted[phase].store(true, std::memory_order_relaxed);
    // The sampling profiler wants guest time too, and measuring it twice is
    // two numbers that can disagree. Task 16 put the wiring point here.
    if (phase == HOST_PHASE_GUEST)
        profile_note_guest_ms(ms);
}

extern "C" void host_stats_note_upload(uint32_t bytes) {
    g_upload_count.fetch_add(1, std::memory_order_relaxed);
    g_upload_bytes.fetch_add(bytes, std::memory_order_relaxed);
    g_upload_noted.store(true, std::memory_order_relaxed);
}

extern "C" void host_stats_note_readback(HostReadbackReason reason) {
    if (reason < 0 || reason >= HOST_READBACK_COUNT)
        return;
    g_readback[reason].fetch_add(1, std::memory_order_relaxed);
    g_readback_noted.store(true, std::memory_order_relaxed);
}

extern "C" void host_stats_reset(void) {
    for (int i = 0; i < HOST_PHASE_COUNT; ++i) {
        g_phase_us[i].store(0, std::memory_order_relaxed);
        g_phase_noted[i].store(false, std::memory_order_relaxed);
    }
    g_upload_noted.store(false, std::memory_order_relaxed);
    g_readback_noted.store(false, std::memory_order_relaxed);
    for (int i = 0; i < HOST_READBACK_COUNT; ++i)
        g_readback[i].store(0, std::memory_order_relaxed);
    g_upload_count.store(0, std::memory_order_relaxed);
    g_upload_bytes.store(0, std::memory_order_relaxed);
}

// Format the gameplay metrics that were actually instrumented during this run.
// Return no line if capacity is insufficient; a truncated line could misreport measurements.
extern "C" size_t host_stats_gameplay_line(char *out, size_t cap) {
    if (!out || !cap)
        return 0;
    // Only what something has actually noted. A measure nothing instruments is
    // absent from the line rather than zero in it - see g_phase_noted above for
    // why the difference decides whether the first task to instrument it
    // breaches the baseline or extends it.
    char buf[768];
    size_t at = 0;
    int n = snprintf(buf, sizeof buf, "phases:");
    if (n < 0)
        return 0;
    at = (size_t)n;

    struct {
        HostPhase phase;
        const char *name;
    } kPhases[] = {
        {HOST_PHASE_GUEST, "guest"},
        {HOST_PHASE_SHIM, "shim"},
        {HOST_PHASE_COMPOSITE, "composite"},
        {HOST_PHASE_WAIT, "wait"},
    };
    for (auto &p : kPhases) {
        if (!g_phase_noted[p.phase].load(std::memory_order_relaxed))
            continue;
        n = snprintf(buf + at, sizeof buf - at, " %s=%.1f", p.name, phase_ms(p.phase));
        if (n < 0 || at + (size_t)n >= sizeof buf)
            return 0;
        at += (size_t)n;
    }
    if (g_upload_noted.load(std::memory_order_relaxed)) {
        n = snprintf(buf + at, sizeof buf - at, " upload=%llu/%llu",
                     (unsigned long long)g_upload_count.load(std::memory_order_relaxed),
                     (unsigned long long)g_upload_bytes.load(std::memory_order_relaxed));
        if (n < 0 || at + (size_t)n >= sizeof buf)
            return 0;
        at += (size_t)n;
    }
    if (g_readback_noted.load(std::memory_order_relaxed)) {
        n = snprintf(
            buf + at, sizeof buf - at,
            " readback=%llu[lock=%llu getdc=%llu src=%llu dstkey=%llu "
            "dup=%llu texload=%llu flip=%llu]",
            (unsigned long long)readbacks_total(),
            (unsigned long long)g_readback[HOST_READBACK_LOCK].load(std::memory_order_relaxed),
            (unsigned long long)g_readback[HOST_READBACK_GETDC].load(std::memory_order_relaxed),
            (unsigned long long)g_readback[HOST_READBACK_BLT_SOURCE].load(
                std::memory_order_relaxed),
            (unsigned long long)g_readback[HOST_READBACK_DSTKEY].load(std::memory_order_relaxed),
            (unsigned long long)g_readback[HOST_READBACK_DUPLICATE].load(std::memory_order_relaxed),
            (unsigned long long)g_readback[HOST_READBACK_TEXTURE_LOAD].load(
                std::memory_order_relaxed),
            (unsigned long long)g_readback[HOST_READBACK_FLIP].load(std::memory_order_relaxed));
        if (n < 0 || at + (size_t)n >= sizeof buf)
            return 0;
        at += (size_t)n;
    }
    double continuous = 0, throughput = 0;
    host_metric_continuous(&continuous, nullptr);
    host_metric_throughput(&throughput, nullptr);
    n = snprintf(
        buf + at, sizeof buf - at,
        " unique=%llu repeats=%llu drops=%llu continuous=%.0f/s throughput=%.0f/s "
        "scene_reused=%llu waits=%llu faults=%llu",
        (unsigned long long)host_present_unique_completed(),
        (unsigned long long)host_present_repeats(), (unsigned long long)host_present_drops(),
        continuous, throughput, (unsigned long long)host_present_scene_reused(),
        (unsigned long long)host_present_waits(), (unsigned long long)host_present_faults());
    if (n < 0 || at + (size_t)n >= sizeof buf)
        return 0;
    at += (size_t)n;
    // Nothing rather than half a line: a truncated stats line parses as
    // different numbers, which is worse than a line the reader knows is absent.
    if (at >= cap)
        return 0;
    memcpy(out, buf, at + 1);
    return at;
}

extern "C" size_t host_stats_access_line(char *out, size_t cap) {
    if (!out || !cap)
        return 0;
    HostAccessCounts a;
    memset(&a, 0, sizeof a);
    host_access_counts(&a);
    char buf[512];
    int n = snprintf(buf, sizeof buf,
                     "access: lock_read=%u lock_write=%u getdc=%u blt_source=%u "
                     "dstkey_read=%u duplicate=%u texture_load=%u flip=%u clean_reads=%u",
                     a.lock_read, a.lock_write, a.getdc, a.blt_source, a.dstkey_read, a.duplicate,
                     a.texture_load, a.flip, a.clean_reads);
    if (n < 0 || (size_t)n >= cap)
        return 0;
    memcpy(out, buf, (size_t)n + 1);
    return (size_t)n;
}

// ---------------------------------------------------------------------------

int host_probe_pixel(const uint8_t *rgb, int w, int h, int x, int y, int r, int g, int b, int tol,
                     int *found_r, int *found_g, int *found_b, int *worst) {
    if (!rgb || w <= 0 || h <= 0)
        return HOST_PROBE_NO_FRAME;
    if (x < 0 || y < 0 || x >= w || y >= h)
        return HOST_PROBE_OUTSIDE;
    const size_t at = ((size_t)y * (size_t)w + (size_t)x) * 3;
    const int fr = rgb[at], fg = rgb[at + 1], fb = rgb[at + 2];
    const int dr = fr - r, dg = fg - g, db = fb - b;
    int off = dr < 0 ? -dr : dr;
    const int offg = dg < 0 ? -dg : dg;
    const int offb = db < 0 ? -db : db;
    if (offg > off)
        off = offg;
    if (offb > off)
        off = offb;
    if (found_r)
        *found_r = fr;
    if (found_g)
        *found_g = fg;
    if (found_b)
        *found_b = fb;
    if (worst)
        *worst = off;
    return off <= tol ? HOST_PROBE_MATCH : HOST_PROBE_MISMATCH;
}

int host_dumpat_should_fire(int armed, int is_gameplay, double now, double threshold,
                            int at_least) {
    if (!armed || !is_gameplay)
        return 0;
    return at_least ? (now >= threshold) : (now > threshold);
}
