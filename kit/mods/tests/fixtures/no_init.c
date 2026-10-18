/* no_init.c - a well-formed ABI record and no pop_mod_init. A plugin the host
 * can load but cannot start is rejected, not loaded and ignored. */
#include "pop_mod_api.h"

POP_MOD_DECLARE_ABI();

unsigned g_no_init_present = 1;
