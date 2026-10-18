// boot.h - the boot sequence every host of the recompiled game shares.
//
// Two programs run the same guest: build/recomp/pop_headless writes frames to
// files, build/PopRecomp.app puts them on a screen. Everything between
// mem_init() and the guest's main loop is identical in both, so it lives here
// and neither one repeats it:
//
//   mem_init -> loader_load -> dx_register_shims -> loader_init_context
//   -> the host heartbeat on the guest's clock  -> run_entry
//
// A host supplies only what makes it that host: a `tick` called about once a
// millisecond from inside guest code, and a `report` that prints its own run
// summary. Everything else - activation, the close, the unwind, the watchdog,
// the fault handler - is the same problem with the same answer in both.
//
// Ownership: the guest runs on the thread that calls boot_run(). The unwind
// landing pad is on that thread's stack, so only that thread may take it; a
// cooperative guest thread that reaches a deadline leaves the unwinding to it.
#pragma once
#include <stdint.h>
#include <stdio.h>

struct BootOptions {
    // Image to load. Null means RECOMP_EXE, then the loader's default.
    const char *exe = nullptr;
    // Name used in the run header, e.g. "headless" -> "== headless run ==".
    const char *name = "host";

    // Synthesise the activation a window manager sends to a window that has
    // just been shown and holds the focus (WM_ACTIVATEAPP / WM_ACTIVATE /
    // WM_SETFOCUS / WM_PAINT). The game's WNDPROC at 004b0870 reads
    // WM_ACTIVATEAPP's wParam into the flag 004b2670 returns, and main_3
    // calls update_screen() only when that flag is set: without it the game
    // runs and draws and never presents. A host that delivers real activation
    // events itself turns this off.
    bool activate = true;

    // Report a SIGSEGV/SIGBUS/SIGABRT inside guest code with the guest EIP and
    // ESP rather than letting the process die without saying where.
    bool signal_handlers = true;

    // Load mods/ after the guest image is mapped and before the entry point.
    // A host sets this false, or the environment sets RECOMP_NO_MODS=1, to run
    // exactly as the game ran before the foundation existed - which is what
    // parity Gate A does.
    bool load_mods = true;

    // An absolute run deadline in seconds, 0 for none. The host is told
    // through `tick`; boot does not post the close itself, because only the
    // host knows whether it also has a frame cap or a window to close.
    double deadline_seconds = 0.0;
    // The watchdog thread ends the process this long after `deadline_seconds`.
    double deadline_grace = 30.0;
    // After a close request, unwind out of guest code this many seconds later.
    double close_unwind_grace = 15.0;
    // After a close request, let the watchdog end the process this many
    // seconds later. 0 disables that, which is what a run with an absolute
    // deadline wants: the deadline already covers it.
    double close_watchdog_grace = 0.0;

    // Called from the guest's own clock reads, at most once per millisecond
    // and never re-entrantly. This is where a host pumps its event loop,
    // presents, and decides whether to ask the guest to close.
    //
    // It can arrive on ANY guest thread. The runtime's cooperative scheduler
    // hands the baton around a set of real pthreads, and a worker holding it
    // reads the clock exactly as the main one does. A host whose work belongs
    // to one particular thread - anything touching AppKit does - must ask
    // boot_on_run_thread() and do nothing when the answer is no.
    void (*tick)() = nullptr;

    // Called on the run thread when the guest is about to block - a Sleep, or
    // a wait on something nothing has signalled yet - with how long it may
    // take, in seconds. A windowed host services its event loop for that long
    // and returns 1 as soon as input arrived, so the guest can re-check its own
    // condition at once rather than waiting out the slice. Without one the
    // runtime waits on its own condition variable, which is exactly right when
    // there is no host to service.
    int (*idle_wait)(double seconds) = nullptr;

    // Prints the host's run summary. Called by the host itself on a normal
    // return, and by boot when the watchdog or a fault ends the run, so a run
    // always reports. `abnormal` is true on those two paths.
    void (*report)(FILE *out, bool abnormal) = nullptr;
};

