// game_view_tests.cpp - the immutable per-callback snapshot, checked against
// the codec the rest of the repository decodes entities with and against a
// recorded parity snapshot, so layout drift fails a test and not a mod's read.
#include "mods_tests.h"
#include "../mods_internal.h"
#include "../../runtime/loader.h"
#include "../../runtime/memory.h"
#include "tests/entity_codec.hpp" // the game's, from RECOMP_GAME_DIR

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "../../platform/os.h"

namespace {

// The parity fixture's own snapshot of the writable image, which is where the
// entity pool and the tribe records live. Produced by
// `.venv/bin/python tools/test.py --mods` in a fresh isolated fixture run.
const char *SNAPSHOT = "build/recomp/parity/native/frame32._data_00598000.bin";
const uint32_t SNAPSHOT_BASE = 0x00598000u;

bool load_snapshot() {
    const char *path = recomp_env("TEST_GAME_VIEW_SNAPSHOT");
    FILE *f = fopen(path && *path ? path : SNAPSHOT, "rb");
    if (!f)
        return false;
    std::vector<unsigned char> bytes;
    char buf[65536];
    size_t n;
    while ((n = fread(buf, 1, sizeof buf, f)) > 0)
        bytes.insert(bytes.end(), buf, buf + n);
    fclose(f);
    for (size_t i = 0; i < bytes.size(); ++i)
        wr8(SNAPSHOT_BASE + (uint32_t)i, bytes[i]);
    return true;
}

void setup() {
    mem_init();
    loader_load(nullptr);
    MOD_CHECK(mods_symbols_load(nullptr));
}

} // namespace

MOD_TEST_SUITE(game_view_decodes_recorded_entities) {
    setup();
    MOD_CHECK(load_snapshot()); // a missing snapshot fails the gate
    mods_view_push();

    uint32_t base = mods_symbol_global("entity_base");
    uint32_t stride = mods_symbol_global_stride("entity_base");
    MOD_CHECK_EQ(base, 0x008e0428u);
    MOD_CHECK_EQ(stride, 179u);

    // The recording is the fixture. Frame 32 of the parity run holds exactly
    // 46 allocated entities, and an entity is allocated when its kind byte at
    // +42 is non-zero - the test this repository's smoke host already uses.
    uint32_t n = mods_entity_count();
    MOD_CHECK_EQ(n, 46u);

    uint32_t checked = 0;
    for (uint32_t i = 0; i < n; ++i) {
        uint32_t slot = 0;
        MOD_CHECK_EQ(mods_entity_slot(i, &slot), POP_OK);
        PopEntityView v;
        MOD_CHECK_EQ(mods_entity(slot, &v), POP_OK);
        MOD_CHECK_EQ(v.slot, slot); // the index IS the physical slot
        MOD_CHECK(v.kind != 0);
        MOD_CHECK_EQ(v.guest_addr, base + slot * stride);

        pop::Entity want = entity_test::decode(gm_ptr(v.guest_addr));
        MOD_CHECK_EQ(v.id, want.id);
        MOD_CHECK_EQ(v.flags, want.flags);
        MOD_CHECK_EQ(v.render_flags, want.render_flags);
        MOD_CHECK_EQ(v.motion_flags, want.motion_flags);
        MOD_CHECK_EQ(v.animation_tick, want.animation_tick);
        MOD_CHECK_EQ(v.angle, want.angle);
        MOD_CHECK_EQ(v.kind, want.kind);
        MOD_CHECK_EQ(v.model, want.model);
        MOD_CHECK_EQ(v.state, want.state);
        MOD_CHECK_EQ(v.state_2, want.state_2);
        MOD_CHECK_EQ(v.owner, want.owner);
        MOD_CHECK_EQ(v.index, want.index);
        MOD_CHECK_EQ(v.counter, want.counter);
        MOD_CHECK_EQ(v.counter_2, want.counter_2);
        MOD_CHECK_EQ(v.x, want.position.horizontal.x);
        MOD_CHECK_EQ(v.z, want.position.horizontal.z);
        MOD_CHECK_EQ(v.altitude, want.position.altitude);
        MOD_CHECK_EQ(v.dx, want.delta.horizontal.x);
        MOD_CHECK_EQ(memcmp(v.raw, gm_ptr(v.guest_addr), 179), 0);
        ++checked;
    }
    MOD_CHECK_EQ(checked, n);

    // An unallocated slot is POP_E_NOTFOUND, not a decoded pile of zeroes.
    uint32_t first = 0;
    MOD_CHECK_EQ(mods_entity_slot(0, &first), POP_OK);
    PopEntityView v;
    bool found_empty = false;
    for (uint32_t s = 0; s < 2000 && !found_empty; ++s) {
        if (!rd8(base + s * stride + 42)) {
            MOD_CHECK_EQ(mods_entity(s, &v), POP_E_NOTFOUND);
            found_empty = true;
        }
    }
    MOD_CHECK(found_empty);
    MOD_CHECK_EQ(mods_entity(2000u, &v), POP_E_RANGE);
    mods_view_pop();
}

