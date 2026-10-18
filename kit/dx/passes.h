// DISP-T5 additions; host_api.h's pinned structures and offsets stay unchanged.
#pragma once
#include "host_api.h"
#ifdef __cplusplus
extern "C" {
#endif
typedef enum HostDrawMapping { HOST_MAPPING_SCENE = 0, HOST_MAPPING_UI = 1 } HostDrawMapping;
int host_frame_legacy(HostFrameHandle frame);
uint64_t host_legacy_fallback_count(void); // newly detected frames, not sticky repeats
HostDrawMapping host_frame_draw_mapping(HostFrameHandle frame, uint32_t seq);
const char *host_overlay_mapping_for_test(HostFrameHandle frame, uint32_t seq);
void ddraw_note_render_surface(HostSurfaceId surface);
uint32_t ddraw_peek_seq(void);
void host_d3d_replay_barrier(const HostD3DSurface *, uint32_t generation, uint32_t seq);
HostDrawMapping host_render_draw_mapping_for_test(HostFrameHandle frame, uint32_t seq);
int d3d_draw_inside_rect(const HostD3DDrawSnapshot *, int32_t x0, int32_t y0, int32_t x1,
                         int32_t y1);
// Uses the production same-frame replay, and reports failure if no journal exists.
int host_render_legacy_frame_for_test(HostFrameHandle frame);
#ifdef __cplusplus
}
#endif
