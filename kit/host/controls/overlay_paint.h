// overlay_paint.h - the SDL/GPU-free half of Overlay: turns a ControlsView
// into pixels on a Canvas. Split out of overlay.cpp so controls_tests can
// exercise the exact pixels the app draws without linking a GPU backend.
#pragma once

#include "overlay.h"
#include "raster.h"

namespace controls {

// The keypad's look: a translucent backdrop behind each half, flat keys with
// light text that invert when lit, and tabs framed in the backdrop colour.
// Pad controls (buttons, dpad, sticks, actions) are pad_art.h's.
// Every fill and the text are `replace`d, not composited, so a key at alpha
// 220 overwrites the backdrop drawn under it at alpha 150 rather than
// blending with it. `r` is the raster's place on the drawable, so controls
// are drawn at (x - r.x, y - r.y).
// Layer `layer` of the view (ControlsView::layers) only: the controls area
// for layer 0, else that layout group's backdrop and controls.
void paint_layer(Canvas &c, const ControlsView &view, int layer, const Rect &r);

// Every layer in order, onto one canvas: what the per-layer rasters show
// when composed (layers never overlap outside portrait's controls area).
void paint_overlay(Canvas &c, const ControlsView &view, const Rect &r);

// An editing view's one layer (make_view(const Editor &, ...)): the dimmer
// over the whole drawable, the snap grid, the edited layout drawn the way it
// is in play, the selection's 3 px accent outline, the snap guides, and the
// toolbar and picker as key-style round rects. paint_layer calls this for
// every layer of an editing view, so the play path is untouched.
void paint_editor(Canvas &c, const ControlsView &view, const Rect &r);

} // namespace controls
