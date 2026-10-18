/* api_header_test.c - the public header must compile as plain C11 with no
 * C++ features and no host headers: that is a mod author's build. */
#include "mods/pop_mod_api.h"

POP_MOD_DECLARE_ABI();

static PopHookFn g_hook_fn;
static PopEventFn g_event_fn;
static PopKeyFn g_key_fn;
static PopMouseFn g_mouse_fn;
static PopMenuFn g_menu_fn;
static PopTextureProviderFn g_texture_fn;

int pop_mod_api_header_compiles_as_c(void);
int pop_mod_api_header_compiles_as_c(void) {
    pop_cpu_v1 cpu;
    pop_cpu_v1_init(&cpu);
    (void)g_hook_fn;
    (void)g_event_fn;
    (void)g_key_fn;
    (void)g_mouse_fn;
    (void)g_menu_fn;
    (void)g_texture_fn;
    return (int)cpu.size + (int)pop_mod_abi.api_size;
}
