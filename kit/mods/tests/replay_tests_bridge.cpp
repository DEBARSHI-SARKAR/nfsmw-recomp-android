#define RECOMP_GUEST_MEMORY_OWNER 1 /* points g_mem at a replay arena around each call */
// The mods test builder globs tests/*.cpp and is the only POPM_TESTING build.
#ifdef POPM_TESTING
#include "../native/replay.cpp"
#include "../native/tests/replay_tests.cpp"
#endif
#ifdef POPM_TESTING
#include "../../runtime/guest.h"
#include "../mods_internal.h"
#include "../../runtime/win32.h"
#include "../../runtime/memory.h"
#include "../native/page_track.h"
#include "../native/shim_capture.h"
#include <utility>
#include "../../platform/os.h"
namespace {
// Only for the hand-audited pure leaf below. This adapter does not provide
// complete shim interception, so it must never be used for arbitrary targets.
void translated_leaf(pop_cpu_v1 &cpu, uint8_t *arena, size_t, pop_replay::Seams &) {
    X86 c{};
#define REG(f, r_) c.r[r_] = cpu.f
    REG(eax, R_EAX);
    REG(ecx, R_ECX);
    REG(edx, R_EDX);
    REG(ebx, R_EBX);
    REG(esp, R_ESP);
    REG(ebp, R_EBP);
    REG(esi, R_ESI);
    REG(edi, R_EDI);
#undef REG
    c.eip = cpu.eip;
#define FLAG(f) c.eflags_##f = cpu.f
    FLAG(cf);
    FLAG(zf);
    FLAG(sf);
    FLAG(of);
    FLAG(pf);
    FLAG(af);
    FLAG(df);
#undef FLAG
    std::memcpy(c.st, cpu.st, sizeof c.st);
    c.fpu_top = cpu.fpu_top;
    c.fpu_cw = cpu.fpu_cw;
    c.fpu_sw = cpu.fpu_sw;
    c.fpu_tag = cpu.fpu_tag;
    auto saved = g_mem;
    g_mem = arena;
    recomp_call(&c, 0x00401000);
    g_mem = saved;
#define REG(f, r_) cpu.f = c.r[r_]
    REG(eax, R_EAX);
    REG(ecx, R_ECX);
    REG(edx, R_EDX);
    REG(ebx, R_EBX);
    REG(esp, R_ESP);
    REG(ebp, R_EBP);
    REG(esi, R_ESI);
    REG(edi, R_EDI);
#undef REG
    cpu.eip = c.eip;
#define FLAG(f) cpu.f = c.eflags_##f
    FLAG(cf);
    FLAG(zf);
    FLAG(sf);
    FLAG(of);
    FLAG(pf);
    FLAG(af);
    FLAG(df);
#undef FLAG
    std::memcpy(cpu.st, c.st, sizeof cpu.st);
    cpu.fpu_top = c.fpu_top;
    cpu.fpu_cw = c.fpu_cw;
    cpu.fpu_sw = c.fpu_sw;
    cpu.fpu_tag = c.fpu_tag;
}
} // namespace
MOD_TEST_SUITE(replay_real_translated_leaf) {
    sched_set_guest_thread(true);
    mods_hooks_reset();
    pop_replay::Capture c;
    c.arena_size = 8192;
    c.page_size = 4096;
    pop_cpu_v1_init(&c.entry);
    c.entry.eip = c.entry.target = 0x00401000;
    c.entry.esp = 4096 + 128;
    pop_replay::Page p;
    p.address = 4096;
    p.read = true;
    p.entry.resize(4096);
    uint32_t stack[] = {0x00401000, 100, 40};
    std::memcpy(p.entry.data() + 128, stack, sizeof stack);
    c.pages.push_back(p);
    c.exit = c.entry;
    std::vector<uint8_t> initial(c.arena_size);
    std::copy(p.entry.begin(), p.entry.end(), initial.begin() + p.address);
    pop_replay::Seams seams(c.calls);
    translated_leaf(c.exit, initial.data(), initial.size(), seams);
    MOD_CHECK_EQ(c.exit.eax, 60);
    MOD_CHECK_EQ(c.exit.esp, c.entry.esp + 4);
    MOD_CHECK(pop_replay::run(c, translated_leaf).empty());
    ++c.exit.eax;
    MOD_CHECK(pop_replay::run(c, translated_leaf).rfind("CPU differs: eax", 0) == 0);
}

