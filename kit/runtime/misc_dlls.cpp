// Small DLL probes for a runtime with no printer, workstation service or tray.
#include "imports.h"
#include "user32_internal.h"
#include "win32.h"
#include "../platform/os.h"
#include <algorithm>
#include <cstring>
#include <vector>

namespace {
void zero_out(uint32_t p) {
    if (p && gm_valid(p, 4))
        wr32(p, 0);
}
void yes(X86 *c) {
    set_eax(c, 1);
}
void zero(X86 *c) {
    set_eax(c, 0);
}
void session_service_unavailable(X86 *c) {
    // No Remote Desktop Services endpoint is running in the guest runtime.
    // Expose the exports so callers receive the service error as a BOOL result.
    set_last_error(1702); // RPC_S_INVALID_BINDING
    set_eax(c, 0);
}
void buffered_paint_unavailable(X86 *c) {
    set_eax(c, 0x80004001u); // E_NOTIMPL: use the caller's ordinary GDI path.
}
// Visual styles are on, as on every Windows since Vista, but there is no theme
// data: OpenThemeData finds none, so a program draws its controls the classic
// way, and the per-part queries fail with E_HANDLE as they do for a NULL theme.
// A VCL program binds every export at start and calls through the pointers,
// so each one is here. DrawThemeParentBackground is the one that does work.
void e_handle(X86 *c) {
    set_eax(c, 0x80070006u); // E_HANDLE
}
void theme_app_properties(X86 *c) {
    set_eax(c, 7); // STAP_ALLOW_NONCLIENT | STAP_ALLOW_CONTROLS | STAP_ALLOW_WEBCONTENT
}
// With no theme, the system metric queries answer from the system settings.
void theme_sys_value(X86 *c, const char *user32_export) {
    set_eax(c, guest_call(c, imports_resolve("USER32.dll", user32_export), arg(c, 1)));
}
void theme_sys_color(X86 *c) {
    theme_sys_value(c, "GetSysColor");
}
void theme_sys_color_brush(X86 *c) {
    theme_sys_value(c, "GetSysColorBrush");
}
void theme_sys_size(X86 *c) {
    theme_sys_value(c, "GetSystemMetrics");
}
// With no theme data, themed text is drawn the classic way: the DC's font, the
// colour DTTOPTS names if it names one, and no background, as themed text never
// has one. Windows answers a NULL theme with E_HANDLE, but a VCL program with
// styles on draws its captions through these calls, and would lose them all.
uint32_t theme_text(uint32_t hdc, uint32_t text, uint32_t count, uint32_t flags, uint32_t rect,
                    uint32_t options) {
    auto *dc = gdi::dc_of(hdc);
    if (!dc || !text || !rect)
        return 0x80070057u; // E_INVALIDARG
    const uint32_t option_flags = options && gm_valid(options, 12) ? rd32(options + 4) : 0;
    const uint32_t old_color = dc->text_color;
    const int old_mode = dc->bk_mode;
    if (option_flags & 0x1) // DTT_TEXTCOLOR
        dc->text_color = rd32(options + 8);
    if (option_flags & 0x200) // DTT_CALCRECT
        flags |= 0x400;       // DT_CALCRECT
    dc->bk_mode = 1;          // TRANSPARENT
    gdi::draw_text(hdc, text, count, rect, flags);
    if (auto *after = gdi::dc_of(hdc)) {
        after->text_color = old_color;
        after->bk_mode = old_mode;
    }
    return 0;
}
// DrawThemeText(hTheme, hdc, part, state, text, count, flags, flags2, rect)
void draw_theme_text(X86 *c) {
    set_eax(c, theme_text(arg(c, 1), arg(c, 4), arg(c, 5), arg(c, 6), arg(c, 8), 0));
}
// DrawThemeTextEx(hTheme, hdc, part, state, text, count, flags, rect, options)
void draw_theme_text_ex(X86 *c) {
    set_eax(c, theme_text(arg(c, 1), arg(c, 4), arg(c, 5), arg(c, 6), arg(c, 7), arg(c, 8)));
}
// No paint buffer and no animation: the caller paints its target directly.
void begin_buffered_paint(X86 *c) {
    if (recomp_env("TRACE_GDI")) {
        const uint32_t rc = arg(c, 1);
        LOGW("gdi: BeginBufferedPaint target=%08x rect=%d,%d,%d,%d format=%u", arg(c, 0),
             rc && gm_valid(rc, 16) ? (int)rd32(rc) : -1,
             rc && gm_valid(rc, 16) ? (int)rd32(rc + 4) : -1,
             rc && gm_valid(rc, 16) ? (int)rd32(rc + 8) : -1,
             rc && gm_valid(rc, 16) ? (int)rd32(rc + 12) : -1, arg(c, 2));
    }
    zero_out(arg(c, 4)); // *phdc
    set_eax(c, 0);
}
void begin_buffered_animation(X86 *c) {
    zero_out(arg(c, 6)); // *phdcFrom
    zero_out(arg(c, 7)); // *phdcTo
    set_eax(c, 0);
}
// DrawThemeParentBackground(hwnd, hdc, prc): the parent paints its background
// into the child's DC, the DC's origin moved so the parent's coordinates land
// on the child, through WM_ERASEBKGND and then WM_PRINTCLIENT. A transparent
// control - the VCL's TStaticText - draws its text over what that leaves.
void draw_parent_background(X86 *c) {
    uint32_t hwnd = arg(c, 0), hdc = arg(c, 1), rect = arg(c, 2);
    auto *w = user32::find_window(hwnd);
    auto *dc = gdi::dc_of(hdc);
    if (!w || !dc) {
        set_eax(c, 0x80070006u); // E_HANDLE
        return;
    }
    const uint32_t parent = w->parent;
    if (!parent) {
        set_eax(c, 0);
        return;
    }
    int32_t cx = 0, cy = 0, px = 0, py = 0;
    user32::client_origin(hwnd, &cx, &cy);
    user32::client_origin(parent, &px, &py);
    const gdi::DcState saved = *dc;
    if (rect && gm_valid(rect, 16)) { // prc limits the paint, in the child's coordinates
        gdi::Rect cut = gdi::to_device(hdc, {int32_t(rd32(rect)), int32_t(rd32(rect + 4)),
                                             int32_t(rd32(rect + 8)), int32_t(rd32(rect + 12))});
        std::vector<gdi::Rect> clip;
        for (gdi::Rect r : dc->clipped ? dc->clip : std::vector<gdi::Rect>{cut}) {
            gdi::Rect hit{std::max(r.l, cut.l), std::max(r.t, cut.t), std::min(r.r, cut.r),
                          std::min(r.b, cut.b)};
            if (hit.l < hit.r && hit.t < hit.b)
                clip.push_back(hit);
        }
        dc->clip = std::move(clip);
        dc->clipped = true;
    }
    dc->org_x += cx - px;
    dc->org_y += cy - py;
    host_dispatch_to_wndproc(c, parent, 0x0014 /* WM_ERASEBKGND */, hdc, 0);
    host_dispatch_to_wndproc(c, parent, 0x0318 /* WM_PRINTCLIENT */, hdc, 4 /* PRF_CLIENT */);
    if (auto *after = gdi::dc_of(hdc)) // the window procedures may have changed it
        static_cast<gdi::DcState &>(*after) = saved;
    set_eax(c, 0);
}
void composition_enabled(X86 *c) {
    uint32_t out = arg(c, 0);
    if (!out || !gm_valid(out, 4)) {
        set_eax(c, 0x80070057u); // E_INVALIDARG
        return;
    }
    wr32(out, 0); // No desktop composition or glass frame in the guest model.
    set_eax(c, 0);
}
void enum_printers(X86 *c) {
    zero_out(arg(c, 5));
    zero_out(arg(c, 6));
    set_eax(c, 1);
}
void default_printer(X86 *c) {
    zero_out(arg(c, 1));
    set_last_error(2);
    set_eax(c, 0);
}
void open_printer(X86 *c) {
    zero_out(arg(c, 1));
    set_last_error(1801); // ERROR_INVALID_PRINTER_NAME
    set_eax(c, 0);
}
void document_properties(X86 *c) {
    set_eax(c, 0xffffffffu);
}
// The Win32 prototype has three arguments, not four: server, level, buffer.
void workstation_info(X86 *c) {
    zero_out(arg(c, 2));
    set_eax(c, 50);
}
void crt_memcpy(X86 *c) {
    uint32_t dst = arg(c, 0), src = arg(c, 1), size = arg(c, 2);
    if (gm_valid(dst, size) && gm_valid(src, size) && size)
        memcpy(g_mem + dst, g_mem + src, size);
    set_eax(c, dst);
}
void crt_memset(X86 *c) {
    uint32_t dst = arg(c, 0), size = arg(c, 2);
    if (gm_valid(dst, size) && size)
        memset(g_mem + dst, int(arg(c, 1)), size);
    set_eax(c, dst);
}
// All supported per-user settings locations use the same Documents guest path;
// the file overlay decides where that path resides in the writable profile.
void folder_path(X86 *c) {
    uint32_t csidl = arg(c, 1), out = arg(c, 4);
    switch (csidl & 0xff) {
    case 5:
    case 26:
    case 28:
    case 35:
        break;
    default:
        set_eax(c, 0x80070057u);
        return;
    }
    if (!out || !gm_valid(out, 520)) {
        set_eax(c, 0x80070057u);
        return;
    }
    gm_put_wstr(out, shell_folder_guest_path(5, (csidl & 0x8000) != 0), 260);
    set_eax(c, 0);
}
const ImportShim shims[] = {
    {"DWMAPI.dll", "DwmIsCompositionEnabled", 1, composition_enabled},
    {"DWMAPI.dll", "DwmExtendFrameIntoClientArea", 2, buffered_paint_unavailable},
    {"UXTHEME.dll", "IsThemeActive", 0, yes},
    {"UXTHEME.dll", "IsAppThemed", 0, yes},
    {"UXTHEME.dll", "OpenThemeData", 2, zero},
    {"UXTHEME.dll", "GetWindowTheme", 1, zero},
    {"UXTHEME.dll", "CloseThemeData", 1, zero},
    {"UXTHEME.dll", "SetWindowTheme", 3, zero},
    {"UXTHEME.dll", "EnableThemeDialogTexture", 2, zero},
    {"UXTHEME.dll", "IsThemeDialogTextureEnabled", 1, zero},
    {"UXTHEME.dll", "EnableTheming", 1, zero},
    {"UXTHEME.dll", "GetThemeAppProperties", 0, theme_app_properties},
    {"UXTHEME.dll", "SetThemeAppProperties", 1, zero},
    {"UXTHEME.dll", "IsThemePartDefined", 3, zero},
    {"UXTHEME.dll", "IsThemeBackgroundPartiallyTransparent", 3, zero},
    {"UXTHEME.dll", "GetThemeSysBool", 2, zero},
    {"UXTHEME.dll", "GetThemeSysColor", 2, theme_sys_color},
    {"UXTHEME.dll", "GetThemeSysColorBrush", 2, theme_sys_color_brush},
    {"UXTHEME.dll", "GetThemeSysSize", 2, theme_sys_size},
    {"UXTHEME.dll", "GetThemeSysFont", 3, e_handle},
    {"UXTHEME.dll", "GetThemeSysString", 4, e_handle},
    {"UXTHEME.dll", "GetThemeSysInt", 3, e_handle},
    {"UXTHEME.dll", "DrawThemeBackground", 6, e_handle},
    {"UXTHEME.dll", "DrawThemeText", 9, draw_theme_text},
    {"UXTHEME.dll", "DrawThemeTextEx", 9, draw_theme_text_ex},
    {"UXTHEME.dll", "OpenThemeDataForDpi", 3, zero},
    {"UXTHEME.dll", "BeginBufferedPaint", 5, begin_buffered_paint},
    {"UXTHEME.dll", "EndBufferedPaint", 2, buffered_paint_unavailable},
    {"UXTHEME.dll", "BufferedPaintSetAlpha", 3, buffered_paint_unavailable},
    {"UXTHEME.dll", "BeginBufferedAnimation", 8, begin_buffered_animation},
    {"UXTHEME.dll", "EndBufferedAnimation", 2, buffered_paint_unavailable},
    {"UXTHEME.dll", "BufferedPaintRenderAnimation", 2, zero},
    {"UXTHEME.dll", "BufferedPaintStopAllAnimations", 1, zero},
    {"UXTHEME.dll", "GetThemeBackgroundContentRect", 6, e_handle},
    {"UXTHEME.dll", "GetThemeBackgroundExtent", 6, e_handle},
    {"UXTHEME.dll", "GetThemePartSize", 7, e_handle},
    {"UXTHEME.dll", "GetThemeTextExtent", 9, e_handle},
    {"UXTHEME.dll", "GetThemeTextMetrics", 5, e_handle},
    {"UXTHEME.dll", "GetThemeBackgroundRegion", 6, e_handle},
    {"UXTHEME.dll", "HitTestThemeBackground", 10, e_handle},
    {"UXTHEME.dll", "DrawThemeEdge", 8, e_handle},
    {"UXTHEME.dll", "DrawThemeIcon", 7, e_handle},
    {"UXTHEME.dll", "GetThemeColor", 5, e_handle},
    {"UXTHEME.dll", "GetThemeMetric", 6, e_handle},
    {"UXTHEME.dll", "GetThemeString", 6, e_handle},
    {"UXTHEME.dll", "GetThemeBool", 5, e_handle},
    {"UXTHEME.dll", "GetThemeInt", 5, e_handle},
    {"UXTHEME.dll", "GetThemeEnumValue", 5, e_handle},
    {"UXTHEME.dll", "GetThemePosition", 5, e_handle},
    {"UXTHEME.dll", "GetThemeFont", 6, e_handle},
    {"UXTHEME.dll", "GetThemeRect", 5, e_handle},
    {"UXTHEME.dll", "GetThemeMargins", 7, e_handle},
    {"UXTHEME.dll", "GetThemeIntList", 5, e_handle},
    {"UXTHEME.dll", "GetThemePropertyOrigin", 5, e_handle},
    {"UXTHEME.dll", "GetThemeFilename", 6, e_handle},
    {"UXTHEME.dll", "GetCurrentThemeName", 6, e_handle},
    {"UXTHEME.dll", "GetThemeDocumentationProperty", 4, e_handle},
    {"UXTHEME.dll", "DrawThemeParentBackground", 3, draw_parent_background},
    {"UXTHEME.dll", "BufferedPaintInit", 0, buffered_paint_unavailable},
    {"UXTHEME.dll", "BufferedPaintUnInit", 0, zero},
    {"WTSAPI32.dll", "WTSRegisterSessionNotification", 2, session_service_unavailable},
    {"WTSAPI32.dll", "WTSUnRegisterSessionNotification", 1, session_service_unavailable},
    {"WINSPOOL.DRV", "EnumPrintersW", 7, enum_printers},
    {"WINSPOOL.DRV", "GetDefaultPrinterW", 2, default_printer},
    {"WINSPOOL.DRV", "OpenPrinterW", 3, open_printer},
    {"WINSPOOL.DRV", "ClosePrinter", 1, yes},
    {"WINSPOOL.DRV", "DocumentPropertiesW", 6, document_properties},
    {"NETAPI32.dll", "NetWkstaGetInfo", 3, workstation_info},
    {"NETAPI32.dll", "NetApiBufferFree", 1, zero},
    {"msvcrt.dll", "memcpy", ARGC_CDECL, crt_memcpy},
    {"msvcrt.dll", "memset", ARGC_CDECL, crt_memset},
    {"SHFOLDER.dll", "SHGetFolderPathW", 5, folder_path},
    {"SHELL32.dll", "Shell_NotifyIconW", 2, yes},
    {"SHELL32.dll", "SHAppBarMessage", 2, zero},
    {"SHELL32.dll", "ShellExecuteW", 6, zero},
    {"URLMON.dll", "URLDownloadToFileW", 5, nullptr},
};
} // namespace
void misc_dlls_register() {
    imports_register(shims, sizeof shims / sizeof shims[0]);
}
