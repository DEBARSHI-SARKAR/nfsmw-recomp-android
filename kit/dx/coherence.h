// Additive display interfaces. No Task 1 structure layout changes.
#pragma once
#include "host_api.h"
#ifdef __cplusplus
extern "C" {
#endif
typedef struct HostDirtyRect {
    int32_t x0, y0, x1, y1;
} HostDirtyRect;
typedef enum HostReadReason {
    HOST_READ_LOCK,
    HOST_READ_LOCK_WRITE,
    HOST_READ_GETDC,
    HOST_READ_BLT_SOURCE,
    HOST_READ_DSTKEY,
    HOST_READ_DUPLICATE,
    HOST_READ_TEXTURE_LOAD,
    HOST_READ_REASON_COUNT
} HostReadReason;
// Flip is a storage transfer, not a pixel read (spec section 4).
int host_d3d_legacy_writeback(void);
void host_d3d_mark_dirty(uint32_t surface, uint32_t generation, HostDirtyRect rect);
int host_d3d_dirty_rect(uint32_t surface, uint32_t generation, HostDirtyRect *out);
// Returns 1 after a readback, 0 for a clean read, -1 on GPU failure.
int host_d3d_make_coherent(const HostD3DSurface *surface, uint32_t generation,
                           const HostDirtyRect *rect, HostReadReason reason);
void host_d3d_clean_pixels(uint32_t surface, uint32_t generation, HostDirtyRect rect);
void host_d3d_transfer_dirty(uint32_t a, uint32_t ag, uint32_t b, uint32_t bg);
void host_d3d_forget_generation(uint32_t surface, uint32_t generation);
// Also resets the renderer's scene-readback peak for the new observation interval.
void host_d3d_reset_coherence(void);
uint64_t host_readback_count_for_test(void);
uint64_t host_readback_reason_count(HostReadReason reason);
uint64_t host_d3d_clean_read_count(void);
void host_d3d_note_readback(HostReadReason reason);
// Renderer callbacks: called on the guest thread, never dispatch AppKit work.
void host_d3d_reset_readback_metrics(void);
int host_d3d_readback_rects(const HostD3DSurface *, uint32_t generation, const HostDirtyRect *,
                            uint32_t count);
int host_d3d_accepts_draw(void); // false for a presentation frame dropped before encoding
void host_d3d_bind_generation(const HostD3DSurface *, uint32_t generation, uint64_t frame);
void host_d3d_swap_generations(uint32_t a, uint32_t ag, uint32_t b, uint32_t bg);
void host_d3d_prepare_cpu_write(const HostD3DSurface *, uint32_t generation, uint64_t frame);
void host_d3d_apply_cpu(const HostD3DSurface *, const HostBlitRecord *);
void host_d3d_seal_frame(uint64_t frame);
// Called BEFORE releasing frame arena/texture leases. GPU work must finish first.
void host_d3d_retire_frame(uint64_t frame);
// Until T8 installs a consumer, completed sealed frames retire on the guest
// thread at target acquisition. A consumer returns 1 and owns retirement.
int host_d3d_claim_sealed_frame(uint64_t frame);
void host_d3d_release_unclaimed_frame(uint64_t frame);
void host_d3d_set_appkit_pending(int pending);
int host_d3d_appkit_pending(void);
#ifdef __cplusplus
}
#endif
