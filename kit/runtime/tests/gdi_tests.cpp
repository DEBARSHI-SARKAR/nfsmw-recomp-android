// Guest import integration tests for window and memory canvases; no game image required.
#include "../imports.h"
#include "../loader.h"
#include "../memory.h"
#include "../win32.h"
#include "../gdi32_internal.h"
#include "test_font_ttf.h"
#include "../../platform/os.h"
#include <algorithm>
#include <cstdio>
#include <cstdarg>
#include <cstring>
#include <vector>
static int g_checks = 0, g_failures = 0;
static bool check(bool ok, const char *fmt, ...) __attribute__((format(printf, 2, 3)));
static bool check(bool ok, const char *fmt, ...) {
    ++g_checks;
    va_list ap;
    va_start(ap, fmt);
    char msg[512];
    vsnprintf(msg, sizeof msg, fmt, ap);
    va_end(ap);
    if (!ok)
        ++g_failures;
    printf("  [%s] %s\n", ok ? "ok" : "FAIL", msg);
    return ok;
}

// ---------------------------------------------------------------------------
// Shim call helper: pushes args and a return address, then dispatches.
// ---------------------------------------------------------------------------
static uint32_t g_fake_ret = 0;

static uint32_t call_import(X86 *c, const char *dll, const char *name,
                            const std::vector<uint32_t> &args) {
    // imports_resolve allocates a trampoline for a registered shim that no IAT
    // slot referenced, which is the same path GetProcAddress takes.
    uint32_t tramp = imports_resolve(dll, name);
    if (!tramp) {
        printf("  [FAIL] no trampoline for %s!%s\n", dll, name);
        ++g_failures;
        ++g_checks;
        return 0;
    }
    uint32_t esp = c->r[R_ESP];
    uint32_t before = esp;
    for (size_t i = args.size(); i-- > 0;) {
        esp -= 4;
        wr32(esp, args[i]);
    }
    esp -= 4;
    wr32(esp, g_fake_ret);
    c->r[R_ESP] = esp;
    imports_dispatch(c, tramp);
    uint32_t expected =
        imports_argc(tramp) == ARGC_CDECL ? before - uint32_t(args.size()) * 4 : before;
    if (c->r[R_ESP] != expected) {
        printf("  [FAIL] %s!%s left ESP at %08x, expected %08x (bad argc?)\n", dll, name,
               c->r[R_ESP], expected);
        ++g_failures;
        ++g_checks;
        c->r[R_ESP] = before;
    }
    c->r[R_ESP] = before; // cdecl callers remove their arguments.
    return c->r[R_EAX];
}

