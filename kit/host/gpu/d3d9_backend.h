// d3d9_backend.h - what a GPU backend implements to render the Direct3D 9
// device (dx/host_d9.h).
//
// d3d9_host.cpp owns the host_d9_* entry points: it queues the device's work
// for a render thread and calls one D9Backend from that thread, or from the
// game's thread while the render thread is idle. A backend therefore sees one
// caller at a time and needs no locking of its own for these calls.
//
// A backend is made from the host's gpu::Device by the factory for its API
// (Metal, Vulkan, WebGPU); the first factory that recognises the device wins.
#pragma once
#include "../../dx/host_d9.h"
#include "gpu.h"

#include <cstdint>

class D9Backend {
  public:
    virtual ~D9Backend() = default;
    virtual const char *name() const = 0;

    virtual void define(const HostD9TextureDesc &d) = 0;
    virtual void drop(uint32_t id) = 0;
    virtual void upload(uint32_t id, uint32_t face, uint32_t level, const uint8_t *bytes,
                        uint32_t pitch) = 0;
    virtual bool read(uint32_t id, uint32_t face, uint32_t level, uint8_t *bytes,
                      uint32_t pitch) = 0;

    virtual void buffer_upload(uint32_t id, uint32_t total, uint32_t offset, const uint8_t *bytes,
                               uint32_t size) = 0;
    virtual void buffer_drop(uint32_t id) = 0;

    virtual void draw(const HostD9Draw &d) = 0;
    virtual void clear(const HostD9Target &target, const int32_t vp[4], uint32_t count,
                       const int32_t *rects, uint32_t flags, uint32_t color, float z,
                       uint32_t stencil) = 0;
    virtual void stretch(HostD9Surface src, const int32_t sr[4], HostD9Surface dst,
                         const int32_t dr[4], uint32_t filter) = 0;
    virtual void present(uint32_t backbuffer, uint32_t w, uint32_t h) = 0;
    virtual bool read_presented(uint8_t *rgb, uint32_t cap, uint32_t *w, uint32_t *h) = 0;

    virtual void query_begin(uint32_t id) = 0;
    virtual void query_end(uint32_t id) = 0;
    // 1 with *count set, 0 while its frame is still running, -1 for no result.
    virtual int query_result(uint32_t id, uint32_t *count) = 0;
    virtual void query_drop(uint32_t id) = 0;

    virtual void probe_next(const char *tag) = 0;
};

// Each returns nullptr when `device` is not its API's, or when the renderer
// could not start. Defined by the backends this platform builds.
#ifdef __APPLE__
D9Backend *d9_metal_create(gpu::Device *device);
#endif
#ifdef RECOMP_D9_VULKAN
D9Backend *d9_vulkan_create(gpu::Device *device);
#endif
#ifdef __EMSCRIPTEN__
D9Backend *d9_webgpu_create(gpu::Device *device);
// The web: make the backend on the main thread before the game starts, then
// drain the game's queued work from the main loop once per frame. Work handed
// over between frames is drained as soon as the main thread is free; the main
// loop brackets its frame with host_d9_frame(true/false) so that a drain never
// starts inside it (a main thread waiting on a lock runs queued calls).
bool host_d9_web_start(gpu::Device *device);
void host_d9_pump(void);
void host_d9_frame(bool inside);
#endif
