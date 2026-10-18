# Shader contract

Every backend supplies these programs under these names. Slot numbers are the
binding indices `gpu.h` calls use; layouts are the structs the portable code
fills. A backend may implement a program in any language but must read exactly
these inputs.

## `d3d` (render pipeline)

- Vertex buffer slot 0: `HostD3DVertex` (14 floats: x y z w, u v, r g b a, sr sg sb sa), `d3d_render.h`.
- Vertex and fragment bytes slot 1: `D3DUniforms` (`d3d_render.h`): `float mvp[16]` column-major, then
  `uint32 pretransformed, textured, texblend, alphatest, alphafunc; float alpharef; uint32 specular,
  texture_has_alpha, fogmode; float fogstart, fogend, fogdensity, fogr, fogg, fogb, pointsize;
  uint32 terrain_detail`. 132 bytes of fields; the C struct is 16-byte aligned (144 bytes) and
  the backend receives it whole.
- Fragment texture 0 + sampler 0: the draw's texture. Fragment texture 1 + sampler 1: terrain detail.
- Outputs: colour attachment 0 (BGRA8) and coverage attachment 1 (R8, 1.0 for every surviving fragment).
- Semantics: texblend cases 1/7 decal, 2 modulate, 3 decal alpha, 4 modulate alpha, 5 decal mask,
  8 add; alpha test with D3D compare functions 1..8; fog modes 1 vertex (specular alpha), 2 exp,
  3 exp2, 4 linear; terrain detail modulates by chroma-derived material weights.

## `surface_upload` (render pipeline)

- No vertex buffer: the vertex program emits a fullscreen triangle from the vertex id (0..2).
- Fragment buffer slot 0: the guest surface bytes. Fragment bytes slot 1: `uint32 p[20]`:
  `guest_w, guest_h, native_w, native_h, pitch, bpp, has_palette, 0, rmask, gmask, bmask, 0,
  rshift, gshift, bshift, 0, rmax, gmax, bmax, 0`. Fragment bytes slot 2: `uint32 palette[256]` (0x00RRGGBB).
- Output: colour attachment 0 (BGRA8): the guest pixel at `floor(x * guest / native)`.

## `compositor` (render pipeline)

- No vertex buffer: 4 vertices by id, triangle strip.
- Vertex and fragment bytes slot 0: `CompositorQuad { float rect[4]; float uv[4]; float drawable[2];
  uint32 opaque, pad; }` (48 bytes). rect in drawable pixels, y down; uv normalised.
- Fragment texture 0, nearest, clamp to edge. Output: colour attachment 0 in the target's format;
  `opaque` forces alpha to 1. `gpu2d.cpp` draws Direct3D 11 rectangles with it too, under any
  blend factors, so the sample must be the texel itself, unfiltered.

## `hud` (render pipeline)

- No vertex buffer: 4 vertices by id, triangle strip. Vertex bytes slot 0: `float rect[4]` in NDC
  (x, y, w, h with h negative for y-down). Fragment texture 0, linear sampling. Premultiplied blend.

## `guest_readback`, `guest_readback_fused` (compute)

- Texture 0 colour (read), texture 1 coverage (read). Buffer 0: `uint32 out[2 * pixels]`.
- Bytes slot 1: `uint32 p[12]`: `x0, y0, x1, y1` guest rect, `native_w, native_h, guest_w, guest_h`,
  `offset` into `out` in pixels, `edge_x1, edge_y1` native edges, `0`.
- Writes `out[2*i] = bgr | (covered << 24)`, `out[2*i+1] = lit count` (fused) or 0.
- Dispatched with `dispatch_threads(x1-x0, y1-y0, 8, 8)`.

## `native_brightness` (compute)

- Texture 0 colour. Buffer 0: `uint32 sums[]`. Bytes slot 1: `uint32 p[8]`: `x0, y0, x1, y1, offset,
  groups_x, simdgroups, 0`. Dispatched with `dispatch_groups(gx, gy, 16, 16)`; each 16x16 group
  covers a 32x32 native tile and reduces per SIMD group, lane 0 writing `sums[offset + ...]`.
  A backend without subgroup operations may reduce through shared memory; the output layout is
  what matters.

## Vulkan bindings

The GLSL under `gpu/vulkan/shaders/` maps the slots above onto descriptor set 0: vertex-stage buffer
slot s → binding s, fragment-stage buffer slot s → binding 4+s, texture slot t → combined image
sampler binding 8+t; compute kernels use bindings 0..3 for buffers and 8+t for textures. Every
buffer is a std430 storage buffer; compute local sizes are fixed at 8x8 (readback) and 16x16
(brightness), the sizes the renderer dispatches with. `tools/recomp/shaders.py compile` regenerates
`gpu/vulkan/shaders_spv.h`; `shader_drift_check` fails when the header and the sources disagree.
