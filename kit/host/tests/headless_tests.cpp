// Exercise the production file-writing presenter without booting a game.
// Renaming its entry point keeps the capture/report code identical to headless.
#define main headless_guest_main
#include "../headless_main.cpp"
#undef main
#include "../../runtime/imports.h"
#include "../../runtime/memory.h"
#include <fstream>
#include "../../dx/com.h"
#include "../../dx/dx.h"
#include "../../dx/dxtypes.h"

static int checks = 0, failures = 0;
static void check(bool ok, const char *what) {
    ++checks;
    if (!ok) {
        ++failures;
        fprintf(stderr, "FAIL: %s\n", what);
    }
}
static uint32_t invoke(X86 &c, uint32_t target, const std::vector<uint32_t> &values) {
    uint32_t sp = c.r[R_ESP];
    if (!target) {
        check(false, "shim exists");
        return 0;
    }
    for (auto i = values.rbegin(); i != values.rend(); ++i) {
        c.r[R_ESP] -= 4;
        wr32(c.r[R_ESP], *i);
    }
    c.r[R_ESP] -= 4;
    wr32(c.r[R_ESP], 0);
    imports_dispatch(&c, target);
    check(c.r[R_ESP] == sp, "stdcall stack balance");
    return c.r[R_EAX];
}
static uint32_t call(X86 &c, const char *dll, const char *name,
                     std::initializer_list<uint32_t> args) {
    return invoke(c, imports_resolve(dll, name), args);
}
static uint32_t method(X86 &c, uint32_t object, uint32_t slot,
                       std::initializer_list<uint32_t> args = {}) {
    std::vector<uint32_t> values{object};
    values.insert(values.end(), args);
    return invoke(c, rd32(rd32(object) + slot * 4), values);
}
static uint32_t frame_pixel(int x, int y) {
    if (g_frames.empty() || g_frames.back().path.empty())
        return 0xffffffff;
    std::ifstream f(g_frames.back().path, std::ios::binary);
    std::string magic;
    int w = 0, h = 0, max = 0;
    f >> magic >> w >> h >> max;
    f.get();
    if (magic != "P6" || max != 255 || x < 0 || y < 0 || x >= w || y >= h)
        return 0xffffffff;
    f.seekg((size_t(y) * w + x) * 3, std::ios::cur);
    unsigned char p[3] = {};
    f.read(reinterpret_cast<char *>(p), 3);
    return f ? uint32_t(p[0]) << 16 | uint32_t(p[1]) << 8 | p[2] : 0xffffffff;
}
int main(int argc, char **argv) {
    if (argc != 2)
        return 2;
    g_frames_dir = argv[1];
    g_frame_every = 1;
    mkdir_p(g_frames_dir);
    mem_init();
    imports_init();
    dx_register_shims();
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00300000;
    gm_put_wstr(s + 0x100, "CaptureWindow", 32);
    wr32(s + 4, imports_resolve("USER32.dll", "DefWindowProcW"));
    wr32(s + 36, s + 0x100);
    call(c, "USER32.dll", "RegisterClassW", {s});
    auto window = [&](uint32_t ex, uint32_t style, int x, int y, uint32_t parent = 0) {
        return call(
            c, "USER32.dll", "CreateWindowExW",
            {ex, s + 0x100, 0, style, uint32_t(x), uint32_t(y), 16, 16, parent, 0, IMAGE_BASE, 0});
    };
    uint32_t hwnd = window(0, 0x10000000, 0, 0);
    uint32_t blue = call(c, "GDI32.dll", "CreateSolidBrush", {0xff0000});
    uint32_t red = call(c, "GDI32.dll", "CreateSolidBrush", {0xff});
    uint32_t rect = s + 0x200, ps = s + 0x300, msg = s + 0x400;
    wr32(rect, 2);
    wr32(rect + 4, 2);
    wr32(rect + 8, 12);
    wr32(rect + 12, 12);
    uint32_t dc = call(c, "USER32.dll", "BeginPaint", {hwnd, ps});
    call(c, "USER32.dll", "FillRect", {dc, rect, blue});
    call(c, "USER32.dll", "EndPaint", {hwnd, ps});
    check(g_present_count == 1 && g_frames_written == 1, "EndPaint writes one captured frame");
    check(frame_pixel(4, 4) == 0x0000ff, "FillRect blue survives ARGB to PPM conversion");

    dc = call(c, "USER32.dll", "GetDC", {hwnd});
    call(c, "USER32.dll", "FillRect", {dc, rect, red});
    call(c, "USER32.dll", "PeekMessageW", {msg, 0, 0x9000, 0x9000, 1});
    check(g_present_count == 2 && frame_pixel(4, 4) == 0xff0000,
          "message pump presents dirty pixels while the DC is retained");
    call(c, "USER32.dll", "PeekMessageW", {msg, 0, 0x9000, 0x9000, 1});
    call(c, "USER32.dll", "ReleaseDC", {hwnd, dc});
    check(g_present_count == 2, "clean pump and DC release do not invent frames");

    // A static form gets no more WM_PAINT, but the display still refreshes.
    // Pinning changes guest time once per present, never once per paint/poll.
    host_set_time_source_pinned(100, 50);
    uint32_t refresh_start = g_present_count;
    for (unsigned n = 0; n < 4; ++n) {
        os_sleep_us(20000);
        headless_tick();
        check(g_present_count == refresh_start + n + 1,
              "painted-once window presents once on each display tick");
        check(host_pinned_clock_value() == 100 + (n + 1) * 50,
              "each window refresh advances the pinned clock once");
    }
    check(frame_pixel(4, 4) == 0xff0000, "refresh captures the unchanged painted pixels");
    host_set_time_source(nullptr);

    uint32_t top = window(8, 0x10000000, 0, 0);
    dc = call(c, "USER32.dll", "GetDC", {top});
    call(c, "USER32.dll", "FillRect", {dc, rect, blue});
    call(c, "USER32.dll", "ReleaseDC", {top, dc});
    uint32_t later = window(0, 0x10000000, 0, 0);
    dc = call(c, "USER32.dll", "GetDC", {later});
    call(c, "USER32.dll", "FillRect", {dc, rect, red});
    call(c, "USER32.dll", "ReleaseDC", {later, dc});
    check(frame_pixel(4, 4) == 0x0000ff, "topmost surface composites after later ordinary windows");

    uint32_t hidden = window(0, 0, 0, 0), before = g_present_count;
    dc = call(c, "USER32.dll", "GetDC", {hidden});
    call(c, "USER32.dll", "FillRect", {dc, rect, red});
    call(c, "USER32.dll", "ReleaseDC", {hidden, dc});
    call(c, "USER32.dll", "PeekMessageW", {msg, 0, 0x9000, 0x9000, 1});
    check(g_present_count == before, "hidden dirty windows do not present");
    call(c, "DDRAW.dll", "DirectDrawCreate", {0, s + 0x500, 0});
    uint32_t dd = rd32(s + 0x500), desc = s + 0x600;
    method(c, dd, 21, {640, 480, 16}); // SetDisplayMode
    wr32(desc, DDSD_SIZE);
    wr32(desc + DDSD_OFF_dwFlags, DDSD_CAPS);
    wr32(desc + DDSD_OFF_ddsCaps, DDSCAPS_PRIMARYSURFACE);
    method(c, dd, 6, {desc, s + 0x504, 0}); // CreateSurface
    uint32_t primary = rd32(s + 0x504);
    auto *surface = com_this(primary);
    check(surface != nullptr, "DirectDraw primary exists");
    if (surface) {
        for (uint32_t y = 0; y < surface->height; ++y)
            for (uint32_t x = 0; x < surface->width; ++x)
                wr16(surface->pixels + y * surface->pitch + x * 2, 0x7e0);
        host_present(g_mem + surface->pixels, 640, 480, 16, nullptr, surface->pitch);
        check(frame_pixel(20, 20) == 0x00ff00 && frame_pixel(4, 4) == 0x0000ff,
              "DirectDraw present retains its green base under the blue window");
        for (unsigned n = 0; n < 3; ++n) {
            os_sleep_us(20000);
            host_present(g_mem + surface->pixels, 640, 480, 16, nullptr, surface->pitch);
            uint32_t presented = g_present_count;
            headless_tick();
            check(g_present_count == presented, "recent primary presents own the refresh cadence");
        }
        uint32_t presented = g_present_count;
        os_sleep_us(40000);
        headless_tick();
        check(g_present_count == presented + 1 && frame_pixel(20, 20) == 0x00ff00,
              "an idle primary remains the base when window refresh resumes");
        dc = call(c, "USER32.dll", "GetDC", {top});
        call(c, "USER32.dll", "FillRect", {dc, rect, red});
        call(c, "USER32.dll", "ReleaseDC", {top, dc});
        check(frame_pixel(20, 20) == 0x00ff00 && frame_pixel(4, 4) == 0xff0000,
              "GDI release composites over an owned snapshot of the current primary");
        check(rd16(surface->pixels + 4 * surface->pitch + 8) == 0x7e0,
              "window composition never overwrites guest primary storage");
    }
    method(c, primary, 2, {});
    method(c, dd, 2, {});
    for (uint32_t w : {hidden, later, top, hwnd})
        call(c, "USER32.dll", "DestroyWindow", {w});
    uint32_t no_windows = g_present_count;
    os_sleep_us(20000);
    headless_tick();
    check(g_present_count == no_windows, "clock does not present without visible window surfaces");
    call(c, "GDI32.dll", "DeleteObject", {blue});
    call(c, "GDI32.dll", "DeleteObject", {red});
    // DXGI presents an immutable back-buffer snapshot above the VCL canvas.
    uint32_t output_window = window(0, 0x10000000, 5, 7);
    dc = call(c, "USER32.dll", "GetDC", {output_window});
    call(c, "USER32.dll", "FillRect", {dc, rect, blue});
    call(c, "USER32.dll", "ReleaseDC", {output_window, dc});
    uint32_t sd = s + 0x800;
    gm_zero(sd, 60);
    wr32(sd, 4);
    wr32(sd + 4, 4);
    wr32(sd + 16, 28);
    wr32(sd + 28, 1);
    wr32(sd + 36, 0x20);
    wr32(sd + 40, 2);
    wr32(sd + 44, output_window);
    wr32(sd + 48, 1);
    check(call(c, "d3d11.dll", "D3D11CreateDeviceAndSwapChain",
               {0, 1, 0, 0, 0, 0, 7, sd, s + 0x900, s + 0x904, s + 0x908, s + 0x90c}) == S_OK,
          "create DXGI presenter");
    uint32_t swap = rd32(s + 0x900), device = rd32(s + 0x904), context = rd32(s + 0x90c);
    const uint8_t texture_iid[] = {0xf2, 0xaa, 0x15, 0x6f, 0x08, 0xd2, 0x89, 0x4e,
                                   0x9a, 0xb4, 0x48, 0x95, 0x35, 0xd3, 0x4f, 0x9c};
    memcpy(gm_ptr(s + 0xa00), texture_iid, 16);
    method(c, swap, 9, {0, s + 0xa00, s + 0x910});
    uint32_t back = rd32(s + 0x910);
    method(c, device, 9, {back, 0, s + 0x914});
    uint32_t view = rd32(s + 0x914);
    float red_colour[] = {1, 0, 0, 1};
    memcpy(gm_ptr(s + 0xa40), red_colour, 16);
    method(c, context, 50, {view, s + 0xa40});
    uint32_t old_count = g_present_count, old_written = g_frames_written;
    method(c, swap, 8, {0, 0});
    check(g_present_count == old_count + 1 && g_frames_written == old_written + 1,
          "DXGI Present writes exactly one frame file");
    // The output window is the program's top-level window, the one window the
    // host shows: the chain owns the display, so the frame is the back buffer.
    uint32_t ww = 0, wh = 0, wbpp = 0;
    win32_display_mode(&ww, &wh, &wbpp);
    check(ww == 4 && wh == 4 && frame_pixel(0, 0) == 0xff0000 && frame_pixel(3, 3) == 0xff0000,
          "a windowed back buffer on the program's window is the frame");
    float green_colour[] = {0, 1, 0, 1};
    memcpy(gm_ptr(s + 0xa40), green_colour, 16);
    method(c, context, 50, {view, s + 0xa40});
    // A GDI refresh must retain the last presented red snapshot, not read the
    // newly cleared (but unpresented) green resource or replace it with blue.
    dc = call(c, "USER32.dll", "GetDC", {output_window});
    call(c, "USER32.dll", "FillRect", {dc, rect, blue});
    call(c, "USER32.dll", "ReleaseDC", {output_window, dc});
    check(frame_pixel(0, 0) == 0xff0000 && frame_pixel(3, 3) == 0xff0000,
          "GDI refresh retains immutable DXGI pixels");
    check(method(c, swap, 15, {s + 0x918}) == S_OK && rd32(s + 0x918),
          "GetContainingOutput supplies a COM output");
    check(method(c, swap, 10, {1, rd32(s + 0x918)}) == S_OK, "SetFullscreenState works");
    method(c, rd32(s + 0x918), 2);
    method(c, swap, 8, {0, 0});
    uint32_t fw = 0, fh = 0, fbpp = 0;
    win32_display_mode(&fw, &fh, &fbpp);
    check(fw == 4 && fh == 4 && fbpp == 32, "fullscreen uses back-buffer drawable dimensions");
    check(frame_pixel(0, 0) == 0x00ff00 && frame_pixel(3, 3) == 0x00ff00,
          "fullscreen green pixels become the frame");
    old_count = g_present_count;
    method(c, swap, 8, {0, 1});
    check(g_present_count == old_count, "DXGI_PRESENT_TEST creates no frame");
    check(method(c, swap, 13, {2, 6, 2, 87, 0}) == E_INVALIDARG,
          "ResizeBuffers refuses outstanding back-buffer references");
    method(c, view, 2);
    method(c, back, 2);
    check(method(c, swap, 13, {2, 6, 2, 87, 0}) == S_OK,
          "ResizeBuffers reallocates unreferenced storage");
    method(c, swap, 9, {0, s + 0xa00, s + 0x910});
    back = rd32(s + 0x910);
    method(c, device, 9, {back, 0, s + 0x914});
    view = rd32(s + 0x914);
    memcpy(gm_ptr(s + 0xa40), red_colour, 16);
    method(c, context, 50, {view, s + 0xa40});
    method(c, swap, 8, {0, 0});
    check(frame_pixel(5, 1) == 0xff0000, "resized BGRA back buffer writes converted pixels");
    method(c, view, 2);
    method(c, back, 2);
    method(c, swap, 10, {0, 0});
    method(c, context, 2);
    method(c, device, 2);
    method(c, swap, 2);
    call(c, "USER32.dll", "DestroyWindow", {output_window});
    printf("%d checks, %d failures\n", checks, failures);
    mem_shutdown();
    return failures ? 1 : 0;
}
