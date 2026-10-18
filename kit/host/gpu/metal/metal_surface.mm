// metal_surface.mm - the CAMetalLayer side of the swapchain: refresh rate and
// the layer a test uses when it has no window.
#include "metal_device.h"

#import <TargetConditionals.h>
#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#else
#import <CoreGraphics/CoreGraphics.h>
#endif
#include <SDL3/SDL.h>
#include <SDL3/SDL_metal.h>

namespace gpu {

double MetalDevice::refresh_period(Swapchain s) {
    {
        std::lock_guard lock(mutex_);
        if (swapchains_.find(s.id) == swapchains_.end())
            return 1.0 / 60;
    }
    double hz = 0;
#if TARGET_OS_IPHONE
    hz = [UIScreen mainScreen].maximumFramesPerSecond;
#else
    // The layer does not know its display; the main display's rate is what the
    // AppKit host's CVDisplayLink reported for a single-display machine. Apple
    // laptops report 0 for an adaptive panel, which reads as 60.
    if (CGDisplayModeRef mode = CGDisplayCopyDisplayMode(CGMainDisplayID())) {
        hz = CGDisplayModeGetRefreshRate(mode);
        CGDisplayModeRelease(mode);
    }
#endif
    return hz > 1.0 ? 1.0 / hz : 1.0 / 60;
}

void *metal_native_surface_for_window(void *sdl_window) {
    SDL_MetalView view = SDL_Metal_CreateView(static_cast<SDL_Window *>(sdl_window));
    return view ? SDL_Metal_GetLayer(view) : nullptr;
}

void metal_release_window_surface(void *) {
    // The view is owned by the window; SDL_DestroyWindow releases it.
}

void *metal_test_native_surface(int w, int h) {
    CAMetalLayer *layer = [CAMetalLayer layer];
    layer.drawableSize = CGSizeMake(w, h);
    return (__bridge_retained void *)layer;
}

} // namespace gpu
