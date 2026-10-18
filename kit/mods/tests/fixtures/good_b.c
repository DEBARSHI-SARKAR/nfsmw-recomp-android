/* good_b.c - an after hook, a declared setting read back at init, and a guest
 * allocation freed in pop_mod_exit. Between them these are every kind of
 * resource the loader has to reclaim for a mod that loads successfully. */
#include "pop_mod_api.h"

POP_MOD_DECLARE_ABI();

unsigned g_good_b_calls;
static const PopModApi *g_api;
static uint32_t g_hook_id;
static uint32_t g_mem;

static void after(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    (void)api;
    (void)cpu;
    (void)inv;
    (void)user;
    ++g_good_b_calls;
}

PopModStatus pop_mod_init(const PopModApi *api) {
    uint32_t addr = 0;
    int64_t level = 0;
    PopModStatus st;
    g_api = api;
    if (api->symbol(api, "main_loop_inner", &addr) != POP_OK)
        return POP_E_NOSYMBOL;
    st = api->hook_install(api, addr, after, POP_HOOK_AFTER, 0, &g_hook_id);
    if (st != POP_OK)
        return st;
    /* Declared in the manifest, so it is readable the moment init runs. */
    api->settings_get(api, "level", &level);
    return api->guest_alloc(api, 256, &g_mem);
}

/* What removing its own hook returned at exit. An exit handler is ordinary
 * mod code and a removal needs the baton: if the host has already given the
 * baton up by the time exits run, this is the call that finds out. */
int g_good_b_exit_unhook_status = 99;

int g_good_b_exit_write_status = 99;
/* Off unless a test turns it on. Writing unconditionally at exit would change
 * a value other suites are asserting about, and each test should be able to
 * keep its own subject. */
int g_good_b_write_at_exit = 0;

PopModStatus pop_mod_exit(void) {
    /* The last chance this mod has to write anything down, which is the
     * ordinary reason to have an exit handler at all. Its API has to still
     * work here. */
    if (g_good_b_write_at_exit && g_api && g_api->settings_set)
        g_good_b_exit_write_status = g_api->settings_set(g_api, "level", 6);
    /* Its own hook, removed by the mod rather than by the rollback that
     * follows. This is the baton-requiring call the exit path has to support. */
    if (g_api && g_api->hook_remove && g_hook_id)
        g_good_b_exit_unhook_status = g_api->hook_remove(g_api, g_hook_id);
    if (g_api && g_mem)
        g_api->guest_free(g_api, g_mem);
    g_mem = 0;
    return POP_OK;
}
