// Recording the shim calls a candidate function makes, so a native
// replacement can be replayed against the same sequence.
//
// The brief's rule: every shim call the candidate makes goes through the
// runtime's seam table, which in isolation mode logs (function, arguments,
// result) and, if the seam is marked side-effecting, aborts the capture and
// rejects the candidate.
//
// "Marked side-effecting" is read here in the only safe direction. The
// catalogue is an allowlist of seams known to be pure queries; anything not on
// it is side-effecting, including seams nobody has classified yet and seams
// that do not exist yet. A wrong entry on the allowlist replays a call that
// really did something to the world; a missing entry only refuses to replace a
// function. Those are not comparable costs, so the default is refusal, which
// is also what pop_replay::Call::side_effecting = true already states.
//
// Rejection stops the call as well as the capture. Once a candidate has been
// found unreplayable there is no reason to let the side-effecting call it was
// making reach the world from inside a capture window, so the dispatcher is
// told to skip the shim and the window is closed.
#pragma once
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace pop_shimcap {

struct Call {
    std::string function;
    std::vector<uint32_t> arguments; // stdcall arguments, entry order
    uint32_t result = 0;             // EAX after the shim returned
};

// True if the named seam is a pure query and may be recorded and replayed.
// Everything else, including every name this build has never heard of, is
// side-effecting.
bool is_pure(const char *function);

// Opens a capture window on this thread. Requires POPM_TESTING. Fails if a
// window is already open or if max_calls exceeds pop_replay::max_calls.
bool begin(size_t max_calls);

// Closes the window. Returns true and the recorded calls when the window was
// clean; false with *why set when it was rejected, which happens on a
// side-effecting seam, on an unclassified seam, or on exceeding max_calls.
bool end(const Call **out, size_t *count, const char **why);

bool active();

} // namespace pop_shimcap
