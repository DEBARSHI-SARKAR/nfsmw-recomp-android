// The cooperative USER32 model used by windowed compiler frameworks. Handles
// name runtime-owned state; callbacks always re-enter through guest_call.
#include "user32_internal.h"
#include "memory.h"
#include "win32.h"
#include "gdi_image.h"
#include <algorithm>
#include <set>
#include <vector>
#include <cstring>

void sched_checkpoint();
namespace user32 {
namespace {
uint32_t active = 0, focus = 0, capture = 0;
std::vector<uint32_t> z_order;
struct MouseInput {
    uint32_t message, mk;
    int32_t x, y;
    uint32_t time;
};
std::deque<MouseInput> mouse_input;
bool routing_mouse = false;
struct Timer {
    uint32_t hwnd, id, interval, due, callback, thread;
};
std::map<std::pair<uint32_t, uint32_t>, Timer> timers;
uint32_t next_timer = 1;
std::set<uint32_t> destroying;
} // namespace
void window_created(uint32_t hwnd) {
    z_order.push_back(hwnd);
    if (!active)
        active = hwnd;
    if (!focus)
        focus = hwnd;
}
std::vector<uint32_t> window_z_order(uint32_t parent) {
    std::vector<uint32_t> result;
    for (uint32_t hwnd : z_order) {
        auto *w = find_window(hwnd);
        if (w && w->parent == parent)
            result.push_back(hwnd);
    }
    if (!parent)
        std::stable_sort(result.begin(), result.end(), [](uint32_t a, uint32_t b) {
            return (find_window(a)->exstyle & 8) < (find_window(b)->exstyle & 8);
        });
    return result;
}
void reorder_window(uint32_t hwnd, uint32_t after) {
    auto *w = find_window(hwnd);
    if (!w || hwnd == after)
        return;
    auto *other = find_window(after);
    if (after > 1 && after < 0xfffffffeu && (!other || other->parent != w->parent))
        return;
    if (!w->parent) {
        if (after == 0xffffffffu || (other && (other->exstyle & 8)))
            w->exstyle |= 8; // HWND_TOPMOST, or after another topmost window
        else if (after == 0xfffffffeu || after == 1 || other)
            w->exstyle &= ~8u; // HWND_NOTOPMOST / HWND_BOTTOM / ordinary sibling
    }
    z_order.erase(std::remove(z_order.begin(), z_order.end(), hwnd), z_order.end());
    if (after == 1)
        z_order.insert(z_order.begin(), hwnd);
    else if (other)
        z_order.insert(std::find(z_order.begin(), z_order.end(), after), hwnd);
    else
        z_order.push_back(hwnd);
}
// Descend only through an eligible parent. A hidden/disabled modal owner and
// its children cannot intercept input; an owned popup remains a top-level peer.
uint32_t mouse_window(uint32_t parent, int32_t x, int32_t y, size_t depth = 0) {
    if (depth > windows().size())
        return 0;
    auto order = window_z_order(parent);
    for (auto i = order.rbegin(); i != order.rend(); ++i) {
        auto *w = find_window(*i);
        int32_t wx, wy;
        client_origin(*i, &wx, &wy);
        if (!w->visible || !w->enabled || x < wx || y < wy || int64_t(x) >= int64_t(wx) + w->w ||
            int64_t(y) >= int64_t(wy) + w->h)
            continue;
        uint32_t child = mouse_window(*i, x, y, depth + 1);
        return child ? child : *i;
    }
    return 0;
}
// Host events carry screen points until the guest retrieves input. Only here
// can activation synchronously invoke a guest WNDPROC. One event per pump lets
// the preceding press establish capture before its subsequent move/release.
void pump_mouse_input(X86 *c) {
    if (routing_mouse || mouse_input.empty())
        return;
    struct Guard {
        Guard() {
            routing_mouse = true;
        }
        ~Guard() {
            routing_mouse = false;
        }
    } guard;
    MouseInput input = mouse_input.front();
    mouse_input.pop_front();
    uint32_t hwnd = find_window(capture) ? capture : mouse_window(0, input.x, input.y);
    auto *w = find_window(hwnd);
    if (!w)
        return;
    uint32_t top = hwnd;
    for (size_t n = 0; w->parent && n < windows().size(); ++n) {
        top = w->parent;
        w = find_window(top);
        if (!w)
            return;
    }
    host_set_cursor_pos(input.x, input.y);
    bool press = input.message == 0x201 || input.message == 0x204 || input.message == 0x207;
    if (!capture && press && top != active) {
        uint32_t result = host_dispatch_to_wndproc(c, hwnd, 0x21, top, (input.message << 16) | 1);
        if (result == 1 || result == 2) {
            uint32_t old = active;
            active = top;
            reorder_window(top, 0);
            if (find_window(old))
                host_dispatch_to_wndproc(c, old, 6, 0, top);
            if (find_window(top))
                host_dispatch_to_wndproc(c, top, 6, 2, old); // WA_CLICKACTIVE
        }
        if (result == 2 || result == 4)
            return; // MA_*ANDEAT
    }
    if (!find_window(hwnd))
        return; // activation may destroy its recipient
    int32_t x, y;
    client_origin(hwnd, &x, &y);
    uint32_t lp = (uint32_t(uint16_t(int64_t(input.y) - y)) << 16) | uint16_t(int64_t(input.x) - x);
    LOGV("host mouse %04x screen=(%d,%d) -> hwnd=%08x client=(%d,%d) mk=%x", input.message, input.x,
         input.y, hwnd, int16_t(lp), int16_t(lp >> 16), input.mk);
    queue().push_back(
        {hwnd, input.message, input.mk, lp, input.time, uint32_t(input.x), uint32_t(input.y)});
}
// Queue each expired timer at most once. Signed subtraction handles DWORD
// clock wrap; no host thread mutates guest memory or invokes a callback here.
void pump_window_timers() {
    uint32_t now = host_millis();
    for (auto &kv : timers) {
        Timer &t = kv.second;
        if (t.thread != guest_current_thread_id() || int32_t(now - t.due) < 0)
            continue;
        bool queued = false;
        for (const auto &m : queue())
            if (m.message == 0x113 && m.hwnd == t.hwnd && m.wparam == t.id) {
                queued = true;
                break;
            }
        if (!queued)
            host_post_message(t.hwnd, 0x113, t.id, t.callback);
        t.due = now + t.interval;
    }
}
// Snapshot children before callbacks: WM_DESTROY/WM_NCDESTROY can recursively
// destroy another window, change parentage or create a new window.
bool destroy_window(X86 *c, uint32_t hwnd) {
    if (!find_window(hwnd) || hwnd == desktop_handle || destroying.count(hwnd))
        return false;
    destroying.insert(hwnd);
    host_dispatch_to_wndproc(c, hwnd, 2, 0, 0);
    std::vector<uint32_t> children;
    for (const auto &kv : windows())
        if (kv.second.parent == hwnd || kv.second.owner == hwnd)
            children.push_back(kv.first);
    for (uint32_t child : children)
        destroy_window(c, child);
    host_dispatch_to_wndproc(c, hwnd, 0x82, 0, 0);
    forget_window_services(hwnd);
    gdi_destroy_window(hwnd);
    windows().erase(hwnd);
    z_order.erase(std::remove(z_order.begin(), z_order.end(), hwnd), z_order.end());
    win32_forget_scrollbars(hwnd);
    for (auto i = timers.begin(); i != timers.end();)
        if (i->second.hwnd == hwnd)
            i = timers.erase(i);
        else
            ++i;
    auto &q = queue();
    q.erase(std::remove_if(q.begin(), q.end(), [&](const Msg &m) { return m.hwnd == hwnd; }),
            q.end());
    if (active == hwnd)
        active = 0;
    if (focus == hwnd)
        focus = 0;
    if (capture == hwnd)
        capture = 0;
    if (g_main_hwnd == hwnd)
        g_main_hwnd = windows().empty() ? 0 : windows().begin()->first;
    destroying.erase(hwnd);
    return true;
}
void client_origin(uint32_t hwnd, int32_t *x, int32_t *y) {
    *x = *y = 0;
    std::set<uint32_t> seen;
    while (hwnd && seen.insert(hwnd).second) {
        Window *w = find_window(hwnd);
        if (!w)
            break;
        *x += w->x;
        *y += w->y;
        hwnd = w->parent;
    }
}
bool is_child(uint32_t parent, uint32_t hwnd) {
    if (!parent || parent == hwnd)
        return false;
    Window *w = find_window(hwnd);
    while (w && w->parent) {
        if (w->parent == parent)
            return true;
        w = find_window(w->parent);
    }
    return false;
}
} // namespace user32

