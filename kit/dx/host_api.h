// host_api.h - the callbacks the DirectX/audio/input shims make into the host
// application (Task 7: Metal presenter, Metal D3D renderer, AVAudioEngine,
// macOS input).
//
// Every function here has a weak no-op default in host_api.cpp, so this
// directory and its tests link with no host at all. Task 7 provides strong
// definitions and the linker prefers them. Building with -DRECOMP_NULL_HOST
// forces the no-op defaults to be strong, which is how a headless parity run
// guarantees nothing graphical or audible happens.
//
// All pointers handed to a host callback point into the guest arena (g_mem)
// and are only valid for the duration of the call. A host that needs the data
// afterwards must copy it. One callback writes rather than reads:
// host_d3d_flush_surface puts the device's rendering back into the surface's
// own pixels, because that is where a real HAL device would have put it.
#pragma once
#include <stdint.h>

// Guarded, because this header is also a C header: Task 1's ABI check compiles
// it as C11 to prove a plain-C consumer can use these types, and a bare
// extern "C" is a syntax error there.
#ifdef __cplusplus
extern "C" {
#endif

// These structs predate this header being a C header too. C needs the tag or a
// typedef to name them; C++ does not, which is why they were written without
// one. The typedefs are additive and change nothing for either language.
typedef struct HostD3DDraw HostD3DDraw;
typedef struct HostD3DSurface HostD3DSurface;
typedef struct HostD3DTexture HostD3DTexture;
typedef struct HostAudioPlay HostAudioPlay;
typedef struct HostInputState HostInputState;

// ---------------------------------------------------------------------------
// Presentation. Called when the primary surface's contents become visible:
// on Flip, on Unlock of the primary, and on a Blt whose destination is the
// primary. `bpp` is 8, 16 or 32. For 8 bpp, `palette` points at 256 entries of
// 0x00RRGGBB; for 16 bpp it is null and the pixels are 5-6-5; for 32 bpp it is
// null and the pixels are X8R8G8B8, a Direct3D 9 back buffer.
// `pitch` is the distance in bytes between rows.
// ---------------------------------------------------------------------------
void host_present(const void *pixels, int w, int h, int bpp, const uint32_t *palette, int pitch);

// The display mode the guest selected, before any surface exists.
void host_set_display_mode(int w, int h, int bpp);

// Optional rasterization size independent of the guest's UI/input canvas.
// Call at a renderer restart; 0,0 restores automatic drawable sizing.
void host_set_render_resolution(int w, int h);

// A pending host close lets long-running guest media loops finish cooperatively.
// Hosts without a boot loop report no request.
int host_close_requested(void);

// ---------------------------------------------------------------------------
// Direct3D command list. One host_d3d_draw per DrawPrimitive /
// DrawIndexedPrimitive, bracketed by begin/end scene.
// ---------------------------------------------------------------------------
/* Declared here, defined with the frame types below: the draw entry point
   above the frame section names it. */
struct HostD3DDrawSnapshot;

struct HostD3DDraw {
    uint32_t primitive_type; // D3DPT_*
    uint32_t vertex_type;    // D3DVT_*
    uint32_t vertex_stride;  // bytes per vertex
    uint32_t vertex_count;
    const void *vertices;
    const uint16_t *indices; // null when the draw is not indexed
    uint32_t index_count;
    uint32_t texture_handle; // 0 when untextured
    // Snapshot of the device render state, indexed by D3DRENDERSTATETYPE.
    const uint32_t *render_state;
    uint32_t render_state_count;
    // Column-major 4x4 matrices as the guest supplied them, or null when the
    // guest never set that transform (D3DVT_TLVERTEX draws are pre-transformed
    // and normally leave all three null).
    const float *world;
    const float *view;
    const float *projection;
    int32_t viewport[4]; // x, y, width, height
    float viewport_minz, viewport_maxz;
};
void host_d3d_begin_scene();
void host_d3d_end_scene();
// A draw, as the frame recorded it: everything it points at is arena-owned
// and lives as long as the frame. There is no borrowed guest pointer in it,
// which is what lets the renderer read it after DrawPrimitive has returned.
void host_d3d_draw(const struct HostD3DDrawSnapshot *d);
// Viewport::Clear. `rects` is `count` guest RECTs (left, top, right, bottom).
void host_d3d_clear(uint32_t flags, const int32_t *rects, uint32_t count, uint32_t color,
                    float depth);

// ---------------------------------------------------------------------------
// The Direct3D render target.
//
// A HAL device rasterizes into the DirectDraw surface it was given. The game
// then locks or blits over the same pixels and flips, so the rendering and the
// software drawing have to meet somewhere, and on real hardware they meet in
// that surface's memory. The host renders on the GPU instead, so the two only
// agree if the host copies its result into the surface before anything else
// reads or writes it - and reads the surface back in before it draws again,
// because a draw covers only the pixels its triangles touch and must leave the
// rest of the surface alone.
//
// `pixels` is supplied afresh on every call and never cached by the host:
// Flip swaps the memory behind a surface, so yesterday's pointer is a stale
// pointer. `id` is what stays the same, and is how the host recognises its own
// render target.
// ---------------------------------------------------------------------------
struct HostD3DSurface {
    uint32_t id;
    void *pixels;
    int32_t width, height, pitch, bpp;
    uint32_t rmask, gmask, bmask; // 0 when palettised
    const uint32_t *palette;      // 256 entries of 0x00RRGGBB, or null
};

// The device's render target was established or has changed - CreateDevice,
// SetRenderTarget, or a Flip that moved the pixels. Null when the device is
// gone.
void host_d3d_set_render_target(const HostD3DSurface *target);

// The guest arena every surface lived in has been discarded - mem_init() has
// unmapped it and dx_reset() is dropping the COM objects that pointed into it.
// Anything the device drew has nowhere to go: the host must drop it without
// writing, because every pixel pointer it was given names memory that is not
// there any more. This is the one case where losing a scene is correct.
void host_d3d_discard(void);

// The guest is about to read or write `surface` with the CPU, or present it.
// If it is the device's render target and the device has drawn into it since
// the last flush, the host must put those pixels into `surface->pixels`
// before returning. Called for every surface; the host ignores the ones that
// are not its target.
void host_d3d_flush_surface(const HostD3DSurface *surface, const char *why);

// A texture surface became a Direct3D texture, or its contents changed
// (IDirect3DTexture2::Load). `handle` is the value the guest sees from
// GetHandle and later passes as D3DRENDERSTATE_TEXTUREHANDLE.
struct HostD3DTexture {
    uint32_t handle;
    // Which content revision of that texture these pixels are. The renderer
    // keeps a copy per revision and a frame leases the one its draws used, so
    // a draw composited after the guest has re-uploaded still samples what it
    // was submitted with.
    uint32_t revision;
    const void *pixels;
    int32_t width, height, pitch;
    int32_t bpp;                         // 8, 16, 24 (four-byte storage), or 32
    uint32_t rmask, gmask, bmask, amask; // 0 when palettised
    const uint32_t *palette;             // 256 entries of 0x00RRGGBB, or null
    uint32_t colorkey_lo, colorkey_hi;
    int32_t has_colorkey;
    // Optional host-only replacement. Original retained for Classic/replay;
    // both descriptors are consumed synchronously, never pointer-retained.
    const HostD3DTexture *original;
    uint64_t content_hash; // includes format masks/key; stable pack identity
};
void host_d3d_texture(const HostD3DTexture *tex);
void host_d3d_texture_destroyed(uint32_t handle);
// A frame holds a texture revision from submission until the frame retires.
// Retain and release are counted; a revision that is neither current nor held
// is dropped. Both are no-ops for handle 0, which is "no texture".
/* Non-zero when the revision was there to hold. Zero means the renderer never
   received it, and the caller uploads and retains again. */
int host_d3d_texture_retain(uint32_t handle, uint32_t revision);
void host_d3d_texture_release(uint32_t handle, uint32_t revision);

// ---------------------------------------------------------------------------
// Audio. Channels are small integers: DirectSound secondary buffers and
// QMixer channels share one numbering handed out by the shims.
// `pcm` points at raw PCM in guest memory.
// ---------------------------------------------------------------------------
struct HostAudioPlay {
    int32_t channel;
    const void *pcm;
    uint32_t bytes;
    int32_t sample_rate;
    int32_t channels; // 1 or 2
    int32_t bits;     // 8 or 16
    int32_t loop;
    int32_t volume;        // hundredths of a dB, -10000..0
    int32_t pan;           // hundredths of a dB, -10000..10000
    uint32_t start_offset; // bytes into pcm
};
void host_audio_play(const HostAudioPlay *p);
// Turns a looping channel into an appendable stream, continuing from where it
// has reached rather than starting again: the remainder of the current lap is
// re-issued from the play cursor and everything after that is appended. A ring
// buffer the guest is rewriting is a stream, and this is how it says so.
// A playing one-shot is already appendable and keeps its existing schedule;
// conversion does not stop and restart it.
//
// Returns the byte position it resumed from, so the caller can align its own
// ring arithmetic to it, or -1 when there is no such channel. Calling it on a
// channel that is already a stream changes nothing and returns the current
// position.
//
// There is one join, at the moment of conversion, and it is at the cursor: no
// audio is repeated and none is skipped. Everything after it is gapless.
int32_t host_audio_stream(int32_t channel);

// Bytes of this stream that have been played since it became one, counted at
// the buffer's own sample rate and never going backwards. This is the cursor a
// streaming caller paces its writes against: it keeps advancing across a
// re-schedule, across an underrun and across a refill, because a ring's writer
// needs to know how far the reader has got and not how the host happens to be
// scheduling.
uint32_t host_audio_played_bytes(int32_t channel);

// Appends more PCM to a channel that is already playing, without stopping it.
// The buffer is scheduled behind whatever is still queued, so the join is
// sample-accurate and the render position never restarts: this is how a
// streamed wave is refilled, and copying at submit time instead puts an
// audible seam at every refill.
//
// The format is the channel's own, from the host_audio_play that started it.
// A queue is a continuation of that sound, not a new one, and nothing here
// changes the rate, the channel count or the sample size.
//
// Returns the bytes accepted: 0 when the channel was never played, when it is
// a loop rather than a stream, or when the PCM does not hold a whole sample
// frame. A caller that gets 0 has been told to start the sound with
// host_audio_play, or to convert it with host_audio_stream, rather than to
// continue it.
//
// A stream that has momentarily run dry still accepts: the chunk that arrives
// late is played late, and the underrun is logged once. Refusing it would send
// a streaming caller back to re-submitting the whole sound at every refill,
// which is a restart, which is exactly what streaming exists to avoid.
int32_t host_audio_queue(int32_t channel, const void *pcm, uint32_t bytes);

// Writes into a ring the host is already playing, where it lies.
//
// A DirectSound streaming buffer is a ring the guest rewrites as it plays: on
// hardware the cursor runs through that memory continuously and the writer
// stays ahead of it, so a lap costs nothing and there is no boundary anywhere.
// host_audio_queue is a different shape - each run scheduled behind the last -
// and the difference is audible, because the guest can only write a full ring
// once the cursor has come the whole way round, so its run always arrives just
// after the previous one finished playing. Measured on the intro: 25 ms of
// silence every 1.425 s, which is one lap of the 61440-byte ring.
//
// This writes into the samples already sounding instead. After the first call
// the host touches no node again: no stop, no reschedule, no completion, and
// so no seam of any kind. `offset` is where in the ring the bytes belong; a
// run that would cross the end of the ring is the caller's to split, because
// the two halves are two runs in play order.
//
// Returns the bytes taken, or 0 for a channel that has never been played.
// Prefer it to host_audio_queue whenever the offset is known, which for a
// DirectSound ring it always is.
int32_t host_audio_write(int32_t channel, const void *pcm, uint32_t offset, uint32_t bytes);

// Bytes appended to this channel that have not been played yet. This is what a
// streaming caller watches to know when to hand over the next chunk: it should
// append again well before this reaches zero, because a queue that drains is a
// seam whether or not more data arrives afterwards.
uint32_t host_audio_queued_bytes(int32_t channel);

// How much of what the VOICE is playing is still to play, the sound itself
// included - whether it arrived with a Play, was re-issued by a conversion, or
// replaced what was there before.
//
// The other question from host_audio_queued_bytes, deliberately. That one
// answers "how much of what you appended is still to play", which is the
// DirectSound streaming contract: a Play resets it, because a Play is a new
// sound and not a continuation. A caller pacing refills against a voice - one
// named channel at a time, which is how QMixer works - wants this one, because
// otherwise it is told nothing is outstanding thirty milliseconds into a
// second-and-a-half sound and refills immediately, every time.
//
// Zero means the voice has nothing left to play.
uint32_t host_audio_voice_remaining_bytes(int32_t channel);

void host_audio_stop(int32_t channel);
void host_audio_set_volume(int32_t channel, int32_t volume);
void host_audio_set_pan(int32_t channel, int32_t pan);
void host_audio_set_frequency(int32_t channel, uint32_t hz);
// Bytes the host has consumed on this channel, for GetCurrentPosition. A host
// that does not track playback returns 0, which reports the start of the
// buffer and is what a silent run should look like.
uint32_t host_audio_position(int32_t channel);
int32_t host_audio_is_playing(int32_t channel);

// ---------------------------------------------------------------------------
// Input. Filled by the host from the real mouse and keyboard.
// `keys` is indexed by DirectInput scan code (DIK_*); 0x80 means down.
// The mouse deltas are consumed: the host resets them once read.
// ---------------------------------------------------------------------------
struct HostInputState {
    int32_t mouse_x, mouse_y; // absolute, in client pixels
    int32_t mouse_dx, mouse_dy, mouse_dz;
    uint8_t mouse_buttons[8]; // 0x80 = down
    uint8_t keys[256];
};
void host_input_state(HostInputState *out);
// Optional window feedback, at mouse delivery under the guest baton.
void host_input_pointer_correction(int32_t *dx, int32_t *dy);

// ---------------------------------------------------------------------------
// The virtual gamepad. Merges every source the host feeds it (touch overlay,
// a real controller) into one pad and hands it to the DirectInput joystick
// and XInput shims (dx/dinput_joystick.cpp, dx/xinput.cpp). Strong
// definitions live in host/controls/vpad_host_api.cpp, over
// host/controls/vpad.{h,cpp}'s PadState; this header only fixes the ABI
// between the two sides, same as the display section above.
// ---------------------------------------------------------------------------
typedef struct HostPadState {
    uint16_t buttons; /* controls::PadBit */
    uint8_t hat;      /* controls::PadHat */
    uint8_t reserved;
    int16_t lx, ly, rx, ry; /* -32767..32767, +y down */
    uint8_t l2, r2;         /* 0..255 */
} HostPadState;
typedef struct HostPadEvent {
    uint32_t sequence;
    uint8_t kind;
    uint8_t index;
    int32_t value;
} HostPadEvent;
/* 0 off, 1 mapped, 2 native (RECOMP_CONTROLS_PAD). Weak default: 0. */
int host_pad_mode(void);
/* Bit 0: serve DirectInput joystick; bit 1: serve XInput. Weak default: 0. */
int host_pad_native_apis(void);
/* The merged pad. Returns a packet number that changes with the state. Weak
 * default: 0, zeroed. */
uint32_t host_pad_state(HostPadState *out);
/* The oldest edge newer than `after`. Weak default: 0 (none). */
int host_pad_next_event(uint32_t after, HostPadEvent *out);
/* Rumble request, 0..65535 each. Weak default: no-op. */
void host_pad_rumble(uint16_t low, uint16_t high);
/* Axis and button order for the DirectInput device (RECOMP_CONTROLS_NATIVE_*).
 * Weak defaults: the spec order. */
const char *host_pad_native_axes(void);
const char *host_pad_native_buttons(void);

// ---------------------------------------------------------------------------
// How the guest has been reaching its surfaces.
//
// Every counter is a way the guest can touch a surface's pixels, and which of
// them a frame used is what decides whether that frame can stay on the GPU or
// has to be read back. `clean_reads` counts the reads that needed no readback
// because nothing had been drawn since the last one, which is the number worth
// watching: a frame that is all clean reads costs nothing.
// ---------------------------------------------------------------------------
typedef struct HostAccessCounts {
    uint32_t lock_read, lock_write, getdc, blt_source, dstkey_read, duplicate, texture_load, flip,
        clean_reads;
} HostAccessCounts;
void host_access_counts(HostAccessCounts *out);

// ===========================================================================
// Display and performance: identities, leases, frames and draws.
//
// These names are the whole interface between the DirectX shims, the frame
// recorder, the renderer and the presenter. Later tasks implement them; this
// header fixes their shape so those tasks can be written against something
// that does not move.
//
// The ownership rules are stated once, in
// docs/superpowers/plans/display-lifetimes.md, and every lifetime comment
// here is a restatement of a rule in that file rather than a second source.
// ===========================================================================

// ---- identities -----------------------------------------------------------
// A surface is identified by its ComObj id. A REVISION is a particular content
// of that surface: the pair is what a lease names, so a lease cannot silently
// follow the surface into contents it was not taken against.
typedef uint32_t HostSurfaceId; /* ComObj id; HOST_SURFACE_NONE = 0 */
#define HOST_SURFACE_NONE 0u
// The source of a blit whose pixels came from the CPU rather than from another
// surface: a Lock or GetDC the shim diffed. Not a surface id, and never one.
#define HOST_SRC_CPU 0xffffffffu
typedef struct HostSurfaceKey {
    HostSurfaceId surface;
    uint32_t revision;
} HostSurfaceKey;

// ---- palettes -------------------------------------------------------------
// The version bumps on every palette write, so a frame records which palette
// its records were drawn against rather than reading whatever is current when
// it is finally composited.
uint32_t host_palette_version(void);
// 256*3 bytes, valid until the matching release. A frame leases the version it
// recorded and releases it with the frame.
const uint8_t *host_palette_lease(uint32_t version);
void host_palette_release(uint32_t version);

// ---- retained surface revisions -------------------------------------------
typedef struct HostPixels {
    const uint8_t *data;
    int w, h, pitch, bpp;
} HostPixels;
// 0 on success. While a lease exists the shim may not free that revision, so
// the pixels a frame recorded are still there when the frame is composited -
// which may be after the guest has drawn over the surface several times.
int host_revision_lease(HostSurfaceKey key, HostPixels *out);
void host_revision_release(HostSurfaceKey key);

// ---- blit records ---------------------------------------------------------
// One record per guest blit, in submission order. `coverage` and `cpu_pixels`
// point into the frame arena and live exactly as long as the frame.
typedef struct HostBlitRecord {
    uint32_t seq;
    HostSurfaceId dst;
    uint32_t dst_generation;
    int32_t dst_x, dst_y, w, h;
    HostSurfaceKey
        src; /* src.surface HOST_SURFACE_NONE for fills, HOST_SRC_CPU for lock/GetDC diffs */
    int32_t src_x, src_y;
    uint32_t fill_value;
    uint32_t src_key_lo, src_key_hi, dst_key_lo,
        dst_key_hi; /* the DDCOLORKEY ranges in effect; has_* below say whether they apply */
    uint8_t has_srckey, has_dstkey, is_upload, after_first_draw, after_first_hud;
    uint32_t palette_version;
    const uint8_t *coverage;   /* w*h bytes, owned by the frame arena */
    const uint8_t *cpu_pixels; /* for HOST_SRC_CPU only: w*h*bytes-per-pixel payload, frame arena */
    /* Amendment 3: the payload's own format. A CPU payload is not necessarily
     * in the destination's format, and guessing from the destination is how a
     * 16 bpp diff gets replayed as 8 bpp. */
    uint8_t cpu_bpp;
    int32_t cpu_pitch;
} HostBlitRecord;

// ---- frames ---------------------------------------------------------------
typedef enum HostScreenClass {
    HOST_SCREEN_MENU = 0,
    HOST_SCREEN_FMV = 1,
    HOST_SCREEN_GAMEPLAY = 2
} HostScreenClass;
typedef struct HostFrameHandle {
    uint64_t id;
} HostFrameHandle;
/* A frame arena is allocated at the first write after a seal and freed by host_frame_release; nothing in it moves. */
HostFrameHandle host_frame_current(void);
HostScreenClass host_frame_class(HostFrameHandle f); /* per amendment 9 */
uint32_t host_frame_record_count(HostFrameHandle f);
const HostBlitRecord *host_frame_record(HostFrameHandle f, uint32_t i);
uint32_t host_frame_first_hud_seq(HostFrameHandle f); /* UINT32_MAX when no HUD record */
int host_frame_had_draws(HostFrameHandle f);
HostSurfaceId host_frame_render_surface(HostFrameHandle f);
/* The display palette version this frame ended under. A frame whose only
 * change was a palette write - an 8-bit fade, a colour cycle - has a picture
 * that differs from the last one only in this, so the presenter needs it to
 * paint the frame in the colours it sealed with rather than in whatever the
 * guest has moved on to. */
uint32_t host_frame_palette_version(HostFrameHandle f);
HostSurfaceId
host_cursor_surface(void); /* the surface the game blits the cursor from, learned by the shim */
void host_frame_release(
    HostFrameHandle
        f); /* releases the arena and every lease the frame holds (revisions, palettes, textures), whether presented or dropped */

// ---- draws ----------------------------------------------------------------
// The device state a draw was submitted under, BY VALUE. A pointer into the
// device would be read at composite time, by which point the guest has moved
// on and the state would belong to some later draw.
#define HOST_D3D_RENDERSTATE_MAX 256u
#define HOST_D3D_LIGHTSTATE_MAX 32u
#define HOST_D3D_TRANSFORM_MAX 4u
/* The transform slots, by name. These ARE the D3DTRANSFORMSTATE values the
 * guest passes to SetTransform, so the snapshot and the guest agree without a
 * mapping table that could drift. */
#define HOST_D3D_TRANSFORM_WORLD 1u
#define HOST_D3D_TRANSFORM_VIEW 2u
#define HOST_D3D_TRANSFORM_PROJECTION 3u

// One light, as the guest described it. `data` is a copy of the guest's own
// D3DLIGHT record, taken into the frame arena at submission: a handle would be
// a way to read the light's CURRENT values at composite time, by which point
// the guest may have changed or released it.
typedef struct HostD3DLightValue {
    uint32_t handle;     /* the guest's own handle, for diagnostics only */
    uint32_t bytes;      /* size of the record `data` points at */
    const uint8_t *data; /* arena-owned copy of the guest's D3DLIGHT */
} HostD3DLightValue;

typedef struct HostD3DRenderState {
    uint32_t render_state[HOST_D3D_RENDERSTATE_MAX];
    uint32_t light_state[HOST_D3D_LIGHTSTATE_MAX];
    /* Indexed by D3DTRANSFORMSTATE, NOT packed: slot 0 is unused and the three
     * the guest can set are WORLD=1, VIEW=2, PROJECTION=3. The names below are
     * the only correct way to reach them; indexing 0, 1, 2 reads an absent
     * world and shifts the other two. */
    float transform[HOST_D3D_TRANSFORM_MAX][16]; /* column-major, as the guest supplied them */
    uint8_t transform_set
        [HOST_D3D_TRANSFORM_MAX]; /* a transform the guest never set is not zero, it is absent */
    int32_t viewport[4];          /* x, y, width, height */
    float viewport_minz, viewport_maxz;
    /* The background material's own record, copied into the frame arena. Null
     * with `material_bytes` 0 when the viewport has no background material. */
    const uint8_t *material;
    uint32_t material_bytes;
    /* Every light attached to the viewport, in its order, copied into the
     * arena. There is no cap: the guest may attach as many as it likes and a
     * frame that silently dropped the seventeenth would light differently
     * from the one the guest asked for. */
    const HostD3DLightValue *lights;
    uint32_t light_count;
} HostD3DRenderState;

/* Amendment 3: a frame's draw list replays Clear in order with the primitives,
 * because a Clear between two draws is part of the picture and reordering it
 * loses whatever the first draw put there. */
#define HOST_DRAW_PRIMITIVE 0u
#define HOST_DRAW_CLEAR 1u

typedef struct
    HostD3DDrawSnapshot { /* everything the renderer needs, copied into the frame arena at submission */
    uint32_t seq;
    uint8_t in_overlay_pass;
    uint8_t kind; /* HOST_DRAW_PRIMITIVE or HOST_DRAW_CLEAR */
    /* The topology, straight from the guest's DrawPrimitive: D3DPT_POINTLIST,
     * LINELIST, LINESTRIP, TRIANGLELIST, TRIANGLESTRIP, TRIANGLEFAN. Without
     * it a vertex buffer is just a list of points and the renderer would have
     * to guess how to join them. */
    uint32_t primitive_type;
    /* `fvf` is the flexible-vertex-format description of what `vertices`
     * holds. The guest speaks the older D3DVT_ vertex types, and the shim maps
     * them on the way in - all three are 32 bytes per vertex:
     *
     *   D3DVT_VERTEX   (1)  x y z  nx ny nz  tu tv      position, normal, uv
     *   D3DVT_LVERTEX  (2)  x y z  reserved  colour specular  tu tv
     *   D3DVT_TLVERTEX (3)  sx sy sz rhw  colour specular  tu tv  pre-transformed
     *
     * A D3DVT_TLVERTEX draw is already in screen space, which is why its world,
     * view and projection transforms are normally all absent. */
    const void *vertices;
    uint32_t vertex_count, vertex_stride, fvf;
    const uint16_t *indices;
    uint32_t index_count;
    uint32_t texture_handle, texture_revision; /* revision leased by the frame */
    HostD3DRenderState state; /* by value: render states, matrices, viewport, material, lights */
    /* The rectangle this draw covers, in guest screen coordinates, with max
     * EXCLUSIVE - the same convention as clear_rects and as every rectangle in
     * this API. An empty draw reports min above max, so no intersection test
     * can match it. */
    int32_t screen_min_x, screen_min_y, screen_max_x, screen_max_y;
    /* HOST_DRAW_CLEAR only. The rectangles are COPIED into the frame arena at
     * submission, like everything else here: the guest's own array is gone by
     * the time the frame is composited.
     *
     * `clear_rects` is 4 * clear_rect_count int32s - the guest's D3DRECTs laid
     * out as they arrived, x0, y0, x1, y1, with x1 and y1 EXCLUSIVE, in guest
     * screen space. Arena-owned and unbounded: the shim accepts up to 4096
     * rectangles in one Clear, so a fixed array here would silently clear less
     * of the screen than the guest asked for. */
    uint32_t clear_flags;
    uint32_t clear_rect_count;
    const int32_t *clear_rects;
    uint32_t clear_color;
    float clear_z;
} HostD3DDrawSnapshot;
uint32_t host_frame_draw_count(HostFrameHandle f);
const HostD3DDrawSnapshot *host_frame_draw(HostFrameHandle f, uint32_t i);

#ifdef __cplusplus
} // extern "C"
#endif
