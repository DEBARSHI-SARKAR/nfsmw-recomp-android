/* bad_abi.c - the ABI record is present and the right size, but declares an
 * api_version this host does not implement. Written out rather than built with
 * POP_MOD_DECLARE_ABI so the wrong number is the only difference. */
#include "pop_mod_api.h"

const PopModAbi pop_mod_abi = {(uint32_t)sizeof(PopModAbi),
                               99, /* not this host's POP_MOD_API_VERSION */
                               (uint32_t)sizeof(PopModApi), (uint32_t)sizeof(pop_cpu_v1)};

PopModStatus pop_mod_init(const PopModApi *api) {
    (void)api;
    return POP_OK; /* never reached: the record is refused first */
}
