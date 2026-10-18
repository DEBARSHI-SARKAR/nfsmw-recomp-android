// memory.h - guest arena and the guest heap allocator.
#pragma once
#include "guest.h"

// Maps (or re-maps) the 256 MB guest arena at g_mem, zero filled, and resets
// the heap free list. Safe to call repeatedly; each call discards all guest
// state. Aborts on failure.
void mem_init();
void mem_shutdown();

// First-fit free-list allocator over HEAP_BASE..HEAP_LIMIT.
// Returns a guest address, or 0 on failure. Sizes are rounded up to a multiple
// of 16 and every block is at least 16-byte aligned; `align` may request more
// (VirtualAlloc uses 4096). `zero` clears the usable bytes.
uint32_t heap_alloc(uint32_t size, bool zero = false, uint32_t align = 16);
// Grows or shrinks in place when possible, otherwise allocates and copies.
// Returns the new address or 0 (in which case the old block is untouched).
uint32_t heap_realloc(uint32_t addr, uint32_t new_size, bool zero = false);
bool heap_free(uint32_t addr);
// Requested (not rounded) size of a live block, or 0xffffffff if `addr` is not
// the start of a live allocation.
uint32_t heap_size(uint32_t addr);
bool heap_owns(uint32_t addr);

struct HeapStats {
    uint32_t used_blocks;
    uint32_t free_blocks;
    uint64_t used_bytes; // rounded block sizes
    uint64_t req_bytes;  // bytes actually requested by the guest
    uint64_t free_bytes;
    uint32_t largest_free;
    uint64_t total_allocs;
    uint64_t total_frees;
};
HeapStats heap_stats();
// Walks the block list and returns an error string, or "" when consistent.
std::string heap_check();