static uint32_t make_test_window(X86 *c, uint32_t s, uint32_t w, uint32_t h) {
    memset(g_mem + s, 0, 40);
    wr32(s + 4, imports_resolve("USER32.dll", "DefWindowProcW"));
    gm_put_wstr(s + 0x800, "CanvasTest", 32);
    wr32(s + 36, s + 0x800);
    check(call_import(c, "USER32.dll", "RegisterClassW", {s}) != 0, "RegisterClassW");
    return call_import(c, "USER32.dll", "CreateWindowExW",
                       {0, s + 0x800, 0, 0, 0, 0, w, h, 0, 0, IMAGE_BASE, 0});
}
static void test_window_surface_and_blits(bool text = true) {
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00300000;
    uint32_t hwnd =
        make_test_window(&c, s, 64, 48); // RegisterClassW + CreateWindowExW as in test_user32_vcl
    uint32_t dc = call_import(&c, "USER32.dll", "GetDC", {hwnd});
    check(dc != 0, "GetDC");
    uint32_t brush = call_import(&c, "GDI32.dll", "CreateSolidBrush",
                                 {0x00ff0000u}); // COLORREF 0x00bbggrr: blue
    uint32_t rect = s + 0x100;
    wr32(rect, 4);
    wr32(rect + 4, 4);
    wr32(rect + 8, 20);
    wr32(rect + 12, 20);
    check(call_import(&c, "USER32.dll", "FillRect", {dc, rect, brush}) != 0, "FillRect");
    check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 5, 5}) == 0x00ff0000u,
          "the fill is readable");
    check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 30, 30}) == 0x00000000u,
          "outside the rectangle is untouched");
    // A memory DC with a DIB section, blitted onto the window with a stretch.
    uint32_t mem = call_import(&c, "GDI32.dll", "CreateCompatibleDC", {dc});
    uint32_t bmi = s + 0x200;
    memset(g_mem + bmi, 0, 40);
    wr32(bmi, 40);
    wr32(bmi + 4, 8);
    wr32(bmi + 8, 8);
    wr16(bmi + 12, 1);
    wr16(bmi + 14, 32);
    uint32_t bits_out = s + 0x300;
    uint32_t dib = call_import(&c, "GDI32.dll", "CreateDIBSection", {mem, bmi, 0, bits_out, 0, 0});
    check(dib != 0, "CreateDIBSection");
    uint32_t bits = rd32(bits_out);
    for (int i = 0; i < 64; ++i)
        wr32(bits + 4 * i, 0x0000ff00u);
    call_import(&c, "GDI32.dll", "SelectObject", {mem, dib});
    check(call_import(&c, "GDI32.dll", "StretchBlt",
                      {dc, 32, 0, 16, 16, mem, 0, 0, 8, 8, 0x00cc0020u}) == 1,
          "StretchBlt");
    check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 47, 15}) == 0x0000ff00u,
          "the stretched blit reached the corner");
    if (!text) {
        call_import(&c, "USER32.dll", "ReleaseDC", {hwnd, dc});
        return;
    }
    // Text: a glyph is drawn in the text colour and measured at 8x16.
    call_import(&c, "GDI32.dll", "SetTextColor", {dc, 0x000000ffu});
    gm_put_wstr(s + 0x400, "A", 4);
    check(call_import(&c, "GDI32.dll", "ExtTextOutW", {dc, 0, 32, 0, 0, s + 0x400, 1, 0}) == 1,
          "ExtTextOutW");
    uint32_t sz = s + 0x500;
    check(call_import(&c, "GDI32.dll", "GetTextExtentPoint32W", {dc, s + 0x400, 1, sz}) == 1 &&
              rd32(sz) == 8 && rd32(sz + 4) == 16,
          "GetTextExtentPoint32W = %ux%u", rd32(sz), rd32(sz + 4));
    bool any_red = false;
    for (int y = 32; y < 48 && !any_red; ++y)
        for (int x = 0; x < 8; ++x)
            if (call_import(&c, "GDI32.dll", "GetPixel", {dc, (uint32_t)x, (uint32_t)y}) ==
                0x000000ffu) {
                any_red = true;
                break;
            }
    check(any_red, "the glyph left red pixels");
    call_import(&c, "USER32.dll", "ReleaseDC", {hwnd, dc});
}
// Capture the synchronous window presentation seam; the host must copy before returning.
static int presents = 0;
static bool primary_active = false;
static std::vector<uint32_t> presented;
static int presented_w = 0, presented_h = 0;
extern "C" bool ddraw_gdi_primary_active() {
    return primary_active;
}
extern "C" void host_display_present_window(const uint32_t *argb, int w, int h) {
    ++presents;
    presented_w = w;
    presented_h = h;
    presented.assign(argb, argb + size_t(w) * h);
}
static void test_model() {
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00302000;
    uint32_t hwnd = make_test_window(&c, s, 32, 24);
    uint32_t dc = call_import(&c, "USER32.dll", "GetDC", {hwnd});
    check(call_import(&c, "GDI32.dll", "SelectObject", {0x12345, 0x4f100}) == 0,
          "invalid DC is not implicitly created");
    uint32_t stock = call_import(&c, "GDI32.dll", "GetStockObject", {0});
    call_import(&c, "GDI32.dll", "DeleteObject", {stock});
    check(call_import(&c, "GDI32.dll", "GetObjectW", {stock, 12, s + 900}) == 12,
          "stock object survives DeleteObject");
    uint32_t brush = call_import(&c, "GDI32.dll", "CreateSolidBrush", {0xff});
    uint32_t old = call_import(&c, "GDI32.dll", "SelectObject", {dc, brush});
    check(old && old != brush, "SelectObject returns the previous brush");
    uint32_t save = call_import(&c, "GDI32.dll", "SaveDC", {dc});
    check(save == 1, "SaveDC first level");
    call_import(&c, "GDI32.dll", "SetWindowOrgEx", {dc, 3, 4, s});
    call_import(&c, "GDI32.dll", "SetViewportOrgEx", {dc, 5, 6, 0});
    call_import(&c, "GDI32.dll", "SetPixel", {dc, 0, 0, 0xff});
    check(call_import(&c, "GDI32.dll", "RestoreDC", {dc, uint32_t(-1)}) == 1,
          "RestoreDC relative level");
    check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 2, 2}) == 0xff,
          "window and viewport origins transform pixel coordinates");
    check(call_import(&c, "GDI32.dll", "RestoreDC", {dc, save}) == 0,
          "restored levels are discarded");
    check(call_import(&c, "GDI32.dll", "GetDeviceCaps", {dc, 12}) == 32 &&
              call_import(&c, "GDI32.dll", "GetDeviceCaps", {dc, 38}) == 0x2a01 &&
              call_import(&c, "GDI32.dll", "GetDeviceCaps", {dc, 88}) == 96,
          "32-bit canvas raster and DPI capabilities");
    call_import(&c, "USER32.dll", "ReleaseDC", {hwnd, dc});
    check(presents == 0, "hidden window does not present");
    call_import(&c, "USER32.dll", "ShowWindow", {hwnd, 5});
    dc = call_import(&c, "USER32.dll", "BeginPaint", {hwnd, s});
    check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 2, 2}) == 0xff,
          "window pixels survive DC release");
    call_import(&c, "USER32.dll", "EndPaint", {hwnd, s});
    check(presents == 1 && presented.size() == 1024 * 768 && presented[2 * 1024 + 2] == 0xffff0000,
          "EndPaint presents owned ARGB pixels in the desktop composite");
    os_setenv("RECOMP_SMOKE_DRAWABLE", "800x600");
    uint32_t screen_w = call_import(&c, "USER32.dll", "GetSystemMetrics", {0});
    uint32_t screen_h = call_import(&c, "USER32.dll", "GetSystemMetrics", {1});
    check(screen_w == 800 && screen_h == 600,
          "the smoke drawable selects the virtual screen before a DirectDraw mode");
    gdi_present_windows(true);
    check(presented_w == 800 && presented_h == 600 && presented_w == int(screen_w) &&
              presented_h == int(screen_h),
          "GDI dump dimensions equal the virtual screen used for pointer coordinates");
    os_unsetenv("RECOMP_SMOKE_DRAWABLE");
    --presents; // The explicit refresh above is separate from the retained-paint check.
    dc = call_import(&c, "USER32.dll", "GetDC", {hwnd});
    primary_active = true;
    call_import(&c, "USER32.dll", "ReleaseDC", {hwnd, dc});
    check(presents == 1, "unchanged window does not present again with a primary");
    primary_active = false;
    call_import(&c, "USER32.dll", "DestroyWindow", {hwnd});
    check(call_import(&c, "USER32.dll", "GetDC", {hwnd}) == 0, "destroyed window has no DC");
    call_import(&c, "GDI32.dll", "DeleteObject", {brush});
}
static void test_drawing() {
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00304000, hwnd = make_test_window(&c, s, 32, 32);
    uint32_t dc = call_import(&c, "USER32.dll", "GetDC", {hwnd});
    uint32_t brush = call_import(&c, "GDI32.dll", "CreateSolidBrush", {0xff00});
    call_import(&c, "GDI32.dll", "SelectObject", {dc, brush});
    check(call_import(&c, "GDI32.dll", "Rectangle", {dc, 1, 1, 10, 10}) == 1 &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 4, 4}) == 0xff00,
          "rectangle brush fill");
    call_import(&c, "GDI32.dll", "SaveDC", {dc});
    check(call_import(&c, "GDI32.dll", "IntersectClipRect", {dc, 4, 4, 12, 12}) == 2,
          "rectangular clip");
    check(call_import(&c, "GDI32.dll", "ExcludeClipRect", {dc, 6, 6, 8, 8}) == 3, "clip hole");
    call_import(&c, "GDI32.dll", "PatBlt", {dc, 0, 0, 32, 32, 0x00ff0062});
    check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 5, 5}) == 0xffffff,
          "clip accepts inner pixels");
    call_import(&c, "GDI32.dll", "RestoreDC", {dc, uint32_t(-1)});
    check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 6, 6}) == 0xff00 &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 0, 0}) == 0,
          "clip hole and outside preserved");
    memset(g_mem + s, 0, 16);
    wr32(s + 4, 1);
    wr32(s + 12, 0xff);
    uint32_t pen = call_import(&c, "GDI32.dll", "CreatePenIndirect", {s});
    call_import(&c, "GDI32.dll", "SelectObject", {dc, pen});
    call_import(&c, "GDI32.dll", "MoveToEx", {dc, 0, 16, 0});
    check(call_import(&c, "GDI32.dll", "LineTo", {dc, 16, 16}) == 1 &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 8, 16}) == 0xff,
          "pen draws a line");
    check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 16, 16}) == 0,
          "LineTo excludes its endpoint");
    call_import(&c, "GDI32.dll", "SetROP2", {dc, 7});
    call_import(&c, "GDI32.dll", "MoveToEx", {dc, 0, 16, 0});
    call_import(&c, "GDI32.dll", "LineTo", {dc, 16, 16});
    check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 8, 16}) == 0,
          "R2_XORPEN restores line pixels");
    uint32_t rgn = call_import(&c, "GDI32.dll", "CreateRectRgn", {2, 3, 7, 9});
    check(rgn && call_import(&c, "GDI32.dll", "GetRgnBox", {rgn, s}) == 2 && rd32(s) == 2 &&
              rd32(s + 12) == 9,
          "region bounds");
    uint32_t mem = call_import(&c, "GDI32.dll", "CreateCompatibleDC", {dc});
    memset(g_mem + s, 0, 40);
    wr32(s, 40);
    wr32(s + 4, 2);
    wr32(s + 8, 2);
    wr16(s + 12, 1);
    wr16(s + 14, 32);
    uint32_t dib = call_import(&c, "GDI32.dll", "CreateDIBSection", {mem, s, 0, s + 64, 0, 0}),
             bits = rd32(s + 64);
    call_import(&c, "GDI32.dll", "SelectObject", {mem, dib});
    wr32(bits, 0xff0000);
    wr32(bits + 4, 0xff0000);
    wr32(bits + 8, 0xff);
    wr32(bits + 12, 0xff);
    check(call_import(&c, "GDI32.dll", "BitBlt", {dc, 20, 20, 2, 2, mem, 0, 0, 0xcc0020}) == 1 &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 20, 20}) == 0xff0000 &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 20, 21}) == 0xff,
          "bottom-up DIB orientation and COLORREF conversion");
    call_import(&c, "GDI32.dll", "SetPixel", {mem, 0, 0, 0xff00});
    check(rd32(bits + 8) == 0xff00ff00, "DIB writes stay in guest memory");
    check(call_import(&c, "GDI32.dll", "GetBitmapBits", {dib, 16, s + 128}) == 16 &&
              rd32(s + 136) == 0xff00ff00,
          "GetBitmapBits raw bytes");
    check(call_import(&c, "GDI32.dll", "MaskBlt",
                      {dc, 24, 24, 2, 2, mem, 0, 0, 0, 0, 0, 0xcc0020}) == 1 &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 24, 24}) == 0xff00,
          "zero-mask MaskBlt");
    // A monochrome mask: a set bit takes the foreground operation, SRCCOPY, and
    // a clear one the background, 0xaa, which leaves the destination. This is
    // how the VCL draws a transparent bitmap, so a refusal here loses whole
    // window backgrounds rather than one blit.
    {
        uint32_t m = s + 0x400;
        memset(g_mem + m, 0, 40);
        wr32(m, 40);
        wr32(m + 4, 2);
        wr32(m + 8, -2); // top-down, so row 0 is the first byte
        wr16(m + 12, 1);
        wr16(m + 14, 1);
        wr32(m + 40, 0x00000000); // colour 0: black
        wr32(m + 44, 0x00ffffff); // colour 1: white
        uint32_t mask =
            call_import(&c, "GDI32.dll", "CreateDIBSection", {mem, m, 0, m + 128, 0, 0});
        uint32_t mbits = rd32(m + 128);
        check(mask != 0 && mbits != 0, "a 1-bit mask bitmap");
        wr8(mbits, 0x80);     // row 0: mask bit set at x=0, clear at x=1
        wr8(mbits + 4, 0x40); // row 1: clear at x=0, set at x=1
        for (int i = 0; i < 4; ++i)
            call_import(&c, "GDI32.dll", "SetPixel",
                        {dc, uint32_t(28 + i % 2), uint32_t(28 + i / 2), 0x123456});
        // The source DC still holds the 2x2 DIB: (0,0) and (1,0) are 0x00ff00
        // after the SetPixel above, the bottom row 0xff0000.
        check(call_import(&c, "GDI32.dll", "MaskBlt",
                          {dc, 28, 28, 2, 2, mem, 0, 0, mask, 0, 0, 0xaacc0020}) == 1,
              "MaskBlt with a mask is served");
        check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 28, 28}) != 0x123456 &&
                  call_import(&c, "GDI32.dll", "GetPixel", {dc, 29, 28}) == 0x123456,
              "the top row copied where the mask bit was set and held elsewhere");
        check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 28, 29}) == 0x123456 &&
                  call_import(&c, "GDI32.dll", "GetPixel", {dc, 29, 29}) != 0x123456,
              "and the bottom row took the opposite bits");
        call_import(&c, "GDI32.dll", "DeleteObject", {mask});
    }
    uint32_t copy = call_import(&c, "GDI32.dll", "CreateDIBitmap", {dc, s, 4, bits, s, 0});
    check(copy && call_import(&c, "GDI32.dll", "GetObjectW", {copy, 24, s + 160}) == 24 &&
              rd32(s + 164) == 2,
          "CreateDIBitmap initializes an owned copy");
    check(call_import(&c, "GDI32.dll", "StretchDIBits",
                      {dc, 0, 24, 4, 4, 0, 0, 2, 2, bits, s, 0, 0xcc0020}) == 2 &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 0, 24}) == 0xff00,
          "StretchDIBits writes canvas pixels");
    call_import(&c, "GDI32.dll", "DeleteObject", {copy});
    call_import(&c, "GDI32.dll", "DeleteDC", {mem});
    call_import(&c, "GDI32.dll", "DeleteObject", {dib});
    call_import(&c, "USER32.dll", "ReleaseDC", {hwnd, dc});
    call_import(&c, "USER32.dll", "DestroyWindow", {hwnd});
}
static void test_dib_rows_and_regions() {
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00308000;
    uint32_t hwnd = make_test_window(&c, s, 16, 16),
             dc = call_import(&c, "USER32.dll", "GetDC", {hwnd});
    uint32_t child = call_import(&c, "USER32.dll", "CreateWindowExW",
                                 {0, s + 0x800, 0, 0x40000000, 4, 4, 2, 2, hwnd, 0, IMAGE_BASE, 0});
    uint32_t child_dc = call_import(&c, "USER32.dll", "GetDC", {child});
    call_import(&c, "GDI32.dll", "SetPixel", {child_dc, 0, 0, 0xff});
    call_import(&c, "GDI32.dll", "SetPixel", {child_dc, 2, 0, 0xff});
    check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 4, 4}) == 0xff &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 6, 4}) == 0,
          "child canvas maps and clips to its client bounds");
    call_import(&c, "USER32.dll", "ReleaseDC", {child, child_dc});
    memset(g_mem + s, 0, 40);
    wr32(s, 40);
    wr32(s + 4, 2);
    wr32(s + 8, 2);
    wr16(s + 12, 1);
    wr16(s + 14, 32);
    wr32(s + 64, 0x00ff0000);
    wr32(s + 68, 0x000000ff);
    check(call_import(&c, "GDI32.dll", "SetDIBitsToDevice",
                      {dc, 0, 0, 2, 2, 0, 0, 0, 1, s + 64, s, 0}) == 1 &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 0, 1}) == 0xff &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 1, 1}) == 0xff0000 &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 0, 0}) == 0,
          "partial bottom-up DIB upload places its first scan at the bottom");
    uint32_t bitmap = call_import(&c, "GDI32.dll", "CreateDIBSection", {dc, s, 0, s + 128, 0, 0});
    uint32_t bits = rd32(s + 128);
    check(call_import(&c, "GDI32.dll", "SetDIBits", {dc, bitmap, 1, 1, s + 64, s, 0}) == 1 &&
              rd32(bits + 8) == 0xffff0000 && rd32(bits + 12) == 0xff0000ff && rd32(bits) == 0,
          "SetDIBits writes only the requested scan");
    uint32_t mem = call_import(&c, "GDI32.dll", "CreateCompatibleDC", {0});
    call_import(&c, "GDI32.dll", "SelectObject", {mem, bitmap});
    call_import(&c, "GDI32.dll", "SetPixel", {mem, 0, 0, 0xff});
    call_import(&c, "GDI32.dll", "SetPixel", {mem, 1, 0, 0xff00});
    call_import(&c, "GDI32.dll", "BitBlt", {mem, 1, 0, 1, 1, mem, 0, 0, 0xcc0020});
    check(call_import(&c, "GDI32.dll", "GetPixel", {mem, 1, 0}) == 0xff,
          "overlapping self blit snapshots the source");
    uint32_t brush = call_import(&c, "GDI32.dll", "CreateSolidBrush", {0xff00});
    call_import(&c, "GDI32.dll", "SelectObject", {dc, brush});
    check(call_import(&c, "GDI32.dll", "ExtFloodFill", {dc, 15, 15, 0, 1}) == 1 &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 15, 0}) == 0xff00 &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 4, 4}) == 0xff,
          "flood fill is bounded by different colors");
    uint32_t pen = call_import(&c, "GDI32.dll", "GetStockObject", {8});
    call_import(&c, "GDI32.dll", "SelectObject", {dc, pen});
    call_import(&c, "GDI32.dll", "SetPixel", {dc, 11, 11, 0xff});
    call_import(&c, "GDI32.dll", "SetROP2", {dc, 7});
    call_import(&c, "GDI32.dll", "Rectangle", {dc, 10, 10, 14, 14});
    call_import(&c, "GDI32.dll", "Rectangle", {dc, 10, 10, 14, 14});
    check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 11, 11}) == 0xff,
          "XOR brush fill is reversible");
    call_import(&c, "GDI32.dll", "DeleteDC", {mem});
    call_import(&c, "GDI32.dll", "DeleteObject", {bitmap});
    call_import(&c, "USER32.dll", "ReleaseDC", {hwnd, dc});
    call_import(&c, "USER32.dll", "DestroyWindow", {hwnd});
}
static void test_text() {
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00306000;
    uint32_t hwnd = make_test_window(&c, s, 64, 64),
             dc = call_import(&c, "USER32.dll", "GetDC", {hwnd});
    memset(g_mem + s, 0, 92);
    wr32(s, uint32_t(-32));
    wr32(s + 16, 700);
    gm_put_wstr(s + 28, "recomp", 32);
    uint32_t font = call_import(&c, "GDI32.dll", "CreateFontIndirectW", {s});
    check(font != 0, "CreateFontIndirectW");
    call_import(&c, "GDI32.dll", "SelectObject", {dc, font});
    check(call_import(&c, "GDI32.dll", "GetObjectW", {font, 92, s + 128}) == 92 &&
              rd32(s + 128) == uint32_t(-32) && rd32(s + 144) == 700,
          "font height and weight round trip");
    gm_put_wstr(s + 256, "AB", 4);
    check(call_import(&c, "GDI32.dll", "GetTextExtentPointW", {dc, s + 256, 2, s + 300}) == 1 &&
              rd32(s + 300) == 32 && rd32(s + 304) == 32,
          "scaled text extent");
    check(call_import(&c, "GDI32.dll", "GetTextMetricsW", {dc, s + 320}) == 1 &&
              rd32(s + 320) == 32 && rd32(s + 324) == 26 && rd32(s + 328) == 6 &&
              rd32(s + 340) == 16 && rd32(s + 344) == 16 && rd8(s + 375) == 0x30 &&
              rd8(s + 376) == 0,
          "TEXTMETRICW layout and scaled metrics");
    call_import(&c, "GDI32.dll", "SetTextColor", {dc, 0xff});
    call_import(&c, "GDI32.dll", "SetBkColor", {dc, 0xff0000});
    check(call_import(&c, "GDI32.dll", "ExtTextOutW", {dc, 0, 0, 0, 0, s + 256, 1, 0}) == 1 &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 15, 31}) == 0xff0000,
          "opaque scaled text background");
    wr32(s + 400, 20);
    wr32(s + 404, 20);
    wr32(s + 408, 24);
    wr32(s + 412, 24);
    call_import(&c, "GDI32.dll", "SetBkMode", {dc, 1});
    check(call_import(&c, "GDI32.dll", "ExtTextOutW", {dc, 0, 0, 2, s + 400, 0, 0, 0}) == 1 &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 20, 20}) == 0xff0000,
          "ETO_OPAQUE with an empty string");
    static unsigned callbacks = 0;
    uint32_t cb = imports_alloc_trampoline(
        "TEST", "FontCallback",
        [](X86 *cc) {
            ++callbacks;
            check(gm_wstr(arg(cc, 0) + 28) == "recomp" && rd32(arg(cc, 1)) == 16 &&
                      arg(cc, 3) == 77,
                  "font enumeration guest payload");
            set_eax(cc, 42);
        },
        4);
    check(call_import(&c, "GDI32.dll", "EnumFontsW", {dc, 0, cb, 77}) == 42 && callbacks == 1,
          "EnumFontsW dispatches once through recomp_call");
    check(call_import(&c, "GDI32.dll", "EnumFontFamiliesExW", {dc, s, cb, 77, 0}) == 42 &&
              callbacks == 2,
          "EnumFontFamiliesExW dispatches once");
    check(call_import(&c, "GDI32.dll", "AddFontMemResourceEx", {s, 92, 0, s + 500}) != 0 &&
              rd32(s + 500) == 1,
          "memory font resource uses built-in font");
    check(call_import(&c, "GDI32.dll", "CreateDCW", {0, 0, 0, 0}) == 0 &&
              call_import(&c, "GDI32.dll", "StartDocW", {dc, 0}) == 0 &&
              call_import(&c, "GDI32.dll", "GetEnhMetaFileBits", {0, 0, 0}) == 0,
          "printing and metafiles fail with correct arities");
    call_import(&c, "USER32.dll", "ReleaseDC", {hwnd, dc});
    call_import(&c, "USER32.dll", "DestroyWindow", {hwnd});
    call_import(&c, "GDI32.dll", "DeleteObject", {font});
}
// DrawText must paint through the same selected-font canvas as ExtTextOut,
// including its colour and clipping. Successful metrics alone are not drawing.
static void test_draw_text() {
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00309000, rect = s + 256, str = s + 320;
    uint32_t hwnd = make_test_window(&c, s, 64, 64);
    uint32_t dc = call_import(&c, "USER32.dll", "GetDC", {hwnd});
    uint32_t brush = call_import(&c, "GDI32.dll", "CreateSolidBrush", {0xff00ff});
    auto bounds = [&](uint32_t l, uint32_t t, uint32_t r, uint32_t b) {
        wr32(rect, l);
        wr32(rect + 4, t);
        wr32(rect + 8, r);
        wr32(rect + 12, b);
    };
    bounds(0, 0, 64, 64);
    call_import(&c, "USER32.dll", "FillRect", {dc, rect, brush});
    call_import(&c, "GDI32.dll", "SetTextColor", {dc, 0});
    call_import(&c, "GDI32.dll", "SetBkMode", {dc, 1});
    gm_put_wstr(str, "AB", 8);
    bounds(4, 4, 36, 28);
    check(call_import(&c, "USER32.dll", "DrawTextW", {dc, str, 2, rect, 0x25}) == 20,
          "DrawTextW centered single line returns bottom offset");
    // Reference at (12,8): centered horizontally and vertically in the rectangle.
    call_import(&c, "GDI32.dll", "ExtTextOutW", {dc, 12, 40, 0, 0, str, 2, 0});
    bool same = true, ink = false;
    for (uint32_t y = 0; y < 16; ++y)
        for (uint32_t x = 0; x < 16; ++x) {
            uint32_t actual = call_import(&c, "GDI32.dll", "GetPixel", {dc, 12 + x, 8 + y});
            same &= actual == call_import(&c, "GDI32.dll", "GetPixel", {dc, 12 + x, 40 + y});
            ink |= actual == 0;
        }
    check(same && ink, "DrawTextW paints the bitmap font in black on magenta");
    check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 12, 8}) == 0xff00ff,
          "transparent text preserves the background between glyph pixels");
    memset(g_mem + s, 0, 92);
    wr32(s, uint32_t(-32));
    uint32_t font = call_import(&c, "GDI32.dll", "CreateFontIndirectW", {s});
    uint32_t old_font = call_import(&c, "GDI32.dll", "SelectObject", {dc, font});
    bounds(1, 2, 60, 60);
    check(call_import(&c, "USER32.dll", "DrawTextW", {dc, str, 2, rect, 0x420}) == 32 &&
              rd32(rect + 8) == 33 && rd32(rect + 12) == 34,
          "DrawTextW CALCRECT uses the selected font's 16x32 cells");
    check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 2, 2}) == 0xff00ff,
          "CALCRECT leaves pixels untouched");
    uint32_t screen_dc = call_import(&c, "USER32.dll", "GetDC", {0});
    call_import(&c, "GDI32.dll", "SelectObject", {screen_dc, font});
    bounds(1, 2, 60, 60);
    check(call_import(&c, "USER32.dll", "DrawTextW", {screen_dc, str, 2, rect, 0x420}) == 32 &&
              rd32(rect + 8) == 33 && rd32(rect + 12) == 34,
          "CALCRECT measures a screen DC without a backing surface");
    call_import(&c, "USER32.dll", "ReleaseDC", {0, screen_dc});
    call_import(&c, "GDI32.dll", "SelectObject", {dc, old_font});
    bounds(0, 0, 64, 64);
    call_import(&c, "USER32.dll", "FillRect", {dc, rect, brush});
    bounds(0, 0, 4, 8);
    uint32_t params = s + 400;
    memset(g_mem + params, 0, 20);
    wr32(params, 20);
    check(call_import(&c, "USER32.dll", "DrawTextExW", {dc, str, 2, rect, 0, params}) == 16 &&
              rd32(params + 16) == 2,
          "DrawTextExW paints and reports consumed UTF-16 units");
    check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 3, 0}) == 0 &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 4, 0}) == 0xff00ff &&
              call_import(&c, "GDI32.dll", "GetPixel", {dc, 1, 8}) == 0xff00ff,
          "DrawText clips glyphs to the supplied rectangle");
    check(call_import(&c, "GDI32.dll", "SetPixel", {dc, 20, 20, 0xff}) == 0xff,
          "DrawText restores the caller's clipping state");
    gm_put_wstr(str, "AB CD", 16);
    bounds(0, 0, 24, 64);
    check(call_import(&c, "USER32.dll", "DrawTextW", {dc, str, UINT32_MAX, rect, 0x410}) == 32 &&
              rd32(rect + 8) == 16 && rd32(rect + 12) == 32,
          "DrawText wraps between words when measuring a narrow rectangle");
    gm_put_wstr(str, "A\r\nB", 16);
    bounds(0, 0, 64, 64);
    check(call_import(&c, "USER32.dll", "DrawTextW", {dc, str, UINT32_MAX, rect, 0x400}) == 32 &&
              rd32(rect + 8) == 8,
          "DrawText treats CRLF as one line break");
    gm_put_wstr(str, "&A&&B", 16);
    bounds(0, 0, 64, 64);
    check(call_import(&c, "USER32.dll", "DrawTextW", {dc, str, UINT32_MAX, rect, 0x420}) == 16 &&
              rd32(rect + 8) == 24,
          "DrawText measures mnemonic prefixes and escaped ampersands");
    call_import(&c, "GDI32.dll", "DeleteObject", {font});
    call_import(&c, "GDI32.dll", "DeleteObject", {brush});
    call_import(&c, "USER32.dll", "ReleaseDC", {hwnd, dc});
    call_import(&c, "USER32.dll", "DestroyWindow", {hwnd});
}
// Exercise msimg32 through real stdcall trampolines and top-down guest DIBs.
// Colour and monochrome conversion, which is what builds and uses a
// transparency mask: into a 1-bit bitmap the source's background colour
// becomes white and everything else black; out of one, white becomes the
// destination's background colour and black its text colour.
static void test_mono_conversion() {
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00300000;
    uint32_t hwnd = make_test_window(&c, s, 8, 4);
    uint32_t dc = call_import(&c, "USER32.dll", "GetDC", {hwnd});

    // A colour source: two pixels of one colour, two of another.
    uint32_t colour_dc = call_import(&c, "GDI32.dll", "CreateCompatibleDC", {dc});
    uint32_t bmi = s + 0x200;
    memset(g_mem + bmi, 0, 40);
    wr32(bmi, 40);
    wr32(bmi + 4, 4);
    wr32(bmi + 8, -1); // top-down, one row
    wr16(bmi + 12, 1);
    wr16(bmi + 14, 32);
    uint32_t colour =
        call_import(&c, "GDI32.dll", "CreateDIBSection", {colour_dc, bmi, 0, s + 0x280, 0, 0});
    uint32_t cbits = rd32(s + 0x280);
    call_import(&c, "GDI32.dll", "SelectObject", {colour_dc, colour});
    wr32(cbits, 0xff00ff00u);     // green
    wr32(cbits + 4, 0xff00ff00u); // green
    wr32(cbits + 8, 0xff0000ffu); // blue
    wr32(cbits + 12, 0xff0000ffu);

    // A monochrome destination.
    uint32_t mono_dc = call_import(&c, "GDI32.dll", "CreateCompatibleDC", {dc});
    uint32_t mbi = s + 0x300;
    memset(g_mem + mbi, 0, 40);
    wr32(mbi, 40);
    wr32(mbi + 4, 4);
    wr32(mbi + 8, -1);
    wr16(mbi + 12, 1);
    wr16(mbi + 14, 1);
    wr32(mbi + 40, 0x00000000);
    wr32(mbi + 44, 0x00ffffff);
    uint32_t mono =
        call_import(&c, "GDI32.dll", "CreateDIBSection", {mono_dc, mbi, 0, s + 0x380, 0, 0});
    uint32_t mbits = rd32(s + 0x380);
    call_import(&c, "GDI32.dll", "SelectObject", {mono_dc, mono});

    // Green is the source's background colour, so green becomes white (1).
    call_import(&c, "GDI32.dll", "SetBkColor", {colour_dc, 0x0000ff00u});
    check(call_import(&c, "GDI32.dll", "BitBlt",
                      {mono_dc, 0, 0, 4, 1, colour_dc, 0, 0, 0x00cc0020u}) == 1,
          "a colour to monochrome blit");
    check((rd8(mbits) >> 4) == 0xcu,
          "the source's background colour became white and the rest black (%02x)", rd8(mbits));

    // Back out: white takes the destination's background colour, black its text
    // colour, whatever the monochrome palette says.
    // COLORREF is 0x00bbggrr, so these are blue and red; in ARGB, ff0000ff and
    // ffff0000.
    call_import(&c, "GDI32.dll", "SetBkColor", {colour_dc, 0x00ff0000u});   // blue
    call_import(&c, "GDI32.dll", "SetTextColor", {colour_dc, 0x000000ffu}); // red
    check(call_import(&c, "GDI32.dll", "BitBlt",
                      {colour_dc, 0, 0, 4, 1, mono_dc, 0, 0, 0x00cc0020u}) == 1,
          "a monochrome to colour blit");
    check(rd32(cbits) == 0xff0000ffu && rd32(cbits + 8) == 0xffff0000u,
          "white took the background colour and black the text colour (%08x %08x)", rd32(cbits),
          rd32(cbits + 8));

    call_import(&c, "GDI32.dll", "DeleteDC", {colour_dc});
    call_import(&c, "GDI32.dll", "DeleteDC", {mono_dc});
    call_import(&c, "GDI32.dll", "DeleteObject", {colour});
    call_import(&c, "GDI32.dll", "DeleteObject", {mono});
    call_import(&c, "USER32.dll", "ReleaseDC", {hwnd, dc});
    call_import(&c, "USER32.dll", "DestroyWindow", {hwnd});
}

