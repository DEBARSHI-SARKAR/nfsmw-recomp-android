/* abi_missing.c - a plugin with a pop_mod_init and no pop_mod_abi at all. The
 * host cannot tell what it was built against, so it is refused rather than
 * guessed at. */
#include "pop_mod_api.h"

PopModStatus pop_mod_init(const PopModApi *api) {
    (void)api;
    return POP_OK; /* never reached */
}
