// host_d9_default.cpp - weak no-op defaults for host_d9.h. A host that links a
// GPU renderer overrides every one of these.
#include "host_d9.h"

#define HOST_D9_DEFAULT __attribute__((weak))

HOST_D9_DEFAULT int host_d9_active(void) {
    return 0;
}
HOST_D9_DEFAULT void host_d9_texture_define(const HostD9TextureDesc *) {}
HOST_D9_DEFAULT void host_d9_texture_drop(uint32_t) {}
HOST_D9_DEFAULT void host_d9_texture_upload(uint32_t, uint32_t, uint32_t, const uint8_t *,
                                            uint32_t) {}
HOST_D9_DEFAULT int host_d9_texture_read(uint32_t, uint32_t, uint32_t, uint8_t *, uint32_t) {
    return 0;
}
HOST_D9_DEFAULT void host_d9_buffer_upload(uint32_t, uint32_t, uint32_t, const uint8_t *,
                                           uint32_t) {}
HOST_D9_DEFAULT void host_d9_buffer_drop(uint32_t) {}
HOST_D9_DEFAULT void host_d9_draw(const HostD9Draw *) {}
HOST_D9_DEFAULT void host_d9_clear(const HostD9Target *, const int32_t[4], uint32_t,
                                   const int32_t *, uint32_t, uint32_t, float, uint32_t) {}
HOST_D9_DEFAULT void host_d9_stretch(HostD9Surface, const int32_t[4], HostD9Surface,
                                     const int32_t[4], uint32_t) {}
HOST_D9_DEFAULT void host_d9_present(uint32_t, uint32_t, uint32_t) {}
HOST_D9_DEFAULT int host_d9_read_presented(uint8_t *, uint32_t, uint32_t *, uint32_t *) {
    return 0;
}
HOST_D9_DEFAULT void host_d9_probe_next_frame(const char *) {}
HOST_D9_DEFAULT void host_d9_query_begin(uint32_t) {}
HOST_D9_DEFAULT void host_d9_query_end(uint32_t) {}
HOST_D9_DEFAULT int host_d9_query_result(uint32_t, uint32_t *) {
    return -1;
}
HOST_D9_DEFAULT void host_d9_query_drop(uint32_t) {}
