// xinput.cpp - the virtual pad as XInput controller 0.
//
// XInput has no COM objects and no per-device handle: a game addresses users
// by index, and this kit serves exactly one, user 0, built from the same
// merged pad DirectInput's joystick reads (dinput_joystick.cpp) -
// host_pad_state for the polled state, host_pad_next_event for the edges
// XInputGetKeystroke replays.
//
// One shim table answers XINPUT1_3.dll, XINPUT1_4.dll and XINPUT9_1_0.dll:
// a game imports whichever it shipped with, and the entries a given DLL
// never actually exported (say XInputGetAudioDeviceIds from 1_3) are simply
// never registered for it, so the loader's IAT patch for that ordinal/name
// fails exactly as it would against the real DLL.
//
// XInputEnable and the keystroke replay position are per-process state,
// matching the real DLL: one game process, one set of XInput globals, no
// per-device object to hang them from.
#include "com.h"
#include "dx.h"
#include "host_api.h"

#include "../runtime/guest.h"
#include "../runtime/imports.h"

#include <iterator>
#include <vector>

namespace {

// XInput reports plain Win32 error codes in EAX, not HRESULTs.
const uint32_t XI_ERROR_SUCCESS = 0;
const uint32_t XI_ERROR_BAD_ARGUMENTS = 160;
const uint32_t XI_ERROR_DEVICE_NOT_CONNECTED = 1167;
const uint32_t XI_ERROR_EMPTY = 4306;
// XInputGetKeystroke alone accepts this in place of a real user index.
const uint32_t XUSER_INDEX_ANY = 0xFF;

// XINPUT_GAMEPAD.wButtons bits (xinput.h).
const uint32_t XINPUT_GAMEPAD_DPAD_UP = 0x0001;
const uint32_t XINPUT_GAMEPAD_DPAD_DOWN = 0x0002;
const uint32_t XINPUT_GAMEPAD_DPAD_LEFT = 0x0004;
const uint32_t XINPUT_GAMEPAD_DPAD_RIGHT = 0x0008;
const uint32_t XINPUT_GAMEPAD_START = 0x0010;
const uint32_t XINPUT_GAMEPAD_BACK = 0x0020;
const uint32_t XINPUT_GAMEPAD_LEFT_THUMB = 0x0040;
const uint32_t XINPUT_GAMEPAD_RIGHT_THUMB = 0x0080;
const uint32_t XINPUT_GAMEPAD_LEFT_SHOULDER = 0x0100;
const uint32_t XINPUT_GAMEPAD_RIGHT_SHOULDER = 0x0200;
const uint32_t XINPUT_GAMEPAD_A = 0x1000;
const uint32_t XINPUT_GAMEPAD_B = 0x2000;
const uint32_t XINPUT_GAMEPAD_X = 0x4000;
const uint32_t XINPUT_GAMEPAD_Y = 0x8000;

// XINPUT_GAMEPAD (12 bytes): wButtons, bLeftTrigger, bRightTrigger,
// sThumbLX, sThumbLY, sThumbRX, sThumbRY.
enum {
    GP_OFF_wButtons = 0,
    GP_OFF_bLeftTrigger = 2,
    GP_OFF_bRightTrigger = 3,
    GP_OFF_sThumbLX = 4,
    GP_OFF_sThumbLY = 6,
    GP_OFF_sThumbRX = 8,
    GP_OFF_sThumbRY = 10,
    GP_SIZE = 12,
};
// XINPUT_STATE: dwPacketNumber, then a XINPUT_GAMEPAD.
enum { STATE_OFF_dwPacketNumber = 0, STATE_OFF_Gamepad = 4, STATE_SIZE = 16 };
// XINPUT_VIBRATION: wLeftMotorSpeed, wRightMotorSpeed.
enum { VIB_OFF_wLeftMotorSpeed = 0, VIB_OFF_wRightMotorSpeed = 2, VIB_SIZE = 4 };
// XINPUT_CAPABILITIES: Type, SubType, Flags, a XINPUT_GAMEPAD, a
// XINPUT_VIBRATION.
enum {
    CAPS_OFF_Type = 0,
    CAPS_OFF_SubType = 1,
    CAPS_OFF_Flags = 2,
    CAPS_OFF_Gamepad = 4,
    CAPS_OFF_Vibration = 16,
    CAPS_SIZE = 20,
};
const uint32_t XINPUT_DEVTYPE_GAMEPAD = 1;
const uint32_t XINPUT_DEVSUBTYPE_GAMEPAD = 1;
// XINPUT_KEYSTROKE: VirtualKey (WORD), Unicode (WCHAR), Flags (WORD -
// XINPUT_KEYSTROKE_KEYDOWN/KEYUP/REPEAT are bit flags, not a byte enum),
// UserIndex (BYTE), HidCode (BYTE): 2+2+2+1+1 = 8 bytes exactly, no padding.
enum {
    KS_OFF_VirtualKey = 0,
    KS_OFF_Unicode = 2,
    KS_OFF_Flags = 4,
    KS_OFF_UserIndex = 6,
    KS_OFF_HidCode = 7,
    KS_SIZE = 8,
};
const uint32_t XINPUT_KEYSTROKE_KEYDOWN = 1;
const uint32_t XINPUT_KEYSTROKE_KEYUP = 2;
// The virtual pad is wired, not battery powered.
enum { BATTERY_OFF_BatteryType = 0, BATTERY_OFF_BatteryLevel = 1, BATTERY_SIZE = 2 };
const uint32_t BATTERY_TYPE_WIRED = 1;
const uint32_t BATTERY_LEVEL_FULL = 3;

// Mirrors joy_served() (dinput_joystick.cpp): user 0 exists only in native
// pad mode with the XInput bit set in RECOMP_CONTROLS_PAD's native-API mask.
bool served() {
    return host_pad_mode() == 2 && (host_pad_native_apis() & 2) != 0;
}

// XInputEnable's stored state. Starts enabled, matching a freshly loaded
// XInput DLL that no one has called XInputEnable(FALSE) on yet.
bool g_enabled = true;
// The last vibration SetState was asked for, kept even while disabled: a
// disabled SetState must not reach the motors, but a following Enable(TRUE)
// has to resend exactly what the game last asked for, not silence.
uint16_t g_vib_low = 0, g_vib_high = 0;

// The pad bits (controls::PadBit, host_api.h) XInput reports as a button,
// and which wButtons bit each becomes. l2 and r2's digital press has no
// XInput button of its own - only the analog trigger bytes below - so they
// are absent here on purpose; their edges still make keystrokes.
struct ButtonMap {
    int pad_bit;
    uint32_t xinput_bit;
};
const ButtonMap kButtons[] = {
    {0, XINPUT_GAMEPAD_A},
    {1, XINPUT_GAMEPAD_B},
    {2, XINPUT_GAMEPAD_X},
    {3, XINPUT_GAMEPAD_Y},
    {4, XINPUT_GAMEPAD_LEFT_SHOULDER},
    {5, XINPUT_GAMEPAD_RIGHT_SHOULDER},
    {8, XINPUT_GAMEPAD_LEFT_THUMB},
    {9, XINPUT_GAMEPAD_RIGHT_THUMB},
    {10, XINPUT_GAMEPAD_BACK},
    {11, XINPUT_GAMEPAD_START},
};

int16_t clamp16(int32_t v) {
    if (v > 32767)
        return 32767;
    if (v < -32768)
        return -32768;
    return (int16_t)v;
}

// Writes a 12-byte XINPUT_GAMEPAD at `gp` from the merged pad state.
void fill_gamepad(uint32_t gp, const HostPadState &s) {
    uint16_t buttons = 0;
    if (s.hat & 1)
        buttons |= XINPUT_GAMEPAD_DPAD_UP;
    if (s.hat & 2)
        buttons |= XINPUT_GAMEPAD_DPAD_RIGHT;
    if (s.hat & 4)
        buttons |= XINPUT_GAMEPAD_DPAD_DOWN;
    if (s.hat & 8)
        buttons |= XINPUT_GAMEPAD_DPAD_LEFT;
    for (const ButtonMap &b : kButtons)
        if (s.buttons & (1u << b.pad_bit))
            buttons |= b.xinput_bit;
    wr16(gp + GP_OFF_wButtons, buttons);
    wr8(gp + GP_OFF_bLeftTrigger, s.l2);
    wr8(gp + GP_OFF_bRightTrigger, s.r2);
    wr16(gp + GP_OFF_sThumbLX, (uint16_t)clamp16(s.lx));
    // XInput's Y axis points up; the pad's points down (host_api.h).
    wr16(gp + GP_OFF_sThumbLY, (uint16_t)clamp16(-(int32_t)s.ly));
    wr16(gp + GP_OFF_sThumbRX, (uint16_t)clamp16(s.rx));
    wr16(gp + GP_OFF_sThumbRY, (uint16_t)clamp16(-(int32_t)s.ry));
}

// ---------------------------------------------------------------------------
// XInputGetKeystroke's replay queue.
//
// One host edge can become more than one keystroke - a diagonal hat change
// touches two direction bits at once - so edges are pumped into a small
// per-process queue and GetKeystroke hands out one entry per call, exactly
// as the real API does. `g_hat` is the last hat value turned into
// keystrokes, kept apart from any DirectInput device's own last-hat (there
// is no XInput device object to keep it in).
// ---------------------------------------------------------------------------
struct Keystroke {
    uint16_t vk;
    uint8_t flags;
};
std::vector<Keystroke> g_keystroke_queue;
uint32_t g_keystroke_sequence = 0;
// True once the first XInputGetKeystroke call has established where the
// replay starts. Kept apart from `g_keystroke_sequence == 0` because 0 is
// also a legitimate "nothing consumed yet" value for a host that has not
// produced any edge at all.
bool g_keystroke_started = false;
// The pump's own notion of "last hat", independent of any DirectInput
// device's (there is no XInput device object to keep one in). If the host's
// edge ring ever drops edges before this pump reads them - it can, the same
// way a DirectInput device sees DI_BUFFEROVERFLOW, except GetKeystroke has
// no such error to report - a hat edge inside the gap is never seen and
// this drifts from the pad's real last direction until the hat next
// returns to centre (0), which resynchronises it.
uint8_t g_hat = 0;

// VK_PAD_DPAD_* for one hat direction bit (host_api.h: 1 up, 2 right, 4
// down, 8 left), or 0 for a bit this pad's hat does not have.
uint16_t hat_vk(uint32_t bit) {
    switch (bit) {
    case 1:
        return 0x5810; // up
    case 2:
        return 0x5813; // right
    case 4:
        return 0x5811; // down
    case 8:
        return 0x5812; // left
    default:
        return 0;
    }
}

// The VK a pad button bit's edge becomes, or 0 for "ps" (bit 12), which has
// no XInput keystroke.
uint16_t button_vk(int pad_bit) {
    switch (pad_bit) {
    case 0:
        return 0x5800; // cross
    case 1:
        return 0x5801; // circle
    case 2:
        return 0x5802; // square
    case 3:
        return 0x5803; // triangle
    case 5:
        return 0x5804; // r1
    case 4:
        return 0x5805; // l1
    case 6:
        return 0x5806; // l2
    case 7:
        return 0x5807; // r2
    case 11:
        return 0x5814; // start
    case 10:
        return 0x5815; // select
    case 8:
        return 0x5816; // l3
    case 9:
        return 0x5817; // r3
    default:
        return 0;
    }
}

// Pulls host edges into the queue until it is non-empty or the host has none
// left. A button edge becomes one keystroke; a hat edge becomes one per
// direction bit that changed since the last one seen here; an axis edge is
// not a keystroke and is simply consumed.
void keystroke_pump() {
    HostPadEvent e;
    if (!g_keystroke_started) {
        g_keystroke_started = true;
        // The first call establishes "now": whatever the host already
        // queued before any game ever asked for a keystroke is a backlog,
        // not something to dump all at once, so it is skipped rather than
        // replayed. A hat edge in that backlog still moves g_hat (silently,
        // no keystroke queued for it), so the first real edge afterwards is
        // compared against the pad's actual last direction rather than 0.
        while (host_pad_next_event(g_keystroke_sequence, &e)) {
            g_keystroke_sequence = e.sequence;
            if (e.kind == 1)
                g_hat = (uint8_t)e.value;
        }
    }
    while (g_keystroke_queue.empty() && host_pad_next_event(g_keystroke_sequence, &e)) {
        g_keystroke_sequence = e.sequence;
        if (e.kind == 0) {
            uint16_t vk = button_vk((int)e.index);
            if (vk)
                g_keystroke_queue.push_back({vk, e.value ? (uint8_t)XINPUT_KEYSTROKE_KEYDOWN
                                                         : (uint8_t)XINPUT_KEYSTROKE_KEYUP});
        } else if (e.kind == 1) {
            uint8_t now = (uint8_t)e.value;
            uint8_t changed = now ^ g_hat;
            for (uint32_t bit = 1; bit <= 8; bit <<= 1) {
                if (!(changed & bit))
                    continue;
                uint16_t vk = hat_vk(bit);
                if (vk)
                    g_keystroke_queue.push_back({vk, (now & bit)
                                                         ? (uint8_t)XINPUT_KEYSTROKE_KEYDOWN
                                                         : (uint8_t)XINPUT_KEYSTROKE_KEYUP});
            }
            g_hat = now;
        }
        // kind 2 (axis): no keystroke; the loop moves on to the next edge.
    }
}

// ===========================================================================
// Shims
// ===========================================================================
void XInputGetState_(X86 *c) {
    uint32_t user = arg(c, 0);
    uint32_t out = arg(c, 1);
    if (!served() || user != 0) {
        set_eax(c, XI_ERROR_DEVICE_NOT_CONNECTED);
        return;
    }
    if (!out || !gm_valid(out, STATE_SIZE)) {
        set_eax(c, XI_ERROR_BAD_ARGUMENTS);
        return;
    }
    HostPadState s;
    memset(&s, 0, sizeof s);
    uint32_t packet = host_pad_state(&s);
    wr32(out + STATE_OFF_dwPacketNumber, packet);
    // Disabled: the state reports zero, but the packet number is still
    // the host's real one (XInputEnable does not stop it changing).
    if (g_enabled)
        fill_gamepad(out + STATE_OFF_Gamepad, s);
    else
        gm_zero(out + STATE_OFF_Gamepad, GP_SIZE);
    set_eax(c, XI_ERROR_SUCCESS);
}

void XInputSetState_(X86 *c) {
    uint32_t user = arg(c, 0);
    uint32_t vib = arg(c, 1);
    if (!served() || user != 0) {
        set_eax(c, XI_ERROR_DEVICE_NOT_CONNECTED);
        return;
    }
    if (!vib || !gm_valid(vib, VIB_SIZE)) {
        set_eax(c, XI_ERROR_BAD_ARGUMENTS);
        return;
    }
    g_vib_low = (uint16_t)rd16(vib + VIB_OFF_wLeftMotorSpeed);
    g_vib_high = (uint16_t)rd16(vib + VIB_OFF_wRightMotorSpeed);
    // While XInputEnable(FALSE) is in effect the motors stay muted: the
    // values are remembered and only reach the host once re-enabled.
    if (g_enabled)
        host_pad_rumble(g_vib_low, g_vib_high);
    set_eax(c, XI_ERROR_SUCCESS);
}

void XInputGetCapabilities_(X86 *c) {
    uint32_t user = arg(c, 0);
    // arg(c, 1) is dwFlags (XINPUT_FLAG_GAMEPAD): the pad has nothing else
    // to filter by, so it is read but ignored.
    uint32_t out = arg(c, 2);
    if (!served() || user != 0) {
        set_eax(c, XI_ERROR_DEVICE_NOT_CONNECTED);
        return;
    }
    if (!out || !gm_valid(out, CAPS_SIZE)) {
        set_eax(c, XI_ERROR_BAD_ARGUMENTS);
        return;
    }
    gm_zero(out, CAPS_SIZE);
    wr8(out + CAPS_OFF_Type, XINPUT_DEVTYPE_GAMEPAD);
    wr8(out + CAPS_OFF_SubType, XINPUT_DEVSUBTYPE_GAMEPAD);
    wr16(out + CAPS_OFF_Flags, 0);
    uint32_t gp = out + CAPS_OFF_Gamepad;
    // Every button bit except the two Windows leaves unused (0x0400,
    // 0x0800), full-range triggers, and the thumbsticks' rest value as
    // Windows itself reports it for a capabilities query (0xFFC0, not 0).
    wr16(gp + GP_OFF_wButtons, (uint16_t)(0xFFFFu & ~(0x0400u | 0x0800u)));
    wr8(gp + GP_OFF_bLeftTrigger, 255);
    wr8(gp + GP_OFF_bRightTrigger, 255);
    wr16(gp + GP_OFF_sThumbLX, 0xFFC0u);
    wr16(gp + GP_OFF_sThumbLY, 0xFFC0u);
    wr16(gp + GP_OFF_sThumbRX, 0xFFC0u);
    wr16(gp + GP_OFF_sThumbRY, 0xFFC0u);
    wr16(out + CAPS_OFF_Vibration + 0, 0xFFFFu);
    wr16(out + CAPS_OFF_Vibration + 2, 0xFFFFu);
    set_eax(c, XI_ERROR_SUCCESS);
}

void XInputEnable_(X86 *c) {
    bool now = arg(c, 0) != 0;
    // Only reaches the host while served: there is nothing to mute or
    // resume when there is no controller for this call to have addressed.
    if (served()) {
        // The falling edge sends the mute rumble once - calling
        // Enable(FALSE) twice in a row must not re-send it - and the rising
        // edge resends whatever SetState last asked for, which SetState
        // itself withheld from the host while disabled.
        if (g_enabled && !now)
            host_pad_rumble(0, 0);
        else if (!g_enabled && now)
            host_pad_rumble(g_vib_low, g_vib_high);
    }
    g_enabled = now;
    // XInputEnable is void in the real DLL; EAX is left defined anyway for a
    // caller that (incorrectly) reads a return value.
    set_eax(c, 0);
}

void XInputGetBatteryInformation_(X86 *c) {
    uint32_t user = arg(c, 0);
    // arg(c, 1) is BatteryDevType (gamepad vs. headset): the pad is the only
    // device, so every request answers the same.
    uint32_t out = arg(c, 2);
    if (!served() || user != 0) {
        set_eax(c, XI_ERROR_DEVICE_NOT_CONNECTED);
        return;
    }
    if (!out || !gm_valid(out, BATTERY_SIZE)) {
        set_eax(c, XI_ERROR_BAD_ARGUMENTS);
        return;
    }
    wr8(out + BATTERY_OFF_BatteryType, BATTERY_TYPE_WIRED);
    wr8(out + BATTERY_OFF_BatteryLevel, BATTERY_LEVEL_FULL);
    set_eax(c, XI_ERROR_SUCCESS);
}

void XInputGetKeystroke_(X86 *c) {
    uint32_t user = arg(c, 0);
    // arg(c, 1) is reserved (always 0).
    uint32_t out = arg(c, 2);
    // Unlike every other entry point, GetKeystroke also accepts
    // XUSER_INDEX_ANY: a game that does not care which user pressed a menu
    // key polls "any" instead of a specific index.
    if (!served() || (user != 0 && user != XUSER_INDEX_ANY)) {
        set_eax(c, XI_ERROR_DEVICE_NOT_CONNECTED);
        return;
    }
    // Checked before touching the queue: a bad pointer must not silently
    // consume a keystroke that a following, valid call would then miss.
    if (!out || !gm_valid(out, KS_SIZE)) {
        set_eax(c, XI_ERROR_BAD_ARGUMENTS);
        return;
    }
    keystroke_pump();
    if (g_keystroke_queue.empty()) {
        set_eax(c, XI_ERROR_EMPTY);
        return;
    }
    Keystroke k = g_keystroke_queue.front();
    g_keystroke_queue.erase(g_keystroke_queue.begin());
    gm_zero(out, KS_SIZE);
    wr16(out + KS_OFF_VirtualKey, k.vk);
    wr16(out + KS_OFF_Flags, k.flags);
    wr8(out + KS_OFF_UserIndex, 0);
    set_eax(c, XI_ERROR_SUCCESS);
}

void XInputGetDSoundAudioDeviceGuids_(X86 *c) {
    uint32_t user = arg(c, 0);
    uint32_t render = arg(c, 1);
    uint32_t capture = arg(c, 2);
    if (!served() || user != 0) {
        set_eax(c, XI_ERROR_DEVICE_NOT_CONNECTED);
        return;
    }
    // The pad has no DirectSound identity of its own: zero GUIDs, meaning
    // "use the default audio device", same as a real controller with no
    // onboard audio hardware.
    if (render && gm_valid(render, 16))
        gm_zero(render, 16);
    if (capture && gm_valid(capture, 16))
        gm_zero(capture, 16);
    set_eax(c, XI_ERROR_SUCCESS);
}

void XInputGetAudioDeviceIds_(X86 *c) {
    uint32_t user = arg(c, 0);
    // arg(c, 1) render id buffer, arg(c, 3) capture id buffer: unused, the
    // pad has neither.
    uint32_t render_len = arg(c, 2);
    uint32_t capture_len = arg(c, 4);
    if (!served() || user != 0) {
        set_eax(c, XI_ERROR_DEVICE_NOT_CONNECTED);
        return;
    }
    if (render_len && gm_valid(render_len, 4))
        wr32(render_len, 0);
    if (capture_len && gm_valid(capture_len, 4))
        wr32(capture_len, 0);
    set_eax(c, XI_ERROR_SUCCESS);
}

// ---------------------------------------------------------------------------
// Export tables. GetState/SetState/GetCapabilities/Enable are common to all
// three DLLs; the rest match what each one really exports (task brief).
// ---------------------------------------------------------------------------
const ImportShim g_xinput13_exports[] = {
    {"XINPUT1_3.dll", "XInputGetState", 2, XInputGetState_},
    {"XINPUT1_3.dll", "XInputSetState", 2, XInputSetState_},
    {"XINPUT1_3.dll", "XInputGetCapabilities", 3, XInputGetCapabilities_},
    {"XINPUT1_3.dll", "XInputEnable", 1, XInputEnable_},
    {"XINPUT1_3.dll", "XInputGetBatteryInformation", 3, XInputGetBatteryInformation_},
    {"XINPUT1_3.dll", "XInputGetKeystroke", 3, XInputGetKeystroke_},
    {"XINPUT1_3.dll", "XInputGetDSoundAudioDeviceGuids", 3, XInputGetDSoundAudioDeviceGuids_},
};
const ImportShim g_xinput14_exports[] = {
    {"XINPUT1_4.dll", "XInputGetState", 2, XInputGetState_},
    {"XINPUT1_4.dll", "XInputSetState", 2, XInputSetState_},
    {"XINPUT1_4.dll", "XInputGetCapabilities", 3, XInputGetCapabilities_},
    {"XINPUT1_4.dll", "XInputEnable", 1, XInputEnable_},
    {"XINPUT1_4.dll", "XInputGetBatteryInformation", 3, XInputGetBatteryInformation_},
    {"XINPUT1_4.dll", "XInputGetKeystroke", 3, XInputGetKeystroke_},
    {"XINPUT1_4.dll", "XInputGetAudioDeviceIds", 5, XInputGetAudioDeviceIds_},
};
const ImportShim g_xinput910_exports[] = {
    {"XINPUT9_1_0.dll", "XInputGetState", 2, XInputGetState_},
    {"XINPUT9_1_0.dll", "XInputSetState", 2, XInputSetState_},
    {"XINPUT9_1_0.dll", "XInputGetCapabilities", 3, XInputGetCapabilities_},
    {"XINPUT9_1_0.dll", "XInputEnable", 1, XInputEnable_},
    {"XINPUT9_1_0.dll", "XInputGetDSoundAudioDeviceGuids", 3, XInputGetDSoundAudioDeviceGuids_},
};

} // namespace