// The loop closed: capture a real translated call with nothing supplied by
// hand, then replay it. The test above builds its corpus from a page list
// someone wrote down, so it proves replay and says nothing about acquisition.
// This one takes the page set from the fault tracker and the shim record from
// the dispatcher, which is the only evidence that what a capture discovers is
// what a replay needs.
MOD_TEST_SUITE(capture_a_real_call_and_replay_it) {
    os_setenv("RECOMP_TESTING", "1");
    sched_set_guest_thread(true);
    mods_hooks_reset();
    mem_init();

    pop_cpu_v1 entry;
    pop_cpu_v1_init(&entry);
    entry.eip = entry.target = 0x00401000;
    entry.esp = 0x00300000;
    // The call frame: return address then the two arguments the leaf reads.
    wr32(entry.esp, 0x00401000);
    wr32(entry.esp + 4, 100);
    wr32(entry.esp + 8, 40);

    MOD_CHECK(pop_shimcap::begin(64));
    MOD_CHECK(pop_pagetrack::begin(64));
    X86 c{};
    c.r[R_ESP] = entry.esp;
    c.eip = entry.eip;
    recomp_call(&c, 0x00401000);

    const pop_pagetrack::Touch *touches = nullptr;
    size_t touch_count = 0;
    const char *page_why = "";
    const bool pages_ok = pop_pagetrack::end(&touches, &touch_count, &page_why);
    const pop_shimcap::Call *seams = nullptr;
    size_t seam_count = 0;
    const char *seam_why = "";
    const bool seams_ok = pop_shimcap::end(&seams, &seam_count, &seam_why);
    MOD_CHECK(pages_ok);
    MOD_CHECK(seams_ok);
    // A leaf that only reads its own stack calls nothing, and the page it read
    // is the stack page. Both are properties of THIS function, so a tracker
    // that recorded the whole arena or nothing at all fails here.
    MOD_CHECK_EQ(seam_count, 0u);
    MOD_CHECK(touch_count >= 1);
    MOD_CHECK(touch_count < 64);
    MOD_CHECK_EQ(c.r[R_EAX], 60u);

    const size_t page = pop_pagetrack::page_size();
    pop_replay::Capture cap;
    cap.arena_size = GUEST_SIZE;
    cap.page_size = (uint32_t)page;
    cap.live_flags = 0;
    cap.entry = entry;
    // Every field replay compares, taken from the CPU the call left behind.
    // Copying only the ones this leaf was expected to change would make the
    // test agree with its own guess instead of with the run.
    cap.exit = entry;
#define OUT(f, r_) cap.exit.f = c.r[r_]
    OUT(eax, R_EAX);
    OUT(ecx, R_ECX);
    OUT(edx, R_EDX);
    OUT(ebx, R_EBX);
    OUT(esp, R_ESP);
    OUT(ebp, R_EBP);
    OUT(esi, R_ESI);
    OUT(edi, R_EDI);
#undef OUT
    cap.exit.eip = c.eip;
    cap.exit.cf = c.eflags_cf;
    cap.exit.zf = c.eflags_zf;
    cap.exit.sf = c.eflags_sf;
    cap.exit.of = c.eflags_of;
    cap.exit.pf = c.eflags_pf;
    cap.exit.af = c.eflags_af;
    cap.exit.df = c.eflags_df;
    std::memcpy(cap.exit.st, c.st, sizeof cap.exit.st);
    cap.exit.fpu_top = c.fpu_top;
    cap.exit.fpu_cw = c.fpu_cw;
    cap.exit.fpu_sw = c.fpu_sw;
    cap.exit.fpu_tag = c.fpu_tag;
    bool found_stack = false;
    for (size_t i = 0; i < touch_count; ++i) {
        pop_replay::Page p;
        p.address = touches[i].address;
        p.read = touches[i].read;
        p.written = touches[i].written;
        p.entry.assign(touches[i].entry, touches[i].entry + page);
        if (p.written)
            p.exit.assign(g_mem + p.address, g_mem + p.address + page);
        if (p.address <= entry.esp && entry.esp < p.address + page)
            found_stack = true;
        cap.pages.push_back(std::move(p));
    }
    MOD_CHECK(found_stack);
    MOD_CHECK(pop_replay::validate(cap).empty());
    const std::string replayed = pop_replay::run(cap, translated_leaf);
    if (!replayed.empty())
        std::fprintf(stderr, "replay said: %s\n", replayed.c_str());
    MOD_CHECK(replayed.empty());

    // And it is a real comparison: a corpus claiming the wrong exit value is
    // rejected by the same replay.
    ++cap.exit.eax;
    MOD_CHECK(pop_replay::run(cap, translated_leaf).rfind("CPU differs: eax", 0) == 0);
}
#endif
#ifdef POPM_TESTING
namespace {
char capture_last_log[256];
PopModStatus capture_log(const PopModApi *, const char *message) {
    std::snprintf(capture_last_log, sizeof capture_last_log, "%s", message ? message : "");
    return POP_OK;
}
} // namespace
// Every configuration the capture fixture cannot trust must end with it
// refusing to install, because a hook that installed and then wrote nothing
// would look like a candidate that was never called.
MOD_TEST_SUITE(capture_fixture_fails_closed) {
    void *library = os_dlopen((mods_test_build_path("recomp/mods-fixtures/capture_mod") +
                               std::string(os_plugin_extension()))
                                  .c_str());
    MOD_CHECK(library != nullptr);
    if (!library)
        return;
    auto init =
        reinterpret_cast<PopModStatus (*)(const PopModApi *)>(os_dlsym(library, "pop_mod_init"));
    MOD_CHECK(init != nullptr);
    if (!init) {
        os_dlclose(library);
        return;
    }
    PopModApi api{};
    api.log = capture_log;

    // A host that was not built for testing: refused before anything is read.
    const char *saved = recomp_env("TESTING");
    std::string keep = saved ? saved : "";
    os_unsetenv("RECOMP_TESTING");
    os_setenv("RECOMP_CAPTURE_TARGET", "0x00401000");
    os_setenv("RECOMP_CAPTURE_OUT", mods_test_build_path("recomp/should-not-exist.json").c_str());
    capture_last_log[0] = 0;
    MOD_CHECK_EQ(init(&api), POP_E_STATE);
    MOD_CHECK(strstr(capture_last_log, "RECOMP_TESTING") != nullptr);

    // Configured for testing but told neither what to capture nor where.
    os_setenv("RECOMP_TESTING", keep.empty() ? "1" : keep.c_str());
    os_unsetenv("RECOMP_CAPTURE_TARGET");
    os_unsetenv("RECOMP_CAPTURE_OUT");
    capture_last_log[0] = 0;
    MOD_CHECK_EQ(init(&api), POP_E_STATE);
    MOD_CHECK(strstr(capture_last_log, "RECOMP_CAPTURE_TARGET") != nullptr);

    // A target that is neither an address nor a symbol. api.symbol is null
    // here, so the address form is the one this case can reach; the symbol
    // form is exercised by the capture run itself.
    os_setenv("RECOMP_CAPTURE_TARGET", "0xnot-an-address");
    os_setenv("RECOMP_CAPTURE_OUT", mods_test_build_path("recomp/should-not-exist.json").c_str());
    capture_last_log[0] = 0;
    MOD_CHECK_EQ(init(&api), POP_E_STATE);
    MOD_CHECK(strstr(capture_last_log, "not an address") != nullptr);
    os_unsetenv("RECOMP_CAPTURE_TARGET");
    os_unsetenv("RECOMP_CAPTURE_OUT");

    MOD_CHECK_EQ(os_dlclose(library), 0);
}
#endif
#include "../native/tests/page_track_tests.cpp"
#include "../native/tests/shim_capture_tests.cpp"
#include <algorithm>
#ifdef POPM_TESTING
// The corpus writer. Until this suite existed the only thing that exercised it
// was a live capture run, which is a poor place to discover that a field is
// missing or that a rejected capture left a file behind.
extern "C" {
int pop_capture_available(void);
int pop_capture_begin(uint32_t max_pages, uint32_t max_calls);
int pop_capture_write(const char *path, uint32_t target, const pop_cpu_v1 *entry,
                      const pop_cpu_v1 *exit_state, uint32_t live_flags, const char **why);
}
namespace {
std::string slurp(const char *path) {
    FILE *f = std::fopen(path, "rb");
    if (!f)
        return {};
    std::string out;
    char buf[4096];
    size_t n;
    while ((n = std::fread(buf, 1, sizeof buf, f)) > 0)
        out.append(buf, n);
    std::fclose(f);
    return out;
}
} // namespace
MOD_TEST_SUITE(capture_corpus_has_every_field_replay_needs) {
    os_setenv("RECOMP_TESTING", "1");
    mem_init();
    imports_init();
    MOD_CHECK(pop_capture_available() == 1);
    // A scratch directory of this suite's own, created empty for it, so the
    // corpus cannot be a leftover from an earlier run of the same test.
    std::string out_path = std::string(mod_test_dir("capture_corpus")) + "/corpus.json";
    const char *out = out_path.c_str();

    uint32_t tid = imports_resolve("KERNEL32.dll", "GetCurrentThreadId");
    MOD_CHECK(tid != 0);
    if (!tid)
        return;
    const size_t page = pop_pagetrack::page_size();
    const uint32_t written = 0x04000000u & ~(uint32_t)(page - 1);
    const uint32_t read_only = written + (uint32_t)page;
    // Seeded before the window, so the entry snapshot has something in it that
    // is not zero and the exit snapshot has something different.
    wr32(read_only, 0xfeedface);
    wr32(written, 0x11111111);

    pop_cpu_v1 entry;
    pop_cpu_v1_init(&entry);
    entry.target = 0x0040c670;
    entry.esp = 0x03100000;

    MOD_CHECK(pop_capture_begin(64, 8) == 1);
    wr32(written, 0x22222222);
    volatile uint32_t seen = rd32(read_only);
    (void)seen;
    X86 c{};
    c.r[R_ESP] = entry.esp;
    wr32(entry.esp, 0x00401234);
    imports_dispatch(&c, tid);

    pop_cpu_v1 exit_state = entry;
    exit_state.eax = c.r[R_EAX];
    const char *why = "unset";
    MOD_CHECK_EQ(pop_capture_write(out, entry.target, &entry, &exit_state, 0, &why), 1);
    MOD_CHECK(why != nullptr && !*why);

    const std::string text = slurp(out);
    MOD_CHECK(!text.empty());
    // Everything pop_replay::validate and the replay itself read back.
    MOD_CHECK(text.find("\"version\": 1") != std::string::npos);
    MOD_CHECK(text.find("\"target\": 4245104") != std::string::npos);
    MOD_CHECK(text.find("\"arena_size\": 268435456") != std::string::npos);
    MOD_CHECK(text.find("\"live_flags\": 0") != std::string::npos);
    MOD_CHECK(text.find("\"entry\": {") != std::string::npos);
    MOD_CHECK(text.find("\"exit\": {") != std::string::npos);
    MOD_CHECK(text.find("\"pages\": [") != std::string::npos);
    MOD_CHECK(text.find("\"written\": true") != std::string::npos);
    MOD_CHECK(text.find("\"read\": true") != std::string::npos);
    MOD_CHECK(text.find("KERNEL32.dll!GetCurrentThreadId") != std::string::npos);
    // The FPU registers are written as hex floats, so they survive the trip.
    MOD_CHECK(text.find("\"0x0p+0\"") != std::string::npos);

    // And a rejected capture leaves no file at all, which is the property the
    // capture driver relies on to tell refusal from success.
    std::remove(out);
    uint32_t bad = imports_alloc_trampoline("test.dll", "corpus_side_effect", nullptr, 0);
    MOD_CHECK(pop_capture_begin(64, 8) == 1);
    c = X86{};
    c.r[R_ESP] = entry.esp;
    imports_dispatch(&c, bad);
    why = "unset";
    MOD_CHECK_EQ(pop_capture_write(out, entry.target, &entry, &exit_state, 0, &why), 0);
    MOD_CHECK(why != nullptr && strstr(why, "side-effecting") != nullptr);
    MOD_CHECK(slurp(out).empty());
}
#endif
#ifdef POPM_TESTING
// The whole loop, through a file, with shim calls in it.
//
// The review's point was that replay was disconnected at both ends: nothing
// read a serialized corpus, the only translated adapter hard-coded one address
// and ignored Seams, and every recorded seam in a test was fed in by hand. So
// this captures a run that makes real shim calls through imports_dispatch,
// writes the corpus to a file, loads it back with pop_replay::load, and
// replays it with the calls served out of the record at the dispatcher, so the
// shims themselves never run again.
//
// TWO DIFFERENT seams, not the same one twice. Two calls to one seam with the
// same arguments are indistinguishable in either order, so a reordering test
// built on them could not fail whatever the code did.
MOD_TEST_SUITE(capture_to_file_and_replay_with_intercepted_shims) {
    os_setenv("RECOMP_TESTING", "1");
    sched_set_guest_thread(true);
    mods_hooks_reset();
    mem_init();
    imports_init();

    uint32_t tid = imports_resolve("KERNEL32.dll", "GetCurrentThreadId");
    uint32_t ticks = imports_resolve("KERNEL32.dll", "GetTickCount");
    MOD_CHECK(tid != 0);
    MOD_CHECK(ticks != 0);
    if (!tid || !ticks)
        return;

    const size_t page = pop_pagetrack::page_size();
    const uint32_t stack = 0x07000000u & ~(uint32_t)(page - 1);
    pop_cpu_v1 entry;
    pop_cpu_v1_init(&entry);
    entry.target = 0x0040c670;
    entry.esp = stack + (uint32_t)page / 2;
    wr32(entry.esp, 0x00401234);

    // Capture: the two seams, in this order, through the real dispatcher.
    MOD_CHECK_EQ(pop_capture_begin(64, 8), 1);
    X86 c{};
    c.r[R_ESP] = entry.esp;
    imports_dispatch(&c, tid);
    const uint32_t got_tid = c.r[R_EAX];
    c.r[R_ESP] = entry.esp;
    imports_dispatch(&c, ticks);
    const uint32_t got_ticks = c.r[R_EAX];
    pop_cpu_v1 exit_state = entry;
    exit_state.eax = got_tid + got_ticks;

    std::string out = std::string(mod_test_dir("capture_roundtrip")) + "/corpus.json";
    const char *why = "unset";
    MOD_CHECK_EQ(pop_capture_write(out.c_str(), entry.target, &entry, &exit_state, 0, &why), 1);

    // Everything replay needs has to survive the file.
    pop_replay::Capture loaded;
    std::string bad = pop_replay::load(out, &loaded);
    if (!bad.empty())
        std::fprintf(stderr, "load said: %s\n", bad.c_str());
    MOD_CHECK(bad.empty());
    MOD_CHECK_EQ(loaded.calls.size(), 2u);
    MOD_CHECK(!loaded.pages.empty());
    MOD_CHECK_EQ(loaded.entry.size, (uint32_t)sizeof(pop_cpu_v1));
    MOD_CHECK_EQ(loaded.page_size, (uint32_t)page);
    if (loaded.calls.size() != 2)
        return;
    MOD_CHECK(loaded.calls[0].function == "KERNEL32.dll!GetCurrentThreadId");
    MOD_CHECK(loaded.calls[1].function == "KERNEL32.dll!GetTickCount");
    MOD_CHECK_EQ(loaded.calls[0].result, (uint64_t)got_tid);
    MOD_CHECK_EQ(loaded.calls[1].result, (uint64_t)got_ticks);

    // Results the real shims never return, so a replay that reached the real
    // shim instead of the record would not produce this exit value.
    loaded.calls[0].result = 0x11110000u;
    loaded.calls[1].result = 0x00002222u;
    loaded.exit.eax = 0x11112222u;

    // A candidate that makes the same two calls, through the same dispatcher,
    // with the record served in the shims' place.
    auto order = [](uint32_t first, uint32_t second) {
        return [first, second](pop_cpu_v1 &cpu, uint8_t *arena, size_t, pop_replay::Seams &seams) {
            std::string failure;
            uint32_t a = 0, b = 0;
            {
                pop_replay::ServeRecordedShims serving(seams);
                auto saved = g_mem;
                g_mem = arena;
                X86 x{};
                x.r[R_ESP] = cpu.esp;
                imports_dispatch(&x, first);
                a = x.r[R_EAX];
                x.r[R_ESP] = cpu.esp;
                imports_dispatch(&x, second);
                b = x.r[R_EAX];
                g_mem = saved;
                failure = serving.failed();
            }
            cpu.eax = a + b;
            if (!failure.empty())
                throw std::runtime_error(failure);
        };
    };

    const std::string right = pop_replay::run(loaded, order(tid, ticks));
    if (!right.empty())
        std::fprintf(stderr, "replay said: %s\n", right.c_str());
    MOD_CHECK(right.empty());

    // The same two calls in the other order: the sum is identical, so only the
    // sequence check can catch it. It must.
    const std::string wrong = pop_replay::run(loaded, order(ticks, tid));
    MOD_CHECK(!wrong.empty());
    MOD_CHECK(wrong.find("mismatch") != std::string::npos);

    // And a candidate that makes one call too few fails on the unused record.
    auto once = [tid](pop_cpu_v1 &cpu, uint8_t *arena, size_t, pop_replay::Seams &seams) {
        pop_replay::ServeRecordedShims serving(seams);
        auto saved = g_mem;
        g_mem = arena;
        X86 x{};
        x.r[R_ESP] = cpu.esp;
        imports_dispatch(&x, tid);
        cpu.eax = 0x11112222u;
        g_mem = saved;
    };
    MOD_CHECK(!pop_replay::run(loaded, once).empty());
}
#endif
#ifdef POPM_TESTING
// Replays a corpus captured from a live run.
//
// RECOMP_REPLAY_CORPUS names the file; without it the suite captures a small one
// of its own first, so it always exercises the same path and never passes by
// being skipped. With it, this is the check that a corpus taken from the real
// game replays: load it, run the original at its own recorded target through
// the dispatch table with the recorded shim calls served in the shims' place,
// and require every live register and every written page to match.
MOD_TEST_SUITE(replay_a_captured_corpus_at_its_own_target) {
    os_setenv("RECOMP_TESTING", "1");
    sched_set_guest_thread(true);
    mods_hooks_reset();
    mem_init();
    imports_init();

    std::string path;
    const char *named = recomp_env("REPLAY_CORPUS");
    if (named && *named) {
        path = named;
        std::fprintf(stderr, "[replay] using the corpus at %s\n", path.c_str());
    } else {
        // One of our own, from the leaf the translated adapter tests use, so
        // this suite has something real to replay in every run.
        const size_t page = pop_pagetrack::page_size();
        const uint32_t stack = 0x08000000u & ~(uint32_t)(page - 1);
        pop_cpu_v1 entry;
        pop_cpu_v1_init(&entry);
        entry.eip = entry.target = 0x00401000;
        entry.esp = stack + (uint32_t)page / 2;
        wr32(entry.esp, 0x00401000);
        wr32(entry.esp + 4, 100);
        wr32(entry.esp + 8, 40);

        MOD_CHECK_EQ(pop_capture_begin(64, 8), 1);
        X86 c{};
        c.r[R_ESP] = entry.esp;
        c.eip = entry.eip;
        recomp_call(&c, 0x00401000);
        pop_cpu_v1 exit_state = entry;
#define OUT(f, r_) exit_state.f = c.r[r_]
        OUT(eax, R_EAX);
        OUT(ecx, R_ECX);
        OUT(edx, R_EDX);
        OUT(ebx, R_EBX);
        OUT(esp, R_ESP);
        OUT(ebp, R_EBP);
        OUT(esi, R_ESI);
        OUT(edi, R_EDI);
#undef OUT
        exit_state.eip = c.eip;
        exit_state.df = c.eflags_df;
        std::memcpy(exit_state.st, c.st, sizeof exit_state.st);
        exit_state.fpu_top = c.fpu_top;
        exit_state.fpu_cw = c.fpu_cw;
        exit_state.fpu_sw = c.fpu_sw;
        exit_state.fpu_tag = c.fpu_tag;
        path = std::string(mod_test_dir("replay_at_target")) + "/corpus.json";
        const char *why = "unset";
        MOD_CHECK_EQ(pop_capture_write(path.c_str(), entry.target, &entry, &exit_state, 0, &why),
                     1);
    }

    pop_replay::Capture c;
    const std::string bad = pop_replay::load(path, &c);
    if (!bad.empty())
        std::fprintf(stderr, "[replay] load said: %s\n", bad.c_str());
    MOD_CHECK(bad.empty());
    if (!bad.empty())
        return;

    // The target comes from the corpus, not from a constant in this file.
    // That was the review's point about the old adapter.
    const uint32_t target = c.entry.target;
    MOD_CHECK(target != 0);
    std::fprintf(stderr, "[replay] target %08x, %zu pages, %zu shim calls\n", target,
                 c.pages.size(), c.calls.size());

    const std::string verdict = pop_replay::run(c, pop_replay::translated(target));
    if (!verdict.empty())
        std::fprintf(stderr, "[replay] %s\n", verdict.c_str());
    MOD_CHECK(verdict.empty());

    // And it is a real comparison: a corpus claiming a different exit value is
    // rejected by the same replay.
    if (verdict.empty()) {
        pop_replay::Capture wrong = c;
        ++wrong.exit.eax;
        MOD_CHECK(!pop_replay::run(wrong, pop_replay::translated(target)).empty());
    }
}

