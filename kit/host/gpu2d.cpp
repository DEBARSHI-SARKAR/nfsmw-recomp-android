// gpu2d.cpp - the hardware side of the Direct3D 11 2D path.
//
// The shim (dx/d3d11.cpp) decides which draws are axis-aligned textured
// rectangles a texel to a pixel, and sends those here instead of rasterizing
// them. This file keeps one GPU texture per shim texture and render target,
// encodes clears and rectangles on the presenter's device with the
// compositor's program, and hands a render target to the presenter at Present.
//
// Ordering. Everything goes on the device's one queue. Draws accumulate in one
// open command buffer; anything that touches a texture's contents from the CPU
// (an upload, a readback) first commits that buffer and waits for it, so the
// CPU never writes a texture the GPU is still to read, nor reads one it is
// still to write. A present commits the buffer before the frame is sealed, so
// the presenter composes after the draws that made it.
//
// Entry points run under the guest baton; the presenter's shutdown is the one
// call from another thread, so every entry point takes the state's lock.
#include "../runtime/display_seam.h"
#include "present.h"
#include "gpu/gpu.h"

#include <cstdio>
#include <cstring>
#include <map>
#include <mutex>
#include <vector>

namespace {

struct Surface {
    gpu::Texture texture;
    int w = 0, h = 0;
};
struct State {
    std::recursive_mutex lock;
    gpu::Device *device = nullptr;
    uint32_t generation = 1; // advances whenever every surface is dropped
    std::map<uint32_t, Surface> surfaces;
    gpu::CommandBuffer open, last;
    uint32_t pass_target = 0; // the render target of the open pass, 0 for none
};
State &state() {
    static State s;
    return s;
}

// The device, or null when there is none to draw on. A presenter that restarts
// on another device leaves every handle here meaningless, so they are
// forgotten rather than destroyed on a device that did not make them, and the
// generation tells the shim its copies are gone. A presenter that is merely
// stopped for a moment keeps them.
gpu::Device *device() {
    State &s = state();
    gpu::Device *d = host_present_gpu_ready() ? host_present_device() : nullptr;
    if (d && d != s.device) {
        s.surfaces.clear();
        ++s.generation;
        s.open = s.last = {};
        s.pass_target = 0;
        s.device = d;
    }
    return d;
}

void end_pass(gpu::Device *d) {
    State &s = state();
    if (s.pass_target) {
        d->end_render_pass(s.open);
        s.pass_target = 0;
    }
}
gpu::CommandBuffer command(gpu::Device *d) {
    State &s = state();
    if (!s.open)
        s.open = d->begin();
    return s.open;
}
void commit(gpu::Device *d) {
    State &s = state();
    end_pass(d);
    if (s.open) {
        d->commit(s.open);
        s.last = s.open;
        s.open = {};
    }
}
// Commit, then wait for everything committed so far.
void settle(gpu::Device *d) {
    State &s = state();
    commit(d);
    if (s.last) {
        d->wait(s.last);
        s.last = {};
    }
}

// The surface for `id`, created or resized to w x h. A resize discards the
// contents, as the shim's own reallocation does.
Surface *surface(gpu::Device *d, uint32_t id, int w, int h) {
    if (w <= 0 || h <= 0)
        return nullptr;
    Surface &t = state().surfaces[id];
    if (t.texture && (t.w != w || t.h != h)) {
        settle(d);
        d->destroy(t.texture);
        t = {};
    }
    if (!t.texture) {
        t.texture =
            d->create_texture({w, h, gpu::Format::RGBA8,
                               gpu::UsageSampled | gpu::UsageRenderTarget | gpu::UsageCpu, 1});
        if (!t.texture) {
            fprintf(stderr, "gpu2d: texture allocation failed (%dx%d)\n", w, h);
            state().surfaces.erase(id);
            return nullptr;
        }
        t.w = w;
        t.h = h;
    }
    return &t;
}

// Open a pass on `target`, loading what is there or clearing it.
void begin_pass(gpu::Device *d, uint32_t id, const Surface &target, const float *clear) {
    State &s = state();
    if (s.pass_target == id && !clear)
        return;
    end_pass(d);
    gpu::RenderPass pass;
    pass.color_count = 1;
    pass.color[0].texture = target.texture;
    pass.color[0].load = clear ? gpu::Load::Clear : gpu::Load::Load;
    pass.color[0].store = gpu::Store::Store;
    if (clear)
        for (int i = 0; i < 4; ++i)
            pass.color[0].clear[i] = clear[i];
    gpu::CommandBuffer cb = command(d);
    d->begin_render_pass(cb, pass);
    d->set_viewport(cb, {0, 0, double(target.w), double(target.h), 0, 1});
    s.pass_target = id;
}

gpu::Blend factor(int f) {
    return f >= 0 && f <= int(gpu::Blend::OneMinusDstColor) ? gpu::Blend(f) : gpu::Blend::One;
}

// The compositor program's quad, as host/gpu/shaders.md lays it out.
struct Quad {
    float rect[4], uv[4];
    float drawable[2];
    uint32_t opaque, pad;
};

} // namespace

extern "C" int host_gpu2d_available(void) {
    std::lock_guard held(state().lock);
    return device() != nullptr;
}

extern "C" uint32_t host_gpu2d_generation(void) {
    std::lock_guard held(state().lock);
    device();
    return state().generation;
}

