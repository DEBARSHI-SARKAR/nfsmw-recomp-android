// loader_tests.cpp - discovery, resolution and the transactional lifecycle,
// against real dylibs the loader really dlopens. A loader tested against fakes
// has never called dlopen, so the fixtures are built by
// the mod_fixtures CMake target and loaded from a tree this suite builds.
#include "mods_tests.h"
#include "../mods_internal.h"
#include "../manifest_types.h"
#include "../../runtime/loader.h"
#include "../../runtime/memory.h"
#include "../../runtime/guest.h"
#include "../../runtime/win32.h"
#include "../../runtime/layout.h"

extern "C" bool mods_test_reset_loader(void);
extern "C" void mods_test_set_next_owner(uint32_t owner);
extern "C" uint32_t mods_test_next_owner(void);
extern "C" int mods_test_guards_in_flight(void);

#include "../../platform/os.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <atomic>
#include <setjmp.h>
#include <string>
#include <thread>
#include <vector>

// Defined in loader.cpp. Not in mods_internal.h, which is another task's file.
extern "C" PopModStatus mods_record_status(const char *id);

namespace {

const char *TREE = nullptr; // the mods tree this suite builds
std::string g_fixtures = mods_test_build_path("recomp/mods-fixtures");

// Enters a hooked function the way a generated call site does. The events
// layer hooks the turn scheduler, so this is how a turn event is made to fire
// from a test.
void enter_hooked(uint32_t addr) {
    int32_t i = recomp_index_of(addr);
    if (i < 0)
        return;
    X86 *c = loader_context();
    loader_init_context(c);
    c->r[R_ESP] -= 4;
    wr32(c->r[R_ESP], 0x00401000u);
    if (__atomic_load_n(&recomp_hooked[i], __ATOMIC_ACQUIRE))
        recomp_hook_ptrs[i](c, (uint32_t)i);
    else
        recomp_base_ptrs[i](c);
}

void mkdirs(const std::string &path) {
    std::string cmd = "mkdir -p '" + path + "'";
    if (system(cmd.c_str()) != 0)
        fprintf(stderr, "mkdirs failed: %s\n", path.c_str());
}

void write_file(const std::string &path, const std::string &text) {
    FILE *f = fopen(path.c_str(), "wb");
    if (!f) {
        fprintf(stderr, "cannot write %s\n", path.c_str());
        return;
    }
    fwrite(text.data(), 1, text.size(), f);
    fclose(f);
}

// A manifest with the identity filled in and whatever else the case needs.
std::string manifest(const char *id, const std::string &extra = "") {
    return std::string("id = \"") + id +
           "\"\n"
           "name = \"" +
           id +
           "\"\n"
           "version = \"1.0.0\"\n"
           "api = 1\n"
           "game = \"815ba8a550f571c3\"\n" +
           extra;
}

// An empty mods tree and an empty profile of this suite's own, so it never
// shares a path with another suite and never inherits an earlier run.
void fresh() {
    static std::string tree;
    tree = mod_test_dir("loader-tree");
    TREE = tree.c_str();
    os_setenv("RECOMP_MODS_DIR", TREE);
    os_setenv("RECOMP_CORE_MODS_DIR", (tree + "/absent-core").c_str());
    os_unsetenv("RECOMP_NO_MODS");
    // The profile directory is set through the overlay, which is what the
    // settings layer actually reads. RECOMP_SETTINGS is read by nobody, so
    // setting it isolated nothing and every suite shared one profile.
    static std::string profile_dir;
    profile_dir = mod_test_dir("loader-profile");
    mods_overlay_set_profile_dir(profile_dir.c_str());
    mem_init();
    loader_load(nullptr);
    // This thread drives translated code, so it is the run thread: registry
    // mutations from here apply inline rather than queue.
    sched_set_guest_thread(true);
    // This thread is the host's main thread for the suite, which the teardown
    // the reset runs requires: a shutdown touches host-owned state and refuses
    // to run anywhere else.
    mods_host_set_main_thread();
    // The loader loads once per process, so a suite that wants to load again
    // says so. The reset waits for quiescence before it retires anything,
    // which is the property production gets by never retiring at all.
    MOD_CHECK(mods_test_reset_loader());
    mods_hooks_reset();
    mods_overlay_reset();
    // After the reset, because mods_overlay_reset clears the profile
    // directory along with everything else.
    mods_overlay_set_profile_dir(profile_dir.c_str());
    mods_settings_reset();
}

// One mod directory: its manifest, and its plugin copied in from the fixtures.
// The fixture named with THIS platform's extension, for manifests and copies.
std::string plug(const char *stem) {
    return std::string(stem) + os_plugin_extension();
}

void install(const char *dir, const std::string &toml, const char *dylib = nullptr) {
    std::string d = std::string(TREE) + "/" + dir;
    mkdirs(d);
    write_file(d + "/mod.toml", toml);
    if (dylib) {
        std::string cmd = "cp '" + g_fixtures + "/" + dylib + "' '" + d + "/" + dylib + "'";
        if (system(cmd.c_str()) != 0)
            fprintf(stderr, "cannot copy %s\n", dylib);
    }
}

const char *record_field(const char *id, int which) {
    for (uint32_t i = 0; i < mods_record_count(); ++i) {
        const char *rid = nullptr;
        const char *reason = nullptr;
        int is_loaded = 0;
        uint32_t owner = 0;
        mods_record(i, &rid, nullptr, nullptr, nullptr, nullptr, nullptr, &is_loaded, &reason,
                    &owner, nullptr);
        if (rid && strcmp(rid, id) == 0) {
            if (which == 0)
                return is_loaded ? "1" : "";
            if (which == 1)
                return reason;
        }
    }
    return which == 0 ? "" : "";
}

bool loaded(const char *id) {
    return record_field(id, 0)[0] == '1';
}
std::string reason(const char *id) {
    return record_field(id, 1);
}

uint32_t owner_of(const char *id) {
    for (uint32_t i = 0; i < mods_record_count(); ++i) {
        const char *rid = nullptr;
        uint32_t owner = 0;
        mods_record(i, &rid, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, &owner,
                    nullptr);
        if (rid && strcmp(rid, id) == 0)
            return owner;
    }
    return 0;
}

// One negative case: a single mod that must be rejected, and the words its
// reason has to contain.
void one(const char *what, const std::string &toml, const char *dylib, const char *expect) {
    fresh();
    install("only", toml, dylib);
    MOD_CHECK(mods_load_all());
    bool found = false;
    for (uint32_t i = 0; i < mods_record_count(); ++i) {
        const char *reason_text = nullptr;
        int is_loaded = 1;
        mods_record(i, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, &is_loaded,
                    &reason_text, nullptr, nullptr);
        if (!is_loaded && reason_text && strstr(reason_text, expect))
            found = true;
    }
    if (!found) {
        char msg[512];
        snprintf(msg, sizeof msg, "%s: no rejection mentioning \"%s\"", what, expect);
        mod_test_fail(msg, __FILE__, __LINE__);
    } else {
        mod_test_pass();
    }
}

void two_case_cycle() {
    fresh();
    install("a", manifest("cyc.a", "requires = [\"cyc.b >= 1.0.0\"]\n"));
    install("b", manifest("cyc.b", "requires = [\"cyc.a >= 1.0.0\"]\n"));
    MOD_CHECK(mods_load_all());
    MOD_CHECK(!loaded("cyc.a"));
    MOD_CHECK(!loaded("cyc.b"));
    MOD_CHECK(reason("cyc.a").find("cycle") != std::string::npos);
}

void two_case_duplicate() {
    fresh();
    install("a", manifest("dup.same", "[plugin]\npath = \"" + plug("good_a") + "\"\n"),
            plug("good_a").c_str());
    install("b", manifest("dup.same", "[plugin]\npath = \"" + plug("good_b") + "\"\n"),
            plug("good_b").c_str());
    MOD_CHECK(mods_load_all());
    // Exactly one survives, and the reason names the duplicate id.
    MOD_CHECK(loaded("dup.same"));
    bool said_duplicate = false;
    for (uint32_t i = 0; i < mods_record_count(); ++i) {
        const char *r = nullptr;
        int is_loaded = 1;
        mods_record(i, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, &is_loaded, &r,
                    nullptr, nullptr);
        if (!is_loaded && r && strstr(r, "duplicate"))
            said_duplicate = true;
    }
    MOD_CHECK(said_duplicate);
}

void two_case_conflict() {
    fresh();
    install("a", manifest("conf.first", "[plugin]\npath = \"" + plug("good_a") + "\"\n"),
            plug("good_a").c_str());
    install("b",
            manifest("conf.second", "conflicts = [\"conf.first\"]\n"
                                    "[plugin]\npath = \"" +
                                        plug("good_b") + "\"\n"),
            plug("good_b").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("conf.first"));
    MOD_CHECK(!loaded("conf.second"));
    MOD_CHECK(reason("conf.second").find("conflicts") != std::string::npos);
}

} // namespace

