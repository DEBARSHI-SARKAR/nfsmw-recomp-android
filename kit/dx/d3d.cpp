#include "../mods/pop_mod_api.h"
#include "passes.h"
// d3d.cpp - Direct3D 2/3: the Direct3D object, the device, viewports,
// materials, lights and textures.
//
// This is a recorder, not a rasterizer. Every draw is forwarded to
// host_d3d_draw with the vertex data, the render-state snapshot, the active
// transforms and the texture handle; Task 7's Metal renderer turns that
// command list into pixels. Nothing here rasterizes into a surface, so a
// headless run produces no image and no error.
//
// The game reaches Direct3D through QueryInterface(IID_IDirect3D2) on its
// DirectDraw object, then IDirect3D2::FindDevice for IID_IDirect3DHALDevice
// and CreateDevice on the back buffer. All three are implemented for real:
// static cross-referencing of the EXE shows IID_IDirect3D2 and
// IID_IDirect3DHALDevice are both referenced from code, so this build of the
// game does render through Direct3D rather than a software path.
#include "com.h"
#include "dx.h"
#include "host_api.h"
#include "ddraw.h"
#include "../runtime/memory.h"
#include "../platform/os.h"
#include "../runtime/mods_seam.h"
#include "../mods/sprite_view.h"

#include <stdlib.h>
#include <string.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <iterator>
#include <algorithm>
#include <array>

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

static const uint8_t IID_IDirect3D_[16] =
    IID_BYTES(0x3BBA0080, 0x2421, 0x11CF, 0xA3, 0x1A, 0x00, 0xAA, 0x00, 0xB9, 0x33, 0x56);
static const uint8_t IID_IDirect3D2_[16] =
    IID_BYTES(0x6AAE1EC1, 0x662A, 0x11D0, 0x88, 0x9D, 0x00, 0xAA, 0x00, 0xBB, 0xB7, 0x6A);
// DX6 exposes distinct vtables: Device3 removes SwapTextureHandles, takes
// FVF vertex formats and adds texture-stage methods. These are not IID aliases.
static const uint8_t IID_IDirect3D3_[16] =
    IID_BYTES(0xbb223240, 0xe72b, 0x11d0, 0xa9, 0xb4, 0x00, 0xaa, 0x00, 0xc0, 0x99, 0x3e);
static const uint8_t IID_IDirect3DDevice3_[16] =
    IID_BYTES(0xb0ab3b60, 0x33d7, 0x11d1, 0xa9, 0x81, 0x00, 0xc0, 0x4f, 0xd7, 0xb1, 0x74);
static const uint8_t IID_IDirect3DViewport3_[16] =
    IID_BYTES(0xb0ab3b61, 0x33d7, 0x11d1, 0xa9, 0x81, 0x00, 0xc0, 0x4f, 0xd7, 0xb1, 0x74);
static const uint8_t IID_IDirect3DMaterial3_[16] =
    IID_BYTES(0xca9c46f4, 0xd3c5, 0x11d1, 0xb7, 0x5a, 0x00, 0x60, 0x08, 0x52, 0xb3, 0x12);
// The 9328150x block is NOT in interface-declaration order: the SDK assigns
// Viewport2 the lowest of the four. Getting it wrong makes QueryInterface
// hand back the wrong interface for a valid IID, which is worse than failing.
static const uint8_t IID_IDirect3DDevice2_[16] =
    IID_BYTES(0x93281501, 0x8CF8, 0x11D0, 0x89, 0xAB, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x29);
static const uint8_t IID_IDirect3DViewport2_[16] =
    IID_BYTES(0x93281500, 0x8CF8, 0x11D0, 0x89, 0xAB, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x29);
static const uint8_t IID_IDirect3DMaterial2_[16] =
    IID_BYTES(0x93281503, 0x8CF8, 0x11D0, 0x89, 0xAB, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x29);
static const uint8_t IID_IDirect3DTexture2_[16] =
    IID_BYTES(0x93281502, 0x8CF8, 0x11D0, 0x89, 0xAB, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x29);
// 4417C142, not 4417C145: 4417C145 is IID_IDirect3DExecuteBuffer.
static const uint8_t IID_IDirect3DLight_[16] =
    IID_BYTES(0x4417C142, 0x33AD, 0x11CF, 0x81, 0x6F, 0x00, 0x00, 0xC0, 0x20, 0x15, 0x6E);
// The device GUIDs FindDevice and CreateDevice accept.
static const uint8_t IID_IDirect3DHALDevice_[16] =
    IID_BYTES(0x84E63DE0, 0x46AA, 0x11CF, 0x81, 0x6F, 0x00, 0x00, 0xC0, 0x20, 0x15, 0x6E);
static const uint8_t IID_IDirect3DRGBDevice_[16] =
    IID_BYTES(0xA4665C60, 0x2673, 0x11CF, 0xA3, 0x1A, 0x00, 0xAA, 0x00, 0xB9, 0x33, 0x56);
static const uint8_t IID_IDirect3DRampDevice_[16] =
    IID_BYTES(0xF2086B20, 0x259F, 0x11CF, 0xA3, 0x1A, 0x00, 0xAA, 0x00, 0xB9, 0x33, 0x56);
static const uint8_t IID_IDirect3DMMXDevice_[16] =
    IID_BYTES(0x881949A1, 0xD6F3, 0x11D0, 0x89, 0xAB, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x29);

