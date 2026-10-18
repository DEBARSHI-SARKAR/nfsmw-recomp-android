// d3d9_shader.h - Direct3D 9 shader bytecode, decoded.
//
// Shader model 1.x, 2.0 and 3.0 programs become a list of instructions with their
// operands spelled out, once per distinct program. The CPU renderer
// (d3d9_raster.cpp) interprets that list and the Metal translator
// (d3d9_msl.cpp) turns it into source; both read the same decoding, so a
// program means the same thing on either path.
#pragma once
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace d9sh {

enum Reg : uint32_t {
    R_TEMP = 0,
    R_INPUT = 1,
    R_CONST = 2,
    R_ADDR = 3,
    /* ps: TEXTURE */ R_RASTOUT = 4,
    R_ATTROUT = 5,
    R_TEXCRDOUT = 6,
    R_CONSTINT = 7,
    R_COLOROUT = 8,
    R_DEPTHOUT = 9,
    R_SAMPLER = 10,
    R_CONSTBOOL = 14,
    R_LOOP = 15,
    R_MISC = 17,
};
// In a 3.0 vertex shader R_TEXCRDOUT (6) is D3DSPR_OUTPUT: oN, whose meaning
// its dcl gives.
enum Op : uint32_t {
    OP_NOP = 0,
    OP_MOV = 1,
    OP_ADD = 2,
    OP_SUB = 3,
    OP_MAD = 4,
    OP_MUL = 5,
    OP_RCP = 6,
    OP_RSQ = 7,
    OP_DP3 = 8,
    OP_DP4 = 9,
    OP_MIN = 10,
    OP_MAX = 11,
    OP_SLT = 12,
    OP_SGE = 13,
    OP_EXP = 14,
    OP_LOG = 15,
    OP_LIT = 16,
    OP_DST = 17,
    OP_LRP = 18,
    OP_FRC = 19,
    OP_M4X4 = 20,
    OP_M4X3 = 21,
    OP_M3X4 = 22,
    OP_M3X3 = 23,
    OP_M3X2 = 24,
    OP_LOOP = 27,
    OP_ENDLOOP = 29,
    OP_DCL = 31,
    OP_POW = 32,
    OP_CRS = 33,
    OP_SGN = 34,
    OP_ABS = 35,
    OP_NRM = 36,
    OP_SINCOS = 37,
    OP_REP = 38,
    OP_ENDREP = 39,
    OP_IF = 40,
    OP_IFC = 41,
    OP_ELSE = 42,
    OP_ENDIF = 43,
    OP_BREAK = 44,
    OP_BREAKC = 45,
    OP_MOVA = 46,
    OP_DEFB = 47,
    OP_DEFI = 48,
    OP_TEXCOORD = 64,
    OP_TEXKILL = 65,
    OP_TEX = 66,
    OP_TEXLDL = 95,
    OP_EXPP = 78,
    OP_LOGP = 79,
    OP_CND = 80,
    OP_DEF = 81,
    OP_TEXDP3 = 85,
    OP_CMP = 88,
    OP_DP2ADD = 90,
    OP_PHASE = 0xfffd,
    OP_COMMENT = 0xfffe,
    OP_END = 0xffff,
};

struct Dst {
    uint32_t type = 0, index = 0, mask = 0xf;
    bool saturate = false;
    int shift = 0;
};
struct Src {
    uint32_t type = 0, index = 0, swz = 0xe4, mod = 0; // 0xe4: xyzw
    bool rel = false;
};
struct Inst {
    uint32_t op = 0;
    Dst dst;
    Src src[4];
    uint32_t nsrc = 0;
    bool has_dst = false;
    uint32_t ctrl = 0; // opcode-specific bits 16-23: texld 1 is texldp, 2 texldb;
                       // ifc/breakc: 1 >, 2 ==, 3 >=, 4 <, 5 !=, 6 <=
};
// A dcl on an input register: vertex attributes (v), or in a 2.0 pixel shader
// the interpolated colours (v) and texture coordinates (t); in 3.0 pixel
// shaders every v says what it is. Also a 3.0 vertex shader's outputs.
struct DclIn {
    uint32_t usage = 0, usage_index = 0, type = 0, index = 0;
};
// D3DSAMPLER_TEXTURE_TYPE: 2 is 2D, 3 cube, 4 volume.
enum SamplerKind : uint32_t { S_2D = 2, S_CUBE = 3, S_VOLUME = 4 };

struct Program {
    bool ok = false;
    std::string why;
    uint32_t major = 0, minor = 0;
    bool pixel = false;
    std::vector<Inst> code;
    std::vector<DclIn> inputs;
    std::vector<DclIn> outputs;                       // 3.0 vs: oN and what each one is
    std::map<uint32_t, uint32_t> samplers;            // 2.0 ps: sampler index -> SamplerKind
    std::map<uint32_t, std::array<float, 4>> defs;    // def cN
    std::map<uint32_t, std::array<int32_t, 4>> idefs; // defi iN
    std::map<uint32_t, bool> bdefs;                   // defb bN
    uint32_t max_const = 0;                           // one past the highest cN read
    bool relative = false;                            // reads constants through a0
    // Filled on first use by the renderer: stages sampled, and the 2.0+
    // stages declared as cube maps.
    mutable int64_t sampler_mask = -1;
    mutable uint32_t cube_samplers = 0;
};

// A decoded program, cached by its bytes.
const Program &program_for(const std::vector<uint8_t> &code);
// The key that names a program's bytes (64-bit FNV-1a, never zero), and the
// program cached under it: the per-draw path looks programs up by key.
uint64_t code_key(const uint8_t *code, size_t size);
const Program &program_for_key(uint64_t key, const uint8_t *code, size_t size);

} // namespace d9sh
