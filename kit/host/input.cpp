// input.mm - keyboard and mouse for the windowed host.
//
// The game reads input twice over: DirectInput for the keyboard array and the
// mouse deltas, and the Win32 message queue plus GetAsyncKeyState for
// everything else. Both come from the same NSEvent here, so they cannot
// disagree.
//
// There is no AppKit in this file on purpose. main.mm decodes NSEvents and
// calls in with plain numbers, which is what lets the scan-code table and the
// state machine be tested with no application object in the process.
#include "input.h"
#include "../dx/host_api.h"
#include "../runtime/win32.h"

#include <math.h>
#include <stdio.h>
#include <string.h>

namespace {

// macOS virtual key codes. Positional: kVK_ANSI_W names the key west of E on
// any layout, which is what a game reading scan codes expects.
enum : uint16_t {
    MK_A = 0x00,
    MK_S = 0x01,
    MK_D = 0x02,
    MK_F = 0x03,
    MK_H = 0x04,
    MK_G = 0x05,
    MK_Z = 0x06,
    MK_X = 0x07,
    MK_C = 0x08,
    MK_V = 0x09,
    MK_B = 0x0B,
    MK_Q = 0x0C,
    MK_W = 0x0D,
    MK_E = 0x0E,
    MK_R = 0x0F,
    MK_Y = 0x10,
    MK_T = 0x11,
    MK_1 = 0x12,
    MK_2 = 0x13,
    MK_3 = 0x14,
    MK_4 = 0x15,
    MK_6 = 0x16,
    MK_5 = 0x17,
    MK_EQUAL = 0x18,
    MK_9 = 0x19,
    MK_7 = 0x1A,
    MK_MINUS = 0x1B,
    MK_8 = 0x1C,
    MK_0 = 0x1D,
    MK_RBRACKET = 0x1E,
    MK_O = 0x1F,
    MK_U = 0x20,
    MK_LBRACKET = 0x21,
    MK_I = 0x22,
    MK_P = 0x23,
    MK_RETURN = 0x24,
    MK_L = 0x25,
    MK_J = 0x26,
    MK_QUOTE = 0x27,
    MK_K = 0x28,
    MK_SEMICOLON = 0x29,
    MK_BACKSLASH = 0x2A,
    MK_COMMA = 0x2B,
    MK_SLASH = 0x2C,
    MK_N = 0x2D,
    MK_M = 0x2E,
    MK_PERIOD = 0x2F,
    MK_TAB = 0x30,
    MK_SPACE = 0x31,
    MK_GRAVE = 0x32,
    MK_BACKSPACE = 0x33,
    MK_ESCAPE = 0x35,
    MK_KP_DECIMAL = 0x41,
    MK_KP_MULTIPLY = 0x43,
    MK_KP_PLUS = 0x45,
    MK_KP_CLEAR = 0x47,
    MK_KP_DIVIDE = 0x4B,
    MK_KP_ENTER = 0x4C,
    MK_KP_MINUS = 0x4E,
    MK_KP_0 = 0x52,
    MK_KP_1 = 0x53,
    MK_KP_2 = 0x54,
    MK_KP_3 = 0x55,
    MK_KP_4 = 0x56,
    MK_KP_5 = 0x57,
    MK_KP_6 = 0x58,
    MK_KP_7 = 0x59,
    MK_KP_8 = 0x5B,
    MK_KP_9 = 0x5C,
    MK_F5 = 0x60,
    MK_F6 = 0x61,
    MK_F7 = 0x62,
    MK_F3 = 0x63,
    MK_F8 = 0x64,
    MK_F9 = 0x65,
    MK_F11 = 0x67,
    MK_F13 = 0x69,
    MK_F14 = 0x6B,
    MK_F10 = 0x6D,
    MK_F12 = 0x6F,
    MK_F15 = 0x71,
    MK_HOME = 0x73,
    MK_PAGEUP = 0x74,
    MK_FWDDELETE = 0x75,
    MK_F4 = 0x76,
    MK_END = 0x77,
    MK_F2 = 0x78,
    MK_PAGEDOWN = 0x79,
    MK_F1 = 0x7A,
    MK_LEFT = 0x7B,
    MK_RIGHT = 0x7C,
    MK_DOWN = 0x7D,
    MK_UP = 0x7E,
    // Modifiers arrive as flagsChanged, not as key down/up.
    MK_CAPSLOCK = 0x39,
    MK_LSHIFT = 0x38,
    MK_RSHIFT = 0x3C,
    MK_LCTRL = 0x3B,
    MK_RCTRL = 0x3E,
    MK_LALT = 0x3A,
    MK_RALT = 0x3D,
};

// DirectInput set-1 scan codes, and Win32 virtual key codes.
const HostKeyMapping kKeys[] = {
    // letters
    {MK_A, 0x1e, 'A'},
    {MK_B, 0x30, 'B'},
    {MK_C, 0x2e, 'C'},
    {MK_D, 0x20, 'D'},
    {MK_E, 0x12, 'E'},
    {MK_F, 0x21, 'F'},
    {MK_G, 0x22, 'G'},
    {MK_H, 0x23, 'H'},
    {MK_I, 0x17, 'I'},
    {MK_J, 0x24, 'J'},
    {MK_K, 0x25, 'K'},
    {MK_L, 0x26, 'L'},
    {MK_M, 0x32, 'M'},
    {MK_N, 0x31, 'N'},
    {MK_O, 0x18, 'O'},
    {MK_P, 0x19, 'P'},
    {MK_Q, 0x10, 'Q'},
    {MK_R, 0x13, 'R'},
    {MK_S, 0x1f, 'S'},
    {MK_T, 0x14, 'T'},
    {MK_U, 0x16, 'U'},
    {MK_V, 0x2f, 'V'},
    {MK_W, 0x11, 'W'},
    {MK_X, 0x2d, 'X'},
    {MK_Y, 0x15, 'Y'},
    {MK_Z, 0x2c, 'Z'},
    // digits
    {MK_1, 0x02, '1'},
    {MK_2, 0x03, '2'},
    {MK_3, 0x04, '3'},
    {MK_4, 0x05, '4'},
    {MK_5, 0x06, '5'},
    {MK_6, 0x07, '6'},
    {MK_7, 0x08, '7'},
    {MK_8, 0x09, '8'},
    {MK_9, 0x0a, '9'},
    {MK_0, 0x0b, '0'},
    // punctuation and editing
    {MK_MINUS, 0x0c, 0xbd},
    {MK_EQUAL, 0x0d, 0xbb},
    {MK_BACKSPACE, 0x0e, 0x08},
    {MK_TAB, 0x0f, 0x09},
    {MK_LBRACKET, 0x1a, 0xdb},
    {MK_RBRACKET, 0x1b, 0xdd},
    {MK_RETURN, 0x1c, 0x0d},
    {MK_SEMICOLON, 0x27, 0xba},
    {MK_QUOTE, 0x28, 0xde},
    {MK_GRAVE, 0x29, 0xc0},
    {MK_BACKSLASH, 0x2b, 0xdc},
    {MK_COMMA, 0x33, 0xbc},
    {MK_PERIOD, 0x34, 0xbe},
    {MK_SLASH, 0x35, 0xbf},
    {MK_SPACE, 0x39, 0x20},
    {MK_ESCAPE, 0x01, 0x1b},
    // function keys
    {MK_F1, 0x3b, 0x70},
    {MK_F2, 0x3c, 0x71},
    {MK_F3, 0x3d, 0x72},
    {MK_F4, 0x3e, 0x73},
    {MK_F5, 0x3f, 0x74},
    {MK_F6, 0x40, 0x75},
    {MK_F7, 0x41, 0x76},
    {MK_F8, 0x42, 0x77},
    {MK_F9, 0x43, 0x78},
    {MK_F10, 0x44, 0x79},
    {MK_F11, 0x57, 0x7a},
    {MK_F12, 0x58, 0x7b},
    // the extended block: DIK numbers these above 0x80, which is what a game
    // that tells the arrow keys from the keypad relies on.
    {MK_HOME, 0xc7, 0x24},
    {MK_UP, 0xc8, 0x26},
    {MK_PAGEUP, 0xc9, 0x21},
    {MK_LEFT, 0xcb, 0x25},
    {MK_RIGHT, 0xcd, 0x27},
    {MK_END, 0xcf, 0x23},
    {MK_DOWN, 0xd0, 0x28},
    {MK_PAGEDOWN, 0xd1, 0x22},
    {MK_FWDDELETE, 0xd3, 0x2e},
    // keypad
    {MK_KP_0, 0x52, 0x60},
    {MK_KP_1, 0x4f, 0x61},
    {MK_KP_2, 0x50, 0x62},
    {MK_KP_3, 0x51, 0x63},
    {MK_KP_4, 0x4b, 0x64},
    {MK_KP_5, 0x4c, 0x65},
    {MK_KP_6, 0x4d, 0x66},
    {MK_KP_7, 0x47, 0x67},
    {MK_KP_8, 0x48, 0x68},
    {MK_KP_9, 0x49, 0x69},
    {MK_KP_DECIMAL, 0x53, 0x6e},
    {MK_KP_PLUS, 0x4e, 0x6b},
    {MK_KP_MINUS, 0x4a, 0x6d},
    {MK_KP_MULTIPLY, 0x37, 0x6a},
    {MK_KP_DIVIDE, 0xb5, 0x6f},
    {MK_KP_ENTER, 0x9c, 0x0d},
    // A Mac keyboard has Clear where a PC has Num Lock, and no Pause key at
    // all. F15 sits where Pause does on a full-size PC layout and is the
    // long-standing stand-in for it, so it carries DIK_PAUSE and VK_PAUSE;
    // F13 and F14 carry Print Screen and Scroll Lock for the same reason.
    {MK_KP_CLEAR, 0x45, 0x90}, // Num Lock
    {MK_F13, 0xb7, 0x2c},      // DIK_SYSRQ, VK_SNAPSHOT
    {MK_F14, 0x46, 0x91},      // DIK_SCROLL, VK_SCROLL
    {MK_F15, 0xc5, 0x13},      // DIK_PAUSE, VK_PAUSE
    // modifiers
    {MK_LSHIFT, 0x2a, 0xa0},
    {MK_RSHIFT, 0x36, 0xa1},
    {MK_LCTRL, 0x1d, 0xa2},
    {MK_RCTRL, 0x9d, 0xa3},
    {MK_LALT, 0x38, 0xa4},
    {MK_RALT, 0xb8, 0xa5},
    {MK_CAPSLOCK, 0x3a, 0x14},
};
const int kKeyCount = (int)(sizeof kKeys / sizeof kKeys[0]);

// --- live state ------------------------------------------------------------
// Written from the main thread when an NSEvent arrives, read from wherever the
// guest happens to call host_input_state. Both are the same thread while the
// cooperative scheduler holds the baton, so no lock is needed; the deltas are
// still accumulated rather than assigned so no motion is lost between reads.
struct State {
    int32_t x = 0, y = 0;
    int32_t dx = 0, dy = 0, dz = 0;
    uint8_t buttons[8] = {0};
    uint8_t keys[256] = {0};
};
State g;

// The unsided VK_SHIFT / VK_CONTROL / VK_MENU are down while EITHER side is,
// which is why they cannot simply follow whichever side moved last: releasing
// the right Shift while the left is still held would report Shift up.
void refresh_generic_modifier(uint8_t left_vk, uint8_t right_vk, uint8_t generic_vk,
                              uint8_t left_dik, uint8_t right_dik) {
    (void)left_vk;
    (void)right_vk;
    bool down = g.keys[left_dik] || g.keys[right_dik];
    host_set_key_state(generic_vk, down);
}

void (*g_notify)(void) = nullptr;
uint32_t g_notify_count = 0;
uint32_t g_read_count = 0;

void log_once(const char *message) {
    static bool told = false;
    if (told)
        return;
    told = true;
    fprintf(stderr, "[host] %s\n", message);
}

// The guest's DirectInput threads wait on an event; input nobody announces is
// input the game never sees. Whose function this is is decided by the host:
// main.mm installs the DirectInput shim's, and the test binary - which links
// none of dx - installs its own or none at all. That indirection is
// not a preference: a weak declaration does not survive a static link, so the
// choice is a function pointer or a link-time dependency on the shims from a
// file that has no other reason to have one.
void notify_input_changed() {
    ++g_notify_count;
    if (g_notify) {
        g_notify();
        return;
    }
    // Nobody installed one, and input is happening. In a windowed run that is
    // a host that forgot, and it looks from the outside exactly like a mouse
    // that does nothing: the game's DirectInput threads wait on an event that
    // is never signalled. Say so rather than let it be silent - the whole
    // class of bug here is a call that does nothing and reports nothing.
    log_once("input: the state changed but no notifier is installed, so the "
             "guest's DirectInput threads are never woken");
}

void set_key(uint8_t dik, uint8_t vk, bool down) {
    if (dik)
        g.keys[dik] = down ? 0x80 : 0x00;
    if (vk)
        host_set_key_state(vk, down);
    switch (vk) {
    case 0xa0:
    case 0xa1:
        refresh_generic_modifier(0xa0, 0xa1, 0x10, 0x2a, 0x36);
        break;
    case 0xa2:
    case 0xa3:
        refresh_generic_modifier(0xa2, 0xa3, 0x11, 0x1d, 0x9d);
        break;
    case 0xa4:
    case 0xa5:
        refresh_generic_modifier(0xa4, 0xa5, 0x12, 0x38, 0xb8);
        break;
    default:
        break;
    }
}

// The device-dependent modifier bits, which are the only way an NSEvent says
// which shift key it was.
enum : uint32_t {
    DEV_LCTRL = 0x00000001,
    DEV_LSHIFT = 0x00000002,
    DEV_RSHIFT = 0x00000004,
    DEV_LCMD = 0x00000008,
    DEV_RCMD = 0x00000010,
    DEV_LALT = 0x00000020,
    DEV_RALT = 0x00000040,
    DEV_RCTRL = 0x00002000,
    FLAG_CAPSLOCK = 0x00010000,
};

// The modifier keys, paired with the flag bit that reports each one.
const struct {
    uint32_t bit;
    uint16_t mac;
} kModifierSides[] = {
    {DEV_LSHIFT, MK_LSHIFT},      {DEV_RSHIFT, MK_RSHIFT}, {DEV_LCTRL, MK_LCTRL},
    {DEV_RCTRL, MK_RCTRL},        {DEV_LALT, MK_LALT},     {DEV_RALT, MK_RALT},
    {FLAG_CAPSLOCK, MK_CAPSLOCK},
};
const int kModifierSideCount = (int)(sizeof kModifierSides / sizeof kModifierSides[0]);

// The MK_ bits a mouse message carries.
enum : uint32_t {
    MK_LBUTTON = 0x0001,
    MK_RBUTTON = 0x0002,
    MK_SHIFT = 0x0004,
    MK_CONTROL = 0x0008,
    MK_MBUTTON = 0x0010,
};

} // namespace

