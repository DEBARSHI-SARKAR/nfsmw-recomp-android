// d3d9_shader.cpp - Direct3D 9 shader bytecode, decoded. See d3d9_shader.h.
#include "d3d9_shader.h"

#include <cstring>
#include <mutex>
#include <unordered_map>

namespace d9sh {
namespace {

// Operand counts for SM 1.x, which carries no instruction length. The first
// operand is the destination for every op that has one.
int operand_count(uint32_t op, uint32_t major, uint32_t minor, bool pixel) {
    switch (op) {
    case OP_NOP:
        return 0;
    case OP_MOV:
    case OP_MOVA:
    case OP_RCP:
    case OP_RSQ:
    case OP_EXP:
    case OP_LOG:
    case OP_LIT:
    case OP_FRC:
    case OP_ABS:
    case OP_NRM:
    case OP_EXPP:
    case OP_LOGP:
    case OP_TEXDP3:
        return 2;
    case OP_ADD:
    case OP_SUB:
    case OP_MUL:
    case OP_DP3:
    case OP_DP4:
    case OP_MIN:
    case OP_MAX:
    case OP_SLT:
    case OP_SGE:
    case OP_DST:
    case OP_M4X4:
    case OP_M4X3:
    case OP_M3X4:
    case OP_M3X3:
    case OP_M3X2:
    case OP_POW:
    case OP_CRS:
        return 3;
    case OP_MAD:
    case OP_LRP:
    case OP_SGN:
    case OP_CND:
    case OP_CMP:
    case OP_DP2ADD:
        return 4;
    case OP_SINCOS:
        return major >= 3 ? 2 : 4;
    case OP_TEXCOORD:
        return (pixel && major == 1 && minor == 4) ? 2 : 1;
    case OP_TEXKILL:
        return 1;
    case OP_TEX:
        if (major >= 2)
            return 3;
        return (major == 1 && minor == 4) ? 2 : 1;
    case OP_DCL:
        return 2;
    case OP_DEF:
    case OP_DEFI:
        return 5;
    case OP_DEFB:
        return 2;
    case OP_TEXLDL:
        return 3;
    // Control flow: operands but no destination (see has_destination).
    case OP_REP:
    case OP_IF:
        return 1;
    case OP_IFC:
    case OP_BREAKC:
    case OP_LOOP:
        return 2;
    case OP_ENDREP:
    case OP_ELSE:
    case OP_ENDIF:
    case OP_BREAK:
    case OP_ENDLOOP:
        return 0;
    default:
        return -1;
    }
}

bool has_destination(uint32_t op) {
    switch (op) {
    case OP_REP:
    case OP_IF:
    case OP_IFC:
    case OP_BREAKC:
    case OP_LOOP:
    case OP_ENDREP:
    case OP_ELSE:
    case OP_ENDIF:
    case OP_BREAK:
    case OP_ENDLOOP:
        return false;
    default:
        return true;
    }
}

Program load(const std::vector<uint8_t> &code) {
    Program p;
    if (code.size() < 8) {
        p.why = "empty";
        return p;
    }
    auto tok = [&](size_t i) -> uint32_t {
        size_t o = i * 4;
        return o + 4 <= code.size() ? (uint32_t)(code[o] | code[o + 1] << 8 | code[o + 2] << 16 |
                                                 (uint32_t)code[o + 3] << 24)
                                    : 0xffffffffu;
    };
    uint32_t version = tok(0);
    p.pixel = (version >> 16) == 0xffff;
    p.major = (version >> 8) & 0xff;
    p.minor = version & 0xff;
    if ((version >> 16) != 0xffff && (version >> 16) != 0xfffe) {
        p.why = "not a shader";
        return p;
    }
    if (p.major > 3) {
        p.why = "shader model " + std::to_string(p.major) + " is not translated";
        return p;
    }
    size_t n = code.size() / 4;
    size_t i = 1;
    auto dst_of = [&](uint32_t t) {
        Dst d;
        d.type = ((t >> 28) & 7) | ((t & 0x1800) >> 8);
        d.index = t & 0x7ff;
        d.mask = (t >> 16) & 0xf;
        d.saturate = (t >> 20) & 1;
        int s = (t >> 24) & 0xf;
        d.shift = s > 7 ? s - 16 : s;
        return d;
    };
    auto src_of = [&](uint32_t t, bool &extra) {
        Src s;
        s.type = ((t >> 28) & 7) | ((t & 0x1800) >> 8);
        s.index = t & 0x7ff;
        s.swz = (t >> 16) & 0xff;
        s.mod = (t >> 24) & 0xf;
        s.rel = (t >> 13) & 1;
        extra = s.rel && p.major >= 2;
        return s;
    };
    while (i < n) {
        uint32_t t = tok(i);
        uint32_t op = t & 0xffff;
        if (op == OP_END)
            break;
        if (op == OP_COMMENT) {
            i += 1 + ((t >> 16) & 0x7fff);
            continue;
        }
        if (op == OP_PHASE) {
            ++i;
            continue;
        }
        int count = operand_count(op, p.major, p.minor, p.pixel);
        if (count < 0) {
            p.why = "unsupported instruction " + std::to_string(op);
            return p;
        }
        size_t len = p.major >= 2 ? ((t >> 24) & 0xf) : (size_t)count;
        size_t at = i + 1;
        if (op == OP_DCL) {
            uint32_t decl = tok(at);
            Dst d = dst_of(tok(at + 1));
            if (d.type == R_SAMPLER)
                p.samplers[d.index] = (decl >> 27) & 0xf;
            else if (d.type == R_INPUT || (p.pixel && d.type == R_ADDR))
                p.inputs.push_back(DclIn{decl & 0x1f, (decl >> 16) & 0xf, d.type, d.index});
            else if (!p.pixel && p.major >= 3 && d.type == R_TEXCRDOUT)
                p.outputs.push_back(DclIn{decl & 0x1f, (decl >> 16) & 0xf, d.type, d.index});
            i = at + len;
            continue;
        }
        if (op == OP_DEF) {
            Dst d = dst_of(tok(at));
            std::array<float, 4> v{};
            for (int k = 0; k < 4; ++k) {
                uint32_t b = tok(at + 1 + k);
                memcpy(&v[k], &b, 4);
            }
            p.defs[d.index] = v;
            if (d.index + 1 > p.max_const)
                p.max_const = d.index + 1;
            i = at + len;
            continue;
        }
        if (op == OP_DEFI) {
            std::array<int32_t, 4> v{};
            for (int k = 0; k < 4; ++k)
                v[k] = (int32_t)tok(at + 1 + k);
            p.idefs[dst_of(tok(at)).index] = v;
            i = at + len;
            continue;
        }
        if (op == OP_DEFB) {
            p.bdefs[dst_of(tok(at)).index] = tok(at + 1) != 0;
            i = at + len;
            continue;
        }
        Inst in;
        in.op = op;
        in.ctrl = (t >> 16) & 0xff;
        size_t k = at, end = at + len;
        if (count > 0 && has_destination(op)) {
            in.has_dst = true;
            in.dst = dst_of(tok(k++));
            if (p.major >= 2 && ((tok(k - 1) >> 13) & 1))
                ++k;
        }
        // SM 1.0-1.3 texture ops name only the destination: the source is the
        // same stage's texture coordinate.
        while (k < end && in.nsrc < 4) {
            bool extra = false;
            Src s = src_of(tok(k++), extra);
            if (extra)
                ++k;
            if (s.type == R_CONST) {
                if (s.rel)
                    p.relative = true;
                if (s.index + 1 > p.max_const)
                    p.max_const = s.index + 1;
            }
            in.src[in.nsrc++] = s;
        }
        // The matrix ops read the rows after the one they name.
        if ((op == OP_M4X4 || op == OP_M4X3 || op == OP_M3X4 || op == OP_M3X3 || op == OP_M3X2) &&
            in.nsrc > 1 && in.src[1].type == R_CONST && in.src[1].index + 4 > p.max_const)
            p.max_const = in.src[1].index + 4;
        if (count == 0 || !has_destination(op))
            in.has_dst = false;
        p.code.push_back(in);
        i = end;
    }
    if (p.relative)
        p.max_const = p.pixel ? 32 : 256;
    p.ok = true;
    return p;
}

} // namespace

uint64_t code_key(const uint8_t *code, size_t size) {
    uint64_t h = 1469598103934665603ull;
    for (size_t i = 0; i < size; ++i) {
        h ^= code[i];
        h *= 1099511628211ull;
    }
    h ^= size;
    return h ? h : 1;
}

const Program &program_for_key(uint64_t key, const uint8_t *code, size_t size) {
    static std::mutex mutex;
    static auto *cache = new std::unordered_map<uint64_t, Program>();
    std::lock_guard<std::mutex> lock(mutex);
    auto it = cache->find(key);
    if (it != cache->end())
        return it->second;
    return (*cache)[key] = load(std::vector<uint8_t>(code, code + size));
}

const Program &program_for(const std::vector<uint8_t> &code) {
    static std::mutex mutex;
    static auto *cache = new std::unordered_map<std::string, Program>();
    std::string key((const char *)code.data(), code.size());
    std::lock_guard<std::mutex> lock(mutex);
    auto it = cache->find(key);
    if (it != cache->end())
        return it->second;
    return (*cache)[key] = load(code);
}

} // namespace d9sh