// Keep the existing first-run record test first in reverse registration order.
MOD_TEST_SUITE(loader_packaged_core_display) {
    fresh();
    os_setenv("RECOMP_CORE_MODS_DIR", mods_test_build_path("recomp/mods/core").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("core.display"));
    MOD_CHECK_EQ(mods_record_status("core.display"), POP_OK);
    if (!loaded("core.display"))
        fprintf(stderr, "core.display: %s\n", reason("core.display").c_str());
    // A no-load open proves the loader opened the installed artifact itself.
    void *lib = os_dlopen_noload(
        (mods_test_build_path("recomp/mods/core/display/") + plug("display")).c_str());
    MOD_CHECK(lib != nullptr);
    if (lib)
        os_dlclose(lib);
    MOD_CHECK(mods_test_reset_loader());
}

MOD_TEST_SUITE(loader_core_roots) {
    fresh();
    const char *user = TREE;
    std::string core = mod_test_dir("core-tree");
    os_setenv("RECOMP_CORE_MODS_DIR", core.c_str());
    TREE = core.c_str();
    install("first", manifest("z.core", "[plugin]\npath = \"" + plug("good_a") + "\"\n"),
            plug("good_a").c_str());
    install("second", manifest("b.core", "requires = [\"z.core >= 1.0.0\"]\n"));
    TREE = user;
    install("user", manifest("a.user", "requires = [\"b.core >= 1.0.0\"]\n"));
    install("independent", manifest("a.independent"));
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("z.core"));
    MOD_CHECK(loaded("b.core"));
    MOD_CHECK(loaded("a.user"));
    MOD_CHECK(loaded("a.independent"));
    MOD_CHECK(owner_of("z.core") < owner_of("b.core"));
    MOD_CHECK(owner_of("b.core") < owner_of("a.independent"));
    MOD_CHECK(owner_of("b.core") < owner_of("a.user"));
}

MOD_TEST_SUITE(loader_core_discovery_wins_duplicate) {
    fresh();
    const char *user = TREE;
    std::string core = mod_test_dir("core-duplicate");
    os_setenv("RECOMP_CORE_MODS_DIR", core.c_str());
    TREE = core.c_str();
    install("z", manifest("same.id"));
    TREE = user;
    install("a", manifest("same.id", "[plugin]\npath = \"" + plug("missing") + "\"\n"));
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("same.id"));
    MOD_CHECK_EQ(mods_record_count(), 2u);
}

MOD_TEST_SUITE(loader_no_mods_disables_both_roots) {
    fresh();
    const char *user = TREE;
    std::string core = mod_test_dir("core-disabled");
    os_setenv("RECOMP_CORE_MODS_DIR", core.c_str());
    TREE = core.c_str();
    install("core", manifest("z.core"));
    TREE = user;
    install("user", manifest("a.user"));
    os_setenv("RECOMP_NO_MODS", "1");
    MOD_CHECK(mods_load_all());
    MOD_CHECK_EQ(mods_record_count(), 0u);
    os_unsetenv("RECOMP_NO_MODS");
}

MOD_TEST_SUITE(loader_missing_core_and_failed_core_allow_users) {
    fresh();
    install("user", manifest("a.user"));
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("a.user"));
    MOD_CHECK_EQ(mods_record_count(), 1u);
    fresh();
    const char *user = TREE;
    std::string core = mod_test_dir("core-failure");
    os_setenv("RECOMP_CORE_MODS_DIR", core.c_str());
    TREE = core.c_str();
    install("broken", manifest("z.broken", "[plugin]\npath = \"" + plug("missing") + "\"\n"));
    TREE = user;
    install("user", manifest("a.user"));
    MOD_CHECK(mods_load_all());
    MOD_CHECK(!loaded("z.broken"));
    MOD_CHECK(reason("z.broken").find("dlopen failed") != std::string::npos);
    MOD_CHECK(loaded("a.user"));
}

MOD_TEST_SUITE(loader_core_cycle_and_reverse_dependency_do_not_block_users) {
    fresh();
    const char *user = TREE;
    std::string core = mod_test_dir("core-cycle");
    os_setenv("RECOMP_CORE_MODS_DIR", core.c_str());
    TREE = core.c_str();
    install("a", manifest("core.a", "requires = [\"core.b >= 1.0.0\"]\n"));
    install("b", manifest("core.b", "requires = [\"core.a >= 1.0.0\"]\n"));
    install("reverse", manifest("core.reverse", "requires = [\"a.user >= 1.0.0\"]\n"));
    TREE = user;
    install("user", manifest("a.user"));
    install("dependent", manifest("user.dependent", "requires = [\"core.a >= 1.0.0\"]\n"));
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("a.user"));
    MOD_CHECK(!loaded("core.a"));
    MOD_CHECK(!loaded("core.b"));
    MOD_CHECK(!loaded("user.dependent"));
    MOD_CHECK(reason("core.reverse").find("core mod requires user mod") != std::string::npos);
}

MOD_TEST_SUITE(loader_core_conflict_precedes_lexically_smaller_user) {
    fresh();
    const char *user = TREE;
    std::string core = mod_test_dir("core-conflict");
    os_setenv("RECOMP_CORE_MODS_DIR", core.c_str());
    TREE = core.c_str();
    install("core", manifest("z.core", "conflicts = [\"a.user\"]\n"));
    TREE = user;
    install("user", manifest("a.user"));
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("z.core"));
    MOD_CHECK(!loaded("a.user"));
    MOD_CHECK(reason("a.user").find("conflicts with z.core") != std::string::npos);
}