MOD_TEST_SUITE(game_view_is_an_immutable_snapshot) {
    setup();
    MOD_CHECK(load_snapshot());
    uint32_t base = mods_symbol_global("entity_base");
    uint32_t slot = 0;

    mods_view_push();
    MOD_CHECK_EQ(mods_entity_slot(0, &slot), POP_OK);
    PopEntityView before;
    MOD_CHECK_EQ(mods_entity(slot, &before), POP_OK);
    uint32_t count_before = mods_entity_count();

    // The guest changes underneath the callback: the snapshot must not move,
    // because a view that changed mid-callback would be a live read.
    wr16(base + slot * 179 + 36, (uint16_t)(before.id + 1));
    wr8(base + slot * 179 + 42, 0); // deallocate it, even
    PopEntityView after;
    MOD_CHECK_EQ(mods_entity(slot, &after), POP_OK);
    MOD_CHECK_EQ(after.id, before.id);
    MOD_CHECK_EQ(mods_entity_count(), count_before);

    // A nested callback gets its OWN snapshot, taken now, and the outer one
    // comes back untouched when it ends.
    const uint8_t *outer_tribe = nullptr;
    PopTribeView t0;
    MOD_CHECK_EQ(mods_tribe(0, &t0), POP_OK);
    outer_tribe = t0.raw;
    mods_view_push();
    MOD_CHECK_EQ(mods_entity_count(), count_before - 1); // one fewer now
    PopEntityView inner;
    MOD_CHECK_EQ(mods_entity(slot, &inner), POP_E_NOTFOUND); // deallocated
    PopTribeView t1;
    MOD_CHECK_EQ(mods_tribe(0, &t1), POP_OK);
    MOD_CHECK(t1.raw != outer_tribe); // its own bytes, not the outer's
    mods_view_pop();
    // And the outer scope's borrowed pointer still points at its own bytes.
    PopTribeView t2;
    MOD_CHECK_EQ(mods_tribe(0, &t2), POP_OK);
    MOD_CHECK(t2.raw == outer_tribe);
    MOD_CHECK_EQ(mods_entity(slot, &after), POP_OK);
    MOD_CHECK_EQ(after.id, before.id);
    mods_view_pop();

    // Outside every scope there is no view at all.
    MOD_CHECK_EQ(mods_entity_count(), 0u);
    MOD_CHECK_EQ(mods_entity(slot, &after), POP_E_STATE);
}

