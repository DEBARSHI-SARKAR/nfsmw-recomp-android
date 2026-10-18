#pragma once
#include "../runtime/memory.h"
#include <cmath>
#include <bit>
#include <cstdint>
#include <cstring>

// Smoke fixture inputs, executed under the guest baton. These only place the
// camera or translate a centre-relative gesture; selection/orders use input.
inline bool fixture_view_point(int32_t dx, int32_t y, int32_t *gx, int32_t *gy) {
    float ox, oy;
    memcpy(&ox, gm_ptr(0xa68f64), 4);
    memcpy(&oy, gm_ptr(0xa68f60), 4);
    const double x = ox + (int16_t)rd16(0x87caa4) + double(dx), sy = oy + double(y);
    if (!std::isfinite(x) || !std::isfinite(sy) || x < 0 || x > 32767 || sy < 0 || sy > 32767)
        return false;
    *gx = (int32_t)x;
    *gy = (int32_t)sy;
    return true;
}
inline bool fixture_camera_position(uint32_t x, uint32_t z) {
    uint32_t camera = rd32(0x74a350);
    if (x > 65535 || z > 65535 || !camera || !gm_valid(camera, 0x28))
        return false;
    wr16(camera + 0x24, (uint16_t)x);
    wr16(camera + 0x26, (uint16_t)z);
    return true;
}

// Value snapshot of the current guest projection. The sprite origin comes
// from attribution: the live vertex_shift globals are reset after rendering.
struct FixtureWorldProjection {
    int32_t matrix[9]{}, curvature = 0, depth = 0, perspective = 0, zoom = 0;
    int32_t camera_x = 0, camera_z = 0, center_x = 0, center_y = 0, width = 0, height = 0;
    uint8_t shift_x = 0, shift_y = 0;
    float scale_x = 0, scale_y = 0, origin_x = 0, origin_y = 0;
    bool valid = false;
};
inline FixtureWorldProjection fixture_world_projection(float ox, float oy) {
    FixtureWorldProjection p;
    uint32_t camera = rd32(0x74a350), ui = rd32(0xafc2f4);
    if (!camera || !gm_valid(camera, 0x2e) || !ui || !gm_valid(ui, 0xd08))
        return p;
    for (unsigned i = 0; i < 9; ++i)
        p.matrix[i] = (int32_t)rd32(0x74a354 + 4 * i);
    p.camera_x = rd16(camera + 0x24);
    p.camera_z = rd16(camera + 0x26);
    p.zoom = (int32_t)rd32(camera + 0x2a);
    p.curvature = (int32_t)rd32(0x87ca5c);
    p.depth = (int32_t)rd32(0x87ca64);
    p.perspective = (int32_t)rd32(0x87ca68);
    p.center_x = (int16_t)rd16(0x87caa4);
    p.center_y = (int16_t)rd16(0x87caa6);
    p.width = (int16_t)rd16(0x87ca90);
    p.height = (int16_t)rd16(0x87ca92);
    p.shift_x = rd8(ui + 0xcf8);
    p.shift_y = rd8(ui + 0xcfc);
    memcpy(&p.scale_x, gm_ptr(ui + 0xd00), 4);
    memcpy(&p.scale_y, gm_ptr(ui + 0xd04), 4);
    p.origin_x = ox;
    p.origin_y = oy;
    p.valid = p.width > 0 && p.height > 0 && std::isfinite(ox) && std::isfinite(oy) &&
              std::isfinite(p.scale_x) && std::isfinite(p.scale_y) && p.scale_x > 0 &&
              p.scale_y > 0 && p.shift_x <= 4 && p.shift_y <= 4 && p.perspective >= 0 &&
              p.perspective <= 14;
    return p;
}

// Read-only 0046dbe0 arithmetic, including x86 32-bit wrap, curvature and
// 0046f080's shortest wrapped world deltas. Differentially checked against
// the generated original body in display_projection_tests.cpp. This performs
// no guest call and changes no simulation, renderer scratch or CPU state.
inline bool fixture_project_world(const FixtureWorldProjection &p, int32_t wx, int32_t wz,
                                  int32_t altitude, float *gx, float *gy) {
    if (!p.valid || !gx || !gy || wx < 0 || wx > 65535 || wz < 0 || wz > 65535 ||
        altitude < -32768 || altitude > 32767)
        return false;
    auto bits = [](uint32_t v) { return std::bit_cast<int32_t>(v); };
    auto add = [&](int32_t a, int32_t b) { return bits(uint32_t(a) + uint32_t(b)); };
    auto mul = [&](int32_t a, int32_t b) { return bits(uint32_t(a) * uint32_t(b)); };
    auto delta = [](int32_t a, int32_t b) {
        int32_t d = a - b;
        if (d >= 32768)
            d -= 65536;
        else if (d <= -32768)
            d += 65536;
        return d >> 1;
    };
    int32_t x = delta(wx, p.camera_x), z = delta(wz, p.camera_z);
    const auto &m = p.matrix;
    int32_t tx = add(mul(m[2], z), mul(m[0], x)) >> 14;
    int32_t ty = add(add(mul(m[5], z), mul(m[4], altitude)), mul(m[3], x)) >> 14;
    int32_t tz = add(add(mul(m[8], z), mul(m[7], altitude)), mul(m[6], x)) >> 14;
    int32_t xx = add(tx, tx), zz = add(tz, tz);
    int64_t curve = int64_t(add(mul(xx, xx), mul(zz, zz))) * p.curvature;
    ty = add(ty, bits(0u - uint32_t(bits(uint32_t(curve >> 16)) >> 16)));
    int32_t depth = add(tz, p.depth);
    if (depth <= 0)
        return false;
    int32_t factor = int32_t(1u << (p.perspective + 16)) / depth;
    int32_t sx = bits(uint32_t((int64_t(mul(p.zoom, tx) >> (16 - p.shift_x)) * factor) >> 16));
    int32_t sy = bits(uint32_t((int64_t(mul(p.zoom, ty) >> (16 - p.shift_y)) * factor) >> 16));
    float lx = float(double(p.scale_x) * sx + p.center_x);
    float ly = float(p.center_y - double(p.scale_y) * sy);
    if (!std::isfinite(lx) || !std::isfinite(ly))
        return false;
    *gx = lx;
    *gy = ly;
    return true;
}

inline bool fixture_world_point(const FixtureWorldProjection &p, int32_t wx, int32_t wz,
                                int32_t altitude, int32_t *gx, int32_t *gy) {
    float lx, ly;
    if (!gx || !gy || !fixture_project_world(p, wx, wz, altitude, &lx, &ly))
        return false;
    double rx = std::round(double(lx) + p.origin_x), ry = std::round(double(ly) + p.origin_y);
    if (!std::isfinite(rx) || !std::isfinite(ry) || lx < 0 || lx >= p.width || ly < 0 ||
        ly >= p.height || rx < p.origin_x || rx >= p.origin_x + p.width || ry < p.origin_y ||
        ry >= p.origin_y + p.height || rx < 0 || rx > 32767 || ry < 0 || ry > 32767)
        return false;
    *gx = (int32_t)rx;
    *gy = (int32_t)ry;
    return true;
}