namespace {
std::pair<std::string, std::string> loader_rule_corpus(const char *suite) {
    os_setenv("RECOMP_TESTING", "1");
    sched_set_guest_thread(true);
    mods_hooks_reset();
    mem_init();
    imports_init();
    std::string path = std::string(mod_test_dir(suite)) + "/corpus.json";
    pop_cpu_v1 cpu;
    pop_cpu_v1_init(&cpu);
    cpu.target = cpu.eip = 0x00401000u;
    cpu.st[0] = -1.5;
    MOD_CHECK_EQ(pop_capture_begin(8, 8), 1);
    wr32(0x08000000u, 0x1234u);
    const char *why = nullptr;
    MOD_CHECK_EQ(pop_capture_write(path.c_str(), cpu.target, &cpu, &cpu, 0, &why), 1);
    pop_replay::Capture capture;
    MOD_CHECK(pop_replay::load(path, &capture).empty());
    MOD_CHECK_EQ(capture.entry.st[0] * 2, -3);
    return {path, slurp(path.c_str())};
}

std::string load_edited_corpus(const std::string &path, const std::string &text) {
    FILE *file = std::fopen(path.c_str(), "wb");
    MOD_CHECK(file != nullptr);
    if (!file)
        return "could not write test input";
    MOD_CHECK_EQ(std::fwrite(text.data(), 1, text.size(), file), text.size());
    std::fclose(file);
    pop_replay::Capture capture;
    return pop_replay::load(path, &capture);
}

void replace_loader_text(std::string &text, const std::string &from, const std::string &to) {
    const auto at = text.find(from);
    MOD_CHECK(at != std::string::npos);
    if (at != std::string::npos)
        text.replace(at, from.size(), to);
}
} // namespace

