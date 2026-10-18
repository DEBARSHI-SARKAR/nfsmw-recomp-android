#include "../runtime/gdi32_internal.h"
#include "../runtime/display_seam.h"
#include "passes.h"
#include "game_config.h"
// ddraw.cpp - DirectDraw: the object, display modes, surfaces, palettes and
// clippers.
//
// Surface pixels are guest memory allocated from the runtime heap, so the
// guest's own writes through a Lock pointer land exactly where a real driver
// would put them and Task 4's memory parity can compare them.
//
// Interface layouts are the DirectX 6 SDK ones. Slot order is the entire
// contract here, so each vtable below is written out in full even where a slot
// is a stub: an interface that stops early would make the guest call the wrong
// method, not merely a missing one.
#include "com.h"
#include "dx.h"
#include "host_api.h"
#include "ddraw.h"
#include "../runtime/memory.h"
#include "../runtime/imports.h"
#include "../runtime/win32.h"

#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <array>
#include <iterator>
#include <deque>
#include <map>
#include <vector>
#include <mutex>
#include "../platform/os.h"

// ---------------------------------------------------------------------------
// IIDs
// ---------------------------------------------------------------------------
#define IID_BYTES(a, b, c, d0, d1, d2, d3, d4, d5, d6, d7)                                         \
    {(uint8_t)((a) & 0xff),                                                                        \
     (uint8_t)(((a) >> 8) & 0xff),                                                                 \
     (uint8_t)(((a) >> 16) & 0xff),                                                                \
     (uint8_t)(((a) >> 24) & 0xff),                                                                \
     (uint8_t)((b) & 0xff),                                                                        \
     (uint8_t)(((b) >> 8) & 0xff),                                                                 \
     (uint8_t)((c) & 0xff),                                                                        \
     (uint8_t)(((c) >> 8) & 0xff),                                                                 \
     d0,                                                                                           \
     d1,                                                                                           \
     d2,                                                                                           \
     d3,                                                                                           \
     d4,                                                                                           \
     d5,                                                                                           \
     d6,                                                                                           \
     d7}

static const uint8_t IID_IDirectDraw_[16] =
    IID_BYTES(0x6C14DB80, 0xA733, 0x11CE, 0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60);
static const uint8_t IID_IDirectDraw2_[16] =
    IID_BYTES(0xB3A6F3E0, 0x2B43, 0x11CF, 0xA2, 0xDE, 0x00, 0xAA, 0x00, 0xB9, 0x33, 0x56);
static const uint8_t IID_IDirectDraw4_[16] =
    IID_BYTES(0x9C59509A, 0x39BD, 0x11D1, 0x8C, 0x4A, 0x00, 0xC0, 0x4F, 0xD9, 0x30, 0xC5);
static const uint8_t IID_IDirectDraw7_[16] =
    IID_BYTES(0x15E65EC0, 0x3B9C, 0x11D2, 0xB9, 0x2F, 0x00, 0x60, 0x97, 0x97, 0xEA, 0x5B);
static const uint8_t IID_IDirectDrawSurface_[16] =
    IID_BYTES(0x6C14DB81, 0xA733, 0x11CE, 0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60);
static const uint8_t IID_IDirectDrawSurface2_[16] =
    IID_BYTES(0x57805885, 0x6EEC, 0x11CF, 0x94, 0x41, 0xA8, 0x23, 0x03, 0xC1, 0x0E, 0x27);
static const uint8_t IID_IDirectDrawSurface3_[16] =
    IID_BYTES(0xDA044E00, 0x69B2, 0x11D0, 0xA1, 0xD5, 0x00, 0xAA, 0x00, 0xB8, 0xDF, 0xBB);
static const uint8_t IID_IDirectDrawSurface4_[16] =
    IID_BYTES(0x0B2B8630, 0xAD35, 0x11D0, 0x8E, 0xA6, 0x00, 0x60, 0x97, 0x97, 0xEA, 0x5B);
static const uint8_t IID_IDirectDrawPalette_[16] =
    IID_BYTES(0x6C14DB84, 0xA733, 0x11CE, 0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60);
static const uint8_t IID_IDirectDrawClipper_[16] =
    IID_BYTES(0x6C14DB85, 0xA733, 0x11CE, 0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60);
static const uint8_t IID_IDirectDrawColorControl_[16] =
    IID_BYTES(0x4B9F0EE0, 0x0D7E, 0x11D0, 0x9B, 0x06, 0x00, 0xA0, 0xC9, 0x03, 0xA3, 0xB8);

namespace {
void (*present_first_write)() = nullptr;
void (*present_seal)() = nullptr;
std::mutex present_release_mutex;
std::vector<HostFrameHandle> present_releases;
void presenter_write() {
    ddraw_drain_present_releases();
    if (present_first_write)
        present_first_write();
    // The worker can complete a frame during the first-write callback.
    ddraw_drain_present_releases();
}
} // namespace
extern "C" void ddraw_set_present_callbacks(void (*write)(), void (*seal)()) {
    present_first_write = write;
    present_seal = seal;
}
extern "C" void ddraw_present_release(HostFrameHandle f) {
    std::lock_guard lock(present_release_mutex);
    present_releases.push_back(f);
}
extern "C" void ddraw_drain_present_releases() {
    std::vector<HostFrameHandle> retired;
    {
        std::lock_guard lock(present_release_mutex);
        retired.swap(present_releases);
    }
    for (auto f : retired)
        host_frame_release(f);
}

// The recorder's revision helpers, defined further down at file scope. The
// write paths above the recorder call them, so they are declared here rather
// than inside the anonymous namespace, where they would become a second,
// internal-linkage function of the same name.
uint32_t ddraw_surface_revision(uint32_t id);
void ddraw_before_write(ComObj *s);
void ddraw_after_write(ComObj *s);
uint32_t ddraw_surface_generation(uint32_t id);
void ddraw_storage_changed(ComObj *s);
void ddraw_preserve_before_storage_change(ComObj *s);
void ddraw_note_mode_impl(uint32_t w, uint32_t h, uint32_t bpp);
void ddraw_reset_access_counts(void);
void ddraw_note_cpu_write_impl(ComObj *s);
// Palette versions and the Lock write diff. Declared here for the same reason
// as the revision helpers: the surface and palette methods below call them.
uint32_t palette_now(void);
uint32_t palette_version_for(const ComObj *dst);
void note_palette_write(void);
void lock_shadow_take(ComObj *s, const int32_t r[4], uint32_t flags, uint32_t lock_ptr,
                      bool guest_pointer = false);
bool lock_shadow_record(ComObj *s, const int32_t *unlock_rect, uint32_t unlock_ptr);
void baseline_note_revision(const ComObj *s, uint32_t was_current_at);
void baseline_resync(const ComObj *s);
void baseline_absorb(const ComObj *s, const int32_t r[4], uint32_t was_current_at);
void lock_shadow_forget(const ComObj *s);
bool dirty_close(uint32_t base, uint32_t len, uint32_t *lo, uint32_t *hi);
// The primary the shim presents. Set when one is created and again whenever
// one is presented, because "the display" is a live object and not an id from
// whenever the recorder was last reset. Declared here because the present path
// above the recorder assigns it.
uint32_t g_display_surface = 0;
// Whether anything has reached the screen since the last seal. The pump fires
// on every PeekMessageA, and this game pumps in more than one place: the
// per-frame one is at the end of update_screen (004b25d0), after the cursor
// draw, but 0052a710 drains up to 2000 messages and is called from input
// handling. This is the rate limit - at most one seal per thing presented -
// so a drain that follows no presentation and no draw ends no frame.
bool g_present_since_seal = false;
// The same, for a gameplay frame that renders geometry and presents nothing:
// it has a picture too, and the pump is what ends it when there is no Flip.
bool g_drew_since_seal = false;

namespace {

// The display modes this shim offers, and the only ones SetDisplayMode
// accepts. ONE table, read by both, because a mode the game was offered and
// then refused is a contradiction that costs a run to find.
//
// RECOMP_DDRAW_MODES replaces it with a comma-separated list of WxHxB, as in
// "640x480x8,1280x960x16". Unset, or set to nothing, keeps the modes below.
// The original modes retain both depths; higher native modes are RGB565.
//
// A malformed list is refused WHOLE rather than in part. A list honoured up to
// its first mistake offers a set nobody wrote down, and the run that followed
// would quietly be about that set instead.
//
// Eight and sixteen bits only, because those are the two pixel formats the
// enumeration below can describe. Offering another depth would be a lie the
// guest would act on: it would select the mode and then be handed a surface
// laid out some other way.
//
// A WARNING ABOUT THE VARIABLE, PAID FOR BY A CRASH
//
// The variable restricts the list from the moment the process starts, and this
// game does not ask what is available before its first SetDisplayMode: it
// boots straight into 640x480x8. RECOMP_DDRAW_MODES="800x600x16" therefore has
// that first call refused, and the guest, which does not check, walks into a
// SIGBUS at EIP 004a45a3. Measured, not guessed.
//
// So the variable is for a list that still contains the boot mode, and a
// script that wants to force one single mode uses ddraw_set_modes() at
// runtime, after the game is up. The check below says so rather than leaving
// the next person to find the crash.
struct Mode {
    uint32_t w, h, bpp;
};
const Mode kBuiltInModes[] = {
    {640, 480, 8},   {640, 480, 16},  {800, 600, 8},    {800, 600, 16},   {1024, 768, 8},
    {1024, 768, 16}, {1280, 720, 16}, {1920, 1080, 16}, {2560, 1440, 16}, {3840, 2160, 16},
};

std::vector<Mode> &mode_table() {
    static std::vector<Mode> v;
    return v;
}

// One WxHxB, with the whole token consumed. `p` is left on the character that
// stopped it, which the caller checks.
bool parse_one_mode(const char *&p, Mode *out) {
    auto number = [&](uint32_t *v) {
        if (*p < '0' || *p > '9')
            return false;
        uint64_t n = 0;
        while (*p >= '0' && *p <= '9') {
            n = n * 10 + (uint64_t)(*p - '0');
            if (n > 65535)
                return false;
            ++p;
        }
        *v = (uint32_t)n;
        return true;
    };
    auto ex = [&]() {
        if (*p != 'x' && *p != 'X')
            return false;
        ++p;
        return true;
    };
    Mode m{};
    if (!number(&m.w) || !ex() || !number(&m.h) || !ex() || !number(&m.bpp))
        return false;
    if (!m.w || !m.h)
        return false;
    if (m.bpp != 8 && m.bpp != 16)
        return false;
    *out = m;
    return true;
}

bool parse_modes(const char *spec, std::vector<Mode> *out) {
    const char *p = spec;
    for (;;) {
        while (*p == ' ' || *p == '\t')
            ++p;
        Mode m{};
        if (!parse_one_mode(p, &m))
            return false;
        out->push_back(m);
        while (*p == ' ' || *p == '\t')
            ++p;
        if (!*p)
            return true;
        if (*p != ',')
            return false;
        ++p;
    }
}

void use_built_in_modes(std::vector<Mode> &v) {
    v.assign(kBuiltInModes, kBuiltInModes + (sizeof kBuiltInModes / sizeof kBuiltInModes[0]));
}

// The modes the front end runs in without asking what is available. BOTH of
// them: it selects 640x480x8 first and 640x480x16 a moment later, and a list
// missing either has that call refused. Measured twice - a list with only the
// 8-bit one died on "SetDisplayMode(640, 480, 16) is not one of the offered
// modes" followed by a jump through a null target, because the game does not
// check the return.
bool has_mode(const std::vector<Mode> &v, uint32_t w, uint32_t h, uint32_t bpp) {
    for (const Mode &m : v)
        if (m.w == w && m.h == h && m.bpp == bpp)
            return true;
    return false;
}

const std::vector<Mode> &modes() {
    std::vector<Mode> &v = mode_table();
    if (!v.empty())
        return v;
    const char *spec = recomp_env("DDRAW_MODES");
    if (spec && *spec) {
        std::vector<Mode> parsed;
        if (parse_modes(spec, &parsed) && !parsed.empty()) {
            v.swap(parsed);
            LOGW("ddraw: RECOMP_DDRAW_MODES offers %zu mode%s instead of the "
                 "built-in list; SetDisplayMode accepts the same set",
                 v.size(), v.size() == 1 ? "" : "s");
            const bool has8 = has_mode(v, 640, 480, 8);
            const bool has16 = has_mode(v, 640, 480, 16);
            if (!has8 || !has16)
                LOGW("ddraw: and it is missing %s, which the front end selects "
                     "without asking what is available and without checking "
                     "the refusal; the guest will die on it. Offer both "
                     "640x480x8 and 640x480x16, or use ddraw_set_modes() "
                     "after boot.",
                     !has8 && !has16 ? "640x480x8 and 640x480x16"
                                     : (!has8 ? "640x480x8" : "640x480x16"));
            return v;
        }
        LOGW("ddraw: RECOMP_DDRAW_MODES=\"%s\" is not a comma-separated list of "
             "WxHxB with a depth of 8 or 16; keeping the built-in modes",
             spec);
    }
    use_built_in_modes(v);
    return v;
}

// Scratch guest memory for the structures handed to guest enumeration
// callbacks. Allocated on first use and reused; a callback may not keep it.
uint32_t g_scratch = 0;
uint32_t g_scratch_size = 0;
uint32_t scratch(uint32_t n) {
    if (g_scratch_size < n) {
        if (g_scratch)
            heap_free(g_scratch);
        g_scratch = heap_alloc(n, true, 16);
        g_scratch_size = g_scratch ? n : 0;
    }
    if (g_scratch)
        memset(gm_ptr(g_scratch), 0, g_scratch_size);
    return g_scratch;
}

// The one DirectDraw object, remembered so a second DirectDrawCreate hands
// back the same device rather than a second display.
uint32_t g_primary_dd = 0;
// Pseudo HDCs handed out by GetDC. Outside every mapped guest region, as the
// runtime's other handle spaces are.
// DC identifiers come from GDI so native and DirectDraw clients share one allocator.

uint32_t bytes_per_pixel(uint32_t bpp) {
    return bpp <= 8 ? 1u : (bpp <= 16 ? 2u : 4u);
}

// The recorder, defined below with the rest of the frame machinery. Declared
// here because every write path above it has to call in.
struct BlitKeys;
uint8_t *record_blit(ComObj *dst, const int32_t d[4], const ComObj *src, const int32_t sr[4],
                     const BlitKeys &keys, bool fill, uint32_t fill_value);
void seal_frame(const char *why);
void note_lock_access(uint32_t flags);
// The counters, reached through a function because they are defined with the
// tracer further down and every reader path above it has to increment them.
HostAccessCounts &g_access_ref();

uint32_t pitch_for(uint32_t width, uint32_t bpp) {
    uint32_t row = width * bytes_per_pixel(bpp);
    return (row + 15u) & ~15u; // real drivers align; 16 matches every mode here
}

// ---------------------------------------------------------------------------
// DDSURFACEDESC / DDSURFACEDESC2
// ---------------------------------------------------------------------------
// Which record a caller passed. dwSize decides, exactly as DirectDraw does,
// so an IDirectDrawSurface4 method still honours a v1 record if that is what
// the guest supplied. `v2_default` covers a zero or nonsense dwSize.
bool desc_is_v2(uint32_t addr, bool v2_default) {
    if (!addr || !gm_valid(addr, 4))
        return v2_default;
    uint32_t sz = rd32(addr + DDSD_OFF_dwSize);
    if (sz == DDSD2_SIZE)
        return true;
    if (sz == DDSD_SIZE)
        return false;
    return v2_default;
}

uint32_t desc_caps_off() {
    return DDSD_OFF_ddsCaps;
}

void write_pixel_format(uint32_t addr, const ComObj *s) {
    gm_zero(addr, DDPF_SIZE);
    wr32(addr + DDPF_OFF_dwSize, DDPF_SIZE);
    if (s->bpp <= 8) {
        wr32(addr + DDPF_OFF_dwFlags, DDPF_RGB | DDPF_PALETTEINDEXED8);
        wr32(addr + DDPF_OFF_dwRGBBitCount, 8);
    } else {
        wr32(addr + DDPF_OFF_dwFlags, DDPF_RGB);
        wr32(addr + DDPF_OFF_dwRGBBitCount, s->bpp);
        wr32(addr + DDPF_OFF_dwRBitMask, s->rmask);
        wr32(addr + DDPF_OFF_dwGBitMask, s->gmask);
        wr32(addr + DDPF_OFF_dwBBitMask, s->bmask);
        wr32(addr + DDPF_OFF_dwRGBAlphaBitMask, s->amask);
    }
}

// Fills a surface description. `lpsurface` non-zero adds DDSD_LPSURFACE and
// the pointer, which is what Lock does and GetSurfaceDesc does not.
void fill_desc(uint32_t addr, const ComObj *s, bool v2, uint32_t lpsurface) {
    if (!addr)
        return;
    uint32_t size = v2 ? DDSD2_SIZE : DDSD_SIZE;
    if (!gm_valid(addr, size))
        return;
    gm_zero(addr, size);
    wr32(addr + DDSD_OFF_dwSize, size);
    uint32_t flags = DDSD_CAPS | DDSD_HEIGHT | DDSD_WIDTH | DDSD_PITCH | DDSD_PIXELFORMAT;
    wr32(addr + DDSD_OFF_dwHeight, s->height);
    wr32(addr + DDSD_OFF_dwWidth, s->width);
    wr32(addr + DDSD_OFF_lPitch, s->pitch);
    write_pixel_format(addr + DDSD_OFF_ddpfPixelFormat, s);
    if (lpsurface) {
        flags |= DDSD_LPSURFACE;
        wr32(addr + DDSD_OFF_lpSurface, lpsurface);
    }
    if (s->has_ckey_src) {
        flags |= DDSD_CKSRCBLT;
        wr32(addr + DDSD_OFF_ckSrcBlt + DDCK_OFF_lo, s->ckey_src_lo);
        wr32(addr + DDSD_OFF_ckSrcBlt + DDCK_OFF_hi, s->ckey_src_hi);
    }
    if (s->has_ckey_dst) {
        flags |= DDSD_CKDESTBLT;
        wr32(addr + DDSD_OFF_ckDestBlt + DDCK_OFF_lo, s->ckey_dst_lo);
        wr32(addr + DDSD_OFF_ckDestBlt + DDCK_OFF_hi, s->ckey_dst_hi);
    }
    wr32(addr + DDSD_OFF_dwFlags, flags);
    wr32(addr + desc_caps_off(), s->caps); // DDSCAPS2's upper dwords stay zero
}

// ---------------------------------------------------------------------------
// Surfaces
// ---------------------------------------------------------------------------
void surface_destroy(ComObj *s) {
    if (s->dc_handle)
        gdi_unbind_surface_dc(s->dc_handle);
    // A surface that is going away takes its pixels with it, and the host may
    // still be holding a scene for it. Ask for that scene back while the
    // memory is still there to receive it, and stop the host pointing at it.
    d3d_flush_surface(s, "surface destroyed");
    host_d3d_forget_generation(s->id, ddraw_surface_generation(s->id));
    // Last chance: a frame may still hold this surface's contents, and the
    // storage is about to be handed back to the heap.
    ddraw_preserve_before_storage_change(s);
    // The write shadow goes with the pixels it was a copy of. Surface ids are
    // handed out fresh, so a leftover shadow could not be mistaken for a new
    // surface's - but it would hold its bytes for the life of the process.
    lock_shadow_forget(s);
    d3d_forget_surface(s);
    if (s->texture_handle)
        host_d3d_texture_destroyed(s->texture_handle);
    // Only free memory this surface allocated. SetSurfaceDesc can point a
    // surface at a buffer the guest owns, and freeing that would hand the
    // guest's own allocation back to the heap underneath it.
    if (s->pixels && s->owns_pixels)
        heap_free(s->pixels);
    s->pixels = 0;
    s->owns_pixels = false;
    // Implicit flip-chain children die with their root, even if the game
    // retained a GetAttachedSurface interface (as Populous does). Explicit
    // AddAttachedSurface attachments only lose their parent's reference.
    // See Wine's ddraw_surface_cleanup/ddraw_surface_release_iface.
    if (s->back_obj) {
        ComObj *b = com_get(s->back_obj);
        s->back_obj = 0;
        if (b) {
            b->front_obj = 0;
            if (b->implicit_backbuffer)
                com_destroy(b);
            else
                com_release(b);
        }
    }
    // AddAttachedSurface owns a reference to the depth buffer too. Dropping
    // the target during a resolution change must release it; otherwise every
    // change strands another full-size allocation in the guest's fixed heap.
    if (s->zbuffer_obj) {
        ComObj *z = com_get(s->zbuffer_obj);
        s->zbuffer_obj = 0;
        if (z)
            com_release(z);
    }
    if (s->palette_obj) {
        ComObj *p = com_get(s->palette_obj);
        s->palette_obj = 0;
        if (p)
            com_release(p);
    }
    if (s->clipper_obj) {
        ComObj *cl = com_get(s->clipper_obj);
        s->clipper_obj = 0;
        if (cl)
            com_release(cl);
    }
}

// The largest surface edge this accepts. DirectDraw has no such limit, but a
// guest-supplied dimension has to be bounded somewhere before it is multiplied
// out, and nothing this game creates comes close to 16384.
const uint32_t MAX_SURFACE_EDGE = 16384;

bool surface_alloc_pixels(ComObj *s) {
    if (s->width > MAX_SURFACE_EDGE || s->height > MAX_SURFACE_EDGE) {
        LOGW("ddraw: refusing a %ux%u surface; the edge limit is %u", s->width, s->height,
             MAX_SURFACE_EDGE);
        return false;
    }
    s->pitch = pitch_for(s->width, s->bpp);
    // pitch and height are each bounded well below 2^32, so this product is
    // computed and range-checked in 64 bits before it becomes an allocation.
    uint64_t bytes = gm_image_bytes(s->pitch, s->height);
    if (!bytes) {
        LOGW("ddraw: a %ux%ux%u surface needs more than the guest arena holds", s->width, s->height,
             s->bpp);
        return false;
    }
    s->pixels_bytes = (uint32_t)bytes;
    if (!s->pixels_bytes)
        return true; // a 0x0 surface is legal
    s->pixels = heap_alloc(s->pixels_bytes, true, 16);
    if (!s->pixels) {
        LOGW("ddraw: out of guest memory for a %ux%ux%u surface (%u bytes)", s->width, s->height,
             s->bpp, s->pixels_bytes);
        return false;
    }
    s->owns_pixels = true;
    return true;
}

void set_rgb_masks(ComObj *s) {
    if (s->bpp == 16) {
        s->rmask = 0xf800;
        s->gmask = 0x07e0;
        s->bmask = 0x001f;
        s->amask = 0;
    } else if (s->bpp == 32) {
        s->rmask = 0x00ff0000;
        s->gmask = 0x0000ff00;
        s->bmask = 0x000000ff;
        s->amask = 0xff000000;
    } else {
        s->rmask = s->gmask = s->bmask = s->amask = 0;
    }
}

// The palette that governs an 8-bit surface: its own, else the primary's.
const ComObj *effective_palette(const ComObj *s) {
    if (s->palette_obj) {
        const ComObj *p = com_get(s->palette_obj);
        if (p)
            return p;
    }
    if (s->front_obj) {
        const ComObj *f = com_get(s->front_obj);
        if (f && f->palette_obj) {
            const ComObj *p = com_get(f->palette_obj);
            if (p)
                return p;
        }
    }
    return nullptr;
}

// Reads a guest RECT, defaulting to the whole surface when the pointer is null.
bool read_rect(uint32_t addr, const ComObj *s, int32_t r[4]) {
    if (!addr) {
        r[0] = 0;
        r[1] = 0;
        r[2] = (int32_t)s->width;
        r[3] = (int32_t)s->height;
        return true;
    }
    if (!gm_valid(addr, 16))
        return false;
    for (int i = 0; i < 4; ++i)
        r[i] = (int32_t)rd32(addr + 4u * (uint32_t)i);
    if (r[2] < r[0] || r[3] < r[1])
        return false;
    if (r[0] < 0 || r[1] < 0 || r[2] > (int32_t)s->width || r[3] > (int32_t)s->height)
        return false;
    return true;
}

// A blit rectangle, without the requirement that it lie inside the surface.
// Ordering and readability are still errors; hanging off an edge is not,
// because Blt clips rather than refusing. A null rectangle still means the
// whole surface.
bool read_rect_loose(uint32_t addr, const ComObj *s, int32_t r[4]) {
    if (!addr) {
        r[0] = 0;
        r[1] = 0;
        r[2] = (int32_t)s->width;
        r[3] = (int32_t)s->height;
        return true;
    }
    if (!gm_valid(addr, 16))
        return false;
    for (int i = 0; i < 4; ++i)
        r[i] = (int32_t)rd32(addr + 4u * (uint32_t)i);
    return r[2] >= r[0] && r[3] >= r[1];
}

// Clip a blit to the destination surface, carrying the source rectangle with
// it so a stretch keeps its ratio. DirectDraw clips a blit whose destination
// runs off the surface - a game drawing a tile page or a scrolled buffer at
// an edge does it constantly - and refusing one loses the whole draw. False
// when nothing is left, which is a blit that succeeded and wrote nothing.
bool clip_blit(const ComObj *dst, int32_t d[4], int32_t sr[4], bool have_src) {
    const int32_t w = d[2] - d[0], h = d[3] - d[1];
    if (w <= 0 || h <= 0)
        return false;
    const int32_t sw = have_src ? sr[2] - sr[0] : 0, sh = have_src ? sr[3] - sr[1] : 0;
    const int32_t left = std::max(d[0], 0), top = std::max(d[1], 0);
    const int32_t right = std::min(d[2], (int32_t)dst->width);
    const int32_t bottom = std::min(d[3], (int32_t)dst->height);
    if (right <= left || bottom <= top)
        return false;
    if (have_src) {
        // Each destination edge moved by this much of the source span.
        const int32_t nsl = sr[0] + (int32_t)((int64_t)(left - d[0]) * sw / w);
        const int32_t nst = sr[1] + (int32_t)((int64_t)(top - d[1]) * sh / h);
        const int32_t nsr = sr[2] - (int32_t)((int64_t)(d[2] - right) * sw / w);
        const int32_t nsb = sr[3] - (int32_t)((int64_t)(d[3] - bottom) * sh / h);
        sr[0] = nsl;
        sr[1] = nst;
        sr[2] = nsr;
        sr[3] = nsb;
        if (sr[2] <= sr[0] || sr[3] <= sr[1])
            return false;
    }
    d[0] = left;
    d[1] = top;
    d[2] = right;
    d[3] = bottom;
    return true;
}

uint32_t read_pixel(const ComObj *s, int32_t x, int32_t y) {
    uint32_t a = s->pixels + (uint32_t)y * s->pitch + (uint32_t)x * bytes_per_pixel(s->bpp);
    switch (bytes_per_pixel(s->bpp)) {
    case 1:
        return rd8(a);
    case 2:
        return rd16(a);
    default:
        return rd32(a);
    }
}

void write_pixel(const ComObj *s, int32_t x, int32_t y, uint32_t v) {
    uint32_t a = s->pixels + (uint32_t)y * s->pitch + (uint32_t)x * bytes_per_pixel(s->bpp);
    switch (bytes_per_pixel(s->bpp)) {
    case 1:
        wr8(a, (uint8_t)v);
        break;
    case 2:
        wr16(a, (uint16_t)v);
        break;
    default:
        wr32(a, v);
        break;
    }
}

// The one blit primitive behind Blt and BltFast: nearest-neighbour stretch
// with an optional source colour key. src == null fills with `fill`.
// The colour keys in force for one blit. A source key names the pixels of the
// source that are NOT copied; a destination key names the pixels of the
// destination that MAY be written. Both are inclusive ranges, because
// DDCOLORKEY is a range and a driver that only compared the low value would
// get a keyed sprite wrong wherever the artist used the whole range.
struct BlitKeys {
    bool src = false;
    uint32_t src_lo = 0, src_hi = 0;
    bool dst = false;
    uint32_t dst_lo = 0, dst_hi = 0;
};

// `coverage`, when given, is w*h bytes and is set to 1 for exactly the
// destination pixels this call actually writes. Captured HERE rather than
// predicted beforehand: an overlapping keyed self-blit changes its own source
// as it goes, and a zero-sized source rectangle writes nothing at all, so any
// separate prediction is a different answer from the truth.
void blit(ComObj *dst, const int32_t d[4], const ComObj *src, const int32_t sr[4],
          const BlitKeys &keys, bool fill, uint32_t fill_value, uint8_t *coverage = nullptr) {
    int32_t dw = d[2] - d[0], dh = d[3] - d[1];
    if (dw <= 0 || dh <= 0 || !dst->pixels)
        return;

    if (fill) {
        uint32_t bpp_bytes = bytes_per_pixel(dst->bpp);
        for (int32_t y = 0; y < dh; ++y) {
            uint32_t row =
                dst->pixels + (uint32_t)(d[1] + y) * dst->pitch + (uint32_t)d[0] * bpp_bytes;
            if (bpp_bytes == 1)
                memset(gm_ptr(row), (uint8_t)fill_value, (size_t)dw);
            else
                for (int32_t x = 0; x < dw; ++x)
                    write_pixel(dst, d[0] + x, d[1] + y, fill_value);
            if (coverage)
                memset(coverage + (size_t)y * dw, 1, (size_t)dw);
        }
        return;
    }
    if (!src || !src->pixels)
        return;

    int32_t sw = sr[2] - sr[0], sh = sr[3] - sr[1];
    if (sw <= 0 || sh <= 0)
        return;
    bool same_format = src->bpp == dst->bpp;
    if (!same_format) {
        log_once("ddraw.blt.fmt",
                 "ddraw: Blt between a %u-bit and a %u-bit surface is not converted; "
                 "copying raw pixels",
                 src->bpp, dst->bpp);
    }
    bool stretch = (sw != dw) || (sh != dh);
    uint32_t bpp_bytes = bytes_per_pixel(dst->bpp);
    // A surface blitted onto itself - how a game scrolls a map buffer - can
    // overlap its own source. DirectDraw copies as though through a
    // temporary, so every pixel written is the source as it was before the
    // call. Copied front to back instead, a destination below or right of its
    // source reads back rows and pixels it has just written, and the first
    // band repeats across the rest: a scrolled map turns into vertical
    // strips. The host's replay never saw it - a record reads the source's
    // leased revision - so only a program that reads its own memory back,
    // such as a renderer uploading its back buffer, shows it.
    const bool same_buffer = src->pixels == dst->pixels;
    const bool overlap =
        same_buffer && d[0] < sr[0] + sw && sr[0] < d[2] && d[1] < sr[1] + sh && sr[1] < d[3];

    // The common case: same size, same format, no colour key. One memmove a
    // row, which handles a sideways overlap; a downward one takes the rows
    // bottom up.
    if (!stretch && same_format && !keys.src && !keys.dst) {
        const bool upward = overlap && d[1] > sr[1];
        for (int32_t i = 0; i < dh; ++i) {
            const int32_t y = upward ? dh - 1 - i : i;
            uint32_t drow =
                dst->pixels + (uint32_t)(d[1] + y) * dst->pitch + (uint32_t)d[0] * bpp_bytes;
            uint32_t srow =
                src->pixels + (uint32_t)(sr[1] + y) * src->pitch + (uint32_t)sr[0] * bpp_bytes;
            memmove(gm_ptr(drow), gm_ptr(srow), (size_t)dw * bpp_bytes);
            if (coverage)
                memset(coverage + (size_t)y * dw, 1, (size_t)dw);
        }
        return;
    }
    // Keyed or scaled, pixel by pixel: an overlapping source is read from a
    // copy taken before anything is written.
    std::vector<uint8_t> snapshot;
    if (overlap) {
        snapshot.resize((size_t)sw * (size_t)sh * bpp_bytes);
        for (int32_t y = 0; y < sh; ++y)
            memcpy(snapshot.data() + (size_t)y * (size_t)sw * bpp_bytes,
                   gm_ptr(src->pixels + (uint32_t)(sr[1] + y) * src->pitch +
                          (uint32_t)sr[0] * bpp_bytes),
                   (size_t)sw * bpp_bytes);
    }
    auto source_pixel = [&](int32_t x, int32_t y) -> uint32_t {
        if (!overlap)
            return read_pixel(src, x, y);
        const uint8_t *p =
            snapshot.data() + ((size_t)(y - sr[1]) * (size_t)sw + (size_t)(x - sr[0])) * bpp_bytes;
        uint32_t v = 0;
        memcpy(&v, p, bpp_bytes); // little-endian, as read_pixel reads it
        return v;
    };
    for (int32_t y = 0; y < dh; ++y) {
        int32_t syy = stretch ? sr[1] + (int32_t)((int64_t)y * sh / dh) : sr[1] + y;
        for (int32_t x = 0; x < dw; ++x) {
            int32_t sxx = stretch ? sr[0] + (int32_t)((int64_t)x * sw / dw) : sr[0] + x;
            uint32_t v = source_pixel(sxx, syy);
            if (keys.src && v >= keys.src_lo && v <= keys.src_hi)
                continue;
            if (keys.dst) {
                uint32_t dv = read_pixel(dst, d[0] + x, d[1] + y);
                if (dv < keys.dst_lo || dv > keys.dst_hi)
                    continue;
            }
            write_pixel(dst, d[0] + x, d[1] + y, v);
            if (coverage)
                coverage[(size_t)y * dw + x] = 1;
        }
    }
}

// ---------------------------------------------------------------------------
// Shared argument decoding
// ---------------------------------------------------------------------------
ComObj *this_surface(X86 *c) {
    ComObj *s = com_this_arg(c);
    return (s && s->kind == K_SURFACE) ? s : nullptr;
}
ComObj *this_ddraw(X86 *c) {
    ComObj *d = com_this_arg(c);
    return (d && d->kind == K_DDRAW) ? d : nullptr;
}
// A surface argument that may be a v1/2/3/4 view, or null.
ComObj *surface_arg(X86 *c, int i) {
    uint32_t a = arg(c, i);
    if (!a)
        return nullptr;
    ComObj *s = com_this(a);
    return (s && s->kind == K_SURFACE) ? s : nullptr;
}

// Whether `this` is one of the DDSURFACEDESC2-era interfaces.
bool this_is_v2_iface(X86 *c) {
    ComIface f = com_iface_of(arg(c, 0));
    return f == IF_DDSURFACE4 || f == IF_DIRECTDRAW4;
}

} // namespace