// A layered window: the key colour is dropped when the window surfaces are
// composited, and the rest is blended at the constant alpha. This is how a
// shaped form reaches the screen; without it the key colour covers it.
static void test_layered_window() {
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00300000;
    uint32_t hwnd = make_test_window(&c, s, 8, 4);
    uint32_t dc = call_import(&c, "USER32.dll", "GetDC", {hwnd});
    uint32_t rect = s + 0x100;
    wr32(rect, 0);
    wr32(rect + 4, 0);
    wr32(rect + 8, 8);
    wr32(rect + 12, 4);
    uint32_t key = call_import(&c, "GDI32.dll", "CreateSolidBrush", {0x00ff00ffu}); // magenta
    call_import(&c, "USER32.dll", "FillRect", {dc, rect, key});
    wr32(rect + 8, 4); // the left half stays magenta, the right becomes white
    wr32(rect, 4);
    wr32(rect + 8, 8);
    uint32_t white = call_import(&c, "GDI32.dll", "CreateSolidBrush", {0x00ffffffu});
    call_import(&c, "USER32.dll", "FillRect", {dc, rect, white});
    call_import(&c, "USER32.dll", "ShowWindow", {hwnd, 5});

    std::vector<uint32_t> frame(size_t(8 * 4), 0xff000000u);
    check(call_import(&c, "USER32.dll", "SetLayeredWindowAttributes",
                      {hwnd, 0x00ff00ffu, 255, 1}) == 0,
          "a window without WS_EX_LAYERED is refused");
    call_import(&c, "USER32.dll", "SetWindowLongW", {hwnd, uint32_t(-20), 0x00080000u});
    check(call_import(&c, "USER32.dll", "SetLayeredWindowAttributes",
                      {hwnd, 0x00ff00ffu, 255, 1}) == 1,
          "SetLayeredWindowAttributes with a colour key");
    gdi_composite_windows(frame.data(), 8, 4);
    check(frame[0] == 0xff000000u, "the key colour is not composited");
    check((frame[4] & 0xffffffu) == 0xffffffu, "the rest of the window is");

    // The same window at half opacity blends over what is already there.
    std::fill(frame.begin(), frame.end(), 0xff000000u);
    check(call_import(&c, "USER32.dll", "SetLayeredWindowAttributes",
                      {hwnd, 0x00ff00ffu, 128, 3}) == 1,
          "and with an alpha as well");
    gdi_composite_windows(frame.data(), 8, 4);
    check(frame[0] == 0xff000000u, "the key still drops out");
    uint32_t blended = frame[4] & 255u;
    check(blended > 100 && blended < 160, "and the rest blended to %u, about half", blended);

    uint32_t out_key = s + 0x200;
    check(call_import(&c, "USER32.dll", "GetLayeredWindowAttributes",
                      {hwnd, out_key, out_key + 8, out_key + 16}) == 1 &&
              rd32(out_key) == 0x00ff00ffu && rd8(out_key + 8) == 128 && rd32(out_key + 16) == 3,
          "GetLayeredWindowAttributes reports them back");

    call_import(&c, "GDI32.dll", "DeleteObject", {key});
    call_import(&c, "GDI32.dll", "DeleteObject", {white});
    call_import(&c, "USER32.dll", "ReleaseDC", {hwnd, dc});
    call_import(&c, "USER32.dll", "DestroyWindow", {hwnd});
}