MOD_TEST_SUITE(replay_loader_requires_every_cpu_field) {
    auto [path, text] = loader_rule_corpus("loader_full_cpu");
    for (const char *cpu : {"entry", "exit"}) {
        const std::string key = std::string("\"") + cpu + "\": {";
        const auto start = text.find(key) + key.size();
        const auto end = text.find('}', start);
        std::string edited = text;
        edited.replace(start, end - start, "\"size\": " + std::to_string(sizeof(pop_cpu_v1)));
        MOD_CHECK(load_edited_corpus(path, edited).find("missing required fields") !=
                  std::string::npos);
        // Missing a single late field must also fail, not only size-only CPU.
        edited = text;
        const auto field = edited.find("\"fpu_tag\":", start);
        edited.erase(field, edited.find(',', field) + 1 - field);
        MOD_CHECK(load_edited_corpus(path, edited).find("missing required fields") !=
                  std::string::npos);
        edited = text;
        const auto st = edited.find(",\n    \"st\":", start);
        edited.erase(st, edited.find(']', st) + 1 - st);
        MOD_CHECK(load_edited_corpus(path, edited).find("missing required fields") !=
                  std::string::npos);
    }
}

MOD_TEST_SUITE(replay_loader_rejects_decimal_fpu_strings) {
    auto [path, text] = loader_rule_corpus("loader_hex_fpu");
    for (const char *bad : {"1.5", "0x1p+0junk", ""}) {
        std::string edited = text;
        replace_loader_text(edited, "\"-0x1.8p+0\"", std::string("\"") + bad + "\"");
        MOD_CHECK(load_edited_corpus(path, edited).find("not a hex float") != std::string::npos);
    }
}

