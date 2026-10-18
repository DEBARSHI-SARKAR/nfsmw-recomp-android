// vpad_host_api.cpp - the strong host_pad_* callbacks (dx/host_api.h) over the
// process-wide virtual pad. They override host_api.cpp's weak defaults in the
// app and smoke host: both use the game's generated configuration. The
// SDL-free controls_tests link vpad.cpp without it, and the headless host
// keeps the "no pad" defaults.
// Design: docs/superpowers/specs/2026-09-17-touch-controls-design.md, 7.2-7.4.
#include "../../dx/host_api.h"
#include "game_config.h"
#include "vpad.h"

extern "C" {

// 0 off, 1 mapped, 2 native, as [controls] pad in game.toml.
int host_pad_mode(void) {
    return RECOMP_CONTROLS_PAD;
}

// Which native APIs serve the pad: bit 0 DirectInput, bit 1 XInput. The
// shims also check host_pad_mode() == 2 before serving it.
int host_pad_native_apis(void) {
    return (RECOMP_CONTROLS_DINPUT ? 1 : 0) | (RECOMP_CONTROLS_XINPUT ? 2 : 0);
}

// The merged pad, scaled to the wire format. The packet is read before the
// state: a change between the two reads then pairs the new state with the
// old packet, and the next poll reports a newer packet for the same state,
// instead of a reader that caches by packet missing the change for good.
uint32_t host_pad_state(HostPadState *out) {
    const uint32_t packet = controls::vpad().packet();
    const controls::PadState s = controls::vpad().state();
    if (out)
        *out = controls::to_host(s);
    return packet;
}

// The oldest queued edge newer than `after`: 1 and *out filled, else 0.
int host_pad_next_event(uint32_t after, HostPadEvent *out) {
    controls::PadEdge e;
    if (!out || !controls::vpad().next_edge(after, &e))
        return 0;
    out->sequence = e.sequence;
    out->kind = e.kind;
    out->index = e.index;
    out->value = e.value;
    return 1;
}

// The guest's motor request; controls_host.cpp routes it to a controller or
// the device on its next pump.
void host_pad_rumble(uint16_t low, uint16_t high) {
    controls::vpad().request_rumble(low, high);
}

const char *host_pad_native_axes(void) {
    return RECOMP_CONTROLS_NATIVE_AXES;
}

const char *host_pad_native_buttons(void) {
    return RECOMP_CONTROLS_NATIVE_BUTTONS;
}

} // extern "C"