// ---------------------------------------------------------------------------

HostKeyMapping host_key_mapping(uint16_t mac) {
    for (int i = 0; i < kKeyCount; ++i)
        if (kKeys[i].mac == mac)
            return kKeys[i];
    HostKeyMapping none = {mac, 0, 0};
    return none;
}
HostKeyMapping host_key_mapping_for_dik(uint8_t dik) {
    if (dik) {
        for (int i = 0; i < kKeyCount; ++i)
            if (kKeys[i].dik == dik)
                return kKeys[i];
    }
    HostKeyMapping none = {0, 0, 0};
    return none;
}
uint8_t host_dik_from_mac(uint16_t mac) {
    return host_key_mapping(mac).dik;
}
uint8_t host_vk_from_mac(uint16_t mac) {
    return host_key_mapping(mac).vk;
}
int host_key_mapping_count() {
    return kKeyCount;
}
const HostKeyMapping *host_key_mapping_table() {
    return kKeys;
}

void host_input_set_notify(void (*fn)(void)) {
    g_notify = fn;
}
uint32_t host_input_notify_count(void) {
    return g_notify_count;
}
uint32_t host_input_read_count(void) {
    return g_read_count;
}

void host_input_scale_delta(HostMouseAccumulator *acc, double dx, double dy, double scale,
                            int32_t *out_dx, int32_t *out_dy) {
    if (out_dx)
        *out_dx = 0;
    if (out_dy)
        *out_dy = 0;
    if (!acc || scale <= 0.0)
        return;
    acc->x += dx * scale;
    acc->y += dy * scale;
    // Toward zero, so the remainder always keeps the sign of the motion still
    // owed and a reversal cannot leave a fraction pulling the wrong way.
    double wx = acc->x < 0 ? ceil(acc->x) : floor(acc->x);
    double wy = acc->y < 0 ? ceil(acc->y) : floor(acc->y);
    acc->x -= wx;
    acc->y -= wy;
    if (out_dx)
        *out_dx = (int32_t)wx;
    if (out_dy)
        *out_dy = (int32_t)wy;
}

