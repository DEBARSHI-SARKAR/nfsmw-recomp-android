// The three programs a 2D Direct3D 11 renderer compiles, as the tagged blobs
// dx/d3dcompiler.cpp makes of them: entry point, target, and the FNV-1a digest
// of the exact source dx11::shader_kind accepts. The tests hand the shim these
// blobs directly, so the kit carries no shader source.
#pragma once
#include <cstdint>

struct QuadShader {
    const char *entry, *target;
    uint64_t hash;
    bool vertex;
};
static const QuadShader quad_vertex_shader{"VSEntry", "vs_4_0", 0x148f2b3ecca795cbull, true};
static const QuadShader quad_fragment_shader{"PSEntry", "ps_4_0", 0xe55fa4c2afc9ddb6ull, false};
static const QuadShader quad_fragment_shader_R16_int{"PSEntry", "ps_4_0", 0xd70f8e9650a037daull,
                                                     false};
