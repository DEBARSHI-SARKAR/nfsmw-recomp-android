// mods_tests_main.cpp - runs every registered suite. Headless: no window, no
// audio device, no application object. Run from the repository root.
#include "mods_tests.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <string>
#include "../../platform/os.h"

namespace {
ModTestSuite *g_head = nullptr;
int g_checks = 0, g_failures = 0;
} // namespace

void mod_test_register(ModTestSuite *s) {
    s->next = g_head;
    g_head = s;
}
ModTestSuite *mod_test_suites() {
    return g_head;
}
void mod_test_pass() {
    ++g_checks;
}
int mod_test_failures() {
    return g_failures;
}
void mod_test_fail(const char *what, const char *file, int line) {
    ++g_checks;
    ++g_failures;
    fprintf(stderr, "FAIL %s:%d: %s\n", file, line, what);
}

// Each suite name gets its OWN storage, and it is never rewritten.
//
// This used to build every answer in one static string and hand back a pointer
// into it, so the next call silently changed what every earlier caller was
// holding. Two suites keep the pointer rather than copying it, and after any
// later call their ROOT and PROFILE named whichever directory had been
// prepared most recently: the overlay suite wrote and unlinked inside the
// loader's tree, which made a plugin the loader had just installed vanish, and
// the settings suite read values out of the wrong profile. Which suites broke
// depended on suite order, so the same binary gave 0, 2, 4 or 10 failures on
// consecutive runs, and sometimes a segfault - the shared string reallocating
// between a short path and a long one, with a held pointer still aimed at the
// old buffer.
//
// A map keyed by suite name fixes it for every caller at once, including the
// ones that have not been written yet. The alternative - each caller copying
// into a string of its own - leaves the trap loaded for the next one.
const char *mod_test_dir(const char *suite) {
    static std::map<std::string, std::string> kept;
    std::string &path = kept[suite];
    const char *root = recomp_env("TEST_DIR");
    path = std::string(root && *root ? root : mods_test_build_path("recomp/mods-test").c_str()) +
           "/" + suite;
    std::string cmd = "rm -rf '" + path + "' && mkdir -p '" + path + "'";
    if (system(cmd.c_str()) != 0)
        fprintf(stderr, "mod_test_dir: cannot prepare %s\n", path.c_str());
    return path.c_str();
}

int main() {
    // Settings apply now persists immediately. Even suites which only exercise
    // the UI/API must have a scratch profile rather than the player's profile.
    os_setenv("RECOMP_PROFILE_DIR", mod_test_dir("default-profile"));
    // Line buffered, always. Redirected to a file or a pipe, stdout is block
    // buffered, and a suite that crashes takes every earlier suite's result
    // down with it - the run then looks as though nothing ran at all, which
    // is the opposite of what a crashing test run should tell you.
    setvbuf(stdout, nullptr, _IOLBF, 0);
    // RECOMP_MOD_TEST_ONLY=a,b runs only the suites whose name contains one
    // of the comma-separated parts, in the usual order.
    const char *only = recomp_env("MOD_TEST_ONLY");
    auto selected = [only](const char *name) {
        if (!only || !*only)
            return true;
        std::string list = only;
        for (size_t start = 0; start <= list.size();) {
            size_t end = list.find(',', start);
            if (end == std::string::npos)
                end = list.size();
            const std::string part = list.substr(start, end - start);
            if (!part.empty() && strstr(name, part.c_str()))
                return true;
            start = end + 1;
        }
        return false;
    };
    for (ModTestSuite *s = mod_test_suites(); s; s = s->next) {
        if (!selected(s->name))
            continue;
        int before = g_failures;
        s->fn();
        printf("%-34s %s\n", s->name, g_failures == before ? "ok" : "FAILED");
    }
    printf("\n%d checks, %d failures\n", g_checks, g_failures);
    if (!g_failures)
        printf("all mod tests passed\n");
    return g_failures ? 1 : 0;
}