namespace {
using namespace user32;
void yes(X86 *c) {
    set_eax(c, 1);
}
void zero(X86 *c) {
    set_eax(c, 0);
}
void set_timer(X86 *c) {
    uint32_t hwnd = arg(c, 0), id = arg(c, 1), interval = std::clamp(arg(c, 2), 10u, 0x7fffffffu);
    if (hwnd && !find_window(hwnd)) {
        set_eax(c, 0);
        return;
    }
    if (!id || (!hwnd && !timers.count({0, id}))) {
        while (timers.count({hwnd, next_timer}))
            ++next_timer;
        id = next_timer++;
    }
    timers[{hwnd, id}] = {
        hwnd, id, interval, host_millis() + interval, arg(c, 3), guest_current_thread_id()};
    set_eax(c, id ? id : 1);
}
void kill_timer(X86 *c) {
    set_eax(c, timers.erase({arg(c, 0), arg(c, 1)}) != 0);
}
std::string prop_key(uint32_t p) {
    return p < 0x10000 ? "#atom" + std::to_string(p) : gm_wstr(p);
}
void get_prop(X86 *c) {
    Window *w = find_window(arg(c, 0));
    auto key = prop_key(arg(c, 1));
    set_eax(c, w && w->props.count(key) ? w->props[key] : 0);
}
void set_prop(X86 *c) {
    Window *w = find_window(arg(c, 0));
    if (w)
        w->props[prop_key(arg(c, 1))] = arg(c, 2);
    set_eax(c, w != nullptr);
}
void remove_prop(X86 *c) {
    Window *w = find_window(arg(c, 0));
    auto key = prop_key(arg(c, 1));
    uint32_t old = w && w->props.count(key) ? w->props[key] : 0;
    if (w)
        w->props.erase(key);
    set_eax(c, old);
}
void get_parent(X86 *c) {
    Window *w = find_window(arg(c, 0));
    set_eax(c, w ? (w->parent ? w->parent : w->owner) : 0);
}
void set_parent(X86 *c) {
    Window *w = find_window(arg(c, 0));
    uint32_t parent = arg(c, 1);
    if (!w || (parent && !find_window(parent)) || parent == w->hwnd || is_child(w->hwnd, parent)) {
        set_last_error(87);
        set_eax(c, 0);
        return;
    }
    uint32_t old = w->parent;
    w->parent = parent == desktop_handle ? 0 : parent;
    set_eax(c, old);
}
void child_of(X86 *c) {
    set_eax(c, is_child(arg(c, 0), arg(c, 1)));
}
// Enumerations snapshot handles and revalidate each entry after guest callbacks.
void enumerate_windows(X86 *c, int kind) {
    uint32_t filter = kind ? arg(c, 0) : 0, cb = arg(c, kind ? 1 : 0), param = arg(c, kind ? 2 : 1);
    std::vector<uint32_t> list;
    for (const auto &kv : windows()) {
        const auto &w = kv.second;
        if (kind == 1 ? (!filter || is_child(filter, w.hwnd))
                      : (!w.parent && (kind != 2 || w.thread == filter)))
            list.push_back(w.hwnd);
    }
    bool ok = cb != 0;
    for (uint32_t hwnd : list)
        if (ok && find_window(hwnd))
            ok = guest_call(c, cb, hwnd, param) != 0;
    set_eax(c, ok);
}
void enum_windows(X86 *c) {
    enumerate_windows(c, 0);
}
void enum_children(X86 *c) {
    enumerate_windows(c, 1);
}
void enum_thread(X86 *c) {
    enumerate_windows(c, 2);
}
std::vector<uint32_t> siblings(uint32_t parent) {
    return window_z_order(parent);
}
void top_window(X86 *c) {
    auto list = siblings(arg(c, 0) == desktop_handle ? 0 : arg(c, 0));
    set_eax(c, list.empty() ? 0 : list.back());
}
void get_window(X86 *c) {
    Window *w = find_window(arg(c, 0));
    uint32_t kind = arg(c, 1), result = 0;
    if (w) {
        if (kind == 4)
            result = w->owner;
        else {
            auto list = siblings(kind == 5 ? (w->hwnd == desktop_handle ? 0 : w->hwnd) : w->parent);
            auto i = std::find(list.begin(), list.end(), w->hwnd);
            if (!list.empty())
                switch (kind) {
                case 0:
                case 5:
                    result = list.back();
                    break;
                case 1:
                    result = list.front();
                    break;
                case 2:
                    if (i != list.begin() && i != list.end())
                        result = *--i;
                    break;
                case 3:
                    if (i != list.end() && ++i != list.end())
                        result = *i;
                    break;
                }
        }
    }
    set_eax(c, result);
}
void window_thread(X86 *c) {
    Window *w = find_window(arg(c, 0));
    if (arg(c, 1))
        wr32(arg(c, 1), w ? 1 : 0);
    set_eax(c, w ? w->thread : 0);
}
void is_window(X86 *c) {
    set_eax(c, find_window(arg(c, 0)) != nullptr);
}
void is_visible(X86 *c) {
    Window *w = find_window(arg(c, 0));
    bool visible = w != nullptr;
    while (w) {
        visible = visible && w->visible;
        w = find_window(w->parent);
    }
    set_eax(c, visible);
}
void is_enabled(X86 *c) {
    Window *w = find_window(arg(c, 0));
    set_eax(c, w && w->enabled);
}
void enable_window(X86 *c) {
    Window *w = find_window(arg(c, 0));
    bool disabled = w && !w->enabled;
    if (w) {
        w->enabled = arg(c, 1) != 0;
        if (w->enabled)
            w->style &= ~0x08000000u;
        else
            w->style |= 0x08000000u;
    }
    set_eax(c, disabled);
}
void iconic(X86 *c) {
    Window *w = find_window(arg(c, 0));
    set_eax(c, w && (w->style & 0x20000000u));
}
void zoomed(X86 *c) {
    Window *w = find_window(arg(c, 0));
    set_eax(c, w && (w->style & 0x01000000u));
}
void get_placement(X86 *c) {
    Window *w = find_window(arg(c, 0));
    uint32_t p = arg(c, 1);
    if (!w || !p || !gm_valid(p, 44) || rd32(p) != 44) {
        set_eax(c, 0);
        return;
    }
    memset(g_mem + p + 4, 0, 40);
    wr32(p + 8, w->show_cmd);
    wr32(p + 28, w->x);
    wr32(p + 32, w->y);
    wr32(p + 36, w->x + w->w);
    wr32(p + 40, w->y + w->h);
    set_eax(c, 1);
}
void set_placement(X86 *c) {
    Window *w = find_window(arg(c, 0));
    uint32_t p = arg(c, 1);
    if (!w || !p || !gm_valid(p, 44) || rd32(p) != 44) {
        set_eax(c, 0);
        return;
    }
    uint32_t hwnd = w->hwnd, cmd = rd32(p + 8);
    w->x = int32_t(rd32(p + 28));
    w->y = int32_t(rd32(p + 32));
    w->w = int32_t(rd32(p + 36)) - w->x;
    w->h = int32_t(rd32(p + 40)) - w->y;
    guest_call(c, imports_resolve("USER32.dll", "ShowWindow"), hwnd, cmd);
    set_eax(c, 1);
}
void get_active(X86 *c) {
    set_eax(c, active);
}
void set_active(X86 *c) {
    uint32_t hwnd = arg(c, 0), old = active;
    if (!hwnd || find_window(hwnd))
        active = hwnd;
    set_eax(c, old);
}
void foreground(X86 *c) {
    if (find_window(arg(c, 0))) {
        active = arg(c, 0);
        set_eax(c, 1);
    } else
        set_eax(c, 0);
}
void get_focus(X86 *c) {
    set_eax(c, focus);
}
void set_focus(X86 *c) {
    uint32_t hwnd = arg(c, 0), old = focus;
    if (!hwnd || find_window(hwnd))
        focus = hwnd;
    set_eax(c, old);
}
void get_capture(X86 *c) {
    set_eax(c, capture);
}
void set_capture(X86 *c) {
    uint32_t old = capture;
    if (find_window(arg(c, 0)))
        capture = arg(c, 0);
    set_eax(c, old);
}
void release_capture(X86 *c) {
    capture = 0;
    set_eax(c, 1);
}
void window_at_point(X86 *c) {
    set_eax(c, mouse_window(0, int32_t(arg(c, 0)), int32_t(arg(c, 1))));
}
void desktop(X86 *c) {
    set_eax(c, desktop_handle);
}
void map_points(X86 *c) {
    int32_t x1, y1, x2, y2;
    client_origin(arg(c, 0), &x1, &y1);
    client_origin(arg(c, 1), &x2, &y2);
    int32_t dx = x1 - x2, dy = y1 - y2;
    uint32_t p = arg(c, 2), n = arg(c, 3);
    if (!p || n > 0x100000 || !gm_valid(p, n * 8)) {
        set_eax(c, 0);
        return;
    }
    for (uint32_t i = 0; i < n; ++i) {
        wr32(p + i * 8, rd32(p + i * 8) + dx);
        wr32(p + i * 8 + 4, rd32(p + i * 8 + 4) + dy);
    }
    set_eax(c, (uint32_t(uint16_t(dy)) << 16) | uint16_t(dx));
}
void intersect_rect(X86 *c) {
    uint32_t out = arg(c, 0), a = arg(c, 1), b = arg(c, 2);
    if (!out || !a || !b || !gm_valid(out, 16) || !gm_valid(a, 16) || !gm_valid(b, 16)) {
        set_eax(c, 0);
        return;
    }
    int32_t r[4];
    for (uint32_t i = 0; i < 4; ++i)
        r[i] = i < 2 ? std::max(int32_t(rd32(a + 4 * i)), int32_t(rd32(b + 4 * i)))
                     : std::min(int32_t(rd32(a + 4 * i)), int32_t(rd32(b + 4 * i)));
    bool ok = r[0] < r[2] && r[1] < r[3];
    for (uint32_t i = 0; i < 4; ++i)
        wr32(out + 4 * i, ok ? r[i] : 0);
    set_eax(c, ok);
}
void monitor_from(X86 *c, int kind) {
    uint32_t flags = arg(c, kind == 1 ? 2 : 1);
    int32_t l = 0, t = 0, r = 0, b = 0;
    bool valid = true;
    if (kind == 0) {
        Window *w = find_window(arg(c, 0));
        valid = w != nullptr;
        if (w) {
            client_origin(w->hwnd, &l, &t);
            r = l + w->w;
            b = t + w->h;
        }
    } else if (kind == 1) {
        l = int32_t(arg(c, 0));
        t = int32_t(arg(c, 1));
        r = l + 1;
        b = t + 1;
    } else {
        uint32_t p = arg(c, 0);
        valid = p && gm_valid(p, 16);
        if (valid) {
            l = int32_t(rd32(p));
            t = int32_t(rd32(p + 4));
            r = int32_t(rd32(p + 8));
            b = int32_t(rd32(p + 12));
        }
    }
    uint32_t w = 1024, h = 768, bpp = 32;
    win32_display_mode(&w, &h, &bpp);
    set_eax(c,
            (flags & 3) || (valid && l < int32_t(w) && t < int32_t(h) && r > 0 && b > 0) ? 1 : 0);
}
void monitor_window(X86 *c) {
    monitor_from(c, 0);
}
void monitor_point(X86 *c) {
    monitor_from(c, 1);
}
void monitor_rect(X86 *c) {
    monitor_from(c, 2);
}
void enum_monitors(X86 *c) {
    uint32_t dc = arg(c, 0), clip = arg(c, 1), cb = arg(c, 2), data = arg(c, 3),
             rect = heap_alloc(16, true);
    if (!cb || !rect) {
        set_eax(c, 0);
        return;
    }
    display_rect(rect);
    bool intersects = true;
    if (clip && gm_valid(clip, 16)) {
        for (uint32_t i = 0; i < 4; ++i)
            wr32(rect + 4 * i,
                 i < 2 ? std::max(int32_t(rd32(rect + 4 * i)), int32_t(rd32(clip + 4 * i)))
                       : std::min(int32_t(rd32(rect + 4 * i)), int32_t(rd32(clip + 4 * i))));
        intersects = int32_t(rd32(rect)) < int32_t(rd32(rect + 8)) &&
                     int32_t(rd32(rect + 4)) < int32_t(rd32(rect + 12));
    }
    uint32_t result = intersects ? guest_call(c, cb, 1, dc, rect, data) : 1;
    heap_free(rect);
    set_eax(c, result);
}
void get_dc(X86 *c) {
    alias_ansi(c, "GetDC");
}
void redraw(X86 *c) {
    Window *w = find_window(arg(c, 0));
    if (w) {
        if (arg(c, 3) & 1)
            w->update_pending = true;
        if (arg(c, 3) & 8)
            w->update_pending = false;
        if (arg(c, 3) & 0x100)
            alias_ansi(c, "UpdateWindow");
    }
    set_eax(c, w != nullptr);
}
void scroll_window(X86 *c) {
    Window *w = find_window(arg(c, 0));
    if (w)
        w->update_pending = true;
    set_eax(c, w != nullptr);
}
// Ownership and update state are retained even before a GDI window surface exists.
void set_window_region(X86 *c) {
    Window *w = find_window(arg(c, 0));
    if (w) {
        w->region = arg(c, 1);
        if (arg(c, 2))
            w->update_pending = true;
    }
    set_eax(c, w != nullptr);
}
void show_owned(X86 *c) {
    uint32_t owner = arg(c, 0);
    bool show = arg(c, 1) != 0;
    if (!find_window(owner)) {
        set_eax(c, 0);
        return;
    }
    for (auto &kv : windows()) {
        Window &w = kv.second;
        if (w.owner != owner)
            continue;
        if (!show && w.visible) {
            w.owned_hidden = true;
            w.visible = false;
            w.style &= ~0x10000000u;
        } else if (show && w.owned_hidden) {
            w.owned_hidden = false;
            w.visible = true;
            w.style |= 0x10000000u;
            w.update_pending = true;
        }
    }
    set_eax(c, 1);
}
void get_cursor(X86 *c) {
    set_eax(c, g_cursor);
}
void keyboard_state(X86 *c) {
    uint32_t p = arg(c, 0);
    bool ok = p && gm_valid(p, 256);
    if (ok)
        memcpy(g_mem + p, g_key_state, 256);
    set_eax(c, ok);
}
void layout_list(X86 *c) {
    uint32_t n = arg(c, 0), p = arg(c, 1);
    if (n && p && gm_valid(p, 4))
        wr32(p, 0x04090409);
    set_eax(c, 1);
}
void activate_layout(X86 *c) {
    set_eax(c, 0x04090409);
}
void pump_once(X86 *c) {
    host_pump_timers(c);
    pump_window_timers();
    if (g_message_waiter)
        g_message_waiter();
    sched_checkpoint();
}
// WaitMessage returns once there is something to retrieve, and not before.
// Delphi's idle handler calls it whenever its queue is empty; a WaitMessage
// that came straight back turned TApplication's message loop into a spin that
// held the scheduler baton, and the game's render and cursor threads, which
// only run when it is let go, fell to half the display's rate. Timers and host
// input are serviced on every pass, as a blocked thread's would be. Without a
// host there is nothing that could post a message, so it returns at once.
void wait_message(X86 *c) {
    for (;;) {
        pump_once(c);
        pump_mouse_input(c);
        if (!queue().empty() || paint_pending() || !g_message_waiter)
            break;
        if (!host_guest_yield())
            guest_sleep_ms(1);
    }
    set_eax(c, 1);
}
// MsgWaitForMultipleObjects(n, handles, wait_all, ms, mask) and the Ex form,
// (n, handles, ms, mask, flags) with MWMO_WAITALL (1) in the flags. A signalled
// handle answers first, as WAIT_OBJECT_0 + its index; then a queued message,
// as WAIT_OBJECT_0 + n. Delphi's TThread.WaitFor on the main thread loops on
// this call until the thread's handle is signalled, so a wait that never looked
// at the handles never returned: stopping a thread at exit hung the program.
void message_wait(X86 *c, bool ex) {
    const uint32_t n = arg(c, 0), handles = arg(c, 1);
    const bool wait_all = ex ? (arg(c, 4) & 1) != 0 : arg(c, 2) != 0;
    std::vector<uint32_t> list;
    if (n && handles && n <= 64 && gm_valid(handles, n * 4)) {
        list.resize(n);
        for (uint32_t i = 0; i < n; ++i)
            list[i] = rd32(handles + i * 4);
    }
    auto signalled = [&](uint32_t *result) {
        if (list.empty())
            return false;
        const uint32_t r = guest_wait_objects(list.data(), n, wait_all, 0);
        if (r == 0x102)
            return false;
        *result = r; // an object, an abandoned mutex, or WAIT_FAILED
        return true;
    };
    uint32_t result = 0;
    pump_window_timers();
    if (signalled(&result)) {
        set_eax(c, result);
        return;
    }
    if (!queue().empty()) {
        set_eax(c, n);
        return;
    }
    // Let everything else run - the thread being waited for among it - and
    // look again.
    pump_once(c);
    if (signalled(&result)) {
        set_eax(c, result);
        return;
    }
    set_eax(c, 0x102);
}
void message_wait_plain(X86 *c) {
    message_wait(c, false);
}
void message_wait_ex(X86 *c) {
    message_wait(c, true);
}
void last_popup(X86 *c) {
    uint32_t hwnd = arg(c, 0), found = hwnd;
    for (const auto &kv : windows())
        if (kv.second.owner == hwnd && kv.second.visible)
            found = kv.first;
    set_eax(c, found);
}
void ctrl_id(X86 *c) {
    Window *w = find_window(arg(c, 0));
    set_eax(c, w ? w->id : 0);
}
// COLORREF byte order (00BBGGRR), classic system palette, indices 0..29.
const uint32_t colors[30] = {0xc8c8c8, 0,        0xd1b499, 0xdbcdbf, 0xf0f0f0, 0xffffff,
                             0x646464, 0,        0,        0,        0xb4b4b4, 0xf4f7fc,
                             0xababab, 0xff9933, 0xffffff, 0xf0f0f0, 0xa0a0a0, 0x6d6d6d,
                             0,        0,        0xffffff, 0x696969, 0xe3e3e3, 0,
                             0xe1ffff, 0,        0xcc6600, 0xead1b9, 0xf2e4d7, 0xff9933};
void sys_color(X86 *c) {
    uint32_t i = arg(c, 0);
    set_eax(c, i < 30 ? colors[i] : 0);
}
// Menus retain text in UTF-8 and expose the 32-bit MENUITEMINFOW layout.
// Removing a submenu detaches it; deleting an item retires its subtree.
struct MenuItem {
    uint32_t type = 0, state = 0, id = 0, submenu = 0, checked = 0, unchecked = 0, data = 0,
             bitmap = 0;
    std::string text;
};
struct Menu {
    std::vector<MenuItem> items;
};
std::map<uint32_t, Menu> menus;
std::map<uint32_t, uint32_t> system_menus;
uint32_t next_menu = 0x00070000;
uint32_t new_menu() {
    uint32_t h = next_menu++;
    menus[h] = {};
    return h;
}
void create_menu(X86 *c) {
    set_eax(c, new_menu());
}
struct MenuLocation {
    uint32_t handle = 0;
    size_t index = 0;
};
MenuLocation locate_item(uint32_t menu, uint32_t item, bool position,
                         std::set<uint32_t> *seen = nullptr) {
    std::set<uint32_t> local;
    if (!seen)
        seen = &local;
    auto it = menus.find(menu);
    if (it == menus.end() || !seen->insert(menu).second)
        return {};
    if (position)
        return item < it->second.items.size() ? MenuLocation{menu, item} : MenuLocation{};
    for (size_t i = 0; i < it->second.items.size(); ++i) {
        auto &m = it->second.items[i];
        if (m.id == item)
            return {menu, i};
        if (m.submenu) {
            auto found = locate_item(m.submenu, item, false, seen);
            if (found.handle)
                return found;
        }
    }
    return {};
}
MenuItem *menu_item(uint32_t menu, uint32_t item, bool position) {
    auto at = locate_item(menu, item, position);
    return at.handle ? &menus[at.handle].items[at.index] : nullptr;
}
bool destroy_menu_tree(uint32_t menu) {
    auto it = menus.find(menu);
    if (it == menus.end())
        return false;
    auto items = it->second.items;
    menus.erase(it);
    for (const auto &m : items)
        if (m.submenu)
            destroy_menu_tree(m.submenu);
    for (auto &kv : windows())
        if (kv.second.menu == menu)
            kv.second.menu = 0;
    for (auto &kv : menus)
        for (auto &item : kv.second.items)
            if (item.submenu == menu)
                item.submenu = 0;
    return true;
}
void destroy_menu(X86 *c) {
    set_eax(c, destroy_menu_tree(arg(c, 0)));
}
void get_menu(X86 *c) {
    Window *w = find_window(arg(c, 0));
    set_eax(c, w ? w->menu : 0);
}
void set_menu(X86 *c) {
    Window *w = find_window(arg(c, 0));
    uint32_t menu = arg(c, 1);
    bool ok = w && (!menu || menus.count(menu));
    if (ok)
        w->menu = menu;
    set_eax(c, ok);
}
void system_menu(X86 *c) {
    uint32_t hwnd = arg(c, 0);
    if (!find_window(hwnd)) {
        set_eax(c, 0);
        return;
    }
    uint32_t &menu = system_menus[hwnd];
    if (arg(c, 1)) {
        destroy_menu_tree(menu);
        menu = 0;
        set_eax(c, 0);
        return;
    }
    if (!menus.count(menu)) {
        menu = new_menu();
        for (uint32_t id : {0xf120u, 0xf010u, 0xf000u, 0xf020u, 0xf030u, 0xf060u}) {
            MenuItem item;
            item.id = id;
            menus[menu].items.push_back(item);
        }
    }
    set_eax(c, menu);
}
void submenu(X86 *c) {
    auto *m = menu_item(arg(c, 0), arg(c, 1), true);
    set_eax(c, m ? m->submenu : 0);
}
void menu_count(X86 *c) {
    auto i = menus.find(arg(c, 0));
    set_eax(c, i == menus.end() ? 0xffffffffu : uint32_t(i->second.items.size()));
}
void menu_id(X86 *c) {
    auto *m = menu_item(arg(c, 0), arg(c, 1), true);
    set_eax(c, m && !m->submenu ? m->id : 0xffffffffu);
}
void menu_state(X86 *c) {
    auto *m = menu_item(arg(c, 0), arg(c, 1), arg(c, 2) & 0x400);
    uint32_t result = 0xffffffffu;
    if (m) {
        result = m->state | m->type;
        if (m->submenu)
            result |= 0x10 | (uint32_t(menus[m->submenu].items.size()) << 8);
    }
    set_eax(c, result);
}
void change_menu_state(X86 *c, uint32_t mask) {
    auto *m = menu_item(arg(c, 0), arg(c, 1), arg(c, 2) & 0x400);
    uint32_t old = m ? m->state & mask : 0xffffffffu;
    if (m)
        m->state = (m->state & ~mask) | (arg(c, 2) & mask);
    set_eax(c, old);
}
void check_menu(X86 *c) {
    change_menu_state(c, 8);
}
void enable_menu(X86 *c) {
    change_menu_state(c, 3);
}
void remove_menu(X86 *c, bool destroy) {
    auto at = locate_item(arg(c, 0), arg(c, 1), arg(c, 2) & 0x400);
    if (!at.handle) {
        set_eax(c, 0);
        return;
    }
    auto &items = menus[at.handle].items;
    uint32_t sub = items[at.index].submenu;
    items.erase(items.begin() + at.index);
    if (destroy && sub)
        destroy_menu_tree(sub);
    set_eax(c, 1);
}
void remove_menu_item(X86 *c) {
    remove_menu(c, false);
}
void delete_menu_item(X86 *c) {
    remove_menu(c, true);
}
void menu_string(X86 *c) {
    auto *m = menu_item(arg(c, 0), arg(c, 1), arg(c, 4) & 0x400);
    if (!m) {
        set_eax(c, 0);
        return;
    }
    set_eax(c, !arg(c, 2) || !arg(c, 3) ? wide_units(m->text)
                                        : put_text(arg(c, 2), arg(c, 3), m->text, true));
}
bool read_menu_info(uint32_t p, MenuItem *item) {
    if (!p || !gm_valid(p, 44) || (rd32(p) != 44 && rd32(p) != 48) || !gm_valid(p, rd32(p)))
        return false;
    uint32_t mask = rd32(p + 4);
    if (mask & 0x110)
        item->type = rd32(p + 8);
    if (mask & 1)
        item->state = rd32(p + 12);
    if (mask & 2)
        item->id = rd32(p + 16);
    if (mask & 4) {
        item->submenu = rd32(p + 20);
        if (item->submenu && !menus.count(item->submenu))
            return false;
    }
    if (mask & 8) {
        item->checked = rd32(p + 24);
        item->unchecked = rd32(p + 28);
    }
    if (mask & 32)
        item->data = rd32(p + 32);
    if ((mask & 0x40) || ((mask & 0x10) && !(item->type & 0x904)))
        item->text = gm_wstr(rd32(p + 36));
    if (mask & 0x10) {
        if (item->type & 0x100)
            item->data = rd32(p + 36);
        if (item->type & 4)
            item->bitmap = rd32(p + 36);
    }
    if ((mask & 0x80) && rd32(p) >= 48)
        item->bitmap = rd32(p + 44);
    return true;
}
void get_menu_info(X86 *c) {
    auto *m = menu_item(arg(c, 0), arg(c, 1), arg(c, 2) != 0);
    uint32_t p = arg(c, 3);
    if (!m || !p || !gm_valid(p, 44) || (rd32(p) != 44 && rd32(p) != 48) || !gm_valid(p, rd32(p))) {
        set_eax(c, 0);
        return;
    }
    uint32_t mask = rd32(p + 4);
    if (mask & 0x110)
        wr32(p + 8, m->type);
    if (mask & 1)
        wr32(p + 12, m->state);
    if (mask & 2)
        wr32(p + 16, m->id);
    if (mask & 4)
        wr32(p + 20, m->submenu);
    if (mask & 8) {
        wr32(p + 24, m->checked);
        wr32(p + 28, m->unchecked);
    }
    if (mask & 32)
        wr32(p + 32, m->data);
    if ((mask & 0x40) || ((mask & 0x10) && !(m->type & 0x904))) {
        uint32_t out = rd32(p + 36), cap = rd32(p + 40);
        wr32(p + 40, out && cap ? put_text(out, cap, m->text, true) : wide_units(m->text));
    }
    if (mask & 0x10) {
        if (m->type & 0x100)
            wr32(p + 36, m->data);
        if (m->type & 4)
            wr32(p + 36, m->bitmap);
    }
    if ((mask & 0x80) && rd32(p) >= 48)
        wr32(p + 44, m->bitmap);
    set_eax(c, 1);
}
bool menu_contains(uint32_t root, uint32_t target, std::set<uint32_t> *seen = nullptr) {
    std::set<uint32_t> local;
    if (!seen)
        seen = &local;
    if (root == target)
        return true;
    auto i = menus.find(root);
    if (i == menus.end() || !seen->insert(root).second)
        return false;
    for (const auto &m : i->second.items)
        if (m.submenu && menu_contains(m.submenu, target, seen))
            return true;
    return false;
}
void set_menu_info(X86 *c) {
    auto *m = menu_item(arg(c, 0), arg(c, 1), arg(c, 2) != 0);
    MenuItem copy;
    if (m)
        copy = *m;
    bool ok = m && read_menu_info(arg(c, 3), &copy) &&
              (!copy.submenu || !menu_contains(copy.submenu, arg(c, 0)));
    if (ok)
        *m = copy;
    set_eax(c, ok);
}
bool insert_item(uint32_t menu, uint32_t before, bool position, const MenuItem &item) {
    auto i = menus.find(menu);
    if (i == menus.end() || (item.submenu && menu_contains(item.submenu, menu)))
        return false;
    auto at = locate_item(menu, before, position);
    if (at.handle) {
        auto &items = menus[at.handle].items;
        items.insert(items.begin() + at.index, item);
        return true;
    }
    if (before == 0xffffffffu || (position && before >= i->second.items.size())) {
        i->second.items.push_back(item);
        return true;
    }
    return false;
}
void insert_menu_info(X86 *c) {
    MenuItem item;
    set_eax(c, read_menu_info(arg(c, 3), &item) &&
                   insert_item(arg(c, 0), arg(c, 1), arg(c, 2) != 0, item));
}
void insert_menu(X86 *c) {
    MenuItem item;
    uint32_t flags = arg(c, 2), value = arg(c, 4);
    item.type = flags & 0x6b64;
    item.state = flags & 0xb;
    if (flags & 0x10)
        item.submenu = arg(c, 3);
    else
        item.id = arg(c, 3);
    if (flags & 0x100)
        item.data = value;
    else if (flags & 4)
        item.bitmap = value;
    else if (!(flags & 0x800))
        item.text = gm_wstr(value);
    bool ok = (!item.submenu || menus.count(item.submenu)) &&
              insert_item(arg(c, 0), arg(c, 1), flags & 0x400, item);
    set_eax(c, ok);
}
// Private clipboard ownership never reaches the host clipboard. GlobalAlloc
// handles in this runtime are guest heap addresses; EmptyClipboard releases them.
bool clipboard_open = false;
std::map<uint32_t, uint32_t> clipboard;
std::map<std::string, uint32_t> clipboard_formats, window_messages;
uint32_t register_name(std::map<std::string, uint32_t> &names, uint32_t p) {
    std::string name = gm_wstr(p);
    if (name.empty())
        return 0;
    for (char &ch : name)
        ch = char(std::tolower((unsigned char)ch));
    auto i = names.find(name);
    if (i != names.end())
        return i->second;
    if (names.size() >= 0x4000)
        return 0;
    uint32_t id = 0xc000 + uint32_t(names.size());
    names[name] = id;
    return id;
}
void register_clipboard(X86 *c) {
    set_eax(c, register_name(clipboard_formats, arg(c, 0)));
}
void register_message(X86 *c) {
    set_eax(c, register_name(window_messages, arg(c, 0)));
}
void open_clipboard(X86 *c) {
    bool ok = !clipboard_open;
    if (ok)
        clipboard_open = true;
    set_eax(c, ok);
}
void close_clipboard(X86 *c) {
    bool was = clipboard_open;
    clipboard_open = false;
    set_eax(c, was);
}
void empty_clipboard(X86 *c) {
    if (!clipboard_open) {
        set_eax(c, 0);
        return;
    }
    std::set<uint32_t> freed;
    for (auto &kv : clipboard)
        if (kv.second && freed.insert(kv.second).second)
            heap_free(kv.second);
    clipboard.clear();
    set_eax(c, 1);
}
void set_clipboard(X86 *c) {
    uint32_t fmt = arg(c, 0), data = arg(c, 1);
    if (!clipboard_open || !fmt) {
        set_eax(c, 0);
        return;
    }
    clipboard[fmt] = data;
    set_eax(c, data);
}
void get_clipboard(X86 *c) {
    auto i = clipboard.find(arg(c, 0));
    set_eax(c, clipboard_open && i != clipboard.end() ? i->second : 0);
}
void clipboard_available(X86 *c) {
    set_eax(c, clipboard.count(arg(c, 0)) != 0);
}
struct Hook {
    uint32_t kind, proc, module, thread;
};
std::map<uint32_t, Hook> hooks;
uint32_t next_hook = 0x00071000;
void set_hook(X86 *c) {
    if (!arg(c, 1)) {
        set_eax(c, 0);
        return;
    }
    uint32_t h = next_hook++;
    hooks[h] = {arg(c, 0), arg(c, 1), arg(c, 2), arg(c, 3)};
    set_eax(c, h);
}
void unhook(X86 *c) {
    set_eax(c, hooks.erase(arg(c, 0)) != 0);
}
std::map<uint32_t, std::vector<uint8_t>> accelerators;
uint32_t next_accelerator = 0x00073000;
void create_accelerator(X86 *c) {
    uint32_t p = arg(c, 0), n = arg(c, 1);
    if (!p || !n || n > 0x10000 || !gm_valid(p, n * 6)) {
        set_eax(c, 0);
        return;
    }
    uint32_t h = next_accelerator++;
    accelerators[h] = std::vector<uint8_t>(g_mem + p, g_mem + p + n * 6);
    set_eax(c, h);
}
void destroy_accelerator(X86 *c) {
    set_eax(c, accelerators.erase(arg(c, 0)) != 0);
}
// System brushes are stable cached handles, also accepting COLOR_* + 1 as
// FillRect does. Window DC presentation remains with the GDI surface layer.
constexpr uint32_t system_brush_base = 0x00072000;
void sys_brush(X86 *c) {
    uint32_t i = arg(c, 0);
    set_eax(c, i < 30 ? system_brush_base + i : 0);
}
bool brush_color(uint32_t brush, uint32_t *pixel) {
    if (gdi::brush_color(brush, pixel))
        return true;
    uint32_t i = brush >= system_brush_base ? brush - system_brush_base : brush - 1;
    if (i >= 30)
        return false;
    uint32_t rgb = colors[i];
    *pixel = 0xff000000 | ((rgb & 255) << 16) | (rgb & 0xff00) | ((rgb >> 16) & 255);
    return true;
}
bool paint_rect(uint32_t dc, int32_t l, int32_t t, int32_t r, int32_t b, uint32_t pixel,
                bool frame = false) {
    int64_t w = int64_t(r) - l, h = int64_t(b) - t;
    if (w <= 0 || h <= 0)
        return true;
    if (w > 16384 || h > 16384 || w * h > 0x1000000)
        return false;
    GdiImage image;
    image.width = int32_t(w);
    image.height = int32_t(h);
    image.pixels.resize(size_t(w * h), frame ? 0 : pixel);
    if (frame)
        for (int32_t y = 0; y < h; ++y)
            for (int32_t x = 0; x < w; ++x)
                if (!x || !y || x == w - 1 || y == h - 1)
                    image.pixels[size_t(y) * w + x] = pixel;
    return gdi_draw_image(dc, image, l, t, int32_t(w), int32_t(h));
}
void fill_or_frame(X86 *c, bool frame) {
    uint32_t p = arg(c, 1), color = 0;
    bool ok = p && gm_valid(p, 16) && brush_color(arg(c, 2), &color);
    if (ok)
        ok = paint_rect(arg(c, 0), int32_t(rd32(p)), int32_t(rd32(p + 4)), int32_t(rd32(p + 8)),
                        int32_t(rd32(p + 12)), color, frame);
    set_eax(c, ok);
}
void fill_rect(X86 *c) {
    fill_or_frame(c, false);
}
void frame_rect(X86 *c) {
    fill_or_frame(c, true);
}
void draw_edge(X86 *c) {
    uint32_t p = arg(c, 1);
    if (!p || !gm_valid(p, 16)) {
        set_eax(c, 0);
        return;
    }
    int32_t l = int32_t(rd32(p)), t = int32_t(rd32(p + 4)), r = int32_t(rd32(p + 8)),
            b = int32_t(rd32(p + 12));
    uint32_t flags = arg(c, 3), edge = arg(c, 2), light = (edge & 5) ? 0xffffffff : 0xffa0a0a0,
             dark = (edge & 5) ? 0xffa0a0a0 : 0xffffffff;
    bool ok = true;
    if (flags & 1)
        ok &= paint_rect(arg(c, 0), l, t, l + 1, b, light);
    if (flags & 2)
        ok &= paint_rect(arg(c, 0), l, t, r, t + 1, light);
    if (flags & 4)
        ok &= paint_rect(arg(c, 0), r - 1, t, r, b, dark);
    if (flags & 8)
        ok &= paint_rect(arg(c, 0), l, b - 1, r, b, dark);
    if (flags & 0x800) {
        if (flags & 1)
            ++l;
        if (flags & 2)
            ++t;
        if (flags & 4)
            --r;
        if (flags & 8)
            --b;
        wr32(p, l);
        wr32(p + 4, t);
        wr32(p + 8, r);
        wr32(p + 12, b);
    }
    set_eax(c, ok);
}
void draw_control(X86 *c) {
    uint32_t p = arg(c, 1);
    if (!p || !gm_valid(p, 16)) {
        set_eax(c, 0);
        return;
    }
    int32_t l = int32_t(rd32(p)), t = int32_t(rd32(p + 4)), r = int32_t(rd32(p + 8)),
            b = int32_t(rd32(p + 12));
    bool ok = paint_rect(arg(c, 0), l, t, r, b, 0xfff0f0f0) &&
              paint_rect(arg(c, 0), l, t, r, b, 0xff808080, true);
    set_eax(c, ok);
}
void draw_focus(X86 *c) {
    uint32_t p = arg(c, 1);
    set_eax(c, p && gm_valid(p, 16) &&
                   gdi_focus_rect(arg(c, 0), int32_t(rd32(p)), int32_t(rd32(p + 4)),
                                  int32_t(rd32(p + 8)), int32_t(rd32(p + 12))));
}
void create_icon(X86 *c) {
    uint32_t w = arg(c, 1), h = arg(c, 2), planes = arg(c, 3), bpp = arg(c, 4), mask = arg(c, 5),
             bits = arg(c, 6);
    if (!w || !h || w > 4096 || h > 4096 || planes != 1 || (bpp != 1 && bpp != 24 && bpp != 32)) {
        set_eax(c, 0);
        return;
    }
    uint32_t stride = ((w * bpp + 15) / 16) * 2, ms = ((w + 15) / 16) * 2;
    if (!bits || !gm_valid(bits, stride * h) || (mask && !gm_valid(mask, ms * h))) {
        set_eax(c, 0);
        return;
    }
    GdiImage image;
    image.width = w;
    image.height = h;
    image.pixels.resize(size_t(w) * h);
    for (uint32_t y = 0; y < h; ++y)
        for (uint32_t x = 0; x < w; ++x) {
            uint32_t at = bits + y * stride + (x * bpp) / 8, pixel;
            if (bpp == 1)
                pixel = (rd8(at) & (0x80 >> (x & 7))) ? 0xffffffff : 0xff000000;
            else
                pixel = 0xff000000 | rd8(at) | (uint32_t(rd8(at + 1)) << 8) |
                        (uint32_t(rd8(at + 2)) << 16);
            if (mask && (rd8(mask + y * ms + x / 8) & (0x80 >> (x & 7))))
                pixel = 0;
            image.pixels[size_t(y) * w + x] = pixel;
        }
    set_eax(c, gdi_create_icon(image));
}
void draw_icon(X86 *c, bool ex) {
    GdiImage image;
    uint32_t icon = arg(c, 3);
    if (!gdi_read_icon(icon, &image)) {
        set_eax(c, 0);
        return;
    }
    int32_t w = ex && arg(c, 4) ? int32_t(arg(c, 4)) : image.width,
            h = ex && arg(c, 5) ? int32_t(arg(c, 5)) : image.height;
    if (w <= 0 || h <= 0 || w > 4096 || h > 4096) {
        set_eax(c, 0);
        return;
    }
    if (w != image.width || h != image.height) {
        GdiImage scaled;
        scaled.width = w;
        scaled.height = h;
        scaled.pixels.resize(size_t(w) * h);
        for (int32_t y = 0; y < h; ++y)
            for (int32_t x = 0; x < w; ++x)
                scaled.pixels[size_t(y) * w + x] =
                    image.pixels[size_t(int64_t(y) * image.height / h) * image.width +
                                 int64_t(x) * image.width / w];
        image = std::move(scaled);
    }
    set_eax(c, gdi_draw_image(arg(c, 0), image, int32_t(arg(c, 1)), int32_t(arg(c, 2)), w, h));
}
void draw_icon_basic(X86 *c) {
    draw_icon(c, false);
}
void draw_icon_ex(X86 *c) {
    draw_icon(c, true);
}
void copy_icon(X86 *c) {
    GdiImage image;
    set_eax(c, gdi_read_icon(arg(c, 0), &image) ? gdi_create_icon(image) : 0);
}
void copy_image(X86 *c) {
    GdiImage image;
    uint32_t type = arg(c, 1);
    bool ok =
        type == 0 ? gdi_read_bitmap(arg(c, 0), &image, true) : gdi_read_icon(arg(c, 0), &image);
    if (!ok || type > 2) {
        set_eax(c, 0);
        return;
    }
    int32_t w = arg(c, 2) ? int32_t(arg(c, 2)) : image.width,
            h = arg(c, 3) ? int32_t(arg(c, 3)) : image.height;
    if (w <= 0 || h <= 0 || w > 4096 || h > 4096) {
        set_eax(c, 0);
        return;
    }
    GdiImage scaled;
    scaled.width = w;
    scaled.height = h;
    scaled.pixels.resize(size_t(w) * h);
    for (int32_t y = 0; y < h; ++y)
        for (int32_t x = 0; x < w; ++x)
            scaled.pixels[size_t(y) * w + x] =
                image.pixels[size_t(int64_t(y) * image.height / h) * image.width +
                             int64_t(x) * image.width / w];
    uint32_t result = type == 0 ? gdi_image_bitmap(scaled) : gdi_create_icon(scaled);
    if (result && (arg(c, 4) & 8)) {
        if (type == 0)
            gdi_delete_bitmap(arg(c, 0));
        else
            gdi_delete_icon(arg(c, 0));
    }
    set_eax(c, result);
}
void destroy_cursor(X86 *c) {
    gdi_delete_icon(arg(c, 0));
    set_eax(c, arg(c, 0) != 0);
}
void icon_info(X86 *c) {
    uint32_t p = arg(c, 1);
    GdiImage image;
    if (!p || !gm_valid(p, 20) || !gdi_read_icon(arg(c, 0), &image)) {
        set_eax(c, 0);
        return;
    }
    uint32_t bitmap = gdi_image_bitmap(image), mask = gdi_image_mask(image);
    if (!bitmap || !mask) {
        gdi_delete_bitmap(bitmap);
        gdi_delete_bitmap(mask);
        set_eax(c, 0);
        return;
    }
    wr32(p, 1);
    wr32(p + 4, 0);
    wr32(p + 8, 0);
    wr32(p + 12, mask);
    wr32(p + 16, bitmap);
    set_eax(c, 1);
}

const ImportShim shims[] = {
#define U(name, n, fn) {"USER32.dll", name, n, fn}
    U("SetTimer", 4, set_timer),
    U("KillTimer", 2, kill_timer),
    U("GetPropW", 2, get_prop),
    U("SetPropW", 3, set_prop),
    U("RemovePropW", 2, remove_prop),
    U("SetParent", 2, set_parent),
    U("GetParent", 1, get_parent),
    U("IsChild", 2, child_of),
    U("EnumChildWindows", 3, enum_children),
    U("EnumThreadWindows", 3, enum_thread),
    U("EnumWindows", 2, enum_windows),
    U("GetTopWindow", 1, top_window),
    U("GetWindow", 2, get_window),
    U("GetWindowThreadProcessId", 2, window_thread),
    U("IsWindow", 1, is_window),
    U("IsWindowVisible", 1, is_visible),
    U("IsWindowEnabled", 1, is_enabled),
    U("EnableWindow", 2, enable_window),
    U("IsZoomed", 1, zoomed),
    U("IsIconic", 1, iconic),
    U("GetWindowPlacement", 2, get_placement),
    U("SetWindowPlacement", 2, set_placement),
    U("SetForegroundWindow", 1, foreground),
    U("GetForegroundWindow", 0, get_active),
    U("SetActiveWindow", 1, set_active),
    U("GetActiveWindow", 0, get_active),
    U("SetFocus", 1, set_focus),
    U("GetFocus", 0, get_focus),
    U("GetCapture", 0, get_capture),
    U("SetCapture", 1, set_capture),
    U("ReleaseCapture", 0, release_capture),
    U("WindowFromPoint", 2, window_at_point),
    U("MonitorFromWindow", 2, monitor_window),
    U("MonitorFromPoint", 3, monitor_point),
    U("MonitorFromRect", 2, monitor_rect),
    U("EnumDisplayMonitors", 4, enum_monitors),
    U("GetDesktopWindow", 0, desktop),
    U("GetDCEx", 3, get_dc),
    U("GetWindowDC", 1, get_dc),
    U("RedrawWindow", 4, redraw),
    U("SetWindowRgn", 3, set_window_region),
    U("ScrollWindow", 5, scroll_window),
    U("MapWindowPoints", 4, map_points),
    U("IntersectRect", 3, intersect_rect),
    U("GetCursor", 0, get_cursor),
    U("GetMessageExtraInfo", 0, zero),
    U("GetKeyboardState", 1, keyboard_state),
    U("GetKeyboardLayoutList", 2, layout_list),
    U("ActivateKeyboardLayout", 2, activate_layout),
    U("MsgWaitForMultipleObjects", 5, message_wait_plain),
    U("MsgWaitForMultipleObjectsEx", 5, message_wait_ex),
    U("WaitMessage", 0, wait_message),
    U("GetSysColor", 1, sys_color),
    U("ShowOwnedPopups", 2, show_owned),
    U("GetLastActivePopup", 1, last_popup),
    U("MessageBeep", 1, yes),
    U("GetDlgCtrlID", 1, ctrl_id),
    U("TranslateMDISysAccel", 2, zero),
    U("ShowCaret", 1, yes),
    U("HideCaret", 1, yes),
    U("CreateMenu", 0, create_menu),
    U("CreatePopupMenu", 0, create_menu),
    U("DestroyMenu", 1, destroy_menu),
    U("GetMenu", 1, get_menu),
    U("SetMenu", 2, set_menu),
    U("GetSystemMenu", 2, system_menu),
    U("GetSubMenu", 2, submenu),
    U("GetMenuItemCount", 1, menu_count),
    U("GetMenuItemID", 2, menu_id),
    U("GetMenuState", 3, menu_state),
    U("CheckMenuItem", 3, check_menu),
    U("EnableMenuItem", 3, enable_menu),
    U("RemoveMenu", 3, remove_menu_item),
    U("DeleteMenu", 3, delete_menu_item),
    U("DrawMenuBar", 1, yes),
    U("TrackPopupMenu", 7, zero),
    U("EndMenu", 0, yes),
    U("GetMenuStringW", 5, menu_string),
    U("GetMenuItemInfoW", 4, get_menu_info),
    U("SetMenuItemInfoW", 4, set_menu_info),
    U("InsertMenuW", 5, insert_menu),
    U("InsertMenuItemW", 4, insert_menu_info),
    U("GetScrollPos", 2, win32_get_scroll_pos),
    U("SetScrollPos", 4, win32_set_scroll_pos),
    U("GetScrollRange", 4, win32_get_scroll_range),
    U("SetScrollRange", 5, win32_set_scroll_range),
    U("GetScrollInfo", 3, win32_get_scroll_info),
    U("SetScrollInfo", 4, win32_set_scroll_info),
    U("ShowScrollBar", 3, win32_show_scroll_bar),
    U("EnableScrollBar", 3, win32_enable_scroll_bar),
    U("OpenClipboard", 1, open_clipboard),
    U("CloseClipboard", 0, close_clipboard),
    U("GetClipboardData", 1, get_clipboard),
    U("IsClipboardFormatAvailable", 1, clipboard_available),
    U("EmptyClipboard", 0, empty_clipboard),
    U("SetClipboardData", 2, set_clipboard),
    U("RegisterClipboardFormatW", 1, register_clipboard),
    U("RegisterWindowMessageW", 1, register_message),
    U("SetWindowsHookExW", 4, set_hook),
    U("UnhookWindowsHookEx", 1, unhook),
    U("CallNextHookEx", 4, zero),
    U("CreateAcceleratorTableW", 2, create_accelerator),
    U("DestroyAcceleratorTable", 1, destroy_accelerator),
    U("GetSysColorBrush", 1, sys_brush),
    U("FillRect", 3, fill_rect),
    U("FrameRect", 3, frame_rect),
    U("DrawEdge", 4, draw_edge),
    U("DrawFrameControl", 4, draw_control),
    U("DrawFocusRect", 2, draw_focus),
    U("DrawIcon", 4, draw_icon_basic),
    U("DrawIconEx", 9, draw_icon_ex),
    U("CopyIcon", 1, copy_icon),
    U("CopyImage", 5, copy_image),
    U("CreateIcon", 7, create_icon),
    U("DestroyCursor", 1, destroy_cursor),
    U("GetIconInfo", 2, icon_info),
#undef U
};
} // namespace
void user32_vcl_register() {
    imports_register(shims, sizeof(shims) / sizeof(shims[0]));
}