static void test_msimg32() {
    X86 c;
    loader_init_context(&c);
    const uint32_t s = 0x00310000;
    struct Canvas {
        uint32_t dc, bitmap, bits;
    };
    auto canvas = [&](uint32_t w, uint32_t h) {
        uint32_t dc = call_import(&c, "GDI32.dll", "CreateCompatibleDC", {0});
        memset(g_mem + s, 0, 40);
        wr32(s, 40);
        wr32(s + 4, w);
        wr32(s + 8, -h);
        wr16(s + 12, 1);
        wr16(s + 14, 32);
        uint32_t bitmap =
            call_import(&c, "GDI32.dll", "CreateDIBSection", {dc, s, 0, s + 64, 0, 0});
        call_import(&c, "GDI32.dll", "SelectObject", {dc, bitmap});
        return Canvas{dc, bitmap, rd32(s + 64)};
    };
    auto dst = canvas(8, 8), src = canvas(2, 1);
    uint32_t vertices = s + 128, mesh = s + 256;
    auto vertex = [&](uint32_t i, uint32_t x, uint32_t y, uint32_t rgb) {
        uint32_t p = vertices + 16 * i;
        wr32(p, x);
        wr32(p + 4, y);
        wr16(p + 8, ((rgb >> 16) & 255) * 257);
        wr16(p + 10, ((rgb >> 8) & 255) * 257);
        wr16(p + 12, (rgb & 255) * 257);
        wr16(p + 14, 0);
    };
    // The right/bottom edge is exclusive: pixel 7 is 7/8 along this ramp.
    auto strip = canvas(8, 1);
    vertex(0, 0, 0, 0);
    vertex(1, 8, 1, 0xffffff);
    wr32(mesh, 0);
    wr32(mesh + 4, 1);
    check(call_import(&c, "msimg32.dll", "GradientFill", {strip.dc, vertices, 2, mesh, 1, 0}) ==
                  1 &&
              rd32(strip.bits) == 0xff000000 && rd32(strip.bits + 16) == 0xff808080 &&
              rd32(strip.bits + 28) == 0xffdfdfdf,
          "horizontal gradient endpoints and midpoint in an 8x1 DIB");
    vertex(1, 1, 8, 0xffffff);
    check(call_import(&c, "msimg32.dll", "GradientFill", {dst.dc, vertices, 2, mesh, 1, 1}) == 1 &&
              rd32(dst.bits + 4 * 8 * 4) == 0xff808080,
          "vertical gradient midpoint");
    memset(g_mem + dst.bits, 0, 8 * 8 * 4);
    vertex(0, 0, 0, 0xff0000);
    vertex(1, 8, 0, 0x00ff00);
    vertex(2, 0, 8, 0x0000ff);
    wr32(mesh + 8, 2);
    check(call_import(&c, "msimg32.dll", "GradientFill", {dst.dc, vertices, 3, mesh, 1, 2}) == 1 &&
              rd32(dst.bits + 4 * 9) == 0xff9f3030 && rd32(dst.bits + 4 * 63) == 0,
          "triangle barycentric interior and untouched exterior");
    memset(g_mem + dst.bits, 0, 8 * 8 * 4);
    call_import(&c, "GDI32.dll", "SaveDC", {dst.dc});
    call_import(&c, "GDI32.dll", "SetViewportOrgEx", {dst.dc, 2, 2, 0});
    call_import(&c, "GDI32.dll", "IntersectClipRect", {dst.dc, 1, 0, 3, 1});
    vertex(0, 0, 0, 0xff0000);
    vertex(1, 4, 1, 0xff0000);
    check(call_import(&c, "msimg32.dll", "GradientFill", {dst.dc, vertices, 2, mesh, 1, 0}) == 1 &&
              rd32(dst.bits + 4 * 19) == 0xffff0000 && rd32(dst.bits + 4 * 18) == 0 &&
              rd32(dst.bits + 4 * 21) == 0,
          "gradient honors the DC origin and clip");
    call_import(&c, "GDI32.dll", "RestoreDC", {dst.dc, uint32_t(-1)});
    auto blue = [&] {
        for (unsigned i = 0; i < 64; ++i)
            wr32(dst.bits + 4 * i, 0xff0000ff);
    };
    blue();
    wr32(src.bits, 0x80800000);
    wr32(src.bits + 4, 0);
    check(call_import(&c, "msimg32.dll", "AlphaBlend",
                      {dst.dc, 0, 0, 4, 1, src.dc, 0, 0, 2, 1, 0x01ff0000}) == 1 &&
              rd32(dst.bits) == 0xff80007f && rd32(dst.bits + 4) == 0xff80007f &&
              rd32(dst.bits + 8) == 0xff0000ff,
          "premultiplied half-alpha red over blue with nearest-neighbor scaling");
    blue();
    check(call_import(&c, "msimg32.dll", "AlphaBlend",
                      {dst.dc, 0, 0, 1, 1, src.dc, 0, 0, 1, 1, 0x01800000}) == 1 &&
              rd32(dst.bits) == 0xff4000bf,
          "constant alpha multiplies per-pixel alpha and premultiplied color");
    blue();
    wr32(src.bits, 0x00ff0000);
    check(call_import(&c, "msimg32.dll", "AlphaBlend",
                      {dst.dc, 0, 0, 1, 1, src.dc, 0, 0, 1, 1, 0x00800000}) == 1 &&
              rd32(dst.bits) == 0xff80007f,
          "constant-only alpha ignores the source alpha byte");
    blue();
    wr32(src.bits, 0x12345678);
    wr32(src.bits + 4, 0x4400ff00);
    check(call_import(&c, "msimg32.dll", "TransparentBlt",
                      {dst.dc, 0, 0, 4, 1, src.dc, 0, 0, 2, 1, 0x00785634}) == 1 &&
              rd32(dst.bits) == 0xff0000ff && rd32(dst.bits + 4) == 0xff0000ff &&
              rd32(dst.bits + 8) == 0x4400ff00,
          "scaled color-key blit leaves keyed pixels untouched and copies alpha");
    uint32_t empty = call_import(&c, "GDI32.dll", "CreateCompatibleDC", {0});
    set_last_error(0);
    check(call_import(&c, "msimg32.dll", "GradientFill", {empty, vertices, 2, mesh, 1, 0}) == 0 &&
              get_last_error() == 6,
          "gradient rejects a DC without storage with ERROR_INVALID_HANDLE");
    set_last_error(0);
    check(call_import(&c, "msimg32.dll", "AlphaBlend",
                      {dst.dc, 0, 0, 1, 1, empty, 0, 0, 1, 1, 0x00ff0000}) == 0 &&
              get_last_error() == 6,
          "alpha blend rejects a source without storage");
    set_last_error(0);
    check(call_import(&c, "msimg32.dll", "TransparentBlt",
                      {empty, 0, 0, 1, 1, src.dc, 0, 0, 1, 1, 0}) == 0 &&
              get_last_error() == 6,
          "transparent blit rejects a destination without storage");
    wr32(mesh + 4, 3);
    check(call_import(&c, "msimg32.dll", "GradientFill", {dst.dc, vertices, 2, mesh, 1, 0}) == 0 &&
              get_last_error() == 87,
          "gradient rejects an out-of-range vertex index");
    for (auto item : {dst, src, strip}) {
        call_import(&c, "GDI32.dll", "DeleteDC", {item.dc});
        call_import(&c, "GDI32.dll", "DeleteObject", {item.bitmap});
    }
    call_import(&c, "GDI32.dll", "DeleteDC", {empty});
}

