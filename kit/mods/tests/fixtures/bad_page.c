/* bad_page.c - opens its settings page during init, then fails.
 *
 * The page is host state rather than a registration, so removing this mod's
 * registrations does not close it. Left open, the runtime page would go on
 * consuming input for a mod that is not loaded, filtered to a mod id nothing
 * can match. */
#include "pop_mod_api.h"

POP_MOD_DECLARE_ABI();

int g_bad_page_open_status = 99;

PopModStatus pop_mod_init(const PopModApi *api) {
    if (api->open_settings_page)
        g_bad_page_open_status = api->open_settings_page(api, api->mod_id);
    return POP_E_STATE; /* and the page must not stay open */
}
