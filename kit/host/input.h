// input.h - the keyboard and mouse translation the windowed host needs, split
// so the part with no window API in it can be tested headlessly.
//
// Three numbering systems meet here and none of them is the others:
//
//   * The host's key codes: positional, numbered as macOS virtual keys
//     (kVK_*), which is where this table started. sdl/keymap.cpp turns SDL
//     scancodes into them. Positional means they survive a non-US layout: the
//     key west of E is the same code whatever is printed on it, which is what
//     a game that reads scan codes wants.
//   * DirectInput scan codes (DIK_*), what the guest's keyboard device
//     reports through `HostInputState::keys`. These are PC set-1 scan codes.
//   * Win32 virtual key codes (VK_*), what GetAsyncKeyState and the WM_KEYDOWN
//     wParam carry.
//
// A key the game can press has to be delivered in all three, because the game
// reads its keyboard through DirectInput and its window messages through the
// message queue, and nothing says the two agree unless the host makes them.
#pragma once
#include <stdint.h>

// One row per key this host can deliver. `mac` is the host key code.
struct HostKeyMapping {
    uint16_t mac;
    uint8_t dik; // DirectInput scan code, 0 when there is no equivalent
    uint8_t vk;  // Win32 virtual key code, 0 when there is no equivalent
};

// The mapping for one macOS key code, or {code, 0, 0} when the key has no
// PC equivalent (the Command keys, the media keys, the JIS-only keys).
HostKeyMapping host_key_mapping(uint16_t mac_keycode);

// The same row found by its DirectInput scan code instead, which is how
// scripted input names a key: it says ESCAPE, and the key has to arrive by
// exactly the path the real Escape key takes. {0, 0, 0} when no key has it.
HostKeyMapping host_key_mapping_for_dik(uint8_t dik);

// Convenience wrappers over the same table.
uint8_t host_dik_from_mac(uint16_t mac_keycode);
uint8_t host_vk_from_mac(uint16_t mac_keycode);
// The number of rows in the table, for a test that wants to walk all of it.
int host_key_mapping_count();
const HostKeyMapping *host_key_mapping_table();

// ---------------------------------------------------------------------------
// The live input state. sdl/main.cpp feeds these from SDL events;
// host_input_state() in input.cpp drains them for the DirectInput shims.
// ---------------------------------------------------------------------------
// A key went down or came up. Updates the DirectInput key array and, through
// host_set_key_state, GetAsyncKeyState.
void host_input_key(uint16_t mac_keycode, bool down);
// The modifier flags changed. macOS reports modifiers as a bitmask on a
// separate event rather than as key up/down, so the host diffs them.
void host_input_modifiers(uint32_t ns_event_modifier_flags);
// A mouse button, 0 = left, 1 = right, 2 = middle.
void host_input_button(int button, bool down);
// Motion. `x`/`y` are the cursor in guest client pixels; `dx`/`dy` are the
// relative motion DirectInput reports, which is not the difference between
// two clamped positions and so is passed through separately.
void host_input_motion(int32_t x, int32_t y, int32_t dx, int32_t dy);
// Absolute touch placement has consumed X/Y motion, but not buttons or wheel.
void host_input_discard_motion();
void host_input_wheel(int32_t dz);
// The window lost the focus: every key and button is released, because a key
// that goes up while another application has the focus is never seen here and
// would otherwise stay down forever.
void host_input_release_all();

// ---------------------------------------------------------------------------
// Win32 message translation. sdl/main.cpp decodes the event and these build what
// the message carries, which is the part that can be checked without a window.
// ---------------------------------------------------------------------------
// The MK_ bits every mouse message's wParam carries. `buttons` is a bitmask of
// left/right/middle; `modifiers` is the result of host_modifier_bits.
uint32_t host_mouse_wparam(uint8_t buttons, uint8_t modifiers);

// The lParam of a key message: repeat count 1, the scan code, the extended bit
// for the keys DirectInput numbers above 0x80, the context code when Alt is
// held, the previous key state, and the transition state on a key up.
uint32_t host_key_lparam(struct HostKeyMapping mapping, bool down, bool alt, bool was_down);

// Shift, Control and Alt as bits 0, 1 and 2, from the host's modifier flags
// (sdl/keymap.cpp builds them; the layout is the one NSEvent used).
// Either side counts: a game that finds Shift up because the right one was
// released while the left is still held would misread a shift-click.
uint8_t host_modifier_bits(uint32_t ns_event_modifier_flags);

// Whether the modifier key with this macOS key code is down in those flags.
// macOS reports a modifier as a flags change and never as a key event, so this
// is the only way to turn one into the key messages Win32 would have sent.
bool host_modifier_side_down(uint32_t ns_event_modifier_flags, uint16_t mac_keycode);
// The macOS key codes of the modifier keys, in the order they are diffed.
int host_modifier_key_count(void);
uint16_t host_modifier_key(int index);

// ---------------------------------------------------------------------------
// Mouse motion.
//
// A DirectInput delta is a whole number of mouse counts, and the host has to
// scale the platform's motion into the guest's own pixels. Rounding each event
// on its own throws slow movement away: at a scale of one half, a stream of
// one-point moves rounds to zero every time and the pointer never moves at all,
// while the buttons - which are a level, not a delta - keep working perfectly.
// That is what a mouse whose clicks work and whose movement does not looks
// like from the inside.
//
// So the remainder is kept. Whole counts go to the guest and the fraction stays
// here until it makes one.
struct HostMouseAccumulator {
    double x, y;
};
void host_input_scale_delta(struct HostMouseAccumulator *accumulator, double dx, double dy,
                            double scale, int32_t *out_dx, int32_t *out_dy);

// ---------------------------------------------------------------------------
// Waking the guest.
//
// The game's DirectInput devices are serviced by two guest threads that wait on
// an event rather than polling, so new input that nobody announces is input the
// game never sees. Every mutator above therefore tells the shim that the state
// changed, by calling `dinput_host_input_changed()` - weakly linked, so a
// binary that does not include the DirectX shims simply has nothing to call.
//
// The notification always happens on the thread that called boot_run, because
// the only thing that drives these is the event pump, and the pump runs
// nowhere else.
// ---------------------------------------------------------------------------
// Replaces the notification, for a test that wants to see it fire. Null
// restores the real one.
void host_input_set_notify(void (*fn)(void));
// How many times the state has changed and been announced.
uint32_t host_input_notify_count(void);
// How many times the guest has read the input state. Zero while input is being
// fed means the game is not polling its devices at all, which is a different
// problem from feeding it the wrong thing.
uint32_t host_input_read_count(void);

// What the runtime's idle wait answers, given the announcement count before and
// after it serviced the host. Non-zero means input arrived during the wait, so
// the caller should re-check its own condition now rather than sitting out the
// rest of its slice: the guest's DirectInput threads have just been woken by
// that input, and making them wait would be latency with no visible cause.
//
// A separate function because it is the rule, and the rule is worth being able
// to state and check on its own; the wait around it is the window and cannot be
// run without a window.
int host_idle_wait_result(uint32_t before, uint32_t after);

// Test seam: what host_input_state() would report right now, without the
// consuming side effect on the deltas.
void host_input_peek(int32_t *x, int32_t *y, int32_t *dx, int32_t *dy, uint8_t *buttons8,
                     uint8_t *keys256);
void host_input_reset();