// The system STATIC class. The VCL's TStaticText finds it with GetClassInfoW
// and passes it every message it leaves unhandled - WM_SETFONT and, above
// all, WM_PAINT, which is the only thing that draws the caption.
static void test_static_control() {
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00310000;
    uint32_t parent = make_test_window(&c, s, 64, 32);
    gm_put_wstr(s + 0x900, "STATIC", 16);
    memset(g_mem + s + 0xa00, 0, 40);
    check(call_import(&c, "USER32.dll", "GetClassInfoW", {0, s + 0x900, s + 0xa00}) != 0 &&
              rd32(s + 0xa04) != 0,
          "GetClassInfoW finds the system STATIC class and its procedure");
    gm_put_wstr(s + 0x940, "Hi", 8);
    // WS_CHILD | SS_CENTER, 48x16 at (8,8), created hidden as the VCL creates it.
    uint32_t child =
        call_import(&c, "USER32.dll", "CreateWindowExW",
                    {0, s + 0x900, s + 0x940, 0x40000001u, 8, 8, 48, 16, parent, 0, IMAGE_BASE, 0});
    check(child != 0, "CreateWindowExW(STATIC)");
    memset(g_mem + s + 0xb00, 0, 92);
    wr32(s + 0xb00, uint32_t(-16));
    uint32_t font = call_import(&c, "GDI32.dll", "CreateFontIndirectW", {s + 0xb00});
    call_import(&c, "USER32.dll", "SendMessageW", {child, 0x30, font, 0});
    check(font != 0 && call_import(&c, "USER32.dll", "SendMessageW", {child, 0x31, 0, 0}) == font,
          "WM_GETFONT returns the font WM_SETFONT gave the control");
    // WM_PAINT with a DC in wParam paints into that DC, not the window: the VCL
    // double-buffers a control this way and then copies the DC over it.
    uint32_t mem = call_import(&c, "GDI32.dll", "CreateCompatibleDC", {0});
    memset(g_mem + s + 0xc00, 0, 40);
    wr32(s + 0xc00, 40);
    wr32(s + 0xc04, 48);
    wr32(s + 0xc08, uint32_t(-16));
    wr16(s + 0xc0c, 1);
    wr16(s + 0xc0e, 32);
    uint32_t dib =
        call_import(&c, "GDI32.dll", "CreateDIBSection", {mem, s + 0xc00, 0, s + 0xc40, 0, 0});
    call_import(&c, "GDI32.dll", "SelectObject", {mem, dib});
    call_import(&c, "USER32.dll", "SendMessageW", {child, 0x0f, mem, 0});
    int in_memory = 0, on_window = 0;
    for (uint32_t y = 0; y < 16; ++y)
        for (uint32_t x = 0; x < 48; ++x)
            in_memory += call_import(&c, "GDI32.dll", "GetPixel", {mem, x, y}) != 0;
    uint32_t window_dc = call_import(&c, "USER32.dll", "GetDC", {parent});
    for (uint32_t y = 8; y < 24; ++y)
        for (uint32_t x = 8; x < 56; ++x)
            on_window += call_import(&c, "GDI32.dll", "GetPixel", {window_dc, x, y}) != 0;
    call_import(&c, "USER32.dll", "ReleaseDC", {parent, window_dc});
    check(in_memory > 0 && on_window == 0,
          "WM_PAINT with a DC in wParam paints into it, not the window (%d, %d)", in_memory,
          on_window);
    call_import(&c, "GDI32.dll", "DeleteDC", {mem});
    call_import(&c, "GDI32.dll", "DeleteObject", {dib});
    // The VCL shows a control with SetWindowPos and SWP_SHOWWINDOW, never with
    // ShowWindow, and that show is what invalidates it so UpdateWindow paints.
    auto visible = [&] {
        return (call_import(&c, "USER32.dll", "GetWindowLongW", {child, uint32_t(-16)}) &
                0x10000000u) != 0;
    };
    // SWP_NOSIZE | SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE, with SWP_SHOWWINDOW.
    call_import(&c, "USER32.dll", "SetWindowPos", {child, 0, 0, 0, 0, 0, 0x57});
    check(visible(), "SetWindowPos with SWP_SHOWWINDOW makes the control visible");
    call_import(&c, "USER32.dll", "UpdateWindow", {child});
    uint32_t dc = call_import(&c, "USER32.dll", "GetDC", {parent});
    auto painted = [&](uint32_t x0, uint32_t x1) {
        int n = 0;
        for (uint32_t y = 8; y < 24; ++y)
            for (uint32_t x = x0; x < x1; ++x)
                n += call_import(&c, "GDI32.dll", "GetPixel", {dc, x, y}) != 0;
        return n;
    };
    // "Hi" is 16 pixels wide, so centred in 48 it covers x 24..40.
    int inside = painted(24, 40), left = painted(8, 24), right = painted(40, 56);
    check(inside > 0 && left == 0 && right == 0,
          "WM_PAINT draws the caption centred in the control (%d, %d, %d)", inside, left, right);
    call_import(&c, "USER32.dll", "SetWindowPos", {child, 0, 0, 0, 0, 0, 0x97});
    check(!visible(), "SetWindowPos with SWP_HIDEWINDOW hides it again");
    call_import(&c, "USER32.dll", "ReleaseDC", {parent, dc});
    call_import(&c, "USER32.dll", "DestroyWindow", {child});
    call_import(&c, "USER32.dll", "DestroyWindow", {parent});
}
// WS_CLIPCHILDREN: a parent's DC leaves its visible children's areas alone,
// so a form that repaints does not paint over its controls; a hidden child
// is not excluded.
static void test_clip_children() {
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00318000;
    make_test_window(&c, s, 16, 16); // registers the class
    uint32_t parent =
        call_import(&c, "USER32.dll", "CreateWindowExW",
                    {0, s + 0x800, 0, 0x02000000u, 0, 0, 16, 16, 0, 0, IMAGE_BASE, 0});
    uint32_t child =
        call_import(&c, "USER32.dll", "CreateWindowExW",
                    {0, s + 0x800, 0, 0x50000000u, 4, 4, 4, 4, parent, 0, IMAGE_BASE, 0});
    uint32_t brush = call_import(&c, "GDI32.dll", "CreateSolidBrush", {0xff});
    wr32(s + 0x100, 0);
    wr32(s + 0x104, 0);
    wr32(s + 0x108, 16);
    wr32(s + 0x10c, 16);
    auto fill_parent = [&] {
        uint32_t dc = call_import(&c, "USER32.dll", "GetDC", {parent});
        call_import(&c, "USER32.dll", "FillRect", {dc, s + 0x100, brush});
        call_import(&c, "USER32.dll", "ReleaseDC", {parent, dc});
    };
    auto pixel = [&](uint32_t hwnd, uint32_t x, uint32_t y) {
        uint32_t dc = call_import(&c, "USER32.dll", "GetDC", {hwnd});
        uint32_t p = call_import(&c, "GDI32.dll", "GetPixel", {dc, x, y});
        call_import(&c, "USER32.dll", "ReleaseDC", {hwnd, dc});
        return p;
    };
    fill_parent();
    check(pixel(parent, 0, 0) == 0xff && pixel(child, 1, 1) == 0,
          "a WS_CLIPCHILDREN parent paints around its visible child, not over it");
    call_import(&c, "USER32.dll", "ShowWindow", {child, 0});
    fill_parent();
    check(pixel(child, 1, 1) == 0xff, "a hidden child is painted over");
    call_import(&c, "USER32.dll", "DestroyWindow", {child});
    call_import(&c, "USER32.dll", "DestroyWindow", {parent});
}
// DrawThemeParentBackground: the parent paints into the child's DC, shifted so
// its own coordinates land on the child, with WM_ERASEBKGND then
// WM_PRINTCLIENT. It is how a transparent VCL control shows the form behind it.
static std::vector<uint32_t> g_parent_messages;
static void print_parent_proc(X86 *c) {
    uint32_t msg = arg(c, 1);
    if (msg == 0x14 || msg == 0x318) {
        g_parent_messages.push_back(msg);
        if (msg == 0x318)
            gdi::write_pixel(arg(c, 2), 5, 5, 0xffff0000u);
    }
    set_eax(c, 1);
}
static void test_draw_theme_parent_background() {
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00320000;
    memset(g_mem + s, 0, 40);
    wr32(s + 4, imports_alloc_trampoline("test", "print_parent_proc", print_parent_proc, 4));
    gm_put_wstr(s + 0x800, "PrintParent", 32);
    wr32(s + 36, s + 0x800);
    check(call_import(&c, "USER32.dll", "RegisterClassW", {s}) != 0, "RegisterClassW(PrintParent)");
    uint32_t parent = call_import(&c, "USER32.dll", "CreateWindowExW",
                                  {0, s + 0x800, 0, 0, 0, 0, 16, 16, 0, 0, IMAGE_BASE, 0});
    uint32_t child =
        call_import(&c, "USER32.dll", "CreateWindowExW",
                    {0, s + 0x800, 0, 0x50000000u, 4, 4, 4, 4, parent, 0, IMAGE_BASE, 0});
    uint32_t dc = call_import(&c, "USER32.dll", "GetDC", {child});
    g_parent_messages.clear();
    check(call_import(&c, "UXTHEME.dll", "DrawThemeParentBackground", {child, dc, 0}) == 0,
          "DrawThemeParentBackground returns S_OK");
    check(g_parent_messages == std::vector<uint32_t>{0x14, 0x318},
          "the parent is asked to erase, then to print its client area");
    check(call_import(&c, "GDI32.dll", "GetPixel", {dc, 1, 1}) == 0x000000ffu,
          "the parent's (5,5) lands on the child's (1,1)");
    call_import(&c, "GDI32.dll", "SetPixel", {dc, 0, 0, 0x0000ff00u});
    uint32_t fresh = call_import(&c, "USER32.dll", "GetDC", {child});
    check(call_import(&c, "GDI32.dll", "GetPixel", {fresh, 0, 0}) == 0x0000ff00u,
          "the child's DC is back at its own origin afterwards");
    call_import(&c, "USER32.dll", "ReleaseDC", {child, fresh});
    call_import(&c, "USER32.dll", "ReleaseDC", {child, dc});
    call_import(&c, "USER32.dll", "DestroyWindow", {child});
    call_import(&c, "USER32.dll", "DestroyWindow", {parent});
}
// DrawThemeTextEx with no theme data draws the text the classic way: in the
// colour DTTOPTS names, without painting a background behind it. The VCL draws
// its captions through it once visual styles are on.
static void test_draw_theme_text_ex() {
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00328000;
    uint32_t hwnd = make_test_window(&c, s, 32, 16);
    uint32_t dc = call_import(&c, "USER32.dll", "GetDC", {hwnd});
    gm_put_wstr(s + 0x100, "Hi", 8);
    wr32(s + 0x140, 0);
    wr32(s + 0x144, 0);
    wr32(s + 0x148, 32);
    wr32(s + 0x14c, 16);
    memset(g_mem + s + 0x180, 0, 64);
    wr32(s + 0x180, 64);        // DTTOPTS.dwSize
    wr32(s + 0x184, 1);         // DTT_TEXTCOLOR
    wr32(s + 0x188, 0x0000ffu); // crText: red
    check(call_import(&c, "UXTHEME.dll", "DrawThemeTextEx",
                      {0, dc, 0, 0, s + 0x100, uint32_t(-1), 0, s + 0x140, s + 0x180}) == 0,
          "DrawThemeTextEx returns S_OK without theme data");
    int red = 0, other = 0;
    for (uint32_t y = 0; y < 16; ++y)
        for (uint32_t x = 0; x < 32; ++x) {
            uint32_t p = call_import(&c, "GDI32.dll", "GetPixel", {dc, x, y});
            red += p == 0x0000ffu;
            other += p != 0x0000ffu && p != 0;
        }
    check(red > 0 && other == 0,
          "the text is drawn in DTTOPTS's colour over an untouched background (%d red, %d other)",
          red, other);
    call_import(&c, "USER32.dll", "ReleaseDC", {hwnd, dc});
    call_import(&c, "USER32.dll", "DestroyWindow", {hwnd});
}
// Blits into a child window's DC whose window origin has been moved land where
// the logical coordinates say. DrawThemeParentBackground moves it so a parent
// paints in its own coordinates, and the VCL draws a transparent TImage there
// with MaskBlt from a memory DC.
static void test_blit_into_moved_child_origin() {
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00330000;
    uint32_t parent = make_test_window(&c, s, 16, 16);
    uint32_t child =
        call_import(&c, "USER32.dll", "CreateWindowExW",
                    {0, s + 0x800, 0, 0x50000000u, 4, 4, 8, 8, parent, 0, IMAGE_BASE, 0});
    uint32_t bmi = s + 0x200;
    memset(g_mem + bmi, 0, 40);
    wr32(bmi, 40);
    wr32(bmi + 4, 16);
    wr32(bmi + 8, uint32_t(-16)); // top-down
    wr16(bmi + 12, 1);
    wr16(bmi + 14, 32);
    uint32_t mem = call_import(&c, "GDI32.dll", "CreateCompatibleDC", {0});
    uint32_t dib = call_import(&c, "GDI32.dll", "CreateDIBSection", {mem, bmi, 0, s + 0x280, 0, 0});
    call_import(&c, "GDI32.dll", "SelectObject", {mem, dib});
    call_import(&c, "GDI32.dll", "SetPixel", {mem, 6, 6, 0x0000ffu});                // red
    call_import(&c, "GDI32.dll", "SetPixel", {mem, 7, 6, 0x00ff00u});                // green
    uint32_t mask = call_import(&c, "GDI32.dll", "CreateBitmap", {16, 16, 1, 1, 0}); // all clear
    uint32_t dc = call_import(&c, "USER32.dll", "GetDC", {child});
    // Logical (4,4) is the child's (0,0), which is the parent's (4,4).
    call_import(&c, "GDI32.dll", "SetWindowOrgEx", {dc, 4, 4, 0});
    check(call_import(&c, "GDI32.dll", "BitBlt", {dc, 0, 0, 16, 16, mem, 0, 0, 0x00cc0020u}) != 0,
          "BitBlt into the moved child DC");
    uint32_t parent_dc = call_import(&c, "USER32.dll", "GetDC", {parent});
    uint32_t red = call_import(&c, "GDI32.dll", "GetPixel", {parent_dc, 6, 6});
    check(red == 0x0000ffu, "BitBlt: the source's (6,6) lands on the parent's (6,6) (got %08x)",
          red);
    // Clear bits select the background operation, SRCCOPY: the VCL's transparent draw.
    call_import(&c, "GDI32.dll", "SetPixel", {mem, 7, 6, 0xff0000u}); // now blue
    check(call_import(&c, "GDI32.dll", "MaskBlt",
                      {dc, 0, 0, 16, 16, mem, 0, 0, mask, 0, 0, 0xccaa0029u}) != 0,
          "MaskBlt into the moved child DC");
    uint32_t blue = call_import(&c, "GDI32.dll", "GetPixel", {parent_dc, 7, 6});
    check(blue == 0xff0000u, "MaskBlt: the source's (7,6) lands on the parent's (7,6) (got %08x)",
          blue);
    call_import(&c, "USER32.dll", "ReleaseDC", {parent, parent_dc});
    call_import(&c, "USER32.dll", "ReleaseDC", {child, dc});
    call_import(&c, "GDI32.dll", "DeleteDC", {mem});
    call_import(&c, "GDI32.dll", "DeleteObject", {dib});
    call_import(&c, "GDI32.dll", "DeleteObject", {mask});
    call_import(&c, "USER32.dll", "DestroyWindow", {child});
    call_import(&c, "USER32.dll", "DestroyWindow", {parent});
}
// A font a program registers with AddFontMemResourceEx is the one its DC uses:
// measured by the font's own advances and drawn from its outlines, not the
// fixed 8x16 cells. The test font's 'A' is a box 400 units wide at x 100 with a
// 600 advance, 700 units tall on the baseline; 'B' has a 1000 advance.
static void test_memory_truetype_font() {
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00338000, data = s + 0x1000;
    memcpy(g_mem + data, kTestFontTtf, sizeof kTestFontTtf);
    wr32(s + 0x10, 0);
    check(call_import(&c, "GDI32.dll", "AddFontMemResourceEx",
                      {data, uint32_t(sizeof kTestFontTtf), 0, s + 0x10}) != 0 &&
              rd32(s + 0x10) == 1,
          "AddFontMemResourceEx registers the one font in the data");
    memset(g_mem + s + 0x100, 0, 92);
    wr32(s + 0x100, uint32_t(-100)); // a 100-pixel em: 0.1 pixel per font unit
    gm_put_wstr(s + 0x100 + 28, "RecompTest", 32);
    uint32_t font = call_import(&c, "GDI32.dll", "CreateFontIndirectW", {s + 0x100});
    uint32_t hwnd = make_test_window(&c, s, 256, 128);
    uint32_t dc = call_import(&c, "USER32.dll", "GetDC", {hwnd});
    call_import(&c, "GDI32.dll", "SelectObject", {dc, font});
    gm_put_wstr(s + 0x200, "AB", 8);
    call_import(&c, "GDI32.dll", "GetTextExtentPoint32W", {dc, s + 0x200, 2, s + 0x220});
    check(rd32(s + 0x220) == 160 && rd32(s + 0x224) == 100,
          "the extent is the font's advances and height (%u x %u)", rd32(s + 0x220),
          rd32(s + 0x224));
    memset(g_mem + s + 0x240, 0, 60);
    call_import(&c, "GDI32.dll", "GetTextMetricsW", {dc, s + 0x240});
    check(rd32(s + 0x240) == 100 && rd32(s + 0x244) == 80 && rd32(s + 0x248) == 20,
          "TEXTMETRIC height, ascent and descent come from the font (%u, %u, %u)", rd32(s + 0x240),
          rd32(s + 0x244), rd32(s + 0x248));
    call_import(&c, "GDI32.dll", "SetBkMode", {dc, 1});
    call_import(&c, "GDI32.dll", "SetTextColor", {dc, 0x0000ffu});
    // Drawn at (0,0) its baseline is at y 80, so the box covers x 10..50, y 10..80.
    call_import(&c, "GDI32.dll", "ExtTextOutW", {dc, 0, 0, 0, 0, s + 0x200, 1, 0});
    auto at = [&](uint32_t x, uint32_t y) {
        return call_import(&c, "GDI32.dll", "GetPixel", {dc, x, y});
    };
    check(at(30, 45) == 0x0000ffu && at(5, 45) == 0 && at(55, 45) == 0 && at(30, 5) == 0,
          "ExtTextOutW draws the glyph's outline (%08x %08x %08x %08x)", at(30, 45), at(5, 45),
          at(55, 45), at(30, 5));
    // Centred by its real 60-pixel width in 256: the box starts at x 108.
    wr32(s + 0x260, 0);
    wr32(s + 0x264, 40);
    wr32(s + 0x268, 256);
    wr32(s + 0x26c, 140);
    call_import(&c, "USER32.dll", "DrawTextW",
                {dc, s + 0x200, 1, s + 0x260, 0x21}); // DT_CENTER | DT_SINGLELINE
    check(at(128, 85) == 0x0000ffu && at(104, 85) == 0,
          "DrawTextW centres by the font's advance (%08x %08x)", at(128, 85), at(104, 85));
    call_import(&c, "USER32.dll", "ReleaseDC", {hwnd, dc});
    call_import(&c, "USER32.dll", "DestroyWindow", {hwnd});
}
// A program that names one of Windows' own interface faces and never
// registers it - the VCL's default font does exactly that - gets the bundled
// Open Sans: its proportional advances, and the semibold at weight 600 or
// more. At a 100-pixel em (2048 units) Open Sans 'i' is 518 units, 25 px, and
// 'W' 1896, 93; the semibold's are 571 and 1937, 28 and 95. A fixed-pitch or
// unknown face keeps the 8x16 cells, six times over at this height.
static void test_windows_face_substitute() {
    X86 c;
    loader_init_context(&c);
    uint32_t s = 0x00340000;
    uint32_t hwnd = make_test_window(&c, s, 256, 128);
    uint32_t dc = call_import(&c, "USER32.dll", "GetDC", {hwnd});
    gm_put_wstr(s + 0x200, "iW", 8);
    auto width = [&](const char *face, uint32_t weight) {
        memset(g_mem + s + 0x100, 0, 92);
        wr32(s + 0x100, uint32_t(-100));
        wr32(s + 0x100 + 16, weight);
        gm_put_wstr(s + 0x100 + 28, face, 32);
        uint32_t font = call_import(&c, "GDI32.dll", "CreateFontIndirectW", {s + 0x100});
        uint32_t old = call_import(&c, "GDI32.dll", "SelectObject", {dc, font});
        wr32(s + 0x220, 0);
        call_import(&c, "GDI32.dll", "GetTextExtentPoint32W", {dc, s + 0x200, 2, s + 0x220});
        call_import(&c, "GDI32.dll", "SelectObject", {dc, old});
        call_import(&c, "GDI32.dll", "DeleteObject", {font});
        return rd32(s + 0x220);
    };
    uint32_t w;
    check((w = width("Tahoma", 400)) == 118, "Tahoma is drawn with Open Sans (%u)", w);
    check((w = width("SEGOE UI", 0)) == 118,
          "the face name is matched without case, and weight 0 is regular (%u)", w);
    check((w = width("Tahoma", 700)) == 123, "a bold request takes the semibold (%u)", w);
    check((w = width("Courier New", 400)) == 96, "a fixed-pitch face keeps the 8x16 cells (%u)", w);
    check((w = width("RecompUnknown", 400)) == 96, "an unknown face keeps the 8x16 cells (%u)", w);
    call_import(&c, "USER32.dll", "ReleaseDC", {hwnd, dc});
    call_import(&c, "USER32.dll", "DestroyWindow", {hwnd});
}
int main(int argc, char **argv) {
    mem_init();
    imports_init();
    test_model();
    if (argc < 2) {
        test_text();
        test_draw_text();
    }
    if (argc < 2 || strcmp(argv[1], "model") != 0) {
        test_drawing();
        test_mono_conversion();
        test_layered_window();
        test_msimg32();
        test_dib_rows_and_regions();
        test_static_control();
        test_clip_children();
        test_draw_theme_parent_background();
        test_draw_theme_text_ex();
        test_blit_into_moved_child_origin();
        test_memory_truetype_font();
        test_windows_face_substitute();
        test_window_surface_and_blits(argc < 2 || strcmp(argv[1], "draw") != 0);
    }
    printf("%d checks, %d failures\n", g_checks, g_failures);
    mem_shutdown();
    return g_failures ? 1 : 0;
}