MOD_TEST_SUITE(loader_loads_two_and_rolls_back_the_third) {
    fresh();
    install("a", manifest("good.a", "[plugin]\npath = \"" + plug("good_a") + "\"\n"),
            plug("good_a").c_str());
    install("b",
            manifest("good.b",
                     "[plugin]\npath = \"" + plug("good_b") +
                         "\"\n"
                         "[settings]\nlevel = { type = \"int\", default = 2, min = 0, max = 9 }\n"),
            plug("good_b").c_str());
    install("c",
            manifest("bad.init", "[plugin]\npath = \"" + plug("bad_init") +
                                     "\"\n"
                                     "[assets]\npath = \"data\"\n"
                                     "[settings]\n"
                                     "level = { type = \"int\", default = 1, min = 0, max = 9 }\n"),
            plug("bad_init").c_str());
    mkdirs(std::string(TREE) + "/c/data");

    uint32_t hooks_before = mods_hooks_installed_count();
    uint32_t layers_before = mods_overlay_layer_count();
    uint32_t menus_before = mods_menu_entry_count();
    MOD_CHECK(mods_load_all());

    MOD_CHECK(loaded("good.a"));
    MOD_CHECK(loaded("good.b"));
    MOD_CHECK(!loaded("bad.init"));
    MOD_CHECK(reason("bad.init").find("pop_mod_init returned -5") != std::string::npos);

    // Not one of its registrations survived. The registry TOTAL is the wrong
    // thing to assert: mods_load_all installs the runtime's own event hooks
    // after the baseline above was taken, and the events layer deliberately
    // does not roll those back with a mod, because they are the runtime's and
    // not the mod's. The guarantee is that nothing is attributed to the failed
    // mod, so that is what is measured - removing everything owned by it must
    // change nothing, because it owns nothing.
    MOD_CHECK_EQ(hooks_before, 0u);
    uint32_t total_after_load = mods_hooks_installed_count();
    mods_hooks_remove_all(owner_of("bad.init"));
    MOD_CHECK_EQ(mods_hooks_installed_count(), total_after_load);

    // And the two mods that did load own exactly one hook each, which leaves
    // the runtime's own event hooks behind, unchanged in number by any of it.
    mods_hooks_remove_all(owner_of("good.a"));
    MOD_CHECK_EQ(mods_hooks_installed_count(), total_after_load - 1u);
    mods_hooks_remove_all(owner_of("good.b"));
    uint32_t runtime_owned = mods_hooks_installed_count();
    MOD_CHECK_EQ(runtime_owned, total_after_load - 2u);
    // The runtime's event hooks are the same in number as they are in a run
    // where no mod loaded at all, so the failed mod left none of its own
    // among them.
    MOD_CHECK_EQ(
        runtime_owned,
        34u); // events, sprites, animation, settings/display, minimap buffers and native options
    MOD_CHECK_EQ(mods_overlay_layer_count(), layers_before + 0u);
    MOD_CHECK_EQ(mods_menu_entry_count(), menus_before + 0u);
    MOD_CHECK_EQ(mods_guest_alloc_count(owner_of("bad.init")), 0u);
    uint8_t *px = nullptr;
    uint32_t n = 0;
    MOD_CHECK_EQ(mods_texture_override(1, 4, 4, 0, &px, &n), 0);
    // Nor its input subscription. bad_init's key handler consumes every key,
    // so if the rollback had left it registered the guest would never see one
    // again. on_key registers into the input filter rather than the event
    // registry, which is why removing the events is not enough.
    MOD_CHECK(!mods_input_key(0x22, 0x47, true));
    MOD_CHECK(!mods_input_key(0x22, 0x47, false));
    MOD_CHECK(mods_overlay_sealed());

    // The API instances the plugins hold are stable: loading a third mod did
    // not move the first one's.
    const PopModApi *a = mods_api_for(owner_of("good.a"));
    MOD_CHECK(a != nullptr);
    MOD_CHECK_STR(a->mod_id, "good.a");
    MOD_CHECK_EQ(a->mod_index, owner_of("good.a"));
}

MOD_TEST_SUITE(loader_negative_cases) {
    one("bad manifest", "id = \"a.b\"\nnot an assignment\n", nullptr, "not an assignment");
    one("missing dependency", manifest("needs.absent", "requires = [\"nobody.here >= 1.0.0\"]\n"),
        nullptr, "not loaded");
    one("wrong game hash",
        "id = \"wrong.game\"\nname = \"W\"\nversion = \"1.0.0\"\napi = 1\n"
        "game = \"0000000000000000\"\n",
        nullptr, "game");
    one("wrong api version",
        "id = \"wrong.api\"\nname = \"W\"\nversion = \"1.0.0\"\napi = 99\n"
        "game = \"815ba8a550f571c3\"\n",
        nullptr, "api");
    one("no pop_mod_init", manifest("no.init", "[plugin]\npath = \"" + plug("no_init") + "\"\n"),
        plug("no_init").c_str(), "pop_mod_init");
    one("unusable ABI record",
        manifest("bad.abi", "[plugin]\npath = \"" + plug("bad_abi") + "\"\n"),
        plug("bad_abi").c_str(), "abi");
    one("a [script] mod with no Lua runtime",
        manifest("script.only", "[script]\npath = \"main.lua\"\n"), nullptr, "script");

    // Cycles, duplicates and conflicts need two directories each; each case
    // asserts which mod survived and why the other did not.
    two_case_cycle();
    two_case_duplicate();
    two_case_conflict();

    // An ineligible hook target is refused at the API, not at load: the mod
    // stays loaded and its hook_install returns POP_E_NOSYMBOL. The callback is
    // a real one, or the answer would be POP_E_INVAL and prove nothing about
    // eligibility.
    fresh();
    uint32_t id = 0;
    auto real_cb = [](const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *) {};
    MOD_CHECK_EQ(mods_hook_install(MODS_OWNER_FIRST_MOD, 0x00400001u, real_cb, POP_HOOK_BEFORE,
                                   nullptr, &id),
                 POP_E_NOSYMBOL);
    MOD_CHECK_EQ(mods_hook_install(MODS_OWNER_FIRST_MOD, 0x0055db78u, real_cb, POP_HOOK_BEFORE,
                                   nullptr, &id),
                 POP_E_NOSYMBOL);
}