int host_idle_wait_result(uint32_t before, uint32_t after) {
    return before != after ? 1 : 0;
}

void host_input_key(uint16_t mac, bool down) {
    HostKeyMapping m = host_key_mapping(mac);
    set_key(m.dik, m.vk, down);
    notify_input_changed();
}

void host_input_modifiers(uint32_t flags) {
    // One announcement for the whole set rather than one per key: this is a
    // single event and the guest only needs telling that something moved.
    for (int i = 0; i < kModifierSideCount; ++i) {
        HostKeyMapping m = host_key_mapping(kModifierSides[i].mac);
        set_key(m.dik, m.vk, (flags & kModifierSides[i].bit) != 0);
    }
    notify_input_changed();
}

uint32_t host_mouse_wparam(uint8_t buttons, uint8_t modifiers) {
    uint32_t w = 0;
    if (buttons & 1)
        w |= MK_LBUTTON;
    if (buttons & 2)
        w |= MK_RBUTTON;
    if (buttons & 4)
        w |= MK_MBUTTON;
    if (modifiers & 1)
        w |= MK_SHIFT;
    if (modifiers & 2)
        w |= MK_CONTROL;
    return w;
}

uint32_t host_key_lparam(HostKeyMapping m, bool down, bool alt, bool was_down) {
    uint32_t lparam = 1u | ((uint32_t)(m.dik & 0x7f) << 16);
    if (m.dik & 0x80)
        lparam |= 1u << 24; // extended key
    if (alt)
        lparam |= 1u << 29; // context code
    if (was_down)
        lparam |= 1u << 30; // previous key state
    if (!down)
        lparam |= 1u << 31; // transition state
    return lparam;
}

