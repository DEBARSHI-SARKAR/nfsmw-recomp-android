#include "mods_tests.h"
#include "../pop_mod_api.h"
#include "../../platform/os.h"
#include <cmath>
#include <map>
#include <string>
#include <vector>

namespace {
struct Hook {
    uint32_t addr;
    PopHookFn fn;
    void *user;
};
std::map<uint32_t, uint32_t> dwords;
std::vector<Hook> hooks;
std::map<uint32_t, uint16_t> words;
float aspect;
float origin = 100;
uint16_t canvas_width = 640;
// What 00523200 saw while its wrap was in place.
uint16_t status_width;
uint32_t status_clip;
const std::map<std::string, uint32_t> symbols = {
    {"display_project_point", 0x46dbe0}, {"display_cull_triangle", 0x46daa0},
    {"screen_width_2", 0x87ca90},        {"screen_width_2_half", 0x87caa4},
    {"screen_height_2", 0x87ca92},       {"display_origin_x", 0xa68f64}};
PopModApi fake_api() {
    PopModApi a{};
    a.version = 1;
    a.size = sizeof a;
    a.symbol = [](const PopModApi *, const char *n, uint32_t *out) {
        auto it = symbols.find(n);
        if (it == symbols.end())
            return POP_E_NOSYMBOL;
        *out = it->second;
        return POP_OK;
    };
    a.hook_install = [](const PopModApi *, uint32_t addr, PopHookFn fn, int32_t mode, void *user,
                        uint32_t *out) {
        MOD_CHECK_EQ(mode, addr == 0x47d980 || addr == 0x47d8a0 || addr == 0x523200
                               ? POP_HOOK_WRAP
                               : POP_HOOK_AFTER);
        hooks.push_back({addr, fn, user});
        *out = (uint32_t)hooks.size();
        return POP_OK;
    };
    a.hook_remove = [](const PopModApi *, uint32_t) { return POP_OK; };
    a.hook_install_ex = [](const PopModApi *api, uint32_t addr, uint32_t ret, PopHookFn fn,
                           int32_t mode, uint32_t flags, void *user, uint32_t *out) {
        MOD_CHECK_EQ(flags, POP_HOOK_NO_GAME_VIEW);
        MOD_CHECK_EQ(ret, addr == 0x47d980 ? 0x5176d7u : addr == 0x47d8a0 ? 0x517613u : 0u);
        return api->hook_install(api, addr, fn, mode, user, out);
    };
    a.hook_install_at_callsite = [](const PopModApi *api, uint32_t addr, uint32_t ret, PopHookFn fn,
                                    int32_t mode, void *user, uint32_t *out) {
        MOD_CHECK(addr == 0x47d980 || addr == 0x47d8a0);
        MOD_CHECK_EQ(ret, addr == 0x47d980 ? 0x5176d7u : 0x517613u);
        return api->hook_install(api, addr, fn, mode, user, out);
    };
    a.guest_read_u16 = [](const PopModApi *, uint32_t addr, uint16_t *out) {
        *out = addr == 0x89c6cf ? canvas_width : words.at(addr);
        return POP_OK;
    };
    a.guest_write_u16 = [](const PopModApi *, uint32_t addr, uint16_t v) {
        MOD_CHECK(addr == 0x87ca90 || addr == 0x87caa4 || addr == 0x1001c || addr == 0x89c6cf);
        if (addr == 0x89c6cf) {
            canvas_width = v;
            return POP_OK;
        }
        words[addr] = v;
        return POP_OK;
    };
    a.host_aspect = [](const PopModApi *) { return aspect; };
    a.guest_read_u32 = [](const PopModApi *, uint32_t addr, uint32_t *out) {
        if (addr == 0xa68f64)
            memcpy(out, &origin, 4);
        else
            *out = dwords[addr];
        return POP_OK;
    };
    a.guest_write_u32 = [](const PopModApi *, uint32_t addr, uint32_t value) {
        dwords[addr] = value;
        return POP_OK;
    };
    a.call_next = [](const PopModApi *, PopHookInvocation *, pop_cpu_v1 *cpu) {
        if (cpu->target == 0x523200) {
            status_width = canvas_width;
            status_clip = dwords[dwords[0x5ce0bc] + 0x248052];
            return POP_OK;
        }
        // The guest append copies one record and advances its queue cursor.
        dwords[cpu->ecx + 0x20002a] += cpu->target == 0x47d980 ? 0xa0 : 0x80;
        return POP_OK;
    };
    a.set_scene_domain = [](const PopModApi *, uint32_t w, uint32_t h) {
        MOD_CHECK_EQ(w, uint32_t(words.at(0x87ca90) + origin));
        MOD_CHECK_EQ(h, uint32_t(words.at(0x87ca92)));
        return POP_OK;
    };
    return a;
}
} // namespace