MOD_TEST_SUITE(loader_rejects_dependents_of_a_failed_init) {
    fresh();
    install("a", manifest("bad.init", "[plugin]\npath = \"" + plug("bad_init") + "\"\n"),
            plug("bad_init").c_str());
    install("b",
            manifest("needs.bad", "requires = [\"bad.init >= 1.0.0\"]\n"
                                  "[plugin]\npath = \"" +
                                      plug("good_a") + "\"\n"),
            plug("good_a").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(!loaded("bad.init"));
    // Its dependent never ran its own init at all.
    MOD_CHECK(!loaded("needs.bad"));
    MOD_CHECK(reason("needs.bad").find("bad.init") != std::string::npos);
    MOD_CHECK_EQ(
        mods_hooks_installed_count(),
        34u); // events, sprites, animation, settings/display, minimap buffers and native options
}

MOD_TEST_SUITE(loader_serves_an_old_cpu_layout) {
    fresh();
    install("x", manifest("old.cpu", "[plugin]\npath = \"" + plug("old_cpu") + "\"\n"),
            plug("old_cpu").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("old.cpu"));

    X86 *c = loader_context();
    loader_init_context(c);
    c->r[R_EAX] = 0xfeedfaceu;
    c->r[R_ESP] -= 4;
    wr32(c->r[R_ESP], 0x00401000u);
    int32_t i = recomp_index_of(0x004ec6f0u);
    recomp_hook_ptrs[i](c, (uint32_t)i);

    void *h = os_dlopen_noload((std::string(TREE) + "/x/" + plug("old_cpu")).c_str());
    unsigned *size = (unsigned *)os_dlsym(h, "g_old_cpu_size");
    unsigned *eax = (unsigned *)os_dlsym(h, "g_old_cpu_eax");
    unsigned *declared = (unsigned *)os_dlsym(h, "g_old_cpu_declared");
    MOD_CHECK(size && eax && declared);
    MOD_CHECK_EQ(*eax, 0xfeedfaceu);
    // The plugin's own header said this, and the host served exactly it.
    MOD_CHECK(*declared < POP_CPU_V1_BASELINE_SIZE);
    MOD_CHECK_EQ(*size, *declared);
}

MOD_TEST_SUITE(loader_settings_and_shutdown) {
    fresh();
    install("b",
            manifest("good.b",
                     "[plugin]\npath = \"" + plug("good_b") +
                         "\"\n"
                         "[settings]\nlevel = { type = \"int\", default = 2, min = 0, max = 9 }\n"),
            plug("good_b").c_str());
    install("a", manifest("good.a", "[plugin]\npath = \"" + plug("good_a") + "\"\n"),
            plug("good_a").c_str());
    MOD_CHECK(mods_load_all());
    uint32_t b = owner_of("good.b");

    int64_t v = 0;
    MOD_CHECK_EQ(mods_settings_get(b, "level", &v), POP_OK);
    MOD_CHECK_EQ(v, 2);
    MOD_CHECK_EQ(mods_settings_set(b, "level", 7), POP_OK);
    MOD_CHECK_EQ(mods_settings_set(b, "level", 99), POP_E_RANGE);

    uint32_t before = mods_hooks_installed_count();
    MOD_CHECK_EQ(
        before,
        36u); // 6 events + 7 sprites + 2 animation + 13 settings/display/minimap + 6 native options + 2 mod hooks
    mods_shutdown();
    // pop_mod_exit ran in reverse load order, each removed its own hook, and
    // every tracked resource is reclaimed.
    MOD_CHECK_EQ(mods_hooks_installed_count(), 0u);
    MOD_CHECK_EQ(mods_record_count(), 0u);
    MOD_CHECK_EQ(mods_overlay_layer_count(), 0u);
    MOD_CHECK_EQ(mods_menu_entry_count(), 0u);
    MOD_CHECK_EQ(mods_guest_alloc_count(b), 0u);
    // And the value survived into the profile file.
    mods_settings_reset();
    MOD_CHECK(mods_settings_load(mods_settings_path()));
    mods_settings_declare(b, "good.b", "level", "level", POP_SETTING_INT, 2, 0, 9);
    MOD_CHECK_EQ(mods_settings_get(b, "level", &v), POP_OK);
    MOD_CHECK_EQ(v, 7);
}

// ---------------------------------------------------------------------------
// The transaction, proved rather than assumed. Every registration the failing
// mod makes must SUCCEED first: a rollback looks perfect if nothing was ever
// registered, so the statuses are read back out of the plugin before anything
// is asserted about what survived.
// ---------------------------------------------------------------------------
MOD_TEST_SUITE(loader_rollback_undoes_registrations_that_really_happened) {
    fresh();
    install("c",
            manifest("bad.init", "[plugin]\npath = \"" + plug("bad_init") +
                                     "\"\n"
                                     "[assets]\npath = \"data\"\n"
                                     "[settings]\n"
                                     "level = { type = \"int\", default = 1, min = 0, max = 9 }\n"),
            plug("bad_init").c_str());
    mkdirs(std::string(TREE) + "/c/data");
    MOD_CHECK(mods_load_all());
    MOD_CHECK(!loaded("bad.init"));
    uint32_t owner = owner_of("bad.init");

    void *h = os_dlopen_noload((std::string(TREE) + "/c/" + plug("bad_init")).c_str());
    MOD_CHECK(h != nullptr);
    if (!h)
        return;
    auto st = [&](const char *sym) {
        int *p = (int *)os_dlsym(h, sym);
        return p ? *p : -999;
    };
    // Each registration succeeded before init failed. POP_OK is 0.
    MOD_CHECK_EQ(st("g_bad_hook_st"), 0);
    MOD_CHECK_EQ(st("g_bad_turn_st"), 0);
    MOD_CHECK_EQ(st("g_bad_key_st"), 0);
    MOD_CHECK_EQ(st("g_bad_overlay_st"), 0);
    MOD_CHECK_EQ(st("g_bad_alloc_st"), 0);
    MOD_CHECK_EQ(st("g_bad_menu_st"), 0);
    MOD_CHECK_EQ(st("g_bad_provider_st"), 0);
    MOD_CHECK_EQ(st("g_bad_setting_st"), 0);
    unsigned *mem = (unsigned *)os_dlsym(h, "g_bad_mem");
    MOD_CHECK(mem && *mem != 0); // it really got guest memory

    // And none of it survived. The observable ones are observed rather than
    // counted: the key handler consumed every key, the event handler counted
    // its calls, and neither may be reached now.
    MOD_CHECK(!mods_input_key(0x22, 0x47, true));
    MOD_CHECK(!mods_input_key(0x22, 0x47, false));
    unsigned *keys = (unsigned *)os_dlsym(h, "g_bad_key_seen");
    MOD_CHECK(keys && *keys == 0);
    MOD_CHECK_EQ(mods_guest_alloc_count(owner), 0u);
    MOD_CHECK_EQ(mods_overlay_layer_count(), 0u);
    uint8_t *px = nullptr;
    uint32_t n = 0;
    MOD_CHECK_EQ(mods_texture_override(1, 4, 4, 0, &px, &n), 0);
    // Its setting declaration went with it, so reading it now finds nothing.
    int64_t v = 0;
    MOD_CHECK(mods_settings_get(owner, "level", &v) != POP_OK);

    // The API it still holds is revoked, not dangling: every call answers
    // POP_E_STATE rather than crashing or, worse, working.
    const PopModApi *retained = mods_api_for(owner);
    MOD_CHECK(retained == nullptr); // the provider will not hand it out
}

// ---------------------------------------------------------------------------
// A mods directory that is not there, and one that is empty, are both ordinary
// outcomes and neither is an error: an unmodded install has no mods directory
// at all, and that is the configuration parity runs in.
// ---------------------------------------------------------------------------
MOD_TEST_SUITE(loader_absent_and_empty_directories) {
    fresh();
    std::string gone = std::string(TREE) + "/definitely-not-here";
    os_setenv("RECOMP_MODS_DIR", gone.c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK_EQ(mods_record_count(), 0u);
    // Nothing was installed, so the registry holds only the runtime's own
    // event hooks and no overlay layer was pushed.
    MOD_CHECK_EQ(mods_overlay_layer_count(), 0u);
    mods_shutdown();
    MOD_CHECK_EQ(mods_record_count(), 0u);

    fresh();
    std::string empty = std::string(TREE) + "/empty-tree";
    mkdirs(empty);
    os_setenv("RECOMP_MODS_DIR", empty.c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK_EQ(mods_record_count(), 0u);
    MOD_CHECK_EQ(mods_overlay_layer_count(), 0u);
    mods_shutdown();
}

// ---------------------------------------------------------------------------
// The ABI record is rejected with a typed status, not with prose that happens
// to contain the word.
// ---------------------------------------------------------------------------
MOD_TEST_SUITE(loader_abi_rejection_is_typed) {
    fresh();
    install("x", manifest("bad.abi", "[plugin]\npath = \"" + plug("bad_abi") + "\"\n"),
            plug("bad_abi").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(!loaded("bad.abi"));
    MOD_CHECK_EQ(mods_record_status("bad.abi"), POP_E_ABI);
    MOD_CHECK(reason("bad.abi").find("api_version 99") != std::string::npos);

    // A plugin with no record at all is the same typed refusal.
    fresh();
    install("y", manifest("no.init", "[plugin]\npath = \"" + plug("no_init") + "\"\n"),
            plug("no_init").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(!loaded("no.init"));
    // no_init.c DOES export a valid record, so this one is refused for the
    // missing entry point rather than for the ABI: the two are different
    // failures and must not report the same status.
    MOD_CHECK(mods_record_status("no.init") != POP_E_ABI);
    MOD_CHECK(reason("no.init").find("pop_mod_init") != std::string::npos);

    // A record that is absent, one that stops mid-member, and one claiming a
    // struct larger than this host's: each is POP_E_ABI, exactly.
    fresh();
    install("m", manifest("abi.missing", "[plugin]\npath = \"" + plug("abi_missing") + "\"\n"),
            plug("abi_missing").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(!loaded("abi.missing"));
    MOD_CHECK_EQ(mods_record_status("abi.missing"), POP_E_ABI);
    MOD_CHECK(reason("abi.missing").find("no pop_mod_abi") != std::string::npos);

    fresh();
    install("s", manifest("abi.short", "[plugin]\npath = \"" + plug("abi_short") + "\"\n"),
            plug("abi_short").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(!loaded("abi.short"));
    MOD_CHECK_EQ(mods_record_status("abi.short"), POP_E_ABI);
    MOD_CHECK(reason("abi.short").find("member boundary") != std::string::npos);

    fresh();
    install("g", manifest("abi.big", "[plugin]\npath = \"" + plug("abi_big") + "\"\n"),
            plug("abi_big").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(!loaded("abi.big"));
    MOD_CHECK_EQ(mods_record_status("abi.big"), POP_E_ABI);

    // And the old-header plugin is still served: a smaller cpu_size is a
    // supported plugin, not a rejected one.
    fresh();
    install("z", manifest("old.cpu", "[plugin]\npath = \"" + plug("old_cpu") + "\"\n"),
            plug("old_cpu").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("old.cpu"));
}

// ---------------------------------------------------------------------------
// Shutdown is two steps, because it cannot always happen when it is asked for.
// ---------------------------------------------------------------------------
MOD_TEST_SUITE(loader_shutdown_waits_for_quiescence) {
    fresh();
    install("a", manifest("good.a", "[plugin]\npath = \"" + plug("good_a") + "\"\n"),
            plug("good_a").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("good.a"));
    uint32_t owner = owner_of("good.a");

    // Nothing is running here, so the first ask completes.
    MOD_CHECK(mods_shutdown_complete());
    MOD_CHECK_EQ(mods_record_count(), 0u);
    // And it stays complete rather than tearing down twice.
    MOD_CHECK(mods_shutdown_complete());
    (void)owner;

    // A request revokes immediately even when the teardown cannot run: from
    // that moment nothing the plugin holds does anything.
    fresh();
    install("b",
            manifest("good.b",
                     "[plugin]\npath = \"" + plug("good_b") +
                         "\"\n"
                         "[settings]\nlevel = { type = \"int\", default = 2, min = 0, max = 9 }\n"),
            plug("good_b").c_str());
    MOD_CHECK(mods_load_all());
    uint32_t b = owner_of("good.b");
    const PopModApi *api_b = mods_api_for(b);
    MOD_CHECK(api_b != nullptr);
    // A pointer saved BEFORE the revocation, which is the case a rewritten
    // table cannot cover.
    PopModStatus (*saved_alloc)(const PopModApi *, uint32_t, uint32_t *) =
        api_b ? api_b->guest_alloc : nullptr;
    MOD_CHECK(saved_alloc != nullptr);

    mods_shutdown_request();
    // Asking does NOT revoke: a mod's pop_mod_exit has not run yet, and that
    // is the last chance it has to write anything down.
    MOD_CHECK(mods_api_for(b) != nullptr);

    MOD_CHECK(mods_shutdown_complete());
    MOD_CHECK_EQ(mods_record_count(), 0u);
    // Once its exit has run, the pointer it kept refuses.
    if (saved_alloc && api_b) {
        uint32_t addr = 0;
        MOD_CHECK_EQ(saved_alloc(api_b, 64, &addr), POP_E_STATE);
        uint32_t epoch = 123;
        uint64_t id = 456;
        MOD_CHECK_EQ(api_b->set_anchor(api_b, 7, 1, 1), POP_E_STATE);
        MOD_CHECK_EQ(api_b->clear_anchor(api_b, 7), POP_E_STATE);
        MOD_CHECK_EQ(api_b->display_transition(api_b, &epoch), POP_E_STATE);
        MOD_CHECK_EQ(epoch, 123u);
        MOD_CHECK_EQ(api_b->ui_elements(api_b, &id, 1), 0u);
        MOD_CHECK_EQ(id, 456u);
        MOD_CHECK(api_b->host_aspect(api_b) == 4.0f / 3.0f);
        MOD_CHECK_EQ(addr, 0u);
    }
}

// ---------------------------------------------------------------------------
// A rolled-back mod's registrations are not merely removed from the registry:
// its callbacks are unreachable, its persisted values are restored, and the
// API it kept refuses everything.
// ---------------------------------------------------------------------------
MOD_TEST_SUITE(loader_rollback_is_observable_from_every_side) {
    fresh();
    // A value the failing mod will try to change, written by a mod that loads.
    install("b",
            manifest("good.b",
                     "[plugin]\npath = \"" + plug("good_b") +
                         "\"\n"
                         "[settings]\nlevel = { type = \"int\", default = 2, min = 0, max = 9 }\n"),
            plug("good_b").c_str());
    install("c",
            manifest("bad.init", "[plugin]\npath = \"" + plug("bad_init") +
                                     "\"\n"
                                     "[assets]\npath = \"data\"\n"
                                     "[settings]\n"
                                     "level = { type = \"int\", default = 1, min = 0, max = 9 }\n"),
            plug("bad_init").c_str());
    mkdirs(std::string(TREE) + "/c/data");
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("good.b"));
    MOD_CHECK(!loaded("bad.init"));
    uint32_t bad = owner_of("bad.init");

    void *h = os_dlopen_noload((std::string(TREE) + "/c/" + plug("bad_init")).c_str());
    MOD_CHECK(h != nullptr);
    if (!h)
        return;

    // Its event subscription is gone, observed by firing the event rather than
    // by counting subscriptions: nothing of it is reached.
    unsigned *fired = (unsigned *)os_dlsym(h, "g_bad_event_fired");
    MOD_CHECK(fired && *fired == 0);
    // Driven through the real dispatch table, the way a generated call site
    // reaches it, so the event really fires. If the subscription had survived
    // the rollback this is where it would be seen.
    enter_hooked(0x004ec6f0u);
    MOD_CHECK(fired && *fired == 0);

    // Its texture provider is gone, observed by asking for the exact override
    // it answers with. A provider that always declined would look the same
    // whether or not the rollback removed it.
    uint8_t *px = nullptr;
    uint32_t n = 0;
    MOD_CHECK_EQ(mods_texture_override(0x1234u, 4, 4, 0, &px, &n), 0);
    MOD_CHECK(px == nullptr);
    unsigned *provider_calls = (unsigned *)os_dlsym(h, "g_bad_provider_calls");
    MOD_CHECK(provider_calls && *provider_calls == 0);

    // Its settings declaration went with it, and the value the surviving mod
    // owns is untouched by anything the failed one did.
    int64_t v = 0;
    MOD_CHECK(mods_settings_get(bad, "level", &v) != POP_OK);
    MOD_CHECK_EQ(mods_settings_get(owner_of("good.b"), "level", &v), POP_OK);
    MOD_CHECK_EQ(v, 2);

    // The API it still holds refuses everything. Looking it up is not the
    // test: a pointer taken BEFORE the rollback is, because that is the one a
    // plugin actually keeps.
    MOD_CHECK(mods_api_for(bad) == nullptr);

    // Its settings value did not reach the profile on disk. The declaration
    // went with the rollback, so a reload finds nothing of it, while the
    // surviving mod's value is still there.
    mods_settings_save();
    mods_settings_reset();
    MOD_CHECK(mods_settings_load(mods_settings_path()));
    mods_settings_declare(bad, "bad.init", "level", "level", POP_SETTING_INT, 1, 0, 9);
    int64_t persisted = 0;
    MOD_CHECK_EQ(mods_settings_get(bad, "level", &persisted), POP_OK);
    MOD_CHECK_EQ(persisted, 1); // the declared default, not the 3 it wrote
}

// ---------------------------------------------------------------------------
// A retained API pointer, and the in-flight case: a teardown asked for while a
// mod callback is on the stack defers its reclamation and completes once the
// stack is clear. Reclaiming under a running callback is a use-after-free
// whether or not the dylib is still mapped, which is why it waits.
// ---------------------------------------------------------------------------
static PopModStatus (*g_saved_alloc)(const PopModApi *, uint32_t, uint32_t *) = nullptr;
static const PopModApi *g_saved_api = nullptr;
static uint32_t g_inflight_owner = 0;
static bool g_complete_during_callback = true;
static uint32_t g_allocs_during_callback = 0;

MOD_TEST_SUITE(loader_retained_api_and_in_flight_teardown) {
    fresh();
    install("b",
            manifest("good.b",
                     "[plugin]\npath = \"" + plug("good_b") +
                         "\"\n"
                         "[settings]\nlevel = { type = \"int\", default = 2, min = 0, max = 9 }\n"),
            plug("good_b").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("good.b"));
    g_inflight_owner = owner_of("good.b");

    // The pointer a plugin keeps, taken while it is still live.
    g_saved_api = mods_api_for(g_inflight_owner);
    MOD_CHECK(g_saved_api != nullptr);
    if (!g_saved_api)
        return;
    g_saved_alloc = g_saved_api->guest_alloc;
    MOD_CHECK(g_saved_alloc != nullptr);
    uint32_t probe = 0;
    MOD_CHECK_EQ(g_saved_alloc(g_saved_api, 32, &probe), POP_OK);
    MOD_CHECK(probe != 0);
    MOD_CHECK(mods_guest_alloc_count(g_inflight_owner) > 0u);

    // A hook of our own, so a mod callback really is on the stack when the
    // teardown is asked for.
    uint32_t id = 0;
    MOD_CHECK_EQ(mods_hook_install(
                     MODS_OWNER_RUNTIME, 0x004ec6f0u,
                     [](const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *) {
                         mods_shutdown_request();
                         // The teardown does NOT run while a callback is on the stack.
                         g_complete_during_callback = mods_shutdown_complete();
                         g_allocs_during_callback = mods_guest_alloc_count(g_inflight_owner);
                     },
                     POP_HOOK_BEFORE, nullptr, &id),
                 POP_OK);

    enter_hooked(0x004ec6f0u);
    MOD_CHECK(!g_complete_during_callback);   // deferred
    MOD_CHECK(g_allocs_during_callback > 0u); // nothing reclaimed underneath it

    // The stack is clear now, so it completes and everything is reclaimed.
    MOD_CHECK(mods_shutdown_complete());
    MOD_CHECK_EQ(mods_guest_alloc_count(g_inflight_owner), 0u);
    MOD_CHECK_EQ(mods_record_count(), 0u);
    // And only now does the pointer it kept refuse.
    if (g_saved_alloc && g_saved_api) {
        uint32_t a = 0;
        MOD_CHECK_EQ(g_saved_alloc(g_saved_api, 32, &a), POP_E_STATE);
    }
}

// ---------------------------------------------------------------------------
// A mod's exit handler is the last chance it has to write anything down, so
// its API has to still work there. Revoking before the exit ran made every
// settings_set from an exit handler fail, which is not a refusal anyone asked
// for.
// ---------------------------------------------------------------------------
MOD_TEST_SUITE(loader_api_is_live_through_pop_mod_exit) {
    fresh();
    install("b",
            manifest("good.b",
                     "[plugin]\npath = \"" + plug("good_b") +
                         "\"\n"
                         "[settings]\nlevel = { type = \"int\", default = 2, min = 0, max = 9 }\n"),
            plug("good_b").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("good.b"));
    uint32_t b = owner_of("good.b");

    void *h = os_dlopen_noload((std::string(TREE) + "/b/" + plug("good_b")).c_str());
    MOD_CHECK(h != nullptr);
    if (!h)
        return;
    const PopModApi *api = mods_api_for(b);
    MOD_CHECK(api != nullptr);
    PopModStatus (*saved_get)(const PopModApi *, const char *, int64_t *) =
        api ? api->settings_get : nullptr;

    // Ask this fixture to write at exit. It is off by default so the other
    // suites that load it keep asserting about their own values.
    int *enable = (int *)os_dlsym(h, "g_good_b_write_at_exit");
    MOD_CHECK(enable != nullptr);
    if (enable)
        *enable = 1;

    mods_shutdown();
    MOD_CHECK_EQ(mods_record_count(), 0u); // the teardown really ran

    // Its exit handler wrote through its own API, and the write succeeded.
    int *st = (int *)os_dlsym(h, "g_good_b_exit_write_status");
    MOD_CHECK(st != nullptr);
    MOD_CHECK_EQ(st ? *st : -1, 0);

    // And it removed its own hook there, inline. An exit handler is ordinary
    // mod code and a removal needs the baton: a host that had given the baton
    // up before running the exits would have this queued on the one thread
    // left to apply the queue, which is to say never applied at all.
    int *unhook = (int *)os_dlsym(h, "g_good_b_exit_unhook_status");
    MOD_CHECK(unhook != nullptr);
    MOD_CHECK_EQ(unhook ? *unhook : -1, 0);

    // And the value it wrote at exit is in the profile on disk.
    mods_settings_reset();
    MOD_CHECK(mods_settings_load(mods_settings_path()));
    mods_settings_declare(b, "good.b", "level", "level", POP_SETTING_INT, 2, 0, 9);
    int64_t v = 0;
    MOD_CHECK_EQ(mods_settings_get(b, "level", &v), POP_OK);
    MOD_CHECK_EQ(v, 6);

    // After the exit returned, the API it kept refuses.
    if (saved_get && api) {
        int64_t out = 0;
        MOD_CHECK_EQ(saved_get(api, "level", &out), POP_E_STATE);
    }
    // Off again: the image stays mapped (h is never closed) and the suites
    // that load this fixture later assert about their own values.
    if (enable)
        *enable = 0;
}

namespace {
jmp_buf g_unwind;
int g_wrap_depth = 0;
uint32_t g_outer_esp = 0;
} // namespace

MOD_TEST_SUITE(loader_a_guard_unwound_past_leaves_no_count_behind) {
    fresh();
    install("b", manifest("good.b", "[plugin]\npath = \"" + plug("good_b") + "\"\n"),
            plug("good_b").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("good.b"));
    const PopModApi *api = mods_api_for(owner_of("good.b"));
    MOD_CHECK(api != nullptr);
    if (!api)
        return;
    MOD_CHECK_EQ(mods_test_guards_in_flight(), 0);

    // Two wraps on one address. The outer forwards through the mod's own api -
    // a guarded call - and the inner does what a guest longjmp does: unwinds
    // the hook runtime and jumps out of the host frame entirely.
    //
    // That jump passes straight over the guard's frame. Anything with a
    // destructor held there would never be destroyed, which for a counter
    // means it is leaked from the first unwind onwards and for C++ means the
    // jump itself is undefined.
    const uint32_t ADDR = 0x004ec6f0u;
    g_wrap_depth = 0;
    auto wrap = [](const PopModApi *a, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
        if (++g_wrap_depth == 1) {
            g_outer_esp = cpu->esp;
            a->call_next(a, inv, cpu);
            return;
        }
        // Above the outer frame, so both are abandoned: that is what a guest
        // longjmp to a setjmp taken before either of them does.
        mods_hooks_unwind_to_esp(g_outer_esp + 0x100u);
        longjmp(g_unwind, 1);
    };
    uint32_t one = 0, two = 0;
    MOD_CHECK_EQ(api->hook_install(api, ADDR, wrap, POP_HOOK_WRAP, nullptr, &one), POP_OK);
    MOD_CHECK_EQ(api->hook_install(api, ADDR, wrap, POP_HOOK_WRAP, nullptr, &two), POP_OK);

    if (setjmp(g_unwind) == 0)
        enter_hooked(ADDR);
    MOD_CHECK_EQ(g_wrap_depth, 2);                 // it really went through both
    MOD_CHECK_EQ(mods_test_guards_in_flight(), 0); // and left nothing behind
    MOD_CHECK_EQ(mods_hook_depth(), 0u);

    // The loader is still usable afterwards, which a leaked count would have
    // ended: the reset waits for the count to reach zero.
    MOD_CHECK(mods_test_reset_loader());
}

MOD_TEST_SUITE(loader_loads_once_per_process) {
    fresh();
    install("b", manifest("good.b", "[plugin]\npath = \"" + plug("good_b") + "\"\n"),
            plug("good_b").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("good.b"));
    const uint32_t owner = owner_of("good.b");
    const uint32_t records = mods_record_count();
    MOD_CHECK(mods_api_for(owner) != nullptr);

    // v1 unloads a plugin at shutdown and not before, so there is no reload.
    // A second load is refused and leaves everything exactly as it was: the
    // same records, the same owner, the same live api. It has to change
    // nothing, because a mod that is already running holds pointers into what
    // a reload would retire.
    MOD_CHECK(!mods_load_all());
    MOD_CHECK_EQ(mods_record_count(), records);
    MOD_CHECK(loaded("good.b"));
    MOD_CHECK_EQ(owner_of("good.b"), owner);
    MOD_CHECK(mods_api_for(owner) != nullptr);
}

MOD_TEST_SUITE(loader_refuses_a_mod_when_owner_ids_run_out) {
    const uint32_t saved = mods_test_next_owner();

    // None left. Owner 0 is the runtime's and 1 is Lua's, so a counter that
    // wrapped would hand a mod one of those and that mod's rollback would take
    // the runtime's own event hooks with it.
    fresh();
    install("a", manifest("good.a", "[plugin]\npath = \"" + plug("good_a") + "\"\n"),
            plug("good_a").c_str());
    mods_test_set_next_owner(0xffffffffu);
    MOD_CHECK(mods_load_all());
    MOD_CHECK(!loaded("good.a"));
    MOD_CHECK_EQ(mods_record_status("good.a"), POP_E_LIMIT);
    MOD_CHECK_EQ(mods_record_count(), 1u); // recorded, not skipped silently

    // One left: it loads, and it is the last one that can.
    fresh();
    install("a", manifest("good.a", "[plugin]\npath = \"" + plug("good_a") + "\"\n"),
            plug("good_a").c_str());
    mods_test_set_next_owner(0xfffffffeu);
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("good.a"));
    MOD_CHECK_EQ(owner_of("good.a"), 0xfffffffeu);
    MOD_CHECK_EQ(mods_test_next_owner(), 0xffffffffu);

    mods_test_set_next_owner(saved);
}

MOD_TEST_SUITE(loader_the_pre_entry_pump_refuses_once_the_guest_is_running) {
    fresh(); // this thread is the run thread: entry has begun
    auto nop = [](const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *) {};
    const uint32_t TURN = 0x004ec6f0u;

    // Queued, because the thread that asks is not a guest thread.
    uint32_t id = 0;
    std::thread([&] {
        MOD_CHECK_EQ(
            mods_hook_install(MODS_OWNER_RUNTIME, TURN, nop, POP_HOOK_BEFORE, nullptr, &id),
            POP_OK);
    }).join();
    MOD_CHECK_EQ(recomp_hooked[recomp_index_of(TURN)], 0);

    // The pre-entry pump is for the window before the guest exists. Asked
    // afterwards it must refuse, and it must refuse every time: the main guest
    // is not a SPAWNED thread, so a guard that only counted spawned threads
    // said "nothing is running" for the whole of a run and would have
    // published under the dispatcher, over and over.
    for (int i = 0; i < 3; ++i) {
        mods_registry_pump_preentry();
        MOD_CHECK_EQ(recomp_hooked[recomp_index_of(TURN)], 0);
        MOD_CHECK_EQ(mods_hooks_installed_count(), 0u);
    }

    // The checkpoint is what publishes it, as it would have all along. This
    // thread is the run thread and holds the baton, so the ordinary pump is
    // that checkpoint.
    mods_registry_pump();
    MOD_CHECK_EQ(recomp_hooked[recomp_index_of(TURN)], 1);
    MOD_CHECK_EQ(mods_hooks_installed_count(), 1u);
    MOD_CHECK_EQ(mods_hook_remove(MODS_OWNER_RUNTIME, id), POP_OK);
}

MOD_TEST_SUITE(loader_a_failed_mod_keeps_a_pointer_that_refuses) {
    fresh();
    install("c",
            manifest("bad.init",
                     "[plugin]\npath = \"" + plug("bad_init") +
                         "\"\n"
                         "[settings]\nlevel = { type = \"int\", default = 1, min = 0, max = 9 }\n"),
            plug("bad_init").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(!loaded("bad.init"));

    // The pointers the failing plugin kept. It got as far as every
    // registration before returning an error, so it is exactly as likely to
    // have saved these as a mod that succeeded - and a rollback that only
    // stops NEW lookups leaves a saved pointer as a live way back in.
    void *h = os_dlopen_noload((std::string(TREE) + "/c/" + plug("bad_init")).c_str());
    MOD_CHECK(h != nullptr);
    if (!h)
        return;
    typedef PopModStatus (*AllocFn)(const PopModApi *, uint32_t, uint32_t *);
    typedef PopModStatus (*SetFn)(const PopModApi *, const char *, int64_t);
    const PopModApi **saved_api = (const PopModApi **)os_dlsym(h, "g_bad_saved_api");
    AllocFn *saved_alloc = (AllocFn *)os_dlsym(h, "g_bad_saved_alloc");
    SetFn *saved_set = (SetFn *)os_dlsym(h, "g_bad_saved_settings_set");
    MOD_CHECK(saved_api && saved_alloc && saved_set);
    if (!saved_api || !saved_alloc || !saved_set)
        return;
    MOD_CHECK(*saved_api != nullptr);
    MOD_CHECK(*saved_alloc != nullptr);
    if (!*saved_api || !*saved_alloc || !*saved_set)
        return;

    // Refused, and with no side effect: no guest memory appears under the
    // owner it was rolled back from, and no setting changes.
    const uint32_t owner = (*saved_api)->mod_index;
    MOD_CHECK_EQ(mods_guest_alloc_count(owner), 0u);
    uint32_t addr = 0xdeadbeefu;
    MOD_CHECK_EQ((*saved_alloc)(*saved_api, 4096, &addr), POP_E_STATE);
    MOD_CHECK_EQ(mods_guest_alloc_count(owner), 0u);
    MOD_CHECK_EQ((*saved_set)(*saved_api, "level", 7), POP_E_STATE);
    int64_t v = 0;
    // The setting is not even declared any more, which is the rollback having
    // taken the declaration with it; either way the write did not land.
    if (mods_settings_get(owner, "level", &v) == POP_OK)
        MOD_CHECK(v != 7);
}

MOD_TEST_SUITE(loader_a_retained_guard_survives_the_teardown_that_races_it) {
    fresh();
    install("b", manifest("good.b", "[plugin]\npath = \"" + plug("good_b") + "\"\n"),
            plug("good_b").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("good.b"));

    static const PopModApi *api = nullptr;
    api = mods_api_for(owner_of("good.b"));
    MOD_CHECK(api != nullptr);
    if (!api)
        return;
    static PopModStatus (*alloc)(const PopModApi *, uint32_t, uint32_t *) = nullptr;
    alloc = api->guest_alloc;
    MOD_CHECK(alloc != nullptr);
    if (!alloc)
        return;

    // A plugin calling through its retained pointer while the host tears the
    // loader down. The guard reads the context's flag and then its contents,
    // and freeing that storage between the two is a read of released memory
    // that an atomic flag cannot prevent - so the storage is never freed, and
    // this is the test of it. Every answer must be one of the two legal ones.
    static std::atomic<bool> stop{false};
    static std::atomic<uint32_t> odd{0}, calls{0};
    stop = false;
    odd = 0;
    calls = 0;
    // The caller has to be running before the teardown starts, or a fast
    // shutdown leaves it nothing to race and the call count at zero.
    std::thread caller([] {
        while (!stop.load(std::memory_order_acquire)) {
            uint32_t a = 0;
            PopModStatus st = alloc(api, 32, &a);
            if (st != POP_OK && st != POP_E_STATE)
                ++odd;
            ++calls;
        }
    });
    while (!calls.load(std::memory_order_acquire))
        std::this_thread::yield();
    mods_shutdown_request();
    while (!mods_shutdown_complete()) {
    }
    stop.store(true, std::memory_order_release);
    caller.join();
    MOD_CHECK(calls.load() > 0u);
    MOD_CHECK_EQ(odd.load(), 0u);
    // And afterwards it is refused for good.
    uint32_t a = 0;
    MOD_CHECK_EQ(alloc(api, 32, &a), POP_E_STATE);
    MOD_CHECK_EQ(mods_record_count(), 0u);
}

// ---------------------------------------------------------------------------
// A hook installed during pop_mod_init is live for the entry point itself.
//
// The loader runs on a thread that is not a guest thread, so an install from
// pop_mod_init is queued rather than applied. Left queued it would not take
// effect until the first scheduler checkpoint, which happens inside the guest
// - after the entry point has been called. A hook on the entry symbol would
// then never fire at all, and a hook on anything the first frame touches would
// miss the first frame.
// ---------------------------------------------------------------------------
MOD_TEST_SUITE(loader_publishes_init_time_hooks_before_the_entry_point) {
    fresh();
    install("e", manifest("entry.hook", "[plugin]\npath = \"" + plug("entry_hook") + "\"\n"),
            plug("entry_hook").c_str());
    // The loader runs where it really runs: a thread that is not a guest
    // thread, before the guest has been entered at all. Loading from a thread
    // marked guest would install the init-time hook inline and prove nothing
    // about the pre-entry pump, which is the whole subject of this suite.
    sched_set_guest_thread(false);
    sched_forget_guest_entry();
    bool loaded_ok = false;
    std::thread([&] { loaded_ok = mods_load_all(); }).join();
    MOD_CHECK(loaded_ok);
    // And this thread is the run thread again, for the guest call below.
    sched_set_guest_thread(true);
    MOD_CHECK(loaded("entry.hook"));

    void *h = os_dlopen_noload((std::string(TREE) + "/e/" + plug("entry_hook")).c_str());
    MOD_CHECK(h != nullptr);
    if (!h)
        return;
    int *st = (int *)os_dlsym(h, "g_entry_hook_install_status");
    unsigned *calls = (unsigned *)os_dlsym(h, "g_entry_hook_calls");
    MOD_CHECK(st && calls);
    if (!st || !calls)
        return;
    MOD_CHECK_EQ(*st, 0);     // the install itself succeeded
    MOD_CHECK_EQ(*calls, 0u); // and has not run yet

    // Published by the load, not by a checkpoint: the flag is already set
    // before anything guest-side has had a chance to run.
    const uint32_t ENTRY = 0x0055d6c0u;
    MOD_CHECK(recomp_index_of(ENTRY) >= 0);
    MOD_CHECK_EQ(recomp_hooked[recomp_index_of(ENTRY)], 1);

    // A guest call into the entry symbol, before any checkpoint, reaches it.
    enter_hooked(ENTRY);
    MOD_CHECK_EQ(*calls, 1u);
}

// ---------------------------------------------------------------------------
// The page is host state, not a registration, so a rollback does not put it
// back on its own. A mod that opens its settings page during init and then
// fails would otherwise leave the page open on its behalf, with the filter
// naming a mod that is not loaded and the runtime page eating input for it.
// ---------------------------------------------------------------------------
MOD_TEST_SUITE(loader_a_failed_init_leaves_the_page_alone) {
    fresh();
    // The page starts closed, and a page opened by something else before the
    // load must come back exactly as it was.
    mods_page_close();
    MOD_CHECK(!mods_page_visible());

    install("c", manifest("bad.page", "[plugin]\npath = \"" + plug("bad_page") + "\"\n"),
            plug("bad_page").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(!loaded("bad.page"));

    void *h = os_dlopen_noload((std::string(TREE) + "/c/" + plug("bad_page")).c_str());
    MOD_CHECK(h != nullptr);
    if (h) {
        int *opened = (int *)os_dlsym(h, "g_bad_page_open_status");
        MOD_CHECK(opened != nullptr);
        MOD_CHECK_EQ(opened ? *opened : -1, 0); // it really did open it
    }
    // And it is closed again, so the runtime page is not consuming input for a
    // mod that is not there.
    MOD_CHECK(!mods_page_visible());
}

// ---------------------------------------------------------------------------
// A failing mod cannot take an earlier mod's hook with it. The ownership check
// lives in the hook registry; this is the loader's side of it, because a
// removal that succeeded across owners would be undone by nothing.
// ---------------------------------------------------------------------------
MOD_TEST_SUITE(loader_a_failed_init_cannot_remove_another_mods_hook) {
    fresh();
    install("a", manifest("good.a", "[plugin]\npath = \"" + plug("good_a") + "\"\n"),
            plug("good_a").c_str());
    install("z", manifest("bad.thief", "[plugin]\npath = \"" + plug("bad_init") + "\"\n"),
            plug("bad_init").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK(loaded("good.a"));
    MOD_CHECK(!loaded("bad.thief"));

    // good.a installed one hook at init. It is still there after the later
    // mod failed and was rolled back: exactly one hook is attributed to it.
    uint32_t before = mods_hooks_installed_count();
    mods_hooks_remove_all(owner_of("good.a"));
    MOD_CHECK_EQ(mods_hooks_installed_count(), before - 1u);
}

// ---------------------------------------------------------------------------
// A host may ask what loaded before anything has, and after everything has
// been torn down. Both are reasonable questions with the same answer, and
// neither may be a crash: the count is unsigned, and a base at or past the end
// would wrap to four billion and send the caller's first mods_record far
// outside the deque.
// ---------------------------------------------------------------------------
MOD_TEST_SUITE(loader_record_accessors_are_safe_before_and_after) {
    const char *id = nullptr;
    int is_loaded = 0;

    // After a teardown, which is the state that produces the wrap: the
    // generation base sits at the end of the deque.
    fresh();
    install("a", manifest("good.a", "[plugin]\npath = \"" + plug("good_a") + "\"\n"),
            plug("good_a").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK_EQ(mods_record_count(), 1u);
    mods_shutdown();

    MOD_CHECK_EQ(mods_record_count(), 0u);
    MOD_CHECK(!mods_record(0, &id, nullptr, nullptr, nullptr, nullptr, nullptr, &is_loaded, nullptr,
                           nullptr, nullptr));
    // A far index is refused too, rather than read.
    MOD_CHECK(!mods_record(1000000u, &id, nullptr, nullptr, nullptr, nullptr, nullptr, &is_loaded,
                           nullptr, nullptr, nullptr));
    MOD_CHECK_EQ(mods_record_status("nobody.here"), POP_OK);

    // And again with no mods at all, which is what a host with mods disabled
    // sees: the same answers, and no crash.
    fresh();
    std::string empty = std::string(TREE) + "/nothing";
    mkdirs(empty);
    os_setenv("RECOMP_MODS_DIR", empty.c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK_EQ(mods_record_count(), 0u);
    MOD_CHECK(!mods_record(0, &id, nullptr, nullptr, nullptr, nullptr, nullptr, &is_loaded, nullptr,
                           nullptr, nullptr));
    mods_shutdown();
    MOD_CHECK_EQ(mods_record_count(), 0u);
}

// Suites run in reverse order of definition. This one loads a plugin, so it
// stays below the empty-run suite, whose record the process-wide
// already-written guard would otherwise refuse.
MOD_TEST_SUITE(loader_plugin_extension_substitution) {
    fresh();
    // The manifest names a suffix from another platform; the shipped file has
    // this platform's. The loader must find it by stem.
    install("x", manifest("ext.sub", "[plugin]\npath = \"good_a.plugin\"\n"),
            plug("good_a").c_str());
    MOD_CHECK(mods_load_all());
    MOD_CHECK_EQ(mods_record_status("ext.sub"), POP_OK);
}

// ---------------------------------------------------------------------------
// A run that reached the loader and found nothing is still a run. Its record
// is what distinguishes "no mods ran" from "nothing wrote a record", so the
// empty case is exactly the one that must not be skipped.
// ---------------------------------------------------------------------------
MOD_TEST_SUITE(loader_an_empty_run_still_writes_its_record) {
    fresh();
    std::string empty = std::string(TREE) + "/no-mods-here";
    mkdirs(empty);
    os_setenv("RECOMP_MODS_DIR", empty.c_str());

    // The path the loader writes to. Removed first and confirmed gone, so
    // what is found afterwards was written by THIS shutdown and is not
    // something an earlier one left behind.
    const std::string record = mods_test_build_path("recomp/mods/run.json");
    os_unlink(record.c_str());
    OsStat st;
    MOD_CHECK(os_stat(record.c_str(), &st) != 0);

    MOD_CHECK(mods_load_all());
    MOD_CHECK_EQ(mods_record_count(), 0u); // the loader ran and found none
    mods_shutdown();

    // A run that reached the loader and found nothing is still a run, and its
    // record is what distinguishes "no mods ran" from "nothing wrote a
    // record". Gating this on the record count meant those runs wrote nothing.
    MOD_CHECK_EQ(os_stat(record.c_str(), &st), 0);
    MOD_CHECK(st.size > 0);

    // The mod set the record names is the run record's own business and is
    // asserted against a fresh process in tools/recomp/mods_test.sh; this
    // binary has loaded mods many times over, so what it accumulates here
    // would not be evidence either way.
}

// The profile is the writable tier whether or not anything game-specific in
// the loader works: a game whose symbol table is absent (a port without mods)
// still must not have its saves and settings written into its own
// installation. The overlay therefore goes in before the first step that can
// fail, and before RECOMP_NO_MODS is honoured.
MOD_TEST_SUITE(loader_installs_the_writable_tier_before_anything_can_fail) {
    fresh();
    win32_set_file_ops(nullptr, nullptr);                     // as at boot, before the loader ran
    host_layout_set_exe_path_for_test("/nowhere/at/all/exe"); // no checkout: no symbols.json
    MOD_CHECK(!mods_load_all());
    host_layout_set_exe_path_for_test(nullptr);
    std::string w = win32_host_path_op("saves\\slot1.sav", WIN32_FILE_WRITE);
    std::string profile = mods_overlay_profile_dir();
    MOD_CHECK(!w.empty() && !profile.empty() && w.rfind(profile, 0) == 0);
    MOD_CHECK(mods_test_reset_loader());

    fresh();
    win32_set_file_ops(nullptr, nullptr);
    os_setenv("RECOMP_NO_MODS", "1");
    mods_load_all(); // true or not (this build's symbol table decides), the tier is up
    os_unsetenv("RECOMP_NO_MODS");
    w = win32_host_path_op("saves\\slot1.sav", WIN32_FILE_WRITE);
    MOD_CHECK(!w.empty() && w.rfind(mods_overlay_profile_dir(), 0) == 0);
}