MOD_TEST_SUITE(replay_loader_rejects_negative_numbers) {
    auto [path, text] = loader_rule_corpus("loader_unsigned");
    for (const char *bad : {"-1", "-0", "0.5", "1e0"}) {
        std::string edited = text;
        replace_loader_text(edited, "\"eax\": 0", std::string("\"eax\": ") + bad);
        MOD_CHECK(!load_edited_corpus(path, edited).empty());
    }
    replace_loader_text(text, "\"calls\": [",
                        "\"calls\": [{\"function\": \"KERNEL32.dll!GetTickCount\", \"arguments\": "
                        "[], \"result\": -1}");
    MOD_CHECK(load_edited_corpus(path, text).find("unsigned integer") != std::string::npos);
}

MOD_TEST_SUITE(replay_loader_rejects_oversized_cpu_scalars) {
    auto [path, text] = loader_rule_corpus("loader_cpu_range");
    for (const char *snapshot : {"entry", "exit"}) {
        const auto start = text.find(std::string("\"") + snapshot + "\": {");
        const std::string field = "\"eax\": 0";
        const auto at = text.find(field, start);
        MOD_CHECK(at != std::string::npos);
        if (at == std::string::npos)
            continue;
        std::string edited = text;
        edited.replace(at, field.size(), "\"eax\": 4294967295");
        MOD_CHECK(load_edited_corpus(path, edited).empty());
        edited = text;
        edited.replace(at, field.size(), "\"eax\": 4294967296");
        MOD_CHECK(load_edited_corpus(path, edited) ==
                  "a CPU scalar exceeds the 32-bit unsigned range");
    }
}

