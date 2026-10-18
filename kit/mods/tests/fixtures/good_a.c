/* good_a.c - the simplest complete plugin: one before hook on a real entry,
 * counting calls in an exported counter the test can read back. */
#include "pop_mod_api.h"

POP_MOD_DECLARE_ABI();

unsigned g_good_a_calls;
static uint32_t g_hook_id;

static void before(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    (void)api;
    (void)cpu;
    (void)inv;
    (void)user;
    ++g_good_a_calls;
}

PopModStatus pop_mod_init(const PopModApi *api) {
    uint32_t addr = 0;
    if (api->symbol(api, "main_loop_inner", &addr) != POP_OK)
        return POP_E_NOSYMBOL;
    return api->hook_install(api, addr, before, POP_HOOK_BEFORE, 0, &g_hook_id);
}

PopModStatus pop_mod_exit(void) {
    return POP_OK; /* the host reclaims what this mod registered */
}