namespace {

// Handles the guest sees. Distinct ranges so a stray handle is recognisable
// in a log, and never zero, which D3D reserves for "none".
const uint32_t TEXTURE_HANDLE_BASE = 0x00010000u;
const uint32_t MATERIAL_HANDLE_BASE = 0x00020000u;
uint32_t g_next_texture_handle = TEXTURE_HANDLE_BASE;
uint32_t g_next_material_handle = MATERIAL_HANDLE_BASE;

// Last submitted revision per handle; the renderer still owns lease truth.
std::map<uint32_t, uint32_t> &uploaded_revisions() {
    static std::map<uint32_t, uint32_t> revisions;
    return revisions;
}
// handle -> ComObj id, for both kinds. Draws and sprite provenance resolve
// these repeatedly; lookup must not scan every texture loaded by the game.
// Keep IDs rather than pointers so com_get still rejects released objects.
std::unordered_map<uint32_t, uint32_t> &handles() {
    static auto *v = new std::unordered_map<uint32_t, uint32_t>();
    return *v;
}
void bind_handle(uint32_t h, uint32_t id) {
    handles()[h] = id;
}
ComObj *object_for_handle(uint32_t h) {
    const auto it = handles().find(h);
    return it == handles().end() ? nullptr : com_get(it->second);
}

uint32_t g_scratch = 0, g_scratch_size = 0;
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

// The Direct3D interfaces are views on the DirectDraw object.
ComObj *this_d3d(X86 *c) {
    ComObj *o = com_this_arg(c);
    return (o && o->kind == K_DDRAW) ? o : nullptr;
}
ComObj *this_device(X86 *c) {
    ComObj *o = com_this_arg(c);
    return (o && o->kind == K_D3DDEVICE) ? o : nullptr;
}
// Returned interfaces follow the version of the calling device/factory.
bool version3(X86 *c) {
    ComIface f = com_iface_of(arg(c, 0));
    return f == IF_D3D3 || f == IF_D3DDEVICE3;
}
ComIface viewport_iface(X86 *c) {
    return version3(c) ? IF_D3DVIEWPORT3 : IF_D3DVIEWPORT2;
}
uint32_t vertex_type(X86 *c, uint32_t type) {
    if (!version3(c))
        return type;
    // These SDK FVF constants describe the exact legacy 32-byte records.
    // Other layouts must be decoded explicitly, never treated as TL vertices.
    switch (type) {
    case 0x112:
        return D3DVT_VERTEX; // XYZ | NORMAL | TEX1
    case 0x1e2:
        return D3DVT_LVERTEX; // XYZ | RESERVED1 | DIFFUSE | SPECULAR | TEX1
    case 0x1c4:
        return D3DVT_TLVERTEX; // XYZRHW | DIFFUSE | SPECULAR | TEX1
    default:
        return 0;
    }
}
ComObj *this_viewport(X86 *c) {
    ComObj *o = com_this_arg(c);
    return (o && o->kind == K_VIEWPORT) ? o : nullptr;
}
ComObj *this_material(X86 *c) {
    ComObj *o = com_this_arg(c);
    return (o && o->kind == K_MATERIAL) ? o : nullptr;
}
ComObj *this_light(X86 *c) {
    ComObj *o = com_this_arg(c);
    return (o && o->kind == K_LIGHT) ? o : nullptr;
}
// IDirect3DTexture2 is a view on a DirectDraw surface, so `this` is a surface.
ComObj *this_texture(X86 *c) {
    ComObj *o = com_this_arg(c);
    return (o && o->kind == K_SURFACE) ? o : nullptr;
}

// ---------------------------------------------------------------------------
// Device capabilities
// ---------------------------------------------------------------------------
// D3DPRIMCAPS bit groups. The device advertises the full documented set for
// blending, compare and texture-blend, because the game gates on specific
// bits before it will accept a device at all: init_d3d demands particular
// dpcTriCaps blend and alpha-compare bits and rejects the device otherwise.
// Advertising a superset is a promise Task 7's renderer has to keep.
const uint32_t ALL_BLEND_CAPS = 0x00001fffu; // ZERO..BOTHINVSRCALPHA
const uint32_t ALL_CMP_CAPS = 0x000000ffu;   // NEVER..ALWAYS
const uint32_t MISC_CAPS = 0x0000007fu;      // MASKPLANES..CULLCCW
const uint32_t RASTER_CAPS = 0x00000001u     // DITHER
                             | 0x00000010u   // ZTEST
                             | 0x00000020u   // SUBPIXEL
                             | 0x00000040u   // SUBPIXELX
                             | 0x00000080u   // FOGVERTEX
                             | 0x00000100u   // FOGTABLE
                             | 0x00001000u   // ANTIALIASEDGES
                             | 0x00004000u;  // ZBIAS
const uint32_t SHADE_CAPS = 0x00000001u      // COLORFLATMONO
                            | 0x00000002u    // COLORFLATRGB
                            | 0x00000004u    // COLORGOURAUDMONO
                            | 0x00000008u    // COLORGOURAUDRGB
                            | 0x00000040u    // SPECULARFLATMONO
                            | 0x00000080u    // SPECULARFLATRGB
                            | 0x00000100u    // SPECULARGOURAUDMONO
                            | 0x00000200u    // SPECULARGOURAUDRGB
                            | 0x00001000u    // ALPHAFLATBLEND
                            | 0x00004000u    // ALPHAGOURAUDBLEND
                            | 0x00040000u    // FOGFLAT
                            | 0x00080000u;   // FOGGOURAUD
// PERSPECTIVE | ALPHA | TRANSPARENCY. POW2 and SQUAREONLY are deliberately
// clear: they are restrictions on the caller, not features.
const uint32_t TEXTURE_CAPS = 0x0000000du;
const uint32_t TEXFILTER_CAPS = 0x0000003fu;  // NEAREST..LINEARMIPLINEAR
const uint32_t TEXBLEND_CAPS = 0x000000ffu;   // DECAL..ADD
const uint32_t TEXADDRESS_CAPS = 0x0000001fu; // WRAP..INDEPENDENTUV
const uint32_t DEV_CAPS = 0x00000001u         // FLOATTLVERTEX
                          | 0x00000010u       // EXECUTESYSTEMMEMORY
                          | 0x00000020u       // EXECUTEVIDEOMEMORY
                          | 0x00000040u       // TLVERTEXSYSTEMMEMORY
                          | 0x00000080u       // TLVERTEXVIDEOMEMORY
                          | 0x00000100u       // TEXTURESYSTEMMEMORY
                          | 0x00000200u       // TEXTUREVIDEOMEMORY
                          | 0x00000400u       // DRAWPRIMTLVERTEX
                          | 0x00000800u       // CANRENDERAFTERFLIP
                          | 0x00002000u       // DRAWPRIMITIVES2
                          | 0x00080000u;      // HWRASTERIZATION

void write_primcaps(uint32_t a) {
    gm_zero(a, D3DPRIMCAPS_SIZE);
    wr32(a + D3DPC_OFF_dwSize, D3DPRIMCAPS_SIZE);
    wr32(a + D3DPC_OFF_dwMiscCaps, MISC_CAPS);
    wr32(a + D3DPC_OFF_dwRasterCaps, RASTER_CAPS);
    wr32(a + D3DPC_OFF_dwZCmpCaps, ALL_CMP_CAPS);
    wr32(a + D3DPC_OFF_dwSrcBlendCaps, ALL_BLEND_CAPS);
    wr32(a + D3DPC_OFF_dwDestBlendCaps, ALL_BLEND_CAPS);
    wr32(a + D3DPC_OFF_dwAlphaCmpCaps, ALL_CMP_CAPS);
    wr32(a + D3DPC_OFF_dwShadeCaps, SHADE_CAPS);
    wr32(a + D3DPC_OFF_dwTextureCaps, TEXTURE_CAPS);
    wr32(a + D3DPC_OFF_dwTextureFilterCaps, TEXFILTER_CAPS);
    wr32(a + D3DPC_OFF_dwTextureBlendCaps, TEXBLEND_CAPS);
    wr32(a + D3DPC_OFF_dwTextureAddressCaps, TEXADDRESS_CAPS);
    wr32(a + D3DPC_OFF_dwStippleWidth, 0);
    wr32(a + D3DPC_OFF_dwStippleHeight, 0);
}

// `hardware` distinguishes the HAL description from the HEL (software) one;
// the game's device search asks for hardware.
void write_device_desc(uint32_t a, bool hardware) {
    if (!a || !gm_valid(a, D3DDEVICEDESC_SIZE))
        return;
    gm_zero(a, D3DDEVICEDESC_SIZE);
    wr32(a + D3DDD_OFF_dwSize, D3DDEVICEDESC_SIZE);
    wr32(a + D3DDD_OFF_dwFlags,
         D3DDD_COLORMODEL | D3DDD_DEVCAPS | D3DDD_TRANSFORMCAPS | D3DDD_LIGHTINGCAPS |
             D3DDD_BCLIPPING | D3DDD_LINECAPS | D3DDD_TRICAPS | D3DDD_DEVICERENDERBITDEPTH |
             D3DDD_DEVICEZBUFFERBITDEPTH | D3DDD_MAXBUFFERSIZE | D3DDD_MAXVERTEXCOUNT);
    wr32(a + D3DDD_OFF_dcmColorModel, D3DCOLOR_RGB);
    wr32(a + D3DDD_OFF_dwDevCaps, hardware ? DEV_CAPS : (DEV_CAPS & ~0x00080000u));
    wr32(a + D3DDD_OFF_dtcTransformCaps + 0, 8);
    wr32(a + D3DDD_OFF_dtcTransformCaps + 4, 1); // D3DTRANSFORMCAPS_CLIP
    wr32(a + D3DDD_OFF_bClipping, 1);
    wr32(a + D3DDD_OFF_dlcLightingCaps + 0, 16);
    wr32(a + D3DDD_OFF_dlcLightingCaps + 4, 0x0f); // POINT|SPOT|DIRECTIONAL|PARALLELPOINT
    wr32(a + D3DDD_OFF_dlcLightingCaps + 8, 1);    // D3DLIGHTINGMODEL_RGB
    wr32(a + D3DDD_OFF_dlcLightingCaps + 12, 8);   // dwNumLights
    write_primcaps(a + D3DDD_OFF_dpcLineCaps);
    write_primcaps(a + D3DDD_OFF_dpcTriCaps);
    wr32(a + D3DDD_OFF_dwDeviceRenderBitDepth, 0x00000c00u);  // DDBD_8 | DDBD_16
    wr32(a + D3DDD_OFF_dwDeviceZBufferBitDepth, 0x00000400u); // DDBD_16
    wr32(a + D3DDD_OFF_dwMaxBufferSize, 0);
    wr32(a + D3DDD_OFF_dwMaxVertexCount, 65535);
    wr32(a + D3DDD_OFF_dwMinTextureWidth, 1);
    wr32(a + D3DDD_OFF_dwMinTextureHeight, 1);
    wr32(a + D3DDD_OFF_dwMaxTextureWidth, 2048);
    wr32(a + D3DDD_OFF_dwMaxTextureHeight, 2048);
    wr32(a + D3DDD_OFF_dwMaxTextureRepeat, 2048);
    wr32(a + D3DDD_OFF_dwMaxTextureAspectRatio, 2048);
    wr32(a + D3DDD_OFF_dwMaxAnisotropy, 1);
    wrf32(a + D3DDD_OFF_dvGuardBandLeft, -32768.0f);
    wrf32(a + D3DDD_OFF_dvGuardBandTop, -32768.0f);
    wrf32(a + D3DDD_OFF_dvGuardBandRight, 32768.0f);
    wrf32(a + D3DDD_OFF_dvGuardBandBottom, 32768.0f);
    wrf32(a + D3DDD_OFF_dvExtentsAdjust, 0.0f);
    wr32(a + D3DDD_OFF_dwStencilCaps, 0);
    wr32(a + D3DDD_OFF_dwFVFCaps, 1);
    wr32(a + D3DDD_OFF_dwTextureOpCaps, 0);
    wr16(a + D3DDD_OFF_wMaxTextureBlendStages, 1);
    wr16(a + D3DDD_OFF_wMaxSimultaneousTextures, 1);
}

// ---------------------------------------------------------------------------
// The render target.
//
// A HAL device rasterizes into the DirectDraw surface it was given, and the
// game blits over the same pixels and flips. The host draws on the GPU, so the
// two only meet if the host copies its result back into that surface before
// anything else touches it. These three functions are the whole of that
// bookkeeping on this side: which surface it is, how to describe it, and when
// to tell the host to catch up.
// ---------------------------------------------------------------------------
uint32_t g_render_target = 0; // surface id, 0 when there is no device
// Latched the first time a device names a target. Until then no surface can
// have anything waiting in the host, and a Lock or a Blt need not ask.
bool g_render_target_ever = false;
// True from the moment mem_init() discards the guest arena until a device
// names a target in the new one. Every pixel pointer the host holds is stale in
// that window, so a flush would not merely be pointless: it would write through
// a dangling guest address. Nothing may ask for one.
bool g_arena_discarded = false;

void describe_surface(const ComObj *s, HostD3DSurface *out) {
    memset(out, 0, sizeof *out);
    out->id = s->id;
    out->pixels = s->pixels ? gm_ptr(s->pixels) : nullptr;
    out->width = (int32_t)s->width;
    out->height = (int32_t)s->height;
    out->pitch = (int32_t)s->pitch;
    out->bpp = (int32_t)s->bpp;
    out->rmask = s->rmask;
    out->gmask = s->gmask;
    out->bmask = s->bmask;
    const ComObj *pal = s->bpp <= 8 ? ddraw_effective_palette(s) : nullptr;
    out->palette = pal ? pal->pal : nullptr;
}

void set_render_target(ComObj *s) {
    // Whatever the device drew into the target it is leaving belongs in that
    // surface's own memory before the target changes identity. Every path that
    // changes it comes through here - CreateDevice, SetRenderTarget and the
    // device's own destruction - so this is the one place it has to be said.
    if (g_render_target && (!s || s->id != g_render_target)) {
        ComObj *old = com_get(g_render_target);
        if (old)
            d3d_flush_surface(old, "d3d");
    }
    g_render_target = s ? s->id : 0;
    if (g_render_target) {
        g_render_target_ever = true;
        g_arena_discarded = false;
    }
    if (!host_d3d_legacy_writeback())
        return; // acquire only at the first GPU write
    if (!s) {
        host_d3d_set_render_target(nullptr);
        return;
    }
    HostD3DSurface d;
    describe_surface(s, &d);
    host_d3d_bind_generation(&d, ddraw_surface_generation(s->id), host_frame_current().id);
}

void encode_snapshot(HostD3DDrawSnapshot *d) {
    if (ComObj *target = com_get(g_render_target)) {
        HostD3DSurface surface;
        describe_surface(target, &surface);
        host_d3d_bind_generation(&surface, ddraw_surface_generation(target->id),
                                 host_frame_current().id);
        HostDirtyRect bounds =
            d->kind == HOST_DRAW_CLEAR
                ? HostDirtyRect{0, 0, surface.width, surface.height}
                : HostDirtyRect{std::max(0, d->screen_min_x), std::max(0, d->screen_min_y),
                                std::min(surface.width, d->screen_max_x),
                                std::min(surface.height, d->screen_max_y)};
        if (host_d3d_accepts_draw())
            host_d3d_mark_dirty(target->id, ddraw_surface_generation(target->id), bounds);
    }
    host_d3d_draw(d);
}

// ---------------------------------------------------------------------------
// Draw submission
// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// The draw snapshot
//
// Everything the renderer needs, COPIED into the frame's arena at submission.
// The old command struct pointed straight into guest memory - vertices,
// indices, the device's own render-state array, its matrices - which is only
// correct while the guest is stopped inside DrawPrimitive. A frame is
// composited later, by which point the guest has reused its vertex buffer for
// the next draw and moved its matrices on. Every one of those pointers is a
// copy now, and the render state travels by value.
// ---------------------------------------------------------------------------

// One 4x4 column-major multiply, for screen bounds. D3D treats a transform the
// guest never set as identity, so an absent matrix is skipped rather than
// treated as zero.
void mat_mul(const float *a, const float *b, float *out) {
    for (int c = 0; c < 4; ++c)
        for (int r = 0; r < 4; ++r) {
            float v = 0.0f;
            for (int k = 0; k < 4; ++k)
                v += a[k * 4 + r] * b[c * 4 + k];
            out[c * 4 + r] = v;
        }
}

// Where a draw lands on the screen, which is what the interleaving rule and
// the HUD rule are both asked about later.
//
// A D3DVT_TLVERTEX draw is already in screen space: its sx, sy ARE the answer.
// Anything else is transformed the way the device would - world, view,
// projection, then the viewport map - because bounds computed from untransformed
// model coordinates would be a different rectangle from the one drawn.
void screen_bounds(const HostD3DDrawSnapshot *d, int32_t *min_x, int32_t *min_y, int32_t *max_x,
                   int32_t *max_y) {
    const int32_t vx = d->state.viewport[0], vy = d->state.viewport[1];
    const int32_t vw = d->state.viewport[2], vh = d->state.viewport[3];
    // An empty draw covers nothing, and an empty rectangle says so: min above
    // max, so no intersection test can ever match it.
    *min_x = vx + vw;
    *min_y = vy + vh;
    *max_x = vx;
    *max_y = vy;
    if (!d->vertices || !d->vertex_count)
        return;

    float m[16];
    bool transform = false;
    if (d->fvf != D3DVT_TLVERTEX) {
        float acc[16] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
        // The snapshot's own copy, not the device's: by composite time the
        // device has moved on, and these bounds belong to the draw.
        for (uint32_t t : {(uint32_t)D3DTRANSFORMSTATE_WORLD, (uint32_t)D3DTRANSFORMSTATE_VIEW,
                           (uint32_t)D3DTRANSFORMSTATE_PROJECTION}) {
            if (!d->state.transform_set[t])
                continue;
            float next[16];
            mat_mul(d->state.transform[t], acc, next);
            memcpy(acc, next, sizeof acc);
            transform = true;
        }
        memcpy(m, acc, sizeof m);
    }

    const uint8_t *v = (const uint8_t *)d->vertices;
    for (uint32_t i = 0; i < d->vertex_count; ++i) {
        float p[4];
        memcpy(p, v + (size_t)i * d->vertex_stride, sizeof(float) * 3);
        p[3] = 1.0f;
        float sx, sy;
        if (d->fvf == D3DVT_TLVERTEX) {
            sx = p[0];
            sy = p[1];
        } else {
            float o[4] = {p[0], p[1], p[2], 1.0f};
            if (transform) {
                for (int r = 0; r < 4; ++r)
                    o[r] = m[0 * 4 + r] * p[0] + m[1 * 4 + r] * p[1] + m[2 * 4 + r] * p[2] +
                           m[3 * 4 + r] * p[3];
            }
            // A vertex behind the eye has no screen position; the draw is
            // reported as covering the whole viewport rather than a rectangle
            // computed from a division by something at or below zero.
            if (!(o[3] > 0.0001f)) {
                *min_x = vx;
                *min_y = vy;
                *max_x = vx + vw;
                *max_y = vy + vh;
                return;
            }
            sx = (float)vx + ((o[0] / o[3]) * 0.5f + 0.5f) * (float)vw;
            sy = (float)vy + (0.5f - (o[1] / o[3]) * 0.5f) * (float)vh;
        }
        int32_t ix = (int32_t)(sx < 0.0f ? sx - 0.5f : sx + 0.5f);
        int32_t iy = (int32_t)(sy < 0.0f ? sy - 0.5f : sy + 0.5f);
        if (ix < *min_x)
            *min_x = ix;
        if (iy < *min_y)
            *min_y = iy;
        // EXCLUSIVE, like Clear's rectangles and like every other rectangle in
        // this API: the vertex at x is covered, so the bound past it is x + 1.
        // T5's intersection predicate reads both kinds and one convention is
        // the only way it can.
        if (ix + 1 > *max_x)
            *max_x = ix + 1;
        if (iy + 1 > *max_y)
            *max_y = iy + 1;
    }
}

// The device's render state, matrices, viewport, background material and
// lights, all by value into the frame arena.
void fill_state(const ComObj *dev, HostD3DRenderState &st) {
    memset(&st, 0, sizeof st);
    for (uint32_t i = 0; i < HOST_D3D_RENDERSTATE_MAX && i < D3D_RENDERSTATE_MAX; ++i)
        st.render_state[i] = dev->render_state[i];
    // By D3DTRANSFORMSTATE index, not packed: the snapshot and the guest use
    // the same numbering, so there is no mapping table to drift.
    for (uint32_t i = 0; i < HOST_D3D_TRANSFORM_MAX && i < D3DTRANSFORMSTATE_MAX; ++i) {
        st.transform_set[i] = dev->transform_set[i] ? 1 : 0;
        if (dev->transform_set[i])
            memcpy(st.transform[i], dev->transform[i], sizeof st.transform[i]);
    }
    const ComObj *vp = dev->current_viewport ? com_get(dev->current_viewport) : nullptr;
    if (vp) {
        st.viewport[0] = (int32_t)vp->vp_x;
        st.viewport[1] = (int32_t)vp->vp_y;
        st.viewport[2] = (int32_t)vp->vp_w;
        st.viewport[3] = (int32_t)vp->vp_h;
        st.viewport_minz = vp->vp_minz;
        st.viewport_maxz = vp->vp_maxz;
    } else {
        const ComObj *rt = dev->render_target ? com_get(dev->render_target) : nullptr;
        st.viewport[2] = rt ? (int32_t)rt->width : 0;
        st.viewport[3] = rt ? (int32_t)rt->height : 0;
        st.viewport_maxz = 1.0f;
    }

    // The background material's own record, and every light attached to the
    // viewport, copied. A handle would be a way to read their CURRENT values
    // at composite time, by which point the guest may have changed or released
    // them.
    if (vp && vp->vp_background) {
        const ComObj *m = object_for_handle(vp->vp_background);
        if (m && m->kind == K_MATERIAL && !m->blob.empty()) {
            void *p = ddraw_frame_alloc((uint32_t)m->blob.size(), 8);
            if (p) {
                memcpy(p, m->blob.data(), m->blob.size());
                st.material = (const uint8_t *)p;
                st.material_bytes = (uint32_t)m->blob.size();
            }
        }
    }
    if (vp && !vp->lights.empty()) {
        uint32_t n = (uint32_t)vp->lights.size();
        HostD3DLightValue *lv = (HostD3DLightValue *)ddraw_frame_alloc(
            n * (uint32_t)sizeof(HostD3DLightValue), (uint32_t)alignof(HostD3DLightValue));
        if (lv) {
            uint32_t kept = 0;
            for (uint32_t id : vp->lights) {
                const ComObj *l = com_get(id);
                if (!l || l->blob.empty())
                    continue;
                void *p = ddraw_frame_alloc((uint32_t)l->blob.size(), 8);
                if (!p)
                    continue;
                memcpy(p, l->blob.data(), l->blob.size());
                lv[kept].handle = l->id;
                lv[kept].bytes = (uint32_t)l->blob.size();
                lv[kept].data = (const uint8_t *)p;
                ++kept;
            }
            st.lights = lv;
            st.light_count = kept;
        }
    }
}

bool draw_inside(const HostD3DDrawSnapshot *d, int32_t x0, int32_t y0, int32_t x1, int32_t y1) {
    if (!d || d->kind != HOST_DRAW_PRIMITIVE || !d->vertices || !d->vertex_count)
        return false;
    float m[16] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
    for (uint32_t t : {1u, 2u, 3u})
        if (d->state.transform_set[t]) {
            float next[16];
            mat_mul(d->state.transform[t], m, next);
            memcpy(m, next, sizeof m);
        }
    for (uint32_t i = 0; i < d->vertex_count; ++i) {
        float p[3];
        memcpy(p, (const uint8_t *)d->vertices + (size_t)i * d->vertex_stride, sizeof p);
        float x = p[0], y = p[1];
        if (d->fvf != D3DVT_TLVERTEX) {
            float w = m[3] * p[0] + m[7] * p[1] + m[11] * p[2] + m[15];
            if (!(w > 0.0001f))
                return false;
            float cx = m[0] * p[0] + m[4] * p[1] + m[8] * p[2] + m[12];
            float cy = m[1] * p[0] + m[5] * p[1] + m[9] * p[2] + m[13];
            x = d->state.viewport[0] + (cx / w * 0.5f + 0.5f) * d->state.viewport[2];
            y = d->state.viewport[1] + (0.5f - cy / w * 0.5f) * d->state.viewport[3];
        }
        if (!(x >= x0 && x < x1 && y >= y0 && y < y1))
            return false;
    }
    return true;
}

// The one path every draw takes. `vertices` and `indices` are guest addresses.
void submit(X86 *c, ComObj *dev, uint32_t prim, uint32_t vtype, uint32_t vertices, uint32_t vcount,
            uint32_t indices, uint32_t icount) {
    uint32_t stride = d3d_vertex_stride(vtype);
    if (!stride) {
        log_once("d3d.vtype",
                 "d3d: vertex type %u is not one of D3DVT_VERTEX/"
                 "LVERTEX/TLVERTEX; the draw is dropped",
                 vtype);
        return;
    }
    // stride * vcount is guest-controlled and wraps in 32 bits: a count of
    // 0x08000001 with a 32-byte stride validates 32 bytes and would then hand
    // the host the untruncated count. Both spans are checked in 64 bits.
    if (!vertices || !vcount || !gm_fits_n(vertices, vcount, stride)) {
        log_once("d3d.vbad", "d3d: draw of %u vertices at %08x does not fit in guest memory",
                 vcount, vertices);
        return;
    }
    if (indices && (!icount || !gm_fits_n(indices, icount, 2))) {
        log_once("d3d.ibad", "d3d: draw of %u indices at %08x does not fit in guest memory", icount,
                 indices);
        return;
    }
    // Every index has to name a vertex that exists, or the host would read
    // past the vertex array the guest supplied.
    if (indices) {
        for (uint32_t i = 0; i < icount; ++i) {
            if (rd16(indices + i * 2) >= vcount) {
                log_once("d3d.irange",
                         "d3d: index %u of %u is %u, outside a %u-vertex array; "
                         "the draw is dropped",
                         i, icount, rd16(indices + i * 2), vcount);
                return;
            }
        }
    }
    if (!dev->in_scene) {
        log_once("d3d.noscene",
                 "d3d: DrawPrimitive outside BeginScene/EndScene; forwarding anyway");
    }

    // The snapshot and everything in it live in the frame's arena, so the
    // guest may reuse its vertex buffer the moment this returns.
    HostD3DDrawSnapshot *d = (HostD3DDrawSnapshot *)ddraw_frame_alloc(
        (uint32_t)sizeof(HostD3DDrawSnapshot), (uint32_t)alignof(HostD3DDrawSnapshot));
    if (!d)
        return;
    memset(d, 0, sizeof *d);
    d->seq = ddraw_next_seq();
    d->kind = HOST_DRAW_PRIMITIVE;
    d->primitive_type = prim;
    d->fvf = vtype;
    d->vertex_stride = stride;
    d->vertex_count = vcount;
    d->vertices = ddraw_frame_alloc(vcount * stride, 16);
    if (!d->vertices)
        return;
    memcpy((void *)d->vertices, gm_ptr(vertices), (size_t)vcount * stride);
    if (indices && icount) {
        void *ip = ddraw_frame_alloc(icount * 2u, 2);
        if (!ip)
            return;
        memcpy(ip, gm_ptr(indices), (size_t)icount * 2u);
        d->indices = (const uint16_t *)ip;
        d->index_count = icount;
    }
    d->texture_handle = dev->render_state[D3DRENDERSTATE_TEXTUREHANDLE];
    // The renderer holds a resolved copy of the texture, so a draw must not
    // sample one whose pixels have moved on. Every path that writes a surface
    // uploads immediately when it already has a handle, so this normally has
    // nothing to do; it is here so that a write through a path added later is
    // still seen by the draw that follows it rather than by the one after.
    if (d->texture_handle) {
        ComObj *t = object_for_handle(d->texture_handle);
        if (t && t->tex_dirty)
            d3d_upload_texture(t);
        // The revision this draw samples, held by the frame until it retires.
        // Without the lease the guest's next upload would replace the pixels
        // under a frame that has not been composited yet.
        d->texture_revision = t ? ddraw_surface_revision(t->id) : 0;
        // A revision the renderer never received cannot be held, and a draw
        // naming one would sample nothing and draw untextured. That happens
        // without any write to the texture at all: a Flip or a SetSurfaceDesc
        // moves a surface's revision, and the texture was last uploaded under
        // the old one. Upload and ask again.
        if (t && !ddraw_frame_lease_texture(d->texture_handle, d->texture_revision)) {
            uploaded_revisions().erase(d->texture_handle);
            d3d_upload_texture(t);
            d->texture_revision = ddraw_surface_revision(t->id);
            if (!ddraw_frame_lease_texture(d->texture_handle, d->texture_revision)) {
                log_once("d3d.tex.norev",
                         "d3d: texture %u revision %u could not be held even after "
                         "uploading it; the draw samples whatever the renderer has",
                         d->texture_handle, d->texture_revision);
            }
        }
    }
    fill_state(dev, d->state);
    screen_bounds(d, &d->screen_min_x, &d->screen_min_y, &d->screen_max_x, &d->screen_max_y);
    ddraw_note_render_surface(g_render_target);
    ddraw_record_draw(d);
    host_sprite_record_draw(d);
    encode_snapshot(d);
    (void)c;
}

// ===========================================================================
// IDirect3DTexture2 (a view on a DirectDraw surface)
// ===========================================================================
void Texture_GetHandle(X86 *c) {
    ComObj *s = this_texture(c);
    uint32_t dev_ptr = arg(c, 1);
    uint32_t out = arg(c, 2);
    ComObj *dev = dev_ptr ? com_this(dev_ptr) : nullptr;
    if (!s || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (dev && dev->kind != K_D3DDEVICE) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (!s->texture_handle) {
        s->texture_handle = g_next_texture_handle++;
        bind_handle(s->texture_handle, s->id);
        d3d_upload_texture(s);
    } else if (s->tex_dirty) {
        // Filled before anything asked for the handle again. The original
        // calls GetHandle 2242 times for far fewer surfaces, so this is the
        // ordinary way a texture that was written by blit gets its pixels to
        // the renderer.
        d3d_upload_texture(s);
    }
    com_out_ptr(out, s->texture_handle);
    com_ret(c, D3D_OK_);
}

void Texture_PaletteChanged(X86 *c) {
    ComObj *s = this_texture(c);
    if (!s) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // The indices did not move, but what they RESOLVE to did, and the renderer
    // holds expanded pixels. That is a new content revision by the only
    // definition that matters here - the bytes the renderer would upload are
    // different - so a frame holding the old one keeps the old colours.
    ddraw_before_write(s);
    ddraw_after_write(s);
    if (s->texture_handle)
        d3d_upload_texture(s);
    com_ret(c, D3D_OK_);
}

// Copy a surface into a texture and publish a new content revision. Preserve leased
// frame bytes before the CPU write, then carry its palette and color key to the host.
void Texture_Load(X86 *c) {
    ComObj *dst = this_texture(c);
    uint32_t src_ptr = arg(c, 1);
    ComObj *src = src_ptr ? com_this(src_ptr) : nullptr;
    if (!dst || !src || src->kind != K_SURFACE) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // Load copies the source surface into this texture, as the real method
    // does when moving a system-memory texture into video memory.
    if (dst->width != src->width || dst->height != src->height || dst->bpp != src->bpp) {
        log_once("d3d.load.mismatch",
                 "d3d: Texture Load from a %ux%ux%u surface into a %ux%ux%u texture; "
                 "copying the overlapping rows only",
                 src->width, src->height, src->bpp, dst->width, dst->height, dst->bpp);
    }
    // Load reads the source's pixels, which is one of the readers the
    // coherence contract names and the only one that was not counted.
    ddraw_note_texture_load();
    // And it is about to WRITE the destination's. Any frame holding the
    // destination's current revision has its bytes copied now, and the
    // revision moves, so the upload below carries a revision nobody has
    // leased. Without this the upload replaced a texture a frame was still
    // holding, under the same key - exactly what the lease exists to prevent.
    ddraw_before_write(dst);
    // Both sides are about to be read and written with the CPU, and either
    // could be the device's render target.
    d3d_read_surface(src, nullptr, HOST_READ_TEXTURE_LOAD);
    d3d_flush_surface(dst, "d3d");
    if (dst->pixels && src->pixels) {
        uint32_t rows = dst->height < src->height ? dst->height : src->height;
        uint32_t row_bytes = dst->pitch < src->pitch ? dst->pitch : src->pitch;
        for (uint32_t y = 0; y < rows; ++y)
            memcpy(gm_ptr(dst->pixels + y * dst->pitch), gm_ptr(src->pixels + y * src->pitch),
                   row_bytes);
        HostBlitRecord write{};
        write.seq = ddraw_next_seq();
        write.is_upload = 1;
        write.dst = dst->id;
        write.dst_generation = ddraw_surface_generation(dst->id);
        write.src.surface = HOST_SRC_CPU;
        write.cpu_bpp = (uint8_t)dst->bpp;
        write.cpu_pitch = (int32_t)dst->pitch;
        write.cpu_pixels = (const uint8_t *)gm_ptr(dst->pixels);
        write.w = (int32_t)std::min(dst->width, row_bytes / (dst->bpp == 8 ? 1u : 2u));
        write.h = (int32_t)rows;
        d3d_cpu_write(dst, &write);
    }
    // The colour key travels with the data: a keyed source texture stays keyed.
    if (src->has_ckey_src) {
        dst->has_ckey_src = true;
        dst->ckey_src_lo = src->ckey_src_lo;
        dst->ckey_src_hi = src->ckey_src_hi;
    }
    if (src->palette_obj && !dst->palette_obj) {
        ComObj *p = com_get(src->palette_obj);
        if (p) {
            dst->palette_obj = p->id;
            com_addref(p);
        }
    }
    // The destination holds different pixels now.
    ddraw_after_write(dst);
    if (!dst->texture_handle) {
        dst->texture_handle = g_next_texture_handle++;
        bind_handle(dst->texture_handle, dst->id);
    }
    d3d_upload_texture(dst);
    com_ret(c, D3D_OK_);
}

const ComMethod g_texture2[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetHandle", 3, Texture_GetHandle},
    {"PaletteChanged", 3, Texture_PaletteChanged},
    {"Load", 2, Texture_Load},
};

// ===========================================================================
// IDirect3DMaterial2
// ===========================================================================
void Material_SetMaterial(X86 *c) {
    ComObj *m = this_material(c);
    uint32_t src = arg(c, 1);
    if (!m || !src || !gm_valid(src, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    uint32_t size = rd32(src);
    if (size < 8 || size > 256 || !gm_valid(src, size)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    m->blob.assign(gm_ptr(src), gm_ptr(src) + size);
    com_ret(c, D3D_OK_);
}

void Material_GetMaterial(X86 *c) {
    ComObj *m = this_material(c);
    uint32_t out = arg(c, 1);
    if (!m || !out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (m->blob.empty()) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    uint32_t want = rd32(out);
    uint32_t n = want && want < m->blob.size() ? want : (uint32_t)m->blob.size();
    if (!gm_valid(out, n)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    memcpy(gm_ptr(out), m->blob.data(), n);
    com_ret(c, D3D_OK_);
}

void Material_GetHandle(X86 *c) {
    ComObj *m = this_material(c);
    uint32_t out = arg(c, 2);
    if (!m || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (!m->handle) {
        m->handle = g_next_material_handle++;
        bind_handle(m->handle, m->id);
    }
    com_out_ptr(out, m->handle);
    com_ret(c, D3D_OK_);
}

const ComMethod g_material2[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"SetMaterial", 2, Material_SetMaterial},
    {"GetMaterial", 2, Material_GetMaterial},
    {"GetHandle", 3, Material_GetHandle},
};

// ===========================================================================
// IDirect3DLight
// ===========================================================================
DX_STUB(Light_Initialize, DDERR_INVALIDOBJECT)

void Light_SetLight(X86 *c) {
    ComObj *l = this_light(c);
    uint32_t src = arg(c, 1);
    if (!l || !src || !gm_valid(src, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    uint32_t size = rd32(src);
    if (size < 8 || size > 256 || !gm_valid(src, size)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    l->blob.assign(gm_ptr(src), gm_ptr(src) + size);
    // Lighting is a property of the scene Task 7 renders; the record is kept
    // so the renderer can read it, and nothing is computed here.
    com_ret(c, D3D_OK_);
}

void Light_GetLight(X86 *c) {
    ComObj *l = this_light(c);
    uint32_t out = arg(c, 1);
    if (!l || !out || l->blob.empty()) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    uint32_t n = (uint32_t)l->blob.size();
    if (!gm_valid(out, n)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    memcpy(gm_ptr(out), l->blob.data(), n);
    com_ret(c, D3D_OK_);
}

const ComMethod g_light[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"Initialize", 2, Light_Initialize},
    {"SetLight", 2, Light_SetLight},
    {"GetLight", 2, Light_GetLight},
};

// ===========================================================================
// IDirect3DViewport2
// ===========================================================================
DX_STUB(Viewport_Initialize, DDERR_INVALIDOBJECT)

// D3DVIEWPORT and D3DVIEWPORT2 share dwSize/dwX/dwY/dwWidth/dwHeight and both
// end with dvMinZ/dvMaxZ; only the middle differs, and the shim needs neither.
void viewport_read(ComObj *v, uint32_t a) {
    v->vp_x = rd32(a + D3DVP_OFF_dwX);
    v->vp_y = rd32(a + D3DVP_OFF_dwY);
    v->vp_w = rd32(a + D3DVP_OFF_dwWidth);
    v->vp_h = rd32(a + D3DVP_OFF_dwHeight);
    // dvMinZ and dvMaxZ sit at 0x24 and 0x28 in both record versions, and the
    // caller's span was validated to cover all 44 bytes.
    v->vp_minz = rdf32(a + D3DVP_OFF_dvMinZ);
    v->vp_maxz = rdf32(a + D3DVP_OFF_dvMaxZ);
}

void viewport_write(const ComObj *v, uint32_t a, uint32_t size) {
    gm_zero(a + 4, size - 4);
    wr32(a + D3DVP_OFF_dwX, v->vp_x);
    wr32(a + D3DVP_OFF_dwY, v->vp_y);
    wr32(a + D3DVP_OFF_dwWidth, v->vp_w);
    wr32(a + D3DVP_OFF_dwHeight, v->vp_h);
    wrf32(a + D3DVP_OFF_dvMinZ, v->vp_minz);
    wrf32(a + D3DVP_OFF_dvMaxZ, v->vp_maxz);
    wr32(a + D3DVP_OFF_dwSize, size);
}

// D3DVIEWPORT and D3DVIEWPORT2 are both 44 bytes and share every field this
// shim reads, so one span check serves both entry points. dwSize is honoured
// when the caller sets it and the record is accepted on its span alone when it
// does not, because refusing here would block viewport setup entirely.
bool viewport_span_ok(uint32_t a) {
    if (!a || !gm_valid(a, D3DVIEWPORT2_SIZE))
        return false;
    uint32_t size = rd32(a + D3DVP_OFF_dwSize);
    if (size && size != D3DVIEWPORT_SIZE && size != D3DVIEWPORT2_SIZE) {
        log_once("d3d.vpsize",
                 "d3d: viewport record declares dwSize %u; both D3DVIEWPORT and "
                 "D3DVIEWPORT2 are %u bytes",
                 size, (uint32_t)D3DVIEWPORT2_SIZE);
        return false;
    }
    return true;
}

void viewport_get(X86 *c, uint32_t want_size) {
    ComObj *v = this_viewport(c);
    uint32_t out = arg(c, 1);
    if (!v || !viewport_span_ok(out)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    viewport_write(v, out, want_size);
    com_ret(c, D3D_OK_);
}

void viewport_set(X86 *c, uint32_t want_size) {
    ComObj *v = this_viewport(c);
    uint32_t in = arg(c, 1);
    if (!v || !viewport_span_ok(in)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    viewport_read(v, in);
    LOGV("d3d: viewport %u,%u %ux%u z %.3f..%.3f", v->vp_x, v->vp_y, v->vp_w, v->vp_h,
         (double)v->vp_minz, (double)v->vp_maxz);
    com_ret(c, D3D_OK_);
}

void Viewport_GetViewport(X86 *c) {
    viewport_get(c, D3DVIEWPORT_SIZE);
}
void Viewport_SetViewport(X86 *c) {
    viewport_set(c, D3DVIEWPORT_SIZE);
}
void Viewport_GetViewport2(X86 *c) {
    viewport_get(c, D3DVIEWPORT2_SIZE);
}
void Viewport_SetViewport2(X86 *c) {
    viewport_set(c, D3DVIEWPORT2_SIZE);
}

DX_STUB(Viewport_TransformVertices, DDERR_UNSUPPORTED)
DX_STUB(Viewport_LightElements, DDERR_UNSUPPORTED)

void Viewport_SetBackground(X86 *c) {
    ComObj *v = this_viewport(c);
    if (!v) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    v->vp_background = arg(c, 1);
    com_ret(c, D3D_OK_);
}

void Viewport_GetBackground(X86 *c) {
    ComObj *v = this_viewport(c);
    uint32_t h = arg(c, 1), valid = arg(c, 2);
    if (!v) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    if (h && gm_valid(h, 4))
        wr32(h, v->vp_background);
    if (valid && gm_valid(valid, 4))
        wr32(valid, v->vp_background ? 1 : 0);
    com_ret(c, D3D_OK_);
}

DX_STUB(Viewport_SetBackgroundDepth, DDERR_UNSUPPORTED)

void Viewport_GetBackgroundDepth(X86 *c) {
    uint32_t s = arg(c, 1), valid = arg(c, 2);
    if (s && gm_valid(s, 4))
        wr32(s, 0);
    if (valid && gm_valid(valid, 4))
        wr32(valid, 0);
    com_ret(c, D3D_OK_);
}

// Clear the requested viewport rectangles and record the operation in frame order.
// Keep the guest surface and host render target consistent for subsequent readers.
void viewport_clear(X86 *c, bool explicit_values) {
    ComObj *v = this_viewport(c);
    uint32_t count = arg(c, 1), rects = arg(c, 2), flags = arg(c, 3);
    if (!v) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    if (count > 4096 || (count && (!rects || !gm_fits_n(rects, count, 16)))) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // The clear colour is the background material's diffuse colour. The
    // material record is the guest's own D3DMATERIAL, whose dcvDiffuse starts
    // at offset 4 as four floats; the host wants a packed ARGB.
    uint32_t color = 0;
    ComObj *m = v->vp_background ? object_for_handle(v->vp_background) : nullptr;
    if (m && m->kind == K_MATERIAL && m->blob.size() >= 20) {
        float rgba[4];
        memcpy(rgba, m->blob.data() + 4, sizeof rgba);
        auto b8 = [](float f) -> uint32_t {
            if (!(f > 0.0f))
                return 0;
            if (f >= 1.0f)
                return 255;
            return (uint32_t)(f * 255.0f + 0.5f);
        };
        color = (b8(rgba[3]) << 24) | (b8(rgba[0]) << 16) | (b8(rgba[1]) << 8) | b8(rgba[2]);
    }
    float z = 1.0f;
    if (explicit_values) {
        if (flags & ~(D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER)) {
            com_ret(c, DDERR_UNSUPPORTED); // No stencil buffer is advertised.
            return;
        }
        color = arg(c, 4);
        uint32_t bits = arg(c, 5);
        memcpy(&z, &bits, sizeof z);
    }
    // Clear is part of the frame's draw list, in its own place in the order:
    // a frame replayed later has to clear where the guest cleared, before the
    // draws the guest made after it. The rectangles are copied, because the
    // guest's array is its own the moment this returns.
    ComObj *dev = v->vp_device ? com_get(v->vp_device) : nullptr;
    HostD3DDrawSnapshot *d = (HostD3DDrawSnapshot *)ddraw_frame_alloc(
        (uint32_t)sizeof(HostD3DDrawSnapshot), (uint32_t)alignof(HostD3DDrawSnapshot));
    if (d) {
        memset(d, 0, sizeof *d);
        d->seq = ddraw_next_seq();
        d->kind = HOST_DRAW_CLEAR;
        d->clear_flags = flags;
        d->clear_color = color;
        d->clear_z = z;
        if (count) {
            int32_t *r = (int32_t *)ddraw_frame_alloc(count * 16u, 4);
            if (r) {
                // The guest's D3DRECTs as they arrived: x0, y0, x1, y1 with
                // x1 and y1 exclusive, in guest screen space.
                memcpy(r, gm_ptr(rects), (size_t)count * 16u);
                d->clear_rects = r;
                d->clear_rect_count = count;
            }
        }
        if (dev)
            fill_state(dev, d->state);
        else {
            d->state.viewport[0] = (int32_t)v->vp_x;
            d->state.viewport[1] = (int32_t)v->vp_y;
            d->state.viewport[2] = (int32_t)v->vp_w;
            d->state.viewport[3] = (int32_t)v->vp_h;
            d->state.viewport_maxz = 1.0f;
        }
        // A clear covers what it was asked to clear, and the whole viewport
        // when it was given no rectangles at all.
        if (d->clear_rect_count) {
            d->screen_min_x = d->clear_rects[0];
            d->screen_min_y = d->clear_rects[1];
            d->screen_max_x = d->clear_rects[2];
            d->screen_max_y = d->clear_rects[3];
            for (uint32_t i = 1; i < d->clear_rect_count; ++i) {
                const int32_t *q = d->clear_rects + i * 4;
                if (q[0] < d->screen_min_x)
                    d->screen_min_x = q[0];
                if (q[1] < d->screen_min_y)
                    d->screen_min_y = q[1];
                if (q[2] > d->screen_max_x)
                    d->screen_max_x = q[2];
                if (q[3] > d->screen_max_y)
                    d->screen_max_y = q[3];
            }
        } else {
            d->screen_min_x = d->state.viewport[0];
            d->screen_min_y = d->state.viewport[1];
            d->screen_max_x = d->state.viewport[0] + d->state.viewport[2];
            d->screen_max_y = d->state.viewport[1] + d->state.viewport[3];
        }
        ddraw_note_render_surface(g_render_target);
        ddraw_record_draw(d);
        // Through the same entry point as a primitive, so the CLEAR branch of
        // host_d3d_draw is live code rather than something only a future
        // compositor would exercise. The rectangles it reads are the arena's
        // copy; the guest's array is the guest's again the moment this returns.
        encode_snapshot(d);
    } else {
        // No arena, so nothing was recorded: clear straight through, reading
        // the guest's rectangles while they are still the guest's.
        host_d3d_clear(flags, count ? (const int32_t *)gm_ptr(rects) : nullptr, count, color, z);
    }
    com_ret(c, D3D_OK_);
}

void Viewport_Clear(X86 *c) {
    viewport_clear(c, false);
}
void Viewport_Clear2(X86 *c) {
    viewport_clear(c, true);
}

void Viewport_AddLight(X86 *c) {
    ComObj *v = this_viewport(c);
    uint32_t a = arg(c, 1);
    ComObj *l = a ? com_this(a, IF_D3DLIGHT) : nullptr;
    if (!v || !l) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    for (uint32_t id : v->lights)
        if (id == l->id) {
            com_ret(c, D3D_OK_);
            return;
        }
    v->lights.push_back(l->id);
    com_addref(l);
    com_ret(c, D3D_OK_);
}

void Viewport_DeleteLight(X86 *c) {
    ComObj *v = this_viewport(c);
    uint32_t a = arg(c, 1);
    ComObj *l = a ? com_this(a, IF_D3DLIGHT) : nullptr;
    if (!v || !l) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    for (size_t i = 0; i < v->lights.size(); ++i) {
        if (v->lights[i] == l->id) {
            v->lights.erase(v->lights.begin() + (ptrdiff_t)i);
            com_release(l);
            com_ret(c, D3D_OK_);
            return;
        }
    }
    com_ret(c, DDERR_INVALIDPARAMS);
}

void Viewport_NextLight(X86 *c) {
    ComObj *v = this_viewport(c);
    uint32_t cur = arg(c, 1), out = arg(c, 2), flags = arg(c, 3);
    if (!v || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    com_out_ptr(out, 0);
    // D3DNEXT_HEAD = 1, D3DNEXT_TAIL = 2, D3DNEXT_NEXT = 0.
    size_t idx = 0;
    if (flags == 2) {
        if (v->lights.empty()) {
            com_ret(c, DDERR_NOTFOUND);
            return;
        }
        idx = v->lights.size() - 1;
    } else if (flags == 1) {
        if (v->lights.empty()) {
            com_ret(c, DDERR_NOTFOUND);
            return;
        }
        idx = 0;
    } else {
        ComObj *l = cur ? com_this(cur, IF_D3DLIGHT) : nullptr;
        if (!l) {
            com_ret(c, DDERR_INVALIDPARAMS);
            return;
        }
        size_t at = v->lights.size();
        for (size_t i = 0; i < v->lights.size(); ++i)
            if (v->lights[i] == l->id)
                at = i;
        if (at + 1 >= v->lights.size()) {
            com_ret(c, DDERR_NOTFOUND);
            return;
        }
        idx = at + 1;
    }
    ComObj *l = com_get(v->lights[idx]);
    if (!l) {
        com_ret(c, DDERR_NOTFOUND);
        return;
    }
    com_addref(l);
    com_out_ptr(out, com_view(l, IF_D3DLIGHT));
    com_ret(c, D3D_OK_);
}

const ComMethod g_viewport2[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"Initialize", 2, Viewport_Initialize},
    {"GetViewport", 2, Viewport_GetViewport},
    {"SetViewport", 2, Viewport_SetViewport},
    {"TransformVertices", 5, Viewport_TransformVertices},
    {"LightElements", 3, Viewport_LightElements},
    {"SetBackground", 2, Viewport_SetBackground},
    {"GetBackground", 3, Viewport_GetBackground},
    {"SetBackgroundDepth", 2, Viewport_SetBackgroundDepth},
    {"GetBackgroundDepth", 3, Viewport_GetBackgroundDepth},
    {"Clear", 4, Viewport_Clear},
    {"AddLight", 2, Viewport_AddLight},
    {"DeleteLight", 2, Viewport_DeleteLight},
    {"NextLight", 4, Viewport_NextLight},
    {"GetViewport2", 2, Viewport_GetViewport2},
    {"SetViewport2", 2, Viewport_SetViewport2},
};

// ===========================================================================
// IDirect3DDevice2
// ===========================================================================
void Device_GetCaps(X86 *c) {
    uint32_t hw = arg(c, 1), hel = arg(c, 2);
    if (!hw && !hel) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (hw)
        write_device_desc(hw, true);
    if (hel)
        write_device_desc(hel, false);
    com_ret(c, D3D_OK_);
}

void Device_SwapTextureHandles(X86 *c) {
    ComObj *a = arg(c, 1) ? com_this(arg(c, 1)) : nullptr;
    ComObj *b = arg(c, 2) ? com_this(arg(c, 2)) : nullptr;
    if (!a || !b || a->kind != K_SURFACE || b->kind != K_SURFACE) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    std::swap(a->texture_handle, b->texture_handle);
    if (a->texture_handle)
        bind_handle(a->texture_handle, a->id);
    if (b->texture_handle)
        bind_handle(b->texture_handle, b->id);
    // Each HANDLE now names a different surface's pixels. The revisions have
    // to move with it: two surfaces sitting at the same low revision would
    // otherwise have handle A re-uploaded at a revision some frame is already
    // holding for the other surface's contents, and the frame would sample the
    // wrong texture entirely.
    ddraw_before_write(a);
    ddraw_before_write(b);
    ddraw_after_write(a);
    ddraw_after_write(b);
    if (a->texture_handle)
        d3d_upload_texture(a);
    if (b->texture_handle)
        d3d_upload_texture(b);
    com_ret(c, D3D_OK_);
}

void Device_GetStats(X86 *c) {
    uint32_t out = arg(c, 1);
    if (!out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    uint32_t size = rd32(out);
    if (size >= 8 && size <= 256 && gm_valid(out, size))
        gm_zero(out + 4, size - 4);
    com_ret(c, D3D_OK_);
}

void Device_AddViewport(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t a = arg(c, 1);
    ComObj *v = a ? com_this(a, viewport_iface(c)) : nullptr;
    if (!dev || !v) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    for (uint32_t id : dev->viewports)
        if (id == v->id) {
            com_ret(c, D3D_OK_);
            return;
        }
    dev->viewports.push_back(v->id);
    v->vp_device = dev->id;
    com_addref(v);
    com_ret(c, D3D_OK_);
}

void Device_DeleteViewport(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t a = arg(c, 1);
    ComObj *v = a ? com_this(a, viewport_iface(c)) : nullptr;
    if (!dev || !v) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    for (size_t i = 0; i < dev->viewports.size(); ++i) {
        if (dev->viewports[i] == v->id) {
            dev->viewports.erase(dev->viewports.begin() + (ptrdiff_t)i);
            if (dev->current_viewport == v->id)
                dev->current_viewport = 0;
            com_release(v);
            com_ret(c, D3D_OK_);
            return;
        }
    }
    com_ret(c, DDERR_INVALIDPARAMS);
}

void Device_NextViewport(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t cur = arg(c, 1), out = arg(c, 2), flags = arg(c, 3);
    if (!dev || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    com_out_ptr(out, 0);
    size_t idx;
    if (flags == 1) { // D3DNEXT_HEAD
        if (dev->viewports.empty()) {
            com_ret(c, DDERR_NOTFOUND);
            return;
        }
        idx = 0;
    } else if (flags == 2) { // D3DNEXT_TAIL
        if (dev->viewports.empty()) {
            com_ret(c, DDERR_NOTFOUND);
            return;
        }
        idx = dev->viewports.size() - 1;
    } else {
        ComObj *v = cur ? com_this(cur, viewport_iface(c)) : nullptr;
        if (!v) {
            com_ret(c, DDERR_INVALIDPARAMS);
            return;
        }
        size_t at = dev->viewports.size();
        for (size_t i = 0; i < dev->viewports.size(); ++i)
            if (dev->viewports[i] == v->id)
                at = i;
        if (at + 1 >= dev->viewports.size()) {
            com_ret(c, DDERR_NOTFOUND);
            return;
        }
        idx = at + 1;
    }
    ComObj *v = com_get(dev->viewports[idx]);
    if (!v) {
        com_ret(c, DDERR_NOTFOUND);
        return;
    }
    com_addref(v);
    com_out_ptr(out, com_view(v, viewport_iface(c)));
    com_ret(c, D3D_OK_);
}

// Offer supported texture formats through the guest callback in compatibility order.
// Stop enumeration when the callback declines another entry.
void Device_EnumTextureFormats(X86 *c) {
    uint32_t cb = arg(c, 1), ctx = arg(c, 2);
    if (!cb) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // IDirect3DDevice2::EnumTextureFormats hands the callback a DDSURFACEDESC
    // whose pixel format is filled in.
    //
    // The list, its order and each record are Wine's: dlls/ddraw/device.c
    // enumerates B5G5R5X1, B5G5R5A1, B4G4R4A4, B5G6R5, then the 32-bit pair,
    // B2G3R3 and P8, with "FOURCC codes - Not in this version" where the
    // compressed formats would be, and dlls/ddraw/utils.c builds each
    // DDPIXELFORMAT. Order matters: a caller that takes the first acceptable
    // format gets a different one if the list is reordered, so it is kept as
    // Wine has it rather than sorted for readability.
    //
    // Wine offers each entry only when the underlying device really has it,
    // filtering the list through wined3d_check_device_format. The Wine trace
    // of the original shows what survived that filter on a real machine: six
    // formats, in order, B5G5R5X1, B5G5R5A1, B4G4R4A4, B5G6R5, B8G8R8X8 and
    // B8G8R8A8. Neither B2G3R3 nor P8 was offered, so the original never saw
    // them here and neither does this.
    //
    // The host now decodes full 32-bit texels, including alpha, so the
    // 32-bit pair is safe to expose after the original four formats.
    // No FourCC either: GetFourCCCodes reports none and CreateSurface refuses
    // one with DDERR_INVALIDPIXELFORMAT, so all three answers agree. The
    // original's only FourCC request is its 2x2 'PVRC' probe, which is meant
    // to fail.
    struct Fmt {
        uint32_t flags, bits, r, g, b, a;
    };
    const Fmt fmts[] = {
        {DDPF_RGB, 16, 0x7c00, 0x03e0, 0x001f, 0},                         // B5G5R5X1
        {DDPF_RGB | DDPF_ALPHAPIXELS, 16, 0x7c00, 0x03e0, 0x001f, 0x8000}, // B5G5R5A1
        {DDPF_RGB | DDPF_ALPHAPIXELS, 16, 0x0f00, 0x00f0, 0x000f, 0xf000}, // B4G4R4A4
        {DDPF_RGB, 16, 0xf800, 0x07e0, 0x001f, 0},                         // B5G6R5
        {DDPF_RGB, 32, 0xff0000, 0xff00, 0xff, 0},
        {DDPF_RGB | DDPF_ALPHAPIXELS, 32, 0xff0000, 0xff00, 0xff, 0xff000000},
    };
    for (const Fmt &f : fmts) {
        uint32_t d = scratch(DDSD_SIZE);
        if (!d)
            break;
        gm_zero(d, DDSD_SIZE);
        wr32(d + DDSD_OFF_dwSize, DDSD_SIZE);
        wr32(d + DDSD_OFF_dwFlags, DDSD_CAPS | DDSD_PIXELFORMAT);
        wr32(d + DDSD_OFF_ddsCaps, DDSCAPS_TEXTURE);
        uint32_t pf = d + DDSD_OFF_ddpfPixelFormat;
        wr32(pf + DDPF_OFF_dwSize, DDPF_SIZE);
        wr32(pf + DDPF_OFF_dwFlags, f.flags);
        wr32(pf + DDPF_OFF_dwRGBBitCount, f.bits);
        wr32(pf + DDPF_OFF_dwRBitMask, f.r);
        wr32(pf + DDPF_OFF_dwGBitMask, f.g);
        wr32(pf + DDPF_OFF_dwBBitMask, f.b);
        wr32(pf + DDPF_OFF_dwRGBAlphaBitMask, f.a);
        if (guest_call(c, cb, version3(c) ? pf : d, ctx) != DDENUMRET_OK)
            break;
    }
    com_ret(c, D3D_OK_);
}

void Device_BeginScene(X86 *c) {
    ComObj *dev = this_device(c);
    if (!dev) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    if (dev->in_scene) {
        com_ret(c, D3DERR_SCENEINSCENE);
        return;
    }
    dev->in_scene = true;
    host_d3d_begin_scene();
    com_ret(c, D3D_OK_);
}

void Device_EndScene(X86 *c) {
    ComObj *dev = this_device(c);
    if (!dev) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    if (!dev->in_scene) {
        com_ret(c, D3DERR_SCENENOTINSCENE);
        return;
    }
    dev->in_scene = false;
    host_d3d_end_scene();
    com_ret(c, D3D_OK_);
}

void Device_GetDirect3D(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t out = arg(c, 1);
    if (!dev || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // dev_d3d names the DirectDraw object the Direct3D interfaces belong to.
    ComObj *d3d = dev->dev_d3d ? com_get(dev->dev_d3d) : nullptr;
    if (!d3d) {
        com_out_ptr(out, 0);
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    com_addref(d3d);
    com_out_ptr(out, com_view(d3d, version3(c) ? IF_D3D3 : IF_D3D2));
    com_ret(c, D3D_OK_);
}

void Device_SetCurrentViewport(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t a = arg(c, 1);
    ComObj *v = a ? com_this(a, viewport_iface(c)) : nullptr;
    if (!dev || !v) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // The viewport has to belong to this device, as D3D requires.
    bool owned = false;
    for (uint32_t id : dev->viewports)
        if (id == v->id)
            owned = true;
    if (!owned) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    dev->current_viewport = v->id;
    com_ret(c, D3D_OK_);
}

void Device_GetCurrentViewport(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t out = arg(c, 1);
    if (!dev || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    ComObj *v = dev->current_viewport ? com_get(dev->current_viewport) : nullptr;
    if (!v) {
        com_out_ptr(out, 0);
        com_ret(c, DDERR_NOTFOUND);
        return;
    }
    com_addref(v);
    com_out_ptr(out, com_view(v, viewport_iface(c)));
    com_ret(c, D3D_OK_);
}

void Device_SetRenderTarget(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t a = arg(c, 1);
    ComObj *s = a ? com_this(a) : nullptr;
    if (!dev || !s || s->kind != K_SURFACE) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // Retain the incoming target BEFORE releasing the outgoing one. They can be
    // the same surface, and if the device holds its last reference, releasing
    // first destroys it and everything after that - the addref, the flush, the
    // host's new pointer - is working on a dead object.
    //
    // The ordering is the whole fix: re-setting the same surface is then one
    // addref against one release, which balances itself, so there is no
    // same-surface case to special-case.
    com_addref(s);
    if (dev->render_target) {
        ComObj *old = com_get(dev->render_target);
        if (old)
            com_release(old);
    }
    dev->render_target = s->id;
    set_render_target(s);
    com_ret(c, D3D_OK_);
}

void Device_GetRenderTarget(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t out = arg(c, 1);
    if (!dev || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    ComObj *s = dev->render_target ? com_get(dev->render_target) : nullptr;
    if (!s) {
        com_out_ptr(out, 0);
        com_ret(c, DDERR_NOTFOUND);
        return;
    }
    com_addref(s);
    com_out_ptr(out, com_view(s, version3(c) ? IF_DDSURFACE4 : IF_DDSURFACE));
    com_ret(c, D3D_OK_);
}

// --- Immediate mode: Begin / Vertex / Index / End.
// The vertices accumulate in guest scratch memory so the End submission looks
// exactly like a DrawPrimitive, and the host sees one command either way.
uint32_t g_im_buffer = 0;
uint32_t g_im_capacity = 0;
uint32_t g_im_count = 0;
uint32_t g_im_prim = 0, g_im_vtype = 0, g_im_stride = 0;
bool g_im_active = false;
std::vector<uint16_t> &im_indices() {
    static auto *v = new std::vector<uint16_t>();
    return *v;
}
uint32_t g_im_source = 0; // BeginIndexed's vertex array

bool im_reserve(uint32_t vertices) {
    uint32_t need = vertices * g_im_stride;
    if (g_im_capacity >= need)
        return true;
    uint32_t want = need < 4096 ? 4096 : need * 2;
    uint32_t a = heap_alloc(want, true, 16);
    if (!a)
        return false;
    if (g_im_buffer && g_im_count)
        memcpy(gm_ptr(a), gm_ptr(g_im_buffer), g_im_count * g_im_stride);
    if (g_im_buffer)
        heap_free(g_im_buffer);
    g_im_buffer = a;
    g_im_capacity = want;
    return true;
}

void Device_Begin(X86 *c) {
    ComObj *dev = this_device(c);
    if (!dev) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    g_im_prim = arg(c, 1);
    g_im_vtype = vertex_type(c, arg(c, 2));
    g_im_stride = d3d_vertex_stride(g_im_vtype);
    if (!g_im_stride) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    g_im_count = 0;
    g_im_source = 0;
    im_indices().clear();
    g_im_active = true;
    com_ret(c, D3D_OK_);
}

void Device_BeginIndexed(X86 *c) {
    ComObj *dev = this_device(c);
    if (!dev) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    g_im_prim = arg(c, 1);
    g_im_vtype = vertex_type(c, arg(c, 2));
    g_im_stride = d3d_vertex_stride(g_im_vtype);
    uint32_t verts = arg(c, 3);
    uint32_t nverts = arg(c, 4);
    if (!g_im_stride || !verts || !nverts || !gm_valid(verts, g_im_stride * nverts)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    g_im_source = verts;
    g_im_count = nverts;
    im_indices().clear();
    g_im_active = true;
    com_ret(c, D3D_OK_);
}

void Device_Vertex(X86 *c) {
    uint32_t v = arg(c, 1);
    if (!g_im_active || g_im_source) {
        com_ret(c, D3DERR_SCENENOTINSCENE);
        return;
    }
    if (!v || !gm_valid(v, g_im_stride)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (!im_reserve(g_im_count + 1)) {
        com_ret(c, DDERR_OUTOFMEMORY);
        return;
    }
    memcpy(gm_ptr(g_im_buffer + g_im_count * g_im_stride), gm_ptr(v), g_im_stride);
    ++g_im_count;
    com_ret(c, D3D_OK_);
}

void Device_Index(X86 *c) {
    if (!g_im_active) {
        com_ret(c, D3DERR_SCENENOTINSCENE);
        return;
    }
    im_indices().push_back((uint16_t)arg(c, 1));
    com_ret(c, D3D_OK_);
}

void Device_End(X86 *c) {
    ComObj *dev = this_device(c);
    if (!dev || !g_im_active) {
        com_ret(c, D3DERR_SCENENOTINSCENE);
        return;
    }
    g_im_active = false;
    uint32_t verts = g_im_source ? g_im_source : g_im_buffer;
    if (!verts || !g_im_count) {
        com_ret(c, D3D_OK_);
        return;
    }

    uint32_t idx_addr = 0, idx_count = (uint32_t)im_indices().size();
    if (idx_count) {
        // The index list has to reach the host through guest memory like every
        // other draw, so the one submit path stays the only one.
        idx_addr = heap_alloc(idx_count * 2, false, 16);
        if (!idx_addr) {
            com_ret(c, DDERR_OUTOFMEMORY);
            return;
        }
        memcpy(gm_ptr(idx_addr), im_indices().data(), idx_count * 2);
    }
    submit(c, dev, g_im_prim, g_im_vtype, verts, g_im_count, idx_addr, idx_count);
    if (idx_addr)
        heap_free(idx_addr);
    com_ret(c, D3D_OK_);
}

void Device_GetRenderState(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t type = arg(c, 1), out = arg(c, 2);
    if (!dev || !out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (type >= D3D_RENDERSTATE_MAX) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    wr32(out, dev->render_state[type]);
    com_ret(c, D3D_OK_);
}

void Device_SetRenderState(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t type = arg(c, 1), value = arg(c, 2);
    if (!dev) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    if (type >= D3D_RENDERSTATE_MAX) {
        log_once("d3d.rs.range", "d3d: render state %u is outside the DX6 range", type);
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    dev->render_state[type] = value;
    com_ret(c, D3D_OK_);
}

void Device_GetLightState(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t type = arg(c, 1), out = arg(c, 2);
    if (!dev || !out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (type >= D3D_LIGHTSTATE_MAX) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    wr32(out, dev->light_state[type]);
    com_ret(c, D3D_OK_);
}

void Device_SetLightState(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t type = arg(c, 1), value = arg(c, 2);
    if (!dev) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    if (type >= D3D_LIGHTSTATE_MAX) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    dev->light_state[type] = value;
    com_ret(c, D3D_OK_);
}

void Device_SetTransform(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t type = arg(c, 1), m = arg(c, 2);
    if (!dev || !m || !gm_valid(m, 64)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (type == 0 || type >= D3DTRANSFORMSTATE_MAX) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    for (int i = 0; i < 16; ++i)
        dev->transform[type][i] = rdf32(m + 4u * (uint32_t)i);
    dev->transform_set[type] = true;
    com_ret(c, D3D_OK_);
}

void Device_GetTransform(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t type = arg(c, 1), m = arg(c, 2);
    if (!dev || !m || !gm_valid(m, 64)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (type == 0 || type >= D3DTRANSFORMSTATE_MAX) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    for (int i = 0; i < 16; ++i)
        wrf32(m + 4u * (uint32_t)i, dev->transform[type][i]);
    com_ret(c, D3D_OK_);
}

void Device_MultiplyTransform(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t type = arg(c, 1), m = arg(c, 2);
    if (!dev || !m || !gm_valid(m, 64)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (type == 0 || type >= D3DTRANSFORMSTATE_MAX) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    float b[16], out[16];
    for (int i = 0; i < 16; ++i)
        b[i] = rdf32(m + 4u * (uint32_t)i);
    const float *a = dev->transform[type];
    // D3D matrices are row-major and multiply as current = current * new.
    for (int r = 0; r < 4; ++r)
        for (int col = 0; col < 4; ++col) {
            float s = 0.0f;
            for (int k = 0; k < 4; ++k)
                s += a[r * 4 + k] * b[k * 4 + col];
            out[r * 4 + col] = s;
        }
    memcpy(dev->transform[type], out, sizeof out);
    dev->transform_set[type] = true;
    com_ret(c, D3D_OK_);
}

void Device_DrawPrimitive(X86 *c) {
    ComObj *dev = this_device(c);
    if (!dev) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    uint32_t type = vertex_type(c, arg(c, 2));
    if (!d3d_vertex_stride(type)) {
        com_ret(c, DDERR_UNSUPPORTED);
        return;
    }
    submit(c, dev, arg(c, 1), type, arg(c, 3), arg(c, 4), 0, 0);
    com_ret(c, D3D_OK_);
}

void Device_DrawIndexedPrimitive(X86 *c) {
    ComObj *dev = this_device(c);
    if (!dev) {
        com_ret(c, DDERR_INVALIDOBJECT);
        return;
    }
    uint32_t type = vertex_type(c, arg(c, 2));
    if (!d3d_vertex_stride(type)) {
        com_ret(c, DDERR_UNSUPPORTED);
        return;
    }
    submit(c, dev, arg(c, 1), type, arg(c, 3), arg(c, 4), arg(c, 5), arg(c, 6));
    com_ret(c, D3D_OK_);
}

void Device_SetClipStatus(X86 *c) {
    com_ret(c, D3D_OK_);
}

void Device_GetClipStatus(X86 *c) {
    uint32_t out = arg(c, 1);
    // D3DCLIPSTATUS is dwFlags, dwStatus and six D3DVALUEs: 32 bytes. Clearing
    // 36 would overwrite the dword after the caller's structure.
    if (!out || !gm_valid(out, D3DCLIPSTATUS_SIZE)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    gm_zero(out, D3DCLIPSTATUS_SIZE);
    wr32(out, D3DCLIPSTATUS_STATUS);
    com_ret(c, D3D_OK_);
}

const ComMethod g_device2[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"GetCaps", 3, Device_GetCaps},
    {"SwapTextureHandles", 3, Device_SwapTextureHandles},
    {"GetStats", 2, Device_GetStats},
    {"AddViewport", 2, Device_AddViewport},
    {"DeleteViewport", 2, Device_DeleteViewport},
    {"NextViewport", 4, Device_NextViewport},
    {"EnumTextureFormats", 3, Device_EnumTextureFormats},
    {"BeginScene", 1, Device_BeginScene},
    {"EndScene", 1, Device_EndScene},
    {"GetDirect3D", 2, Device_GetDirect3D},
    {"SetCurrentViewport", 2, Device_SetCurrentViewport},
    {"GetCurrentViewport", 2, Device_GetCurrentViewport},
    {"SetRenderTarget", 3, Device_SetRenderTarget},
    {"GetRenderTarget", 2, Device_GetRenderTarget},
    {"Begin", 4, Device_Begin},
    {"BeginIndexed", 6, Device_BeginIndexed},
    {"Vertex", 2, Device_Vertex},
    {"Index", 2, Device_Index},
    {"End", 2, Device_End},
    {"GetRenderState", 3, Device_GetRenderState},
    {"SetRenderState", 3, Device_SetRenderState},
    {"GetLightState", 3, Device_GetLightState},
    {"SetLightState", 3, Device_SetLightState},
    {"SetTransform", 3, Device_SetTransform},
    {"GetTransform", 3, Device_GetTransform},
    {"MultiplyTransform", 3, Device_MultiplyTransform},
    {"DrawPrimitive", 6, Device_DrawPrimitive},
    {"DrawIndexedPrimitive", 8, Device_DrawIndexedPrimitive},
    {"SetClipStatus", 2, Device_SetClipStatus},
    {"GetClipStatus", 2, Device_GetClipStatus},
};

// ===========================================================================
// IDirect3D / IDirect3D2
// ===========================================================================
// The device GUIDs this Direct3D offers, in enumeration order. The HAL device
// is first because that is the one the game searches for.
struct DevEntry {
    const uint8_t *guid;
    const char *desc;
    const char *name;
    bool hardware;
};
const DevEntry g_devices[] = {
    {IID_IDirect3DHALDevice_, "Direct3D HAL", "popm hal", true},
    {IID_IDirect3DMMXDevice_, "Direct3D MMX emulation", "mmx", false},
    {IID_IDirect3DRGBDevice_, "Direct3D RGB emulation", "rgb", false},
    {IID_IDirect3DRampDevice_, "Direct3D Ramp emulation", "ramp", false},
};

bool guid_equals(uint32_t addr, const uint8_t want[16]) {
    return addr && gm_valid(addr, 16) && memcmp(gm_ptr(addr), want, 16) == 0;
}

void D3D_EnumDevices(X86 *c) {
    uint32_t cb = arg(c, 1), ctx = arg(c, 2);
    if (!cb) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    for (const DevEntry &e : g_devices) {
        // guid, description, name, hardware desc, software desc: five blocks
        // of guest memory the callback may read but not keep.
        uint32_t base = scratch(16 + 64 + 64 + 2 * D3DDEVICEDESC_SIZE);
        if (!base)
            break;
        uint32_t guid = base;
        uint32_t desc = base + 16;
        uint32_t name = base + 16 + 64;
        uint32_t hw = base + 16 + 128;
        uint32_t sw = hw + D3DDEVICEDESC_SIZE;
        memcpy(gm_ptr(guid), e.guid, 16);
        gm_put_str(desc, e.desc, 64);
        gm_put_str(name, e.name, 64);
        write_device_desc(hw, e.hardware);
        write_device_desc(sw, false);
        uint32_t cbargs[6] = {guid, desc, name, hw, sw, ctx};
        if (guest_call(c, cb, cbargs, 6) != DDENUMRET_OK)
            break;
    }
    com_ret(c, D3D_OK_);
}

void D3D_CreateLight(X86 *c) {
    ComObj *d3d = this_d3d(c);
    uint32_t out = arg(c, 1);
    if (!d3d || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    ComObj *l = com_new(K_LIGHT);
    uint32_t view = com_view(l, IF_D3DLIGHT);
    if (!view) {
        com_release(l);
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    com_out_ptr(out, view);
    com_ret(c, D3D_OK_);
}

void D3D_CreateMaterial(X86 *c) {
    ComObj *d3d = this_d3d(c);
    uint32_t out = arg(c, 1);
    if (!d3d || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    ComObj *m = com_new(K_MATERIAL);
    uint32_t view = com_view(m, version3(c) ? IF_D3DMATERIAL3 : IF_D3DMATERIAL2);
    if (!view) {
        com_release(m);
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    com_out_ptr(out, view);
    com_ret(c, D3D_OK_);
}

void D3D_CreateViewport(X86 *c) {
    ComObj *d3d = this_d3d(c);
    uint32_t out = arg(c, 1);
    if (!d3d || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    ComObj *v = com_new(K_VIEWPORT);
    uint32_t view = com_view(v, viewport_iface(c));
    if (!view) {
        com_release(v);
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    com_out_ptr(out, view);
    com_ret(c, D3D_OK_);
}

// Match the guest device search against the exposed hardware/software descriptors.
// Validate the complete guest output record before writing the selected capabilities.
void D3D_FindDevice(X86 *c) {
    uint32_t search = arg(c, 1), result = arg(c, 2);
    if (!search || !result || !gm_valid(search, 8) || !gm_valid(result, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (rd32(search + D3DFDS_OFF_dwSize) != D3DFDS_SIZE ||
        rd32(result + D3DFDR_OFF_dwSize) != D3DFDR_SIZE || !gm_valid(result, D3DFDR_SIZE)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    // The whole search record is read below, so it must all be addressable.
    if (!gm_valid(search, D3DFDS_SIZE)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    uint32_t flags = rd32(search + D3DFDS_OFF_dwFlags);
    bool want_hw = rd32(search + D3DFDS_OFF_bHardware) != 0;

    // A GUID search names one device exactly; that is what init_d3d does with
    // dwFlags = D3DFDS_GUID and IID_IDirect3DHALDevice.
    const DevEntry *found = nullptr;
    if (flags & D3DFDS_GUID) {
        uint32_t g = search + D3DFDS_OFF_guid;
        for (const DevEntry &e : g_devices)
            if (guid_equals(g, e.guid)) {
                found = &e;
                break;
            }
        // A GUID search that also constrains hardware must agree with it.
        if (found && (flags & D3DFDS_HARDWARE) && found->hardware != want_hw)
            found = nullptr;
    } else if (flags & D3DFDS_HARDWARE) {
        for (const DevEntry &e : g_devices)
            if (e.hardware == want_hw) {
                found = &e;
                break;
            }
    } else {
        found = &g_devices[0];
    }
    if (!found) {
        com_ret(c, DDERR_NOTFOUND);
        return;
    }

    gm_zero(result + 4, D3DFDR_SIZE - 4);
    memcpy(gm_ptr(result + D3DFDR_OFF_guid), found->guid, 16);
    write_device_desc(result + D3DFDR_OFF_ddHwDesc, found->hardware);
    write_device_desc(result + D3DFDR_OFF_ddSwDesc, false);
    LOGV("d3d: FindDevice matched %s", found->desc);
    com_ret(c, D3D_OK_);
}

// Create a COM device on the requested surface and install version-2 render defaults.
// The device retains its render target until COM teardown releases that ownership.
void D3D_CreateDevice(X86 *c) {
    ComObj *d3d = this_d3d(c);
    uint32_t guid = arg(c, 1);
    uint32_t surf = arg(c, 2);
    uint32_t out = arg(c, 3);
    if (!d3d || !out) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    com_out_ptr(out, 0);
    ComObj *target = surf ? com_this(surf) : nullptr;
    if (!target || target->kind != K_SURFACE) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }

    bool known = false;
    for (const DevEntry &e : g_devices)
        if (guid_equals(guid, e.guid))
            known = true;
    if (!known) {
        log_once("d3d.createdevice.guid",
                 "d3d: CreateDevice for an unrecognised device GUID; refusing");
        com_ret(c, DDERR_NOTFOUND);
        return;
    }
    // A render target must be a 3D-capable surface. The game passes its back
    // buffer, created with DDSCAPS_3DDEVICE.
    if (!(target->caps & DDSCAPS_3DDEVICE)) {
        log_once("d3d.rt.no3d",
                 "d3d: CreateDevice render target lacks DDSCAPS_3DDEVICE "
                 "(caps %08x); accepting anyway",
                 target->caps);
    }

    ComObj *dev = com_new(K_D3DDEVICE);
    // A device exists from here: the frame recorder classifies a frame as
    // gameplay or menu by exactly this, and the game destroys its device to
    // play a movie.
    ddraw_note_device(1);
    dev->dev_d3d = d3d->id;
    dev->render_target = target->id;
    com_addref(target);
    set_render_target(target);
    // The defaults Wine's d3d_device_create sets, for a version 2 device.
    //
    // ZENABLE is not a constant: Wine derives it from whether the render
    // target has a Z buffer attached (d3d_device_update_depth_stencil, which
    // is a GetAttachedSurface for DDSCAPS_ZBUFFER), and the trace shows that
    // lookup happening once as the level's device is made. A device on a
    // target with no depth must start with depth testing off, or everything
    // it draws is tested against a buffer that does not exist.
    dev->render_state[D3DRENDERSTATE_ZENABLE] = target->zbuffer_obj ? 1 : 0;
    dev->render_state[D3DRENDERSTATE_ZWRITEENABLE] = 1;
    dev->render_state[D3DRENDERSTATE_ZFUNC] = 4;           // D3DCMP_LESSEQUAL
    dev->render_state[D3DRENDERSTATE_FILLMODE] = 3;        // D3DFILL_SOLID
    dev->render_state[D3DRENDERSTATE_SHADEMODE] = 2;       // D3DSHADE_GOURAUD
    dev->render_state[D3DRENDERSTATE_CULLMODE] = 3;        // D3DCULL_CCW
    dev->render_state[D3DRENDERSTATE_SRCBLEND] = 2;        // D3DBLEND_ONE
    dev->render_state[D3DRENDERSTATE_DESTBLEND] = 1;       // D3DBLEND_ZERO
    dev->render_state[D3DRENDERSTATE_ALPHAFUNC] = 8;       // D3DCMP_ALWAYS
    dev->render_state[D3DRENDERSTATE_TEXTUREMAPBLEND] = 2; // D3DTBLEND_MODULATE
    dev->render_state[D3DRENDERSTATE_TEXTUREMAG] = 1;      // D3DFILTER_NEAREST
    dev->render_state[D3DRENDERSTATE_TEXTUREMIN] = 1;
    dev->render_state[D3DRENDERSTATE_TEXTUREADDRESS] = 1; // D3DTADDRESS_WRAP
    // Wine turns these two on when the device is made rather than leaving them
    // at the API default: SPECULARENABLE for a version 2 device specifically,
    // and NORMALIZENORMALS for every version below 7. A version 1 device would
    // instead get COLORKEYENABLE, which this one must not have.
    dev->render_state[D3DRENDERSTATE_SPECULARENABLE] = 1;
    dev->render_state[D3DRENDERSTATE_NORMALIZENORMALS] = 1;

    // DX6's first texture stage defaults to modulated colour and texture alpha.
    dev->texture_stage[1] = 4;                         // COLOROP = MODULATE
    dev->texture_stage[2] = dev->texture_stage[5] = 2; // ARG1 = TEXTURE
    dev->texture_stage[3] = dev->texture_stage[6] = 1; // ARG2 = CURRENT
    dev->texture_stage[4] = 2;                         // ALPHAOP = SELECTARG1
    dev->texture_stage[12] = dev->texture_stage[13] = dev->texture_stage[14] = 1;
    dev->texture_stage[16] = dev->texture_stage[17] = 1; // point filtering
    dev->texture_stage[18] = 1;                          // no mip filtering
    uint32_t view = com_view(dev, version3(c) ? IF_D3DDEVICE3 : IF_D3DDEVICE2);
    if (!view) {
        com_release(dev);
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    com_out_ptr(out, view);
    LOGV("d3d: created a device on the %ux%ux%u surface #%u", target->width, target->height,
         target->bpp, target->id);
    com_ret(c, D3D_OK_);
}

// IDirect3D (version 1) has Initialize/CreateLight/CreateMaterial/
// CreateViewport/FindDevice and no CreateDevice. Registered for completeness:
// nothing in this EXE references IID_IDirect3D from code.
DX_STUB(D3D1_Initialize, DDERR_INVALIDOBJECT)

const ComMethod g_d3d1[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"Initialize", 2, D3D1_Initialize},
    {"EnumDevices", 3, D3D_EnumDevices},
    {"CreateLight", 3, D3D_CreateLight},
    {"CreateMaterial", 3, D3D_CreateMaterial},
    {"CreateViewport", 3, D3D_CreateViewport},
    {"FindDevice", 3, D3D_FindDevice},
};

const ComMethod g_d3d2[] = {
    {"QueryInterface", 3, com_QueryInterface},
    {"AddRef", 1, com_AddRef},
    {"Release", 1, com_Release},
    {"EnumDevices", 3, D3D_EnumDevices},
    {"CreateLight", 3, D3D_CreateLight},
    {"CreateMaterial", 3, D3D_CreateMaterial},
    {"CreateViewport", 3, D3D_CreateViewport},
    {"FindDevice", 3, D3D_FindDevice},
    {"CreateDevice", 4, D3D_CreateDevice},
};

// Device3 owns its bound texture. The draw recorder still uses the surface's
// stable handle and revision lease, so texture writes and releases stay coherent.
void Device3_SetTexture(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t stage = arg(c, 1), ptr = arg(c, 2);
    ComObj *tex = ptr ? com_this(ptr, IF_D3DTEXTURE2) : nullptr;
    if (!dev || stage || (ptr && (!tex || tex->kind != K_SURFACE))) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    if (tex) {
        com_addref(tex);
        if (!tex->texture_handle) {
            tex->texture_handle = g_next_texture_handle++;
            bind_handle(tex->texture_handle, tex->id);
            d3d_upload_texture(tex);
        }
    }
    if (ComObj *old = com_get(dev->bound_texture))
        com_release(old);
    dev->bound_texture = tex ? tex->id : 0;
    dev->render_state[D3DRENDERSTATE_TEXTUREHANDLE] = tex ? tex->texture_handle : 0;
    com_ret(c, D3D_OK_);
}
void Device3_GetTexture(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t out = arg(c, 2);
    if (!dev || arg(c, 1) || !out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    ComObj *tex = com_get(dev->bound_texture);
    if (tex)
        com_addref(tex);
    wr32(out, tex ? com_view(tex, IF_D3DTEXTURE2) : 0);
    com_ret(c, D3D_OK_);
}

// Translate the single texture stage to the recorder's legacy blend modes.
// Stage zero CURRENT means DIFFUSE. Unsupported combiners fail validation.
bool stage_blend(ComObj *dev) {
    const uint32_t *s = dev->texture_stage;
    bool color_mod = s[1] == 4 && s[2] == 2 && s[3] <= 1;
    bool alpha_mod = s[4] == 4 && s[5] == 2 && s[6] <= 1;
    uint32_t blend = color_mod && alpha_mod                             ? 4
                     : color_mod && s[4] == 2 && s[5] == 2              ? 2
                     : s[1] == 2 && s[2] == 2 && s[4] == 2 && s[5] == 2 ? 1
                                                                        : 0;
    if (!blend)
        return false;
    dev->render_state[D3DRENDERSTATE_TEXTUREMAPBLEND] = blend;
    return true;
}
void Device3_GetTextureStageState(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t type = arg(c, 2), out = arg(c, 3);
    if (!dev || arg(c, 1) || !type || type >= 32 || !out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    wr32(out, dev->texture_stage[type]);
    com_ret(c, D3D_OK_);
}
void Device3_SetTextureStageState(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t type = arg(c, 2), value = arg(c, 3);
    if (!dev || arg(c, 1) || !type || type >= 32) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    switch (type) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        dev->texture_stage[type] = value;
        stage_blend(dev); // Calls can configure colour and alpha in either order.
        break;
    case 12:
    case 13:
    case 14: // ADDRESS, ADDRESSU, ADDRESSV
        if (value < 1 || value > 4) {
            com_ret(c, DDERR_UNSUPPORTED);
            return;
        }
        dev->texture_stage[type] = value;
        if (type == 12 || type == 13)
            dev->render_state[D3DRENDERSTATE_TEXTUREADDRESSU] = value;
        if (type == 12 || type == 14)
            dev->render_state[D3DRENDERSTATE_TEXTUREADDRESSV] = value;
        break;
    case 16:
    case 17: // MAGFILTER, MINFILTER
        if (value != 1 && value != 2) {
            com_ret(c, DDERR_UNSUPPORTED);
            return;
        }
        dev->texture_stage[type] = value;
        dev->render_state[type == 16 ? D3DRENDERSTATE_TEXTUREMAG : D3DRENDERSTATE_TEXTUREMIN] =
            value;
        break;
    case 11: // TEXCOORDINDEX: the advertised single coordinate set.
        if (value) {
            com_ret(c, DDERR_UNSUPPORTED);
            return;
        }
        dev->texture_stage[type] = value;
        break;
    default:
        com_ret(c, DDERR_UNSUPPORTED);
        return;
    }
    com_ret(c, D3D_OK_);
}
void Device3_ValidateDevice(X86 *c) {
    ComObj *dev = this_device(c);
    uint32_t out = arg(c, 1);
    if (!dev || !out || !gm_valid(out, 4)) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    wr32(out, 0);
    if (!stage_blend(dev)) {
        com_ret(c, DDERR_UNSUPPORTED);
        return;
    }
    wr32(out, 1);
    com_ret(c, D3D_OK_);
}
DX_STUB(Device3_DrawPrimitiveStrided, DDERR_UNSUPPORTED)
DX_STUB(Device3_DrawIndexedPrimitiveStrided, DDERR_UNSUPPORTED)
DX_STUB(Device3_DrawPrimitiveVB, DDERR_UNSUPPORTED)
DX_STUB(Device3_DrawIndexedPrimitiveVB, DDERR_UNSUPPORTED)
DX_STUB(Device3_ComputeSphereVisibility, DDERR_UNSUPPORTED)
DX_STUB(D3D3_CreateVertexBuffer, DDERR_UNSUPPORTED)
void D3D3_EnumZBufferFormats(X86 *c) {
    uint32_t cb = arg(c, 2), ctx = arg(c, 3);
    if (!this_d3d(c) || !cb) {
        com_ret(c, DDERR_INVALIDPARAMS);
        return;
    }
    bool known = false;
    for (const DevEntry &e : g_devices)
        known |= guid_equals(arg(c, 1), e.guid);
    if (!known) {
        com_ret(c, DDERR_NOTFOUND);
        return;
    }
    uint32_t pf = scratch(DDPF_SIZE);
    if (!pf) {
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    wr32(pf, DDPF_SIZE);
    wr32(pf + 4, DDPF_ZBUFFER);
    wr32(pf + 12, 16);
    wr32(pf + 20, 0xffff); // dwZBitMask, not the union's stencil-bit count.
    guest_call(c, cb, pf, ctx);
    com_ret(c, D3D_OK_);
}
void D3D3_EvictManagedTextures(X86 *c) {
    // Host uploads are revision-owned and can be recreated from surface bytes.
    uploaded_revisions().clear();
    com_ret(c, this_d3d(c) ? D3D_OK_ : DDERR_INVALIDOBJECT);
}
const auto g_d3d3 = [] {
    std::array<ComMethod, 12> m{};
    std::copy(std::begin(g_d3d2), std::end(g_d3d2), m.begin());
    m[8] = {"CreateDevice", 5, D3D_CreateDevice};
    m[9] = {"CreateVertexBuffer", 5, D3D3_CreateVertexBuffer};
    m[10] = {"EnumZBufferFormats", 4, D3D3_EnumZBufferFormats};
    m[11] = {"EvictManagedTextures", 1, D3D3_EvictManagedTextures};
    return m;
}();
const auto g_viewport3 = [] {
    std::array<ComMethod, 21> m{};
    std::copy(std::begin(g_viewport2), std::end(g_viewport2), m.begin());
    m[18] = {"SetBackgroundDepth2", 2, Viewport_SetBackgroundDepth};
    m[19] = {"GetBackgroundDepth2", 3, Viewport_GetBackgroundDepth};
    m[20] = {"Clear2", 7, Viewport_Clear2};
    return m;
}();
const auto g_device3 = [] {
    std::array<ComMethod, 42> m{};
    // Device3 removes Device2's slot 4 (SwapTextureHandles).
    std::copy(g_device2, g_device2 + 4, m.begin());
    std::copy(g_device2 + 5, std::end(g_device2), m.begin() + 4);
    m[32] = {"DrawPrimitiveStrided", 6, Device3_DrawPrimitiveStrided};
    m[33] = {"DrawIndexedPrimitiveStrided", 8, Device3_DrawIndexedPrimitiveStrided};
    m[34] = {"DrawPrimitiveVB", 6, Device3_DrawPrimitiveVB};
    m[35] = {"DrawIndexedPrimitiveVB", 6, Device3_DrawIndexedPrimitiveVB};
    m[36] = {"ComputeSphereVisibility", 6, Device3_ComputeSphereVisibility};
    m[37] = {"GetTexture", 3, Device3_GetTexture};
    m[38] = {"SetTexture", 3, Device3_SetTexture};
    m[39] = {"GetTextureStageState", 4, Device3_GetTextureStageState};
    m[40] = {"SetTextureStageState", 4, Device3_SetTextureStageState};
    m[41] = {"ValidateDevice", 2, Device3_ValidateDevice};
    return m;
}();

void device_destroy(ComObj *dev) {
    if (ComObj *t = com_get(dev->bound_texture))
        com_release(t);
    dev->bound_texture = 0;
    ddraw_note_device(0);
    for (uint32_t id : dev->viewports) {
        ComObj *v = com_get(id);
        if (v)
            com_release(v);
    }
    dev->viewports.clear();
    if (dev->render_target) {
        ComObj *s = com_get(dev->render_target);
        // set_render_target flushes the target it is leaving, which is the
        // last thing the device owes it.
        if (s && s->id == g_render_target)
            set_render_target(nullptr);
        dev->render_target = 0;
        if (s)
            com_release(s);
    }
}

void viewport_destroy(ComObj *v) {
    for (uint32_t id : v->lights) {
        ComObj *l = com_get(id);
        if (l)
            com_release(l);
    }
    v->lights.clear();
}

// QueryInterface on a surface may be asking for IDirect3DTexture2, which is
// the same object seen as a texture; com.cpp handles that through the view
// table, so the hook only has to allow it.
ComObj *surface_qi(ComObj *self, ComIface want) {
    if (want == IF_D3DTEXTURE2)
        return self;
    return nullptr;
}

} // namespace

// ---------------------------------------------------------------------------
// Cross-module entry points
// ---------------------------------------------------------------------------
// IDirect3D and IDirect3D2 are interfaces on the DirectDraw object itself, so
// there is nothing to create: com_view hands out another view of the same
// object, which shares its reference count and its controlling IUnknown. That
// is what DirectX does, and it is why releasing an IDirect3D2 decrements the
// same counter an IDirectDraw release does.
ComObj *d3d_for_ddraw(ComObj *dd) {
    return (dd && dd->kind == K_DDRAW) ? dd : nullptr;
}

// Any surface may be asked about, not only the current render target: a scene
// can still be waiting in the host for a surface the device has already
// stopped pointing at, and those pixels belong to that surface. The host
// answers for the one it holds pixels for and ignores every other, so this
// only has to describe the surface and ask.
void d3d_flush_surface(ComObj *s, const char *why) {
    if (!host_d3d_legacy_writeback())
        return;
    if (g_arena_discarded) {
        // The invariant, stated where it can be caught: after the arena goes,
        // the host has already been told to drop what it held, and nothing
        // should be asking a surface that no longer has memory for anything.
        log_once("d3d.flush.reset",
                 "d3d: a flush was asked for after the guest arena was discarded; "
                 "the pixels it would have been written to are gone, so nothing "
                 "was written");
        return;
    }
    if (!g_render_target_ever)
        return; // no device has ever named a target
    if (!s || s->kind != K_SURFACE || !s->pixels)
        return;
    HostD3DSurface d;
    describe_surface(s, &d);
    host_d3d_flush_surface(&d, why ? why : "?");
}

void d3d_forget_surface(ComObj *s) {
    if (s && s->texture_handle)
        uploaded_revisions().erase(s->texture_handle);
    if (!s || !g_render_target || s->id != g_render_target)
        return;
    set_render_target(nullptr);
}

void d3d_retarget_surface(ComObj *s) {
    if (!s || !g_render_target || s->id != g_render_target)
        return;
    set_render_target(s);
}

// Publish one texture revision, hashing the source content for replacement providers.
// Provider RGBA pixels augment the original descriptor so the renderer can retain both.
void d3d_upload_texture(ComObj *s) {
    if (!s || s->kind != K_SURFACE || !s->texture_handle || !s->pixels)
        return;
    s->tex_dirty = false;
    HostD3DTexture t;
    memset(&t, 0, sizeof t);
    t.handle = s->texture_handle;
    // The surface's own content revision. One number for both: a draw naming
    // revision 4 and a blit record naming revision 4 mean the same pixels.
    t.revision = ddraw_surface_revision(s->id);
    auto uploaded = uploaded_revisions().find(t.handle);
    if (uploaded != uploaded_revisions().end() && uploaded->second == t.revision)
        return;
    uploaded_revisions()[t.handle] = t.revision;
    t.pixels = gm_ptr(s->pixels);
    t.width = (int32_t)s->width;
    t.height = (int32_t)s->height;
    t.pitch = (int32_t)s->pitch;
    t.bpp = (int32_t)s->bpp;
    t.rmask = s->rmask;
    t.gmask = s->gmask;
    t.bmask = s->bmask;
    t.amask = s->amask;
    // ddraw_effective_palette, not the raw palette_obj, so the palette this
    // upload resolves against is the same one Palette_SetEntries uses to
    // decide which textures its change affects. Two different answers here
    // would leave a texture stale exactly when it mattered.
    const ComObj *pal = ddraw_effective_palette(s);
    t.palette = (s->bpp <= 8 && pal) ? pal->pal : nullptr;
    t.colorkey_lo = s->ckey_src_lo;
    t.colorkey_hi = s->ckey_src_hi;
    t.has_colorkey = s->has_ckey_src ? 1 : 0;

    // The DirectDraw texture handle is a slot number the game reuses, so it is
    // not an identity a mod can key on across runs. Hash the CONTENT instead:
    // pixels, palette and dimensions, FNV-1a, computed once per upload.
    uint64_t hash = 1469598103934665603ull;
    auto mix = [&hash](const void *p, size_t n) {
        const uint8_t *b = (const uint8_t *)p;
        for (size_t i = 0; i < n; ++i) {
            hash ^= b[i];
            hash *= 1099511628211ull;
        }
    };
    mix(&t.width, sizeof t.width);
    mix(&t.height, sizeof t.height);
    mix(&t.bpp, sizeof t.bpp);
    // The surface's STORAGE bytes per pixel, which is not its nominal depth
    // and not two for everything above eight. ddraw.cpp:84 is the rule and
    // this repeats it: 8 or less is one byte, 16 or less is two, anything
    // above is four. A 24-bpp surface is stored four bytes to the pixel, so
    // hashing three would leave a byte of every pixel out, and two textures
    // differing only there would be handed the same override.
    const size_t texel = t.bpp <= 8 ? 1u : (t.bpp <= 16 ? 2u : 4u);
    for (int32_t y = 0; y < t.height; ++y)
        mix((const uint8_t *)t.pixels + (size_t)y * t.pitch, (size_t)t.width * texel);
    if (t.palette)
        mix(t.palette, 256 * sizeof(uint32_t));

    const uint64_t mod_hash = hash; // retain the original provider hash contract
    mix(&t.rmask, sizeof(t.rmask));
    mix(&t.gmask, sizeof(t.gmask));
    mix(&t.bmask, sizeof(t.bmask));
    mix(&t.amask, sizeof(t.amask));
    mix(&t.has_colorkey, sizeof(t.has_colorkey));
    if (t.has_colorkey) {
        mix(&t.colorkey_lo, sizeof(t.colorkey_lo));
        mix(&t.colorkey_hi, sizeof(t.colorkey_hi));
    }
    t.content_hash = hash;
    PopTextureReplacement over{};
    if (mods_texture_override_ex(mod_hash, t.width, t.height, t.bpp, &over)) {
        HostD3DTexture rgba = t;
        rgba.original = &t;
        rgba.pixels = over.pixels;
        rgba.width = over.width;
        rgba.height = over.height;
        rgba.bpp = 32;
        rgba.pitch = over.pitch;
        rgba.rmask = 0x000000ffu;
        rgba.gmask = 0x0000ff00u;
        rgba.bmask = 0x00ff0000u;
        rgba.amask = 0xff000000u;
        rgba.palette = nullptr;
        rgba.has_colorkey = 0;
        host_d3d_texture(&rgba);
        return;
    }
    host_d3d_texture(&t);
}

void d3d_reset() {
    // The scratch block, the immediate-mode vertex buffer and every handle
    // mapping addressed the arena mem_init discarded.
    g_scratch = 0;
    g_scratch_size = 0;
    g_im_buffer = 0;
    g_im_capacity = 0;
    g_im_count = 0;
    g_im_source = 0;
    g_im_active = false;
    im_indices().clear();
    handles().clear();
    uploaded_revisions().clear();
    g_next_texture_handle = TEXTURE_HANDLE_BASE;
    g_next_material_handle = MATERIAL_HANDLE_BASE;
    // The render target went with the arena, and so did the surface its pixels
    // lived in. The host is told to DROP what it is holding, not to write it
    // back: host_d3d_set_render_target(nullptr) means "the device stopped
    // pointing at this", which is a reason to flush, and the memory to flush
    // into does not exist any more.
    g_render_target = 0;
    g_render_target_ever = false;
    g_arena_discarded = true;
    host_d3d_discard();
}

void d3d_register() {
    static bool done = false;
    if (done)
        return;
    done = true;

    com_define(IF_D3D, "DDRAW.dll", "IDirect3D", g_d3d1, std::size(g_d3d1));
    com_define(IF_D3D2, "DDRAW.dll", "IDirect3D2", g_d3d2, std::size(g_d3d2));
    com_define(IF_D3DDEVICE2, "DDRAW.dll", "IDirect3DDevice2", g_device2, std::size(g_device2));
    com_define(IF_D3DVIEWPORT2, "DDRAW.dll", "IDirect3DViewport2", g_viewport2,
               std::size(g_viewport2));
    com_define(IF_D3DMATERIAL2, "DDRAW.dll", "IDirect3DMaterial2", g_material2,
               std::size(g_material2));
    com_define(IF_D3DLIGHT, "DDRAW.dll", "IDirect3DLight", g_light, std::size(g_light));
    com_define(IF_D3DTEXTURE2, "DDRAW.dll", "IDirect3DTexture2", g_texture2, std::size(g_texture2));

    com_define(IF_D3D3, "DDRAW.dll", "IDirect3D3", g_d3d3.data(), g_d3d3.size());
    com_define(IF_D3DDEVICE3, "DDRAW.dll", "IDirect3DDevice3", g_device3.data(), g_device3.size());
    com_define(IF_D3DVIEWPORT3, "DDRAW.dll", "IDirect3DViewport3", g_viewport3.data(),
               g_viewport3.size());
    com_define(IF_D3DMATERIAL3, "DDRAW.dll", "IDirect3DMaterial3", g_material2,
               std::size(g_material2));
    com_bind(IF_D3D3, K_DDRAW);
    com_bind(IF_D3DDEVICE3, K_D3DDEVICE);
    com_bind(IF_D3DVIEWPORT3, K_VIEWPORT);
    com_bind(IF_D3DMATERIAL3, K_MATERIAL);
    com_register_iid(IF_D3D3, IID_IDirect3D3_);
    com_register_iid(IF_D3DDEVICE3, IID_IDirect3DDevice3_);
    com_register_iid(IF_D3DVIEWPORT3, IID_IDirect3DViewport3_);
    com_register_iid(IF_D3DMATERIAL3, IID_IDirect3DMaterial3_);

    // All Direct3D factory interfaces live on the DirectDraw object.
    com_bind(IF_D3D, K_DDRAW);
    com_bind(IF_D3D2, K_DDRAW);
    com_bind(IF_D3DDEVICE2, K_D3DDEVICE);
    com_bind(IF_D3DVIEWPORT2, K_VIEWPORT);
    com_bind(IF_D3DMATERIAL2, K_MATERIAL);
    com_bind(IF_D3DLIGHT, K_LIGHT);
    com_bind(IF_D3DTEXTURE2, K_SURFACE); // a texture is a view on a surface

    com_register_iid(IF_D3D, IID_IDirect3D_);
    com_register_iid(IF_D3D2, IID_IDirect3D2_);
    com_register_iid(IF_D3DDEVICE2, IID_IDirect3DDevice2_);
    com_register_iid(IF_D3DVIEWPORT2, IID_IDirect3DViewport2_);
    com_register_iid(IF_D3DMATERIAL2, IID_IDirect3DMaterial2_);
    com_register_iid(IF_D3DLIGHT, IID_IDirect3DLight_);
    com_register_iid(IF_D3DTEXTURE2, IID_IDirect3DTexture2_);

    com_set_destructor(K_D3DDEVICE, device_destroy);
    com_set_destructor(K_VIEWPORT, viewport_destroy);
    com_set_qi_hook(K_SURFACE, surface_qi);
}

void d3d_read_surface(ComObj *s, const int32_t *rect, HostReadReason reason) {
    if (!s || s->kind != K_SURFACE || !s->pixels || g_arena_discarded)
        return;
    HostD3DSurface d;
    describe_surface(s, &d);
    host_d3d_replay_barrier(&d, ddraw_surface_generation(s->id), ddraw_peek_seq());
    HostDirtyRect r{};
    if (rect)
        r = {rect[0], rect[1], rect[2], rect[3]};
    if (host_d3d_legacy_writeback())
        host_d3d_flush_surface(&d, "legacy reader");
    int rc =
        host_d3d_make_coherent(&d, ddraw_surface_generation(s->id), rect ? &r : nullptr, reason);
    // A GPU read can be refused for a while rather than for good: iOS denies
    // GPU work to a process in the background, and the command buffer of a
    // read the guest asked for around a background/foreground transition
    // completes with an error. The guest thread has nowhere to go until the
    // read succeeds, so ask again for up to a second before giving up.
    for (int attempt = 0; rc < 0 && attempt < 100; ++attempt) {
        os_sleep_us(10000);
        rc = host_d3d_make_coherent(&d, ddraw_surface_generation(s->id), rect ? &r : nullptr,
                                    reason);
    }
    if (rc < 0) {
        fprintf(stderr,
                "[host] coherence read failed for surface %u; refusing stale guest pixels\n",
                s->id);
        abort();
    }
}
void d3d_cpu_write(ComObj *s, const HostBlitRecord *r) {
    if (!s || !r)
        return;
    HostD3DSurface d;
    describe_surface(s, &d);
    host_d3d_prepare_cpu_write(&d, r->dst_generation, host_frame_current().id);
    host_d3d_apply_cpu(&d, r);
    for (int y = 0; y < r->h; ++y) {
        int x = 0;
        while (x < r->w) {
            while (x < r->w && r->coverage && !r->coverage[y * r->w + x])
                ++x;
            int start = x;
            while (x < r->w && (!r->coverage || r->coverage[y * r->w + x]))
                ++x;
            if (start < x)
                host_d3d_clean_pixels(
                    s->id, r->dst_generation,
                    {r->dst_x + start, r->dst_y + y, r->dst_x + x, r->dst_y + y + 1});
        }
    }
}

extern "C" int d3d_draw_inside_rect(const HostD3DDrawSnapshot *d, int32_t x0, int32_t y0,
                                    int32_t x1, int32_t y1) {
    return draw_inside(d, x0, y0, x1, y1);
}

// Read-only provenance seam: the resolver has already selected/filled the
// surface. Use the same handle table and content revision as DrawPrimitive.
extern "C" uint64_t host_sprite_frame_id() {
    return host_frame_current().id;
}
extern "C" uint32_t host_sprite_texture_revision(uint32_t handle) {
    ComObj *surface = object_for_handle(handle);
    return surface ? ddraw_surface_revision(surface->id) : 0;
}