MOD_TEST_SUITE(game_view_tribes_and_globals) {
    setup();
    mods_view_push();
    MOD_CHECK_EQ(mods_symbol_global_count("tribe_base"), 4u);
    for (uint32_t i = 0; i < 4; ++i) {
        PopTribeView t;
        MOD_CHECK_EQ(mods_tribe(i, &t), POP_OK);
        MOD_CHECK_EQ(t.bytes, 0xc65u);
        MOD_CHECK_EQ(t.guest_addr, 0x0089d1c8u + i * 0xc65u);
        // The named fields are the ones this repository's own oracle probes
        // decode: tools/oracle/m1-outer-audit/probe.py reads type at +0xc1f,
        // active at +0xc20 and the id at +0xc22, and
        // src/core/gameplay_ai_shaman.hpp names the control flags at +0x596.
        wr8(t.guest_addr + 0xc1f, 1);
        wr8(t.guest_addr + 0xc20, 1);
        wr8(t.guest_addr + 0xc22, (uint8_t)(i + 1));
        wr32(t.guest_addr + 0x596, 0xfeedu + i);
    }
    mods_view_pop();
    mods_view_push();
    for (uint32_t i = 0; i < 4; ++i) {
        PopTribeView t;
        MOD_CHECK_EQ(mods_tribe(i, &t), POP_OK);
        MOD_CHECK_EQ(t.type, 1);
        MOD_CHECK_EQ(t.active, 1);
        MOD_CHECK_EQ(t.tribe_id, i + 1);
        MOD_CHECK_EQ(t.control_flags, 0xfeedu + i);
        MOD_CHECK_EQ(memcmp(t.raw, gm_ptr(t.guest_addr), 0xc65), 0);
    }
    PopTribeView t;
    MOD_CHECK_EQ(mods_tribe(4, &t), POP_E_RANGE);

    // Pause is bit 0x2 of the byte at 0089c661; there is no pause event.
    wr8(0x0089c661u, 0x00);
    MOD_CHECK(!mods_game_paused());
    wr8(0x0089c661u, 0x02);
    MOD_CHECK(mods_game_paused());
    wr8(0x0089c661u, 0x01);
    MOD_CHECK(!mods_game_paused());
    wr32(0x0089d188u, 77u);
    MOD_CHECK_EQ(mods_simulation_turn(), 77u);
    wr32(0x0089d184u, 12u);
    MOD_CHECK_EQ(mods_command_frame(), 12u);
    mods_view_pop();
}

MOD_TEST_SUITE(game_view_disabled_scope_masks_and_restores_outer_bytes) {
    setup();
    mods_view_reset();
    MOD_CHECK(load_snapshot());
    const uint32_t tribe_addr = mods_symbol_global("tribe_base");
    wr32(tribe_addr + 0x596, 0x1234);
    mods_view_push();
    PopTribeView outer{};
    MOD_CHECK_EQ(mods_tribe(0, &outer), POP_OK);
    mods_view_push_disabled();
    MOD_CHECK_EQ(mods_view_depth(), 2u);
    MOD_CHECK(!mods_view_active());
    PopTribeView hidden{};
    MOD_CHECK_EQ(mods_tribe(0, &hidden), POP_E_STATE);
    wr32(tribe_addr + 0x596, 0x5678);
    mods_view_push();
    PopTribeView inner{};
    MOD_CHECK_EQ(mods_tribe(0, &inner), POP_OK);
    MOD_CHECK_EQ(inner.control_flags, 0x5678u);
    MOD_CHECK_EQ(outer.control_flags, 0x1234u);
    const auto *raw = (const uint8_t *)outer.raw;
    MOD_CHECK_EQ(raw[0x596], 0x34);
    MOD_CHECK_EQ(raw[0x597], 0x12);
    mods_view_truncate(2);
    MOD_CHECK(!mods_view_active());
    mods_view_pop();
    PopTribeView restored{};
    MOD_CHECK_EQ(mods_tribe(0, &restored), POP_OK);
    MOD_CHECK_EQ(restored.control_flags, 0x1234u);
    MOD_CHECK_EQ(restored.raw, outer.raw);
    mods_view_push_disabled();
    mods_view_truncate(0);
    MOD_CHECK_EQ(mods_view_depth(), 0u);
    MOD_CHECK(!mods_view_active());
}
