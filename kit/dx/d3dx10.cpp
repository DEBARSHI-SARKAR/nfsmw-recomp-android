// d3dx10.cpp - D3DX row-vector matrix arithmetic. Translation occupies
// _41/_42/_43. MultiplyTranspose supplies column-major HLSL constant bytes.
// Calculations use local matrices so pOut may alias either input. These
// exports use the SDK stdcall ABI: 4 dwords for construction, 3 for products.
#include "d3d11.h"
#include <cstring>
namespace {
float scalar(X86 *c, int i) {
    uint32_t v = arg(c, i);
    float f;
    memcpy(&f, &v, 4);
    return f;
}
void build(X86 *c, bool translation) {
    uint32_t out = arg(c, 0);
    if (!dx11::span(out, 64)) {
        set_eax(c, 0);
        return;
    }
    float m[16] = {};
    m[0] = m[5] = m[10] = m[15] = 1;
    for (int i = 0; i < 3; ++i)
        m[translation ? 12 + i : i * 5] = scalar(c, i + 1);
    memcpy(gm_ptr(out), m, 64);
    set_eax(c, out);
}
void translation(X86 *c) {
    build(c, true);
}
void scaling(X86 *c) {
    build(c, false);
}
void product(X86 *c, bool transpose) {
    uint32_t out = arg(c, 0), a = arg(c, 1), b = arg(c, 2);
    if (!dx11::span(out, 64) || !dx11::span(a, 64) || !dx11::span(b, 64)) {
        set_eax(c, 0);
        return;
    }
    float l[16], r[16], m[16] = {};
    memcpy(l, gm_ptr(a), 64);
    memcpy(r, gm_ptr(b), 64);
    for (int y = 0; y < 4; ++y)
        for (int x = 0; x < 4; ++x)
            for (int k = 0; k < 4; ++k)
                m[transpose ? x * 4 + y : y * 4 + x] += l[y * 4 + k] * r[k * 4 + x];
    memcpy(gm_ptr(out), m, 64);
    set_eax(c, out);
}
void multiply(X86 *c) {
    product(c, false);
}
void multiply_transpose(X86 *c) {
    product(c, true);
}
} // namespace
void d3dx10_register() {
    static const ImportShim shims[] = {
        {"d3dx10_41.dll", "D3DXMatrixTranslation", 4, translation},
        {"d3dx10_41.dll", "D3DXMatrixScaling", 4, scaling},
        {"d3dx10_41.dll", "D3DXMatrixMultiply", 3, multiply},
        {"d3dx10_41.dll", "D3DXMatrixMultiplyTranspose", 3, multiply_transpose}};
    imports_register(shims, std::size(shims));
}
