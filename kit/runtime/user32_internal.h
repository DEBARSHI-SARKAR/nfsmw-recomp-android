// Internal USER32 model. All access is on the guest scheduler baton; guest
// callbacks may erase windows, so never retain a Window pointer across one.
#pragma once
#include "imports.h"
#include "gdi32_internal.h"
#include "win32.h"
#include <deque>
#include <map>
#include <string>
#include <vector>
namespace user32 {
struct WndClass {
    uint32_t style = 0;
    uint32_t wndproc = 0;
    uint32_t cls_extra = 0;
    uint32_t wnd_extra = 0;
    uint32_t hinstance = 0;
    uint32_t hicon = 0;
    uint32_t hcursor = 0;
    uint32_t hbrush = 0;
    std::string menu, name;
    uint32_t menu_id = 0, atom = 0;
    bool unicode = false;
    std::vector<uint32_t> extra;
};

struct Window {
    gdi::Surface surface;
    uint32_t hwnd = 0;
    uint32_t wndproc = 0;
    uint32_t style = 0, exstyle = 0;
    int32_t x = 0, y = 0, w = 0, h = 0;
    std::string cls, title_utf8;
    bool unicode = false;
    std::map<std::string, uint32_t> props;
    uint32_t menu = 0, parent = 0, owner = 0, id = 0;
    uint32_t thread = 0;
    bool enabled = true;
    bool owned_hidden = false;
    uint32_t region = 0;
    uint32_t show_cmd = 0;
    uint32_t userdata = 0;
    uint32_t font = 0; // WM_SETFONT, kept for the system control classes
    uint32_t hinstance = 0;
    std::vector<uint32_t> extra;
    bool visible = false;
    bool shown = false;
    // Windows tracks an update region per window; the runtime only needs to
    // know whether it is empty, which is what UpdateWindow and BeginPaint act
    // on. Showing a window invalidates it, painting it validates it.
    bool update_pending = false;
    // SetLayeredWindowAttributes: LWA_COLORKEY (1) makes every pixel of that
    // colour transparent, LWA_ALPHA (2) applies one opacity to the whole
    // window. Both are honoured where the window surfaces are composited.
    uint32_t layered_flags = 0, layered_key = 0, layered_alpha = 255;
};

struct Msg {
    uint32_t hwnd, message, wparam, lparam, time, ptx, pty;
};

std::map<std::string, WndClass> &classes();
std::map<uint32_t, Window> &windows();
std::deque<Msg> &queue();
Window *find_window(uint32_t hwnd);
std::string class_key(uint32_t p, bool wide = false);
uint32_t wide_units(const std::string &text);
uint32_t put_text(uint32_t out, uint32_t cap, const std::string &text, bool wide);
void register_class_named(X86 *c, bool wide, uint32_t shift);
void create_window_named(X86 *c, bool wide);
void def_window_proc(X86 *c, bool wide);
void send_message(X86 *c, bool wide);
void peek_message(X86 *c);
void dispatch_message(X86 *c);
uint32_t deliver_message(X86 *c, uint32_t hwnd, uint32_t msg, uint32_t wp, uint32_t lp, bool wide);
extern uint32_t g_main_hwnd, g_cursor;
extern int32_t g_cursor_x, g_cursor_y;
extern uint8_t g_key_state[256];
extern bool (*g_message_waiter)();
extern Msg last_message;
constexpr uint32_t desktop_handle = 0x00020000;
void pump_window_timers();
// Whether some visible window has an update region a paint would answer.
bool paint_pending();
void window_created(uint32_t hwnd);
// Siblings in back-to-front stacking order, respecting WS_EX_TOPMOST.
std::vector<uint32_t> window_z_order(uint32_t parent);
void reorder_window(uint32_t hwnd, uint32_t after);
void pump_mouse_input(X86 *c);
void forget_window_services(uint32_t hwnd);
bool destroy_window(X86 *c, uint32_t hwnd);
void client_origin(uint32_t hwnd, int32_t *x, int32_t *y);
void display_rect(uint32_t out);
void alias_ansi(X86 *c, const char *name);
// Registers the system control classes (STATIC) on first use.
void ensure_system_classes();
} // namespace user32
void user32_wide_register();

void user32_vcl_register();