MOD_TEST_SUITE(display_projection_fixture) {
    // Compiled as C by the same toolchain as all loader fixtures, then loaded
    // through its public ABI; this exercises the shipping hook callbacks.
    void *lib = os_dlopen((mods_test_build_path("recomp/mods-fixtures/display_projection") +
                           std::string(os_plugin_extension()))
                              .c_str());
    MOD_CHECK(lib != nullptr);
    if (!lib) {
        fprintf(stderr, "%s\n", os_dlerror());
        return;
    }
    auto init = (PopModStatus (*)(const PopModApi *))os_dlsym(lib, "pop_mod_init");
    auto stop = (PopModStatus (*)())os_dlsym(lib, "pop_mod_exit");
    MOD_CHECK(init && stop);
    if (!init || !stop) {
        os_dlclose(lib);
        return;
    }
    hooks.clear();
    origin = 100;
    canvas_width = 640;
    PopModApi api = fake_api();
    MOD_CHECK_EQ(init(&api), POP_OK);
    MOD_CHECK_EQ(hooks.size(), 5u);
    if (hooks.size() == 5) {
        MOD_CHECK_EQ(hooks[0].addr, 0x41ebf0u);
        MOD_CHECK_EQ(hooks[1].addr, 0x46e700u);
        struct Case {
            float ratio;
            uint16_t half;
        };
        for (auto c :
             {Case{4.f / 3.f, 270}, Case{16.f / 9.f, 376}, Case{21.f / 9.f, 510}, Case{1.f, 270}}) {
            aspect = c.ratio;
            for (const auto &hook : {hooks[0], hooks[1]}) {
                words = {{0x87ca90, 540}, {0x87caa4, 270}, {0x87ca92, 480}, {0x87caa6, 240}};
                pop_cpu_v1 cpu;
                pop_cpu_v1_init(&cpu);
                hook.fn(&api, &cpu, nullptr, nullptr);
                MOD_CHECK_EQ(words.at(0x87caa4), c.half);
                MOD_CHECK_EQ(words.at(0x87ca90), 2 * c.half);
                MOD_CHECK_EQ(words.at(0x87ca92), 480); // adjacent word survives
                MOD_CHECK_EQ(words.at(0x87caa6), 240);
                hook.fn(&api, &cpu, nullptr, nullptr);
                MOD_CHECK_EQ(words.at(0x87caa4), c.half); // no compounding
            }
        }
        // Bad host data must not overflow signed guest words or narrow them.
        for (float ratio : {NAN, INFINITY, -1.f, 0.f, 1000.f}) {
            aspect = ratio;
            words[0x87ca90] = 640;
            words[0x87caa4] = 320;
            hooks[0].fn(&api, nullptr, nullptr, nullptr);
            MOD_CHECK_EQ(words.at(0x87ca90), 640);
            MOD_CHECK_EQ(words.at(0x87caa4), 320);
        }
    }
    // Real sky enqueue callbacks must widen copied geometry, while ordinary
    // polygons and 4:3 retain their coordinates. No texture/UV bytes change.
    for (unsigned h = 2; h < 4; ++h)
        for (float ratio : {4.f / 3, 16.f / 9, 21.f / 9})
            for (uint32_t ret : {h == 2 ? 0x5176d7u : 0x517613u, 0x401000u}) {
                dwords.clear();
                aspect = ratio;
                words[0x87ca92] = 480;
                pop_cpu_v1 cpu;
                pop_cpu_v1_init(&cpu);
                cpu.ecx = 0x10000;
                cpu.esp = 0x20000;
                cpu.target = hooks[h].addr;
                dwords[cpu.esp] = ret;
                dwords[cpu.ecx + 0x20002a] = 0x30000;
                unsigned count = h == 2 ? 4 : 3;
                for (unsigned i = 0; i < count; ++i) {
                    float x = i ? 640 : 100;
                    uint32_t bits;
                    memcpy(&bits, &x, 4);
                    dwords[0x30020 + i * 32] = bits;
                    dwords[0x30024 + i * 32] = 0xabcdef;
                }
                hooks[h].fn(&api, &cpu, nullptr, hooks[h].user);
                for (unsigned i = 0; i < count; ++i) {
                    float x;
                    uint32_t bits = dwords[0x30020 + i * 32];
                    memcpy(&x, &bits, 4);
                    float want =
                        i ? (ret != 0x401000 && ratio > 4.f / 3 ? floorf(480 * ratio * .5f) * 2
                                                                : 640)
                          : 100;
                    MOD_CHECK(std::abs(x - want) < 0.001f);
                    MOD_CHECK_EQ(dwords[0x30024 + i * 32], 0xabcdefu);
                }
            }
    // The bottom-right status line (00523200) is right-aligned to, and clipped
    // at, the widened canvas for its own call only; 4:3 keeps the original.
    for (float ratio : {4.f / 3, 16.f / 9})
        if (hooks.size() == 5) {
            aspect = ratio;
            origin = 100;
            words = {{0x87ca90, 540}, {0x87caa4, 270}, {0x87ca92, 480}};
            canvas_width = 640;
            dwords.clear();
            dwords[0x5ce0bc] = 0x50000;
            dwords[0x50000 + 0x248052] = 640;
            pop_cpu_v1 cpu;
            pop_cpu_v1_init(&cpu);
            hooks[0].fn(&api, &cpu, nullptr, nullptr); // a projection reset
            cpu.target = 0x523200;
            status_width = 0;
            status_clip = 0;
            hooks[4].fn(&api, &cpu, nullptr, hooks[4].user);
            const unsigned want = ratio > 4.f / 3 ? 852u : 640u;
            MOD_CHECK_EQ(status_width, want);
            MOD_CHECK_EQ(status_clip, want);
            MOD_CHECK_EQ(canvas_width, 640);
            MOD_CHECK_EQ(dwords[0x50000 + 0x248052], 640u);
        }
    // Background coverage below the original horizon extends edge pixels;
    // it must not rescale the existing sky or exceed the guest queue limit.
    for (bool full : {false, true}) {
        dwords.clear();
        aspect = 21.f / 9;
        words[0x87ca92] = 480;
        words[0x1001c] = 1;
        pop_cpu_v1 cpu;
        pop_cpu_v1_init(&cpu);
        cpu.ecx = 0x10000;
        cpu.esp = 0x20000;
        cpu.target = 0x47d980;
        const uint32_t begin = full ? cpu.ecx + 0x1ff82a : 0x30000;
        dwords[cpu.esp] = 0x5176d7;
        dwords[cpu.ecx + 0x20002a] = begin;
        dwords[begin + 24] = 0x40000;
        dwords[0x40030] = 256;
        dwords[0x40034] = 128;
        auto putfloat = [](uint32_t at, float v) {
            uint32_t b;
            memcpy(&b, &v, 4);
            dwords[at] = b;
        };
        auto getfloat = [](uint32_t at) {
            float v;
            uint32_t b = dwords[at];
            memcpy(&v, &b, 4);
            return v;
        };
        for (unsigned i = 0; i < 4; ++i) {
            putfloat(begin + 32 + i * 32, (i == 1 || i == 2) ? 640 : 100);
            putfloat(begin + 36 + i * 32, i >= 2 ? 180 : 0);
            putfloat(begin + 60 + i * 32, i >= 2 ? 1 : 0);
        }
        hooks[2].fn(&api, &cpu, nullptr, hooks[2].user);
        MOD_CHECK_EQ(dwords[cpu.ecx + 0x20002a], begin + (full ? 0xa0 : 0x140));
        MOD_CHECK_EQ(words[0x1001c], full ? 1 : 2);
        MOD_CHECK_EQ(getfloat(begin + 100), 180); // original horizon is preserved
        if (!full) {
            const uint32_t strip = begin + 0xa0;
            MOD_CHECK_EQ(getfloat(strip + 36), 180);
            MOD_CHECK_EQ(getfloat(strip + 68), 180);
            MOD_CHECK_EQ(getfloat(strip + 100), 480);
            MOD_CHECK_EQ(getfloat(strip + 132), 480);
            for (unsigned i = 0; i < 4; ++i)
                MOD_CHECK_EQ(getfloat(strip + 60 + i * 32), 127.5f / 128);
            MOD_CHECK_EQ(getfloat(begin + 60), 0.5f / 128);
            MOD_CHECK_EQ(getfloat(begin + 124), 127.5f / 128);
        }
    }
    for (bool boundary : {false, true}) {
        dwords.clear();
        aspect = 21.f / 9;
        words[0x87ca92] = 480;
        words[0x1001c] = 1;
        pop_cpu_v1 cpu;
        pop_cpu_v1_init(&cpu);
        cpu.ecx = 0x10000;
        cpu.esp = 0x20000;
        cpu.target = 0x47d8a0;
        dwords[cpu.esp] = 0x517613;
        dwords[cpu.ecx + 0x20002a] = 0x30000;
        dwords[0xa69174] = 180;
        dwords[0x3000c] = 2; // alpha-cloud blend flags
        auto putfloat = [](uint32_t at, float v) {
            uint32_t b;
            memcpy(&b, &v, 4);
            dwords[at] = b;
        };
        auto getfloat = [](uint32_t at) {
            float v;
            uint32_t b = dwords[at];
            memcpy(&v, &b, 4);
            return v;
        };
        for (unsigned i = 0; i < 3; ++i) {
            putfloat(0x30020 + i * 32, i == 1 ? 300 : 100);
            putfloat(0x30024 + i * 32, i == 0 ? 120 : i == 1 ? (boundary ? 180 : 120) : 192);
            putfloat(0x3003c + i * 32, 0.25f * i);
        }
        hooks[3].fn(&api, &cpu, nullptr, hooks[3].user);
        MOD_CHECK_EQ(dwords[cpu.ecx + 0x20002a], boundary ? 0x30120u : 0x30080u);
        if (boundary) {
            MOD_CHECK_EQ(dwords[0x30080], 0x58f518u);
            MOD_CHECK_EQ(dwords[0x3008c], 2u);
            MOD_CHECK_EQ(getfloat(0x300a4), 192);
            MOD_CHECK_EQ(getfloat(0x300c4), 180);
            MOD_CHECK_EQ(getfloat(0x300e4), 480);
            MOD_CHECK_EQ(getfloat(0x30104), 480);
            MOD_CHECK(getfloat(0x300bc) == getfloat(0x3011c));
            MOD_CHECK(getfloat(0x300dc) == getfloat(0x300fc));
        }
    }
    // The 800x600 Quick Defaults mode used to widen terrain while skipping
    // every sky polygon. Native higher modes also need vertical coverage,
    // including Classic and a host narrower than the selected widescreen mode.
    const int sizes[][2] = {{640, 480},   {800, 600},   {1024, 768}, {1280, 720},
                            {1920, 1080}, {2560, 1440}, {3840, 2160}};
    for (const auto &size : sizes)
        for (float ratio : {4.f / 3, 16.f / 9, 21.f / 9}) {
            const int height = size[1];
            canvas_width = size[0];
            const bool higher = canvas_width > 1024 || height > 768;
            if (!higher && ratio <= 4.f / 3)
                continue;
            aspect = ratio;
            origin = canvas_width * 100.f / 640;
            words[0x88f036] = higher ? 480 : height;
            words[0x87ca90] = canvas_width - uint16_t(origin);
            words[0x87ca92] = height;
            hooks[0].fn(&api, nullptr, nullptr, nullptr);
            const float domain = words[0x87ca90] + origin;
            for (unsigned h = 2; h < 4; ++h) {
                dwords.clear();
                words[0x1001c] = 1;
                pop_cpu_v1 cpu;
                pop_cpu_v1_init(&cpu);
                cpu.ecx = 0x10000;
                cpu.esp = 0x20000;
                cpu.target = hooks[h].addr;
                dwords[cpu.esp] = h == 2 ? 0x5176d7 : 0x517613;
                dwords[cpu.ecx + 0x20002a] = 0x30000;
                const unsigned count = h == 2 ? 4 : 3;
                const float horizon = words[0x88f036] * 0.4f;
                dwords[0xa69174] = uint32_t(horizon);
                dwords[0x3000c] = h == 2 ? 0x10 : 2;
                dwords[0x30018] = 0x40000;
                dwords[0x40030] = 256;
                dwords[0x40034] = 128;
                auto put = [](uint32_t at, float v) {
                    uint32_t b;
                    memcpy(&b, &v, 4);
                    dwords[at] = b;
                };
                auto get = [](uint32_t at) {
                    float v;
                    uint32_t b = dwords[at];
                    memcpy(&v, &b, 4);
                    return v;
                };
                for (unsigned i = 0; i < count; ++i) {
                    put(0x30020 + i * 32, i == 1 || (count == 4 && i == 2) ? canvas_width : origin);
                    // The real cloud mesh truncates scaled row 170 before its
                    // sky-height transform; 600 makes that truncation observable.
                    const float boundary =
                        std::floor(170.f * height / 480) * (8.f / 3) * horizon / height;
                    put(0x30024 + i * 32, i == 0 || (count == 4 && i == 1) ? 0
                                          : count == 3 && i == 1           ? boundary
                                                                           : horizon);
                    put(0x3003c + i * 32, i * 0.25f);
                }
                hooks[h].fn(&api, &cpu, nullptr, hooks[h].user);
                MOD_CHECK_EQ(get(0x30020), origin);
                MOD_CHECK_EQ(get(0x30040), domain);
                MOD_CHECK(std::abs(get(0x30024 + (count - 1) * 32) - height * 0.4f) < 0.001f);
                const uint32_t strip = 0x30020 + count * 32;
                MOD_CHECK_EQ(dwords[cpu.ecx + 0x20002a], strip + 0xa0);
                MOD_CHECK_EQ(words[0x1001c], 2);
                MOD_CHECK_EQ(dwords[strip + 12], h == 2 ? 0x10u : 2u);
                MOD_CHECK_EQ(get(strip + 100), height);
                MOD_CHECK_EQ(get(strip + 132), height);
                if (h == 3) {
                    MOD_CHECK_EQ(get(0x3005c), 0.25f); // repeating cloud UV unchanged
                    MOD_CHECK_EQ(get(strip + 60), get(strip + 156));
                }
            }
        }
    for (int height : {720, 1080, 1440, 2160}) {
        canvas_width = height * 16 / 9;
        origin = height * 100.f / 480;
        const uint16_t width = canvas_width - uint16_t(origin), half = width / 2;
        for (float ratio : {16.f / 10, 16.f / 9}) {
            aspect = ratio;
            words[0x87ca92] = height;
            words[0x87ca90] = width;
            words[0x87caa4] = half;
            hooks[0].fn(&api, nullptr, nullptr, nullptr);
            MOD_CHECK_EQ(words[0x87ca90], width);
            MOD_CHECK_EQ(words[0x87caa4], half);
        }
    }
    origin = 100;
    canvas_width = 640;
    MOD_CHECK_EQ(stop(), POP_OK);
    os_dlclose(lib);
}