extern "C" void host_gpu2d_texture(uint32_t id, int w, int h, const uint8_t *rgba, int x, int y,
                                   int rw, int rh) {
    std::lock_guard held(state().lock);
    gpu::Device *d = device();
    if (!d || !rgba || rw <= 0 || rh <= 0 || x < 0 || y < 0 || x + rw > w || y + rh > h)
        return;
    Surface *t = surface(d, id, w, h);
    if (!t)
        return;
    settle(d);
    d->upload(t->texture, {x, y, rw, rh}, rgba, rw * 4);
}

extern "C" void host_gpu2d_forget(uint32_t id) {
    std::lock_guard held(state().lock);
    gpu::Device *d = device();
    auto &surfaces = state().surfaces;
    auto it = surfaces.find(id);
    if (!d || it == surfaces.end())
        return;
    settle(d);
    d->destroy(it->second.texture);
    surfaces.erase(it);
}

extern "C" void host_gpu2d_reset(void) {
    std::lock_guard held(state().lock);
    gpu::Device *d = device();
    if (!d)
        return;
    settle(d);
    for (auto &kv : state().surfaces)
        d->destroy(kv.second.texture);
    state().surfaces.clear();
    ++state().generation;
}

extern "C" void host_gpu2d_clear(uint32_t id, int w, int h, const float rgba[4]) {
    std::lock_guard held(state().lock);
    gpu::Device *d = device();
    Surface *t = d ? surface(d, id, w, h) : nullptr;
    if (t)
        begin_pass(d, id, *t, rgba);
}

extern "C" int host_gpu2d_draw(uint32_t target, int w, int h, uint32_t texture,
                               const struct HostGpu2DQuad *q) {
    std::lock_guard held(state().lock);
    gpu::Device *d = device();
    if (!d || !q || q->w <= 0 || q->h <= 0)
        return 0;
    auto source = state().surfaces.find(texture);
    if (source == state().surfaces.end())
        return 0;
    const gpu::Texture src = source->second.texture;
    Surface *t = surface(d, target, w, h);
    if (!t)
        return 0;
    gpu::RenderState rs;
    rs.color_format[0] = gpu::Format::RGBA8;
    rs.color_count = 1;
    rs.blend_enabled = q->blend != 0;
    if (rs.blend_enabled) {
        rs.src_rgb = factor(q->src_rgb);
        rs.dst_rgb = factor(q->dst_rgb);
        rs.src_alpha = factor(q->src_alpha);
        rs.dst_alpha = factor(q->dst_alpha);
    }
    gpu::Pipeline p = d->render_pipeline("compositor", rs);
    if (!p)
        return 0;
    begin_pass(d, target, *t, nullptr);
    Quad quad{{float(q->x), float(q->y), float(q->w), float(q->h)},
              {float(q->u), float(q->v), float(q->uw), float(q->uh)},
              {float(w), float(h)},
              0,
              0};
    gpu::CommandBuffer cb = command(d);
    d->set_pipeline(cb, p);
    d->set_bytes(cb, gpu::Stage::Vertex, 0, &quad, sizeof quad);
    d->set_bytes(cb, gpu::Stage::Fragment, 0, &quad, sizeof quad);
    d->set_texture(cb, gpu::Stage::Fragment, 0, src);
    d->set_sampler(cb, gpu::Stage::Fragment, 0, gpu::SamplerState{});
    d->draw(cb, gpu::Primitive::TriangleStrip, 0, 4);
    return 1;
}

extern "C" int host_gpu2d_readback(uint32_t id, int w, int h, uint8_t *rgba) {
    std::lock_guard held(state().lock);
    gpu::Device *d = device();
    auto it = state().surfaces.find(id);
    if (!d || !rgba || it == state().surfaces.end() || it->second.w != w || it->second.h != h)
        return 0;
    settle(d);
    return d->readback(it->second.texture, {0, 0, w, h}, rgba, w * 4) ? 1 : 0;
}

// For the host that presents on the GPU (host/present.cpp): encode the copy
// into the frame and commit it, ahead of the seal.
bool host_gpu2d_stage(uint32_t id, int w, int h) {
    std::lock_guard held(state().lock);
    gpu::Device *d = device();
    auto it = state().surfaces.find(id);
    if (!d || it == state().surfaces.end() || it->second.w != w || it->second.h != h)
        return false;
    end_pass(d);
    const bool staged = host_present_stage_texture(it->second.texture, w, h, w, h, command(d));
    commit(d);
    return staged;
}

// For hosts that build their frames from CPU pixels (the smoke host): the
// render target read back and presented as a snapshot.
extern "C" void host_gpu2d_present_readback(uint32_t id, int w, int h) {
    std::lock_guard held(state().lock);
    std::vector<uint8_t> rgba(size_t(w) * h * 4);
    if (!host_gpu2d_readback(id, w, h, rgba.data()))
        return;
    std::vector<uint32_t> argb(size_t(w) * h);
    for (size_t i = 0; i < argb.size(); ++i) {
        uint32_t c;
        memcpy(&c, rgba.data() + 4 * i, 4);
        argb[i] = 0xff000000u | (c & 0xffu) << 16 | (c & 0xff00u) | (c >> 16 & 0xffu);
    }
    host_display_present_window(argb.data(), w, h);
}

// The presenter is stopping and its device may go with it. Anything still
// open is ended and committed, everything committed finishes, and every copy
// is dropped: Metal refuses to release a command encoder that was never ended.
void host_gpu2d_release_device() {
    State &s = state();
    std::lock_guard held(s.lock);
    if (!s.device)
        return;
    settle(s.device);
    for (auto &kv : s.surfaces)
        s.device->destroy(kv.second.texture);
    s.surfaces.clear();
    s.device = nullptr;
    ++s.generation;
}
