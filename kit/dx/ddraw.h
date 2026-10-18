// ddraw.h - what the rest of the DirectX layer tells the DirectDraw shim, and
// what it can ask back.
//
// The frame recorder lives in ddraw.cpp because that is where every write to a
// surface already passes. Two things it cannot see for itself happen in
// d3d.cpp - that the device drew, and that a device exists at all - so they
// are notifications rather than queries. Task 3 wires the d3d side; until then
// the tests call them directly, which is also how each one is tested.
#pragma once
#include <stdint.h>
#include "coherence.h"

struct HostD3DDrawSnapshot;
struct HostFrameHandle;

#ifdef __cplusplus
extern "C" {
#endif

// The last accepted SetDisplayMode. False before a mode is set, leaving the
// caller's values unchanged. Read under the guest baton, like other DX state.
bool ddraw_display_mode(uint32_t *w, uint32_t *h, uint32_t *bpp);
// Zero-based enumeration over the same offered modes SetDisplayMode accepts.
bool ddraw_enum_display_mode(uint32_t index, uint32_t *w, uint32_t *h, uint32_t *bpp);

// Host lifecycle registration, under the guest baton before/after scheduler life.
// seal runs before host_frame_current advances, after the palette is pinned.
void ddraw_set_present_callbacks(void (*first_write)(void), void (*seal)(void));
// GPU completion may request retirement from any thread. Reclamation touches
// guest-owned stores only on the next writer (or after presenter shutdown).
void ddraw_present_release(struct HostFrameHandle f);
void ddraw_drain_present_releases(void);

// A Direct3D draw was submitted. Everything blitted after this is "after the
// first draw", which is what tells a HUD blit from scenery.
void ddraw_note_draw(void);
// A blit the layer above recognised as HUD. Everything after it is overlay.
void ddraw_note_hud(void);
// Whether a Direct3D device currently exists. The screen class depends on it:
// the game destroys its device to play a movie and creates one again after.
void ddraw_note_device(int present);

// The production frame pump's boundary, called once per guest frame from the
// pump the message loop drives. One of the two places a frame can end; the
// other is a Flip of the primary chain. A frame with nothing in it seals
// nothing.
void ddraw_pump_present(void);

// ---------------------------------------------------------------------------
// The frame, for the layer that submits draws.
//
// A draw snapshot is a deep copy: vertices, indices, matrices, material and
// lights are all COPIED into the frame's arena at submission, because the
// guest's own buffers are its to reuse the instant DrawPrimitive returns and
// the frame is composited later. These four calls are how d3d.cpp puts one
// there without owning the frame.
// ---------------------------------------------------------------------------

// A surface's content revision, which is also the revision of the texture
// uploaded from it: one number, bumped by every write, so a draw and a blit
// record naming the same revision mean the same pixels.
uint32_t ddraw_surface_revision(uint32_t surface_id);
uint32_t ddraw_surface_generation(uint32_t surface_id);
// Called around a change to what a surface's pixels ARE, by a path that does
// not go through the DirectDraw write paths: a texture Load, a palette
// re-resolve, a handle swap. `before` preserves whatever a frame is holding;
// `after` moves the revision, so the upload that follows carries a revision
// nobody has leased.
void ddraw_before_write(struct ComObj *s);
void ddraw_after_write(struct ComObj *s);
// Notice writes through a pointer retained after Unlock before a reader can
// overwrite them. The rectangle is within the surface, with exclusive maxima.
void ddraw_refresh_retained_writes(struct ComObj *s, const int32_t rect[4]);
// IDirect3DTexture2::Load read a surface's pixels, which is one of the readers
// the coherence contract names.
void ddraw_note_texture_load(void);

// Memory in the current frame's arena. Freed with the frame, never before.
void *ddraw_frame_alloc(uint32_t bytes, uint32_t align);
uint64_t ddraw_frame_chunk_allocations_for_test(void);
// The next sequence number, in the SAME series as blit records: a frame is
// replayed in one order and a draw's place in it is a number, not a guess.
uint32_t ddraw_next_seq(void);
// Adds a filled snapshot to the current frame. The snapshot and everything it
// points at must come from ddraw_frame_alloc.
void ddraw_record_draw(struct HostD3DDrawSnapshot *d);
// The frame holds this texture revision until it is released, so a draw is
// composited with the pixels it was submitted with.
// Returns non-zero when the frame is holding that revision. Zero means the
// renderer never received it, and the caller uploads and asks again.
int ddraw_frame_lease_texture(uint32_t handle, uint32_t revision);

// ---------------------------------------------------------------------------
// Test seams. These exist because the properties they expose - how many bytes
// the retained store is holding, what revision a surface is on - are invisible
// from outside and are exactly what the recorder's tests are about.
// ---------------------------------------------------------------------------
void reset_ddraw_for_test(void);
uint32_t host_surface_revision_for_test(uint32_t surface_id);
// The surface's backing-storage generation, which is a different number from
// its content revision: a Flip changes where the pixels live without changing
// what they are. Both numbers move on a swap: the address changes, and so does
// what the surface holds, because afterwards it holds what the other one had.
uint32_t host_surface_generation_for_test(uint32_t surface_id);
// Moves a surface's storage - and with it its contents and both numbers - the
// way a Flip or a SetSurfaceDesc does, without needing a flip chain to do it.
void ddraw_storage_changed_for_test(uint32_t surface_id);
uint64_t host_retained_bytes_for_test(void);
// Seals the current frame the way the host's pump does on a primary present.
void pump_present_for_test(void);
// Zeroes the access counters. They are process-wide and cumulative, so a test
// that wants to count one path's accesses has to start from zero.
void ddraw_reset_access_counts(void);
// Forgets the parsed RECOMP_DDRAW_MODES table, so the next enumeration or
// SetDisplayMode re-reads the variable. The table is read once and kept - the
// environment does not change under a running game - so only a test that
// varies the variable needs it dropped.
void ddraw_reset_modes(void);
// Replaces the offered display modes while the game is running: the same
// syntax RECOMP_DDRAW_MODES takes, "640x480x8,1280x960x16". A null or empty
// spec restores the built-in six. Returns 0 on a malformed spec, leaving the
// table exactly as it was.
//
// This, and not the environment variable, is how a script forces one single
// mode. The variable restricts the list from process start, and this game
// selects 640x480x8 without first asking what is available: a list without it
// has that call refused and the guest, which does not check, takes a SIGBUS.
int ddraw_set_modes(const char *spec);
// Settings add a mode without removing other resolutions from the game menu.
int ddraw_add_mode(int w, int h, int bpp);

#ifdef __cplusplus
} // extern "C"
#endif

// Internal shim/renderer bridge; rectangles use exclusive maxima.
void d3d_read_surface(struct ComObj *, const int32_t *rect, HostReadReason);
void d3d_cpu_write(struct ComObj *, const HostBlitRecord *);