MOD_TEST_SUITE(replay_loader_rejects_oversized_page_addresses) {
    auto [path, text] = loader_rule_corpus("loader_address_range");
    // The low 32 bits still name the valid captured page, so geometry
    // validation cannot catch this after a truncating cast.
    replace_loader_text(text, "\"address\": 134217728", "\"address\": 4429185024");
    MOD_CHECK(load_edited_corpus(path, text) == "a page address exceeds the 32-bit unsigned range");
}

MOD_TEST_SUITE(replay_loader_rejects_oversized_geometry) {
    auto [path, text] = loader_rule_corpus("loader_geometry_range");
    for (const auto &[key, value] :
         {std::pair<const char *, uint64_t>{"arena_size", GUEST_SIZE},
          std::pair<const char *, uint64_t>{"page_size", pop_pagetrack::page_size()}}) {
        std::string edited = text;
        const std::string field = std::string("\"") + key + "\": ";
        replace_loader_text(edited, field + std::to_string(value),
                            field + std::to_string(value + (uint64_t{1} << 32)));
        MOD_CHECK(load_edited_corpus(path, edited) ==
                  std::string(key) + " exceeds the 32-bit unsigned range");
    }
}

MOD_TEST_SUITE(replay_loader_rejects_oversized_target_and_live_flags) {
    auto [path, text] = loader_rule_corpus("loader_metadata_range");
    for (const auto &[key, value] : {std::pair<const char *, uint64_t>{"target", 0x00401000u},
                                     std::pair<const char *, uint64_t>{"live_flags", 0}}) {
        std::string edited = text;
        const std::string field = std::string("\"") + key + "\": ";
        replace_loader_text(edited, field + std::to_string(value),
                            field + std::to_string(value + (uint64_t{1} << 32)));
        MOD_CHECK(load_edited_corpus(path, edited) ==
                  std::string(key) + " exceeds the 32-bit unsigned range");
    }
}

