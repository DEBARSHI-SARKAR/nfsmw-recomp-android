// script.h - timed input for a headless run.
//
// A smoke run has to press the same buttons a person would, through the same
// paths a person's input takes: the DirectInput state, the notification that
// wakes the guest's input threads, and the Win32 message queue. Anything that
// reached the guest another way would be testing a path the game does not use.
//
// The parser is here, apart from the running, because a script that is wrong is
// worth catching without booting a game.
//
//   wait 500                  advance the script clock by 500 ms
//   move 320 140              the pointer, in guest pixels
//   moveby -2000 -2000        relative motion, which is all a DirectInput
//                             mouse reports; a big negative move pins the
//                             game's own pointer to the top-left corner, which
//                             is the only position a script can be sure of
//   click left 320 140        move there, press, release
//   tap 320 140               a finger tap through TouchMapper, in guest pixels
//   tap_drawable 1210 834      a finger tap in game-image drawable pixels;
//                             tests screen targets without inverting the layout
//   button right down         press (or up: release) where the pointer is, and
//                             leave it: the moves until `button right up` are a drag
//   move entity 1815         move to the entity's attributed body centre
//   move world 5376 55040 128 move to the projected world destination
//                            Use wait 800 before clicking to settle guest picking.
//   click entity 1815        left click the entity's own attributed body centre
//                            from this or the preceding completed present; wait up to
//                            120 completed presents (also applies to move entity).
//   click world 5376 55040 128
//                            left click world x/z/altitude through the current
//                            projection; fail if unavailable or outside the view.
//   key ESCAPE down           by DirectInput scan-code name
//   pad cross down            virtual pad button (or up); native APIs or mapped binding
//   pad left_x -32767         stick axis -32767..32767 (+y down)
//   pad right_trigger 32767   trigger axis 0..32767
//   dump menu                 write a frame and a scene dump named for this
//   peek 0x8e0428 179         read guest memory and print it. Addresses may be
//                             decimal or 0x-hex, and a read is at most 256
//                             bytes. This is how a script looks at what the
//                             game thinks is true rather than at what it drew.
//   watch 0 1                 follow the first live entity with this owner and
//                             kind - owner 0 kind 1 is a blue brave - and
//                             sample its position and state from then on, so
//                             an order can be checked against the game's own
//                             record of what the unit did
//   readfile mods-example.txt overlay   read a guest path through the file
//                             shim and require the text to contain "overlay";
//                             a miss fails the run. This is how a smoke run
//                             proves an overlay layer is visible to the game's
//                             own file API rather than only to the host's.
//   await entity_body 1815 within 20000
//                            require fresh attributed BODY click evidence within
//                            120 completed presents or the script timeout;
//                            smoke stops on timeout before later input.
//   await dumpat_fired>=1 within 120000
//                            confirm a dump fired before arming another;
//                            smoke stops on timeout. Counts all fired dumps,
//                            not asynchronous image-write completions.
//   await picture>0.98 for 2000 within 60000
//
// THE HOLD IS COUNTED IN PRESENTED FRAMES, THE TIMEOUT IN SCRIPT TIME
//
// `for <ms>` is written in milliseconds and converted to a number of PRESENTED
// FRAMES at the pinned step - 2000 ms is 40 frames at 50 ms - so every script
// shipped before this change means what it meant. `within <ms>` stays in
// script time.
//
// The two units are deliberate. The hold exists to outlast a fade, and a fade
// is a sequence of frames; measured in time it can be satisfied without any
// frames at all, because the pinned clock also advances when a guest spins on
// it without drawing (boot.cpp's stall breaker, 256 polls to a step). Under
// the pin the front end does exactly that while it waits for a sound cursor,
// so a hold measured in milliseconds was answered during a two-frame fade
// plateau and the click landed early - five pinned runs in twelve failed that
// way, with the same signature as the fixed-wait flake that preceded them.
// The timeout stays in time so that a guest which has genuinely stopped
// drawing still fails the run instead of waiting for frames that never come.
//                             hold the script here until the metric has been
//                             above the value for `for` milliseconds, giving
//                             up after `within` milliseconds. Both clauses are
//                             optional and may come in either order; the
//                             defaults are no hold and a minute. This is how a
//                             script waits for the GAME rather than for the
//                             clock: a `wait` is a guess about how long a
//                             machine takes to reach the menu, and a guess
//                             that was right for months stops being right the
//                             moment anything is added to startup.
//
//                             `for` is what makes it usable on a screen that
//                             fades in. A fade passes through every value on
//                             its way up, so a bare threshold can be met by a
//                             frame of the transition and answered half a
//                             second before the screen will take a click.
//                             Requiring the claim to hold rejects those.
//   expect textures>0         checked at the end; a run fails on any unmet one
//   expect scene_nonblack>0.3
//   quit                      ask the guest to close, as the window would
//
// THE DISPLAY VERBS
//
// These five exist for the display and performance work, where what has to be
// checked is what the composited picture looks like at a resolution the guest
// itself chose. They parse here; their executors live in the smoke host.
//
//   mode 800 600 16          ask the GAME to select this display mode, by
//                             driving its own options screen, and fail the run
//                             if it has not taken effect within the timeout.
//                             Not a host-side resize: the game recreates its
//                             surfaces itself, and a shim that resized them
//                             underneath it would be testing something the
//                             game never does. The depth is 8 or 16, the two
//                             pixel formats the DirectDraw shim can describe.
//
//                             It ARMS rather than waits. The game applies a
//                             mode only when a level starts and it recreates
//                             its surfaces: measured, choosing 800 X 600 and
//                             leaving the options screen left the host at
//                             640x480x8, and it stayed there through New Game,
//                             the tutorial prompt and the whole level select.
//                             It changed when the level began, to
//                             "display mode: 800x600 16bpp" with 240436 draws
//                             at it. So a script says `mode` and then goes on
//                             to enter a level, and the run fails at the end
//                             if the mode never arrived - the same shape as an
//                             armed dump that never fired.
//
//                             The offered list comes from RECOMP_DDRAW_MODES,
//                             and a list missing EITHER 640x480x8 or
//                             640x480x16 crashes the game. The front end runs
//                             at 640x480 in both depths and selects them
//                             without asking what is available or checking the
//                             refusal. Keep both in the list, or set the list
//                             at runtime once the game is up, which is what
//                             this verb does.
//   guestclick 320 140 left hold 60
//                             A DELIVERY SEAM, NOT A WAY TO CLICK THINGS in
//                             this game: it places the pointer and Populous
//                             ignores where it is placed, hit-testing instead
//                             against the pointer it integrates from relative
//                             motion. One at New Game's row selected
//                             MULTIPLAYER, the row under the game's own
//                             cursor. Use `click` and the corner pin for
//                             anything that has to hit a particular thing.
//                             This exists for a screen that reads the position
//                             it is given.
//
//                             a press and a release at GUEST coordinates,
//                             `hold` milliseconds apart on the guest's clock,
//                             injected at the input gate's guest side. `click`
//                             goes through the physical mapping and is the
//                             right verb for anything a person would do;
//                             this one is for driving a screen whose layout is
//                             known in guest pixels while the drawable is some
//                             other size entirely.
//   probe 640 360 255 0 0 8   the composited frame at these DRAWABLE
//                             coordinates must be this colour, within the
//                             tolerance per channel that may follow it. A run
//                             fails on a mismatch, and says what it found.
//   dumpc widescreen          write the composited frame as
//                             smoke_widescreen_composite.ppm. `dump` writes
//                             what the guest drew; this writes what a viewer
//                             would have seen.
//   dumpat ref_c840 command_frame>=840
//   dumpat turn>=100 ref_t100  (legacy metric-first form also accepted)
//                             arm a dump at the first completed gameplay
//                             present satisfying the claim, under the baton.
//                             Several command frames may pass per present:
//                             >= records the actual value, never rounds to N.
//                             Provenance records turn AND command_frame plus
//                             present index and clock. Invariance comparisons
//                             require equal actual command frames between arms.
//   landmark 41 expect visible within 5000
//                             the entity with this id must be drawn, or must
//                             not be, within the timeout. This is how a run
//                             says a wider view revealed something rather than
//                             merely that the picture changed.
//
// Blank lines and '#' comments are ignored. Every step happens at the script
// clock's current value, which only `wait` moves, so a script reads as a
// sequence rather than as a set of timestamps to keep consistent.
#pragma once
#include <stdint.h>
#include <stddef.h>
#include <map>