uint8_t host_modifier_bits(uint32_t flags) {
    uint8_t bits = 0;
    if (flags & (DEV_LSHIFT | DEV_RSHIFT))
        bits |= 1;
    if (flags & (DEV_LCTRL | DEV_RCTRL))
        bits |= 2;
    if (flags & (DEV_LALT | DEV_RALT))
        bits |= 4;
    return bits;
}

bool host_modifier_side_down(uint32_t flags, uint16_t mac) {
    for (int i = 0; i < kModifierSideCount; ++i)
        if (kModifierSides[i].mac == mac)
            return (flags & kModifierSides[i].bit) != 0;
    return false;
}

int host_modifier_key_count(void) {
    return kModifierSideCount;
}
uint16_t host_modifier_key(int index) {
    return (index >= 0 && index < kModifierSideCount) ? kModifierSides[index].mac : 0;
}

void host_input_button(int button, bool down) {
    if (button < 0 || button >= 8)
        return;
    g.buttons[button] = down ? 0x80 : 0x00;
    // GetAsyncKeyState's mouse codes, which are what a game polls when it is
    // not reading the DirectInput device.
    static const uint8_t vk[3] = {0x01, 0x02, 0x04};
    if (button < 3)
        host_set_key_state(vk[button], down);
    notify_input_changed();
}

