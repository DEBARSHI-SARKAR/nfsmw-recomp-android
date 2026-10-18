#pragma once
#include <stdio.h>
#include <string.h>
#include "../../platform/os.h"

struct ModTestSuite {
    const char *name;
    void (*fn)();
    ModTestSuite *next;
};
void mod_test_register(ModTestSuite *s);
ModTestSuite *mod_test_suites();
void mod_test_fail(const char *what, const char *file, int line);
void mod_test_pass();
int mod_test_failures();

#define MOD_TEST_SUITE(name_)                                                                      \
    static void name_##_run();                                                                     \
    static ModTestSuite name_##_suite = {#name_, name_##_run, nullptr};                            \
    static struct name_##_reg_t {                                                                  \
        name_##_reg_t() {                                                                          \
            mod_test_register(&name_##_suite);                                                     \
        }                                                                                          \
    } name_##_reg_instance;                                                                        \
    static void name_##_run()

// The build root this suite's artifacts live under: the game's build/ when
// the tests run for a game outside the kit (RECOMP_BUILD_ROOT from CTest), else
// the kit's own build/ relative to the working directory.
#include <stdlib.h>
#include <string>
inline std::string mods_test_build_root() {
    const char *root = recomp_env("BUILD_ROOT");
    return root && *root ? root : "build";
}
inline std::string mods_test_build_path(const char *rel) {
    return mods_test_build_root() + "/" + rel;
}

#define MOD_CHECK(x)                                                                               \
    do {                                                                                           \
        if (x)                                                                                     \
            mod_test_pass();                                                                       \
        else                                                                                       \
            mod_test_fail(#x, __FILE__, __LINE__);                                                 \
    } while (0)

#define MOD_CHECK_EQ(a, b)                                                                         \
    do {                                                                                           \
        long long va = (long long)(a), vb = (long long)(b);                                        \
        if (va == vb)                                                                              \
            mod_test_pass();                                                                       \
        else {                                                                                     \
            char m[256];                                                                           \
            snprintf(m, sizeof m, "%s == %s (%lld vs %lld)", #a, #b, va, vb);                      \
            mod_test_fail(m, __FILE__, __LINE__);                                                  \
        }                                                                                          \
    } while (0)

#define MOD_CHECK_STR(a, b)                                                                        \
    do {                                                                                           \
        const char *sa = (a);                                                                      \
        const char *sb = (b);                                                                      \
        if (sa && sb && strcmp(sa, sb) == 0)                                                       \
            mod_test_pass();                                                                       \
        else {                                                                                     \
            char m[512];                                                                           \
            snprintf(m, sizeof m, "%s == %s (\"%s\" vs \"%s\")", #a, #b, sa ? sa : "(null)",       \
                     sb ? sb : "(null)");                                                          \
            mod_test_fail(m, __FILE__, __LINE__);                                                  \
        }                                                                                          \
    } while (0)

// A scratch directory of this suite's own, created empty. Rooted at
// RECOMP_TEST_DIR (default build/recomp/mods-test), so two suites - or two tasks
// in two worktrees - never share a path and none reads another's leftovers.
const char *mod_test_dir(const char *suite);
