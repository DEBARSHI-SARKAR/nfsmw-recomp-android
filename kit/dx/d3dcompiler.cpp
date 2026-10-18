// d3dcompiler.cpp - a tagged-source blob, not a general HLSL compiler.
// Device shader creation validates the exact source digest before execution.
#include "d3d11.h"
#include "../runtime/memory.h"
#include <cstring>
namespace {
void pointer(X86 *c) {
    auto *o = dx11::from(arg(c, 0), IF_D3D_BLOB);
    set_eax(c, o ? o->data : 0);
}
void size(X86 *c) {
    auto *o = dx11::from(arg(c, 0), IF_D3D_BLOB);
    set_eax(c, o ? o->bytes : 0);
}
// FNV-1a over the exact ANSI source bytes, including CRLF and whitespace.
void compile(X86 *c) {
    uint32_t out = arg(c, 9), error = arg(c, 10), src = arg(c, 0), n = arg(c, 1);
    if (dx11::span(error, 4))
        wr32(error, 0);
    if (!dx11::span(out, 4)) {
        set_eax(c, E_POINTER);
        return;
    }
    wr32(out, 0);
    if (!dx11::span(src, n) || !n || n > 1024 * 1024 || arg(c, 3) || arg(c, 4)) {
        set_eax(c, E_INVALIDARG);
        return;
    }
    dx11::ShaderTag tag{};
    tag.magic = 0x31425352;
    tag.version = 1;
    tag.hash = 14695981039346656037ull;
    for (uint32_t i = 0; i < n; ++i) {
        tag.hash ^= rd8(src + i);
        tag.hash *= 1099511628211ull;
    }
    for (int field = 0; field < 2; ++field) {
        uint32_t p = arg(c, 5 + field);
        char *dest = field ? tag.target : tag.entry;
        size_t cap = field ? sizeof(tag.target) : sizeof(tag.entry), i = 0;
        for (; i + 1 < cap && dx11::span(p + i, 1) && rd8(p + i); ++i)
            dest[i] = char(rd8(p + i));
        if (!dx11::span(p + i, 1) || rd8(p + i)) {
            set_eax(c, E_INVALIDARG);
            return;
        }
    }
    LOGV("D3DCompile entry=%s target=%s hash=%016llx source:\n%.*s", tag.entry, tag.target,
         (unsigned long long)tag.hash, int(n), (const char *)gm_ptr(src));
    auto *obj = dx11::create(K_D3D_BLOB, IF_D3D_BLOB);
    auto *o = dx11::get(obj);
    o->bytes = sizeof(tag);
    o->data = heap_alloc(o->bytes, true, 16);
    if (!o->data) {
        com_release(obj);
        set_eax(c, E_OUTOFMEMORY);
        return;
    }
    memcpy(gm_ptr(o->data), &tag, sizeof(tag));
    wr32(out, com_view(obj, IF_D3D_BLOB));
    set_eax(c, S_OK);
}
} // namespace
void d3dcompiler_register() {
    static const ComMethod methods[] = {{"QueryInterface", 3, com_QueryInterface},
                                        {"AddRef", 1, com_AddRef},
                                        {"Release", 1, com_Release},
                                        {"GetBufferPointer", 1, pointer},
                                        {"GetBufferSize", 1, size}};
    dx11::define(IF_D3D_BLOB, K_D3D_BLOB, "d3dcompiler_47.dll", "ID3DBlob", methods,
                 std::size(methods), "8ba5fb08-5195-40e2-ac58-0d989c3a0102");
    static const ImportShim shims[] = {{"d3dcompiler_47.dll", "D3DCompile", 11, compile}};
    imports_register(shims, std::size(shims));
}

// These exact FNV-1a digests name the programs described at the top of
// d3d11.cpp: the vertex program (1), the plain pixel program (2) and the packed
// one (3). Unknown programs fail closed; neither an entry-point name nor the tag
// alone is proof.
uint32_t dx11::shader_kind(uint32_t data, uint32_t size, bool vertex) {
    ShaderTag t{};
    if (size == sizeof(t) && span(data, size))
        memcpy(&t, gm_ptr(data), sizeof(t));
    if (t.magic == 0x31425352 && t.version == 1 && memchr(t.entry, 0, sizeof(t.entry)) &&
        memchr(t.target, 0, sizeof(t.target))) {
        if (vertex && strcmp(t.entry, "VSEntry") == 0 && strcmp(t.target, "vs_4_0") == 0 &&
            t.hash == 0x148f2b3ecca795cbull)
            return 1;
        if (!vertex && strcmp(t.entry, "PSEntry") == 0 && strcmp(t.target, "ps_4_0") == 0) {
            if (t.hash == 0xe55fa4c2afc9ddb6ull)
                return 2;
            if (t.hash == 0xd70f8e9650a037daull)
                return 3;
        }
    }
    LOGW("D3D11: refusing unknown %s shader hash=%016llx", vertex ? "vertex" : "pixel",
         (unsigned long long)t.hash);
    return 0;
}