// Menus attached to an owned window retire with it; detached menus stay caller-owned.
void user32::forget_window_services(uint32_t hwnd) {
    Window *w = find_window(hwnd);
    if (w && w->menu)
        destroy_menu_tree(w->menu);
    auto i = system_menus.find(hwnd);
    if (i != system_menus.end()) {
        destroy_menu_tree(i->second);
        system_menus.erase(i);
    }
}

// Keyboard input goes to the window with the focus, as Windows sends it. The
// host cannot know which that is: the guest sets it through SetFocus, and in a
// VCL application the first window created - the one host_main_window names -
// is the invisible application window, which does nothing with a keystroke.
// Falls back to the active window and then to the main one, so a guest that
// never called SetFocus is no worse off than before.
void host_post_key_message(uint32_t msg, uint32_t wparam, uint32_t lparam) {
    uint32_t hwnd = user32::focus;
    if (!hwnd || !user32::find_window(hwnd))
        hwnd = user32::active;
    if (!hwnd || !user32::find_window(hwnd))
        hwnd = host_main_window();
    if (hwnd)
        host_post_message(hwnd, msg, wparam, lparam);
}

void host_post_mouse_message(uint32_t msg, uint32_t mk, int32_t x, int32_t y) {
    if (user32::g_key_state[0x10] & 0x80)
        mk |= 4;
    if (user32::g_key_state[0x11] & 0x80)
        mk |= 8;
    if (msg < 0x200 || msg > 0x209)
        return;
    // A mouse move is a position, not an event. Windows does not queue one per
    // motion the hardware reports: it keeps the latest and synthesises the
    // message when the guest asks. The routing pump below delivers one message
    // per call, so a host reporting motion faster than the guest pumps would
    // build a backlog and the pointer would trail the hand by the length of
    // it. Only a move already at the back is replaced, so a move between a
    // press and a release - the shape of a drag - still reaches the guest.
    if (msg == 0x200 && !user32::mouse_input.empty() &&
        user32::mouse_input.back().message == 0x200) {
        user32::mouse_input.back() = {msg, mk, x, y, host_millis()};
        return;
    }
    user32::mouse_input.push_back({msg, mk, x, y, host_millis()});
}

void host_post_client_mouse_message(uint32_t hwnd, uint32_t msg, uint32_t mk, int32_t x,
                                    int32_t y) {
    int32_t origin_x = 0, origin_y = 0;
    user32::client_origin(hwnd, &origin_x, &origin_y);
    host_post_mouse_message(msg, mk, int32_t(uint32_t(x) + uint32_t(origin_x)),
                            int32_t(uint32_t(y) + uint32_t(origin_y)));
}