const ComObj *ddraw_effective_palette(const ComObj *s) {
    return s ? effective_palette(s) : nullptr;
}

// ---------------------------------------------------------------------------
// Presentation
// ---------------------------------------------------------------------------
// A surface's pixels have just changed. The screen and the renderer each hold
// a resolved copy, so both have to be told: the primary is presented again and
// a texture is uploaded again.
//
// Every path that writes pixels has to come through here. Unlock did, but a
// blit did not, and the original fills its textures far more by blitting into
// them than by any other means: the Wine trace has 2303 Blt and 3108 BltFast
// against zero IDirect3DTexture2::Load. A texture written only by blit was
// therefore uploaded once, empty, at GetHandle and never again, which draws as
// untextured geometry rather than as anything obviously broken.
void surface_pixels_changed(ComObj *s) {
    if (!s)
        return;
    // The content is now different from whatever any record referred to.
    ddraw_after_write(s);
    if (s->is_primary) {
        // This write already has a record. Do not rediscover it as a retained
        // pointer write when presenting the primary below.
        if (s->retained_pointer)
            baseline_resync(s);
        ddraw_present(s);
    }
    if (s->texture_handle)
        d3d_upload_texture(s);
    else
        s->tex_dirty = true; // no handle yet; GetHandle will send them
}

void ddraw_present(ComObj *s) {
    if (!s || s->kind != K_SURFACE || !s->pixels)
        return;
    // Only the visible surface reaches the screen. A back buffer becomes
    // visible by Flip, which swaps the memory, not by being drawn into.
    if (!s->is_primary)
        return;
    if (g_display_surface != s->id) {
        g_display_surface = s->id;
        // Which surface is on screen decides which palette the screen is in,
        // so the change is a new version even though no palette was written.
        palette_now();
    }
    if (s->retained_pointer) {
        int32_t full[4] = {0, 0, (int32_t)s->width, (int32_t)s->height};
        uint32_t revision = ddraw_surface_revision(s->id);
        ddraw_refresh_retained_writes(s, full);
        // A changed primary was presented by surface_pixels_changed. Avoid
        // submitting it twice when that notification returns here.
        if (ddraw_surface_revision(s->id) != revision)
            return;
    }
    // Whatever the Direct3D device drew belongs in these pixels before they
    // are read: on real hardware the rasterizer wrote here.
    d3d_flush_surface(s, "present");
    const ComObj *pal = s->bpp <= 8 ? effective_palette(s) : nullptr;
    if (s->bpp <= 8 && !pal) {
        log_once("ddraw.nopal", "ddraw: presenting an 8-bit primary with no palette attached; "
                                "the host receives indices and a null palette");
    }
    // A media session on screen owns it, exactly as a video renderer's own
    // window would: presenting the primary here as well would put the game's
    // drawing over most of the movie's frames.
    if (!mf_owns_the_screen())
        host_present(gm_ptr(s->pixels), (int)s->width, (int)s->height, (int)s->bpp,
                     pal ? pal->pal : nullptr, (int)s->pitch);
    // Presenting is NOT sealing. The screen is refreshed by every write to the
    // primary - a blit, an Unlock, a palette change - and a frame that ended
    // at each of those would be three frames where the guest drew one, with
    // the draw and HUD ordering reset in the middle of it. The frame ends
    // where the vocabulary says it ends: a Flip of the primary chain, or the
    // production pump's tick.
}

// The production frame pump's boundary. The guest's message loop reaches this
// through host_pump_timers, and a game that never flips - the menus draw
// straight into the primary - has no other boundary at all. A frame with
// nothing in it seals nothing, so an idle pump does not hand the compositor a
// stream of empty frames.
//
// Rate-limited to one seal per thing presented or drawn, because the pump
// fires on every PeekMessageA rather than once a frame: see the note on
// g_present_since_seal for where this game pumps.
void ddraw_pump_present(void) {
    if (!g_present_since_seal && !g_drew_since_seal)
        return;
    seal_frame("pump");
}

// ===========================================================================
// The frame recorder.
//
// Everything the compositor needs about a frame is collected HERE, because
// every write to a surface already comes through this file. Three things are
// recorded and they answer three different questions:
//
//   a blit record   what was copied where, and out of which content
//   a content revision  which content that was, so a later overwrite cannot
//                       change what the record referred to
//   the retained store  the bytes of a revision somebody still holds
//
// The store is copy-on-WRITE, not copy-on-record. Recording a blit costs a
// lease and nothing else; the copy happens only if the guest goes on to
// overwrite a revision a frame is still holding, which for most surfaces in
// most frames never happens.
// ===========================================================================
namespace {

// ---- the frame arena ------------------------------------------------------
// Chunked and append-only, so it grows without moving anything already in it:
// a record handed out on frame 4000 is still where it was after ten thousand
// more have been appended behind it.
uint64_t g_frame_chunk_allocations = 0;
struct Arena {
    std::deque<std::vector<uint8_t>> chunks;
    size_t used = 0, chunk = 0;
    static constexpr size_t kChunk = 64 * 1024;

    void *alloc(size_t n, size_t align) {
        if (!n)
            return nullptr;
        while (chunk < chunks.size()) {
            size_t at = (used + align - 1) & ~(align - 1);
            if (at + n <= chunks[chunk].size()) {
                used = at + n;
                return chunks[chunk].data() + at;
            }
            ++chunk;
            used = 0;
        }
        chunks.emplace_back(n > kChunk ? n : kChunk);
        ++g_frame_chunk_allocations;
        used = n;
        return chunks.back().data();
    }
    template <typename T> T *alloc_n(size_t count) {
        return (T *)alloc(sizeof(T) * count, alignof(T));
    }
    const uint8_t *copy_bytes(const void *p, size_t n) {
        if (!n)
            return nullptr;
        uint8_t *out = (uint8_t *)alloc(n, 8);
        if (p)
            memcpy(out, p, n);
        else
            memset(out, 0, n);
        return out;
    }
    size_t bytes() const {
        size_t total = 0;
        for (const auto &c : chunks)
            total += c.size();
        return total;
    }
    void reset() {
        chunk = used = 0;
    }
};

// ---- the retained store ---------------------------------------------------
// One entry per (surface, revision) somebody has leased. `bytes` is empty
// until the guest actually overwrites that revision; that is the whole point.
// TWO INDEPENDENT COUNTS, because the two holders are independent. A frame
// holds a lease from the moment it records a blit until host_frame_release; a
// caller of host_revision_lease holds one until its own release. Merging them
// let a caller's release free storage a frame was still holding.
struct Retained {
    std::vector<uint8_t> bytes;
    int w = 0, h = 0, pitch = 0, bpp = 0;
    uint32_t frame_leases = 0; // taken by record_blit, freed by host_frame_release
    uint32_t acquires = 0;     // taken by host_revision_lease, freed by its release
    bool snapshotted = false;
    bool held() const {
        return frame_leases || acquires;
    }
};

// Content revisions say WHAT the pixels are; storage generations say WHICH
// memory they are in. A Flip moves the memory without changing either
// surface's contents, so it advances the generation and not the revision - and
// a record that carried a revision where the vocabulary asks for a generation
// would claim the contents changed when only the address did.
std::map<uint32_t, uint32_t> &generations() {
    static std::map<uint32_t, uint32_t> m;
    return m;
}

// A versioned palette snapshot. A record names the version it was drawn
// against, so a frame composited three palette writes later still paints with
// the colours the guest had at the time.
struct PaletteVersion {
    uint8_t rgb[256 * 3] = {0};
    // WHICH palette object these colours were taken from. A version is an
    // (identity, contents) pair: presenting a differently palettised primary
    // changes the colours on screen without touching either palette's bytes,
    // and a version that recorded only the bytes would hand a record the
    // wrong palette while insisting it was current.
    uint32_t source = 0;
    uint32_t frame_leases = 0;
    uint32_t acquires = 0;
    bool held() const {
        return frame_leases || acquires;
    }
};
std::map<uint32_t, PaletteVersion> &palettes() {
    static std::map<uint32_t, PaletteVersion> m;
    return m;
}

uint64_t retained_key(uint32_t surface, uint32_t revision) {
    return ((uint64_t)surface << 32) | revision;
}

std::map<uint64_t, Retained> &retained() {
    static std::map<uint64_t, Retained> m;
    return m;
}
std::map<uint32_t, uint32_t> &revisions() {
    static std::map<uint32_t, uint32_t> m;
    return m;
}

// ---- the frame ------------------------------------------------------------
struct Frame {
    uint64_t id = 0;
    Arena arena;
    std::vector<HostBlitRecord *> records;
    std::vector<HostD3DDrawSnapshot *> draws;
    std::vector<HostSurfaceKey> leases;
    std::vector<uint32_t> palette_leases;
    // (handle, revision) pairs the frame's draws are holding in the renderer.
    std::vector<std::pair<uint32_t, uint32_t>> texture_leases;
    uint32_t first_hud_seq = 0xffffffffu;
    struct HudRect {
        HostSurfaceId source, destination;
        int32_t x0, y0, x1, y1;
    };
    std::vector<HudRect> hud;
    std::map<uint32_t, HostDrawMapping> mapping;
    bool legacy = false;
    HostSurfaceId draw_surface = HOST_SURFACE_NONE;
    bool had_draws = false;
    bool wrote_video = false;
    HostSurfaceId render_surface = HOST_SURFACE_NONE;
    HostScreenClass cls = HOST_SCREEN_MENU;
    // A palette write changes every pixel on screen without touching one. An
    // 8-bit fade or a palette cycle is a run of frames whose ONLY change is
    // this, and a frame that did not count it as content would seal nothing:
    // the compositor would repeat its last frame under the palette version it
    // leased, and the fade would never appear.
    bool palette_changed = false;
    // The display palette version as of the seal, so the presenter re-presents
    // under the colours the frame ended with rather than the ones it started
    // with.
    uint32_t display_palette_version = 0;
};

using FrameMap = std::map<uint64_t, Frame>;
FrameMap &frames() {
    static FrameMap m;
    return m;
}
// Nodes keep vector capacities and arena chunks, with at most four idle
// frames. Retirement releases leases before any storage enters this pool.
std::vector<FrameMap::node_type> &frame_pool() {
    static std::vector<FrameMap::node_type> pool;
    return pool;
}
void recycle_frame(Frame &f) {
    f.arena.reset();
    f.records.clear();
    f.draws.clear();
    f.leases.clear();
    f.palette_leases.clear();
    f.texture_leases.clear();
    f.hud.clear();
    f.mapping.clear();
    f.first_hud_seq = 0xffffffffu;
    f.legacy = false;
    f.draw_surface = f.render_surface = HOST_SURFACE_NONE;
    f.had_draws = f.wrote_video = f.palette_changed = false;
    f.display_palette_version = 0;
}
uint64_t g_frame_id = 1;
// How many sealed frames the recorder keeps before releasing the oldest. A
// presenter holds at most three in flight; the rest is slack for a host that
// is slow to release and for the tests that hold several deliberately.
const size_t kRetainedFrames = 16;
// How many source leases one frame keeps. A frame that is sealed normally
// holds a handful; this is the bound for one that is never sealed at all,
// which is what a screen drawn only with blits produces.
const size_t kLeasesPerFrame = 128;
uint32_t g_seq = 0;
bool g_after_first_draw = false;
bool g_after_first_hud = false;
bool g_device_present = false;
HostScreenClass g_legacy_class = HOST_SCREEN_MENU;
bool g_sticky_legacy = false;
uint64_t g_legacy_count = 0;
HostSurfaceId g_cursor_surface = HOST_SURFACE_NONE;
uint32_t g_mode_w = 0, g_mode_h = 0, g_mode_bpp = 0;
uint32_t g_palette_version = 1;

Frame &current_frame() {
    auto it = frames().find(g_frame_id);
    if (it != frames().end())
        return it->second;
    if (!frame_pool().empty()) {
        auto node = std::move(frame_pool().back());
        frame_pool().pop_back();
        node.key() = g_frame_id;
        frames().insert(std::move(node));
    }
    Frame &f = frames()[g_frame_id];
    f.id = g_frame_id;
    f.cls = g_device_present ? HOST_SCREEN_GAMEPLAY : HOST_SCREEN_MENU;
    f.legacy = g_sticky_legacy && f.cls == g_legacy_class;
    return f;
}

// Decisions are immutable once sealed. A class transition clears the sticky
// decision, including a device transition between two guest frame boundaries.
void classify_screen(Frame &f, HostScreenClass cls) {
    if (g_legacy_class != cls) {
        g_sticky_legacy = false;
        g_legacy_class = cls;
        f.legacy = false;
    }
    f.cls = cls;
    f.legacy = f.legacy || g_sticky_legacy;
}
void legacy_interleave(Frame &f) {
    if (!f.legacy) {
        f.legacy = true;
        ++g_legacy_count;
    }
    g_sticky_legacy = true;
    g_legacy_class = f.cls;
}
bool overlaps(const HostD3DDrawSnapshot &d, const Frame::HudRect &r) {
    return d.screen_min_x < d.screen_max_x && d.screen_min_y < d.screen_max_y &&
           d.screen_min_x < r.x1 && d.screen_max_x > r.x0 && d.screen_min_y < r.y1 &&
           d.screen_max_y > r.y0;
}
void classify_record(Frame &f, const HostBlitRecord &r) {
    if (f.cls != HOST_SCREEN_GAMEPLAY || r.is_upload || !r.after_first_draw ||
        r.dst != f.draw_surface || r.src.surface == f.draw_surface)
        return;
    if (f.first_hud_seq == UINT32_MAX)
        f.first_hud_seq = r.seq;
    g_after_first_hud = true;
    Frame::HudRect hud{r.src.surface, r.dst, r.dst_x, r.dst_y, r.dst_x + r.w, r.dst_y + r.h};
    // Maximal 8-connected groups with the same source, including transitive
    // joins. A later join never changes a draw's already baked mapping.
    for (size_t i = 0; i < f.hud.size();) {
        auto old = f.hud[i];
        if (old.source == hud.source && old.destination == hud.destination && old.x0 <= hud.x1 &&
            old.x1 >= hud.x0 && old.y0 <= hud.y1 && old.y1 >= hud.y0) {
            hud.x0 = std::min(hud.x0, old.x0);
            hud.y0 = std::min(hud.y0, old.y0);
            hud.x1 = std::max(hud.x1, old.x1);
            hud.y1 = std::max(hud.y1, old.y1);
            f.hud.erase(f.hud.begin() + i);
            i = 0;
        } else
            ++i;
    }
    f.hud.push_back(hud);
    for (auto *draw : f.draws)
        if (draw->in_overlay_pass && f.mapping[draw->seq] == HOST_MAPPING_SCENE &&
            overlaps(*draw, hud))
            legacy_interleave(f);
}

// A draw is content even with no blit behind it: a gameplay frame that only
// renders geometry still has a picture to present, and a frame that ignored
// had_draws could never be sealed by drawing alone.
bool frame_has_content(const Frame &f) {
    return !f.records.empty() || !f.draws.empty() || f.had_draws || f.palette_changed;
}

// Which surface the game draws its mouse pointer from.
//
// Not a guess about shape. create_mouse_surface (D3DPopTB.exe 004fccb0,
// analysis/decompiled) makes two 32x32 system-memory surfaces for the pointer
// and keeps their interface pointers in these two globals; the cursor draw at
// 004fd370 is the only code that uses them, through the device structs at
// 00a68f80 and 00a68fd8. Reading the globals IS the call site.
//
// The rule this replaces - the last small keyed blit onto the visible chain -
// could not tell the pointer from a HUD sprite, which is small and keyed and
// drawn onto the same chain, so an ordinary sprite could take the cursor's
// place at any frame.
const uint32_t kCursorSurfacePtr[RECOMP_HOOK_CURSOR_SURFACE_PTRS_COUNT] =
    RECOMP_HOOK_CURSOR_SURFACE_PTRS;

// Resolved from the guest's globals, and checked: the value has to name a
// live 32x32 surface, so a build whose data lies elsewhere learns nothing
// rather than learning something wrong.
HostSurfaceId cursor_surface_now() {
    for (uint32_t at : kCursorSurfacePtr) {
        if (!gm_valid(at, 4))
            continue;
        uint32_t iface = rd32(at);
        if (!iface)
            continue;
        // A quiet lookup, done here rather than through com_this: reading a
        // guest global is a DATA read, and a value that is not an interface
        // pointer is an ordinary answer of "not learned yet", not a bad COM
        // call to log about. Any surface interface will do, so no iface is
        // required either - a pointer the guest QI'd to a later surface
        // interface is still the same surface.
        if (!gm_valid(iface, COM_VIEW_SIZE))
            continue;
        if (rd32(iface + COM_OFF_magic) != COM_MAGIC)
            continue;
        ComObj *o = com_get(rd32(iface + COM_OFF_obj));
        if (!o || o->kind != K_SURFACE)
            continue;
        if (o->width != 32 || o->height != 32)
            continue;
        return o->id;
    }
    return HOST_SURFACE_NONE;
}

// Is this surface the screen, or part of the chain that is?
//
// "is_primary or has a front_obj" is not that: an offscreen FLIP|COMPLEX chain
// has back buffers with a front_obj too, and nothing in it reaches the screen.
// The head of the chain has to BE the primary. Walking is bounded by the object
// count, so a cycle cannot spin here.
bool surface_is_on_screen(const ComObj *s) {
    if (!s || s->kind != K_SURFACE)
        return false;
    uint32_t n = com_object_count();
    const ComObj *head = s;
    for (uint32_t hop = 0; hop <= n && head && !head->is_primary; ++hop)
        head = head->front_obj ? com_get(head->front_obj) : nullptr;
    return head && head->is_primary;
}

// A movie plays with the device destroyed, at 640x480x16, with the decoder
// writing the primary through Lock/Unlock. That is the signal: a surface is
// carrying video when there is no device, the mode is 16 bpp, and it is the
// primary chain. See task-2-report.md for why this rule and not another.
bool surface_is_video(const ComObj *s) {
    return s && !g_device_present && g_mode_bpp == 16 && surface_is_on_screen(s);
}

uint32_t bpp_bytes_of(uint32_t bpp) {
    return bpp <= 8 ? 1u : (bpp <= 16 ? 2u : 4u);
}

// The palette that governs the screen. There is one display palette at a
// time, so one version counter serves the frame: the primary's own attached
// palette, or the front buffer's when the primary is a flip chain member.
const ComObj *display_palette() {
    // The surface the shim actually presents. Scanning the object table for a
    // primary found the FIRST one ever created instead: a released primary
    // stays in the table, and the game creates a new one after every mode
    // change, so the colours came from a surface nothing had shown for
    // minutes.
    const ComObj *s = g_display_surface ? com_get(g_display_surface) : nullptr;
    if (!s || s->kind != K_SURFACE || !s->is_primary)
        return nullptr;
    return effective_palette(s);
}

} // namespace

