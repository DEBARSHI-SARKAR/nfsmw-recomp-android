#include "../runtime/display_seam.h"
#include "../platform/os.h"
#include <atomic>
#include <cstring>
// present.mm - host_present for the windowed host.
//
// There is one thing on the screen and it is the DirectDraw surface. Software
// drawing writes into it directly; Direct3D drawing gets there through
// d3d_render.mm, which mirrors the render-target surface on the GPU and writes
// its result back into the surface's own memory before anything reads it -
// which is where a real HAL device put it too. By the time a present happens,
// the surface holds both, in the order the guest produced them.
//
// This compatibility input expands the surface to RGBA. present_thread.mm
// owns sealed targets, composition, drawables and retirement.
//
// Palette expansion goes through host/indexed_frame.cpp, which
// already had exactly this loop and is used unchanged.
#include "present.h"
#include "page_overlay.h"
#include "boot.h"
#include "d3d_render.h"
#include "../dx/host_api.h"
#include "indexed_frame.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <time.h>

#include <algorithm>
#include <cmath>
#include <memory>
#include <vector>

// ---------------------------------------------------------------------------

namespace {

int g_mode_w = 0, g_mode_h = 0, g_mode_bpp = 0;
void (*g_mode_cb)(int, int, int) = nullptr;
uint32_t g_present_count = 0;

double now_seconds() {
    return (double)os_monotonic_ns() * 1e-9;
}

// Everything below is written on the guest thread and read by the watchdog on
// its own, so every update is taken under the report lock. It is held for the
// bookkeeping only.
struct ReportLock {
    ReportLock() {
        boot_report_lock();
    }
    ~ReportLock() {
        boot_report_unlock();
    }
};

std::vector<HostPresentRate> &rates() {
    static std::vector<HostPresentRate> r;
    return r;
}
int g_current_rate = -1;
double g_mode_since = 0.0;

// Callers hold the report lock.
void close_current_mode_locked() {
    if (g_current_rate < 0)
        return;
    rates()[g_current_rate].seconds += now_seconds() - g_mode_since;
    g_current_rate = -1;
}

void open_mode_locked(int w, int h, int bpp) {
    close_current_mode_locked();
    for (size_t i = 0; i < rates().size(); ++i) {
        if (rates()[i].w == w && rates()[i].h == h && rates()[i].bpp == bpp) {
            g_current_rate = (int)i;
            g_mode_since = now_seconds();
            // Leaving a mode and coming back is not one continuous run of
            // frames, so the gap across the absence is not active time.
            rates()[i].frames.last = 0.0;
            rates()[i].gameplay.last = 0.0;
            return;
        }
    }
    HostPresentRate r;
    memset(&r, 0, sizeof r);
    r.w = w;
    r.h = h;
    r.bpp = bpp;
    host_rate_meter_reset(&r.frames);
    host_rate_meter_reset(&r.gameplay);
    rates().push_back(r);
    g_current_rate = (int)rates().size() - 1;
    g_mode_since = now_seconds();
}

// The frame the guest handed over, copied out of guest memory. A copy is not
// optional: the pointer is only valid for the duration of the callback, and
// the callback can arrive on a cooperative guest thread that is not the one
// allowed to talk to AppKit.
struct Staged {
    std::vector<uint8_t> rgba;
};
Staged g_staged;

} // namespace

extern "C" void host_present_mode(int *w, int *h, int *bpp) {
    if (w)
        *w = g_mode_w;
    if (h)
        *h = g_mode_h;
    if (bpp)
        *bpp = g_mode_bpp;
}
extern "C" void host_present_on_mode_change(void (*fn)(int, int, int)) {
    g_mode_cb = fn;
}
extern "C" uint32_t host_present_count(void) {
    return g_present_count;
}

// Read from the report, which holds the lock around the whole summary.
extern "C" int host_present_rate_count(void) {
    return (int)rates().size();
}
extern "C" void host_present_rate(int index, HostPresentRate *out) {
    if (!out || index < 0 || index >= (int)rates().size())
        return;
    *out = rates()[index];
    // The mode still running has not had its interval closed yet.
    if (index == g_current_rate)
        out->seconds += now_seconds() - g_mode_since;
}

// ---------------------------------------------------------------------------
// The shim callbacks.
// ---------------------------------------------------------------------------
extern "C" void host_set_display_mode(int w, int h, int bpp) {
    {
        ReportLock held;
        g_mode_w = w;
        g_mode_h = h;
        g_mode_bpp = bpp;
        open_mode_locked(w, h, bpp);
    }
    printf("[host] display mode %dx%d %dbpp\n", w, h, bpp);
    fflush(stdout);
    if (g_mode_cb)
        g_mode_cb(w, h, bpp);
}

