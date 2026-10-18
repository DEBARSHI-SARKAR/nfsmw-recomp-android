// d3d9_wgsl.h - Direct3D 9 shaders as WGSL, for the WebGPU renderer.
//
// The same translation as d3d9_msl.h and d3d9_glsl.h. A vertex program's entry
// is `vs_main`, a pixel program's `ps_main`; every vertex shader writes the
// same interpolants (locations 0-11) and every pixel shader reads them.
//
// Group 0, the same layout for every program:
//
//   binding 0   var<uniform> VC { c: array<vec4f, N> }   vertex float constants
//   binding 1   var<uniform> VSP (D9VkVSParams, d3d9_glsl.h)
//   binding 2   var<uniform> PC { c: array<vec4f, N> }   pixel float constants
//   binding 3   var<uniform> PSP (D9PSParams, d3d9_msl.h)
//   binding 4+i texture of stage i: texture_2d, texture_cube or texture_depth_2d
//   binding 20+i its sampler (a comparison sampler for a depth texture)
//
// N is d9glsl::constant_registers(program). A stage in the variant's
// alpha_mask holds an alpha-only texture stored as red.
#pragma once
#include "d3d9_glsl.h"

namespace d9wgsl {

constexpr uint32_t kTextureBinding = 4;
constexpr uint32_t kSamplerBinding = 20;

bool vertex_source(const d9sh::Program &p, std::string *out, std::string *why);
bool pixel_source(const d9sh::Program &p, const d9msl::PixelVariant &v, std::string *out,
                  std::string *why);

} // namespace d9wgsl