#include "../mods_internal.h"
#include "../sprite_view.h"
#include "../../runtime/loader.h"
#include "../../runtime/memory.h"
#include "../../runtime/win32.h"
#include "../../host/landmark.h"
namespace {
uint64_t evidence_frame = 91;
uint32_t evidence_handle = 0x10007, evidence_revision = 9;
bool mutate_projected_entity = false;
constexpr uint32_t entity_ptr = 0x8e0428 + 7 * 179, point_ptr = 0xd010000, quad_ptr = 0xd010100,
                   texture_block_ptr = 0xd010200;
void dispatch_sprite(uint32_t addr, uint32_t stack, uint32_t ret = 0x401000) {
    X86 *c = loader_context();
    c->r[R_ESP] = stack;
    wr32(stack, ret);
    c->r[R_ECX] = quad_ptr;
    int i = recomp_index_of(addr);
    MOD_CHECK(i >= 0);
    if (i >= 0)
        recomp_hook_ptrs[i](c, (uint32_t)i);
}
void synthetic_sprite_path(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *, void *) {
    if (cpu->target == 0x46f080) {
        uint32_t stack = cpu->esp - 0x100;
        wr32(stack + 4, point_ptr);
        dispatch_sprite(0x46dbe0, stack);
    } else if (cpu->target == 0x46dbe0) {
        if (mutate_projected_entity)
            wr16(entity_ptr + 36, 42);
        float x = 710, y = 210;
        memcpy(gm_ptr(point_ptr + 12), &x, 4);
        memcpy(gm_ptr(point_ptr + 16), &y, 4);
    } else if (cpu->target == 0x45f4a0) {
        dispatch_sprite(0x4f95a0, cpu->esp - 0x100);
    } else if (cpu->target == 0x4f98a0) {
        wr32(quad_ptr + 24, texture_block_ptr);
        wr32(texture_block_ptr + 0x40, evidence_handle);
    }
    MOD_CHECK_EQ(mods_hook_return(api, cpu, 0, 0), POP_OK);
}
} // namespace
extern "C" uint64_t host_sprite_frame_id() {
    return evidence_frame;
}
extern "C" uint32_t host_sprite_texture_revision(uint32_t h) {
    return h == evidence_handle ? evidence_revision : 0;
}
MOD_TEST_SUITE(display_projection_fixture_attributes_deferred_entity_sprite) {
    sched_set_guest_thread(true);
    mods_hooks_reset();
    mods_set_context_provider(nullptr);
    mem_init();
    loader_load(nullptr);
    MOD_CHECK(mods_symbols_load(nullptr));
    memset(gm_ptr(entity_ptr), 0, 179);
    wr8(entity_ptr + 42, 10);
    wr16(entity_ptr + 36, 41);
    wr16(0x87ca90, 852);
    wr16(0x87ca92, 480);
    float ox = 100, oy = 12;
    memcpy(gm_ptr(0xa68f64), &ox, 4);
    memcpy(gm_ptr(0xa68f60), &oy, 4);
    // Only the guest function bodies are synthetic. Dispatch, nested hook
    // scopes, the C fixture and the production game-view query are real.
    for (uint32_t addr : {0x46f080u, 0x46dbe0u, 0x45f4a0u, 0x4f95a0u, 0x4f98a0u}) {
        uint32_t hook = 0;
        MOD_CHECK_EQ(mods_hook_install_ex(0, addr, 0, synthetic_sprite_path, POP_HOOK_REPLACE,
                                          POP_HOOK_NO_GAME_VIEW, nullptr, &hook),
                     POP_OK);
    }
    MOD_CHECK_EQ(mods_sprite_hooks_init(), 1); // host runtime, no plugin loaded
    evidence_frame = 91;
    loader_init_context(loader_context());
    uint32_t stack = loader_context()->r[R_ESP] - 0x200;
    const auto captures = mods_view_test_push_count();
    mutate_projected_entity = true;
    wr32(stack + 8, entity_ptr);
    dispatch_sprite(0x46f080, stack);
    MOD_CHECK_EQ(rd16(entity_ptr + 36), 42); // original changed the live record
    mutate_projected_entity = false;
    wr16(entity_ptr + 36, 41);
    PopSpriteView v{};
    MOD_CHECK(mods_entity_sprite(41, 91, 0, &v));
    MOD_CHECK_EQ(v.slot, 7u);
    MOD_CHECK_EQ(v.entity_id, 41u);
    MOD_CHECK_EQ(v.texture_handle, 0u);
    // The human animation receives its entity in the caller's stack local,
    // not as an explicit parameter. These are the pinned call-site bytes.
    wr32(stack + 0x38, entity_ptr);
    dispatch_sprite(0x45f4a0, stack, 0x468eb8);
    // A later UI pass may change the origin before deferred resolution.
    float ui_origin = 900;
    memcpy(gm_ptr(0xa68f64), &ui_origin, 4);
    // Texture resolution happens AFTER the human hook returns.
    dispatch_sprite(0x4f98a0, stack);
    MOD_CHECK(mods_entity_sprite(41, 91, 0, &v));
    MOD_CHECK_EQ(v.texture_handle, evidence_handle);
    MOD_CHECK(v.texture_handle != texture_block_ptr);
    MOD_CHECK_EQ(v.texture_revision, 9u);
    MOD_CHECK_EQ(v.origin_x, 100);
    MOD_CHECK_EQ(v.origin_y, 12);
    MOD_CHECK_EQ(v.x, 710);
    MOD_CHECK_EQ(v.y, 210);
    MOD_CHECK_EQ(v.width, 852);
    MOD_CHECK(!mods_entity_sprite(7, 91, 0, &v)); // slot is not the decoded id
    MOD_CHECK(!mods_entity_sprite(41, 90, 0, &v));
    HostD3DDrawSnapshot draw{};
    draw.kind = HOST_DRAW_PRIMITIVE;
    draw.screen_min_x = 700;
    draw.screen_max_x = 720;
    draw.screen_min_y = 200;
    draw.screen_max_y = 220;
    draw.texture_handle = evidence_handle + 1;
    draw.texture_revision = 9;
    LandmarkSpriteEvidence own{91, 41, evidence_handle, 9, true};
    auto visible = [&]() {
        return landmark_visibility(true, 41, 91, true, 710, 210, 852, 480, own, &draw, 1);
    };
    MOD_CHECK(visible() == LandmarkVisibility::not_drawn); // a covering unrelated draw cannot pass
    draw.texture_handle = evidence_handle;
    MOD_CHECK(visible() == LandmarkVisibility::visible);
    draw.texture_revision = 10;
    MOD_CHECK(visible() == LandmarkVisibility::not_drawn);
    // Regression: real gameplay has a nonzero sprite origin. The original
    // local point misses the draw even with the right entity/handle/revision.
    draw.texture_revision = 9;
    draw.screen_min_x += 100;
    draw.screen_max_x += 100;
    draw.screen_min_y += 12;
    draw.screen_max_y += 12;
    MOD_CHECK(visible() == LandmarkVisibility::not_drawn);
    MOD_CHECK(landmark_visibility(true, 41, 91, true, 710, 210, 852, 480, own, &draw, 1, v.origin_x,
                                  v.origin_y) == LandmarkVisibility::visible);
    draw.texture_handle++;
    MOD_CHECK(landmark_visibility(true, 41, 91, true, 710, 210, 852, 480, own, &draw, 1, v.origin_x,
                                  v.origin_y) == LandmarkVisibility::not_drawn);
    draw.texture_handle--;
    MOD_CHECK(landmark_visibility(true, 41, 90, true, 710, 210, 852, 480, own, &draw, 1, v.origin_x,
                                  v.origin_y) == LandmarkVisibility::unavailable);
    // Actual submission records ownership; an unrelated texture does not.
    MOD_CHECK(mods_entity_sprite(41, 91, 0, &v));
    MOD_CHECK_EQ(v.drawn, 0u);
    draw.texture_handle++;
    host_sprite_record_draw(&draw);
    MOD_CHECK(mods_entity_sprite(41, 91, 0, &v));
    MOD_CHECK_EQ(v.drawn, 0u);
    draw.texture_handle--;
    draw.seq = 123;
    host_sprite_record_draw(&draw);
    MOD_CHECK(mods_entity_sprite(41, 91, 0, &v));
    MOD_CHECK_EQ(v.drawn, 1u);
    MOD_CHECK_EQ(v.draw_seq, 123u);
    // A new frame invalidates both entity observations and deferred quad ids.
    ++evidence_frame;
    dispatch_sprite(0x4f98a0, stack);
    MOD_CHECK(!mods_entity_sprite(41, 91, 0, &v));
    MOD_CHECK(!mods_entity_sprite(41, 92, 0, &v));
    // UI portraits call the same animation function from a different site.
    wr32(stack + 8, entity_ptr);
    dispatch_sprite(0x46f080, stack);
    dispatch_sprite(0x45f4a0, stack, 0x401000);
    dispatch_sprite(0x4f98a0, stack);
    MOD_CHECK(mods_entity_sprite(41, 92, 0, &v));
    MOD_CHECK_EQ(v.texture_handle, 0u);
    MOD_CHECK_EQ(mods_view_test_push_count(), captures);

    // Internal provenance reads this entity at callback entry, even inside a
    // mod with an older immutable view. That outer view must remain intact.
    mods_view_push();
    PopEntityView outer{};
    MOD_CHECK_EQ(mods_entity(7, &outer), POP_OK);
    MOD_CHECK_EQ(outer.id, 41);
    wr16(entity_ptr + 36, 55);
    ++evidence_frame;
    wr32(stack + 8, entity_ptr);
    dispatch_sprite(0x46f080, stack);
    MOD_CHECK(mods_entity_sprite(55, evidence_frame, 0, &v));
    MOD_CHECK_EQ(mods_entity(7, &outer), POP_OK);
    MOD_CHECK_EQ(outer.id, 41);
    mods_view_pop();
    wr16(entity_ptr + 36, 41);

    // Full snapshots are still provided to ordinary mod hooks nested in the
    // internal provenance hooks; mutating guest memory cannot change one.
    uint32_t user_hook = 0;
    unsigned user_calls = 0;
    MOD_CHECK_EQ(mods_hook_install(
                     MODS_OWNER_FIRST_MOD, 0x4f95a0,
                     [](const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *user) {
                         ++*static_cast<unsigned *>(user);
                         PopEntityView first{}, again{};
                         MOD_CHECK_EQ(mods_entity(7, &first), POP_OK);
                         wr16(entity_ptr + 36, 62);
                         MOD_CHECK_EQ(mods_entity(7, &again), POP_OK);
                         MOD_CHECK_EQ(again.id, first.id);
                         wr16(entity_ptr + 36, first.id);
                     },
                     POP_HOOK_BEFORE, &user_calls, &user_hook),
                 POP_OK);
    auto before_user = mods_view_test_push_count();
    dispatch_sprite(0x45f4a0, stack, 0x468eb8);
    MOD_CHECK_EQ(user_calls, 1u);
    MOD_CHECK_EQ(mods_view_test_push_count() - before_user, 1u);
    MOD_CHECK_EQ(mods_hook_remove(MODS_OWNER_FIRST_MOD, user_hook), POP_OK);

    for (uint32_t invalid : {entity_ptr + 1, 0x8e0428u - 1, 0x8e0428u + 2000 * 179}) {
        ++evidence_frame;
        wr32(stack + 8, invalid);
        dispatch_sprite(0x46f080, stack);
        MOD_CHECK(!mods_entity_sprite(41, evidence_frame, 0, &v));
    }
    ++evidence_frame;
    wr8(entity_ptr + 42, 0);
    wr32(stack + 8, entity_ptr);
    dispatch_sprite(0x46f080, stack);
    MOD_CHECK(!mods_entity_sprite(41, evidence_frame, 0, &v));
    wr8(entity_ptr + 42, 10);
    mods_hooks_reset();
}