// Receive a guest present and stage an owned pixel copy when the active path needs one.
// Frame sealing separately publishes the complete immutable scene/UI work to the presenter.
extern "C" void host_present(const void *pixels, int w, int h, int bpp, const uint32_t *palette,
                             int pitch) {
    host_d3d_note_presented();
    {
        ReportLock held;
        ++g_present_count;
        if (g_current_rate >= 0)
            ++rates()[g_current_rate].presents;
    }

    // The page's input is registered on the first present of any kind; a
    // Direct3D 9 game presents without guest pixels and returns just below.
    host_page_overlay(nullptr, 0, 0, 0, 0, nullptr);
    if (!pixels || w <= 0 || h <= 0 || (bpp != 8 && bpp != 16 && bpp != 32))
        return;
    // The page goes on a copy this host owns, never on the guest's surface:
    // the staging buffer below is RGBA and the page draws in the guest's own
    // format, so the copy has to happen before the expansion, not after it.
    // Classic uses the chosen guest mode and a whole-frame aspect fit in the
    // presenter. The settings page is composed separately in host UI space;
    // baking it into this guest-sized copy would scale it a second time.
    const bool stage = host_present_needs_legacy_pixels() != 0;
    const uint32_t every = host_dump_every();
    const bool dump = every && (g_present_count % every) == 0;
    // The layered compositor never consumes this compatibility copy. Keep
    // explicit guest-surface dumps, while avoiding expansion/upload per frame.
    if (!stage && !dump)
        return;
    const uint8_t *frame = (const uint8_t *)pixels;
    g_staged.rgba.resize((size_t)w * (size_t)h * 4);
    if (bpp == 8)
        host_present_expand_indexed(frame, w, h, pitch, palette, g_staged.rgba.data());
    else if (bpp == 32)
        host_present_expand_xrgb8888(frame, w, h, pitch, g_staged.rgba.data());
    else
        host_present_expand_rgb565(frame, w, h, pitch, g_staged.rgba.data());

    // What the window is about to show, straight out of the surface, before
    // any scaling or gamma the drawable applies.
    if (dump) {
        std::vector<uint8_t> rgb((size_t)w * (size_t)h * 3);
        for (size_t i = 0, n = (size_t)w * (size_t)h; i < n; ++i) {
            rgb[i * 3 + 0] = g_staged.rgba[i * 4 + 0];
            rgb[i * 3 + 1] = g_staged.rgba[i * 4 + 1];
            rgb[i * 3 + 2] = g_staged.rgba[i * 4 + 2];
        }
        char path[1024];
        snprintf(path, sizeof path, "%s/present_%05u.ppm", host_dump_dir(), g_present_count);
        host_write_ppm(path, rgb.data(), w, h);
    }

    // Copy into this frame's private target. Only the shim's seal callback
    // makes it eligible for the worker; a present callback alone is no seal.
    if (stage)
        host_present_stage_rgba(g_staged.rgba.data(), w, h);
}

// A settings change only publishes a request. AppKit drains it on the main
// thread; no queue dispatch, GPU wait or presenter mutex is involved.
namespace {
std::atomic<int> pending_window{-1};
}
extern "C" void host_display_request_window(int mode) {
    if (mode >= 0 && mode <= 2)
        pending_window.store(mode);
}
extern "C" int host_display_take_window() {
    return pending_window.exchange(-1);
}
extern "C" __attribute__((weak)) int ddraw_add_mode(int, int, int) {
    return 0;
}
extern "C" int host_display_offer_mode(int w, int h, int bpp) {
    if (w <= 0 || h <= 0 || (bpp != 8 && bpp != 16))
        return 0;
    // The front end unconditionally requests BOTH depths. Never remove them.
    // Selecting Classic must also leave the higher modes in the menu.
    return ddraw_add_mode(640, 480, 8) && ddraw_add_mode(640, 480, 16) && ddraw_add_mode(w, h, bpp);
}

// VCL-only frames have no DirectDraw recorder to seal them. Stage an owned
// RGBA copy and publish it through the same immutable presenter mailbox.
bool host_gpu2d_stage(uint32_t id, int w, int h);
// A window frame drawn on the GPU (host/gpu2d.cpp): the render target is copied
// into the frame on the device, with no pixels on the CPU at all.
extern "C" void host_display_present_gpu2d(uint32_t id, int w, int h) {
    if (w <= 0 || h <= 0)
        return;
    if (g_mode_w != w || g_mode_h != h || g_mode_bpp != 32)
        host_set_display_mode(w, h, 32);
    host_present_first_write();
    if (!host_gpu2d_stage(id, w, h))
        return;
    {
        ReportLock held;
        ++g_present_count;
    }
    host_page_overlay(nullptr, w, h, 32, w * 4, nullptr);
    host_present_seal_window();
}
extern "C" void host_display_present_window(const uint32_t *argb, int w, int h) {
    if (!argb || w <= 0 || h <= 0)
        return;
    if (g_mode_w != w || g_mode_h != h || g_mode_bpp != 32)
        host_set_display_mode(w, h, 32);
    host_present_first_write();
    const size_t n = size_t(w) * h;
    std::vector<uint8_t> rgba(n * 4);
    // Word to word through plain pointers, which the compiler vectorizes; the
    // byte-indexed form it replaces cost a 1080p frame several milliseconds.
    const uint32_t *src = argb;
    uint8_t *dst = rgba.data();
    for (size_t i = 0; i < n; ++i) {
        const uint32_t v = src[i];
        const uint32_t out = 0xff000000u | (v & 0xffu) << 16 | (v & 0xff00u) | (v >> 16 & 0xffu);
        memcpy(dst + 4 * i, &out, 4);
    }
    {
        ReportLock held;
        ++g_present_count;
    }
    // The settings page's input is registered on the first frame a host draws;
    // a program that only ever presents windows (a D3D11 renderer, the VCL)
    // reaches no other present, and F10 would open nothing.
    host_page_overlay(nullptr, w, h, 32, w * 4, nullptr);
    host_present_stage_rgba(rgba.data(), w, h);
    host_present_seal_window();
}