// A palette write ends the current version. The NEXT version's bytes are read
// when something first names it, not here: nothing can change a palette
// except a write, and a write is exactly what bumps the counter, so reading
// late reads the same bytes as reading now - and reads nothing at all for the
// versions no record ever refers to.
// Whether this palette governs anything the screen is showing. A palette
// attached only to a texture changes no pixel on screen by itself, and a frame
// that sealed for it would be a frame with no picture in it.
bool palette_is_on_screen(const ComObj *p) {
    if (!p)
        return false;
    const ComObj *disp = g_display_surface ? com_get(g_display_surface) : nullptr;
    if (disp && disp->kind == K_SURFACE && effective_palette(disp) == p)
        return true;
    uint32_t n = com_object_count();
    for (uint32_t id = 1; id <= n; ++id) {
        const ComObj *s = com_get(id);
        if (!s || s->kind != K_SURFACE)
            continue;
        if (effective_palette(s) != p)
            continue;
        if (surface_is_on_screen(s))
            return true;
    }
    return false;
}

// The current frame changed even though no pixel moved.
void note_palette_changed_on_screen(const ComObj *p) {
    if (!palette_is_on_screen(p))
        return;
    presenter_write();
    current_frame().palette_changed = true;
    g_present_since_seal = true;
}

void note_palette_write(void) {
    ++g_palette_version;
    // Versions nobody holds and nobody can name again are dropped, so a level
    // of palette animation does not accumulate a snapshot per frame.
    for (auto it = palettes().begin(); it != palettes().end();) {
        if (!it->second.held() && it->first != g_palette_version)
            it = palettes().erase(it);
        else
            ++it;
    }
}

// ---- the Lock write shadow ------------------------------------------------
// The guest writes through a raw pointer and the shim never sees the stores,
// so the only way to know what a Lock wrote is to remember what was there
// before it and compare afterwards. That is a copy of the locked region per
// outstanding write lock, which is the price of recording writes the shim is
// structurally unable to observe.
struct LockShadow {
    std::vector<uint8_t>
        bytes; // the region as it was at Lock, tightly packed; empty for a baseline lock
    bool baseline = false; // "before" is the surface's baseline, not `bytes`
    // The guest writes this lock through a raw pointer, so its stores are
    // counted in a dirty range (x86.h) - as long as no import that might write
    // the surface ran in between, which `calls` is there to tell.
    bool tracked = false;
    uint64_t calls = 0;
    uint32_t dirty_base = 0, dirty_len = 0; // the range it opened
    int32_t r[4] = {0, 0, 0, 0};
    int32_t row_bytes = 0;
    uint32_t bpp = 0;
    bool armed = false; // a read-only lock arms nothing
    // The pointer Lock handed back for this region. IDirectDrawSurface's
    // Unlock takes THAT - lpSurface - or null; only IDirectDrawSurface4's
    // takes a RECT. The game holds the v1 view, so this is the argument it
    // actually passes when it closes a lock out of order.
    uint32_t lock_ptr = 0;
};
// A STACK per surface, one entry per accepted Lock. DirectDraw allows nested
// locks, and each one is its own region: an inner write lock on a different
// rectangle, or one taken beneath a read-only outer lock, writes pixels that a
// single outermost shadow never covers. Every accepted lock pushes; every
// accepted Unlock pops the one it paired with.
std::map<uint32_t, std::vector<LockShadow>> &lock_shadows() {
    static std::map<uint32_t, std::vector<LockShadow>> m;
    return m;
}

// A surface's pixels as the recorder last accounted for them: the "before" of
// every write lock on it, and what a retained pointer's stores are found
// against. One copy per surface, kept between locks. A copy per Lock and a
// hash of the whole surface at every final Unlock cost a program that draws
// text a glyph at a time, locking its whole back buffer for each, three full
// passes over the surface per glyph; this is one compare, and none at all at
// a Lock when nothing has written the surface since the baseline was taken.
struct Baseline {
    std::vector<uint8_t> bytes; // the whole surface, rows packed without pitch padding
    uint32_t pixels = 0, width = 0, height = 0, bpp = 0;
    // The surface revision the whole baseline matches, or 0 when some of it
    // may be behind the pixels (a write the recorder made itself, or a sync of
    // only part of the surface).
    uint32_t revision = 0;
};
std::map<uint32_t, Baseline> &baselines() {
    static std::map<uint32_t, Baseline> m;
    return m;
}

// The version a record drawn into `dst` was made against.
//
// The palette is resolved from the DESTINATION's own chain, not from whatever
// surface is being presented: a blit into a differently palettised primary is
// drawn in that primary's colours, and reading the presented one recorded a
// palette the pixels were never meant to be seen in. A null `dst` asks about
// the screen, which is what a caller with no destination means.
uint32_t palette_version_for(const ComObj *dst) {
    // The destination's own chain first. An 8-bit offscreen surface with no
    // palette of its own is on its way to the screen, so the screen's palette
    // is the one its pixels will be seen in; that is the fallback, not a
    // guess, and it is what the shim already presents them with.
    const ComObj *p = dst ? effective_palette(dst) : nullptr;
    if (!p)
        p = display_palette();
    uint32_t src = p ? p->id : 0;
    auto it = palettes().find(g_palette_version);
    // A different governing palette is a different version even though
    // nothing was written: this is the identity half of the pair.
    if (it != palettes().end() && it->second.source != src) {
        note_palette_write();
        it = palettes().end();
    }
    if (it == palettes().end())
        it = palettes().find(g_palette_version);
    if (it == palettes().end()) {
        PaletteVersion &v = palettes()[g_palette_version];
        v.source = src;
        if (p) {
            for (int i = 0; i < 256; ++i) {
                uint32_t c = p->pal[i];
                v.rgb[i * 3 + 0] = (uint8_t)(c >> 16);
                v.rgb[i * 3 + 1] = (uint8_t)(c >> 8);
                v.rgb[i * 3 + 2] = (uint8_t)c;
            }
        }
    }
    return g_palette_version;
}

// The screen's palette version, for callers with no destination in hand.
uint32_t palette_now(void) {
    return palette_version_for(nullptr);
}

// ---------------------------------------------------------------------------
// The access tracer.
//
// One counter per way the guest can READ a surface's pixels, because which of
// them a frame used is what decides whether that frame can stay on the GPU or
// has to be read back. The list is the coherence contract's, and nothing else
// belongs in it: Lock in either direction, GetDC, a blit with the surface as
// SOURCE, a destination-key read, DuplicateSurface, texture Load and Flip.
//
// Counted by REASON and never merged into a total. A single "readbacks" number
// says a frame was expensive; these say which path made it expensive, which is
// the only form of the number anybody can act on.
//
// texture_load is counted in d3d.cpp, where Load lives.
// ---------------------------------------------------------------------------
namespace {
HostAccessCounts g_access;
uint64_t g_clean_base = 0;
} // namespace
namespace {
HostAccessCounts &g_access_ref_impl() {
    return g_access;
}
} // namespace

extern "C" void host_access_counts(HostAccessCounts *out) {
    if (out) {
        *out = g_access;
        out->clean_reads = (uint32_t)(host_d3d_clean_read_count() - g_clean_base);
    }
}

void ddraw_reset_access_counts(void) {
    memset(&g_access, 0, sizeof g_access);
    g_clean_base = host_d3d_clean_read_count();
}

// Forget the parsed mode table so the next reader re-reads RECOMP_DDRAW_MODES.
// The table is read once and kept, because the environment does not change
// under a running game; a test that varies the variable is the one case that
// needs it dropped.
void ddraw_reset_modes(void) {
    mode_table().clear();
}

// Replace the offered set while the game is running, which is what a display
// script's `mode` verb does and what the environment variable cannot safely
// do - see the warning above the table. A null or empty spec restores the
// built-in list. On a malformed spec the table is left exactly as it was, so a
// typo narrows nothing.
int ddraw_set_modes(const char *spec) {
    if (!spec || !*spec) {
        use_built_in_modes(mode_table());
        // Informational, not a warning: this is the caller getting what it
        // asked for. The project has LOGW and LOGV and no LOGI, so LOGV is
        // the informational level the ruling meant.
        LOGV("ddraw: the offered modes are the built-in list again");
        return 1;
    }
    std::vector<Mode> parsed;
    if (!parse_modes(spec, &parsed) || parsed.empty()) {
        LOGW("ddraw: ddraw_set_modes(\"%s\") is not a comma-separated list of "
             "WxHxB with a depth of 8 or 16; the offered modes are unchanged",
             spec);
        return 0;
    }
    mode_table().swap(parsed);
    LOGV("ddraw: the offered modes are now %zu, set at runtime", mode_table().size());
    return 1;
}

int ddraw_add_mode(int w, int h, int bpp) {
    if (w <= 0 || h <= 0 || w > 65535 || h > 65535 || (bpp != 8 && bpp != 16))
        return 0;
    const auto &offered = modes();
    if (!has_mode(offered, w, h, bpp))
        mode_table().push_back({uint32_t(w), uint32_t(h), uint32_t(bpp)});
    return 1;
}

namespace {
HostAccessCounts &g_access_ref() {
    return g_access_ref_impl();
}
} // namespace

namespace {

void note_lock_access(uint32_t flags) {
    // READONLY and WRITEONLY are hints, and a lock with neither is both. What
    // matters here is whether the guest could READ: only WRITEONLY says it
    // cannot, so everything else counts as a read.
    if (flags & DDLOCK_WRITEONLY)
        ++g_access.lock_write;
    else
        ++g_access.lock_read;
}

} // namespace

// ---------------------------------------------------------------------------
// Revisions and the retained store
// ---------------------------------------------------------------------------
uint32_t ddraw_surface_revision(uint32_t id) {
    auto it = revisions().find(id);
    return it == revisions().end() ? 1u : it->second;
}

uint32_t ddraw_surface_generation(uint32_t id) {
    auto it = generations().find(id);
    return it == generations().end() ? 1u : it->second;
}

// The memory this surface addresses has changed: a Flip swapped it, a
// SetSurfaceDesc replaced it, or the device retargeted. The CONTENTS change
// with it - after a swap the surface holds what the other one held - so both
// numbers move, and a record keyed to the old revision keeps the old bytes.
void ddraw_storage_changed(ComObj *s) {
    if (!s || s->kind != K_SURFACE)
        return;
    host_d3d_forget_generation(s->id, ddraw_surface_generation(s->id));
    generations()[s->id] = ddraw_surface_generation(s->id) + 1;
    // And the CONTENTS are different too. A Flip does not edit either buffer,
    // but afterwards the front surface holds what the back one held: to
    // anybody naming "surface 4, revision 7" those are different pixels. The
    // revision has to move or a record made after the swap would key to the
    // revision the retained store already holds the OLD bytes for, and lease
    // pre-swap contents for a post-swap picture.
    ddraw_after_write(s);
}

// Everything a leased revision needs before its storage goes away for good -
// a Flip's swap, a SetSurfaceDesc, a destruction. ddraw_before_write covers an
// overwrite in place; this covers the memory itself leaving.
void ddraw_preserve_before_storage_change(ComObj *s) {
    ddraw_before_write(s);
}

// Called BEFORE a surface's pixels change, from every path that can change
// them. If a frame is still holding the revision about to be overwritten, its
// bytes are copied now - the last moment they exist.
void ddraw_before_write(ComObj *s) {
    if (!s || s->kind != K_SURFACE || !s->pixels)
        return;
    uint32_t rev = ddraw_surface_revision(s->id);
    auto it = retained().find(retained_key(s->id, rev));
    if (it == retained().end() || it->second.snapshotted || !it->second.held())
        return;
    Retained &r = it->second;
    r.w = (int)s->width;
    r.h = (int)s->height;
    r.pitch = (int)s->pitch;
    r.bpp = (int)s->bpp;
    size_t n = (size_t)s->pitch * s->height;
    r.bytes.resize(n);
    memcpy(r.bytes.data(), gm_ptr(s->pixels), n);
    r.snapshotted = true;
}

// Revisions come from ONE counter, not one per surface. A per-surface counter
// makes (handle, revision) ambiguous the moment two surfaces swap handles: both
// sit at low numbers, so handle A at revision 3 can mean one surface's pixels
// before the swap and the other's after it, and a frame holding the first would
// be handed the second. One counter makes every pair unique for the life of the
// process.
uint32_t g_next_revision = 1;

void ddraw_after_write(ComObj *s) {
    if (!s || s->kind != K_SURFACE)
        return;
    // 0 means "no revision named" to the renderer and 1 is the fresh-surface
    // default, so a wrapped counter skips both rather than aliasing them.
    if (++g_next_revision < 2)
        g_next_revision = 2;
    revisions()[s->id] = g_next_revision;
}

extern "C" {

int host_revision_lease(HostSurfaceKey key, HostPixels *out) {
    if (out)
        memset(out, 0, sizeof(*out));
    auto it = retained().find(retained_key(key.surface, key.revision));
    if (it == retained().end())
        return -1;
    Retained &r = it->second;
    if (!r.snapshotted) {
        // Nothing has overwritten this revision yet, so the bytes are still
        // the surface's own. They are COPIED here rather than pointed at: the
        // contract is that the pointer stays valid and unchanging until the
        // matching release, and guest storage is neither.
        ComObj *s = com_get(key.surface);
        if (!s || s->kind != K_SURFACE || !s->pixels)
            return -1;
        r.w = (int)s->width;
        r.h = (int)s->height;
        r.pitch = (int)s->pitch;
        r.bpp = (int)s->bpp;
        size_t n = (size_t)s->pitch * s->height;
        r.bytes.resize(n);
        memcpy(r.bytes.data(), gm_ptr(s->pixels), n);
        r.snapshotted = true;
    }
    ++r.acquires; // this caller's own hold, independent of any frame's
    if (out) {
        out->data = r.bytes.data();
        out->w = r.w;
        out->h = r.h;
        out->pitch = r.pitch;
        out->bpp = r.bpp;
    }
    return 0;
}

void host_revision_release(HostSurfaceKey key) {
    auto it = retained().find(retained_key(key.surface, key.revision));
    if (it == retained().end())
        return;
    if (it->second.acquires)
        --it->second.acquires;
    if (!it->second.held())
        retained().erase(it);
}

uint32_t host_palette_version(void) {
    return g_palette_version;
}

const uint8_t *host_palette_lease(uint32_t version) {
    // Look it up FIRST. Asking palette_version_for to resolve identity here
    // could bump the counter and prune the very version being leased - a
    // record into an offscreen surface with its own palette, its frame
    // released, the primary on another palette - so the lease would return
    // null for the version host_palette_version had just reported. A lease
    // reads; it does not decide what the current version is.
    auto it = palettes().find(version);
    if (it == palettes().end() && version == g_palette_version) {
        palette_now(); // the live version, not yet snapshotted
        it = palettes().find(version);
    }
    if (it == palettes().end())
        return nullptr;
    ++it->second.acquires;
    return it->second.rgb;
}

void host_palette_release(uint32_t version) {
    auto it = palettes().find(version);
    if (it == palettes().end())
        return;
    if (it->second.acquires)
        --it->second.acquires;
    // The CURRENT version stays even when nobody holds it. Its identity - which
    // palette it means - was fixed when it was made, and erasing it would let
    // the next lease of the same number re-resolve it against whatever is on
    // screen by then: the same version reporting different colours. Older
    // versions are dropped here and by the prune in note_palette_write.
    if (!it->second.held() && version != g_palette_version)
        palettes().erase(it);
}

// ---------------------------------------------------------------------------
// Frames
// ---------------------------------------------------------------------------
HostFrameHandle host_frame_current(void) {
    HostFrameHandle h = {g_frame_id};
    return h;
}

HostScreenClass host_frame_class(HostFrameHandle f) {
    auto it = frames().find(f.id);
    return it == frames().end() ? HOST_SCREEN_MENU : it->second.cls;
}
uint32_t host_frame_record_count(HostFrameHandle f) {
    auto it = frames().find(f.id);
    return it == frames().end() ? 0u : (uint32_t)it->second.records.size();
}
const HostBlitRecord *host_frame_record(HostFrameHandle f, uint32_t i) {
    auto it = frames().find(f.id);
    if (it == frames().end() || i >= it->second.records.size())
        return nullptr;
    return it->second.records[i];
}
uint32_t host_frame_first_hud_seq(HostFrameHandle f) {
    auto it = frames().find(f.id);
    return it == frames().end() ? 0xffffffffu : it->second.first_hud_seq;
}
int host_frame_had_draws(HostFrameHandle f) {
    auto it = frames().find(f.id);
    return it == frames().end() ? 0 : (it->second.had_draws ? 1 : 0);
}
uint32_t host_frame_palette_version(HostFrameHandle f) {
    auto it = frames().find(f.id);
    return it == frames().end() ? 0u : it->second.display_palette_version;
}
HostSurfaceId host_frame_render_surface(HostFrameHandle f) {
    auto it = frames().find(f.id);
    return it == frames().end() ? HOST_SURFACE_NONE : it->second.render_surface;
}
HostSurfaceId host_cursor_surface(void) {
    // Learned from the guest's own globals, and remembered: the game clears
    // them when it rebuilds the surfaces, and a frame in between still has a
    // pointer in it. A mode change is what makes the answer stale, and
    // set_display_mode forgets it there.
    HostSurfaceId now = cursor_surface_now();
    if (now != HOST_SURFACE_NONE)
        g_cursor_surface = now;
    return g_cursor_surface;
}

void host_d3d_release_unclaimed_frame(uint64_t frame) {
    host_frame_release(HostFrameHandle{frame});
}

void host_frame_release(HostFrameHandle f) {
    auto it = frames().find(f.id);
    if (it == frames().end())
        return;
    host_d3d_retire_frame(f.id);
    // Both kinds of lease this frame took, and the frame's own arena.
    for (const HostSurfaceKey &k : it->second.leases) {
        auto r = retained().find(retained_key(k.surface, k.revision));
        if (r == retained().end())
            continue;
        if (r->second.frame_leases)
            --r->second.frame_leases;
        if (!r->second.held())
            retained().erase(r);
    }
    for (const auto &t : it->second.texture_leases)
        host_d3d_texture_release(t.first, t.second);
    for (uint32_t v : it->second.palette_leases) {
        auto pv = palettes().find(v);
        if (pv == palettes().end())
            continue;
        if (pv->second.frame_leases)
            --pv->second.frame_leases;
        // The live version stays; see host_palette_release for why.
        if (!pv->second.held() && v != g_palette_version)
            palettes().erase(pv);
    }
    recycle_frame(it->second);
    if (frame_pool().size() < 4)
        frame_pool().push_back(frames().extract(it));
    else
        frames().erase(it);
}

uint32_t host_frame_draw_count(HostFrameHandle f) {
    auto it = frames().find(f.id);
    return it == frames().end() ? 0u : (uint32_t)it->second.draws.size();
}
const HostD3DDrawSnapshot *host_frame_draw(HostFrameHandle f, uint32_t i) {
    auto it = frames().find(f.id);
    if (it == frames().end() || i >= it->second.draws.size())
        return nullptr;
    return it->second.draws[i];
}

// ---------------------------------------------------------------------------
// What d3d.cpp tells us
// ---------------------------------------------------------------------------
void ddraw_note_draw(void) {
    presenter_write();
    Frame &f = current_frame();
    f.had_draws = true;
    g_drew_since_seal = true;
    g_after_first_draw = true;
    if (g_device_present)
        classify_screen(f, HOST_SCREEN_GAMEPLAY);
}
void ddraw_note_render_surface(HostSurfaceId surface) {
    current_frame().render_surface = surface;
    current_frame().draw_surface = surface;
}
uint32_t ddraw_peek_seq(void) {
    return g_seq;
}
int host_frame_legacy(HostFrameHandle f) {
    auto it = frames().find(f.id);
    if (it != frames().end())
        return it->second.legacy;
    // Querying the next frame must preserve sticky classification without
    // allocating its arena or acquiring a fifth target before its first write.
    return f.id == g_frame_id && g_sticky_legacy &&
           g_legacy_class == (g_device_present ? HOST_SCREEN_GAMEPLAY : HOST_SCREEN_MENU);
}
uint64_t host_legacy_fallback_count(void) {
    return g_legacy_count;
}
HostDrawMapping host_frame_draw_mapping(HostFrameHandle f, uint32_t seq) {
    auto it = frames().find(f.id);
    if (it == frames().end())
        return HOST_MAPPING_SCENE;
    auto m = it->second.mapping.find(seq);
    return m == it->second.mapping.end() ? HOST_MAPPING_SCENE : m->second;
}
void ddraw_note_hud(void) {
    Frame &f = current_frame();
    if (f.first_hud_seq == 0xffffffffu)
        f.first_hud_seq = g_seq;
    g_after_first_hud = true;
}
void *ddraw_frame_alloc(uint32_t bytes, uint32_t align) {
    if (!bytes)
        return nullptr;
    presenter_write();
    if (!align)
        align = 8;
    return current_frame().arena.alloc(bytes, align);
}

uint32_t ddraw_next_seq(void) {
    return g_seq++;
}

void ddraw_note_texture_load(void) {
    ++g_access_ref().texture_load;
}

void ddraw_record_draw(HostD3DDrawSnapshot *d) {
    if (!d)
        return;
    Frame &f = current_frame();
    d->in_overlay_pass = f.first_hud_seq != UINT32_MAX && d->seq > f.first_hud_seq;
    HostDrawMapping mapping = HOST_MAPPING_SCENE;
    if (d->in_overlay_pass) {
        for (const auto &hud : f.hud) {
            if (hud.destination != f.draw_surface)
                continue;
            bool inside = d3d_draw_inside_rect(d, hud.x0, hud.y0, hud.x1, hud.y1);
            if (inside)
                mapping = HOST_MAPPING_UI;
            if (overlaps(*d, hud) && !inside)
                legacy_interleave(f);
        }
    }
    f.mapping[d->seq] = mapping;
    f.draws.push_back(d);
    // What a draw does to the frame is said in ONE place, so the two entry
    // points cannot drift: this is the same notification the tests send by
    // hand.
    ddraw_note_draw();
}

int ddraw_frame_lease_texture(uint32_t handle, uint32_t revision) {
    if (!handle)
        return 1;
    if (!host_d3d_texture_retain(handle, revision))
        return 0;
    current_frame().texture_leases.push_back({handle, revision});
    return 1;
}

void ddraw_note_device(int present) {
    g_device_present = present != 0;
    classify_screen(current_frame(),
                    g_device_present
                        ? HOST_SCREEN_GAMEPLAY
                        : (current_frame().wrote_video ? HOST_SCREEN_FMV : HOST_SCREEN_MENU));
}

// ---------------------------------------------------------------------------
// Test seams
// ---------------------------------------------------------------------------
void reset_ddraw_for_test(void) {
    ddraw_drain_present_releases();
    host_d3d_reset_coherence();
    g_clean_base = 0;
    frames().clear();
    frame_pool().clear();
    retained().clear();
    revisions().clear();
    generations().clear();
    palettes().clear();
    lock_shadows().clear();
    g_dirty_count = 0; // their locks went with them
    // Not the baselines: like the retained-pointer flag they sit beside, they
    // belong to the surfaces, which outlive a recorder reset.
    g_frame_id = 1;
    g_seq = 0;
    g_after_first_draw = g_after_first_hud = false;
    g_device_present = false;
    g_sticky_legacy = false;
    g_legacy_class = HOST_SCREEN_MENU;
    g_legacy_count = 0;
    g_cursor_surface = HOST_SURFACE_NONE;
    g_present_since_seal = false;
    g_drew_since_seal = false;
    g_next_revision = 1;
    g_mode_w = g_mode_h = g_mode_bpp = 0;
    g_palette_version = 1;
}
uint64_t ddraw_frame_chunk_allocations_for_test(void) {
    return g_frame_chunk_allocations;
}
uint32_t host_surface_revision_for_test(uint32_t id) {
    return ddraw_surface_revision(id);
}
uint32_t host_surface_generation_for_test(uint32_t id) {
    return ddraw_surface_generation(id);
}
void ddraw_storage_changed_for_test(uint32_t id) {
    ComObj *s = com_get(id);
    if (s && s->kind == K_SURFACE) {
        ddraw_preserve_before_storage_change(s);
        ddraw_storage_changed(s);
    }
}
uint64_t host_retained_bytes_for_test(void) {
    uint64_t total = 0;
    for (const auto &kv : retained())
        total += kv.second.bytes.size();
    return total;
}

} // extern "C"

