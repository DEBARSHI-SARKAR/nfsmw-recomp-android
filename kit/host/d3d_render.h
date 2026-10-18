// d3d_render.h - what the hosts, present.cpp and the tests need from the
// renderer behind host_d3d_draw.
#pragma once
#include <stdint.h>
#include "../dx/host_api.h"
#include "../dx/coherence.h"

// One vertex after the three D3DVT_ layouts have been decoded into the single
// shape the shader takes. Position is object space for D3DVT_VERTEX and
// D3DVT_LVERTEX, and already-clip-space for D3DVT_TLVERTEX, which the guest
// transformed itself.
struct HostD3DVertex {
    float x, y, z, w;
    float u, v;
    float r, g, b, a;     // diffuse, 0..1
    float sr, sg, sb, sa; // specular; its alpha is the vertex fog factor
};

// What a command's primitive becomes once expanded.
enum HostD3DPrimitive {
    HOST_D3D_POINTS = 0,
    HOST_D3D_LINES = 1,
    HOST_D3D_TRIANGLES = 2,
    HOST_D3D_UNSUPPORTED = -1,
};
enum HostD3DPrimitive host_d3d_primitive_kind(const struct HostD3DDraw *cmd);

// Decodes a command's vertices and expands its primitive into an independent
// list - triangles in threes, lines in pairs, points singly. Metal has no
// triangle fan, and expanding here is also what makes flat shading a matter of
// copying the first vertex's colour rather than a pipeline mode.
//
// `viewport` and the vertex type are used to turn D3DVT_TLVERTEX's screen
// coordinates back into clip space.
//
// Returns the number of vertices written, or -1 when the command names a
// primitive or a vertex type this renderer does not draw. Writes nothing past
// `max_out`; pass a null `out` to ask for the count.
int host_d3d_expand(const struct HostD3DDraw *cmd, struct HostD3DVertex *out, int max_out);

// Draws submitted since the last present. Non-zero means the frame about to be
// presented had the Direct3D device draw into it, which is this host's signal
// that the guest is in a level rather than in the front end: the menu renders
// in software into a DirectDraw surface and creates no device draws at all.
// The frame-rate acceptance uses it so a fast menu cannot stand in for
// gameplay.
uint32_t host_d3d_draws_since_present(void);
void host_d3d_note_presented(void);

// Guest thread seal boundary: closes/commits any open prefix without readback.
// EndScene is not a seal, so a pump can encounter an open batch.
void host_d3d_seal_commands(void);

// Cumulative storage allocations and bounded submissions, for regressions.
struct HostCommandStorageStats {
    uint64_t cpu_growths, argument_buffers, scene_textures;
    uint64_t early_submissions, parallel_readbacks;
};
struct HostHDTextureStats {
    uint64_t draws, loads, hits, refused, resident_bytes, budget_bytes;
    uint64_t detail_draws;
};
// Totals, for the run report.
uint32_t host_d3d_total_draws(void);
uint32_t host_d3d_total_textures(void);
// Whether the renderer still holds that revision of that texture. The property
// a frame's lease exists to give, and invisible from outside without this.
// C linkage, like the rest of the host API, because the shim calls it too.
extern "C" int host_render_texture_revision_alive_for_test(uint32_t handle, uint32_t revision);
// Drops every texture and revision, for a test that wants to count from zero.
extern "C" void host_render_reset_for_test(void);
// Frames the renderer put back into its render target's own memory. A gameplay
// run with a Direct3D device and none of these has a broken flush path.
uint32_t host_d3d_total_flushes(void);
// The largest observed share of the native render target above black, sampled
// from existing coherence, legacy and explicit scene readbacks. Partial reads
// contribute only their lit pixels divided by the whole target area (a lower
// bound); full reads give the exact ratio. No additional GPU readback is made.
// Alpha is excluded; host_d3d_reset_coherence starts a new observation interval.
double host_d3d_peak_nonblack(void);

// Drops coherence leases on targets the tracker no longer marks dirty.
void host_d3d_collect_present_targets();

#ifdef __cplusplus
#include "../dx/passes.h"
#include "gpu/gpu.h"
#include <memory>

