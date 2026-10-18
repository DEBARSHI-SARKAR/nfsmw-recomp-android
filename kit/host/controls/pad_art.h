// pad_art.h - the DualSense-styled look of the on-screen pad controls: face
// buttons with their glyphs, shoulders and triggers, the dpad, stick bases
// and knobs, and the small system buttons. Pure functions over a Canvas, so
// controls_tests checks their pixels without a GPU. Keys and toggles keep
// the keypad's flat look (overlay_paint.cpp).
// Design: docs/superpowers/specs/2026-09-17-touch-controls-design.md, 8.1.
#pragma once

#include "overlay.h"
#include "raster.h"

namespace controls {

// Paints a Button, Dpad, Stick or Action control at c.rect, offset by the
// canvas origin (ox, oy) in drawable pixels. A held stick's knob is not
// painted (Overlay draws it as its own quad); a resting stick's knob is,
// at the base's centre, so an idle stick still looks like one.
void paint_control(Canvas &cv, const DrawControl &c, int ox, int oy);

// A concave stick knob of radius r (knob_radius() of the stick's travel),
// centred on (cx, cy): a dark disc with its highlight up and to the left,
// brighter while pressed. Overlay paints it once into its own small texture.
void paint_knob(Canvas &cv, double cx, double cy, double r, bool pressed);

// The knob's radius for a stick whose travel is radius_px.
double knob_radius(int radius_px);

} // namespace controls
