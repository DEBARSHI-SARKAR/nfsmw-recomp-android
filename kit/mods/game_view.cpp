// game_view.cpp - an immutable snapshot per callback, nested per guest thread.
//
// Capture COPIES the allocated slots' bytes. A view that read live memory
// would change under a callback that called back into the game, which is
// exactly what "valid only until that callback returns" is supposed to rule
// out. `slot` is the physical slot index throughout: entity(slot) takes one,
// entity_slot(nth) maps an iteration index onto one.
#include "mods_internal.h"
#include "game_config.h"

#include <deque>
#include <string.h>
#include <vector>

namespace {

struct Frame {
    bool available = true;
    uint32_t base, stride, count; // entity pool geometry at capture time
    uint32_t tribe_base, tribe_stride, tribe_count;
    // Each scope owns its bytes outright. A shared arena that grew when an
    // inner scope was pushed would move the outer scope's storage, and the
    // `raw` pointer a tribe view already handed to a callback would then point
    // at freed memory.
    std::vector<uint8_t> entity_bytes;
    std::vector<uint8_t> tribe_bytes;
    std::vector<uint32_t> slots; // allocated physical slots, ascending
};

struct ThreadView {
    // A deque, not a vector: pushing a nested scope must not relocate the ones
    // beneath it, because their bytes are being read through borrowed
    // pointers right now.
    std::deque<Frame> frames;
};

thread_local ThreadView t_view;

Frame *top() {
    return t_view.frames.empty() || !t_view.frames.back().available ? nullptr
                                                                    : &t_view.frames.back();
}

} // namespace

#ifdef POPM_TESTING
static thread_local uint64_t test_view_pushes = 0;
extern "C" uint64_t mods_view_test_push_count() {
    return test_view_pushes;
}
#endif

// Push an invocation-local snapshot of entity and tribe data for mod callbacks.
// Nested callbacks get separate frames so pointers exposed by an outer view remain stable.
void mods_view_push() {
#ifdef POPM_TESTING
    ++test_view_pushes;
#endif
    t_view.frames.push_back(Frame());
    Frame &f = t_view.frames.back();
    f.base = mods_symbol_global("entity_base");
    f.stride = mods_symbol_global_stride("entity_base");
    f.count = mods_symbol_global_count("entity_base");
    f.tribe_base = mods_symbol_global("tribe_base");
    f.tribe_stride = mods_symbol_global_stride("tribe_base");
    f.tribe_count = mods_symbol_global_count("tribe_base");

    if (f.base && f.stride && f.count) {
        for (uint32_t i = 0; i < f.count; ++i) {
            uint32_t addr = f.base + i * f.stride;
            if (!gm_valid(addr, f.stride))
                break;
            // ALLOCATED MEANS A NON-ZERO KIND. The flags bit 0x2 at +12 the
            // spec first named is set on none of the 2000 records in any
            // frame the parity fixture records, while 46 of them carry a
            // kind; the kind byte is also what this repository's own smoke
            // host and tools/recomp/trace_original.py test.
            if (!rd8(addr + 42))
                continue;
            f.slots.push_back(i);
        }
        f.entity_bytes.resize(f.slots.size() * f.stride);
        for (size_t i = 0; i < f.slots.size(); ++i)
            memcpy(&f.entity_bytes[i * f.stride], gm_ptr(f.base + f.slots[i] * f.stride), f.stride);
    }

    if (f.tribe_base && f.tribe_stride && f.tribe_count &&
        gm_valid(f.tribe_base, f.tribe_stride * f.tribe_count)) {
        f.tribe_bytes.resize((size_t)f.tribe_stride * f.tribe_count);
        memcpy(&f.tribe_bytes[0], gm_ptr(f.tribe_base), f.tribe_bytes.size());
    }
}

// A disabled scope masks any outer snapshot without copying game state.
void mods_view_push_disabled() {
    t_view.frames.emplace_back();
    t_view.frames.back().available = false;
}