MOD_TEST_SUITE(replay_loader_rejects_oversized_shim_arguments) {
    auto [path, text] = loader_rule_corpus("loader_argument_range");
    replace_loader_text(text, "\"calls\": [",
                        "\"calls\": [{\"function\": \"KERNEL32.dll!GetTickCount\", "
                        "\"arguments\": [4294967295], \"result\": 0}");
    MOD_CHECK(load_edited_corpus(path, text).empty());
    replace_loader_text(text, "[4294967295]", "[4294967296]");
    MOD_CHECK(load_edited_corpus(path, text) ==
              "a shim argument exceeds the 32-bit unsigned range");
}

MOD_TEST_SUITE(replay_loader_rejects_oversized_shim_results) {
    auto [path, text] = loader_rule_corpus("loader_result_range");
    replace_loader_text(text, "\"calls\": [",
                        "\"calls\": [{\"function\": \"KERNEL32.dll!GetTickCount\", "
                        "\"arguments\": [], \"result\": 4294967295}");
    MOD_CHECK(load_edited_corpus(path, text).empty());
    replace_loader_text(text, "\"result\": 4294967295", "\"result\": 4294967296");
    MOD_CHECK(load_edited_corpus(path, text) == "a shim result exceeds the 32-bit unsigned range");
}

MOD_TEST_SUITE(replay_loader_rejects_trailing_bytes) {
    auto [path, text] = loader_rule_corpus("loader_trailing");
    MOD_CHECK(load_edited_corpus(path, text + " \t\r\n").empty());
    for (const std::string suffix :
         {std::string("garbage"), std::string("{}"), std::string(1, '\0')})
        MOD_CHECK(load_edited_corpus(path, text + suffix) ==
                  "trailing bytes after the corpus object");
}
#endif
