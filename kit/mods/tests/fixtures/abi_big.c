/* abi_big.c - a record claiming a PopModApi larger than this host's. The
 * plugin expects fields the host does not have, so serving it would hand it
 * whatever follows the struct in memory. */
#include "pop_mod_api.h"

const PopModAbi pop_mod_abi = {(uint32_t)sizeof(PopModAbi), POP_MOD_API_VERSION,
                               (uint32_t)(sizeof(PopModApi) + 64), (uint32_t)sizeof(pop_cpu_v1)};

PopModStatus pop_mod_init(const PopModApi *api) {
    (void)api;
    return POP_OK;
}
