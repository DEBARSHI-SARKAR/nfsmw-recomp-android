// memory_symbols_tests.cpp - the independent mod heap and the symbol namespace.
#include "mods_tests.h"
#include "../mods_internal.h"
#include "../../runtime/imports.h"
#include "../../runtime/loader.h"
#include "../../runtime/memory.h"

#include <stdlib.h>

namespace {
PopModApi g_api;
void setup() {
    mem_init();
    loader_load(nullptr);
    MOD_CHECK(mods_symbols_load(nullptr));
    memset(&g_api, 0, sizeof g_api);
    g_api.version = POP_MOD_API_VERSION;
    g_api.size = (uint32_t)sizeof(PopModApi);
    g_api.mod_index = 3;
    g_api.mod_id = "test.mem";
    mods_fill_memory_api(&g_api);
}
} // namespace

MOD_TEST_SUITE(symbols_verify_the_image) {
    mem_init();
    loader_load(nullptr);
    MOD_CHECK(mods_symbols_load(nullptr));
    MOD_CHECK_STR(mods_symbols_exe_sha256(), loader_exe_sha256());

    // A symbols file whose digest does not match the mapped image is refused:
    // every address in it means something only for that build.
    const std::string recomp = mods_test_build_path("recomp");
    system(("mkdir -p " + recomp +
            "/symbols-test && "
            "sed 's/\"exe_sha256\": \"[0-9a-f]\\{8\\}/\"exe_sha256\": \"deadbeef/' " +
            recomp +
            "/symbols.json "
            "> " +
            recomp + "/symbols-test/wrong.json")
               .c_str());
    MOD_CHECK(!mods_symbols_load(mods_test_build_path("recomp/symbols-test/wrong.json").c_str()));
    MOD_CHECK(strstr(mods_symbols_error(), "does not match") != nullptr);
    MOD_CHECK(mods_symbols_load(nullptr)); // and the good one reloads
}

MOD_TEST_SUITE(symbols_one_namespace) {
    setup();
    uint32_t addr = 0;
    MOD_CHECK_EQ(mods_symbol("main_loop_inner", &addr), POP_OK);
    MOD_CHECK_EQ(addr, 0x004ec6f0u);
    MOD_CHECK_EQ(mods_symbol("load_objs", &addr), POP_OK);
    MOD_CHECK_EQ(addr, 0x0040c690u);
    // A curated alias resolves; the functions.tsv name stays primary.
    MOD_CHECK_EQ(mods_symbol("scheduler_turn", &addr), POP_OK);
    MOD_CHECK_EQ(addr, 0x004ec6f0u);
    // Globals live in the same namespace, so a mod does not need to know
    // whether a name is code or data.
    MOD_CHECK_EQ(mods_symbol("entity_base", &addr), POP_OK);
    MOD_CHECK_EQ(addr, 0x008e0428u);
    MOD_CHECK_EQ(mods_symbol("pause_flags", &addr), POP_OK);
    MOD_CHECK_EQ(addr, 0x0089c661u);
    MOD_CHECK_EQ(mods_symbol("no_such_thing", &addr), POP_E_NOSYMBOL);

    // Prefix search covers functions, aliases and globals, in address order,
    // with no duplicates.
    uint32_t addrs[64] = {0}, count = 0;
    MOD_CHECK_EQ(mods_symbols_matching("main_loop", addrs, 64, &count), POP_OK);
    MOD_CHECK(count >= 2);
    for (uint32_t i = 1; i < count && i < 64; ++i)
        MOD_CHECK(addrs[i - 1] < addrs[i]);
    uint32_t g_count = 0;
    MOD_CHECK_EQ(mods_symbols_matching("entity_", nullptr, 0, &g_count), POP_OK);
    MOD_CHECK(g_count >= 1);
    // A cap smaller than the match count fills what it can and still reports
    // the total, so a caller can size a buffer and ask again.
    uint32_t one = 0, total = 0;
    MOD_CHECK_EQ(mods_symbols_matching("main_loop", &one, 1, &total), POP_OK);
    MOD_CHECK_EQ(total, count);
    MOD_CHECK_EQ(one, addrs[0]);

    // Eligibility, straight from the file.
    MOD_CHECK(mods_symbol_hookable(0x004ec6f0u));
    MOD_CHECK(mods_symbol_hookable(0x0040c690u));
    MOD_CHECK(!mods_symbol_hookable(0x0055db78u)); // an intrinsic
    MOD_CHECK(!mods_symbol_hookable(0x004ec6f3u)); // mid-instruction
    MOD_CHECK_STR(mods_symbol_kind(0x004ec6f0u), "entry");
    MOD_CHECK_STR(mods_symbol_kind(0x0055db78u), "intrinsic");
}