// The renderer behind host_d3d_draw, over gpu.h. One instance per device; the
// shim callbacks use the shared one. main sets it once the device exists; the
// tests set their own.
// Test only: run the Direct3D 9 GPU renderer (d3d9_metal.mm) on `device`.
// False when the device is not Metal.
bool host_d9_use_device_for_test(gpu::Device *device);

class D3DRenderer {
  public:
    explicit D3DRenderer(gpu::Device *device);
    ~D3DRenderer();
    D3DRenderer(const D3DRenderer &) = delete;
    D3DRenderer &operator=(const D3DRenderer &) = delete;
    // False when the shaders or pipelines failed; nothing else may be called then.
    bool ok() const;
    static D3DRenderer *shared();
    static void setShared(D3DRenderer *renderer);
    gpu::Device *device() const;

    // The colour buffer the scene is drawn into. It mirrors the render target's
    // pixels; the surface's own memory is the copy that counts.
    gpu::Texture colorTarget() const;
    // Sealed-frame consumers use the frame's texture and completion, not the
    // mutable current target. The frame lease must cover GPU completion/present.
    gpu::Texture colorTargetForFrame(uint64_t frame);
    gpu::CommandBuffer completionForFrame(uint64_t frame);
    HostHDTextureStats hdTextureStats() const;
    HostCommandStorageStats commandStorageStats() const;

    // The device's render target, or null when the device goes away.
    void setRenderTarget(const struct HostD3DSurface *target);
    // Put anything drawn since the last flush into the surface's own pixels.
    void flushSurface(const struct HostD3DSurface *surface, const char *why);
    // The guest arena is gone. Drop everything pending without writing it: every
    // pixel pointer the renderer holds names memory that is not there any more.
    void discard();
    // Task 7 supplies drawable resolution here; zero restores guest dimensions.
    void setSceneWidth(int width, int height);
    void beginScene();
    void endScene();
    void sealCommands();
    void clearFlags(uint32_t flags, const int32_t *rects, uint32_t count, uint32_t color,
                    float depth);
    void draw(const struct HostD3DDraw *cmd);
    // The same draw, sampling a NAMED texture revision rather than whichever one
    // the guest has uploaded most recently. A frame is composited after the guest
    // has moved on, so "the current texture" is the wrong answer by then.
    void draw(const struct HostD3DDraw *cmd, uint32_t revision);
    void drawSnapshot(const struct HostD3DDrawSnapshot *d);
    void uploadTexture(const struct HostD3DTexture *tex);
    void destroyTexture(uint32_t handle);
    // A revision is kept while any frame holds it, and dropped when it is neither
    // the current one nor held. False when the renderer never received that
    // revision, so the caller can upload it and ask again.
    bool retainTexture(uint32_t handle, uint32_t revision);
    void releaseTexture(uint32_t handle, uint32_t revision);
    bool hasTexture(uint32_t handle, uint32_t revision);
    void forgetTexturesForTest();
    // Waits for the scene to finish and copies the colour target out as tightly
    // packed BGRA8. For the offscreen tests; nothing on the display path uses it.
    bool readPixels(void *out, int *width, int *height);
    bool acceptsDraw() const;
    void collectCleanTargets();
    int slotFor(uint32_t surface, uint32_t generation) const;
    void bindSurface(const struct HostD3DSurface *s, uint32_t generation, uint64_t frame);
    void sealFrame(uint64_t frame);
    void retireFrame(uint64_t frame);
    void swapSurface(uint32_t a, uint32_t ag, uint32_t b, uint32_t bg);
    bool coherentSurface(const struct HostD3DSurface *surface, uint32_t generation,
                         const struct HostDirtyRect *rects, uint32_t count);
    void applyCPU(const struct HostD3DSurface *surface, const struct HostBlitRecord *r);
    HostDrawMapping mappingForFrame(uint64_t frame, uint32_t seq) const;
    void replayBarrier(const struct HostD3DSurface *surface, uint32_t generation, uint32_t seq);
    bool replayLegacyFrame(uint64_t frame);

    struct Impl;

  private:
    std::unique_ptr<Impl> impl_;
};
#endif