#ifdef __cplusplus
extern "C" {
#endif

enum HostScriptOp {
    HOST_SCRIPT_WAIT = 0,
    HOST_SCRIPT_MOVE,
    HOST_SCRIPT_MOVEBY,
    HOST_SCRIPT_CLICK,
    HOST_SCRIPT_TAP,
    HOST_SCRIPT_TAP_DRAWABLE,
    HOST_SCRIPT_BUTTON, // press or release a mouse button where the pointer is
    HOST_SCRIPT_KEY,
    HOST_SCRIPT_DUMP,
    HOST_SCRIPT_EXPECT,
    HOST_SCRIPT_PEEK,
    HOST_SCRIPT_WATCH,
    HOST_SCRIPT_AWAIT,
    HOST_SCRIPT_QUIT,
    HOST_SCRIPT_READFILE,
    // The display verbs. Their executors are the smoke host's; a host that has
    // none of them ignores the step rather than failing to build.
    HOST_SCRIPT_MODE,
    HOST_SCRIPT_GUESTCLICK,
    HOST_SCRIPT_PROBE,
    HOST_SCRIPT_DUMPC,
    HOST_SCRIPT_LANDMARK,
    HOST_SCRIPT_DUMPAT,
    HOST_SCRIPT_SIMDUMP,
    HOST_SCRIPT_VIEWMOVE,    // x relative to projection centre, y viewport-local
    HOST_SCRIPT_VIEWCLICK,   // same coordinates; normal left selection/order
    HOST_SCRIPT_ENTITYCLICK, // entity_id, current-frame draw bounds centre
    HOST_SCRIPT_WORLDCLICK,  // x/y are world x/z; altitude is signed world height
    HOST_SCRIPT_CAMERA,      // deterministic fixture camera x/z, preserving basis
    HOST_SCRIPT_ENTITYMOVE,  // same semantic resolution, motion only
    HOST_SCRIPT_WORLDMOVE,
    HOST_SCRIPT_FOCUS, // down: 1 the window gains focus, 0 it loses it
    HOST_SCRIPT_PAD,   // button: control index; x: button level or axis value
};

struct HostScriptStep {
    int op;
    uint32_t at_ms;   // when it runs, on the script clock
    int32_t x, y;     // move, click
    int32_t button;   // click: 0 left, 1 right, 2 middle
    uint32_t addr;    // peek: guest address
    uint32_t len;     // peek: bytes to read
    int32_t owner;    // watch: the entity's owner byte
    int32_t kind;     // watch: the entity's kind byte
    int32_t down;     // key: 1 down, 0 up
    uint8_t dik;      // key: the DirectInput scan code
    char name[64];    // key name, dump name, expect metric, or guest path
    char text[64];    // readfile: the substring the content must contain
    double threshold; // expect, await: the value to pass
    // `>=` rather than `>`. A turn is a counter and the natural way to wait
    // for one is "at least N"; writing turn>699 to mean turn>=700 is an
    // invitation to an off-by-one in a file nobody re-reads. Amendment 13
    // writes `await turn>=100`, so the parser takes it.
    bool at_least;
    uint32_t timeout_ms; // await, mode, landmark: how long before giving up
    uint32_t hold_ms;    // await: how long the claim must stay true

    // The display verbs. Kept apart from the fields above rather than folded
    // into x and y, because a mode's width read out of a field called x is the
    // kind of saving that costs an afternoon later.
    int32_t w, h, bpp;    // mode: the display mode asked of the game
    int32_t r, g, b;      // probe: the colour the pixel must be, 0..255
    int32_t tol;          // probe: how far off each channel may be
    uint32_t press_ms;    // guestclick: press to release, on the guest clock
    int32_t altitude;     // click world: world height
    int32_t entity_id;    // landmark, click entity: decoded entity id
    int32_t want_visible; // landmark: 1 expects visible, 0 expects hidden
};

// Parses `text` into at most `max` steps. Returns the number parsed, or -1 with
// `error` filled in - which names the line and what was wrong with it, because
// a smoke run that fails to parse its own script should say so in one line.
int host_script_parse(const char *text, struct HostScriptStep *out, int max, char *error,
                      size_t error_len);

// The DirectInput scan code a name stands for, or 0. Only the keys a script has
// any reason to press.
uint8_t host_script_dik(const char *name);

#ifdef __cplusplus
}