void mods_view_pop() {
    if (!t_view.frames.empty())
        t_view.frames.pop_back();
}

void mods_view_reset() {
    t_view.frames.clear();
}

uint32_t mods_view_depth() {
    return (uint32_t)t_view.frames.size();
}

void mods_view_truncate(uint32_t depth) {
    while (t_view.frames.size() > depth)
        t_view.frames.pop_back();
}

bool mods_view_active() {
    return top() != nullptr;
}

uint32_t mods_entity_count() {
    Frame *f = top();
    return f ? (uint32_t)f->slots.size() : 0u;
}

PopModStatus mods_entity_slot(uint32_t nth, uint32_t *out_slot) {
    Frame *f = top();
    if (!f)
        return POP_E_STATE;
    if (!out_slot)
        return POP_E_INVAL;
    if (nth >= f->slots.size())
        return POP_E_RANGE;
    *out_slot = f->slots[nth];
    return POP_OK;
}

PopModStatus mods_entity(uint32_t slot, PopEntityView *out) {
    Frame *f = top();
    if (!out)
        return POP_E_INVAL;
    if (!f)
        return POP_E_STATE;
    if (slot >= f->count)
        return POP_E_RANGE;
    size_t idx = 0;
    bool found = false;
    for (size_t i = 0; i < f->slots.size(); ++i)
        if (f->slots[i] == slot) {
            idx = i;
            found = true;
            break;
        }
    if (!found)
        return POP_E_NOTFOUND;

    const uint8_t *p = &f->entity_bytes[idx * f->stride];
    auto u16 = [&](uint32_t o) { return (uint16_t)(p[o] | (p[o + 1] << 8)); };
    auto u32 = [&](uint32_t o) { return (uint32_t)(u16(o) | ((uint32_t)u16(o + 2) << 16)); };

    memset(out, 0, sizeof *out);
    out->size = (uint32_t)sizeof(PopEntityView);
    out->slot = slot;
    out->guest_addr = f->base + slot * f->stride;
    out->flags = u32(12);
    out->render_flags = u32(16);
    out->motion_flags = u32(20);
    out->animation_tick = u32(24);
    out->id = u16(36);
    out->angle = u16(38);
    out->kind = p[42];
    out->model = p[43];
    out->state = p[44];
    out->state_2 = p[45];
    out->class_counter = p[46];
    out->owner = p[47];
    out->index = p[48];
    out->counter = p[49];
    out->counter_2 = p[50];
    out->x = u16(61);
    out->z = u16(63);
    out->altitude = u16(65);
    out->dx = u16(67);
    out->dz = u16(69);
    out->daltitude = u16(71);
    memcpy(out->raw, p, sizeof out->raw);
    return POP_OK;
}

PopModStatus mods_tribe(uint32_t i, PopTribeView *out) {
    Frame *f = top();
    if (!out)
        return POP_E_INVAL;
    if (!f)
        return POP_E_STATE;
    if (f->tribe_bytes.empty() || i >= f->tribe_count)
        return POP_E_RANGE;
    // This scope's own bytes, which nothing can move while the callback holds
    // the pointer: a nested scope allocates its own.
    const uint8_t *p = &f->tribe_bytes[(size_t)i * f->tribe_stride];
    memset(out, 0, sizeof *out);
    out->size = (uint32_t)sizeof(PopTribeView);
    out->index = i;
    out->guest_addr = f->tribe_base + i * f->tribe_stride;
    out->bytes = f->tribe_stride;
    // The named fields this repository already decodes; everything else is
    // raw bytes, by design.
    out->type = p[0xc1f];
    out->active = p[0xc20];
    out->tribe_id = p[0xc22];
    memcpy(&out->control_flags, p + 0x596, 4);
    out->raw = p;
    return POP_OK;
}