// ---------------------------------------------------------------------------
// Recording and sealing
// ---------------------------------------------------------------------------
namespace {

// One record per guest blit. `coverage` says which of the destination's pixels
// this blit actually wrote: without it a keyed sprite would be recorded as a
// solid rectangle and the compositor would paint over what the key spared.
// Returns the coverage buffer for the caller to hand to blit(), which fills
// it as it writes. Null when there is nothing to record.
uint8_t *record_blit(ComObj *dst, const int32_t d[4], const ComObj *src, const int32_t sr[4],
                     const BlitKeys &keys, bool fill, uint32_t fill_value) {
    if (!dst || dst->kind != K_SURFACE)
        return nullptr;
    int32_t w = d[2] - d[0], h = d[3] - d[1];
    if (w <= 0 || h <= 0)
        return nullptr;

    presenter_write();
    Frame &f = current_frame();
    HostBlitRecord *r = f.arena.alloc_n<HostBlitRecord>(1);
    memset(r, 0, sizeof *r);
    r->seq = g_seq++;
    r->dst = dst->id;
    r->dst_generation = ddraw_surface_generation(dst->id);
    r->dst_x = d[0];
    r->dst_y = d[1];
    r->w = w;
    r->h = h;
    r->src_x = sr[0];
    r->src_y = sr[1];
    r->fill_value = fill_value;
    r->palette_version = palette_version_for(dst);
    r->has_srckey = keys.src ? 1 : 0;
    r->has_dstkey = keys.dst ? 1 : 0;
    r->src_key_lo = keys.src_lo;
    r->src_key_hi = keys.src_hi;
    r->dst_key_lo = keys.dst_lo;
    r->dst_key_hi = keys.dst_hi;
    // A texture SURFACE, not a surface that happens to have a handle already:
    // a write before GetHandle is still an upload, and calling it screen
    // content is how a pre-filled texture got counted as a frame's picture.
    r->is_upload = (dst->caps & DDSCAPS_TEXTURE) || dst->texture_handle ? 1 : 0;
    r->after_first_draw = g_after_first_draw ? 1 : 0;
    r->after_first_hud = g_after_first_hud ? 1 : 0;

    if (fill || !src) {
        r->src.surface = HOST_SURFACE_NONE;
        r->src.revision = 0;
    } else {
        r->src.surface = src->id;
        r->src.revision = ddraw_surface_revision(src->id);
        // A lease, not a copy. The bytes are taken only if the guest goes on
        // to overwrite this revision while the frame still holds it.
        Retained &ret = retained()[retained_key(r->src.surface, r->src.revision)];
        ++ret.frame_leases;
        f.leases.push_back(r->src);
        // A frame ends when something is presented or drawn. A screen that
        // does neither - one built entirely from blits into a back buffer the
        // guest never flips - records into the same frame indefinitely, and
        // every lease it takes can cost a full copy of those pixels the moment
        // the guest overwrites them. The oldest leases of an unsealed frame
        // are therefore let go: nothing has been able to ask for them, because
        // only a sealed frame is offered to a presenter.
        while (f.leases.size() > kLeasesPerFrame) {
            const HostSurfaceKey old_key = f.leases.front();
            f.leases.erase(f.leases.begin());
            auto it = retained().find(retained_key(old_key.surface, old_key.revision));
            if (it == retained().end())
                continue;
            if (it->second.frame_leases)
                --it->second.frame_leases;
            if (!it->second.held())
                retained().erase(it);
        }
    }

    // Zeroed, and filled by the blit itself as it writes. Predicting it here
    // was wrong twice over: an overlapping keyed self-blit changes its own
    // source while copying, and a zero-sized source rectangle writes nothing
    // while a prediction happily covered the whole destination.
    uint8_t *cov = (uint8_t *)f.arena.alloc((size_t)w * h, 8);
    memset(cov, 0, (size_t)w * h);
    r->coverage = cov;

    if (surface_is_on_screen(dst)) {
        f.render_surface = dst->id;
        // Content that reached the screen. Not "a present happened": a
        // write-less Unlock on the primary presents too, and a frame boundary
        // that a lock which wrote nothing could open is not a boundary.
        g_present_since_seal = true;
    }
    if (surface_is_video(dst)) {
        f.wrote_video = true;
        classify_screen(f, HOST_SCREEN_FMV);
    } else if (g_device_present)
        classify_screen(f, HOST_SCREEN_GAMEPLAY);

    // The palette this record was drawn against, held for as long as the
    // frame is: compositing three palette writes later must not repaint it in
    // whatever colours the guest has by then.
    {
        auto pv = palettes().find(r->palette_version);
        if (pv != palettes().end()) {
            ++pv->second.frame_leases;
            f.palette_leases.push_back(r->palette_version);
        }
    }

    classify_record(f, *r);
    f.records.push_back(r);
    return cov;
}

void apply_last_blit(ComObj *dst) {
    auto &records = current_frame().records;
    if (records.empty())
        return;
    HostBlitRecord r = *records.back();
    if (r.dst != dst->id)
        return;
    r.src.surface = HOST_SRC_CPU;
    r.cpu_bpp = (uint8_t)dst->bpp;
    r.cpu_pitch = (int32_t)dst->pitch;
    r.cpu_pixels = (const uint8_t *)gm_ptr(dst->pixels + r.dst_y * dst->pitch +
                                           r.dst_x * bytes_per_pixel(dst->bpp));
    d3d_cpu_write(dst, &r);
}

// A frame seals on a Flip of the primary chain and on the pump's primary
// present, and only when it has something in it: a pump tick with no guest
// writes seals nothing, or an idle game would produce an unbounded stream of
// empty frames for the compositor to present.
void seal_frame(const char * /*why*/) {
    Frame &f = current_frame();
    if (!frame_has_content(f))
        return;
    // The colours this frame ended under, so the presenter paints it in them
    // rather than in whatever the guest has moved on to - and HELD, because
    // the guest's next palette write prunes every version nobody holds. In a
    // fade the next write comes before the compositor has looked at this
    // frame, so without the hold the version it names would already be gone.
    f.display_palette_version = palette_now();
    {
        auto pv = palettes().find(f.display_palette_version);
        if (pv != palettes().end()) {
            ++pv->second.frame_leases;
            f.palette_leases.push_back(f.display_palette_version);
        }
    }
    host_d3d_seal_frame(f.id);
    if (present_seal)
        present_seal();
    g_present_since_seal = false;
    g_drew_since_seal = false;
    ++g_frame_id;
    // A sealed frame holds a lease on every surface revision it recorded, and
    // each held revision keeps a full copy of those pixels. A host releases
    // the frames it took; one that never does - or one that faults before it
    // can - would otherwise keep every frame of the run, which on a screen
    // that records many blits is megabytes a second. The recorder therefore
    // keeps a bounded window of recent frames and releases anything older,
    // which is far more than the three a presenter has in flight.
    while (frames().size() > kRetainedFrames) {
        auto oldest = frames().begin();
        if (oldest->first >= g_frame_id) // never the frame being recorded
            break;
        host_frame_release(HostFrameHandle{oldest->first});
    }
    g_seq = 0;
    g_after_first_draw = g_after_first_hud = false;
    // Allocate the next arena only when needed; four target leases may still
    // be outstanding here. current_frame initializes its new screen class.
}

} // namespace

// A device that renders by itself (the Direct3D 9 shim) presents a finished
// CPU image with no DirectDraw surface behind it. Its frame opens before the
// pixels are handed over and seals right after, as a Flip would, and it is
// always composed from those pixels, never from recorded blits.
void ddraw_external_present_begin(void) {
    presenter_write();
}
void ddraw_external_present_end(void) {
    Frame &f = current_frame();
    legacy_interleave(f);
    f.palette_changed = true; // content with no records: the pixels changed
    g_present_since_seal = true;
    seal_frame("external present");
}

// A CPU write, seen at Unlock. The decoder's frames arrive this way, and a
// write to the primary while a movie is playing is what makes the frame FMV.
// Called only when the write actually changed pixels: FMV is a property of
// this frame's qualifying decoder write, and a lock that wrote nothing is not
// one.
void ddraw_note_cpu_write_impl(ComObj *s) {
    if (!s || s->kind != K_SURFACE)
        return;
    Frame &f = current_frame();
    if (surface_is_on_screen(s)) {
        f.render_surface = s->id;
        g_present_since_seal = true; // content, on screen; see record_blit
    }
    if (surface_is_video(s)) {
        f.wrote_video = true;
        classify_screen(f, HOST_SCREEN_FMV);
    }
}

void lock_shadow_forget(const ComObj *s) {
    if (s) {
        auto it = lock_shadows().find(s->id);
        if (it != lock_shadows().end()) {
            // Ranges its open locks were counting close with them.
            uint32_t lo, hi;
            for (const LockShadow &sh : it->second)
                if (sh.tracked)
                    dirty_close(sh.dirty_base, sh.dirty_len, &lo, &hi);
            lock_shadows().erase(it);
        }
        baselines().erase(s->id);
    }
}

// What a write lock is about to change, remembered so Unlock can say what it
// did change. Read-only locks arm nothing.
namespace {
// Shadow buffers are the size of what the guest locks, which for a DXR draw
// is the whole back buffer, once per word of text. A fresh vector zero-fills
// megabytes that the copy then overwrites; a few kept from earlier locks,
// already the right size, cost only the copy.
std::vector<std::vector<uint8_t>> &shadow_pool() {
    static std::vector<std::vector<uint8_t>> pool;
    return pool;
}
std::vector<uint8_t> shadow_buffer(size_t n) {
    auto &pool = shadow_pool();
    for (size_t i = pool.size(); i-- > 0;)
        if (pool[i].size() >= n) {
            std::vector<uint8_t> v = std::move(pool[i]);
            pool.erase(pool.begin() + (ptrdiff_t)i);
            v.resize(n);
            return v;
        }
    return std::vector<uint8_t>(n);
}
void shadow_recycle(std::vector<uint8_t> &&v) {
    auto &pool = shadow_pool();
    if (v.empty() || pool.size() >= 4)
        return;
    pool.push_back(std::move(v));
}
} // namespace

namespace {
const uint8_t *surface_row(const ComObj *s, int32_t y) {
    return (const uint8_t *)gm_ptr(s->pixels + (uint32_t)y * s->pitch);
}
size_t baseline_row_bytes(const Baseline &b) {
    return (size_t)b.width * bytes_per_pixel(b.bpp);
}
uint8_t *baseline_row(Baseline &b, int32_t y) {
    return b.bytes.data() + (size_t)y * baseline_row_bytes(b);
}
bool baseline_matches(const Baseline &b, const ComObj *s) {
    return !b.bytes.empty() && b.pixels == s->pixels && b.width == s->width &&
           b.height == s->height && b.bpp == s->bpp;
}
// The surface's baseline, taken now if it has none or its storage changed
// under it (a flip, SetSurfaceDesc). `fresh` says it was.
Baseline &baseline_of(const ComObj *s, bool *fresh) {
    Baseline &b = baselines()[s->id];
    *fresh = !baseline_matches(b, s);
    if (*fresh) {
        b.pixels = s->pixels;
        b.width = s->width;
        b.height = s->height;
        b.bpp = s->bpp;
        const size_t row = baseline_row_bytes(b);
        b.bytes.resize(row * s->height);
        for (uint32_t y = 0; y < s->height; ++y)
            memcpy(b.bytes.data() + (size_t)y * row, surface_row(s, (int32_t)y), row);
        b.revision = ddraw_surface_revision(s->id);
    }
    return b;
}
// Brings the rows of `r` in the baseline up to the pixels, without recording
// anything, and returns the band that differed (rows y0 < y1; y0 == y1 when
// nothing did). Columns outside `r` are left as they were.
std::pair<int32_t, int32_t> baseline_sync(Baseline &b, const ComObj *s, const int32_t r[4]) {
    const size_t bb = bytes_per_pixel(b.bpp);
    const size_t off = (size_t)r[0] * bb, n = (size_t)(r[2] - r[0]) * bb;
    int32_t y0 = r[3], y1 = r[1];
    if (!n)
        return {r[1], r[1]};
    for (int32_t y = r[1]; y < r[3]; ++y) {
        uint8_t *was = baseline_row(b, y) + off;
        const uint8_t *now = surface_row(s, y) + off;
        if (!memcmp(was, now, n))
            continue;
        memcpy(was, now, n);
        if (y < y0)
            y0 = y;
        y1 = y + 1;
    }
    return y0 < y1 ? std::make_pair(y0, y1) : std::make_pair(r[1], r[1]);
}
bool covers_surface(const ComObj *s, const int32_t r[4]) {
    return r[0] == 0 && r[1] == 0 && r[2] == (int32_t)s->width && r[3] == (int32_t)s->height;
}
} // namespace

// After a write the recorder made itself: the baseline was current at
// `was_current_at`, so it is current again at the revision that write made.
void baseline_note_revision(const ComObj *s, uint32_t was_current_at) {
    if (!s)
        return;
    auto it = baselines().find(s->id);
    if (it == baselines().end() || !baseline_matches(it->second, s))
        return;
    if (it->second.revision == was_current_at)
        it->second.revision = ddraw_surface_revision(s->id);
}
// A write the shim made itself, to `r`, is already recorded. When the
// baseline was current before it, copying that rectangle in keeps it current,
// so the next Lock does not compare the whole surface to find one blit.
void baseline_absorb(const ComObj *s, const int32_t r[4], uint32_t was_current_at) {
    if (!s || !s->pixels)
        return;
    auto it = baselines().find(s->id);
    if (it == baselines().end() || !baseline_matches(it->second, s))
        return;
    Baseline &b = it->second;
    if (b.revision != was_current_at)
        return;
    const int32_t x0 = std::max(r[0], 0), y0 = std::max(r[1], 0);
    const int32_t x1 = std::min(r[2], (int32_t)s->width), y1 = std::min(r[3], (int32_t)s->height);
    const size_t bb = bytes_per_pixel(b.bpp);
    for (int32_t y = y0; y < y1 && x0 < x1; ++y)
        memcpy(baseline_row(b, y) + (size_t)x0 * bb, surface_row(s, y) + (size_t)x0 * bb,
               (size_t)(x1 - x0) * bb);
    b.revision = ddraw_surface_revision(s->id);
}
// The whole surface, taken as it is now and accounted for: what the pixels
// hold is not news any more. Used where the recorder has just published the
// content itself.
void baseline_resync(const ComObj *s) {
    if (!s || !s->pixels)
        return;
    auto it = baselines().find(s->id);
    if (it == baselines().end())
        return;
    bool fresh = false;
    Baseline &b = baseline_of(s, &fresh);
    if (!fresh) {
        const int32_t full[4] = {0, 0, (int32_t)s->width, (int32_t)s->height};
        baseline_sync(b, s, full);
    }
    b.revision = ddraw_surface_revision(s->id);
}

// The dirty range for a surface's pixels, opened by a guest Lock and closed
// by its Unlock. Four at most; a fifth lock simply is not tracked.
bool dirty_open(const ComObj *s) {
    if (g_dirty_count >= RECOMP_DIRTY_SLOTS)
        return false;
    RecompDirty &d = g_dirty[g_dirty_count++];
    d.base = s->pixels;
    d.len = s->pixels_bytes;
    d.lo = 0xffffffffu;
    d.hi = 0;
    return true;
}
// Closes one range a lock opened and says what was written in it. False when
// there is none.
bool dirty_close(uint32_t base, uint32_t len, uint32_t *lo, uint32_t *hi) {
    for (uint32_t i = 0; i < g_dirty_count; ++i)
        if (g_dirty[i].base == base && g_dirty[i].len == len) {
            *lo = g_dirty[i].lo;
            *hi = g_dirty[i].hi;
            g_dirty[i] = g_dirty[--g_dirty_count];
            return true;
        }
    return false;
}

void lock_shadow_take(ComObj *s, const int32_t r[4], uint32_t flags, uint32_t lock_ptr,
                      bool guest_pointer) {
    std::vector<LockShadow> &stack = lock_shadows()[s->id];
    stack.emplace_back();
    LockShadow &sh = stack.back();
    sh.lock_ptr = lock_ptr;
    // A read-only lock is a promise not to write, so it costs nothing but the
    // empty entry that keeps this stack paired with the guest's own.
    if (flags & DDLOCK_READONLY)
        return;
    int32_t w = r[2] - r[0], h = r[3] - r[1];
    if (w <= 0 || h <= 0)
        return;
    uint32_t bb = bytes_per_pixel(s->bpp);
    sh.row_bytes = w * (int32_t)bb;
    sh.bpp = s->bpp;
    for (int i = 0; i < 4; ++i)
        sh.r[i] = r[i];
    // The region's "before" is the baseline, brought up to the pixels first
    // unless nothing has written the surface since it was: what was there at
    // Lock is what Unlock compares with, exactly as a copy taken now would be.
    bool fresh = false;
    Baseline &b = baseline_of(s, &fresh);
    const uint32_t revision = ddraw_surface_revision(s->id);
    if (!fresh && b.revision != revision) {
        baseline_sync(b, s, r);
        b.revision = covers_surface(s, r) ? revision : 0;
    }
    sh.baseline = true;
    sh.armed = true;
    // Only a pointer the guest writes through with its own code. A DC lock is
    // written by the GDI shims, which no range sees.
    if (guest_pointer && s->pixels_bytes && dirty_open(s)) {
        sh.tracked = true;
        sh.calls = imports_call_count();
        sh.dirty_base = s->pixels;
        sh.dirty_len = s->pixels_bytes;
    }
}

namespace {
// Record changed guest rectangles in frame-owned storage, then apply them to
// the renderer before any readback. Lock diffs supply solid changed spans;
// retained pointers supply the whole rectangle because they have no shadow.
void record_cpu_write_rects(ComObj *s, const std::vector<HostDirtyRect> &boxes) {
    uint32_t bb = bytes_per_pixel(s->bpp);
    presenter_write();
    for (auto box : boxes) {
        int32_t x0 = box.x0, y0 = box.y0;
        int32_t w = box.x1 - x0, h = box.y1 - y0;
        Frame &f = current_frame();
        HostBlitRecord *r = f.arena.alloc_n<HostBlitRecord>(1);
        memset(r, 0, sizeof *r);
        r->seq = g_seq++;
        r->dst = s->id;
        r->dst_generation = ddraw_surface_generation(s->id);
        r->dst_x = x0;
        r->dst_y = y0;
        r->w = w;
        r->h = h;
        r->src.surface = HOST_SRC_CPU;
        r->src.revision = 0;
        r->src_x = 0;
        r->src_y = 0;
        // The payload is in the surface's own format, tightly packed, so a 16 bpp
        // diff is never replayed as 8.
        r->cpu_bpp = (uint8_t)s->bpp;
        r->cpu_pitch = w * (int32_t)bb;
        r->palette_version = palette_version_for(s);
        r->is_upload = (s->caps & DDSCAPS_TEXTURE) || s->texture_handle ? 1 : 0;
        r->after_first_draw = g_after_first_draw ? 1 : 0;
        r->after_first_hud = g_after_first_hud ? 1 : 0;

        uint8_t *pix = (uint8_t *)f.arena.alloc((size_t)r->cpu_pitch * h, 8);
        uint8_t *cov = (uint8_t *)f.arena.alloc((size_t)w * h, 8);
        for (int32_t y = 0; y < h; ++y) {
            uint32_t row =
                s->pixels + (uint32_t)((r->dst_y + y) * (int32_t)s->pitch + r->dst_x * (int32_t)bb);
            memcpy(pix + (size_t)y * r->cpu_pitch, gm_ptr(row), (size_t)r->cpu_pitch);
            memset(cov + (size_t)y * w, 1, (size_t)w);
        }
        r->cpu_pixels = pix;
        r->coverage = cov;

        {
            auto pv = palettes().find(r->palette_version);
            if (pv != palettes().end()) {
                ++pv->second.frame_leases;
                f.palette_leases.push_back(r->palette_version);
            }
        }
        classify_record(f, *r);
        f.records.push_back(r);
        d3d_cpu_write(s, r);
    }
}
} // namespace

// A writable pointer stays writable after Unlock. Detect unannounced stores
// under the guest baton, before a source read or primary present can read back
// stale renderer pixels. Surfaces never locked writable pay no hashing cost.
void ddraw_refresh_retained_writes(ComObj *s, const int32_t rect[4]) {
    if (!s || !s->retained_pointer || !s->pixels)
        return;
    bool fresh = false;
    Baseline &b = baseline_of(s, &fresh);
    int32_t y0 = rect[1], y1 = rect[3];
    if (!fresh) {
        // Only the rows that changed since the baseline are news.
        auto band = baseline_sync(b, s, rect);
        if (band.first == band.second)
            return;
        y0 = band.first;
        y1 = band.second;
    }
    // A baseline taken just now knows nothing about what came before it, so
    // the whole rectangle is reported, as a first look always was.
    record_cpu_write_rects(s, {{rect[0], y0, rect[2], y1}});
    ddraw_note_cpu_write_impl(s);
    surface_pixels_changed(s);
    b.revision = covers_surface(s, rect) ? ddraw_surface_revision(s->id) : 0;
}