// mem_init, loader_load, dx_register_shims, the time source, the message
// waiter and loader_init_context. False means the image did not load;
// loader_error() says why. Must be called before boot_run().
bool boot_load(const BootOptions &opts);

// Installs the signal handlers, starts the watchdog, and runs the guest from
// its PE entry point. Returns when the guest returns, when it calls
// ExitProcess, or when the host unwinds out of it.
void boot_run();

// Seconds since boot_run() armed the clock.
double boot_elapsed();
// The host's own monotonic millisecond clock. host_millis() is not usable
// from a tick: it dispatches to the time source, which is what called it.
uint32_t boot_millis();

// The clock the GUEST sees. It is boot_millis() unless RECOMP_PIN_CLOCK
// pinned it, in which case it is the pinned counter instead. A host that times
// its own actions against the game's behaviour - the smoke script does - has
// to use this one: on a pinned run the wall clock and the guest's clock are no
// longer the same thing, and a script timed by the wall would put its clicks
// at a different point of the game every run, which is the whole of what the
// pin exists to stop.
uint32_t boot_guest_millis();
// Move a pinned clock on by one step. The host calls this exactly once per
// presented frame; nothing else calls it, and on an unpinned run it does
// nothing. See the comment on the pin in boot.cpp for why a frame is the unit.
void boot_clock_advance();
// The guest asked the host something whose answer depends on time. The clock
// reads go through here already; a host that models anything else on time - a
// play cursor, a video position - must call it too, or a guest waiting on that
// model can stop the pinned clock it is waiting for. Does nothing on an
// unpinned run. See the stall breaker in boot.cpp.
void boot_clock_poll();

// Refresh a static GDI phase on the virtual display's 60 Hz clock. Call under
// the guest baton from a host tick. Primary presents take over that cadence;
// an idle primary remains the base when window refreshes resume.
void boot_present_windows();
void boot_note_primary_present();

// Whether this run's guest clock is pinned, for a host that wants to say so.
bool boot_clock_pinned();
// How many times a run of clock reads with no frame between them had to move a
// pinned clock instead of a frame. Zero means every step came from a frame,
// which is what ordinary play looks like; a non-zero count is the guest
// waiting on something without drawing, which is a fact about the game worth
// having in the report rather than a fault.
uint32_t boot_clock_stalls();

// Post WM_CLOSE to the main window, once. That is what closing the window
// does, and it lets the game shut itself down through its own exit path.
// `reason` becomes the stop reason unless one is already set.
void boot_request_close(const char *reason);
bool boot_close_requested();

// Why the run stopped, for the host's report.
const char *boot_stop_reason();
void boot_set_stop_reason(const char *reason);
// True when the host had to unwind out of guest code rather than the guest
// ending the run itself.
bool boot_forced_stop();

// True when the run did not end the way the host asked: a forced unwind, or
// the guest exiting with a non-zero code. A host turns this into its exit
// status so a script can tell a completed run from a rescued one.
bool boot_abnormal_exit();

// ---------------------------------------------------------------------------
// A host's run bookkeeping is written by the guest thread and read by the
// watchdog thread, so a report printed from the watchdog would otherwise race
// a half-updated counter or a container mid-push. A host takes this around
// both, and the watchdog takes it with a bound so reporting can never hang
// instead of ending the process.
// ---------------------------------------------------------------------------
void boot_report_lock();
void boot_report_unlock();
// Tries for `seconds`; false means the lock was not taken and the caller must
// not read the bookkeeping. The watchdog is the only caller.
bool boot_report_trylock_for(double seconds);
// True once the synthesised activation has been posted.
bool boot_activated();

// True when the caller is running on the thread that called boot_run(). The
// cooperative scheduler runs guest threads on real pthreads, so a tick can
// arrive on any of them; this is the only way to tell.
bool boot_on_run_thread();

// Report fragments every host prints the same way. A host calls these from
// its own `report` so it keeps control of the order.
void boot_print_exit_code(FILE *out);     // guest exit code, if it exited
void boot_print_dx_objects(FILE *out);    // the live DirectX inventory
void boot_print_undeliverable(FILE *out); // calls recomp_call could not place
void boot_print_import_stats(FILE *out, bool abnormal);