// dx_register_shims calls this beside dinput_register(). Registration stays
// unconditional, never gated on host_pad_mode(): host_pad_mode() is decided
// once, from RECOMP_CONTROLS_PAD, so it is effectively compile-time for a
// running process, but that is beside the point anyway. The loader's
// patch_iat() (runtime/loader.cpp) walks every IAT slot unconditionally and
// calls imports_alloc_trampoline(dll, name, nullptr, ARGC_UNKNOWN) for a
// static import whose (dll, name) nothing has registered - it never leaves
// the slot at 0, so a game that statically imports an XInput function still
// gets a live trampoline either way. The difference is argc: a registered
// shim carries its real stdcall argument count, so imports_dispatch pops
// the guest stack correctly even when it just answers
// ERROR_DEVICE_NOT_CONNECTED; an unregistered import is stuck at
// ARGC_UNKNOWN forever, so every call only pops the return address and
// leaves the real arguments' bytes on the stack, drifting ESP a little more
// on every single XInput call the game ever makes - whether or not it asks
// for native pad input. Real Windows has the same shape: xinput1_4.dll (or
// whichever redistributable ships) is always loadable for a statically
// linked game, controller or none - "no controller" is
// ERROR_DEVICE_NOT_CONNECTED from every entry point, never a missing DLL,
// which is exactly what `served()` enforces here.
void xinput_register() {
    static bool done = false;
    if (done)
        return;
    done = true;
    imports_register(g_xinput13_exports, std::size(g_xinput13_exports));
    imports_register(g_xinput14_exports, std::size(g_xinput14_exports));
    imports_register(g_xinput910_exports, std::size(g_xinput910_exports));
}

void xinput_reset_for_test() {
    g_enabled = true;
    g_vib_low = g_vib_high = 0;
    g_keystroke_queue.clear();
    g_keystroke_sequence = 0;
    g_keystroke_started = false;
    g_hat = 0;
}