void host_input_motion(int32_t x, int32_t y, int32_t dx, int32_t dy) {
    g.x = x;
    g.y = y;
    g.dx += dx;
    g.dy += dy;
    // GetCursorPos and MSG.pt are screen coordinates. DirectInput and the
    // mouse messages' lParam stay in client pixels, even for a moved window.
    host_set_client_cursor_pos(host_main_window(), x, y);
    notify_input_changed();
}

void host_input_discard_motion() {
    g.dx = g.dy = 0;
}

void host_input_wheel(int32_t dz) {
    g.dz += dz;
    notify_input_changed();
}

void host_input_release_all() {
    for (int i = 0; i < 8; ++i) {
        if (i < 8)
            g.buttons[i] = 0;
        if (i < 3) {
            static const uint8_t vk[3] = {0x01, 0x02, 0x04};
            host_set_key_state(vk[i], false);
        }
    }
    for (int i = 0; i < kKeyCount; ++i)
        set_key(kKeys[i].dik, kKeys[i].vk, false);
    g.dx = g.dy = g.dz = 0;
    notify_input_changed();
}

void host_input_peek(int32_t *x, int32_t *y, int32_t *dx, int32_t *dy, uint8_t *buttons8,
                     uint8_t *keys256) {
    if (x)
        *x = g.x;
    if (y)
        *y = g.y;
    if (dx)
        *dx = g.dx;
    if (dy)
        *dy = g.dy;
    if (buttons8)
        memcpy(buttons8, g.buttons, sizeof g.buttons);
    if (keys256)
        memcpy(keys256, g.keys, sizeof g.keys);
}

void host_input_reset() {
    g = State();
}

// ---------------------------------------------------------------------------
// The shim callback. DirectInput deltas are consumed on read: the device
// reports motion since the last poll, so reporting the same motion twice would
// move the cursor twice.
// ---------------------------------------------------------------------------
extern "C" void host_input_state(HostInputState *out) {
    ++g_read_count;
    if (!out)
        return;
    memset(out, 0, sizeof *out);
    out->mouse_x = g.x;
    out->mouse_y = g.y;
    out->mouse_dx = g.dx;
    out->mouse_dy = g.dy;
    out->mouse_dz = g.dz;
    memcpy(out->mouse_buttons, g.buttons, sizeof out->mouse_buttons);
    memcpy(out->keys, g.keys, sizeof out->keys);
    g.dx = g.dy = g.dz = 0;
}
