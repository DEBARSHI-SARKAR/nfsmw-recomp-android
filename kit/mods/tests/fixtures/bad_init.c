/* bad_init.c - fails after registering everything a mod can register, so the
 * test can check that a failed init leaves no trace of any of it. */
#include "pop_mod_api.h"

POP_MOD_DECLARE_ABI();

unsigned g_bad_init_ran;
/* What each registration returned, so the test can prove they SUCCEEDED
 * before the rollback rather than assuming they did. A registration that
 * quietly failed would make the rollback look perfect while proving nothing. */
int g_bad_hook_st = 99, g_bad_turn_st = 99, g_bad_key_st = 99;
int g_bad_overlay_st = 99, g_bad_alloc_st = 99, g_bad_menu_st = 99;
int g_bad_provider_st = 99, g_bad_setting_st = 99;
unsigned g_bad_mem;
/* Set if a callback of this mod is ever reached after the rollback. */
unsigned g_bad_event_fired, g_bad_key_seen, g_bad_provider_calls;
/* The pointers a plugin keeps. A mod whose init failed is exactly as likely
 * to have squirrelled these away as one that succeeded - it got as far as
 * every registration before it returned an error - so the test calls them
 * after the rollback and expects to be refused rather than crash. */
const PopModApi *g_bad_saved_api;
PopModStatus (*g_bad_saved_alloc)(const PopModApi *, uint32_t, uint32_t *);
PopModStatus (*g_bad_saved_settings_set)(const PopModApi *, const char *, int64_t);

static void hook(const PopModApi *a, pop_cpu_v1 *c, PopHookInvocation *i, void *u) {
    (void)a;
    (void)c;
    (void)i;
    (void)u;
}
static void ev(const PopModApi *a, void *u) {
    (void)a;
    (void)u;
    ++g_bad_event_fired;
}
/* Consumes every key. A handler that returned 0 would be invisible whether or
 * not the rollback removed it, so it could not tell the test anything: this
 * one's survival is observable as a key the guest never sees. */
static int32_t key(const PopModApi *a, int32_t d, int32_t v, int32_t dn, void *u) {
    (void)a;
    (void)d;
    (void)v;
    (void)dn;
    (void)u;
    ++g_bad_key_seen;
    return 1;
}
static void menu(const PopModApi *a, void *u) {
    (void)a;
    (void)u;
}
/* Answers with a real override, so its survival is observable. A provider
 * that always declined would look identical whether or not the rollback
 * removed it, and could not tell a test anything. */
static uint8_t g_bad_pixels[4 * 4 * 4];
static int32_t tex(const PopModApi *a, uint64_t h, int32_t w, int32_t ht, int32_t f, uint8_t **o,
                   uint32_t *b, void *u) {
    unsigned i;
    (void)a;
    (void)h;
    (void)f;
    (void)u;
    if (w != 4 || ht != 4)
        return 0;
    for (i = 0; i < sizeof g_bad_pixels; ++i)
        g_bad_pixels[i] = 0x5A;
    *o = g_bad_pixels;
    *b = (uint32_t)sizeof g_bad_pixels;
    ++g_bad_provider_calls;
    return 1;
}

/* Every call is guarded, because a module the host has not filled in leaves
 * its pointer null and calling through it takes the whole test binary down
 * with a crash that names nothing. That is not hypothetical: while the host
 * services module was still a weak no-op, register_menu_item below was null
 * and this fixture was what turned an absent module into a segfault for
 * everyone sharing the binary. A fixture is allowed to fail; it is not allowed
 * to be the reason nobody can see any results. */
PopModStatus pop_mod_init(const PopModApi *api) {
    uint32_t addr = 0, id = 0, mem = 0;
    ++g_bad_init_ran;
    if (api->symbol)
        api->symbol(api, "main_loop_outer", &addr);
    if (api->hook_install)
        g_bad_hook_st = api->hook_install(api, addr, hook, POP_HOOK_BEFORE, 0, &id);
    if (api->on_turn)
        g_bad_turn_st = api->on_turn(api, POP_EVENT_BEFORE, ev, 0, &id);
    if (api->on_key)
        g_bad_key_st = api->on_key(api, key, 0, &id);
    if (api->overlay_push && api->mod_dir)
        g_bad_overlay_st = api->overlay_push(api, api->mod_dir(api), &id);
    if (api->guest_alloc)
        g_bad_alloc_st = api->guest_alloc(api, 4096, &mem);
    g_bad_mem = mem;
    if (api->register_menu_item)
        g_bad_menu_st = api->register_menu_item(api, "options", "Bad", menu, 0);
    if (api->texture_override_provider)
        g_bad_provider_st = api->texture_override_provider(api, tex, 0);
    /* Declared in this mod's own manifest, so the write really lands. */
    if (api->settings_set)
        g_bad_setting_st = api->settings_set(api, "level", 3);
    g_bad_saved_api = api;
    g_bad_saved_alloc = api->guest_alloc;
    g_bad_saved_settings_set = api->settings_set;
    return POP_E_STATE; /* everything above must be rolled back */
}
