// guest_mem.cpp - the mod heap and the bounds-checked accessors.
//
// THE HEAP IS ITS OWN REGION AND ITS OWN ALLOCATOR. MOD_HEAP_BASE is the gap
// between the game heap's HEAP_LIMIT (0x0e000000) and the guest stack's lower
// limit (0x0ef00000), with a megabyte of guard below the stack. Nothing else
// in the arena is allocated there, so:
//
//   * the game's HeapFree cannot free a mod's block - heap_free does not know
//     the address and refuses it, which is the property the spec asks for and
//     an ownership map alone would not give;
//   * a mod cannot free a game block, because guest_free only knows its own
//     region and its own owner table;
//   * memory is readable by the game, which is the one direction the spec
//     does allow.
//
// BORROWS. A guest address stays valid until the owning mod unloads. A raw
// host pointer from guest_ptr is only a borrow: the host mapping can move, so
// it is valid until the next scheduler yield.
#include "mods_internal.h"
#include "../runtime/memory.h"

#include <map>
#include <string.h>
#include <vector>

namespace {

struct Blk {
    uint32_t size;
    bool used;
    uint32_t owner;
};

// The whole region, and the largest a single allocation may be. A request at
// or above the region size is exhaustion however much happens to be free, and
// refusing it up front is also what keeps the round-up to 16 below from
// wrapping to zero.
const uint32_t kRegion = MOD_HEAP_END - MOD_HEAP_BASE;

// addr -> block. First fit over one contiguous region, coalescing on free:
// the same shape as the game's allocator, deliberately not the same instance.
std::map<uint32_t, Blk> &blocks() {
    static std::map<uint32_t, Blk> m;
    return m;
}
bool g_ready = false;

void ensure() {
    if (g_ready && !blocks().empty())
        return;
    blocks().clear();
    blocks()[MOD_HEAP_BASE] = {kRegion, false, 0};
    g_ready = true;
}

PopModStatus range_ok(uint32_t addr, uint32_t len) {
    return gm_valid(addr, len) ? POP_OK : POP_E_RANGE;
}

} // namespace

PopModStatus mods_guest_alloc(uint32_t owner, uint32_t size, uint32_t *out_addr) {
    if (!out_addr || !size)
        return POP_E_INVAL;
    if (size >= kRegion)
        return POP_E_NOMEM;
    ensure();
    uint32_t need = (size + 15u) & ~15u;
    for (auto it = blocks().begin(); it != blocks().end(); ++it) {
        if (it->second.used || it->second.size < need)
            continue;
        uint32_t addr = it->first, have = it->second.size;
        it->second = {need, true, owner};
        if (have > need)
            blocks()[addr + need] = {have - need, false, 0};
        memset(gm_ptr(addr), 0, need);
        *out_addr = addr;
        return POP_OK;
    }
    return POP_E_NOMEM;
}

PopModStatus mods_guest_free(uint32_t owner, uint32_t addr) {
    ensure();
    auto it = blocks().find(addr);
    if (it == blocks().end() || !it->second.used || it->second.owner != owner)
        return POP_E_STATE; // not a live block of this mod's
    it->second.used = false;
    it->second.owner = 0;
    // Coalesce forward, then backward, so the region does not fragment away.
    auto next = std::next(it);
    if (next != blocks().end() && !next->second.used &&
        next->first == it->first + it->second.size) {
        it->second.size += next->second.size;
        blocks().erase(next);
    }
    if (it != blocks().begin()) {
        auto prev = std::prev(it);
        if (!prev->second.used && prev->first + prev->second.size == it->first) {
            prev->second.size += it->second.size;
            blocks().erase(it);
        }
    }
    return POP_OK;
}

void mods_guest_free_all(uint32_t owner) {
    ensure();
    std::vector<uint32_t> mine;
    for (const auto &kv : blocks())
        if (kv.second.used && kv.second.owner == owner)
            mine.push_back(kv.first);
    for (uint32_t a : mine)
        mods_guest_free(owner, a);
}

uint32_t mods_guest_alloc_count(uint32_t owner) {
    uint32_t n = 0;
    for (const auto &kv : blocks())
        if (kv.second.used && kv.second.owner == owner)
            ++n;
    return n;
}

bool mods_guest_owns(uint32_t addr) {
    auto it = blocks().find(addr);
    return it != blocks().end() && it->second.used;
}

// Populate the mod API with validated guest-memory access and symbol lookup functions.
// Guest addresses remain 32-bit offsets; callers receive host pointers only after range checks.
void mods_fill_memory_api(PopModApi *api) {
    api->guest_ptr = [](const PopModApi *, uint32_t a, uint32_t len, void **out) {
        if (!out)
            return (PopModStatus)POP_E_INVAL;
        PopModStatus s = range_ok(a, len);
        if (s != POP_OK)
            return s;
        *out = gm_ptr(a);
        return (PopModStatus)POP_OK;
    };
    api->guest_read_u8 = [](const PopModApi *, uint32_t a, uint8_t *v) {
        PopModStatus s = range_ok(a, 1);
        if (s != POP_OK)
            return s;
        *v = rd8(a);
        return (PopModStatus)POP_OK;
    };
    api->guest_read_u16 = [](const PopModApi *, uint32_t a, uint16_t *v) {
        PopModStatus s = range_ok(a, 2);
        if (s != POP_OK)
            return s;
        *v = rd16(a);
        return (PopModStatus)POP_OK;
    };
    api->guest_read_u32 = [](const PopModApi *, uint32_t a, uint32_t *v) {
        PopModStatus s = range_ok(a, 4);
        if (s != POP_OK)
            return s;
        *v = rd32(a);
        return (PopModStatus)POP_OK;
    };
    api->guest_write_u8 = [](const PopModApi *, uint32_t a, uint8_t v) {
        PopModStatus s = range_ok(a, 1);
        if (s != POP_OK)
            return s;
        wr8(a, v);
        return (PopModStatus)POP_OK;
    };
    api->guest_write_u16 = [](const PopModApi *, uint32_t a, uint16_t v) {
        PopModStatus s = range_ok(a, 2);
        if (s != POP_OK)
            return s;
        wr16(a, v);
        return (PopModStatus)POP_OK;
    };
    api->guest_write_u32 = [](const PopModApi *, uint32_t a, uint32_t v) {
        PopModStatus s = range_ok(a, 4);
        if (s != POP_OK)
            return s;
        wr32(a, v);
        return (PopModStatus)POP_OK;
    };
    api->guest_alloc = [](const PopModApi *a, uint32_t size, uint32_t *out) {
        return mods_guest_alloc(a->mod_index, size, out);
    };
    api->guest_free = [](const PopModApi *a, uint32_t addr) {
        return mods_guest_free(a->mod_index, addr);
    };
    api->symbol = [](const PopModApi *, const char *name, uint32_t *out) {
        return mods_symbol(name, out);
    };
    api->symbols_matching = [](const PopModApi *, const char *prefix, uint32_t *out, uint32_t cap,
                               uint32_t *count) {
        return mods_symbols_matching(prefix, out, cap, count);
    };
}