MOD_TEST_SUITE(guest_memory_bounds) {
    setup();
    uint32_t v32 = 0;
    MOD_CHECK_EQ(g_api.guest_write_u32(&g_api, 0x0089d188u, 0xabcd1234u), POP_OK);
    MOD_CHECK_EQ(g_api.guest_read_u32(&g_api, 0x0089d188u, &v32), POP_OK);
    MOD_CHECK_EQ(v32, 0xabcd1234u);
    uint16_t v16 = 0;
    uint8_t v8 = 0;
    MOD_CHECK_EQ(g_api.guest_write_u16(&g_api, 0x0089d18cu, 0x4321u), POP_OK);
    MOD_CHECK_EQ(g_api.guest_read_u16(&g_api, 0x0089d18cu, &v16), POP_OK);
    MOD_CHECK_EQ(v16, 0x4321u);
    MOD_CHECK_EQ(g_api.guest_write_u8(&g_api, 0x0089c661u, 0x02u), POP_OK);
    MOD_CHECK_EQ(g_api.guest_read_u8(&g_api, 0x0089c661u, &v8), POP_OK);
    MOD_CHECK_EQ(v8, 0x02u);

    MOD_CHECK_EQ(g_api.guest_read_u32(&g_api, GUEST_SIZE - 2u, &v32), POP_E_RANGE);
    void *p = nullptr;
    MOD_CHECK_EQ(g_api.guest_ptr(&g_api, GUEST_SIZE - 8u, 16u, &p), POP_E_RANGE);
    MOD_CHECK_EQ(g_api.guest_ptr(&g_api, 0x0089d188u, 4u, &p), POP_OK);
    MOD_CHECK(p == gm_ptr(0x0089d188u));
}

MOD_TEST_SUITE(mod_heap_is_separate_from_the_game_heap) {
    setup();
    uint32_t a = 0, b = 0;
    MOD_CHECK_EQ(g_api.guest_alloc(&g_api, 256u, &a), POP_OK);
    // It is in the mod region, not in the game's heap arena.
    MOD_CHECK(a >= MOD_HEAP_BASE && a < MOD_HEAP_END);
    MOD_CHECK(a < HEAP_BASE || a >= HEAP_LIMIT);
    MOD_CHECK(mods_guest_owns(a));
    uint32_t v = 0;
    MOD_CHECK_EQ(g_api.guest_read_u32(&g_api, a, &v), POP_OK);
    MOD_CHECK_EQ(v, 0u); // allocations are zeroed

    // The GAME cannot free it: heap_free is the game's allocator and this
    // address is not one of its blocks.
    MOD_CHECK(!heap_owns(a));
    MOD_CHECK(!heap_free(a));
    MOD_CHECK(mods_guest_owns(a)); // still the mod's, still live

    // And the mod cannot free game-owned memory.
    uint32_t game_block = heap_alloc(64, true);
    MOD_CHECK(game_block != 0);
    MOD_CHECK_EQ(mods_guest_free(3, game_block), POP_E_STATE);
    MOD_CHECK(heap_owns(game_block));

    // One allocator per owner: another mod's block is not this mod's to free.
    MOD_CHECK_EQ(mods_guest_alloc(9u, 64u, &b), POP_OK);
    MOD_CHECK_EQ(mods_guest_free(3u, b), POP_E_STATE);
    MOD_CHECK_EQ(mods_guest_free(9u, b), POP_OK);
    MOD_CHECK_EQ(mods_guest_free(9u, b), POP_E_STATE); // no double free

    // Rollback frees everything a failed init allocated.
    uint32_t c = 0;
    MOD_CHECK_EQ(mods_guest_alloc(3u, 128u, &c), POP_OK);
    MOD_CHECK_EQ(mods_guest_alloc_count(3u), 2u);
    mods_guest_free_all(3u);
    MOD_CHECK_EQ(mods_guest_alloc_count(3u), 0u);
    MOD_CHECK(!mods_guest_owns(c));

    // Exhaustion is reported, not wrapped around.
    uint32_t huge = 0;
    MOD_CHECK_EQ(mods_guest_alloc(3u, MOD_HEAP_END - MOD_HEAP_BASE, &huge), POP_E_NOMEM);
}
