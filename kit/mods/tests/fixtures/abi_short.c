/* abi_short.c - a record whose api_size stops in the middle of a member.
 * Every member from mod_id onwards is a pointer, so a size that is not
 * pointer-aligned names no prefix of the struct and the host would be serving
 * half a field. */
#include "pop_mod_api.h"

const PopModAbi pop_mod_abi = {(uint32_t)sizeof(PopModAbi), POP_MOD_API_VERSION,
                               (uint32_t)(offsetof(PopModApi, mod_id) + sizeof(const char *) + 1),
                               (uint32_t)sizeof(pop_cpu_v1)};

PopModStatus pop_mod_init(const PopModApi *api) {
    (void)api;
    return POP_OK;
}
