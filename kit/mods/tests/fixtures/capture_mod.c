/* capture_mod.c - the isolation-mode capture, as a mod.
 *
 * A wrap hook on the candidate: snapshot pop_cpu_v1 at entry, arm page
 * tracking and shim capture, delegate to the original, snapshot again at exit,
 * and write the corpus with the pages the call touched and the shim calls it
 * made. One capture per run, of the first invocation, because the first is the
 * only one whose entry state was not shaped by the captures before it.
 *
 * FAILS CLOSED. Every reason not to trust a capture ends the same way: no file
 * is written. No target configured, tracking refuses to arm, a side-effecting
 * shim call, more pages or calls than the bound allows, a short write - each
 * one leaves the run without a corpus rather than with a corpus that would
 * certify a native replacement on evidence nobody checked.
 *
 * WHAT THE PAGE SET INCLUDES. While the window is open the whole arena is
 * inaccessible, so a guest-memory access by any thread faults and is recorded.
 * The cooperative scheduler keeps other guest threads parked, but a host
 * thread reading guest memory during the call would add its pages to the set.
 * That direction is safe: an extra page is compared and matches, or the
 * capture goes over its bound and is rejected. The unsafe direction, a missed
 * page, cannot happen while the arena is inaccessible.
 *
 * Configuration, all through the environment so no rebuild is needed:
 *   RECOMP_CAPTURE_TARGET  entry symbol name, or an address as 0x...
 *   RECOMP_CAPTURE_OUT     where to write the corpus
 *   RECOMP_CAPTURE_PAGES   page bound (default 4096)
 *   RECOMP_CAPTURE_CALLS   shim call bound (default 10000)
 *   RECOMP_CAPTURE_LIVE_FLAGS
 *       Which of CF,ZF,SF,OF,PF,AF replay may compare, as a bit mask in that
 *       order. The default is 0 and that is not laziness: pop_mod_api.h:55-60
 *       says those six are kept only where the translator's liveness analysis
 *       found a later read, so a hook cannot know which of them are fresh.
 *       Comparing a stale flag fails a correct replacement. Raise this only
 *       for a function whose flag liveness someone has read and written down.
 */
#include "pop_mod_api.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

POP_MOD_DECLARE_ABI();

/* Provided by the host (mods/capture_seam.cpp), bound at load time
 * because a mod links against no host library. */
extern int pop_capture_available(void);
extern int pop_capture_begin(uint32_t max_pages, uint32_t max_calls);
extern int pop_capture_write(const char *path, uint32_t target, const pop_cpu_v1 *entry,
                             const pop_cpu_v1 *exit_state, uint32_t live_flags, const char **why);

static const PopModApi *g_api;
static uint32_t g_hook;
static uint32_t g_target;
static int g_done;
static char g_out[512];

static uint32_t env_u32(const char *name, uint32_t fallback) {
    const char *v = getenv(name);
    char *end = NULL;
    unsigned long n;
    if (!v || !*v)
        return fallback;
    n = strtoul(v, &end, 0);
    if (end == v || *end)
        return fallback;
    return (uint32_t)n;
}

static void capture_wrap(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv,
                         void *user) {
    pop_cpu_v1 entry, exit_state;
    const char *why = "";
    uint32_t pages, calls, live;
    (void)inv;
    (void)user;

    if (g_done) {
        api->call_original(api, cpu->target, cpu);
        return;
    }
    g_done = 1;

    entry = *cpu;
    pages = env_u32("RECOMP_CAPTURE_PAGES", 4096);
    calls = env_u32("RECOMP_CAPTURE_CALLS", 10000);
    live = env_u32("RECOMP_CAPTURE_LIVE_FLAGS", 0);

    if (!pop_capture_begin(pages, calls)) {
        api->log(api, "capture: tracking would not arm; delegating uncaptured");
        api->call_original(api, cpu->target, cpu);
        return;
    }

    /* Nothing between here and the matching write may call the host: while the
     * window is open the guest arena is inaccessible and every shim call is
     * being judged. Logging happens after. */
    api->call_original(api, cpu->target, cpu);
    exit_state = *cpu;

    if (pop_capture_write(g_out, entry.target ? entry.target : g_target, &entry, &exit_state, live,
                          &why))
        api->log(api, "capture: corpus written");
    else
        api->log(api, why && *why ? why : "capture: rejected");
}

PopModStatus pop_mod_init(const PopModApi *api) {
    const char *target = getenv("RECOMP_CAPTURE_TARGET");
    const char *out = getenv("RECOMP_CAPTURE_OUT");
    g_api = api;

    if (!pop_capture_available()) {
        api->log(api, "capture: refused, the host was not built for testing "
                      "(RECOMP_TESTING is not set)");
        return POP_E_STATE;
    }
    if (!target || !*target || !out || !*out) {
        api->log(api, "capture: refused, RECOMP_CAPTURE_TARGET and "
                      "RECOMP_CAPTURE_OUT must both name something");
        return POP_E_STATE;
    }
    snprintf(g_out, sizeof g_out, "%s", out);

    if (target[0] == '0' && (target[1] == 'x' || target[1] == 'X')) {
        char *end = NULL;
        g_target = (uint32_t)strtoul(target, &end, 16);
        if (end == target || *end) {
            api->log(api, "capture: refused, RECOMP_CAPTURE_TARGET is not an address");
            return POP_E_STATE;
        }
    } else if (api->symbol(api, target, &g_target) != POP_OK) {
        api->log(api, "capture: refused, RECOMP_CAPTURE_TARGET names no entry symbol");
        return POP_E_NOSYMBOL;
    }
    return api->hook_install(api, g_target, capture_wrap, POP_HOOK_WRAP, 0, &g_hook);
}

PopModStatus pop_mod_exit(void) {
    if (!g_done)
        fprintf(stderr, "[capture] the candidate never ran; no corpus\n");
    return g_hook ? g_api->hook_remove(g_api, g_hook) : POP_OK;
}