// `for <ms>` as a number of presented frames, at a clock step of step_ms.
//
// Pure, and separate from the parser, so the conversion can be asserted
// exactly rather than inferred from a run. step_ms of 0 means nothing is
// pinned, and the nominal 50 is used - the step the parity fixture and the
// default pin both use, and the rate the game believes it runs at - so a
// script holds for the same number of frames pinned or not.
//
// Rounds UP and never returns 0 for a non-zero hold: a hold of one frame is
// the weakest useful claim, and rounding a short hold down to nothing would
// silently restore the defect this replaced.
uint32_t host_script_hold_frames(uint32_t hold_ms, uint32_t step_ms);

// The same conversion for an INPUT hold - a click held down, and later
// guestclick's `hold` - with a floor of four presented frames.
//
// The floor is the point. A click is only seen if the guest polls the device
// while the button is down, and the guest polls once a frame; 120 ms is two
// and a half frames at a 50 ms step, so a click could be delivered and taken
// away between two polls and simply not happen. That is the pinned flake:
// two runs with byte-identical menu frames diverged at the first click, one
// loading the level and the other sitting at turn 0 with no textures. Four
// frames is short enough to stay a click and long enough that no single
// missed poll loses it.
uint32_t host_script_input_hold_frames(uint32_t hold_ms, uint32_t step_ms);

