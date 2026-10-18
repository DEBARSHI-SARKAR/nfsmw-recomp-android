/* host_api_header_test.c - host_api.h must compile as plain C11.
 *
 * It is a C header as well as a C++ one: the display interfaces cross into
 * tools and consumers that are not C++, and a bare `extern "C"` or a struct
 * without a typedef is a syntax error there rather than a warning. Compiled as
 * C11 by the host_api_header_test CMake object, which is the only way to know.
 *
 * It names every display type, so a type that stops being C-usable fails here
 * and not in whatever picks it up next. */
#include "dx/host_api.h"

int host_api_header_compiles_as_c(void);
int host_api_header_compiles_as_c(void) {
    HostSurfaceKey key = {HOST_SURFACE_NONE, 0u};
    HostPixels px = {0, 0, 0, 0, 0};
    HostBlitRecord blit;
    HostFrameHandle frame = {0};
    HostScreenClass cls = HOST_SCREEN_MENU;
    HostD3DLightValue light = {0u, 0u, 0};
    HostD3DRenderState state;
    HostD3DDrawSnapshot draw;
    HostAccessCounts counts;
    HostInputState input;
    HostD3DDraw cmd;
    HostD3DSurface surface;
    HostD3DTexture texture;
    HostAudioPlay play;
    HostPadState pad;
    HostPadEvent pad_event;

    blit.seq = 0u;
    blit.cpu_bpp = 0u;
    blit.cpu_pitch = 0;
    state.light_count = 0u;
    state.lights = &light;
    state.material = 0;
    draw.kind = HOST_DRAW_PRIMITIVE;
    draw.primitive_type = 0u;
    draw.clear_rects = 0;
    draw.clear_rect_count = 0u;
    counts.clean_reads = 0u;
    input.mouse_x = 0;
    cmd.vertex_count = 0u;
    surface.width = 0;
    texture.width = 0;
    play.channel = 0;
    pad.buttons = 0u;
    pad.hat = 0u;
    pad.reserved = 0u;
    pad.lx = 0;
    pad_event.sequence = 0u;
    pad_event.kind = 0u;
    pad_event.index = 0u;
    pad_event.value = 0;

    return (int)(key.surface + px.w + blit.seq + (uint32_t)frame.id + (uint32_t)cls +
                 state.light_count + draw.primitive_type + counts.clean_reads +
                 (uint32_t)input.mouse_x + cmd.vertex_count + pad.buttons + pad.hat + pad.reserved +
                 (uint32_t)pad.lx + pad_event.sequence + pad_event.kind + pad_event.index +
                 (uint32_t)pad_event.value);
}