#include "../../host/fixture_view.h"
MOD_TEST_SUITE(display_fixture_measured_camera_original_projection) {
    sched_set_guest_thread(true);
    mods_hooks_reset();
    mem_init();
    loader_load(nullptr);
    // Both saved turn-860 tribe records contain this matrix and zoom at +0x2a.
    const int32_t matrix[] = {-3394, -1, 16029, -5585, 15357, -1182, -15025, -5709, -3181};
    memcpy(gm_ptr(0x74a354), matrix, sizeof matrix);
    constexpr uint32_t camera = 0x89d1c8, ui = 0xd020000;
    wr32(0x74a350, camera);
    wr32(camera + 0x2a, 40786);
    wr32(0xafc2f4, ui);
    wr32(0x87ca5c, 46000);
    wr32(0x87ca64, 6500);
    wr32(0x87ca68, 11);
    wr8(ui + 0xcf8, 4);
    wr8(ui + 0xcfc, 4);
    float unit = 1.f / 16, ox = 100, oy = 0;
    memcpy(gm_ptr(ui + 0xd00), &unit, 4);
    memcpy(gm_ptr(ui + 0xd04), &unit, 4);
    memcpy(gm_ptr(0xa68f64), &ox, 4);
    memcpy(gm_ptr(0xa68f60), &oy, 4);
    wr16(0x87caa6, 256);
    wr16(0x87ca92, 480);
    auto project = [&](int cx, int cz, int width, float expected_y, int wx = 4352, int wz = 55040) {
        MOD_CHECK(fixture_camera_position(cx, cz));
        wr16(0x87ca90, width);
        wr16(0x87caa4, width / 2);
        memset(gm_ptr(point_ptr), 0, 32);
        wr32(point_ptr, (wx - int(rd16(camera + 0x24))) >> 1);
        wr32(point_ptr + 4, 128);
        wr32(point_ptr + 8, (wz - int(rd16(camera + 0x26))) >> 1);
        X86 *cpu = loader_context();
        loader_init_context(cpu);
        wr32(cpu->r[R_ESP] + 4, point_ptr);
        // Actual generated guest body: no stand-in for the projection math.
        recomp_base_ptrs[recomp_index_of(0x46dbe0)](cpu);
        float x, y;
        memcpy(&x, gm_ptr(point_ptr + 12), 4);
        memcpy(&y, gm_ptr(point_ptr + 16), 4);
        MOD_CHECK_EQ(y, expected_y);
        return x;
    };
    MOD_CHECK_EQ(project(5386, 55651, 540, 200.0625f), 234.75f);
    MOD_CHECK_EQ(project(5349, 55651, 852, 201.f), 389.9375f);
    MOD_CHECK_EQ(project(4600, 59000, 540, 230.375f), -80.5f);
    MOD_CHECK_EQ(project(4600, 59000, 852, 230.375f), 75.5f);
    // Turn-861 brave 1828 from 8510c38: independent original guest arithmetic
    // confirms the replacement landmark lies in the widened-only band.
    MOD_CHECK_EQ(project(4600, 59000, 540, 242.3125f, 4864, 55552), -57.625f);
    MOD_CHECK_EQ(project(4600, 59000, 852, 242.3125f, 4864, 55552), 98.375f);
    MOD_CHECK_EQ(rd16(camera + 0x24), 4600);
    MOD_CHECK_EQ(rd16(camera + 0x26), 59000);
    MOD_CHECK(!fixture_camera_position(65536, 59000));
    MOD_CHECK_EQ(project(5386, 55651, 540, 213.375f, 4864), 223.5625f);
    // The same view-relative selection and ground gesture retain the same
    // inverse-projection offsets in classic and widened runs.
    for (int half : {270, 426}) {
        wr16(0x87caa4, half);
        int32_t x, y;
        MOD_CHECK(fixture_view_point(-46, 208, &x, &y));
        MOD_CHECK_EQ(x, 100 + half - 46);
        MOD_CHECK_EQ(y, 208);
        MOD_CHECK(fixture_view_point(-20, 245, &x, &y));
        MOD_CHECK_EQ(x, 100 + half - 20);
        MOD_CHECK_EQ(y, 245);
    }
    // Semantic world clicks match the original projection at both camera
    // positions, with both widths, across wrapped deltas and terrain heights.
    for (int width : {540, 852})
        for (int cx : {5386, 4600}) {
            MOD_CHECK(fixture_camera_position(cx, cx == 4600 ? 59000 : 55651));
            wr16(0x87ca90, width);
            wr16(0x87caa4, width / 2);
            const auto projection = fixture_world_projection(100, 0);
            MOD_CHECK(projection.valid);
            for (int wx : {4352, 4864, 5376, 65000})
                for (int wz : {55040, 55552, 100})
                    for (int altitude : {0, 128, 256}) {
                        auto delta = [](int a, int b) {
                            int d = a - b;
                            if (d >= 32768)
                                d -= 65536;
                            else if (d <= -32768)
                                d += 65536;
                            return d >> 1;
                        };
                        memset(gm_ptr(point_ptr), 0, 32);
                        wr32(point_ptr, delta(wx, rd16(camera + 0x24)));
                        wr32(point_ptr + 4, altitude);
                        wr32(point_ptr + 8, delta(wz, rd16(camera + 0x26)));
                        X86 *cpu = loader_context();
                        loader_init_context(cpu);
                        wr32(cpu->r[R_ESP] + 4, point_ptr);
                        recomp_base_ptrs[recomp_index_of(0x46dbe0)](cpu);
                        float px, py;
                        memcpy(&px, gm_ptr(point_ptr + 12), 4);
                        memcpy(&py, gm_ptr(point_ptr + 16), 4);
                        int32_t gx = -1, gy = -1;
                        bool resolved = fixture_world_point(projection, wx, wz, altitude, &gx, &gy);
                        bool in_view = px >= 0 && px < width && py >= 0 && py < 480 &&
                                       std::round(px) < width && std::round(py) < 480;
                        MOD_CHECK_EQ(resolved, in_view);
                        if (resolved) {
                            MOD_CHECK_EQ(gx, (int)std::round(px + 100));
                            MOD_CHECK_EQ(gy, (int)std::round(py));
                        }
                        if (wx == 5376 && wz == 55040 && altitude == 128) {
                            // Ground destination must be reachable onscreen from the walk
                            // camera; after walking, the shaman stays in the wide-only strip.
                            MOD_CHECK_EQ(resolved, cx == 5386 || width == 852);
                        }
                    }
            MOD_CHECK(!fixture_world_point({}, 5376, 55040, 128, nullptr, nullptr));
            int32_t gx, gy;
            MOD_CHECK(!fixture_world_point(projection, 65536, 55040, 128, &gx, &gy));
        }
    // No plugin and no entity projection hook: the D3D host observation
    // projects a present-but-culled entity using this frame's classic globals.
    mods_sprite_reset();
    evidence_frame = 200;
    memset(gm_ptr(0x8e0428), 0, 2000 * 179);
    wr8(entity_ptr + 42, 1);
    wr16(entity_ptr + 36, 1815);
    wr16(entity_ptr + 61, 5203);
    wr16(entity_ptr + 63, 55048);
    wr16(entity_ptr + 65, 128);
    MOD_CHECK(fixture_camera_position(4600, 59000));
    wr16(0x87ca90, 540);
    wr16(0x87caa4, 270);
    HostD3DDrawSnapshot unrelated{};
    unrelated.kind = HOST_DRAW_PRIMITIVE;
    host_sprite_record_draw(&unrelated);
    // A later UI reset must not change the recorded projection.
    wr16(0x87ca90, 852);
    wr16(0x87caa4, 426);
    FixtureWorldProjection recorded;
    MOD_CHECK(host_sprite_projection(200, &recorded));
    MOD_CHECK_EQ(recorded.width, 540);
    mods_view_push();
    PopSpriteView v{};
    MOD_CHECK(mods_entity_sprite(1815, 200, 0, &v));
    MOD_CHECK(v.projected);
    MOD_CHECK_EQ(v.drawn, 0u);
    MOD_CHECK_EQ(v.x, -117.6875f);
    MOD_CHECK_EQ(v.y, 258.1875f);
    LandmarkSpriteEvidence none{200, 1815, 0, 0, true};
    MOD_CHECK(landmark_visibility(true, 1815, 200, v.projected, v.x, v.y, v.width, v.height, none,
                                  nullptr, 0) == LandmarkVisibility::hidden);
    MOD_CHECK(!mods_entity_sprite(1816, 200, 0, &v)); // absent from this simulation view
    MOD_CHECK(landmark_visibility(false, 1816, 200, true, -117.6875f, 258.1875f, 540, 480, none,
                                  nullptr, 0) == LandmarkVisibility::unavailable);
    mods_view_pop();
    MOD_CHECK(!host_sprite_projection(201, &recorded)); // no stale-frame projection
    mods_hooks_reset();
}
