// window_presentation.h - the pointer-confinement arithmetic the window host
// uses, kept free of any window API so the tests can run it.
#pragma once
#include <algorithm>
#include <cmath>

struct HostRect {
    double x = 0, y = 0, w = 0, h = 0;
    bool empty() const {
        return w <= 0 || h <= 0;
    }
};

// Keep the associated, accelerated pointer away from desktop hot edges. Map
// this slightly inset travel area back onto every game pixel, including the
// outermost row/column used by edge scrolling. Reach the last pixel one point
// before the far clip boundary, independent of fractional boundary rounding.
inline HostRect host_pointer_confinement_rect(HostRect bounds) {
    if (bounds.w <= 10 || bounds.h <= 10)
        return {};
    return {bounds.x + 4, bounds.y + 4, bounds.w - 8, bounds.h - 8};
}
inline int host_confined_pointer_pixel(double point, double origin, double extent, int pixels,
                                       bool flip = false) {
    if (extent <= 1 || pixels <= 1)
        return 0;
    double t = std::clamp((point - origin) / (extent - 1), 0.0, 1.0);
    if (flip)
        t = 1.0 - t;
    return int(std::lround(t * (pixels - 1)));
}

// The screen size a game is told about. A phone held upright reports a
// portrait screen, but games choose a landscape mode from it and the portrait
// game rectangle needs a landscape image, so the longer side is always the width.
inline void host_landscape_screen_size(int w, int h, int *out_w, int *out_h) {
    *out_w = h > w ? h : w;
    *out_h = h > w ? w : h;
}
