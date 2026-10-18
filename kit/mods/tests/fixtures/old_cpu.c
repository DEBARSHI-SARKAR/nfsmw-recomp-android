/* old_cpu.c - built against tests/fixtures/old_header/pop_mod_api.h, whose
 * pop_cpu_v1 ends after edi. Nothing here says the size: the header does, the
 * way a plugin compiled a year ago would. */
#include "pop_mod_api.h"

POP_MOD_DECLARE_ABI();

unsigned g_old_cpu_size, g_old_cpu_eax, g_old_cpu_declared = (unsigned)sizeof(pop_cpu_v1);

static void before(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    (void)api;
    (void)inv;
    (void)user;
    g_old_cpu_size = cpu->size;
    g_old_cpu_eax = cpu->eax;
}

PopModStatus pop_mod_init(const PopModApi *api) {
    uint32_t addr = 0, id = 0;
    if (api->symbol(api, "main_loop_inner", &addr) != POP_OK)
        return POP_E_NOSYMBOL;
    return api->hook_install(api, addr, before, POP_HOOK_BEFORE, 0, &id);
}
