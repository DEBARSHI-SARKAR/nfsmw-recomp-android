// page_track.h - first-touch read/write tracking over the guest arena.
//
// Used only by the capture harness, and only under POPM_TESTING: it makes the
// whole guest arena inaccessible and lets a fault handler grant access one
// page at a time, recording what each page was first touched for and what it
// held before the candidate ran.
//
// WHY PROT_NONE AND NOT READ-ONLY. Read-only pages fault on write but not on
// read, so a read set cannot be discovered that way at all. Making every page
// inaccessible means the first access of either kind faults, and the fault
// tells us which it was.
//
// WHAT IS AND IS NOT ATTRIBUTED. The first touch of a page is attributed
// exactly. A page granted read access faults again on a later write and that
// write is attributed too. A page already granted read-write is not tracked
// further, which is why the replay compares whole written pages byte for byte
// rather than trusting a per-access record.
#pragma once
#include <stddef.h>
#include <stdint.h>

namespace pop_pagetrack {

struct Touch {
    uint32_t address = 0;           // guest address of the page, page-aligned
    bool read = false;              // was ever read
    bool written = false;           // was ever written
    const uint8_t *entry = nullptr; // its contents before the candidate ran
};

// True when tracking is possible here: POPM_TESTING is set, the arena exists,
// and nothing else is already tracking. Every page becomes inaccessible.
bool begin(size_t max_pages);

// Restores the arena and the previous handlers. `out` is filled with one entry
// per touched page, in address order; `entry` points into storage that stays
// valid until the next begin(). Returns false when the capture was rejected -
// more pages than the bound, or a fault the tracker could not attribute - and
// `why` says which.
bool end(const Touch **out, size_t *count, const char **why);

// Whether tracking is active on this process right now.
bool active();

// The host page size the tracker works in.
size_t page_size();

#ifdef POPM_TESTING
// Test callback runs in the fault handler and must itself be signal-safe.
void test_before_snapshot(void (*hook)(size_t));
#endif

} // namespace pop_pagetrack
