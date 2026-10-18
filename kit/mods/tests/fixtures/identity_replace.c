/* Identity replacement: call_original returns CPU registers, flags and guest
 * RET through cpu. Do not hook_return: that would perform a second RET.
 * BEFORE is an independent dispatch counter, present in both bench arms. */
#include "pop_mod_api.h"
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdatomic.h>
POP_MOD_DECLARE_ABI();
static const PopModApi *saved;
static uint32_t before_id, replace_id, target;
static int enabled;
static _Atomic uint64_t calls, hits, originals, errors;
static void count(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    (void)api;
    (void)cpu;
    (void)inv;
    (void)user;
    ++calls;
}
static void identity(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    (void)inv;
    (void)user;
    ++hits;
    ++originals;
    if (api->call_original(api, target, cpu) != POP_OK)
        ++errors;
}
PopModStatus pop_mod_init(const PopModApi *api) {
    const char *name = getenv("RECOMP_REPLACE_CANDIDATE");
    const char *mode = getenv("RECOMP_REPLACE_ENABLED");
    PopModStatus status;
    saved = api;
    if (!name || !*name)
        return POP_E_NOSYMBOL;
    if (api->symbol(api, name, &target) != POP_OK)
        return POP_E_NOSYMBOL;
    enabled = mode && mode[0] == '1';
    status = api->hook_install(api, target, count, POP_HOOK_BEFORE, 0, &before_id);
    if (status != POP_OK)
        return status;
    if (enabled) {
        status = api->hook_install(api, target, identity, POP_HOOK_REPLACE, 0, &replace_id);
        if (status != POP_OK)
            api->hook_remove(api, before_id);
    }
    return status;
}
PopModStatus pop_mod_exit(void) {
    const char *path = getenv("RECOMP_REPLACE_COUNTS");
    FILE *out = path ? fopen(path, "w") : NULL;
    if (!out)
        return POP_E_NOTFOUND;
    fprintf(out,
            "{\"calls\":%" PRIu64 ",\"hits\":%" PRIu64 ",\"originals\":%" PRIu64
            ",\"errors\":%" PRIu64 "}\n",
            atomic_load(&calls), atomic_load(&hits), atomic_load(&originals), atomic_load(&errors));
    if (fclose(out))
        return POP_E_NOTFOUND;
    if (enabled)
        saved->hook_remove(saved, replace_id);
    return saved->hook_remove(saved, before_id);
}
