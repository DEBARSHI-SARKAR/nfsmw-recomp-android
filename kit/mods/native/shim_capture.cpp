#include "shim_capture.h"
#include "replay.h"
#include "../../runtime/imports.h"
#include <cstdlib>
#include <cstring>
#include "../../platform/os.h"

namespace pop_shimcap {
namespace {

// The allowlist. Every entry is a seam whose whole observable effect is its
// return value: it reads a clock or a status word and touches nothing else.
// Deliberately short. A seam belongs here only once someone has read its
// implementation and can say it writes no file, queues no sound, consumes no
// input, allocates nothing, and changes no shim state.
//
// Time queries are not deterministic, which is fine: replay feeds back the
// value that was recorded, so the candidate sees exactly what the original
// saw. Non-determinism would only matter if we compared two live runs, and we
// do not.
//
// Every entry takes no arguments and returns everything it produces in EAX.
// That is not a coincidence and it is the second condition for the list. A
// seam that reports its answer through a caller-supplied pointer, such as
// QueryPerformanceCounter, cannot be replayed from a recorded scalar: replay
// would hand back the return value and leave the buffer unwritten, so the page
// comparison would fail for a reason that has nothing to do with the
// candidate. Such a seam is kept off the list rather than allowed to produce a
// misleading failure.
const char *const kPure[] = {
    "KERNEL32.dll!GetTickCount",       "KERNEL32.dll!GetLastError",
    "KERNEL32.dll!GetCurrentThreadId", "KERNEL32.dll!GetCurrentProcessId",
    "WINMM.dll!timeGetTime",
};

struct State {
    bool open = false;
    bool rejected = false;
    const char *why = nullptr;
    size_t limit = 0;
    std::vector<Call> calls;
    // Filled by the call observer, completed by the return observer. A shim
    // can call back into the guest, which re-enters the dispatcher, so this is
    // a stack and not a single slot.
    std::vector<size_t> in_flight;
};

// The observer slot this one displaced. NOT thread-local, because the slot it
// stands in for is not: while a window is open on one thread, a shim
// dispatched on any other thread reaches on_return too, and if the observer to
// chain to were thread-local that thread would find nothing there and the
// runtime's failure reporting would go silent for the length of the capture.
ImportReturnObserver g_chained = nullptr;

// Pushed for a call the observer refused, so on_return has something to pop.
// The dispatcher calls the return observer whether or not the shim ran, so a
// refusal that pushed nothing would make the next return pop the frame of an
// OUTER call still in flight and write the refused call's result into it.
const size_t kRefused = (size_t)-1;

// Thread-local: a capture window belongs to the thread running the candidate,
// and the cooperative scheduler can have another guest thread in a shim at the
// same time. Its calls are not this candidate's and must not be recorded.
thread_local State g_state;

void reject(const char *why) {
    if (!g_state.rejected) {
        g_state.rejected = true;
        g_state.why = why;
    }
}

bool on_call(const char *desc, const uint32_t *args, uint32_t argc, uint32_t *result) {
    if (!g_state.open)
        return true;
    if (g_state.rejected) {
        *result = 0;
        g_state.in_flight.push_back(kRefused);
        return false;
    }
    if (!is_pure(desc)) {
        reject("side-effecting or unclassified seam");
        *result = 0;
        g_state.in_flight.push_back(kRefused);
        return false; // do not let it run from inside a capture window
    }
    if (g_state.calls.size() >= g_state.limit) {
        reject("capture exceeds its shim call bound");
        *result = 0;
        g_state.in_flight.push_back(kRefused);
        return false;
    }
    Call c;
    c.function = desc ? desc : "";
    c.arguments.assign(args, args + argc);
    g_state.calls.push_back(std::move(c));
    g_state.in_flight.push_back(g_state.calls.size() - 1);
    return true;
}

void on_return(const char *desc, uint32_t eax) {
    if (g_state.open && !g_state.in_flight.empty()) {
        const size_t slot = g_state.in_flight.back();
        g_state.in_flight.pop_back();
        if (slot != kRefused)
            g_state.calls[slot].result = eax;
    }
    // The observer this one displaced still reports failures while a capture
    // is open; a capture must not make the rest of the runtime go quiet.
    if (g_chained)
        g_chained(desc, eax);
}

} // namespace

bool is_pure(const char *function) {
    if (!function)
        return false;
    for (const char *p : kPure)
        if (!std::strcmp(p, function))
            return true;
    return false;
}

bool active() {
    return g_state.open;
}

bool begin(size_t max_calls) {
    if (g_state.open)
        return false;
    if (!max_calls || max_calls > pop_replay::max_calls)
        return false;
    if (!recomp_env("TESTING"))
        return false;
    g_state.rejected = false;
    g_state.why = nullptr;
    g_state.limit = max_calls;
    g_state.calls.clear();
    g_state.in_flight.clear();
    g_chained = imports_set_return_observer_get();
    imports_set_return_observer(on_return);
    imports_set_call_observer(on_call);
    g_state.open = true;
    return true;
}

bool end(const Call **out, size_t *count, const char **why) {
    if (!g_state.open) {
        if (why)
            *why = "no capture window is open";
        return false;
    }
    g_state.open = false;
    imports_set_call_observer(nullptr);
    imports_set_return_observer(g_chained);
    g_chained = nullptr;
    if (!g_state.in_flight.empty())
        reject("a shim call did not return inside the window");
    if (g_state.rejected) {
        if (why)
            *why = g_state.why;
        return false;
    }
    if (out)
        *out = g_state.calls.data();
    if (count)
        *count = g_state.calls.size();
    return true;
}

} // namespace pop_shimcap
