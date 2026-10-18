/* A mock-ABI unit test of the real fixture callback, including return state. */
#include <assert.h>
#include <string.h>
#include "fixtures/identity_replace.c"
static PopHookFn observed_before, observed_replace;
static unsigned original_calls;
static PopModStatus original_status;
static PopModStatus resolve(const PopModApi *api, const char *name, uint32_t *out) {
    (void)api;
    assert(strcmp(name, "candidate") == 0);
    *out = 0x401000;
    return POP_OK;
}
static PopModStatus install(const PopModApi *api, uint32_t addr, PopHookFn fn, int32_t mode,
                            void *user, uint32_t *id) {
    (void)api;
    (void)user;
    assert(addr == 0x401000);
    if (mode == POP_HOOK_BEFORE)
        observed_before = fn;
    else {
        assert(mode == POP_HOOK_REPLACE);
        observed_replace = fn;
    }
    *id = (uint32_t)mode + 1;
    return POP_OK;
}
static PopModStatus original(const PopModApi *api, uint32_t addr, pop_cpu_v1 *cpu) {
    (void)api;
    assert(addr == 0x401000);
    ++original_calls;
    if (original_status != POP_OK)
        return original_status;
    cpu->eax = 0x12345678;
    cpu->esp += 8;
    cpu->eip = 0x402000;
    cpu->df = 1;
    cpu->st[0] = 3.25;
    return POP_OK;
}
int main(void) {
    PopModApi api = {0};
    pop_cpu_v1 cpu = {0};
    api.symbol = resolve;
    api.hook_install = install;
    api.call_original = original;
    setenv("RECOMP_REPLACE_CANDIDATE", "candidate", 1);
    setenv("RECOMP_REPLACE_ENABLED", "1", 1);
    assert(pop_mod_init(&api) == POP_OK);
    assert(observed_before && observed_replace);
    cpu.esp = 0x10000;
    observed_before(&api, &cpu, NULL, NULL);
    observed_replace(&api, &cpu, NULL, NULL);
    assert(original_calls == 1 && calls == 1 && hits == 1 && originals == 1 && errors == 0);
    assert(cpu.eax == 0x12345678 && cpu.esp == 0x10008 && cpu.eip == 0x402000);
    assert(cpu.df == 1 && cpu.st[0] == 3.25);
    original_status = POP_E_STATE;
    observed_before(&api, &cpu, NULL, NULL);
    observed_replace(&api, &cpu, NULL, NULL);
    assert(original_calls == 2 && calls == 2 && hits == 2 && originals == 2 && errors == 1);
    assert(cpu.esp == 0x10008);
    puts("PASS: identity fixture installs REPLACE, calls original exactly once, preserves CPU "
         "result and one RET");
    return 0;
}
