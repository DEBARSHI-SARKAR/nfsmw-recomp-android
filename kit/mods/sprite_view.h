#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Internal game-view extension, outside the pinned plugin ABI. id is the
 * decoded +36 id; slot is the physical pool slot. All values are copies. */
typedef struct PopSpriteView {
    uint64_t frame;
    uint32_t slot, entity_id, texture_handle, texture_revision;
    float x, y;               // viewport-local projection
    float origin_x, origin_y; // sprite builder translation into D3D coordinates
    int32_t width, height;
    uint32_t projected;
    uint32_t drawn; // set only by the D3D shim after submitting this own sprite
    uint32_t draw_seq;
} PopSpriteView;
int mods_sprite_hooks_init(void);
void mods_sprite_reset(void);
int mods_entity_sprite(uint32_t entity_id, uint64_t frame, uint32_t nth, PopSpriteView *out);
/* DX supplies frame identity and the surface revision selected by the game's
 * sprite resolver. Weak defaults make unavailable evidence explicit. */
uint64_t host_sprite_frame_id(void);
uint32_t host_sprite_texture_revision(uint32_t handle);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
#include "../host/fixture_view.h"
#include "../dx/host_api.h"
// Host observations; never installed or supplied by core.display.
extern "C" void host_sprite_record_draw(const HostD3DDrawSnapshot *draw);
bool host_sprite_projection(uint64_t frame, FixtureWorldProjection *out);
#endif
