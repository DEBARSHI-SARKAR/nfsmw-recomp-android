// fixture.cpp - headless parity fixture for the recompiled game.
//
// Reproduces, instruction path for instruction path, what the Unicorn oracle
// tools/recomp/oracle.py does: the Level 2001 scripted startup
// followed by N accepted outer frames of the offline driver 004a5590.  It runs
// the same original functions in the same order with the same arguments, feeds
// the same asset bytes into the same guest addresses, and pins the same
// non-deterministic inputs.  It never runs the PE entry point, because the
// oracle does not either.
//
//   RECOMP_FIXTURE=frames:32   how many outer frames to run (default 32)
//   RECOMP_TRACE*              read by the entry/exit recorder that
//                                  a local trace harness links into the
//                                  traced build; this file only announces the
//                                  phase boundaries through parity_trace_phase
//   RECOMP_OUT=<dir>           snapshot directory
//                                  (default build/recomp/parity/native)
//   RECOMP_DATA=<dir>          game data root (default original/gog)
//   RECOMP_EXE=<path>          image to load (default the loader's)
//
// Snapshots are written after startup ("startup") and after every frame
// ("frameNN"), one file per compared region plus a JSON manifest.
//
// Headless by construction: it links the DirectX shims with
// -DRECOMP_NULL_HOST, so every host callback is a strong no-op.  No window,
// no device, no audio stream, no input device is ever opened.
#include "game_config.h"
#include "guest.h"
#include "layout.h"
#include "loader.h"
#include "memory.h"
#include "imports.h"
#include "snapshot.h"
#include "win32.h"
#include "mods_seam.h"
#include "../dx/dx.h"

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <string>
#include <vector>
#include "../platform/os.h"

// ---------------------------------------------------------------------------
// Pins. Every value here mirrors the deterministic adapter in
// tools/recomp/oracle.py; both sides must use the same timing and scratch layout.
// ---------------------------------------------------------------------------
// Announced to the entry/exit recorder in the traced build so a bisection can
// target one phase: 0 is the scripted startup, N >= 1 is outer frame N. The
// weak definition here is the no-op the ordinary fixture links against.
extern "C" __attribute__((weak)) void parity_trace_phase(int phase) {
    (void)phase;
}

