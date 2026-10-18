// overlay.h - draws the on-screen controls onto the drawable. make_view turns
// a layout and the router's live state into a flat list of what to draw (no
// GPU; overlay_view.cpp, unit-tested); Overlay rasterizes it into one
// premultiplied RGBA texture per layer (the portrait controls area, then one
// per layout group), re-rasterizing only the layers whose revision changed,
// and blends them with the hud pipeline, on the presenter worker's thread
// only. A held stick's knob is one more small texture blitted at its offset,
// so a moving knob never re-rasterizes.
// Design: docs/superpowers/specs/2026-09-17-touch-controls-design.md, 8.1.
#pragma once

#include "layout.h"

#include <cstdint>
#include <string>
#include <vector>

#include "../gpu/gpu.h"

namespace controls {

class Router;
class Editor;

// One control, resolved for drawing.
struct DrawControl {
    Kind kind = Kind::Key;
    Rect rect;
    std::string label;
    bool pressed = false;
    bool lit = false; // a latched or locked modifier key
    PadButton button = PadButton::Cross;
    double knob_x = 0, knob_y = 0; // Stick: [-1, 1], screen axes (y down)
    double base_x = 0, base_y = 0; // Stick: the base centre, drawable pixels
    int radius_px = 0;             // Stick: knob travel (and base radius), drawable pixels
    uint8_t hat = 0;               // Dpad: 1 up, 2 right, 4 down, 8 left
    bool floating = false;
    int layer = 0;             // ControlsView::layers index: its layout group's + 1
    bool group_visible = true; // Toggle: its target group is shown (else label_off is drawn)
    std::string label_off;
};

struct ControlsView {
    bool wanted = false;   // draw anything at all
    uint64_t revision = 0; // changes when anything below changes
    int dw = 0, dh = 0;
    double opacity = 1.0;
    std::vector<DrawControl> controls;
    std::vector<Rect> backdrops; // visible grid groups' boxes, drawn under their keys
    Rect controls_area;          // portrait: fill with the backdrop colour (Task 17)
    // The editor (editor.h), while it is open: one layer over the whole
    // drawable, dimmed, with the edited layout drawn on it. `selected` is
    // the index in `controls` of the selected control, `toolbar` and
    // `picker_rows` are drawn as key-style round rects, `picker` is the open
    // picker's box (empty: none), and `grid_step` is the snap grid's pitch
    // in drawable pixels, measured from `grid_area`'s top-left (0: no grid).
    bool editing = false;
    std::vector<Rect> guides;
    int selected = -1;
    std::vector<DrawControl> toolbar;
    std::vector<DrawControl> picker_rows;
    Rect picker;
    Rect grid_area;
    int grid_step = 0;
    // One raster each: layers[0] is the controls area, layers[g + 1] layout
    // group g (its backdrop and controls). `rect` is the union of what the
    // layer draws (empty: nothing), `revision` a hash of it alone.
    struct Layer {
        Rect rect;
        uint64_t revision = 0;
    };
    std::vector<Layer> layers;
    std::vector<int> backdrop_layers; // parallel to backdrops
};

// Every control a player can see, in layout order: visible groups' controls,
// and every toggle whether or not its own group is shown. While the router
// is toggles-only (an auto-hidden layout), only the toggles and no
// backdrops. Each layer's `revision` is a hash of what Overlay draws in it,
// so two calls that would draw the same pixels return the same revisions,
// and a plain key's press or a separate knob quad's offset forces no new
// raster. The view's own `revision` combines the layers and held knob
// positions, so the presenter still receives every visible stick movement.
ControlsView make_view(const Layout &l, const Router &r, const Screen &s, double opacity);

// The open editor's own view: the layout it is editing (every group, hidden
// ones included, since the editor's hit test reaches them), its selection,
// guides, toolbar and picker, on one layer covering the whole drawable. No
// router state and no opacity setting: an edited control is drawn at rest
// and in full. The revision follows Editor::generation(), which bumps on
// everything drawn here.
ControlsView make_view(const Editor &e, const Screen &s);

class Overlay {
  public:
    ~Overlay();
    // Re-rasterizes each layer whose revision or the drawable size changed,
    // then blends the layers and held knobs over `target`. Nothing while
    // !view.wanted.
    void draw(gpu::Device *device, gpu::CommandBuffer cb, gpu::Texture target, int w, int h,
              const ControlsView &view);

  private:
    struct Quad {
        gpu::Texture texture;
        Rect rect; // drawable pixels
    };
    // One layer's raster and what it was built for.
    struct LayerTexture {
        gpu::Texture texture;
        int tex_w = 0, tex_h = 0;
        Rect rect; // drawn at, drawable pixels; empty: nothing to draw
        bool built = false;
        uint64_t revision = 0;
    };
    void release();
    void update_layer(gpu::Device *device, const ControlsView &view, int index, int w, int h);
    void update_knob(gpu::Device *device, double opacity);
    void blit(gpu::Device *device, gpu::CommandBuffer cb, gpu::Texture target, int w, int h);

    gpu::Device *device_ = nullptr;
    std::vector<LayerTexture> layers_;
    int dw_ = 0, dh_ = 0;
    gpu::Texture knob_; // kKnobSize square, painted at knob_opacity_
    double knob_opacity_ = -1;
    std::vector<uint8_t> pixels_; // scratch for the layer being rasterized
    std::vector<Quad> quads_;     // this frame's blits, reused
};

} // namespace controls