// The diff, at the Unlock that closes this lock: one record for what the
// guest's own stores changed, with the payload, coverage and format the compositor needs
// to replay them. Returns whether anything changed at all - a lock that wrote
// nothing is not a write, and must not classify the frame or seal it.
bool lock_shadow_record(ComObj *s, const int32_t *unlock_rect, uint32_t unlock_ptr) {
    auto it = lock_shadows().find(s->id);
    if (it == lock_shadows().end() || it->second.empty())
        return false;
    std::vector<LockShadow> &stack = it->second;
    // Unlock names the rectangle it is closing. Match it, because the guest
    // may close the OUTER lock first: popping LIFO there would diff the inner
    // shadow early and lose whatever the inner lock wrote afterwards. LIFO is
    // the fallback for an Unlock that names no rectangle, which is the common
    // case and unambiguous.
    size_t at = stack.size() - 1;
    if (unlock_ptr) {
        // The v1 interface's argument: the pixel pointer this lock returned.
        for (size_t i = stack.size(); i-- > 0;)
            if (stack[i].lock_ptr == unlock_ptr) {
                at = i;
                break;
            }
    } else if (unlock_rect) {
        for (size_t i = stack.size(); i-- > 0;) {
            const LockShadow &c = stack[i];
            if (c.r[0] == unlock_rect[0] && c.r[1] == unlock_rect[1] && c.r[2] == unlock_rect[2] &&
                c.r[3] == unlock_rect[3]) {
                at = i;
                break;
            }
        }
    }
    LockShadow sh = std::move(stack[at]);
    stack.erase(stack.begin() + (ptrdiff_t)at);
    // What the guest wrote while this lock was open, when that is known: its
    // range saw every store the translated code made, and no import that
    // might write the surface ran since the Lock.
    uint32_t written_lo = 0, written_hi = 0;
    bool narrowed = false;
    if (sh.tracked && dirty_close(sh.dirty_base, sh.dirty_len, &written_lo, &written_hi))
        narrowed = imports_call_count() == sh.calls && sh.dirty_base == s->pixels &&
                   sh.dirty_len == s->pixels_bytes;
    struct Recycle {
        LockShadow &sh;
        ~Recycle() {
            shadow_recycle(std::move(sh.bytes));
        }
    } recycle{sh};
    if (stack.empty())
        lock_shadows().erase(it);
    if (!sh.armed)
        return false;
    if (!s->pixels || s->bpp != sh.bpp)
        return false; // storage replaced under the lock
    int32_t lw = sh.r[2] - sh.r[0], lh = sh.r[3] - sh.r[1];
    uint32_t bb = bytes_per_pixel(s->bpp);
    if (lw <= 0 || lh <= 0)
        return false;

    // The changed pixels, and their bounding box. A decoder rewrites the whole
    // region; a menu writes a few words of it. Recording the box rather than
    // the lock keeps the payload the size of the write.
    // Only the band of rows that differ gets a mask: a text draw locks the
    // whole back buffer and changes a line of it.
    auto row_now = [&](int32_t y) {
        return (const uint8_t *)gm_ptr(
            s->pixels + (uint32_t)((sh.r[1] + y) * (int32_t)s->pitch + sh.r[0] * (int32_t)bb));
    };
    Baseline *base = nullptr;
    if (sh.baseline) {
        bool fresh = false;
        base = &baseline_of(s, &fresh);
        if (fresh)
            return false; // the storage changed under the lock: nothing to compare with
    }
    // The region as it was at Lock, row by row.
    auto row_was = [&](int32_t y) -> const uint8_t * {
        if (base)
            return baseline_row(*base, sh.r[1] + y) + (size_t)sh.r[0] * bb;
        return sh.bytes.data() + (size_t)y * sh.row_bytes;
    };
    auto row_differs = [&](int32_t y) {
        return memcmp(row_was(y), row_now(y), (size_t)sh.row_bytes) != 0;
    };
    int32_t band0 = 0, band1 = lh - 1;
    if (narrowed) {
        if (written_lo >= written_hi)
            return false; // nothing was written through the pointer
        // The rows of the lock the written span touches.
        const int64_t first = (int64_t)(written_lo - s->pixels) / (int64_t)s->pitch - sh.r[1];
        const int64_t last = (int64_t)(written_hi - 1 - s->pixels) / (int64_t)s->pitch - sh.r[1];
        if (last < 0 || first >= lh)
            return false;
        band0 = (int32_t)std::max<int64_t>(first, 0);
        band1 = (int32_t)std::min<int64_t>(last, lh - 1);
    }
    while (band0 <= band1 && !row_differs(band0))
        ++band0;
    if (band0 > band1)
        return false;
    while (band1 > band0 && !row_differs(band1))
        --band1;
    const int32_t band_h = band1 - band0 + 1;
    std::vector<uint8_t> changed((size_t)lw * band_h, 0);
    int32_t x0 = lw, y0 = lh, x1 = -1, y1 = -1;
    for (int32_t y = band0; y <= band1; ++y) {
        const uint8_t *was = row_was(y);
        const uint8_t *now = row_now(y);
        if (!memcmp(was, now, (size_t)sh.row_bytes))
            continue;
        // Unchanged stretches are skipped eight bytes at a time, whole pixels
        // of them when the pixel size divides eight; what is left is compared
        // a pixel at a time without a call.
        const int32_t step = bb == 3 ? 0 : int32_t(8 / bb);
        for (int32_t x = 0; x < lw; ++x) {
            if (step && x + step <= lw) {
                uint64_t a, b;
                memcpy(&a, was + (size_t)x * bb, 8);
                memcpy(&b, now + (size_t)x * bb, 8);
                if (a == b) {
                    x += step - 1;
                    continue;
                }
            }
            bool differs;
            if (bb == 2) {
                uint16_t a, b;
                memcpy(&a, was + (size_t)x * 2, 2);
                memcpy(&b, now + (size_t)x * 2, 2);
                differs = a != b;
            } else if (bb == 4) {
                uint32_t a, b;
                memcpy(&a, was + (size_t)x * 4, 4);
                memcpy(&b, now + (size_t)x * 4, 4);
                differs = a != b;
            } else if (bb == 1) {
                differs = was[x] != now[x];
            } else {
                differs = memcmp(was + (size_t)x * bb, now + (size_t)x * bb, bb) != 0;
            }
            if (!differs)
                continue;
            changed[(size_t)(y - band0) * lw + x] = 1;
            if (x < x0)
                x0 = x;
            if (x > x1)
                x1 = x;
            if (y < y0)
                y0 = y;
            if (y > y1)
                y1 = y;
        }
    }
    if (x1 < 0)
        return false;

    std::vector<HostDirtyRect> boxes;
    std::map<std::pair<int, int>, size_t> previous;
    for (int y = band0; y <= band1; ++y) {
        std::map<std::pair<int, int>, size_t> next;
        const size_t base = (size_t)(y - band0) * lw;
        for (int x = 0; x < lw;) {
            if (!changed[base + x]) {
                ++x;
                continue;
            }
            int start = x;
            while (x < lw && changed[base + x])
                ++x;
            auto span = std::make_pair(start, x);
            auto old = previous.find(span);
            if (old != previous.end()) {
                boxes[old->second].y1 = y + 1;
                next[span] = old->second;
            } else {
                next[span] = boxes.size();
                boxes.push_back({start, y, x, y + 1});
            }
        }
        previous = std::move(next);
    }
    for (auto &box : boxes) {
        box.x0 += sh.r[0];
        box.x1 += sh.r[0];
        box.y0 += sh.r[1];
        box.y1 += sh.r[1];
    }
    record_cpu_write_rects(s, boxes);
    // The baseline is the "before" of every open lock on this surface too, so
    // bringing the changed band up to date re-bases them all at once - the
    // same thing the loop below does for a lock with bytes of its own.
    if (base) {
        const size_t n = (size_t)sh.row_bytes;
        for (int32_t y = band0; y <= band1; ++y)
            memcpy(baseline_row(*base, sh.r[1] + y) + (size_t)sh.r[0] * bb, row_now(y), n);
    }

    // Anything still open under this lock has now been told about these
    // pixels, so its own "before" is re-based to what they are NOW. Two things
    // follow, and both are what the guest means: the outer Unlock does not
    // report the inner write a second time, and a LATER write to those same
    // pixels still differs from the new baseline and is reported. A rectangle
    // of "already covered" could not do the second, which is the case a guest
    // that closes its locks out of order actually produces.
    auto open_locks = lock_shadows().find(s->id);
    if (open_locks != lock_shadows().end()) {
        for (LockShadow &other : open_locks->second) {
            if (!other.armed || other.baseline)
                continue;
            int32_t ox0 = other.r[0] > (sh.r[0] + x0) ? other.r[0] : (sh.r[0] + x0);
            int32_t oy0 = other.r[1] > (sh.r[1] + y0) ? other.r[1] : (sh.r[1] + y0);
            int32_t ox1 = other.r[2] < (sh.r[0] + x1 + 1) ? other.r[2] : (sh.r[0] + x1 + 1);
            int32_t oy1 = other.r[3] < (sh.r[1] + y1 + 1) ? other.r[3] : (sh.r[1] + y1 + 1);
            // Two locks can be open on rectangles that do not touch - the
            // guest locks the left strip and the right strip at once - and
            // then this intersection is EMPTY. Without the check the width
            // below is negative, memcpy takes it as a size_t, and the process
            // dies. There is nothing to re-baseline in that case.
            if (ox1 <= ox0 || oy1 <= oy0)
                continue;
            for (int32_t y = oy0; y < oy1; ++y) {
                uint8_t *dst_row = other.bytes.data() + (size_t)(y - other.r[1]) * other.row_bytes +
                                   (size_t)(ox0 - other.r[0]) * bb;
                uint32_t src_row =
                    s->pixels + (uint32_t)(y * (int32_t)s->pitch + ox0 * (int32_t)bb);
                memcpy(dst_row, gm_ptr(src_row), (size_t)(ox1 - ox0) * bb);
            }
        }
    }
    return true;
}

void ddraw_note_mode_impl(uint32_t w, uint32_t h, uint32_t bpp) {
    g_mode_w = w;
    g_mode_h = h;
    g_mode_bpp = bpp;
}

bool ddraw_display_mode(uint32_t *w, uint32_t *h, uint32_t *bpp) {
    if (!g_mode_bpp)
        return false;
    *w = g_mode_w;
    *h = g_mode_h;
    *bpp = g_mode_bpp;
    return true;
}

bool ddraw_enum_display_mode(uint32_t index, uint32_t *w, uint32_t *h, uint32_t *bpp) {
    const auto &offered = modes();
    if (index >= offered.size())
        return false;
    *w = offered[index].w;
    *h = offered[index].h;
    *bpp = offered[index].bpp;
    return true;
}

// The test seam IS the production path: a seam that sealed by another route
// would let the production one rot.
extern "C" void pump_present_for_test(void) {
    ddraw_pump_present();
}
void ddraw_frame_pump(X86 *) {
    ddraw_pump_present();
}

