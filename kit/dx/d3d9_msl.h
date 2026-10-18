// d3d9_msl.h - Direct3D 9 shaders as Metal Shading Language source.
//
// A decoded program (d3d9_shader.h) becomes one MSL function, `vs_main` or
// `ps_main`, in a source string of its own. Every vertex shader writes the same
// interpolant struct and every pixel shader reads it, so any vertex shader
// links with any pixel shader, as in Direct3D.
//
// Resource slots the generated functions use:
//
//   vertex   [[stage_in]] attribute(i)  the dcl'd input register v<i>, as float4
//            buffer(16)                 float4 constants c0..
//            buffer(17)                 D9VSParams
//   fragment buffer(0)                  float4 constants c0..
//            buffer(1)                  D9PSParams
//            texture(i), sampler(i)     sampler stage i
//
// The host fills both parameter blocks with the layouts below; they are part
// of the generated source's contract.
#pragma once
#include "d3d9_shader.h"

#include <cstdint>
#include <string>

struct D9VSParams {
    float halfpix[4];    // added to xy, times w: D3D's half-pixel offset in clip space
    float ascale[16][4]; // per input register: undoes Metal's normalization of integer formats
};
struct D9PSParams {
    float alpha_ref;    // 0..1
    int32_t alpha_func; // D3DCMPFUNC; 8 (always) means no test
    int32_t fog_mode;   // 0 off, 1 vertex factor, 2 linear, 3 exp, 4 exp2
    int32_t pad0;
    float fog_color[4];
    float fog_start, fog_end, fog_density, pad1;
};

namespace d9msl {

// What a pixel shader cannot say about its own samplers: for shader model
// 1.x the texture kinds and projection, for every model the stages bound to a
// depth texture. Direct3D 9 drivers sample a depth texture as a shadow map:
// the lookup compares the coordinate's z with the stored depth (LESSEQUAL,
// filtered) and returns the result in r, g and b.
struct PixelVariant {
    uint16_t cube_mask = 0;      // stages whose bound texture is a cube map
    uint16_t projected_mask = 0; // stages with D3DTTFF_PROJECTED
    uint16_t depth_mask = 0;     // stages whose bound texture holds depth
    uint16_t alpha_mask = 0;     // stages stored as red that sample as alpha (WGSL only)
    uint64_t key() const {
        return (uint64_t)alpha_mask << 48 | (uint64_t)depth_mask << 32 | (uint64_t)cube_mask << 16 |
               projected_mask;
    }
};

// False, with the reason, for a program the translator does not handle.
bool vertex_source(const d9sh::Program &p, std::string *out, std::string *why);
bool pixel_source(const d9sh::Program &p, const PixelVariant &v, std::string *out,
                  std::string *why);

// The stages a pixel shader samples, for the host's texture binding.
uint32_t pixel_sampler_mask(const d9sh::Program &p);
// Which colour outputs a 2.0 pixel shader writes (bit i: oC<i>).
uint32_t pixel_color_outputs(const d9sh::Program &p);

} // namespace d9msl
