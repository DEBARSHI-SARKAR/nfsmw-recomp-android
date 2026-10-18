// Differential replay of a captured guest function.
//
// Acquisition is mods/native/page_track.{h,cpp} and shim_capture.{h,cpp};
// the corpus those write is loaded back by load() below. run() replays a
// candidate against it, and translated() gives the candidate that runs the
// original guest function through the dispatch table, with the recorded shim
// calls served in place of the real ones.
#pragma once
#include "../pop_mod_api.h"
#include <cstdint>
#include <functional>
#include <string>
#include <vector>

namespace pop_replay {
constexpr size_t max_pages = 4096, max_calls = 10000;
// Bits here correspond to CF,ZF,SF,OF,PF,AF, in that order. DF/FPU always live.
struct Page {
    uint32_t address = 0;
    bool read = false, written = false;
    std::vector<uint8_t> entry, exit;
};
struct Call {
    std::string function;
    std::vector<uint64_t> arguments;
    uint64_t result = 0;
    bool side_effecting = true; // Unclassified seams must be rejected.
};
struct Capture {
    uint32_t arena_size = 0, page_size = 0, live_flags = 0;
    pop_cpu_v1 entry{}, exit{};
    std::vector<Page> pages;
    std::vector<Call> calls;
};
class Seams {
  public:
    explicit Seams(const std::vector<Call> &record) : record_(record) {}
    uint64_t call(const std::string &, const std::vector<uint64_t> &, bool side_effecting = true);
    void finish() const;

  private:
    const std::vector<Call> &record_;
    size_t position_ = 0;
    bool failed_ = false;
};
using Candidate = std::function<void(pop_cpu_v1 &, uint8_t *, size_t, Seams &)>;
// Returns empty on success, otherwise the first diagnostic. Fresh zero-filled
// arena per call; compares all recorded pages, including read-only pages.
// This is not a sandbox: an uninstrumented candidate can escape this buffer.
std::string validate(const Capture &);
std::string run(const Capture &, const Candidate &);

// Reads a corpus written by pop_capture_write (mods/capture_seam.cpp).
// Returns the reason on failure and leaves `out` untouched; empty on success.
// Applies validate()'s rules, so a corpus that would be rejected at replay is
// rejected here, at the point where the file can be named.
std::string load(const std::string &path, Capture *out);

// The original guest function at `target`, run through the dispatch table.
//
// Shim calls it makes are intercepted at imports_dispatch and served from the
// record: the shim itself never runs, so replaying a capture cannot touch the
// world a second time. A call the record does not have, or has in another
// order, fails the replay rather than falling through to the real shim.
//
// Not reentrant and not thread safe: it installs a process-wide observer and
// swaps the guest arena pointer for the length of the call. One replay at a
// time, on the thread that owns the guest.
Candidate translated(uint32_t target);

// Serves recorded shim calls at imports_dispatch for as long as it exists.
//
// translated() is built on this, and so is any other candidate that reaches
// the dispatcher: a native replacement under test makes its shim calls the
// same way the original did, and must be judged against the same record.
// While one exists the dispatcher does not run shims at all - it takes the
// result from the record - so replaying a capture cannot touch the world a
// second time.
//
// A call the record does not have, or has in another order, does not throw
// through the generated code, which is not safe to unwind. It is remembered
// and raised by failed(), which the candidate calls after the guest returns.
class ServeRecordedShims {
  public:
    explicit ServeRecordedShims(Seams &record);
    ~ServeRecordedShims();
    ServeRecordedShims(const ServeRecordedShims &) = delete;
    ServeRecordedShims &operator=(const ServeRecordedShims &) = delete;
    // Empty while the sequence still matches; otherwise the first mismatch.
    const std::string &failed() const;
    size_t served() const;
};
} // namespace pop_replay