// ===========================================================================
// IDirectDrawSurface
// ===========================================================================
namespace {

void Surface_AddAttachedSurface(X86 *c) {
    ComObj *s = this_surface(c);
    ComObj *a = surface_arg(c, 1);
    if (!s || !a) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // The only attachments this shim models are a flip chain's back buffer and
    // a Z buffer.
    //
    // The Z buffer has to be recorded, not merely accepted. Attaching one to
    // the 3D render target is how a caller says the target has depth, and it
    // is read back through GetAttachedSurface(DDSCAPS_ZBUFFER): that lookup is
    // exactly what decides whether depth testing is on. Wine's
    // d3d_device_update_depth_stencil (dlls/ddraw/device.c) does the lookup
    // and sets ZENABLE from whether it found anything, and the original does
    // this once at level start, so dropping the attachment here silently
    // decided the answer for the whole level.
    if (a->caps & DDSCAPS_ZBUFFER) {
        if (!s->zbuffer_obj) {
            s->zbuffer_obj = a->id;
            com_addref(a);
        }
        com_ret(c, DD_OK);
        return;
    }
    if (!s->back_obj) {
        s->back_obj = a->id;
        a->front_obj = s->id;
        com_addref(a);
    }
    com_ret(c, DD_OK);
}

DX_STUB(Surface_AddOverlayDirtyRect, DDERR_NOTAOVERLAYSURFACE)

// Implement rectangular DirectDraw blits, including fills and supported effects.
// Route writes through the coherence recorder before publishing the new surface revision.
void Surface_Blt(X86 *c) {
    ComObj *dst = this_surface(c);
    uint32_t dst_rect = arg(c, 1);
    ComObj *src = surface_arg(c, 2);
    uint32_t src_rect = arg(c, 3);
    uint32_t flags = arg(c, 4);
    uint32_t fx = arg(c, 5);
    if (!dst) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    // Either side of a blit can be the device's render target, and both are
    // about to be read or written with the CPU.
    d3d_flush_surface(dst, "Blt dst");
    d3d_flush_surface(src, "Blt src");

    // The destination may hang off the surface; Blt clips rather than
    // refusing, and the clip happens below once the source is known so a
    // stretch keeps its ratio.
    int32_t d[4], sr[4] = {0, 0, 0, 0};
    if (!read_rect_loose(dst_rect, dst, d)) {
        com_ret(c, DDERR_INVALIDRECT);
        return;
    }

    bool have_fx = fx && gm_valid(fx, DDBLTFX_SIZE);
    if (flags & DDBLT_COLORFILL) {
        if (!clip_blit(dst, d, sr, false)) {
            com_ret(c, DD_OK); // entirely outside: nothing to fill
            return;
        }
        uint32_t value = have_fx ? rd32(fx + DDBLTFX_OFF_dwFillColor) : 0;
        uint8_t *cov = record_blit(dst, d, nullptr, sr, BlitKeys{}, true, value);
        ddraw_before_write(dst);
        blit(dst, d, nullptr, sr, BlitKeys{}, true, value, cov);
        apply_last_blit(dst);
    } else if (flags & DDBLT_DEPTHFILL) {
        if (!clip_blit(dst, d, sr, false)) {
            com_ret(c, DD_OK);
            return;
        }
        uint32_t value = have_fx ? rd32(fx + DDBLTFX_OFF_dwFillColor) : 0;
        uint8_t *cov = record_blit(dst, d, nullptr, sr, BlitKeys{}, true, value);
        ddraw_before_write(dst);
        blit(dst, d, nullptr, sr, BlitKeys{}, true, value, cov);
        apply_last_blit(dst);
    } else {
        if (!src) {
            com_ret(c, DDERR_INVALIDPARAMS);
            return;
        }
        // The source must lie inside its surface: there is nothing to read
        // outside it, and unlike the destination that is a caller error.
        if (!read_rect(src_rect, src, sr)) {
            com_ret(c, DDERR_INVALIDRECT);
            return;
        }
        if (!clip_blit(dst, d, sr, true)) {
            com_ret(c, DD_OK); // entirely outside: nothing to copy
            return;
        }
        BlitKeys keys;
        // The OVERRIDE form wins: it says "use this key, not the surface's".
        if ((flags & DDBLT_KEYSRCOVERRIDE) && have_fx) {
            keys.src = true;
            keys.src_lo = rd32(fx + DDBLTFX_OFF_ddckSrcColorkey + DDCK_OFF_lo);
            keys.src_hi = rd32(fx + DDBLTFX_OFF_ddckSrcColorkey + DDCK_OFF_hi);
        } else if ((flags & DDBLT_KEYSRC) && src->has_ckey_src) {
            keys.src = true;
            keys.src_lo = src->ckey_src_lo;
            keys.src_hi = src->ckey_src_hi;
        } else if (flags & DDBLT_KEYSRC) {
            log_once("ddraw.keysrc.none",
                     "ddraw: Blt asked for DDBLT_KEYSRC but the %ux%ux%u source surface has "
                     "no source colour key; copying every pixel",
                     src->width, src->height, src->bpp);
        }
        if ((flags & DDBLT_KEYDESTOVERRIDE) && have_fx) {
            keys.dst = true;
            keys.dst_lo = rd32(fx + DDBLTFX_OFF_ddckDestColorkey + DDCK_OFF_lo);
            keys.dst_hi = rd32(fx + DDBLTFX_OFF_ddckDestColorkey + DDCK_OFF_hi);
        } else if ((flags & DDBLT_KEYDEST) && dst->has_ckey_dst) {
            keys.dst = true;
            keys.dst_lo = dst->ckey_dst_lo;
            keys.dst_hi = dst->ckey_dst_hi;
        } else if (flags & DDBLT_KEYDEST) {
            log_once("ddraw.keydest.none",
                     "ddraw: Blt asked for DDBLT_KEYDEST but the destination surface has "
                     "no destination colour key; writing every pixel");
        }
        // The source's pixels are about to be read.
        ++g_access_ref().blt_source;
        // And a destination key means the DESTINATION is read too, to decide
        // which of its pixels may be written.
        if (keys.dst)
            ++g_access_ref().dstkey_read;
        ddraw_refresh_retained_writes(src, sr);
        d3d_read_surface(src, sr, HOST_READ_BLT_SOURCE);
        if (keys.dst)
            d3d_read_surface(dst, d, HOST_READ_DSTKEY);
        // Recorded BEFORE the preservation, not just before the copy: a
        // self-blit's source lease has to exist by the time
        // ddraw_before_write looks for one, or the very contents it is being
        // asked to preserve are the ones nobody has claimed yet.
        uint8_t *cov = record_blit(dst, d, src, sr, keys, false, 0);
        ddraw_before_write(dst);
        blit(dst, d, src, sr, keys, false, 0, cov);
        apply_last_blit(dst);
    }
    if (flags & DDBLT_ROP)
        log_once("ddraw.rop", "ddraw: Blt DDBLT_ROP is ignored");
    const uint32_t before = ddraw_surface_revision(dst->id);
    surface_pixels_changed(dst);
    baseline_absorb(dst, d, before);
    com_ret(c, DD_OK);
}

DX_STUB(Surface_BltBatch, DDERR_UNSUPPORTED)

// Implement the unscaled BltFast path with guest rectangle and color-key validation.
// Record the same ordered surface dependencies used by regular blits.
void Surface_BltFast(X86 *c) {
    ComObj *dst = this_surface(c);
    int32_t x = (int32_t)arg(c, 1);
    int32_t y = (int32_t)arg(c, 2);
    ComObj *src = surface_arg(c, 3);
    uint32_t src_rect = arg(c, 4);
    uint32_t trans = arg(c, 5);
    if (!dst || !src) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    d3d_flush_surface(dst, "BltFast dst");
    d3d_flush_surface(src, "BltFast src");

    int32_t sr[4];
    if (!read_rect(src_rect, src, sr)) {
        com_ret(c, DDERR_INVALIDRECT);
        return;
    }
    // BltFast clips nothing in DirectDraw; a blit off the edge is a caller
    // error. Clip anyway rather than corrupt the heap, and say so once.
    int32_t w = sr[2] - sr[0], h = sr[3] - sr[1];
    if (recomp_env("TRACE_GDI")) {
        // A sprite sheet drawn through an empty source rectangle copies nothing
        // and reports success: the glyph table it indexes never loaded. A key
        // that covers the sprite itself does the same with a valid rectangle.
        static uint32_t degenerate = 0, total = 0, keyed = 0;
        ++total;
        if (w <= 0 || h <= 0)
            ++degenerate;
        if ((trans & DDBLTFAST_SRCCOLORKEY) && src->has_ckey_src) {
            ++keyed;
            if (keyed <= 6)
                LOGW("ddraw: keyed BltFast src=%ux%ux%u key=%08x..%08x rect=%d,%d %dx%d",
                     src->width, src->height, src->bpp, src->ckey_src_lo, src->ckey_src_hi, sr[0],
                     sr[1], w, h);
        }
        if ((total % 2000) == 0)
            LOGW("ddraw: BltFast %u calls, %u empty rect, %u keyed", total, degenerate, keyed);
    }
    if (x < 0 || y < 0 || x + w > (int32_t)dst->width || y + h > (int32_t)dst->height) {
        int32_t maxw = (int32_t)dst->width - x, maxh = (int32_t)dst->height - y;
        if (x < 0 || y < 0 || maxw <= 0 || maxh <= 0) {
            com_ret(c, DDERR_INVALIDRECT);
            return;
        }
        log_once("ddraw.bltfast.clip",
                 "ddraw: BltFast destination %d,%d %dx%d overruns a %ux%u surface; clipping", x, y,
                 w, h, dst->width, dst->height);
        w = std::min(w, maxw);
        h = std::min(h, maxh);
        sr[2] = sr[0] + w;
        sr[3] = sr[1] + h;
    }
    int32_t d[4] = {x, y, x + w, y + h};
    // BltFast has no DDBLTFX, so both keys come from the surfaces themselves.
    BlitKeys keys;
    if ((trans & DDBLTFAST_SRCCOLORKEY) && src->has_ckey_src) {
        keys.src = true;
        keys.src_lo = src->ckey_src_lo;
        keys.src_hi = src->ckey_src_hi;
    } else if (trans & DDBLTFAST_SRCCOLORKEY) {
        log_once("ddraw.fastkeysrc.none",
                 "ddraw: BltFast asked for DDBLTFAST_SRCCOLORKEY but the %ux%ux%u source "
                 "surface has no source colour key; copying every pixel, which puts an "
                 "opaque block where a keyed sprite should be transparent",
                 src->width, src->height, src->bpp);
    }
    if ((trans & DDBLTFAST_DESTCOLORKEY) && dst->has_ckey_dst) {
        keys.dst = true;
        keys.dst_lo = dst->ckey_dst_lo;
        keys.dst_hi = dst->ckey_dst_hi;
    }
    ++g_access_ref().blt_source;
    if (keys.dst)
        ++g_access_ref().dstkey_read;
    ddraw_refresh_retained_writes(src, sr);
    d3d_read_surface(src, sr, HOST_READ_BLT_SOURCE);
    if (keys.dst)
        d3d_read_surface(dst, d, HOST_READ_DSTKEY);
    uint8_t *cov = record_blit(dst, d, src, sr, keys, false, 0);
    ddraw_before_write(dst);
    blit(dst, d, src, sr, keys, false, 0, cov);
    apply_last_blit(dst);
    const uint32_t before = ddraw_surface_revision(dst->id);
    surface_pixels_changed(dst);
    baseline_absorb(dst, d, before);
    com_ret(c, DD_OK);
}

void Surface_DeleteAttachedSurface(X86 *c) {
    ComObj *s = this_surface(c);
    ComObj *a = surface_arg(c, 2);
    if (!s) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    if (a && s->back_obj == a->id) {
        s->back_obj = 0;
        a->front_obj = 0;
        com_release(a);
    } else if (a && s->zbuffer_obj == a->id) {
        s->zbuffer_obj = 0;
        com_release(a);
    }
    com_ret(c, DD_OK);
}

void Surface_EnumAttachedSurfaces(X86 *c) {
    ComObj *s = this_surface(c);
    uint32_t ctx = arg(c, 1);
    uint32_t cb = arg(c, 2);
    if (!s || !cb) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    bool v2 = this_is_v2_iface(c);
    ComIface want = v2 ? IF_DDSURFACE4 : IF_DDSURFACE;
    for (uint32_t id = s->back_obj; id;) {
        ComObj *b = com_get(id);
        if (!b)
            break;
        uint32_t desc = scratch(DDSD2_SIZE);
        fill_desc(desc, b, v2, 0);
        uint32_t view = com_view(b, want);
        com_addref(b); // the callback receives a reference, as DirectDraw does
        uint32_t r = guest_call(c, cb, view, desc, ctx);
        if (r != DDENUMRET_OK)
            break;
        id = b->back_obj;
    }
    com_ret(c, DD_OK);
}

DX_STUB(Surface_EnumOverlayZOrders, DDERR_NOTAOVERLAYSURFACE)

// Rotate the flip chain and present the resulting primary surface. Surface identities
// and recorded revisions must follow the exchanged storage, not just the COM pointers.
void Surface_Flip(X86 *c) {
    ComObj *s = this_surface(c);
    ComObj *target = surface_arg(c, 1);
    if (!s) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    if (!(s->caps & DDSCAPS_FLIP) || !s->back_obj) {
        com_ret(c, DDERR_NOTFLIPPABLE);
        return;
    }
    ComObj *back = target ? target : com_get(s->back_obj);
    if (!back) {
        com_ret(c, DDERR_NOTFLIPPABLE);
        return;
    }
    if (s->lock_count || back->lock_count) {
        com_ret(c, DDERR_SURFACEBUSY);
        return;
    }
    // A flip reads both buffers: the memory moves out from under them.
    ++g_access_ref().flip;
    // The flip is about to move the memory out from under both surfaces, so
    // anything the device drew has to be in it first.
    d3d_flush_surface(s, "Flip front");
    d3d_flush_surface(back, "Flip back");
    // And anything a frame still holds has to be copied out of it, because
    // after the swap each surface's revision would name the other's bytes.
    ddraw_preserve_before_storage_change(s);
    ddraw_preserve_before_storage_change(back);

    // A real flip retargets the scan-out at the back buffer's memory. Swapping
    // the two pixel pointers reproduces that exactly: the guest's front and
    // back surface objects keep their identities and each now addresses the
    // other's memory, which is what the next Lock must see.
    std::swap(s->pixels, back->pixels);
    std::swap(s->pixels_bytes, back->pixels_bytes);
    std::swap(s->pitch, back->pitch);
    // Ownership travels with the memory. Without this, flipping a surface
    // whose pixels came from SetSurfaceDesc would leave the guest's own
    // buffer marked as the shim's, and destroying the other surface would
    // free it.
    std::swap(s->owns_pixels, back->owns_pixels);
    // The render target now addresses the other buffer's memory, and the host
    // caches no pixel pointer across a call for exactly this reason.
    // The memory each one addresses has changed, and so have the contents each
    // one holds: afterwards the front surface holds what the back one held.
    // Both numbers move.
    host_d3d_transfer_dirty(s->id, ddraw_surface_generation(s->id), back->id,
                            ddraw_surface_generation(back->id));
    ddraw_storage_changed(s);
    ddraw_storage_changed(back);
    d3d_retarget_surface(s);
    d3d_retarget_surface(back);
    ddraw_present(s);
    // A Flip of the PRIMARY chain is the end of a frame, by definition. An
    // offscreen flip chain is a private double buffer of the guest's and
    // flipping it says nothing about the screen, so sealing there would split
    // a frame in half.
    if (s->is_primary)
        seal_frame("primary flip");
    com_ret(c, DD_OK);
}

// Find an attached back/depth surface matching the requested capability flags.
// Return a retained COM view so the caller owns a normal interface reference.
void Surface_GetAttachedSurface(X86 *c) {
    ComObj *s = this_surface(c);
    uint32_t caps_addr = arg(c, 1);
    uint32_t out = arg(c, 2);
    if (!s || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    com_out_ptr(out, 0);
    uint32_t want = caps_addr && gm_valid(caps_addr, 4) ? rd32(caps_addr) : 0;
    // The Z buffer is attached to the surface itself rather than being a link
    // in the flip chain, so it is looked at first.
    if (s->zbuffer_obj && (want & DDSCAPS_ZBUFFER)) {
        ComObj *z = com_get(s->zbuffer_obj);
        if (z && (z->caps & want) == want) {
            ComIface f = com_iface_of(arg(c, 0));
            uint32_t view = com_view(z, f == IF_NONE ? IF_DDSURFACE : f);
            if (!view) {
                com_ret(c, E_OUTOFMEMORY);
                return;
            }
            com_addref(z);
            com_out_ptr(out, view);
            com_ret(c, DD_OK);
            return;
        }
    }
    // Then the flip chain, for a surface whose caps include everything asked
    // for. The original asks for DDSCAPS_FLIP once a frame and
    // DDSCAPS_BACKBUFFER a handful of times; both name the back buffer.
    for (uint32_t id = s->back_obj; id;) {
        ComObj *b = com_get(id);
        if (!b)
            break;
        if (!want || (b->caps & want) == want) {
            ComIface f = com_iface_of(arg(c, 0));
            uint32_t view = com_view(b, f == IF_NONE ? IF_DDSURFACE : f);
            if (!view) {
                com_ret(c, E_OUTOFMEMORY);
                return;
            }
            com_addref(b);
            com_out_ptr(out, view);
            com_ret(c, DD_OK);
            return;
        }
        id = b->back_obj;
    }
    com_ret(c, DDERR_NOTFOUND);
}

void Surface_GetBltStatus(X86 *c) {
    com_ret(c, DD_OK);
} // never busy

void Surface_GetCaps(X86 *c) {
    ComObj *s = this_surface(c);
    uint32_t out = arg(c, 1);
    // DDSCAPS for v1..v3, DDSCAPS2 for v4; the whole record has to be
    // writable, not just its first dword.
    uint32_t caps_bytes = this_is_v2_iface(c) ? 16u : 4u;
    if (!s || !out || !gm_valid(out, caps_bytes)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    gm_zero(out, caps_bytes);
    wr32(out, s->caps);
    com_ret(c, DD_OK);
}

void Surface_GetClipper(X86 *c) {
    ComObj *s = this_surface(c);
    uint32_t out = arg(c, 1);
    if (!s || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    ComObj *cl = s->clipper_obj ? com_get(s->clipper_obj) : nullptr;
    if (!cl) {
        com_out_ptr(out, 0);
        com_ret(c, DDERR_NOTFOUND);
        return;
    }
    com_addref(cl);
    com_out_ptr(out, com_view(cl, IF_DDCLIPPER));
    com_ret(c, DD_OK);
}

void Surface_GetColorKey(X86 *c) {
    ComObj *s = this_surface(c);
    uint32_t flags = arg(c, 1);
    uint32_t out = arg(c, 2);
    if (!s || !out || !gm_valid(out, 8)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    bool src = (flags & DDCKEY_SRCBLT) != 0;
    if (src ? !s->has_ckey_src : !s->has_ckey_dst) {
        com_ret(c, DDERR_NOCOLORKEY);
        return;
    }
    wr32(out + DDCK_OFF_lo, src ? s->ckey_src_lo : s->ckey_dst_lo);
    wr32(out + DDCK_OFF_hi, src ? s->ckey_src_hi : s->ckey_dst_hi);
    com_ret(c, DD_OK);
}

void Surface_GetDC(X86 *c) {
    // A device context is a read and a write at once: the guest may do either
    // through it, and the shim sees neither.
    ++g_access_ref().getdc;
    ComObj *s = this_surface(c);
    uint32_t out = arg(c, 1);
    if (!s || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    d3d_read_surface(s, nullptr, HOST_READ_GETDC);
    int32_t r[4] = {0, 0, (int32_t)s->width, (int32_t)s->height};
    ddraw_before_write(s);
    if (!s->dc_handle) {
        s->dc_handle = gdi_new_dc();
        lock_shadow_take(s, r, 0, s->dc_handle);
    }
    gdi_bind_surface_dc(s->dc_handle, int(s->width), int(s->height), int(s->bpp), s->pitch,
                        s->pixels, (effective_palette(s) ? effective_palette(s)->pal : nullptr));
    com_out_ptr(out, s->dc_handle);
    com_ret(c, DD_OK);
}

void Surface_GetFlipStatus(X86 *c) {
    com_ret(c, DD_OK);
} // the flip is done

void Surface_GetOverlayPosition(X86 *c) {
    com_ret(c, DDERR_NOTAOVERLAYSURFACE);
}

void Surface_GetPalette(X86 *c) {
    ComObj *s = this_surface(c);
    uint32_t out = arg(c, 1);
    if (!s || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    ComObj *p = s->palette_obj ? com_get(s->palette_obj) : nullptr;
    if (!p) {
        com_out_ptr(out, 0);
        com_ret(c, DDERR_NOPALETTEATTACHED);
        return;
    }
    com_addref(p);
    com_out_ptr(out, com_view(p, IF_DDPALETTE));
    com_ret(c, DD_OK);
}

void Surface_GetPixelFormat(X86 *c) {
    ComObj *s = this_surface(c);
    uint32_t out = arg(c, 1);
    if (!s || !out || !gm_valid(out, DDPF_SIZE)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    write_pixel_format(out, s);
    com_ret(c, DD_OK);
}

// Reference counting and the read-only queries touch no pixels, so a game
// that holds a surface across them keeps its lock's write tracking.
void Surface_AddRef(X86 *c) {
    imports_call_leaves_surfaces();
    com_AddRef(c);
}
void Surface_Release(X86 *c) {
    imports_call_leaves_surfaces();
    com_Release(c);
}

void Surface_GetSurfaceDesc(X86 *c) {
    imports_call_leaves_surfaces();
    ComObj *s = this_surface(c);
    uint32_t out = arg(c, 1);
    if (!s || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    fill_desc(out, s, desc_is_v2(out, this_is_v2_iface(c)), 0);
    com_ret(c, DD_OK);
}

DX_STUB(Surface_Initialize, DDERR_INVALIDOBJECT) // already initialised

void Surface_IsLost(X86 *c) {
    imports_call_leaves_surfaces();
    com_ret(c, DD_OK);
} // surfaces are never lost here

// Make a surface region CPU-readable and return its guest pixel address and pitch.
// Resolve pending rendering before exposing bytes that guest code may read or modify.
void Surface_Lock(X86 *c) {
    imports_call_leaves_surfaces();
    ComObj *s = this_surface(c);
    uint32_t rect_addr = arg(c, 1);
    uint32_t desc = arg(c, 2);
    if (!s || !desc) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (!gm_valid(desc, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (!gm_valid(desc, desc_is_v2(desc, this_is_v2_iface(c)) ? DDSD2_SIZE : DDSD_SIZE)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    int32_t r[4];
    if (!read_rect(rect_addr, s, r)) {
        com_ret(c, DDERR_INVALIDRECT);
        return;
    }
    if (!s->pixels) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    // Every Lock is a way to reach the pixels, and which way decides whether
    // the frame can stay on the GPU.
    note_lock_access(arg(c, 3));
    if (!(arg(c, 3) & DDLOCK_READONLY))
        presenter_write();
    d3d_read_surface(s, r, (arg(c, 3) & DDLOCK_WRITEONLY) ? HOST_READ_LOCK_WRITE : HOST_READ_LOCK);
    // A Lock is a write about to happen: the guest takes a pointer and the
    // shim never sees the stores. Any revision a frame is holding has to be
    // taken now, because after this there is no "before" left.
    ddraw_before_write(s);
    // The guest is about to hold a pointer into these pixels, so the device's
    // rendering has to be in them before it does.
    d3d_flush_surface(s, "Lock");

    // read_rect already clamped the rectangle to the surface, so this offset
    // is inside the allocation; the span is re-checked anyway because the
    // pixel memory may have been replaced by SetSurfaceDesc.
    uint64_t bpp_bytes = bytes_per_pixel(s->bpp);
    uint64_t off = (uint64_t)(uint32_t)r[1] * s->pitch + (uint64_t)(uint32_t)r[0] * bpp_bytes;
    // The locked region ends at the right edge of its last row, not at the
    // start of the row after it: (h-1) whole rows plus w pixels. Counting a
    // full trailing row would reject a legal rectangle that touches the
    // bottom edge whenever its left edge is greater than zero.
    uint64_t rows = (uint64_t)(uint32_t)(r[3] - r[1]);
    uint64_t width_bytes = (uint64_t)(uint32_t)(r[2] - r[0]) * bpp_bytes;
    uint64_t need = rows ? (rows - 1) * s->pitch + width_bytes : 0;
    if (off + need > (uint64_t)s->pixels_bytes || !gm_fits(s->pixels, off + need)) {
        com_ret(c, DDERR_INVALIDRECT);
        return;
    }
    uint32_t p = s->pixels + (uint32_t)off;
    bool v2 = desc_is_v2(desc, this_is_v2_iface(c));
    fill_desc(desc, s, v2, p);
    // A partial lock reports the sub-rectangle's extent, as DirectDraw does.
    if (rect_addr) {
        wr32(desc + DDSD_OFF_dwWidth, (uint32_t)(r[2] - r[0]));
        wr32(desc + DDSD_OFF_dwHeight, (uint32_t)(r[3] - r[1]));
    }
    // What this region holds now, so Unlock can record what the guest's own
    // stores changed. EVERY accepted lock, not only the outermost: a nested
    // lock can name a different rectangle, and one taken beneath a read-only
    // outer lock is the only record of what it wrote.
    lock_shadow_take(s, r, arg(c, 3), p, true);
    if (!(arg(c, 3) & DDLOCK_READONLY))
        s->retained_pointer = true;
    ++s->lock_count;
    com_ret(c, DD_OK);
}

void Surface_ReleaseDC(X86 *c) {
    ComObj *s = this_surface(c);
    if (!s) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    if (!s->dc_handle || arg(c, 1) != s->dc_handle) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    const uint32_t before = ddraw_surface_revision(s->id);
    bool wrote = lock_shadow_record(s, nullptr, s->dc_handle);
    gdi_unbind_surface_dc(s->dc_handle);
    s->dc_handle = 0;
    if (wrote) {
        ddraw_note_cpu_write_impl(s);
        surface_pixels_changed(s);
        baseline_note_revision(s, before);
    }
    com_ret(c, DD_OK);
}

void Surface_Restore(X86 *c) {
    com_ret(c, DD_OK);
}

void Surface_SetClipper(X86 *c) {
    ComObj *s = this_surface(c);
    if (!s) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    uint32_t a = arg(c, 1);
    ComObj *cl = a ? com_this(a, IF_DDCLIPPER) : nullptr;
    if (a && !cl) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // Retain before releasing, for the reason spelled out in Surface_SetPalette:
    // the incoming and outgoing clipper can be the same object.
    if (cl)
        com_addref(cl);
    if (s->clipper_obj) {
        ComObj *old = com_get(s->clipper_obj);
        if (old)
            com_release(old);
    }
    s->clipper_obj = cl ? cl->id : 0;
    com_ret(c, DD_OK);
}

void Surface_SetColorKey(X86 *c) {
    ComObj *s = this_surface(c);
    uint32_t flags = arg(c, 1);
    uint32_t ck = arg(c, 2);
    if (!s) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    bool src = (flags & DDCKEY_SRCBLT) != 0;
    if (!ck) {
        if (src)
            s->has_ckey_src = false;
        else
            s->has_ckey_dst = false;
        com_ret(c, DD_OK);
        return;
    }
    if (!gm_valid(ck, 8)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    uint32_t lo = rd32(ck + DDCK_OFF_lo), hi = rd32(ck + DDCK_OFF_hi);
    if (hi < lo)
        hi = lo;
    if (src) {
        s->ckey_src_lo = lo;
        s->ckey_src_hi = hi;
        s->has_ckey_src = true;
    } else {
        s->ckey_dst_lo = lo;
        s->ckey_dst_hi = hi;
        s->has_ckey_dst = true;
    }
    com_ret(c, DD_OK);
}

DX_STUB(Surface_SetOverlayPosition, DDERR_NOTAOVERLAYSURFACE)

// Attach or detach the palette, updating COM ownership and dependent texture content.
// Palette changes must invalidate resolved colors even when the pixel indices are unchanged.
void Surface_SetPalette(X86 *c) {
    ComObj *s = this_surface(c);
    if (!s) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    uint32_t a = arg(c, 1);
    ComObj *p = a ? com_this(a, IF_DDPALETTE) : nullptr;
    if (a && !p) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // Wine's ddraw_surface_set_palette (dlls/ddraw/surface.c) refuses two
    // cases before it takes the palette, and the game runs on that driver:
    //
    //   an alpha palette on a surface that is not a texture
    //       -> DDERR_INVALIDSURFACETYPE
    //   a surface whose pixel format is not palette-indexed
    //       -> DDERR_INVALIDPIXELFORMAT
    //
    // Every palettised surface this shim makes is 8-bit and every 8-bit one is
    // palettised, so the depth is the palette-indexed test here. A caller told
    // DD_OK for a palette that can never be sampled would have no way to find
    // out that its colours are going nowhere.
    if (p && (p->pal_flags & DDPCAPS_ALPHA) && !(s->caps & DDSCAPS_TEXTURE)) {
        com_ret(c, DDERR_INVALIDSURFACETYPE);
        return;
    }
    if (p && s->bpp > 8) {
        com_ret(c, DDERR_INVALIDPIXELFORMAT);
        return;
    }
    // Retain the incoming palette BEFORE releasing the outgoing one. They can
    // be the same palette - the game re-attaches its palette to the primary on
    // every WM_ACTIVATEAPP, at 004b0870 - and if the surface holds the last
    // reference, releasing first destroys it and everything after that works on
    // a dead object. Taking the reference first also makes the same-palette
    // case balance itself: one addref, one release, no accumulation.
    // Attaching the palette that is already attached changes no colour, so it
    // is not a change to the frame. The retain and release still happen, for
    // the reason above.
    const bool palette_moved = (p ? p->id : 0u) != s->palette_obj;
    if (p)
        com_addref(p);
    if (s->palette_obj) {
        ComObj *old = com_get(s->palette_obj);
        if (old)
            com_release(old);
    }
    s->palette_obj = p ? p->id : 0;
    // Which palette governs the screen is itself part of a version: the same
    // pixels under a newly attached palette are different colours, and that is
    // a change to this frame.
    if (palette_moved && surface_is_on_screen(s)) {
        note_palette_write();
        presenter_write();
        current_frame().palette_changed = true;
        g_present_since_seal = true;
    }
    // The palette governs what the screen shows, so attaching one to the
    // visible surface is itself a presentation change.
    if (s->is_primary)
        ddraw_present(s);
    // A palettised texture is only meaningful with its palette. The renderer
    // holds expanded pixels, so a texture that was uploaded before its palette
    // was attached is holding indices resolved against nothing; without this
    // it stays that way until something else happens to touch it, and it draws
    // black. Attaching or replacing the palette is that change - and a new
    // content revision, for the same reason as in Palette_SetEntries.
    if (s->texture_handle && palette_moved) {
        ddraw_before_write(s);
        ddraw_after_write(s);
        d3d_upload_texture(s);
    }
    com_ret(c, DD_OK);
}

// Finish a guest CPU lock and publish its writes to surface tracking and the renderer.
// A successful unlock makes the updated bytes available to later draw and present operations.
void Surface_Unlock(X86 *c) {
    imports_call_leaves_surfaces();
    ComObj *s = this_surface(c);
    if (!s) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    if (s->lock_count <= 0) {
        com_ret(c, DDERR_NOTLOCKED);
        return;
    }
    --s->lock_count;
    // Unlock's argument names the rectangle it is closing, which is how a
    // guest that closes its locks out of order says which one it means. It is
    // a RECT pointer in the surface's own coordinates; a null one means the
    // whole surface, and the shim matches that to the lock that took it.
    // What the argument MEANS depends on the interface the guest is holding.
    // IDirectDrawSurface::Unlock takes lpSurface - the pointer Lock returned -
    // or null; only IDirectDrawSurface4::Unlock takes a RECT. This game holds
    // the v1 view, so reading its argument as a rectangle matched nothing and
    // fell back to LIFO, which is the case the fallback exists to avoid.
    int32_t ur[4];
    const int32_t *unlock_rect = nullptr;
    uint32_t unlock_ptr = 0;
    uint32_t a1 = arg(c, 1);
    if (com_iface_of(arg(c, 0)) == IF_DDSURFACE4) {
        if (a1 && gm_valid(a1, 16)) {
            for (int i = 0; i < 4; ++i)
                ur[i] = (int32_t)rd32(a1 + (uint32_t)i * 4);
            unlock_rect = ur;
        }
    } else {
        unlock_ptr = a1; // null means "the one I opened last"
    }
    // Each Unlock closes the lock it paired with, so each accepted write lock
    // gets its own record. The record comes first: it reads the pixels the
    // guest wrote, and surface_pixels_changed advances the revision they
    // belong to.
    const uint32_t before = ddraw_surface_revision(s->id);
    bool wrote = lock_shadow_record(s, unlock_rect, unlock_ptr);
    if (wrote)
        ddraw_note_cpu_write_impl(s);
    // The screen and the renderer are told once, when the last lock is gone:
    // a nested Unlock leaves the guest still holding a pointer.
    if (!s->lock_count) {
        surface_pixels_changed(s);
        // The diff published what this lock wrote, so the baseline it brought
        // up to date is current at the revision that made.
        baseline_note_revision(s, before);
    }
    com_ret(c, DD_OK);
}

DX_STUB(Surface_UpdateOverlay, DDERR_NOTAOVERLAYSURFACE)
DX_STUB(Surface_UpdateOverlayDisplay, DDERR_NOTAOVERLAYSURFACE)
DX_STUB(Surface_UpdateOverlayZOrder, DDERR_NOTAOVERLAYSURFACE)

// --- IDirectDrawSurface2 additions
void Surface_GetDDInterface(X86 *c) {
    ComObj *s = this_surface(c);
    uint32_t out = arg(c, 1);
    if (!s || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    ComObj *dd = s->owner_dd ? com_get(s->owner_dd) : nullptr;
    if (!dd) {
        com_out_ptr(out, 0);
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    com_addref(dd);
    com_out_ptr(out, com_view(dd, IF_DIRECTDRAW2));
    com_ret(c, DD_OK);
}

void Surface_PageLock(X86 *c) {
    com_ret(c, DD_OK);
} // guest memory never moves
void Surface_PageUnlock(X86 *c) {
    com_ret(c, DD_OK);
}

// --- IDirectDrawSurface3 addition
void Surface_SetSurfaceDesc(X86 *c) {
    ComObj *s = this_surface(c);
    uint32_t desc = arg(c, 1);
    if (!s || !desc || !gm_valid(desc, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // The descriptor itself has to be readable before any field is touched.
    bool v2 = desc_is_v2(desc, this_is_v2_iface(c));
    if (!gm_valid(desc, v2 ? DDSD2_SIZE : DDSD_SIZE)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    uint32_t flags = rd32(desc + DDSD_OFF_dwFlags);
    // Only the documented use is honoured: pointing a system-memory surface at
    // guest memory the caller owns. Anything else would silently change a
    // surface's shape under the guest's own cached pitch.
    if (flags & DDSD_LPSURFACE) {
        uint32_t p = rd32(desc + DDSD_OFF_lpSurface);
        // The replacement pitch arrives with the pointer, so the span to
        // validate is the new pitch times the height, not the old one. Both
        // are guest-supplied, so the product is taken in 64 bits.
        uint32_t new_pitch = (flags & DDSD_PITCH) ? rd32(desc + DDSD_OFF_lPitch) : s->pitch;
        uint32_t row = s->width * bytes_per_pixel(s->bpp);
        if (!p || !new_pitch || new_pitch < row) {
            com_ret(c, DDERR_INVALIDPARAMS);
            return;
        }
        uint64_t span = (uint64_t)new_pitch * s->height;
        if (!span || span > (uint64_t)GUEST_SIZE || !gm_fits(p, span)) {
            com_ret(c, DDERR_INVALIDPARAMS);
            return;
        }
        // The memory behind this surface is about to be replaced, and if the
        // device has been rendering into it the host is holding a scene for
        // the old buffer. Ask for it back while that buffer is still there,
        // then hand the host the new pointer - a mirror left addressing freed
        // storage would write a later scene into whatever took its place.
        d3d_flush_surface(s, "SetSurfaceDesc");
        // The surface is about to address different memory: preserve whatever
        // a frame still holds, then say the storage generation moved.
        ddraw_preserve_before_storage_change(s);
        if (s->pixels && s->owns_pixels)
            heap_free(s->pixels);
        s->pixels = p;
        s->pitch = new_pitch;
        s->pixels_bytes = (uint32_t)span;
        s->owns_pixels = false; // the guest owns this buffer, not the shim
        ddraw_storage_changed(s);
        d3d_retarget_surface(s);
        com_ret(c, DD_OK);
        return;
    }
    log_once("ddraw.setsurfacedesc", "ddraw: SetSurfaceDesc with flags %08x is not supported",
             flags);
    com_ret(c, DDERR_UNSUPPORTED);
}

// --- IDirectDrawSurface4 additions
DX_STUB(Surface_SetPrivateData, DDERR_UNSUPPORTED)
DX_STUB(Surface_GetPrivateData, DDERR_NOTFOUND)
DX_STUB(Surface_FreePrivateData, DDERR_NOTFOUND)

void Surface_GetUniquenessValue(X86 *c) {
    ComObj *s = this_surface(c);
    uint32_t out = arg(c, 1);
    if (!s || !out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    wr32(out, 1);
    com_ret(c, DD_OK);
}
void Surface_ChangeUniquenessValue(X86 *c) {
    com_ret(c, DD_OK);
}

// ---------------------------------------------------------------------------
// Surface vtables. Slots 0..35 are shared by every version; each later
// interface appends its own.
// ---------------------------------------------------------------------------
#define SURFACE_COMMON_SLOTS                                                                       \
    {"QueryInterface", 3, com_QueryInterface}, {"AddRef", 1, Surface_AddRef},                      \
        {"Release", 1, Surface_Release}, {"AddAttachedSurface", 2, Surface_AddAttachedSurface},    \
        {"AddOverlayDirtyRect", 2, Surface_AddOverlayDirtyRect}, {"Blt", 6, Surface_Blt},          \
        {"BltBatch", 4, Surface_BltBatch}, {"BltFast", 6, Surface_BltFast},                        \
        {"DeleteAttachedSurface", 3, Surface_DeleteAttachedSurface},                               \
        {"EnumAttachedSurfaces", 3, Surface_EnumAttachedSurfaces},                                 \
        {"EnumOverlayZOrders", 4, Surface_EnumOverlayZOrders}, {"Flip", 3, Surface_Flip},          \
        {"GetAttachedSurface", 3, Surface_GetAttachedSurface},                                     \
        {"GetBltStatus", 2, Surface_GetBltStatus}, {"GetCaps", 2, Surface_GetCaps},                \
        {"GetClipper", 2, Surface_GetClipper}, {"GetColorKey", 3, Surface_GetColorKey},            \
        {"GetDC", 2, Surface_GetDC}, {"GetFlipStatus", 2, Surface_GetFlipStatus},                  \
        {"GetOverlayPosition", 3, Surface_GetOverlayPosition},                                     \
        {"GetPalette", 2, Surface_GetPalette}, {"GetPixelFormat", 2, Surface_GetPixelFormat},      \
        {"GetSurfaceDesc", 2, Surface_GetSurfaceDesc}, {"Initialize", 3, Surface_Initialize},      \
        {"IsLost", 1, Surface_IsLost}, {"Lock", 5, Surface_Lock},                                  \
        {"ReleaseDC", 2, Surface_ReleaseDC}, {"Restore", 1, Surface_Restore},                      \
        {"SetClipper", 2, Surface_SetClipper}, {"SetColorKey", 3, Surface_SetColorKey},            \
        {"SetOverlayPosition", 3, Surface_SetOverlayPosition},                                     \
        {"SetPalette", 2, Surface_SetPalette}, {"Unlock", 2, Surface_Unlock},                      \
        {"UpdateOverlay", 6, Surface_UpdateOverlay},                                               \
        {"UpdateOverlayDisplay", 2, Surface_UpdateOverlayDisplay}, {                               \
        "UpdateOverlayZOrder", 3, Surface_UpdateOverlayZOrder                                      \
    }

const ComMethod g_surface1[] = {SURFACE_COMMON_SLOTS};

const ComMethod g_surface2[] = {
    SURFACE_COMMON_SLOTS,
    {"GetDDInterface", 2, Surface_GetDDInterface},
    {"PageLock", 2, Surface_PageLock},
    {"PageUnlock", 2, Surface_PageUnlock},
};

const ComMethod g_surface3[] = {
    SURFACE_COMMON_SLOTS,
    {"GetDDInterface", 2, Surface_GetDDInterface},
    {"PageLock", 2, Surface_PageLock},
    {"PageUnlock", 2, Surface_PageUnlock},
    {"SetSurfaceDesc", 3, Surface_SetSurfaceDesc},
};

const ComMethod g_surface4[] = {
    SURFACE_COMMON_SLOTS,
    {"GetDDInterface", 2, Surface_GetDDInterface},
    {"PageLock", 2, Surface_PageLock},
    {"PageUnlock", 2, Surface_PageUnlock},
    {"SetSurfaceDesc", 3, Surface_SetSurfaceDesc},
    {"SetPrivateData", 5, Surface_SetPrivateData},
    {"GetPrivateData", 4, Surface_GetPrivateData},
    {"FreePrivateData", 2, Surface_FreePrivateData},
    {"GetUniquenessValue", 2, Surface_GetUniquenessValue},
    {"ChangeUniquenessValue", 1, Surface_ChangeUniquenessValue},
};

// ===========================================================================
// IDirectDrawPalette
// ===========================================================================
void Palette_GetCaps(X86 *c) {
    ComObj *p = com_this_arg(c);
    uint32_t out = arg(c, 1);
    if (!p || p->kind != K_PALETTE || !out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    wr32(out, p->pal_flags | DDPCAPS_ALLOW256);
    com_ret(c, DD_OK);
}

void Palette_GetEntries(X86 *c) {
    ComObj *p = com_this_arg(c);
    uint32_t base = arg(c, 2), count = arg(c, 3), out = arg(c, 4);
    if (!p || p->kind != K_PALETTE || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (base > 256 || count > 256 - base) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (!gm_fits_n(out, count, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    for (uint32_t i = 0; i < count; ++i) {
        uint32_t v = p->pal[base + i];
        uint32_t a = out + i * 4;
        wr8(a + 0, (uint8_t)(v >> 16)); // peRed
        wr8(a + 1, (uint8_t)(v >> 8));  // peGreen
        wr8(a + 2, (uint8_t)v);         // peBlue
        wr8(a + 3, 0);                  // peFlags
    }
    com_ret(c, DD_OK);
}

DX_STUB(Palette_Initialize, DDERR_INVALIDOBJECT) // already initialised

// Reads `count` PALETTEENTRY records into a palette object.
void palette_load(ComObj *p, uint32_t base, uint32_t count, uint32_t src) {
    for (uint32_t i = 0; i < count; ++i) {
        uint32_t a = src + i * 4;
        p->pal[base + i] =
            ((uint32_t)rd8(a + 0) << 16) | ((uint32_t)rd8(a + 1) << 8) | (uint32_t)rd8(a + 2);
    }
}

// Update a validated palette range and invalidate affected resolved texture colors.
// Record palette versions so queued frames keep the colors they originally referenced.
void Palette_SetEntries(X86 *c) {
    ComObj *p = com_this_arg(c);
    uint32_t base = arg(c, 2), count = arg(c, 3), src = arg(c, 4);
    if (!p || p->kind != K_PALETTE || !src) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (base > 256 || count > 256 - base) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (!gm_fits_n(src, count, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    palette_load(p, base, count, src);
    // The colours a record was drawn against are gone as of this write, so
    // the version they belong to is closed and a new one begins.
    note_palette_write();
    // And if this palette is what the screen is seen through, the frame has
    // changed: a fade or a cycle is a run of frames whose only change is this.
    note_palette_changed_on_screen(p);
    // Every surface this palette drives has just changed colour, so anything
    // holding a resolved copy of those pixels has to be given them again even
    // though no pixel moved: the screen for a visible surface, the renderer
    // for a texture. A hardware driver reads the palette when it samples, so
    // the change is simply live; expanding at upload time is what makes a
    // refresh necessary here.
    uint32_t n = com_object_count();
    for (uint32_t id = 1; id <= n; ++id) {
        ComObj *s = com_get(id);
        if (!s || s->kind != K_SURFACE || effective_palette(s) != p)
            continue;
        if (s->is_primary)
            ddraw_present(s);
        if (s->texture_handle) {
            // The indices did not move; what they RESOLVE to did, and the
            // renderer holds expanded pixels. That is a new content revision,
            // and without it this upload arrives under a revision some frame
            // may be holding - which the renderer now refuses, so an 8-bit
            // texture on the display palette would never fade at all.
            ddraw_before_write(s);
            ddraw_after_write(s);
            d3d_upload_texture(s);
        }
    }
    com_ret(c, DD_OK);
}

const ComMethod g_palette[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetCaps", 2, Palette_GetCaps},
    {"GetEntries", 5, Palette_GetEntries},
    {"Initialize", 4, Palette_Initialize},
    {"SetEntries", 5, Palette_SetEntries},
};

// ===========================================================================
// IDirectDrawClipper
// ===========================================================================
void Clipper_GetClipList(X86 *c) {
    ComObj *cl = com_this_arg(c);
    uint32_t out = arg(c, 2), size_addr = arg(c, 3);
    if (!cl || cl->kind != K_CLIPPER) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    // RGNDATAHEADER (32 bytes) followed by the rectangles.
    uint32_t nrects = (uint32_t)(cl->clip_rects.size() / 4);
    uint64_t need64 = 32ull + (uint64_t)nrects * 16ull;
    if (need64 > (uint64_t)GUEST_SIZE) {
        com_ret(c, DDERR_GENERIC);
        return;
    }
    uint32_t need = (uint32_t)need64;
    if (!out) {
        if (size_addr && gm_valid(size_addr, 4))
            wr32(size_addr, need);
        com_ret(c, DD_OK);
        return;
    }
    if (!size_addr || !gm_valid(size_addr, 4) || rd32(size_addr) < need) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (!gm_fits(out, need)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    gm_zero(out, need);
    wr32(out + 0, 32);     // dwSize
    wr32(out + 4, 1);      // iType = RDH_RECTANGLES
    wr32(out + 8, nrects); // nCount
    wr32(out + 12, nrects * 16);
    for (uint32_t i = 0; i < nrects * 4; ++i)
        wr32(out + 32 + i * 4, (uint32_t)cl->clip_rects[i]);
    wr32(size_addr, need);
    com_ret(c, DD_OK);
}

void Clipper_GetHWnd(X86 *c) {
    ComObj *cl = com_this_arg(c);
    uint32_t out = arg(c, 1);
    if (!cl || cl->kind != K_CLIPPER || !out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    wr32(out, cl->clip_hwnd);
    com_ret(c, DD_OK);
}

DX_STUB(Clipper_Initialize, DDERR_INVALIDOBJECT)

void Clipper_IsClipListChanged(X86 *c) {
    uint32_t out = arg(c, 1);
    if (!out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    wr32(out, 0);
    com_ret(c, DD_OK);
}

void Clipper_SetClipList(X86 *c) {
    ComObj *cl = com_this_arg(c);
    uint32_t rgn = arg(c, 1);
    if (!cl || cl->kind != K_CLIPPER) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    cl->clip_rects.clear();
    if (rgn && gm_valid(rgn, 32)) {
        uint32_t n = rd32(rgn + 8);
        if (n > 4096)
            n = 4096;
        if (gm_fits_n(rgn + 32, n, 16)) {
            for (uint32_t i = 0; i < n * 4; ++i)
                cl->clip_rects.push_back((int32_t)rd32(rgn + 32 + i * 4));
        }
    }
    com_ret(c, DD_OK);
}

void Clipper_SetHWnd(X86 *c) {
    ComObj *cl = com_this_arg(c);
    if (!cl || cl->kind != K_CLIPPER) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    cl->clip_hwnd = arg(c, 2);
    cl->clip_rects.clear();
    com_ret(c, DD_OK);
}

const ComMethod g_clipper[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetClipList", 4, Clipper_GetClipList},
    {"GetHWnd", 2, Clipper_GetHWnd},
    {"Initialize", 3, Clipper_Initialize},
    {"IsClipListChanged", 2, Clipper_IsClipListChanged},
    {"SetClipList", 3, Clipper_SetClipList},
    {"SetHWnd", 3, Clipper_SetHWnd},
};

// ===========================================================================
// IDirectDrawColorControl
//
// An interface on a surface, not an object of its own: the DX6 SDK exposes it
// through QueryInterface on the surface that owns the overlay or the primary,
// so the controls live on the ComObj and both views share one refcount.
//
// DDCOLORCONTROL is ten dwords: dwSize, dwFlags, lBrightness, lContrast,
// lHue, lSaturation, lSharpness, lGamma, lColorEnable, dwReserved1.
// ===========================================================================
void CC_GetColorControls(X86 *c) {
    ComObj *s = this_surface(c);
    uint32_t p = arg(c, 1);
    if (!s || !p || !gm_valid(p, 8)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // dwSize is the caller's declaration of the structure it passed. The
    // driver validates it and fills in nothing when it disagrees, so a caller
    // built against a different SDK is rejected rather than corrupted.
    if (rd32(p + DDCC_OFF_dwSize) != DDCOLORCONTROL_SIZE || !gm_valid(p, DDCOLORCONTROL_SIZE)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    wr32(p + DDCC_OFF_dwFlags, s->cc_flags);
    wr32(p + DDCC_OFF_lBrightness, (uint32_t)s->cc_brightness);
    wr32(p + DDCC_OFF_lContrast, (uint32_t)s->cc_contrast);
    wr32(p + DDCC_OFF_lHue, (uint32_t)s->cc_hue);
    wr32(p + DDCC_OFF_lSaturation, (uint32_t)s->cc_saturation);
    wr32(p + DDCC_OFF_lSharpness, (uint32_t)s->cc_sharpness);
    wr32(p + DDCC_OFF_lGamma, (uint32_t)s->cc_gamma);
    wr32(p + DDCC_OFF_lColorEnable, (uint32_t)s->cc_colorenable);
    wr32(p + DDCC_OFF_dwReserved1, 0);
    com_ret(c, DD_OK);
}

void CC_SetColorControls(X86 *c) {
    ComObj *s = this_surface(c);
    uint32_t p = arg(c, 1);
    if (!s || !p || !gm_valid(p, 8)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (rd32(p + DDCC_OFF_dwSize) != DDCOLORCONTROL_SIZE || !gm_valid(p, DDCOLORCONTROL_SIZE)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    uint32_t f = rd32(p + DDCC_OFF_dwFlags);
    if (f & ~DDCOLOR_ALL) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // Only the fields the flags name are read; the rest keep their values.
    if (f & DDCOLOR_BRIGHTNESS)
        s->cc_brightness = (int32_t)rd32(p + DDCC_OFF_lBrightness);
    if (f & DDCOLOR_CONTRAST)
        s->cc_contrast = (int32_t)rd32(p + DDCC_OFF_lContrast);
    if (f & DDCOLOR_HUE)
        s->cc_hue = (int32_t)rd32(p + DDCC_OFF_lHue);
    if (f & DDCOLOR_SATURATION)
        s->cc_saturation = (int32_t)rd32(p + DDCC_OFF_lSaturation);
    if (f & DDCOLOR_SHARPNESS)
        s->cc_sharpness = (int32_t)rd32(p + DDCC_OFF_lSharpness);
    if (f & DDCOLOR_GAMMA)
        s->cc_gamma = (int32_t)rd32(p + DDCC_OFF_lGamma);
    if (f & DDCOLOR_COLORENABLE)
        s->cc_colorenable = (int32_t)rd32(p + DDCC_OFF_lColorEnable);
    s->cc_flags |= f;
    com_ret(c, DD_OK);
}

const ComMethod g_colorcontrol[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetColorControls", 2, CC_GetColorControls},
    {"SetColorControls", 2, CC_SetColorControls},
};

// ===========================================================================
// IDirectDraw
// ===========================================================================
void DD_Compact(X86 *c) {
    com_ret(c, DD_OK);
}

void DD_CreateClipper(X86 *c) {
    ComObj *dd = this_ddraw(c);
    uint32_t out = arg(c, 2);
    if (!dd || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    ComObj *cl = com_new(K_CLIPPER);
    uint32_t view = com_view(cl, IF_DDCLIPPER);
    if (!view) {
        com_release(cl);
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    com_out_ptr(out, view);
    com_ret(c, DD_OK);
}

void DD_CreatePalette(X86 *c) {
    ComObj *dd = this_ddraw(c);
    uint32_t flags = arg(c, 1);
    uint32_t table = arg(c, 2);
    uint32_t out = arg(c, 3);
    if (!dd || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    ComObj *p = com_new(K_PALETTE);
    p->pal_flags = flags;
    if (table && gm_valid(table, 256 * 4)) {
        palette_load(p, 0, 256, table);
        note_palette_write();
    }
    uint32_t view = com_view(p, IF_DDPALETTE);
    if (!view) {
        com_release(p);
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    com_out_ptr(out, view);
    com_ret(c, DD_OK);
}

// The shared body of IDirectDraw::CreateSurface and IDirectDraw4's.
void create_surface(X86 *c, bool v2_iface) {
    ComObj *dd = this_ddraw(c);
    uint32_t desc = arg(c, 1);
    uint32_t out = arg(c, 2);
    if (!dd || !desc || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    com_out_ptr(out, 0);
    bool v2 = desc_is_v2(desc, v2_iface);
    if (!gm_valid(desc, v2 ? DDSD2_SIZE : DDSD_SIZE)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }

    uint32_t flags = rd32(desc + DDSD_OFF_dwFlags);
    uint32_t caps = rd32(desc + desc_caps_off());
    if (!(flags & DDSD_CAPS)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }

    ComObj *s = com_new(K_SURFACE);
    s->caps = caps;
    s->owner_dd = dd->id;

    if (caps & DDSCAPS_PRIMARYSURFACE) {
        if (!dd->mode_set) {
            // Without SetDisplayMode the primary takes the desktop mode. The
            // shim has no desktop, so the default mode stands in and is named.
            log_once("ddraw.primary.nomode",
                     "ddraw: primary surface created before SetDisplayMode; "
                     "using %ux%ux%u",
                     640u, 480u, 8u);
            dd->mode_w = 640;
            dd->mode_h = 480;
            dd->mode_bpp = 8;
        }
        s->width = dd->mode_w;
        s->height = dd->mode_h;
        s->bpp = dd->mode_bpp;
        s->is_primary = true;
        g_display_surface = s->id;
    } else {
        if (!(flags & DDSD_WIDTH) || !(flags & DDSD_HEIGHT)) {
            com_release(s);
            com_ret(c, DDERR_INVALIDPARAMS);
            return;
        }
        s->width = rd32(desc + DDSD_OFF_dwWidth);
        s->height = rd32(desc + DDSD_OFF_dwHeight);
        s->bpp = dd->mode_bpp ? dd->mode_bpp : 8;
        if (flags & DDSD_PIXELFORMAT) {
            uint32_t pf = desc + DDSD_OFF_ddpfPixelFormat;
            uint32_t pf_flags = rd32(pf + DDPF_OFF_dwFlags);
            uint32_t bits = rd32(pf + DDPF_OFF_dwRGBBitCount);
            if (pf_flags & DDPF_FOURCC) {
                // A FourCC the driver does not have is a pixel-format
                // refusal, not a surface-type one. GetFourCCCodes reports
                // none and EnumTextureFormats advertises none, so a caller
                // asking for one is asking outside the advertised set and
                // will retry with a format that was advertised.
                // DDERR_INVALIDSURFACETYPE would instead tell it the surface
                // caps were wrong, and it would give up.
                uint32_t fcc = rd32(pf + DDPF_OFF_dwFourCC);
                char txt[5] = {(char)(fcc & 0xff), (char)((fcc >> 8) & 0xff),
                               (char)((fcc >> 16) & 0xff), (char)((fcc >> 24) & 0xff), 0};
                for (int i = 0; i < 4; i++)
                    if (txt[i] < 0x20 || txt[i] > 0x7e)
                        txt[i] = '.';
                log_once("ddraw.fourcc",
                         "ddraw: CreateSurface FourCC '%s' (%08x) is not an "
                         "advertised pixel format: DDERR_INVALIDPIXELFORMAT",
                         txt, fcc);
                com_release(s);
                com_ret(c, DDERR_INVALIDPIXELFORMAT);
                return;
            }
            if (bits)
                s->bpp = bits;
        }
        if (flags & DDSD_ZBUFFERBITDEPTH)
            s->bpp = rd32(desc + DDSD_OFF_dwMipMapCount);
    }
    if (!s->width || !s->height) {
        com_release(s);
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    set_rgb_masks(s);
    // Honour an explicit RGB mask so a 16-bit 5-5-5 surface is not silently
    // reported as 5-6-5.
    if ((flags & DDSD_PIXELFORMAT) && s->bpp > 8) {
        uint32_t pf = desc + DDSD_OFF_ddpfPixelFormat;
        uint32_t rm = rd32(pf + DDPF_OFF_dwRBitMask);
        if (rm) {
            s->rmask = rm;
            s->gmask = rd32(pf + DDPF_OFF_dwGBitMask);
            s->bmask = rd32(pf + DDPF_OFF_dwBBitMask);
            s->amask = rd32(pf + DDPF_OFF_dwRGBAlphaBitMask);
        }
    }
    // A colour key can be set when the surface is created, not only through
    // SetColorKey, and dropping it makes every later keyed blit copy the whole
    // sprite: that is an opaque block around a keyed cursor. The two key
    // fields sit at the same offsets in DDSURFACEDESC and DDSURFACEDESC2, so
    // one read serves both.
    if (flags & DDSD_CKSRCBLT) {
        s->ckey_src_lo = rd32(desc + DDSD_OFF_ckSrcBlt + DDCK_OFF_lo);
        s->ckey_src_hi = rd32(desc + DDSD_OFF_ckSrcBlt + DDCK_OFF_hi);
        s->has_ckey_src = true;
    }
    if (flags & DDSD_CKDESTBLT) {
        s->ckey_dst_lo = rd32(desc + DDSD_OFF_ckDestBlt + DDCK_OFF_lo);
        s->ckey_dst_hi = rd32(desc + DDSD_OFF_ckDestBlt + DDCK_OFF_hi);
        s->has_ckey_dst = true;
    }

    if (!surface_alloc_pixels(s)) {
        com_release(s);
        com_ret(c, DDERR_OUTOFMEMORY);
        return;
    }

    // A complex flip chain: build dwBackBufferCount back buffers behind the
    // primary, each attached to the one in front of it.
    uint32_t nback = (flags & DDSD_BACKBUFFERCOUNT) ? rd32(desc + DDSD_OFF_dwBackBufferCount) : 0;
    if (nback > 8) {
        log_once("ddraw.backbuffers", "ddraw: %u back buffers requested; capping at 8", nback);
        nback = 8;
    }
    ComObj *tail = s;
    for (uint32_t i = 0; i < nback; ++i) {
        ComObj *b = com_new(K_SURFACE);
        b->implicit_backbuffer = true;
        b->owner_dd = dd->id;
        b->width = s->width;
        b->height = s->height;
        b->bpp = s->bpp;
        b->rmask = s->rmask;
        b->gmask = s->gmask;
        b->bmask = s->bmask;
        b->amask = s->amask;
        b->caps = (caps & ~(DDSCAPS_PRIMARYSURFACE | DDSCAPS_VISIBLE | DDSCAPS_FRONTBUFFER)) |
                  DDSCAPS_BACKBUFFER | DDSCAPS_FLIP;
        if (!surface_alloc_pixels(b)) {
            com_release(b);
            com_release(s);
            com_ret(c, DDERR_OUTOFMEMORY);
            return;
        }
        tail->back_obj = b->id;
        b->front_obj = s->id;
        tail = b;
        dd->surfaces.push_back(b->id);
    }
    dd->surfaces.push_back(s->id);
    ComIface want = v2_iface ? IF_DDSURFACE4 : IF_DDSURFACE;
    uint32_t view = com_view(s, want);
    if (!view) {
        com_release(s);
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    // The caller's own description is updated with what it actually got, which
    // is how a guest learns the pitch without locking.
    fill_desc(desc, s, v2, 0);
    com_out_ptr(out, view);
    LOGV("ddraw: created a %ux%ux%u surface (caps %08x, pitch %u, pixels %08x)%s", s->width,
         s->height, s->bpp, s->caps, s->pitch, s->pixels, s->is_primary ? " [primary]" : "");
    com_ret(c, DD_OK);
}

// Keep every refusal, including repeated capability probes. The general COM
// error logger deduplicates by HRESULT and cannot identify the requested surface.
void create_surface_with_diagnostic(X86 *c, bool v2_iface) {
    create_surface(c, v2_iface);
    const uint32_t hr = c->r[R_EAX];
    if (!(hr & 0x80000000u))
        return;
    const uint32_t desc = arg(c, 1);
    const bool readable = desc && gm_valid(desc, DDSD_SIZE);
    const uint32_t flags = readable ? rd32(desc + DDSD_OFF_dwFlags) : 0;
    const uint32_t caps = readable ? rd32(desc + desc_caps_off()) : 0;
    const uint32_t pf = desc + DDSD_OFF_ddpfPixelFormat;
    char format[384] = "null";
    if (readable && (flags & DDSD_PIXELFORMAT))
        snprintf(format, sizeof format,
                 "{\"size\":%u,\"flags\":%u,\"fourcc\":%u,\"bpp\":%u,"
                 "\"rmask\":%u,\"gmask\":%u,\"bmask\":%u,\"amask\":%u}",
                 rd32(pf + DDPF_OFF_dwSize), rd32(pf + DDPF_OFF_dwFlags),
                 rd32(pf + DDPF_OFF_dwFourCC), rd32(pf + DDPF_OFF_dwRGBBitCount),
                 rd32(pf + DDPF_OFF_dwRBitMask), rd32(pf + DDPF_OFF_dwGBitMask),
                 rd32(pf + DDPF_OFF_dwBBitMask), rd32(pf + DDPF_OFF_dwRGBAlphaBitMask));
    ComObj *dd = this_ddraw(c);
    LOGW("ddraw: CreateSurface failure {\"interface\":\"%s\",\"hresult\":\"0x%08x\","
         "\"surface\":\"%s\",\"descriptor_readable\":%s,\"descriptor_flags\":%u,"
         "\"caps\":%u,\"requested_width\":%u,\"requested_height\":%u,"
         "\"requested_format\":%s,\"display_mode\":[%u,%u,%u]}",
         v2_iface ? "IDirectDraw4" : "IDirectDraw", hr,
         !readable || !(flags & DDSD_CAPS)
             ? "unknown"
             : ((caps & DDSCAPS_PRIMARYSURFACE) ? "primary" : "offscreen"),
         readable ? "true" : "false", flags, caps,
         readable && (flags & DDSD_WIDTH) ? rd32(desc + DDSD_OFF_dwWidth) : 0,
         readable && (flags & DDSD_HEIGHT) ? rd32(desc + DDSD_OFF_dwHeight) : 0, format,
         dd ? dd->mode_w : 0, dd ? dd->mode_h : 0, dd ? dd->mode_bpp : 0);
}

void DD_CreateSurface(X86 *c) {
    create_surface_with_diagnostic(c, false);
}
void DD_CreateSurface4(X86 *c) {
    create_surface_with_diagnostic(c, true);
}

void DD_DuplicateSurface(X86 *c) {
    ComObj *dd = this_ddraw(c);
    ComObj *src = surface_arg(c, 1);
    uint32_t out = arg(c, 2);
    if (!dd || !src || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    ComObj *s = com_new(K_SURFACE);
    s->owner_dd = dd->id;
    s->caps = src->caps & ~(DDSCAPS_PRIMARYSURFACE | DDSCAPS_FLIP | DDSCAPS_FRONTBUFFER);
    s->width = src->width;
    s->height = src->height;
    s->bpp = src->bpp;
    s->rmask = src->rmask;
    s->gmask = src->gmask;
    s->bmask = src->bmask;
    s->amask = src->amask;
    if (!surface_alloc_pixels(s)) {
        com_release(s);
        com_ret(c, DDERR_OUTOFMEMORY);
        return;
    }
    // The copy reads the source with the CPU, so anything the device drew into
    // it has to be there first.
    d3d_read_surface(src, nullptr, HOST_READ_DUPLICATE);
    if (src->pixels && s->pixels)
        memcpy(gm_ptr(s->pixels), gm_ptr(src->pixels),
               std::min(s->pixels_bytes, src->pixels_bytes));
    ComIface f = com_iface_of(arg(c, 0));
    uint32_t view = com_view(s, f == IF_DIRECTDRAW4 ? IF_DDSURFACE4 : IF_DDSURFACE);
    if (!view) {
        com_release(s);
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    com_out_ptr(out, view);
    com_ret(c, DD_OK);
}

// Enumerate guest display modes through the supplied callback, applying its descriptor
// filter. These modes describe game surfaces; the host drawable may have a different size.
void DD_EnumDisplayModes(X86 *c) {
    ComObj *dd = this_ddraw(c);
    uint32_t match = arg(c, 2);
    uint32_t ctx = arg(c, 3);
    uint32_t cb = arg(c, 4);
    if (!dd || !cb) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    bool v2 = com_iface_of(arg(c, 0)) == IF_DIRECTDRAW4;

    // A caller may restrict the enumeration by width, height or bit depth.
    uint32_t want_flags = 0, want_w = 0, want_h = 0, want_bpp = 0;
    if (match && gm_valid(match, DDSD_SIZE)) {
        want_flags = rd32(match + DDSD_OFF_dwFlags);
        if (want_flags & DDSD_WIDTH)
            want_w = rd32(match + DDSD_OFF_dwWidth);
        if (want_flags & DDSD_HEIGHT)
            want_h = rd32(match + DDSD_OFF_dwHeight);
        if (want_flags & DDSD_PIXELFORMAT)
            want_bpp = rd32(match + DDSD_OFF_ddpfPixelFormat + DDPF_OFF_dwRGBBitCount);
    }

    for (const Mode &m : modes()) {
        if (want_w && m.w != want_w)
            continue;
        if (want_h && m.h != want_h)
            continue;
        if (want_bpp && m.bpp != want_bpp)
            continue;
        uint32_t desc = scratch(DDSD2_SIZE);
        if (!desc)
            break;
        uint32_t size = v2 ? DDSD2_SIZE : DDSD_SIZE;
        gm_zero(desc, size);
        wr32(desc + DDSD_OFF_dwSize, size);
        wr32(desc + DDSD_OFF_dwFlags, DDSD_WIDTH | DDSD_HEIGHT | DDSD_PITCH | DDSD_PIXELFORMAT |
                                          DDSD_REFRESHRATE | DDSD_CAPS);
        wr32(desc + DDSD_OFF_dwWidth, m.w);
        wr32(desc + DDSD_OFF_dwHeight, m.h);
        wr32(desc + DDSD_OFF_lPitch, pitch_for(m.w, m.bpp));
        wr32(desc + DDSD_OFF_dwMipMapCount, 60); // dwRefreshRate
        wr32(desc + desc_caps_off(), DDSCAPS_VIDEOMEMORY);
        uint32_t pf = desc + DDSD_OFF_ddpfPixelFormat;
        wr32(pf + DDPF_OFF_dwSize, DDPF_SIZE);
        if (m.bpp == 8) {
            wr32(pf + DDPF_OFF_dwFlags, DDPF_RGB | DDPF_PALETTEINDEXED8);
            wr32(pf + DDPF_OFF_dwRGBBitCount, 8);
        } else {
            wr32(pf + DDPF_OFF_dwFlags, DDPF_RGB);
            wr32(pf + DDPF_OFF_dwRGBBitCount, 16);
            wr32(pf + DDPF_OFF_dwRBitMask, 0xf800);
            wr32(pf + DDPF_OFF_dwGBitMask, 0x07e0);
            wr32(pf + DDPF_OFF_dwBBitMask, 0x001f);
        }
        if (guest_call(c, cb, desc, ctx) != DDENUMRET_OK)
            break;
    }
    com_ret(c, DD_OK);
}

void DD_EnumSurfaces(X86 *c) {
    ComObj *dd = this_ddraw(c);
    uint32_t flags = arg(c, 1);
    uint32_t ctx = arg(c, 3);
    uint32_t cb = arg(c, 4);
    if (!dd || !cb) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    bool v2 = com_iface_of(arg(c, 0)) == IF_DIRECTDRAW4;
    ComIface want = v2 ? IF_DDSURFACE4 : IF_DDSURFACE;
    // DDENUMSURFACES_DOESEXIST (2) over the surfaces this device made is the
    // only mode with a defined answer here.
    for (uint32_t id : dd->surfaces) {
        ComObj *s = com_get(id);
        if (!s)
            continue;
        uint32_t desc = scratch(DDSD2_SIZE);
        fill_desc(desc, s, v2, 0);
        uint32_t view = com_view(s, want);
        com_addref(s);
        if (guest_call(c, cb, view, desc, ctx) != DDENUMRET_OK)
            break;
    }
    (void)flags;
    com_ret(c, DD_OK);
}

void DD_FlipToGDISurface(X86 *c) {
    com_ret(c, DD_OK);
}

void DD_GetCaps(X86 *c) {
    uint32_t hw = arg(c, 1), hel = arg(c, 2);
    // dwSize is the caller's; DirectDraw fills only as much as it says.
    for (uint32_t addr : {hw, hel}) {
        if (!addr || !gm_valid(addr, 4))
            continue;
        uint32_t size = rd32(addr);
        if (size < 8 || size > DDCAPS_SIZE || !gm_valid(addr, size))
            continue;
        gm_zero(addr + 4, size - 4);
        wr32(addr + DDCAPS_OFF_dwCaps, DDCAPS_BLT | DDCAPS_BLTCOLORFILL | DDCAPS_BLTSTRETCH |
                                           DDCAPS_COLORKEY | DDCAPS_PALETTE | DDCAPS_3D);
        if (size > DDCAPS_OFF_dwVidMemTotal + 4) {
            wr32(addr + DDCAPS_OFF_dwVidMemTotal, 32u * 1024 * 1024);
            wr32(addr + DDCAPS_OFF_dwVidMemFree, 24u * 1024 * 1024);
        }
    }
    com_ret(c, DD_OK);
}

void DD_GetDisplayMode(X86 *c) {
    ComObj *dd = this_ddraw(c);
    uint32_t out = arg(c, 1);
    if (!dd || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    bool v2 = desc_is_v2(out, com_iface_of(arg(c, 0)) == IF_DIRECTDRAW4);
    uint32_t size = v2 ? DDSD2_SIZE : DDSD_SIZE;
    if (!gm_valid(out, size)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    uint32_t w = dd->mode_w ? dd->mode_w : 640;
    uint32_t h = dd->mode_h ? dd->mode_h : 480;
    uint32_t bpp = dd->mode_bpp ? dd->mode_bpp : 8;
    gm_zero(out, size);
    wr32(out + DDSD_OFF_dwSize, size);
    wr32(out + DDSD_OFF_dwFlags,
         DDSD_WIDTH | DDSD_HEIGHT | DDSD_PITCH | DDSD_PIXELFORMAT | DDSD_REFRESHRATE);
    wr32(out + DDSD_OFF_dwWidth, w);
    wr32(out + DDSD_OFF_dwHeight, h);
    wr32(out + DDSD_OFF_lPitch, pitch_for(w, bpp));
    wr32(out + DDSD_OFF_dwMipMapCount, 60);
    uint32_t pf = out + DDSD_OFF_ddpfPixelFormat;
    wr32(pf + DDPF_OFF_dwSize, DDPF_SIZE);
    if (bpp == 8) {
        wr32(pf + DDPF_OFF_dwFlags, DDPF_RGB | DDPF_PALETTEINDEXED8);
        wr32(pf + DDPF_OFF_dwRGBBitCount, 8);
    } else {
        wr32(pf + DDPF_OFF_dwFlags, DDPF_RGB);
        wr32(pf + DDPF_OFF_dwRGBBitCount, bpp);
        wr32(pf + DDPF_OFF_dwRBitMask, 0xf800);
        wr32(pf + DDPF_OFF_dwGBitMask, 0x07e0);
        wr32(pf + DDPF_OFF_dwBBitMask, 0x001f);
    }
    com_ret(c, DD_OK);
}

void DD_GetFourCCCodes(X86 *c) {
    uint32_t n = arg(c, 1);
    if (n && gm_valid(n, 4))
        wr32(n, 0); // no FourCC formats
    com_ret(c, DD_OK);
}

void DD_GetGDISurface(X86 *c) {
    uint32_t out = arg(c, 1);
    if (out)
        com_out_ptr(out, 0);
    com_ret(c, DDERR_NOTFOUND);
}

void DD_GetMonitorFrequency(X86 *c) {
    uint32_t out = arg(c, 1);
    if (!out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    wr32(out, 60);
    com_ret(c, DD_OK);
}

void DD_GetScanLine(X86 *c) {
    uint32_t out = arg(c, 1);
    if (!out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // A monotonic sweep, so a guest that spins until the beam moves makes
    // progress instead of hanging.
    static uint32_t line = 0;
    ComObj *dd = this_ddraw(c);
    uint32_t h = dd && dd->mode_h ? dd->mode_h : 480;
    line = (line + 1) % h;
    wr32(out, line);
    com_ret(c, DD_OK);
}

void DD_GetVerticalBlankStatus(X86 *c) {
    uint32_t out = arg(c, 1);
    if (!out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // Alternate, for the same reason GetScanLine advances.
    static uint32_t flip = 0;
    wr32(out, (flip ^= 1));
    com_ret(c, DD_OK);
}

DX_STUB(DD_Initialize, DDERR_INVALIDOBJECT) // DirectDrawCreate already did it

// RestoreDisplayMode, and releasing the object that set the mode, put the
// desktop back: GetSystemMetrics and GetDeviceCaps report the desktop fallback
// again until the next SetDisplayMode. A game that switches resolution by
// releasing DirectDraw and re-creating it reads the desktop size between the
// two, and keeps what it read as its screen bounds for edge scrolling and
// window placement in the mode it sets next. The old mode left there had
// every pointer position past the old width or height count as an edge.
void restore_desktop_mode(ComObj *dd) {
    if (!dd->mode_set)
        return;
    dd->mode_set = false;
    LOGV("ddraw: display mode restored to the desktop");
    ddraw_note_mode_impl(0, 0, 0);
}

void ddraw_destroy(ComObj *dd) {
    restore_desktop_mode(dd);
}

void DD_RestoreDisplayMode(X86 *c) {
    ComObj *dd = this_ddraw(c);
    if (!dd) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    restore_desktop_mode(dd);
    com_ret(c, DD_OK);
}

void DD_SetCooperativeLevel(X86 *c) {
    ComObj *dd = this_ddraw(c);
    if (!dd) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    dd->hwnd = arg(c, 1);
    dd->coop_level = arg(c, 2);
    LOGV("ddraw: SetCooperativeLevel(hwnd=%08x, flags=%08x)", dd->hwnd, dd->coop_level);
    com_ret(c, DD_OK);
}

// IDirectDraw::SetDisplayMode takes three arguments; IDirectDraw2 and 4 take
// five. Two entry points, one body.
void set_display_mode(X86 *c, uint32_t w, uint32_t h, uint32_t bpp) {
    ComObj *dd = this_ddraw(c);
    if (!dd) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    bool known = false;
    for (const Mode &m : modes())
        if (m.w == w && m.h == h && m.bpp == bpp)
            known = true;
    if (!known) {
        LOGW("ddraw: SetDisplayMode(%u, %u, %u) is not one of the offered modes", w, h, bpp);
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // AFTER the acceptance check, with the rest of the state changes. A
    // refused SetDisplayMode is a no-op, and a refusal is not hypothetical:
    // RECOMP_DDRAW_MODES without 640x480x8 has the game's very first call
    // refused, and the game does not check the return. Forgetting the cursor
    // there would leave it drawing in the mode it still has with a pointer
    // the shim has thrown away.
    dd->mode_w = w;
    dd->mode_h = h;
    dd->mode_bpp = bpp;
    dd->mode_set = true;
    // The pointer surfaces are rebuilt for the new mode, so whatever was
    // learned about the old ones is stale from here.
    g_cursor_surface = HOST_SURFACE_NONE;
    // A mode change re-creates the primary's memory on real hardware; here the
    // guest is required to re-create its surfaces, exactly as DirectDraw
    // documents, so existing surfaces are left alone.
    LOGV("ddraw: display mode %ux%ux%u", w, h, bpp);
    ddraw_note_mode_impl(w, h, bpp);
    host_set_display_mode((int)w, (int)h, (int)bpp);
    if ((dd->coop_level & 0x11 /* DDSCL_EXCLUSIVE|DDSCL_FULLSCREEN */) == 0x11)
        win32_refresh_display_window(c, dd->hwnd, w, h, bpp);
    com_ret(c, DD_OK);
}

void DD_SetDisplayMode(X86 *c) {
    set_display_mode(c, arg(c, 1), arg(c, 2), arg(c, 3));
}
void DD_SetDisplayMode2(X86 *c) {
    // (dwWidth, dwHeight, dwBPP, dwRefreshRate, dwFlags)
    set_display_mode(c, arg(c, 1), arg(c, 2), arg(c, 3));
}

void DD_WaitForVerticalBlank(X86 *c) {
    com_ret(c, DD_OK);
}

// --- IDirectDraw2 addition
void DD_GetAvailableVidMem(X86 *c) {
    uint32_t total = arg(c, 2), free_ = arg(c, 3);
    if (total && gm_valid(total, 4))
        wr32(total, 32u * 1024 * 1024);
    if (free_ && gm_valid(free_, 4))
        wr32(free_, 24u * 1024 * 1024);
    com_ret(c, DD_OK);
}

// --- IDirectDraw4 additions
void DD_GetSurfaceFromDC(X86 *c) {
    uint32_t dc = arg(c, 1), out = arg(c, 2);
    if (out)
        com_out_ptr(out, 0);
    (void)dc;
    com_ret(c, DDERR_NOTFOUND);
}

void DD_RestoreAllSurfaces(X86 *c) {
    com_ret(c, DD_OK);
}
void DD_TestCooperativeLevel(X86 *c) {
    com_ret(c, DD_OK);
}

void DD_GetDeviceIdentifier(X86 *c) {
    uint32_t out = arg(c, 1);
    if (!out || !gm_valid(out, DDDEVID_SIZE)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    gm_zero(out, DDDEVID_SIZE);
    gm_put_str(out + DDDEVID_OFF_szDriver, "popm.dll", 512);
    gm_put_str(out + DDDEVID_OFF_szDescription, RECOMP_APP_NAME " recompilation device", 512);
    // Version 1.0.0.0.
    wr32(out + DDDEVID_OFF_liDriverVersion + 0, 0);
    wr32(out + DDDEVID_OFF_liDriverVersion + 4, 0x00010000u);
    // Vendor and device stay zero on purpose. The game matches these against
    // a list of late-1990s chipsets (Riva 128, Voodoo2, Rage Pro, G200,
    // Permedia2, Banshee) and takes a per-card workaround path on a hit.
    // Zero means "unrecognised", which is the generic path and the only one
    // whose behaviour this shim can honestly claim to implement.
    com_ret(c, DD_OK);
}

// ---------------------------------------------------------------------------
// DirectDraw vtables
// ---------------------------------------------------------------------------
#define DD_COMMON_SLOTS_HEAD                                                                       \
    {"QueryInterface", 3, com_QueryInterface}, {"AddRef", 1, com_AddRef},                          \
        {"Release", 1, com_Release}, {"Compact", 1, DD_Compact},                                   \
        {"CreateClipper", 4, DD_CreateClipper}, {                                                  \
        "CreatePalette", 5, DD_CreatePalette                                                       \
    }

#define DD_COMMON_SLOTS_TAIL                                                                       \
    {"DuplicateSurface", 3, DD_DuplicateSurface}, {"EnumDisplayModes", 5, DD_EnumDisplayModes},    \
        {"EnumSurfaces", 5, DD_EnumSurfaces}, {"FlipToGDISurface", 1, DD_FlipToGDISurface},        \
        {"GetCaps", 3, DD_GetCaps}, {"GetDisplayMode", 2, DD_GetDisplayMode},                      \
        {"GetFourCCCodes", 3, DD_GetFourCCCodes}, {"GetGDISurface", 2, DD_GetGDISurface},          \
        {"GetMonitorFrequency", 2, DD_GetMonitorFrequency}, {"GetScanLine", 2, DD_GetScanLine},    \
        {"GetVerticalBlankStatus", 2, DD_GetVerticalBlankStatus},                                  \
        {"Initialize", 2, DD_Initialize}, {"RestoreDisplayMode", 1, DD_RestoreDisplayMode}, {      \
        "SetCooperativeLevel", 3, DD_SetCooperativeLevel                                           \
    }

const ComMethod g_ddraw1[] = {
    DD_COMMON_SLOTS_HEAD,
    {"CreateSurface", 4, DD_CreateSurface},
    DD_COMMON_SLOTS_TAIL,
    {"SetDisplayMode", 4, DD_SetDisplayMode}, // 3 args + this
    {"WaitForVerticalBlank", 3, DD_WaitForVerticalBlank},
};

const ComMethod g_ddraw2[] = {
    DD_COMMON_SLOTS_HEAD,
    {"CreateSurface", 4, DD_CreateSurface},
    DD_COMMON_SLOTS_TAIL,
    {"SetDisplayMode", 6, DD_SetDisplayMode2}, // 5 args + this
    {"WaitForVerticalBlank", 3, DD_WaitForVerticalBlank},
    {"GetAvailableVidMem", 4, DD_GetAvailableVidMem},
};

const ComMethod g_ddraw4[] = {
    DD_COMMON_SLOTS_HEAD,
    {"CreateSurface", 4, DD_CreateSurface4}, // DDSURFACEDESC2
    DD_COMMON_SLOTS_TAIL,
    {"SetDisplayMode", 6, DD_SetDisplayMode2},
    {"WaitForVerticalBlank", 3, DD_WaitForVerticalBlank},
    {"GetAvailableVidMem", 4, DD_GetAvailableVidMem},
    {"GetSurfaceFromDC", 3, DD_GetSurfaceFromDC},
    {"RestoreAllSurfaces", 1, DD_RestoreAllSurfaces},
    {"TestCooperativeLevel", 1, DD_TestCooperativeLevel},
    {"GetDeviceIdentifier", 3, DD_GetDeviceIdentifier},
};

// ===========================================================================
// DDRAW.dll exports
// ===========================================================================
void DirectDrawCreate(X86 *c) {
    uint32_t guid = arg(c, 0);
    uint32_t out = arg(c, 1);
    uint32_t outer = arg(c, 2);
    if (!out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (outer) {
        com_ret(c, CLASS_E_NOAGGREGATION);
        return;
    }
    wr32(out, 0);

    // Every GUID names the one device this shim has: null and
    // DDCREATE_HARDWAREONLY alike. A second create returns a fresh object, as
    // DirectDraw does, but both drive the same display.
    ComObj *dd = com_new(K_DDRAW);
    dd->mode_w = 640;
    dd->mode_h = 480;
    dd->mode_bpp = 8;
    uint32_t view = com_view(dd, IF_DIRECTDRAW);
    if (!view) {
        com_release(dd);
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    if (!g_primary_dd)
        g_primary_dd = dd->id;
    wr32(out, view);
    LOGV("ddraw: DirectDrawCreate(guid=%08x) -> %08x", guid, view);
    com_ret(c, DD_OK);
}

// The version 7 factory is discoverable so callers can take their legacy
// DirectDrawCreate/QueryInterface fallback. Do not return an older vtable for
// IID_IDirectDraw7: its callers would invoke incompatible method signatures.
void DirectDrawCreateEx(X86 *c) {
    const uint32_t out = arg(c, 1), iid = arg(c, 2), outer = arg(c, 3);
    if (!out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    wr32(out, 0);
    if (!iid || !gm_valid(iid, 16) || memcmp(gm_ptr(iid), IID_IDirectDraw7_, 16)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (outer) {
        com_ret(c, CLASS_E_NOAGGREGATION);
        return;
    }
    com_ret(c, DDERR_UNSUPPORTED);
}

void enumerate_devices(X86 *c, bool wide, bool extended) {
    uint32_t cb = arg(c, 0);
    uint32_t ctx = arg(c, 1);
    if (!cb || (extended && (arg(c, 2) & ~7u))) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // One primary device, shared with GDI. Extended enumeration includes it
    // regardless of the requested secondary/non-display device flags. Both
    // its GUID and HMONITOR are null, per the DirectDraw callback contract.
    uint32_t strs = scratch(256);
    uint32_t desc_str = strs;
    uint32_t name_str = strs + 128;
    if (wide) {
        gm_put_wstr(desc_str, "Primary Display Driver", 64);
        gm_put_wstr(name_str, "display", 64);
    } else {
        gm_put_str(desc_str, "Primary Display Driver", 128);
        gm_put_str(name_str, "display", 128);
    }
    if (extended) {
        const uint32_t args[] = {0, desc_str, name_str, ctx, 0};
        guest_call(c, cb, args, 5);
    } else
        guest_call(c, cb, 0, desc_str, name_str, ctx);
    com_ret(c, DD_OK);
}

void DirectDrawEnumerateA(X86 *c) {
    enumerate_devices(c, false, false);
}
void DirectDrawEnumerateW(X86 *c) {
    enumerate_devices(c, true, false);
}
void DirectDrawEnumerateExA(X86 *c) {
    enumerate_devices(c, false, true);
}
void DirectDrawEnumerateExW(X86 *c) {
    enumerate_devices(c, true, true);
}

// DirectDrawCreateClipper(dwFlags, lplpDDClipper, pUnkOuter): a clipper with
// no owning device. Not imported by this EXE, but registered because
// GetProcAddress can reach it.
void DirectDrawCreateClipper(X86 *c) {
    uint32_t out = arg(c, 1);
    if (!out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    ComObj *cl = com_new(K_CLIPPER);
    uint32_t view = com_view(cl, IF_DDCLIPPER);
    if (!view) {
        com_release(cl);
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    com_out_ptr(out, view);
    com_ret(c, DD_OK);
}

const ImportShim g_ddraw_exports[] = {
    {"DDRAW.dll", "DirectDrawCreate", 3, DirectDrawCreate},
    {"DDRAW.dll", "DirectDrawCreateEx", 4, DirectDrawCreateEx},
    {"DDRAW.dll", "DirectDrawEnumerateA", 2, DirectDrawEnumerateA},
    {"DDRAW.dll", "DirectDrawEnumerateW", 2, DirectDrawEnumerateW},
    {"DDRAW.dll", "DirectDrawEnumerateExA", 3, DirectDrawEnumerateExA},
    {"DDRAW.dll", "DirectDrawEnumerateExW", 3, DirectDrawEnumerateExW},
    {"DDRAW.dll", "DirectDrawCreateClipper", 3, DirectDrawCreateClipper},
};

} // namespace

// ---------------------------------------------------------------------------
// Registration
// ---------------------------------------------------------------------------
void ddraw_reset() {
    host_d3d_reset_coherence();
    g_clean_base = 0;
    // Every surface went with the arena, and their ids start over.
    baselines().clear();
    g_dirty_count = 0;
    // The scratch block and every surface lived in the arena mem_init just
    // discarded, so the cached addresses must not be reused.
    g_scratch = 0;
    g_scratch_size = 0;
    g_primary_dd = 0;
    g_mode_w = g_mode_h = g_mode_bpp = 0;
}

// Register DirectDraw and related DirectX imports with the guest trampoline dispatcher.
// This installs ABI adapters; the native host supplies their rendering and device services.
void ddraw_register() {
    static bool done = false;
    if (done)
        return;
    done = true;

    com_define(IF_DIRECTDRAW, "DDRAW.dll", "IDirectDraw", g_ddraw1, std::size(g_ddraw1));
    com_define(IF_DIRECTDRAW2, "DDRAW.dll", "IDirectDraw2", g_ddraw2, std::size(g_ddraw2));
    com_define(IF_DIRECTDRAW4, "DDRAW.dll", "IDirectDraw4", g_ddraw4, std::size(g_ddraw4));
    com_define(IF_DDSURFACE, "DDRAW.dll", "IDirectDrawSurface", g_surface1, std::size(g_surface1));
    com_define(IF_DDSURFACE2, "DDRAW.dll", "IDirectDrawSurface2", g_surface2,
               std::size(g_surface2));
    com_define(IF_DDSURFACE3, "DDRAW.dll", "IDirectDrawSurface3", g_surface3,
               std::size(g_surface3));
    com_define(IF_DDSURFACE4, "DDRAW.dll", "IDirectDrawSurface4", g_surface4,
               std::size(g_surface4));
    com_define(IF_DDPALETTE, "DDRAW.dll", "IDirectDrawPalette", g_palette, std::size(g_palette));
    com_define(IF_DDCLIPPER, "DDRAW.dll", "IDirectDrawClipper", g_clipper, std::size(g_clipper));
    com_define(IF_DDCOLORCONTROL, "DDRAW.dll", "IDirectDrawColorControl", g_colorcontrol,
               std::size(g_colorcontrol));

    com_bind(IF_DIRECTDRAW, K_DDRAW);
    com_bind(IF_DIRECTDRAW2, K_DDRAW);
    com_bind(IF_DIRECTDRAW4, K_DDRAW);
    com_bind(IF_DDSURFACE, K_SURFACE);
    com_bind(IF_DDSURFACE2, K_SURFACE);
    com_bind(IF_DDSURFACE3, K_SURFACE);
    com_bind(IF_DDSURFACE4, K_SURFACE);
    com_bind(IF_DDPALETTE, K_PALETTE);
    com_bind(IF_DDCLIPPER, K_CLIPPER);
    com_bind(IF_DDCOLORCONTROL, K_SURFACE);

    com_register_iid(IF_DIRECTDRAW, IID_IDirectDraw_);
    com_register_iid(IF_DIRECTDRAW2, IID_IDirectDraw2_);
    com_register_iid(IF_DIRECTDRAW4, IID_IDirectDraw4_);
    com_register_iid(IF_DDSURFACE, IID_IDirectDrawSurface_);
    com_register_iid(IF_DDSURFACE2, IID_IDirectDrawSurface2_);
    com_register_iid(IF_DDSURFACE3, IID_IDirectDrawSurface3_);
    com_register_iid(IF_DDSURFACE4, IID_IDirectDrawSurface4_);
    com_register_iid(IF_DDPALETTE, IID_IDirectDrawPalette_);
    com_register_iid(IF_DDCLIPPER, IID_IDirectDrawClipper_);
    com_register_iid(IF_DDCOLORCONTROL, IID_IDirectDrawColorControl_);

    com_set_destructor(K_SURFACE, surface_destroy);
    com_set_destructor(K_DDRAW, ddraw_destroy);

    imports_register(g_ddraw_exports, std::size(g_ddraw_exports));
}

// GDI window blits share the primary's mutation recorder and CPU pixel storage.
extern "C" bool ddraw_gdi_primary_active() {
    auto *s = g_display_surface ? com_get(g_display_surface) : nullptr;
    return s && s->kind == K_SURFACE && s->is_primary;
}
namespace {
uint32_t gdi_primary_dc = 0, gdi_primary_surface = 0;
}
extern "C" uint32_t ddraw_gdi_begin_primary() {
    if (!ddraw_gdi_primary_active() || gdi_primary_dc)
        return 0;
    auto *s = com_get(g_display_surface);
    d3d_read_surface(s, nullptr, HOST_READ_GETDC);
    ddraw_before_write(s);
    gdi_primary_dc = gdi_new_dc();
    gdi_primary_surface = s->id;
    int32_t r[4] = {0, 0, int32_t(s->width), int32_t(s->height)};
    lock_shadow_take(s, r, 0, gdi_primary_dc);
    gdi_bind_surface_dc(gdi_primary_dc, int(s->width), int(s->height), int(s->bpp), s->pitch,
                        s->pixels, (effective_palette(s) ? effective_palette(s)->pal : nullptr));
    return gdi_primary_dc;
}
extern "C" void ddraw_gdi_end_primary(uint32_t dc) {
    if (!dc || dc != gdi_primary_dc)
        return;
    auto *s = com_get(gdi_primary_surface);
    const uint32_t before = s ? ddraw_surface_revision(s->id) : 0;
    bool wrote = s && lock_shadow_record(s, nullptr, dc);
    gdi_unbind_surface_dc(dc);
    gdi_primary_dc = 0;
    gdi_primary_surface = 0;
    if (wrote) {
        ddraw_note_cpu_write_impl(s);
        surface_pixels_changed(s);
        baseline_note_revision(s, before);
    }
}
