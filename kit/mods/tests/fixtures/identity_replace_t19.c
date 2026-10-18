/* identity_replace_t19.c - the replacement Gate R is exercised with.
 *
 * A replace hook that does nothing but delegate. It stands in for a native
 * replacement without being one, which is the point: whatever Gate R detects
 * when this mod is loaded is the harness's own effect, because an identity
 * replacement cannot change what the game computes. If the gate can pass with
 * a real replacement installed but not with this one, the gate is measuring
 * itself.
 *
 * call_original performs the guest RET, so this hook must not call
 * hook_return; see mods/examples/constant/constant.c for the same rule.
 *
 * The hit counter is the gate's evidence that the hook ran at all. A gate that
 * compared two identical runs would pass just as well with the mod disabled,
 * and would then be testing nothing.
 */
#include "pop_mod_api.h"
#include <stdio.h>
#include <stdlib.h>

POP_MOD_DECLARE_ABI();

static const PopModApi *g_api;
static uint32_t g_hook;
static unsigned g_hits;

static void identity(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    (void)inv;
    (void)user;
    ++g_hits;
    api->call_original(api, cpu->target, cpu);
}

PopModStatus pop_mod_init(const PopModApi *api) {
    uint32_t addr = 0;
    const char *name = getenv("RECOMP_IDENTITY_TARGET");
    g_api = api;
    if (!name || !*name)
        name = "level_startup_thunk";
    if (api->symbol(api, name, &addr) != POP_OK)
        return POP_E_NOSYMBOL;
    return api->hook_install(api, addr, identity, POP_HOOK_REPLACE, 0, &g_hook);
}

PopModStatus pop_mod_exit(void) {
    /* Both destinations on purpose: the log line is what Gate R greps out of a
     * run it drives, and the file is what survives a run whose output another
     * gate has already consumed. */
    const char *dir = getenv("RECOMP_PROFILE_DIR");
    char path[512];
    FILE *f;
    fprintf(stderr, "[identity-t19] hits %u\n", g_hits);
    snprintf(path, sizeof path, "%s/identity-replace-t19.txt",
             dir && *dir ? dir : "build/recomp/profile");
    f = fopen(path, "wb");
    if (f) {
        fprintf(f, "hits %u\n", g_hits);
        fclose(f);
    }
    return g_api->hook_remove(g_api, g_hook);
}