bool mods_game_paused() {
    uint32_t a = mods_symbol_global("pause_flags");
    return a && (rd8(a) & 0x2u) != 0;
}
uint32_t mods_simulation_turn() {
    uint32_t a = mods_symbol_global("simulation_turn");
    return a ? rd32(a) : 0u;
}
uint32_t mods_command_frame() {
    uint32_t a = mods_symbol_global("command_frame");
    return a ? rd32(a) : 0u;
}

// ---- Frame-local sprite provenance -----------------------------------------
// Pinned source chain (all offsets checked against the .asm):
// 0046ec80 case 10 -> 0046f080 queues entity -> 0046dbe0 projects its anchor;
// 004673b0 case 0x0d selects animation -> 0045f4a0/0045f9d0/0045efd0;
// 004f95a0 constructs a quad at ECX; 004f98a0 later resolves that SAME quad,
// writing its texture-block pointer at +0x18. 0047ce50 passes that block
// to 00509820, which reads the actual D3D handle at block+0x40.
#include "sprite_view.h"
#include <map>
namespace {
uint64_t sprite_frame = 0;
bool sprite_installed = false;
FixtureWorldProjection sprite_projection;
std::map<uint32_t, PopSpriteView> sprite_entities; // physical slots
struct SpriteQuad {
    uint32_t slot;
    float origin_x, origin_y;
};
std::map<uint32_t, SpriteQuad> sprite_quads; // guest quad -> owner and draw origin
std::map<uint32_t, std::vector<PopSpriteView>> sprite_layers;
void sync_sprite_frame() {
    uint64_t f = host_sprite_frame_id();
    if (f == sprite_frame)
        return;
    sprite_frame = f;
    sprite_projection = {};
    sprite_entities.clear();
    sprite_quads.clear();
    sprite_layers.clear();
}
struct SpriteEntity {
    uint32_t slot;
    uint16_t id;
};
bool sprite_entity(uint32_t ptr, SpriteEntity *out) {
    uint32_t base = mods_symbol_global("entity_base");
    uint32_t stride = mods_symbol_global_stride("entity_base");
    uint32_t count = mods_symbol_global_count("entity_base");
    if (!base || stride < 43 || ptr < base || (ptr - base) % stride ||
        (ptr - base) / stride >= count || !gm_valid(ptr, stride) || !rd8(ptr + 42))
        return false;
    // Runtime provenance needs only this entity's identity. Capture it while
    // holding the guest baton, before calling the projection original. No
    // borrowed guest pointer or public game view escapes this callback.
    *out = {(ptr - base) / stride, rd16(ptr + 36)};
    return true;
}
void sprite_scope(const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *) {}
void sprite_project(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    uint32_t stack = mods_hook_ancestor_stack(0x46f080);
    SpriteEntity entity{};
    bool found = stack && gm_valid(stack + 8, 4) && sprite_entity(rd32(stack + 8), &entity);
    uint32_t point = gm_valid(cpu->esp + 4, 4) ? rd32(cpu->esp + 4) : 0;
    if (mods_call_next(api, inv, cpu) != POP_OK || !found || !gm_valid(point, 20))
        return;
    sync_sprite_frame();
    if (!sprite_frame)
        return;
    PopSpriteView v{};
    v.frame = sprite_frame;
    v.slot = entity.slot;
    v.entity_id = entity.id;
    // Consume the original projection's floating-point output, including the
    // original wrapping, interpolation, matrix and perspective arithmetic.
    memcpy(&v.x, gm_ptr(point + 12), 4);
    memcpy(&v.y, gm_ptr(point + 16), 4);
    v.width = (int16_t)rd16(0x87ca90);
    v.height = (int16_t)rd16(0x87ca92);
    v.projected = 1;
    // Retain the first entity anchor in this frame.
    sprite_entities.emplace(entity.slot, v);
}
void sprite_quad(const PopModApi *, pop_cpu_v1 *cpu, PopHookInvocation *, void *) {
    sync_sprite_frame();
    sprite_quads.erase(cpu->ecx); // recycled even when the new owner is invalid
    // Only accept the three calls from draw_polygons. The same animation
    // functions are also used by UI portraits, which have no world entity.
    struct Site {
        uint32_t fn, ret, offset;
    };
    for (auto site : {Site{0x45f4a0, 0x468eb8, 0x38}, Site{0x45f9d0, 0x468ed4, 0x40},
                      Site{0x45efd0, 0x468eea, 0x34}}) {
        uint32_t stack = mods_hook_ancestor_stack(site.fn);
        if (!stack || !gm_valid(stack, site.offset + 4) || rd32(stack) != site.ret)
            continue;
        SpriteEntity entity{};
        if (sprite_entity(rd32(stack + site.offset), &entity)) {
            SpriteQuad q{entity.slot, 0, 0};
            // 004f95a0 starts by adding these floats to its local x/y.
            // Capture at construction, before a later UI pass changes them.
            memcpy(&q.origin_x, gm_ptr(0xa68f64), 4);
            memcpy(&q.origin_y, gm_ptr(0xa68f60), 4);
            sprite_quads[cpu->ecx] = q;
        }
        return;
    }
}
void sprite_resolve(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    sync_sprite_frame();
    uint32_t quad = cpu->ecx;
    auto it = sprite_quads.find(quad);
    SpriteQuad q = it == sprite_quads.end() ? SpriteQuad{UINT32_MAX, 0, 0} : it->second;
    uint32_t slot = q.slot;
    if (mods_call_next(api, inv, cpu) != POP_OK || slot == UINT32_MAX || !gm_valid(quad, 28))
        return;
    auto entity = sprite_entities.find(slot);
    if (entity == sprite_entities.end())
        return;
    PopSpriteView v = entity->second;
    v.origin_x = q.origin_x;
    v.origin_y = q.origin_y;
    uint32_t block = rd32(quad + 24);
    if (block && !gm_valid(block, 0x44))
        v.projected = 0; // broken provenance is unavailable
    else
        v.texture_handle = block ? rd32(block + 0x40) : 0;
    v.texture_revision = host_sprite_texture_revision(v.texture_handle);
    sprite_layers[slot].push_back(v);
}
} // namespace
int mods_sprite_hooks_init() {
#if !RECOMP_MODS_BUILTIN_POPULOUS
    return 1; // this game has none of Populous's routines (game.toml [mods] builtin)
#endif
    if (sprite_installed)
        return 1;
    struct Hook {
        uint32_t addr;
        PopHookFn fn;
        int mode;
    };
    uint32_t installed[7]{}, n = 0;
    // The seven sprite routines, in the order below: game.toml
    // [hooks].sprites. A game that lists none has no sprite view. Without the
    // key, the Populous addresses these hooks were written against.
#ifdef RECOMP_HOOK_SPRITES_COUNT
#if RECOMP_HOOK_SPRITES_COUNT == 0
    sprite_installed = true;
    return 1;
#else
    const uint32_t addrs[7] = RECOMP_HOOK_SPRITES;
#endif
#else
    const uint32_t addrs[7] = {0x46f080, 0x46dbe0, 0x45f4a0, 0x45f9d0,
                               0x45efd0, 0x4f95a0, 0x4f98a0};
#endif
#if !defined(RECOMP_HOOK_SPRITES_COUNT) || RECOMP_HOOK_SPRITES_COUNT != 0
    for (auto h : {Hook{addrs[0], sprite_scope, POP_HOOK_BEFORE},
                   Hook{addrs[1], sprite_project, POP_HOOK_WRAP},
                   Hook{addrs[2], sprite_scope, POP_HOOK_BEFORE},
                   Hook{addrs[3], sprite_scope, POP_HOOK_BEFORE},
                   Hook{addrs[4], sprite_scope, POP_HOOK_BEFORE},
                   Hook{addrs[5], sprite_quad, POP_HOOK_BEFORE},
                   Hook{addrs[6], sprite_resolve, POP_HOOK_WRAP}}) {
        if (mods_hook_install_ex(MODS_OWNER_RUNTIME, h.addr, 0, h.fn, h.mode, POP_HOOK_NO_GAME_VIEW,
                                 nullptr, &installed[n]) != POP_OK) {
            while (n)
                mods_hook_remove(MODS_OWNER_RUNTIME, installed[--n]);
            return 0;
        }
        ++n;
    }
    sprite_installed = true;
    return 1;
#endif
}
void mods_sprite_reset() {
    sprite_installed = false;
    sprite_frame = 0;
    sprite_projection = {};
    sprite_entities.clear();
    sprite_quads.clear();
    sprite_layers.clear();
}
bool host_sprite_projection(uint64_t frame, FixtureWorldProjection *out) {
    if (!out || !frame || frame != sprite_frame || !sprite_projection.valid)
        return false;
    *out = sprite_projection;
    return true;
}
extern "C" void host_sprite_record_draw(const HostD3DDrawSnapshot *d) {
    sync_sprite_frame();
    if (!sprite_frame || !d || d->kind != HOST_DRAW_PRIMITIVE)
        return;
    // Snapshot globals while the game is drawing, before the UI resets them.
    // Even a culled entity has a projection: it need not reach a sprite hook.
    if (!sprite_projection.valid) {
        float ox, oy;
        memcpy(&ox, gm_ptr(0xa68f64), 4);
        memcpy(&oy, gm_ptr(0xa68f60), 4);
        sprite_projection = fixture_world_projection(ox, oy);
    }
    for (auto &[slot, layers] : sprite_layers)
        for (auto &v : layers) {
            if (!v.texture_handle || v.texture_handle != d->texture_handle ||
                v.texture_revision != d->texture_revision || !v.projected ||
                v.x + v.origin_x < d->screen_min_x || v.x + v.origin_x >= d->screen_max_x ||
                v.y + v.origin_y < d->screen_min_y || v.y + v.origin_y >= d->screen_max_y)
                continue;
            v.drawn = 1;
            v.draw_seq = d->seq;
            // A world sprite supplies the exact origin even if a prior pass used
            // another translation. Portraits never enter sprite_layers.
            sprite_projection = fixture_world_projection(v.origin_x, v.origin_y);
        }
}
int mods_entity_sprite(uint32_t id, uint64_t frame, uint32_t nth, PopSpriteView *out) {
    if (!out || !frame || frame != sprite_frame)
        return 0;
    for (const auto &[slot, entity] : sprite_entities) {
        if (entity.entity_id != id)
            continue;
        auto it = sprite_layers.find(slot);
        if (it != sprite_layers.end() && !it->second.empty()) {
            if (nth >= it->second.size())
                return 0;
            *out = it->second[nth];
            return 1;
        }
        if (!sprite_projection.valid) {
            if (nth)
                return 0;
            *out = entity;
            return 1;
        }
        break;
    }
    if (nth)
        return 0;
    // Decode the same allocated records that write_simdump enumerates. This
    // fallback is essential when classic culling never queues the entity.
    for (uint32_t i = 0; i < mods_entity_count(); ++i) {
        uint32_t slot;
        PopEntityView e{};
        if (mods_entity_slot(i, &slot) != POP_OK || mods_entity(slot, &e) != POP_OK || e.id != id)
            continue;
        PopSpriteView v{};
        v.frame = frame;
        v.slot = slot;
        v.entity_id = id;
        v.width = sprite_projection.width;
        v.height = sprite_projection.height;
        v.origin_x = sprite_projection.origin_x;
        v.origin_y = sprite_projection.origin_y;
        v.projected =
            fixture_project_world(sprite_projection, e.x, e.z, (int16_t)e.altitude, &v.x, &v.y);
        // Retain guest anchor observations for callers before D3D submission.
        auto found = sprite_entities.find(slot);
        if (!sprite_projection.valid && found != sprite_entities.end())
            v = found->second;
        *out = v;
        return 1;
    }
    return 0;
}