namespace {

// probe.py: clock_ms = 100 before the first outer frame, += 50 per frame.
//
// The counter itself now lives in the runtime, installed by
// host_set_time_source_pinned below, so that the fixture and the boot hosts
// pin one clock rather than two with the same name. These read through to it.
uint32_t clock_ms() {
    return host_pinned_clock_value();
}

// probe.py holds the scratch pages it maps at 0x2000000 and 0x3000000.  The
// recompiled arena covers those addresses inside the heap arena, so the same
// literal addresses are used and the heap must never reach them.
const uint32_t FX_END = 0x03000000u; // probe's END / return address page
const uint32_t FX_POS = FX_END + 4096;
const uint32_t FX_REC = FX_END + 8192;
const uint32_t FX_FRAMES = FX_END + 16384;
const uint32_t FX_PARAMS = FX_END + 65536;
const uint32_t FX_OBJS = 0x03020000u;
const uint32_t FX_SHAPES = 0x03060000u;
const uint32_t FX_SCRATCH_LO = 0x03000000u;
// Everything below this address is reserved out of the guest heap before any
// guest code runs, so no allocation can ever land on the harness stack or on
// the scratch pages.
const uint32_t FX_RESERVE_HI = 0x03100000u;

// probe.py's STACK: the harness frame is placed at the same guest addresses in
// both engines, so a stack pointer the guest stores anywhere compares equal
// and the function-level trace can compare ESP directly.
const uint32_t FX_STACK = 0x0200f000u;
const uint32_t FX_SCRATCH_HI = 0x03100000u;

// Game globals the fixture writes or reads directly (probe.py addresses).
const uint32_t G_UNITS = 0x008e0428u;
const uint32_t G_CELLS = 0x008a03e4u;
const uint32_t G_TRIBES = 0x0089d1c8u;
const uint32_t TRIBE_STRIDE = 0x0c65u;
const uint32_t G_COMMAND_FRAME = 0x0089d184u;
const uint32_t G_SIM_FRAME = 0x0089d188u;
const uint32_t G_SEED = 0x0089d178u;
const uint32_t G_LAND_FLAGS = 0x0089c661u;
const uint32_t G_RENDER_FLAGS = 0x0089c669u;
const uint32_t G_SETTINGS = 0x00895da8u;
const uint32_t G_PARAM_CURSOR = 0x00892443u;
const uint32_t G_ANIM_COUNTS = 0x0059df44u;
const uint32_t G_SHAPES_PTR = 0x0059df3cu;
const uint32_t G_SHAPE_COUNT = 0x005ca2ecu;
const uint32_t G_OBJS_PTR = 0x00895ec1u;
const uint32_t G_HDR = 0x0089b741u;
const uint32_t G_TIMER_FNPTR = 0x00d0c784u; // probe points this at a
                                            // timeGetTime-equivalent stub
const uint32_t FN_TIMEGETTIME_THUNK = 0x00527b70u;
const uint32_t G_COMMAND_RATE = 0x0089d161u;

const uint32_t UNIT_STRIDE = 179;
const uint32_t UNIT_COUNT = 2000;

std::string g_out_dir = "build/recomp/parity/native";
std::string g_data_dir = RECOMP_DEVELOPER_GAME_DIR;

// ---------------------------------------------------------------------------
// Small helpers
// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// The mod lifecycle's one ending.
//
// This program has many endings: fail(), the exit(2) in the file helpers,
// several `return 2` paths after the mods are already loaded, a normal return,
// and a guest ExitProcess. All of them reach this function, because it is
// registered with atexit as soon as the mods load - and the ExitProcess shim
// calls exit(), not _exit(), so it runs the handlers too. One path, so there
// is one place for it to be right.
//
// Idempotent. The normal ending calls it directly, at the point in the run
// where it belongs; the atexit registration is the backstop for the others.
// ---------------------------------------------------------------------------
bool g_mods_live = false;
// Whether this run EVER had a mod lifecycle, as opposed to whether it has one
// now. The two differ exactly once - after a successful teardown - and that is
// the difference the run record depends on.
bool g_mods_ever_live = false;

// Revoke mods and complete fixture teardown after guest workers stop.
// Repeated cleanup must preserve the first populated run record and never unload an active callback.
void fixture_mods_teardown() {
    // A run that never had a lifecycle records here, because nothing else
    // will: a RECOMP_NO_MODS fixture run does not reach the loader at all, and
    // Gate A's runs would otherwise be the only ones with no metadata.
    // Writing a record touches no guest memory, so it cannot move parity.
    //
    // GUARDED ON "EVER", NOT "NOW". This function is called twice on a normal
    // run - once at the ordinary ending and once through atexit - and the
    // first call clears g_mods_live. Asking whether mods are live NOW would
    // send the second call down this branch after a real teardown had already
    // happened, and by then the registry is empty, so it would overwrite the
    // loader's full record with an empty mod set. Gate B caught exactly that:
    // five mods loaded, five "mods: loaded example.*" lines in the log, and
    // "mods": [] in the record it compares against.
    if (!g_mods_ever_live) {
        static bool recorded = false;
        if (!recorded) {
            recorded = true;
            mods_write_run_record(host_state_file("mods/run.json").c_str());
        }
        return;
    }
    // Already torn down, and the loader wrote the record while the registry
    // still held everything. Nothing left to do and nothing to overwrite.
    if (!g_mods_live)
        return;
    g_mods_live = false;
    // Ask first: that revokes every mod at once, so nothing a surviving worker
    // does can reach a plugin, whether or not the teardown can run yet.
    mods_shutdown_request();
    // The abandoned frames go FIRST, and unconditionally: this thread has left
    // guest code, so any mod invocation still recorded for it was abandoned by
    // a longjmp - a guest ExitProcess inside a hooked call is the case that
    // matters - and the teardown waits on that count reaching zero. This form
    // touches only this thread's frames and says nothing about the baton, so
    // it works even on a thread the scheduler never registered.
    sched_run_thread_unwind_frames();
    // Then the ending itself, so the scheduler stops offering this thread the
    // baton and skips it when handing off.
    sched_run_thread_finished();
    // Then DRIVE. A polling loop cannot finish this on its own: with the run
    // thread retired nothing advances a timed wait, so a worker sleeping
    // twenty milliseconds would sleep for ever while the poll counted down its
    // bound. This expires deadlines and hands the baton to a thread that can
    // actually run, until every worker has stopped or the bound elapses.
    sched_drive_until_stopped(2.0);
    bool torn_down = mods_shutdown_complete();
    // The drive left this thread registered and holding the baton on purpose:
    // the exits above are mod code and need it. This is where it goes back.
    sched_drive_release();
    if (!torn_down)
        fprintf(stderr, "fixture: %s; mod exits and reclamation did not run\n",
                sched_guest_threads_stopped() ? "a mod callback is still on some thread's stack"
                                              : "a guest worker outlived the run");
}

[[noreturn]] void fail(const char *what) {
    fprintf(stderr, "fixture: FAILED: %s\n", what);
    fflush(stderr);
    exit(2);
}

std::vector<uint8_t> read_file(const std::string &rel) {
    std::string path = g_data_dir + "/" + rel;
    FILE *f = fopen(path.c_str(), "rb");
    if (!f) {
        fprintf(stderr, "fixture: cannot open %s\n", path.c_str());
        exit(2);
    }
    fseek(f, 0, SEEK_END);
    long n = ftell(f);
    fseek(f, 0, SEEK_SET);
    std::vector<uint8_t> v((size_t)n);
    if (n && fread(v.data(), 1, (size_t)n, f) != (size_t)n) {
        fprintf(stderr, "fixture: short read of %s\n", path.c_str());
        exit(2);
    }
    fclose(f);
    return v;
}

void wmem(uint32_t addr, const void *src, size_t n) {
    if (!gm_valid(addr, (uint32_t)n))
        fail("write outside the guest arena");
    memcpy(gm_ptr(addr), src, n);
}
void wzero(uint32_t addr, size_t n) {
    if (!gm_valid(addr, (uint32_t)n))
        fail("zero outside the guest arena");
    memset(gm_ptr(addr), 0, n);
}
uint16_t ld16(const std::vector<uint8_t> &b, size_t off) {
    if (off + 2 > b.size())
        fail("asset read past end");
    return (uint16_t)(b[off] | (b[off + 1] << 8));
}
int32_t ld32s(const uint8_t *p) {
    uint32_t v;
    memcpy(&v, p, 4);
    return (int32_t)v;
}

// ---------------------------------------------------------------------------
// External-call log. Every adapted import is wrapped in place so the manifest
// records exactly what the guest asked for and what it got, and parity.py can
// compare that against the Unicorn oracle's adapters instead of trusting that
// two hand-written pins agree.
// ---------------------------------------------------------------------------
struct ExternalCall {
    const char *name;
    uint32_t args[4];
    uint32_t result;
};
std::vector<ExternalCall> g_external;
const size_t EXTERNAL_LOG_CAP = 4096;

X86 *g_ctx = nullptr;

// probe.py's call(): push the args and a fixed return address, run, take EAX.
uint32_t gcall(uint32_t fn, const std::vector<uint32_t> &args = {}) {
    // guest_call pushes the args then the return address below the current
    // ESP; starting from FX_STACK + 4 + 4*argc puts the return address exactly
    // at FX_STACK and argument i at FX_STACK + 4 + 4*i, which is where
    // probe.py writes them.
    g_ctx->r[R_ESP] = FX_STACK + 4 + 4 * (uint32_t)args.size();
    return guest_call(g_ctx, fn, args.empty() ? nullptr : args.data(), (int)args.size());
}

uint32_t tribe(uint32_t i) {
    return G_TRIBES + i * TRIBE_STRIDE;
}
uint32_t unit(uint32_t i) {
    return G_UNITS + i * UNIT_STRIDE;
}

// ---------------------------------------------------------------------------
// Import wrapping
// ---------------------------------------------------------------------------
struct Wrapped {
    void (*fn)(X86 *);
    const char *name;
    uint8_t argc;
};
Wrapped g_wrapped[8];
size_t g_wrapped_count = 0;

void wrapped_call(X86 *c, size_t i) {
    ExternalCall rec{g_wrapped[i].name, {0, 0, 0, 0}, 0};
    uint8_t argc = g_wrapped[i].argc;
    for (uint8_t k = 0; k < 4 && k < argc; ++k)
        rec.args[k] = arg(c, k);
    g_wrapped[i].fn(c);
    rec.result = c->r[R_EAX];
    if (g_external.size() < EXTERNAL_LOG_CAP)
        g_external.push_back(rec);
    else if (g_external.size() == EXTERNAL_LOG_CAP)
        g_external.push_back(ExternalCall{"(truncated)", {0, 0, 0, 0}, 0});
}
void wrapper_0(X86 *c) {
    wrapped_call(c, 0);
}
void wrapper_1(X86 *c) {
    wrapped_call(c, 1);
}
void wrapper_2(X86 *c) {
    wrapped_call(c, 2);
}
void wrapper_3(X86 *c) {
    wrapped_call(c, 3);
}
void (*const WRAPPERS[4])(X86 *) = {wrapper_0, wrapper_1, wrapper_2, wrapper_3};

// The imports probe.py adapts by hand, plus the clock the fixture pins.
const char *const WRAPPED_NAMES[4] = {"CreateSemaphoreA", "WaitForSingleObject", "ReleaseSemaphore",
                                      "timeGetTime"};

void wrap_external_imports() {
    struct Src {
        const ImportShim *tbl;
        size_t n;
    };
    Src sources[2] = {{g_kernel32_shims, g_kernel32_shim_count}, {g_misc_shims, g_misc_shim_count}};
    for (int w = 0; w < 4; ++w) {
        const ImportShim *found = nullptr;
        for (const Src &s : sources)
            for (size_t i = 0; i < s.n && !found; ++i)
                if (strcmp(s.tbl[i].name, WRAPPED_NAMES[w]) == 0)
                    found = &s.tbl[i];
        if (!found || !found->fn)
            fail("an adapted import has no runtime shim");
        size_t slot = g_wrapped_count++;
        g_wrapped[slot] = Wrapped{found->fn, found->name, found->argc_stdcall};
        ImportShim over{found->dll, found->name, found->argc_stdcall, WRAPPERS[slot]};
        imports_register(&over, 1);
    }
}

// ---------------------------------------------------------------------------
// Contract self-tests. These assert the two things the comparison silently
// depends on: that the guest heap can never reach the harness stack or the
// scratch pages, and that gcall places the call frame exactly where probe.py
// places it.
// ---------------------------------------------------------------------------
uint32_t g_reserved = 0;

// Called once the loader and the DirectX shims have taken their own guest
// memory (loader_load re-initialises the arena, so this cannot run earlier).
// One block from the current allocation frontier up to FX_RESERVE_HI makes the
// harness stack at FX_STACK and the scratch pages at FX_SCRATCH_LO unreachable
// to every later allocation, rather than merely unreached.
void reserve_low_arena() {
    uint32_t frontier = heap_alloc(16, false, 16);
    if (!frontier)
        fail("the guest heap is empty before the reservation");
    if (!heap_free(frontier))
        fail("heap_free rejected the frontier probe");
    if (frontier >= FX_RESERVE_HI)
        fail("the guest heap already starts above the reserved window");
    if (frontier > FX_STACK - 0x10000u)
        fail("the guest heap frontier is already inside the harness stack");
    g_reserved = heap_alloc(FX_RESERVE_HI - frontier, false, 16);
    if (g_reserved != frontier)
        fail("could not reserve the low guest arena");
    uint32_t probe = heap_alloc(16, false, 16);
    if (!probe || probe < FX_RESERVE_HI)
        fail("guest heap can still allocate below the scratch window");
    if (!heap_free(probe))
        fail("heap_free rejected the reservation probe");
}

uint32_t g_selftest_esp = 0, g_selftest_ret = 0, g_selftest_arg = 0;
void frame_probe_shim(X86 *c) {
    g_selftest_esp = c->r[R_ESP];
    g_selftest_ret = rd32(c->r[R_ESP]);
    g_selftest_arg = arg(c, 0);
    set_eax(c, 0);
}

void check_call_frame_layout() {
    uint32_t tramp =
        imports_alloc_trampoline("PARITY", "frame_probe", frame_probe_shim, ARGC_CDECL);
    if (!tramp)
        fail("could not allocate the frame-probe trampoline");
    gcall(tramp, {0x5a5a5a5au});
    if (g_selftest_esp != FX_STACK)
        fail("gcall did not place the return address at probe.py's STACK");
    if (g_selftest_ret != GUEST_RETURN_SENTINEL)
        fail("gcall did not push GUEST_RETURN_SENTINEL");
    if (g_selftest_arg != 0x5a5a5a5au)
        fail("gcall did not place argument 0 at STACK+4");
    // Leave the harness frame exactly as the oracle's is before its first
    // call, so the self-test itself cannot show up as a stack difference.
    wzero(FX_STACK, 64);
}

// ---------------------------------------------------------------------------
// Snapshots
// ---------------------------------------------------------------------------
std::vector<SnapshotRegion> g_regions;
FILE *g_manifest = nullptr;
bool g_manifest_first = true;

void build_regions() {
    g_regions = snapshot_writable_image_regions();
    // Correction 14 adds the heap arena.  Only the window both engines
    // actually populate is comparable: probe.py maps 0x3000000..0x3100000 and
    // nothing else in the arena, so that is the heap region compared.  The
    // rest of the arena has no counterpart in Unicorn.
    g_regions.push_back(SnapshotRegion{"heap_scratch_03000000", FX_SCRATCH_LO, FX_SCRATCH_HI});
    // Task 4 requirement 1 names 00580000..00970000 explicitly. It straddles
    // read-only .text/CSEG/.rdata and the head of .data, so it is dumped as
    // its own region and reported separately.
    g_regions.push_back(SnapshotRegion{"req1_00580000", 0x00580000u, 0x00970000u});
}

void snapshot(const char *tag) {
    size_t n = snapshot_dump_regions(g_out_dir, tag, g_regions);
    if (n != g_regions.size())
        fail("snapshot write failed");
    if (!g_manifest)
        return;
    char frame_field[16] = "null";
    if (strncmp(tag, "frame", 5) == 0)
        snprintf(frame_field, sizeof frame_field, "%d", atoi(tag + 5));
    fprintf(g_manifest, "%s    {\"tag\": \"%s\", \"frame\": %s, \"regions\": [",
            g_manifest_first ? "\n" : ",\n", tag, frame_field);
    g_manifest_first = false;
    bool first = true;
    for (const SnapshotRegion &r : g_regions) {
        fprintf(g_manifest,
                "%s{\"name\": \"%s\", \"lo\": %u, \"hi\": %u, \"hash\": \"%016" PRIx64 "\"}",
                first ? "" : ", ", r.name.c_str(), r.lo, r.hi, snapshot_hash(r.lo, r.hi));
        first = false;
    }
    fprintf(g_manifest,
            "], \"clock_ms\": %u, \"command_frame\": %u, \"sim_frame\": %u, \"seed\": %u}",
            clock_ms(), rd32(G_COMMAND_FRAME), rd32(G_SIM_FRAME), rd32(G_SEED));
    fflush(g_manifest);
}

// ---------------------------------------------------------------------------
// The scripted startup.  Every step is the probe's step, in the probe's order.
// ---------------------------------------------------------------------------
struct Placed {
    uint32_t slot, id;
    uint8_t kind, model, owner;
};
std::vector<Placed> g_placed;

// Construct the deterministic level fixture by invoking translated initialization functions.
// This is a focused comparison harness; normal play enters through the executable startup path.
void startup() {
    std::vector<uint8_t> hdr = read_file("levels/levl2001.hdr");
    std::vector<uint8_t> dat = read_file("levels/levl2001.dat");
    std::vector<uint8_t> objs = read_file("objects/OBJS0-0.DAT");
    std::vector<uint8_t> shapes = read_file("objects/SHAPES.DAT");
    std::vector<uint8_t> starts = read_file("data/VSTART-0.ANI");
    std::vector<uint8_t> frames = read_file("data/VFRA-0.ANI");
    std::vector<uint8_t> cpatr = read_file("levels/cpatr010.dat");
    std::vector<uint8_t> cpscr = read_file("levels/cpscr010.dat");
    const uint8_t tribe_count = hdr.at(0x58);

    // probe.py: u.reg_write(ECX, 0xd05940); call(0x52c440)  -- thiscall
    g_ctx->r[R_ECX] = 0x00d05940u;
    gcall(0x0052c440);

    wzero(G_UNITS, (size_t)UNIT_COUNT * UNIT_STRIDE);
    gcall(0x004ed820);
    gcall(0x004ed880);
    gcall(0x004ee300);

    // Animation frame counts: walk each VSTART chain through VFRA and store
    // {0, count, 0,0,0,0} per entry, exactly as the probe does.
    {
        std::vector<uint8_t> table;
        for (size_t off = 0; off + 4 <= starts.size(); off += 4) {
            uint16_t first = ld16(starts, off);
            uint16_t cursor = first;
            uint32_t n = 0;
            while (cursor) {
                ++n;
                cursor = ld16(frames, (size_t)cursor * 8 + 6);
                if (cursor == first)
                    break;
                if (n > frames.size() / 8)
                    fail("VFRA chain does not terminate");
            }
            table.push_back(0);
            table.push_back((uint8_t)(n & 255));
            table.insert(table.end(), 4, 0);
        }
        wmem(FX_FRAMES, table.data(), table.size());
    }
    wr32(G_ANIM_COUNTS, FX_FRAMES);
    wr32(G_PARAM_CURSOR, FX_PARAMS);

    wmem(FX_OBJS, objs.data(), objs.size());
    wr32(G_OBJS_PTR, FX_OBJS);
    wmem(FX_SHAPES, shapes.data(), shapes.size());
    wr32(G_SHAPES_PTR, FX_SHAPES);
    // 0040c880 relocates each shape record's trailing-footprint pointer.
    {
        uint32_t count = rd32(G_SHAPE_COUNT);
        for (uint32_t si = 0; si < count; ++si) {
            uint32_t sp = FX_SHAPES + si * 48 + 44;
            wr32(sp, rd32(sp) + FX_SHAPES + count * 48);
        }
    }

    wmem(G_HDR, hdr.data(), hdr.size());
    wr32(0x0089c665, 0);
    wzero(0x0089d180, 4);
    wr16(0x0089c6dd, 1);
    wzero(0x0096eac1, 12);
    wr8(0x0088f000, 0);
    wr8(0x005d45a8, 1);

    gcall(0x0042c150);
    gcall(0x0042c210);
    wzero(G_HDR + 0x14, 32);

    wmem(0x0089b9a9, cpatr.data(), cpatr.size());
    wzero(0x0089b9a9, 48);
    wmem(0x009608ba, cpscr.data(), cpscr.size());
    wr32(0x009639ba, 0x009628ba);
    wr8(0x0096eac0, tribe_count);
    wr8(0x0096eabf, tribe_count);

    gcall(0x00485e60, {0});
    gcall(0x0042bfa0); // clear globals, initialises the seed
    gcall(0x00401040); // sunlight default
    gcall(0x0044fa30); // clear terrain
    gcall(0x0042b910); // clear commands
    gcall(0x0043e320);
    gcall(0x0042b7f0); // clear tribes, init enemy AI
    gcall(0x004eef50); // clear level fields
    gcall(0x00443910); // prepare level globals
    gcall(0x0042c8f0);
    gcall(0x00493a40);

    // Terrain cells: heights at +4 of each 16-byte cell.
    {
        std::vector<uint8_t> cells((size_t)16384 * 16, 0);
        for (uint32_t i = 0; i < 16384; ++i) {
            uint16_t h = ld16(dat, (size_t)i * 2);
            cells[(size_t)i * 16 + 4] = (uint8_t)(h & 0xff);
            cells[(size_t)i * 16 + 5] = (uint8_t)(h >> 8);
        }
        wmem(G_CELLS, cells.data(), cells.size());
    }
    gcall(0x0044ddc0);
    gcall(0x0044ddf0, {0, 64, 0});
    gcall(0x00422a60, {0, 64});
    for (uint32_t i = 0; i < 16384; ++i)
        if (dat.at(0x10000 + i))
            wr32(G_CELLS + 16 * i, rd32(G_CELLS + 16 * i) | 4);
    for (uint32_t ti = 0; ti < 4; ++ti)
        wmem(tribe(ti) + 0x8a1, &dat.at(0x14000 + 16 * ti), 4);
    wr8(0x00937ab0, dat.at(0x14042));
    gcall(0x00401090); // sunlight init

    // Constructors.
    for (uint32_t slot = 0; slot < UNIT_COUNT; ++slot) {
        const uint8_t *raw = &dat.at(0x14043 + (size_t)slot * 55);
        uint8_t model = raw[0], kind = raw[1], owner = raw[2];
        if (!kind)
            continue;
        int signed_owner = owner < 128 ? (int)owner : (int)owner - 256;
        if (signed_owner >= (int)tribe_count)
            continue;
        if (kind == 6 && model == 6)
            owner = 0;
        if (kind == 9 || (kind == 6 && model == 9) || (kind == 7 && model == 83))
            continue;
        if (kind == 2) {
            uint32_t p = rd32(G_PARAM_CURSOR);
            int32_t angle = ld32s(raw + 7);
            uint32_t rec[5] = {(uint32_t)(int32_t)(angle / 512), 0, 2, 0xffffffffu, 0};
            wmem(p, rec, sizeof rec);
            wr32(G_PARAM_CURSOR, p + 20);
            wr8(0x0089243a, 1);
        }
        uint8_t pos[6] = {raw[3], raw[4], raw[5], raw[6], 0, 0};
        wmem(FX_POS, pos, sizeof pos);
        uint32_t ptr = gcall(0x004ed8a0, {kind, model, owner, FX_POS});
        if (!ptr)
            fail("allocation returned null");
        wmem(FX_REC, raw, 55);
        gcall(0x00485b00, {ptr, FX_REC});
        wr32(ptr + 8, slot + 1);
        g_placed.push_back(Placed{slot, (ptr - G_UNITS) / UNIT_STRIDE, kind, model, owner});
    }

    gcall(0x004851e0); // trigger references
    for (uint32_t i = 1; i < UNIT_COUNT; ++i)
        if (rd8(unit(i) + 42))
            wr32(unit(i) + 8, 0);
    gcall(0x004866a0); // postprocess 2
    gcall(0x004edf50); // init units
    for (uint32_t i = 1; i < UNIT_COUNT; ++i)
        if (rd8(unit(i) + 42))
            wr32(unit(i) + 16, rd32(unit(i) + 16) & ~0x40000000u);
    for (uint32_t i = 1; i < UNIT_COUNT; ++i) {
        if (rd8(unit(i) + 42) != 6 || rd8(unit(i) + 43) != 6)
            continue;
        for (uint32_t k = 0; k < 10; ++k) {
            uint16_t ref = rd16(unit(i) + 0x72 + 2 * k);
            if (ref)
                wr32(unit(ref) + 16, rd32(unit(ref) + 16) | 0x40000000u);
        }
    }
    gcall(0x004bdd40, {0, 64}); // loader terrain footer
    for (uint32_t ti = 0; ti < 4; ++ti) {
        bool any = false;
        for (const Placed &p : g_placed)
            if (p.owner == ti) {
                any = true;
                break;
            }
        if (!any)
            wr32(tribe(ti) + 0x949, 0x61);
    }
    gcall(0x004ecac0); // postload census
    gcall(0x00503230);
    for (uint32_t ti = 0; ti < 4; ++ti)
        wr32(tribe(ti) + 0x921, 6);
    for (uint32_t ti = 0; ti < tribe_count; ++ti) {
        uint32_t tp = tribe(ti);
        gcall(0x00419790, {tp});
        gcall(0x00419810, {tp});
        gcall(0x00419880, {tp});
        wr32(tp + 0x93d, rd32(tp + 0x93d) & ~0x10000u);
    }
    gcall(0x00516eb0); // alliance setup
    gcall(0x0042ca00); // spells
    wr32(G_SETTINGS, (rd32(G_SETTINGS) & ~0x8000u) | ((hdr.at(0x62) & 2) ? 0x8000u : 0u));
    gcall(0x004438a0);
    gcall(0x0042cbc0, {0}); // trigger counters
    gcall(0x004c3200);
    gcall(0x00417270, {rd8(0x0089c6c3), 1});
    wr16(0x0089ce7a, 0xffff);
    gcall(0x0044a280);
    gcall(0x0044cf80);
    if (rd32(G_SETTINGS) & 0x800)
        gcall(0x0044cf70);
    gcall(0x0048c620);
    gcall(0x004bdd40, {0, 64});
    gcall(0x004206d0);
    // next_level tail
    gcall(0x0042c6d0, {0, 0});
    wr8(0x0089cf12, 0);
    gcall(0x0042cd30);
    gcall(0x00479f00, {8, 0, 0xffffffffu});
    gcall(0x00479f00, {10, 0, 0});
}

// One accepted outer frame: the command-buffer service, the offline driver,
// then the camera post-frame service, exactly as probe.py runs them.
bool outer_frame(uint32_t turn) {
    gcall(0x0043e3c0);
    gcall(0x004a5590);
    uint32_t cmd = rd32(G_COMMAND_FRAME), sim = rd32(G_SIM_FRAME);
    if (cmd != turn || sim != turn) {
        fprintf(stderr, "fixture: frame %u not accepted (command_frame=%u simulation_frame=%u)\n",
                turn, cmd, sim);
        return false;
    }
    gcall(0x0041bae0);
    return true;
}

} // namespace