// The completed-present index is published at the same boundary as dumpat.
// One missed BODY capture is allowed; future/in-flight and older records are not.
inline bool host_entity_body_ready(uint32_t completed_present, uint64_t frame,
                                   uint32_t captured_present, bool body_present) {
    return frame && body_present && captured_present <= completed_present &&
           completed_present - captured_present <= 1;
}

struct HostEntityBodyRecord {
    uint64_t frame = 0;
    uint32_t present = 0;
    int32_t x = 0, y = 0;
    bool ready(uint32_t completed_present) const {
        return host_entity_body_ready(completed_present, frame, present, true);
    }
};

// Retain the most recent completed gameplay BODY per entity, including its
// coordinates. A capture with no BODY must not erase the preceding record.
struct HostEntityBodyStore {
    std::map<uint32_t, HostEntityBodyRecord> records;
    HostEntityBodyRecord get(uint32_t id) const {
        auto it = records.find(id);
        return it == records.end() ? HostEntityBodyRecord{} : it->second;
    }
    void record(uint32_t id, const HostEntityBodyRecord &body) {
        if (body.frame)
            records[id] = body;
    }
};

void host_entity_body_diagnostic(char *out, size_t size, int32_t id, uint32_t completed_present,
                                 const HostEntityBodyRecord &body, bool passed);

// Repeated clock reads do not spend the 120-completed-present budget.
enum class HostEntityWaitResult { pending, ready, timed_out };
struct HostEntityWait {
    static constexpr uint32_t max_presents = 120;
    bool active = false;
    uint32_t since_ms = 0, since_present = 0;
    uint64_t last_frame = 0;
    HostEntityWaitResult poll(uint32_t now_ms, uint32_t completed_present, uint64_t frame,
                              uint32_t captured_present, bool body_present);
    void finish(uint32_t now_ms, uint32_t &script_start_ms);
};

// ---------------------------------------------------------------------------
// Whether the scheduler's input drain has work it can finish.
//
// The scheduler drains whenever this says yes and asks again immediately
// afterwards, so a yes the drain cannot consume is a hot spin for as long as
// the condition lasts. The decision is here, out of the host, so a test can
// state each case rather than infer it from a run's CPU time.
// ---------------------------------------------------------------------------
struct HostScriptDrainState {
    int quit_requested;  // the script asked to quit; nothing more is due
    int ticking;         // another thread is already inside the tick
    int holding_button;  // a click is held: 1, else 0
    int hold_reached;    // and its release is owed now
    int guestclick_held; // the same, for a guestclick
    int guestclick_reached;
    int sub_active;    // a recorded path is replaying
    int sub_step_due;  // and its next step is due
    int await_started; // an await is in progress and has not passed
    int script_started;
    int steps_left; // steps not yet run
    int step_due;   // and the next one is due
};

int host_script_drain_wanted(const struct HostScriptDrainState *s);

// Did the run get to the end of its script?
//
// A run that stopped early has not proved what its script says, however many
// expectations it happened to meet on the way: the ones it never reached
// cannot fail, so a truncated run reads as a cleaner one than a complete
// failure does. `abnormal_exit` is the host's own verdict on how the guest
// stopped; the step counts are how far the script got.
int host_script_run_unfinished(int abnormal_exit, int next_step, int step_count);

// Guest globals are authoritative even when the mod runtime is absent. Optional
// game-view readers only cross-check them; a mismatch never replaces the value.
double host_script_counter_metric(const char *name, uint32_t (*guest_u32)(uint32_t),
                                  uint32_t (*view_turn)() = nullptr,
                                  uint32_t (*view_command_frame)() = nullptr);

#endif
