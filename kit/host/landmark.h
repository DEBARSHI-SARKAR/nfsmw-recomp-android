#pragma once
#include "../dx/host_api.h"
#include <cmath>
#include <cstddef>
#include <cstdio>

// A frame-local observation supplied by the entity sprite upload path.
// `complete` distinguishes a known absence of the sprite from unavailable
// attribution. Texture zero with complete=true means it was not submitted.
// This is deliberately separate from the pinned HostD3DDrawSnapshot ABI.
struct LandmarkSpriteEvidence {
    uint64_t frame = 0;
    uint32_t entity_id = 0, texture_handle = 0, texture_revision = 0;
    bool complete = false;
};

// Own only scalar evidence: the frame arena may be gone when the script
// writes frames/landmark_<id>.entities.json after present.
struct LandmarkDrawEvidence {
    uint32_t entity_id;
    uint64_t frame;
    uint32_t handle, revision, seq;
    int32_t min_x, min_y, max_x, max_y;

    LandmarkDrawEvidence(uint32_t entity, uint64_t frame_id, const HostD3DDrawSnapshot &d)
        : entity_id(entity), frame(frame_id), handle(d.texture_handle),
          revision(d.texture_revision), seq(d.seq), min_x(d.screen_min_x), min_y(d.screen_min_y),
          max_x(d.screen_max_x), max_y(d.screen_max_y) {}

    void write(FILE *f) const {
        fprintf(f,
                "{\"entity_id\":%u,\"frame\":%llu,\"handle\":%u,\"revision\":%u,\"seq\":%u,"
                "\"bounds\":[%d,%d,%d,%d]}",
                entity_id, (unsigned long long)frame, handle, revision, seq, min_x, min_y, max_x,
                max_y);
    }
};

enum class LandmarkVisibility { unavailable, hidden, visible, not_drawn };

// Consumes value copies while the guest owns the frame. A background
// presenter must never hand a borrowed snapshot pointer to this check.
inline LandmarkVisibility landmark_visibility(bool entity_found, uint32_t entity_id, uint64_t frame,
                                              bool projection_valid, float x, float y, int width,
                                              int height, const LandmarkSpriteEvidence &sprite,
                                              const HostD3DDrawSnapshot *draws, size_t draw_count,
                                              float origin_x = 0, float origin_y = 0) {
    if (!entity_found || !projection_valid || !std::isfinite(x) || !std::isfinite(y) ||
        !std::isfinite(origin_x) || !std::isfinite(origin_y) || width <= 0 || height <= 0 ||
        !frame || !sprite.complete || sprite.frame != frame || sprite.entity_id != entity_id ||
        (draw_count && !draws))
        return LandmarkVisibility::unavailable;
    if (sprite.texture_handle && !sprite.texture_revision)
        return LandmarkVisibility::unavailable;
    bool covered = false;
    for (size_t i = 0; i < draw_count; ++i) {
        const auto &d = draws[i];
        if (d.kind != HOST_DRAW_PRIMITIVE || !sprite.texture_handle ||
            d.texture_handle != sprite.texture_handle ||
            d.texture_revision != sprite.texture_revision)
            continue;
        // Projection and its clip domain are viewport-local; D3D vertices
        // include the sprite builder's origin (100,0 with the gameplay HUD).
        if (x + origin_x >= d.screen_min_x && x + origin_x < d.screen_max_x &&
            y + origin_y >= d.screen_min_y && y + origin_y < d.screen_max_y)
            covered = true;
    }
    if (!covered)
        return (x < 0 || x >= width || y < 0 || y >= height) ? LandmarkVisibility::hidden
                                                             : LandmarkVisibility::not_drawn;
    return LandmarkVisibility::visible;
}

// Resolve only an attributed body draw covering this entity's projected anchor.
// Scalar result is safe after the arena is released. No draw means no click;
// a projected point by itself (or last frame's draw) cannot select an entity.
// The anchor is the person's feet. A ground shadow also covers it, but its
// centre is below the original 004697bb hit rectangle (which ends at the feet).
inline bool landmark_click_point(bool entity_found, uint32_t entity_id, uint64_t frame,
                                 bool projection_valid, float x, float y, int width, int height,
                                 const LandmarkSpriteEvidence &sprite,
                                 const HostD3DDrawSnapshot *draws, size_t draw_count,
                                 float origin_x, float origin_y, int32_t *gx, int32_t *gy) {
    if (!gx || !gy ||
        landmark_visibility(entity_found, entity_id, frame, projection_valid, x, y, width, height,
                            sprite, draws, draw_count, origin_x,
                            origin_y) != LandmarkVisibility::visible)
        return false;
    for (size_t i = 0; i < draw_count; ++i) {
        const auto &d = draws[i];
        if (d.kind != HOST_DRAW_PRIMITIVE || d.texture_handle != sprite.texture_handle ||
            d.texture_revision != sprite.texture_revision || x + origin_x < d.screen_min_x ||
            x + origin_x >= d.screen_max_x || y + origin_y < d.screen_min_y ||
            y + origin_y >= d.screen_max_y)
            continue;
        const double feet = std::floor(double(y) + origin_y);
        if (d.screen_min_y >= feet)
            continue; // ground shadow, not the body
        const double cx = (double(d.screen_min_x) + d.screen_max_x) / 2;
        const double cy = (double(d.screen_min_y) + feet) / 2;
        const double rx = std::round(cx), ry = std::round(cy);
        if (rx < origin_x || rx >= origin_x + width || ry < origin_y || ry >= origin_y + height ||
            rx < 0 || rx > 32767 || ry < 0 || ry > 32767)
            continue;
        *gx = (int32_t)rx;
        *gy = (int32_t)ry;
        return true;
    }
    return false;
}