// Run a bounded deterministic fixture and emit its captured states and diagnostics.
// Keep clock and input pins explicit so results from different runs can be compared meaningfully.
int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    uint32_t frames = 32;
    if (const char *spec = recomp_env("FIXTURE")) {
        if (strncmp(spec, "frames:", 7) == 0)
            frames = (uint32_t)strtoul(spec + 7, nullptr, 0);
        else {
            fprintf(stderr, "fixture: RECOMP_FIXTURE must be frames:N\n");
            return 2;
        }
    }
    if (const char *d = recomp_env("OUT"))
        g_out_dir = d;
    if (const char *d = recomp_env("DATA"))
        g_data_dir = d;

    // --- pins -------------------------------------------------------------
    // Clock: probe.py answers every timeGetTime/GetTickCount with clock_ms.
    // 100 and 50 are probe.py's, and they are the reference the parity
    // baseline was captured against; they are not free to change.
    host_set_time_source_pinned(100, 50);
    // And say so, for the run record. A run whose clock is pinned and one
    // whose clock is the wall are not comparable, and nothing else in the
    // record distinguishes them: the start and step are here rather than in
    // the writer because this is where they are decided.

    mem_init();
    if (!loader_load(recomp_env("EXE"))) {
        fprintf(stderr, "fixture: loader_load: %s\n", loader_error());
        return 2;
    }
    dx_register_shims();
    wrap_external_imports();
    reserve_low_arena();
    g_ctx = loader_context();
    loader_init_context(g_ctx);
    check_call_frame_layout();

    // The fixture is a host too, and mods load here for the same reason they
    // load in boot.cpp: after the image is mapped, before any guest code runs.
    // This binary has its own main and never calls boot.cpp, so nothing else
    // would load them. RECOMP_NO_MODS=1 - what Gate A sets - skips it entirely,
    // which is how this stays byte-identical to the pre-foundation fixture.
    if (!recomp_env("NO_MODS")) {
        mods_host_set_main_thread();
        // This thread IS the run thread: it drives translated code directly and
        // never goes near run_entry, so nothing else would say so. Registering
        // it is not about the hook installs any more - mods_load_all publishes
        // its own pending registrations before it returns - it is about the
        // ENDING. sched_run_thread_finished only admits the pthread that
        // registered, so without this the fixture's teardown reaches a
        // primitive that does nothing, the mod invocations a guest longjmp
        // abandoned are never unwound, and the teardown waits on a count that
        // will never reach zero.
        sched_set_guest_thread(true);
        sched_set_checkpoint(mods_registry_pump);
        if (!mods_load_all())
            fprintf(stderr, "fixture: the mod loader failed\n");
        g_mods_live = true;
        g_mods_ever_live = true;
    }
    // Registered whether or not the mods loaded, and outside that branch on
    // purpose: with mods disabled there is no lifecycle to tear down but there
    // is still a run to record, and an early exit(2) has to record it too.
    // Every ending this program has comes through here.
    atexit(fixture_mods_teardown);

    // probe.py redirects the indirect timer slot 00d0c784 at a stub that
    // behaves like timeGetTime.  Here it points at the real timeGetTime thunk
    // 00527b70, whose import shim answers with the same pinned clock.
    wr32(G_TIMER_FNPTR, FN_TIMEGETTIME_THUNK);

    build_regions();
    std::string manifest_path = g_out_dir + "/manifest.json";
    snapshot_dump(manifest_path, 0, 1); // creates the directory
    g_manifest = fopen(manifest_path.c_str(), "wb");
    if (!g_manifest) {
        fprintf(stderr, "fixture: cannot write %s\n", manifest_path.c_str());
        return 2;
    }
    fprintf(g_manifest, "{\"engine\": \"recomp\", \"frames_requested\": %u, \"snapshots\": [",
            frames);

    parity_trace_phase(0);
    startup();
    parity_trace_phase(-1);
    printf("fixture: startup done, %zu objects placed, seed %u\n", g_placed.size(), rd32(G_SEED));
    snapshot("startup");

    // probe.py configures command rate 20 before the first outer frame.
    wr8(G_COMMAND_RATE, 20);

    uint32_t completed = 0;
    for (uint32_t turn = 1; turn <= frames; ++turn) {
        if (turn > 1)
            host_pinned_clock_advance();
        parity_trace_phase((int)turn);
        bool ok = outer_frame(turn);
        parity_trace_phase(-1);
        if (!ok)
            break;
        completed = turn;
        char tag[32];
        snprintf(tag, sizeof tag, "frame%02u", turn);
        snapshot(tag);
    }

    // The reservation makes an overlap impossible by construction; these
    // checks prove it held and that the allocator is still consistent.
    HeapStats hs = heap_stats();
    std::string heap_err = heap_check();
    if (!heap_err.empty()) {
        fprintf(stderr, "fixture: heap integrity: %s\n", heap_err.c_str());
        return 2;
    }
    if (!heap_owns(g_reserved))
        fail("the low-arena reservation was freed");
    uint32_t probe = heap_alloc(16, false, 16);
    if (!probe || probe < FX_RESERVE_HI) {
        fprintf(stderr,
                "fixture: post-run heap probe returned %08x (reserve_hi %08x, "
                "reserved block %08x owned=%d)\n",
                probe, FX_RESERVE_HI, g_reserved, (int)heap_owns(g_reserved));
        fail("the guest heap reached the harness stack or the scratch window");
    }
    heap_free(probe);
    bool heap_clear = true;

    fprintf(g_manifest, "\n  ],\n  \"external_calls\": [");
    for (size_t i = 0; i < g_external.size(); ++i)
        fprintf(g_manifest,
                "%s\n    {\"name\": \"%s\", \"args\": [%u, %u, %u, %u], \"result\": %u}",
                i ? "," : "", g_external[i].name, g_external[i].args[0], g_external[i].args[1],
                g_external[i].args[2], g_external[i].args[3], g_external[i].result);
    fprintf(g_manifest,
            "\n  ],\n  \"pins\": {\"return_sentinel\": %u, \"harness_stack\": %u,"
            " \"timer_fn_ptr_target\": %u, \"reserved_lo\": %u, \"reserved_hi\": %u,"
            " \"fs_base\": %u, \"seh_head\": %u, \"clock_start\": %u, \"clock_step\": 50},",
            GUEST_RETURN_SENTINEL, FX_STACK, FN_TIMEGETTIME_THUNK, g_reserved, FX_RESERVE_HI,
            g_ctx->fs_base, rd32(g_ctx->fs_base), 100u);
    fprintf(g_manifest,
            "\n  \"frames_completed\": %u,\n  \"objects\": %zu,\n"
            "  \"seed\": %u,\n  \"command_frame\": %u,\n  \"simulation_frame\": %u,\n"
            "  \"land_flags\": %u,\n  \"render_flags\": %u,\n"
            "  \"clock_ms\": %u,\n  \"heap_used_bytes\": %llu,\n"
            "  \"heap_clear_of_scratch\": %s,\n  \"heap_check\": \"%s\"\n}\n",
            completed, g_placed.size(), rd32(G_SEED), rd32(G_COMMAND_FRAME), rd32(G_SIM_FRAME),
            rd32(G_LAND_FLAGS), rd32(G_RENDER_FLAGS), clock_ms(), (unsigned long long)hs.used_bytes,
            heap_clear ? "true" : "false", heap_check().c_str());
    fclose(g_manifest);
    g_manifest = nullptr;

    printf("fixture: %u/%u frames completed, seed %u, command_frame %u, simulation_frame %u\n",
           completed, frames, rd32(G_SEED), rd32(G_COMMAND_FRAME), rd32(G_SIM_FRAME));
    if (!heap_clear)
        fprintf(stderr, "fixture: WARNING heap grew into the probe scratch window\n");
    // After the last snapshot, with the guest threads stopped: a mod's exit
    // runs here or not at all, and it must not run while a frame is being
    // captured or it would be in the bytes parity compares. Same function
    // every other ending reaches, so the ordinary path is not a special case.
    fixture_mods_teardown();

    if (recomp_env("IMPORT_STATS"))
        imports_dump_report(stderr);
    return completed == frames ? 0 : 1;
}
