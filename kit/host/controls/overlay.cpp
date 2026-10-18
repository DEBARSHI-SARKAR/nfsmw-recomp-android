// overlay.cpp - the GPU half of overlay.h: one raster per layer, and the knobs.
#include "overlay.h"

#include "overlay_paint.h"
#include "pad_art.h"
#include "raster.h"

#include <algorithm>
#include <cmath>

namespace controls {

namespace {

// The knob texture's side: big enough for the largest stick on a 3x screen,
// and scaled linearly for any other.
constexpr int kKnobSize = 256;

} // namespace

Overlay::~Overlay() {
    release();
}

void Overlay::release() {
    if (device_) {
        for (LayerTexture &t : layers_)
            if (t.texture)
                device_->destroy(t.texture);
        if (knob_)
            device_->destroy(knob_);
    }
    layers_.clear();
    knob_ = gpu::Texture();
    knob_opacity_ = -1;
}

// Re-rasterizes and re-uploads layer `index` when its revision or the
// drawable size changed; any other layer's texture is left alone.
void Overlay::update_layer(gpu::Device *device, const ControlsView &view, int index, int w, int h) {
    LayerTexture &t = layers_[index];
    const ControlsView::Layer &layer = view.layers[index];
    if (t.built && t.revision == layer.revision && dw_ == w && dh_ == h)
        return;
    // Clip to the drawable.
    const Rect &r = layer.rect;
    const int x0 = std::max(0, r.x), y0 = std::max(0, r.y);
    const int x1 = std::min(w, r.x + r.w), y1 = std::min(h, r.y + r.h);
    const Rect clipped{x0, y0, x1 - x0, y1 - y0};
    t.built = true;
    t.revision = layer.revision;
    t.rect = clipped.empty() ? Rect{} : clipped;
    if (t.rect.empty())
        return;
    pixels_.assign(size_t(t.rect.w) * t.rect.h * 4, 0);
    Canvas c(pixels_, t.rect.w, t.rect.h, view.opacity);
    paint_layer(c, view, index, t.rect);
    if (!t.texture || t.tex_w != t.rect.w || t.tex_h != t.rect.h) {
        if (t.texture)
            device->destroy(t.texture);
        t.texture = device->create_texture(
            {t.rect.w, t.rect.h, gpu::Format::RGBA8, gpu::UsageSampled | gpu::UsageCpu, 1});
        t.tex_w = t.rect.w;
        t.tex_h = t.rect.h;
    }
    if (t.texture)
        device->upload(t.texture, {0, 0, t.rect.w, t.rect.h}, pixels_.data(), t.rect.w * 4);
}

// Paints the knob once, and again only when the opacity changes.
void Overlay::update_knob(gpu::Device *device, double opacity) {
    if (knob_ && knob_opacity_ == opacity)
        return;
    if (!knob_)
        knob_ = device->create_texture(
            {kKnobSize, kKnobSize, gpu::Format::RGBA8, gpu::UsageSampled | gpu::UsageCpu, 1});
    if (!knob_)
        return;
    std::vector<uint8_t> px(size_t(kKnobSize) * kKnobSize * 4, 0);
    Canvas c(px, kKnobSize, kKnobSize, opacity);
    paint_knob(c, kKnobSize / 2.0, kKnobSize / 2.0, kKnobSize / 2.0 - 1, true);
    device->upload(knob_, {0, 0, kKnobSize, kKnobSize}, px.data(), kKnobSize * 4);
    knob_opacity_ = opacity;
}

void Overlay::blit(gpu::Device *device, gpu::CommandBuffer cb, gpu::Texture target, int w, int h) {
    gpu::RenderState state;
    state.color_format[0] = device->describe(target).format;
    state.color_count = 1;
    state.blend_enabled = true;
    state.src_rgb = state.src_alpha = gpu::Blend::One;
    state.dst_rgb = state.dst_alpha = gpu::Blend::OneMinusSrcAlpha;
    gpu::Pipeline pipeline = device->render_pipeline("hud", state);
    if (!pipeline)
        return;
    gpu::RenderPass pass;
    pass.color_count = 1;
    pass.color[0].texture = target;
    pass.color[0].load = gpu::Load::Load;
    pass.color[0].store = gpu::Store::Store;
    device->begin_render_pass(cb, pass);
    device->set_pipeline(cb, pipeline);
    gpu::SamplerState linear;
    linear.mag = linear.min = gpu::Filter::Linear;
    for (const Quad &q : quads_) {
        // Clip-space rectangle: x, y of the top-left corner, width, and a
        // negative height (y up), the encoding the hud pipeline's strip used.
        const float x0 = -1.0f + 2.0f * float(q.rect.x) / float(w);
        const float y0 = 1.0f - 2.0f * float(q.rect.y) / float(h);
        float rect[] = {x0, y0, 2.0f * float(q.rect.w) / float(w),
                        -2.0f * float(q.rect.h) / float(h)};
        device->set_bytes(cb, gpu::Stage::Vertex, 0, rect, sizeof rect);
        device->set_texture(cb, gpu::Stage::Fragment, 0, q.texture);
        device->set_sampler(cb, gpu::Stage::Fragment, 0, linear);
        device->draw(cb, gpu::Primitive::TriangleStrip, 0, 4);
    }
    device->end_render_pass(cb);
}

void Overlay::draw(gpu::Device *device, gpu::CommandBuffer cb, gpu::Texture target, int w, int h,
                   const ControlsView &view) {
    if (!device || !target || !cb || w <= 0 || h <= 0 || !view.wanted)
        return;
    if (device_ != device) {
        release();
        device_ = device;
    }
    // A different layer count (a new layout) starts every layer afresh.
    if (layers_.size() != view.layers.size()) {
        for (LayerTexture &t : layers_)
            if (t.texture)
                device->destroy(t.texture);
        layers_.assign(view.layers.size(), LayerTexture{});
    }
    quads_.clear();
    for (int i = 0; i < int(layers_.size()); ++i) {
        update_layer(device, view, i, w, h);
        const LayerTexture &t = layers_[i];
        if (t.texture && !t.rect.empty() && t.tex_w == t.rect.w && t.tex_h == t.rect.h)
            quads_.push_back({t.texture, t.rect});
    }
    dw_ = w;
    dh_ = h;
    // Every held stick's knob, at its base plus the offset.
    for (const DrawControl &d : view.controls) {
        if (d.kind != Kind::Stick || !d.pressed || d.radius_px <= 0)
            continue;
        update_knob(device, view.opacity);
        if (!knob_)
            break;
        const int kr = int(std::lround(knob_radius(d.radius_px)));
        const double cx = d.base_x + d.knob_x * d.radius_px;
        const double cy = d.base_y + d.knob_y * d.radius_px;
        quads_.push_back(
            {knob_, Rect{int(std::lround(cx)) - kr, int(std::lround(cy)) - kr, 2 * kr, 2 * kr}});
    }
    if (!quads_.empty())
        blit(device, cb, target, w, h);
}

} // namespace controls
