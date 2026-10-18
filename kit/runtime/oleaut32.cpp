// Automation values live entirely in the 32-bit guest arena. Calls run under
// the guest scheduler baton; copies own their strings and array elements.
#include "imports.h"
#include "memory.h"
#include <cmath>
#include <cstring>
#include <iomanip>
#include <limits>
#include <locale>
#include <sstream>
#include <array>

namespace {
constexpr uint32_t INVALID = 0x80070057u, OOM = 0x8007000eu;
constexpr uint32_t MISMATCH = 0x80020005u, BADINDEX = 0x8002000bu;
constexpr uint16_t BYREF = 0x4000, ARRAY = 0x2000;
bool valid(uint32_t p, uint32_t n) {
    return p && gm_valid(p, n);
}

// BSTR length counts bytes and includes embedded NULs; only the trailing NUL
// is excluded. Allocate before freeing so reallocation can alias its source.
uint32_t bstr_alloc(uint32_t source, uint32_t units) {
    if (units > (GUEST_SIZE - 6) / 2 || (source && !valid(source, units * 2)))
        return 0;
    uint32_t p = heap_alloc(units * 2 + 6, true);
    if (!p)
        return 0;
    wr32(p, units * 2);
    if (source && units)
        memcpy(g_mem + p + 4, g_mem + source, units * 2);
    return p + 4;
}
bool bstr_valid(uint32_t b) {
    return !b || (b >= 4 && heap_owns(b - 4) && heap_size(b - 4) >= 6 &&
                  rd32(b - 4) <= heap_size(b - 4) - 6 && !(rd32(b - 4) & 1));
}
void bstr_free(uint32_t b) {
    if (b && bstr_valid(b))
        heap_free(b - 4);
}
uint32_t bstr_copy(uint32_t b) {
    return b ? bstr_alloc(b, rd32(b - 4) / 2) : 0;
}
uint32_t element_size(uint16_t vt) {
    switch (vt) {
    case 16:
    case 17:
        return 1;
    case 2:
    case 11:
    case 18:
        return 2;
    case 3:
    case 4:
    case 8:
    case 10:
    case 19:
    case 22:
    case 23:
        return 4;
    case 5:
    case 6:
    case 7:
    case 20:
    case 21:
        return 8;
    case 12:
        return 16;
    default:
        return 0;
    }
}

// SAFEARRAY on x86: cDims at 0, fFeatures at 2, cbElements at 4, cLocks at 8,
// pvData at 12, then cDims bounds of {cElements, lLbound} from 16. A
// one-dimensional array is therefore 24 bytes, which is the only shape this
// once handled; a language that writes `array[x, y]` asks for two, and an
// array the guest cannot create is a map that loads no tiles.
//
// rgsabound[i] describes the dimension an index list names i'th, and the
// first dimension is the outermost: element [i, j] of a 5 by 13 array sits at
// i * 13 + j. That is the order the guest itself uses - it creates its
// [0..4, 0..12] resource table as bounds {5, 13} and then reads [i, 0] for
// each of its five resources - so the index arithmetic and the one-based
// dimension number of SafeArrayGetLBound both follow it.
const uint32_t kArrayMaxDims = 16; // more than any caller here, and bounds the header

uint32_t array_dims(uint32_t a) {
    return rd16(a);
}
// The bound record for a dimension, counted from the left and zero based.
uint32_t array_bound_at(uint32_t a, uint32_t left_index) {
    return a + 16 + 8 * left_index;
}

bool array_valid(uint32_t a) {
    if (!valid(a, 24) || !heap_owns(a))
        return false;
    uint32_t dims = array_dims(a);
    if (dims < 1 || dims > kArrayMaxDims)
        return false;
    uint32_t header = 16 + 8 * dims;
    if (heap_size(a) < header || !valid(a, header) || !rd32(a + 4))
        return false;
    uint64_t count = 1;
    for (uint32_t i = 0; i < dims; ++i) {
        count *= rd32(a + 16 + 8 * i);
        if (count > GUEST_SIZE)
            return false;
    }
    uint64_t bytes = uint64_t(rd32(a + 4)) * count;
    uint32_t data = rd32(a + 12);
    return bytes <= GUEST_SIZE && (!bytes || (heap_owns(data) && heap_size(data) >= bytes));
}

// Every element, across every dimension.
uint32_t array_count(uint32_t a) {
    uint64_t count = 1;
    for (uint32_t i = 0, n = array_dims(a); i < n; ++i)
        count *= rd32(a + 16 + 8 * i);
    return (uint32_t)count;
}
uint32_t variant_clear(uint32_t v);
uint32_t variant_copy(uint32_t dst, uint32_t src, bool indirect, unsigned depth = 0);
uint32_t array_destroy(uint32_t a) {
    if (!a)
        return 0;
    if (!array_valid(a))
        return INVALID;
    if (rd32(a + 8))
        return 0x8002000du; // DISP_E_ARRAYISLOCKED
    uint32_t data = rd32(a + 12), count = array_count(a), step = rd32(a + 4);
    for (uint32_t i = 0; i < count; ++i) {
        uint32_t p = data + i * step;
        if (rd16(a + 2) & 0x100)
            bstr_free(rd32(p));
        if (rd16(a + 2) & 0x800) {
            uint32_t hr = variant_clear(p);
            if (hr)
                return hr;
        }
    }
    if (data)
        heap_free(data);
    heap_free(a);
    return 0;
}
// `bounds` is the caller's rgsabound, already in OLE's rightmost-first order,
// and is copied through unchanged.
uint32_t array_create_dims(uint16_t vt, uint32_t dims, const uint32_t *counts,
                           const int32_t *lowers) {
    uint32_t step = element_size(vt);
    if (!step || dims < 1 || dims > kArrayMaxDims)
        return 0;
    uint64_t count = 1;
    for (uint32_t i = 0; i < dims; ++i) {
        if (int64_t(lowers[i]) + counts[i] - 1 > INT32_MAX)
            return 0;
        count *= counts[i];
        if (count > GUEST_SIZE)
            return 0;
    }
    if (uint64_t(step) * count > GUEST_SIZE)
        return 0;
    uint32_t header = 16 + 8 * dims;
    uint32_t a = heap_alloc(header, true);
    if (!a)
        return 0;
    uint32_t data = count ? heap_alloc(step * (uint32_t)count, true) : 0;
    if (count && !data) {
        heap_free(a);
        return 0;
    }
    wr16(a, uint16_t(dims));
    wr16(a + 2, vt == 8 ? 0x100 : vt == 12 ? 0x800 : 0);
    wr32(a + 4, step);
    wr32(a + 12, data);
    for (uint32_t i = 0; i < dims; ++i) {
        wr32(a + 16 + 8 * i, counts[i]);
        wr32(a + 20 + 8 * i, uint32_t(lowers[i]));
    }
    return a;
}
uint32_t array_create(uint16_t vt, uint32_t count, int32_t lower) {
    return array_create_dims(vt, 1, &count, &lower);
}
uint32_t array_copy(uint32_t a) {
    if (!array_valid(a))
        return 0;
    uint16_t flags = rd16(a + 2);
    uint32_t step = rd32(a + 4), count = array_count(a), dims = array_dims(a);
    uint16_t vt = flags & 0x100   ? 8
                  : flags & 0x800 ? 12
                  : step == 1     ? 17
                  : step == 2     ? 2
                  : step == 4     ? 3
                                  : 5;
    uint32_t counts[kArrayMaxDims];
    int32_t lowers[kArrayMaxDims];
    for (uint32_t i = 0; i < dims; ++i) {
        counts[i] = rd32(a + 16 + 8 * i);
        lowers[i] = int32_t(rd32(a + 20 + 8 * i));
    }
    uint32_t b = array_create_dims(vt, dims, counts, lowers);
    if (!b)
        return 0;
    for (uint32_t i = 0; i < count; ++i) {
        uint32_t src = rd32(a + 12) + i * step, dst = rd32(b + 12) + i * step;
        if (flags & 0x100) {
            uint32_t str = rd32(src);
            if (!bstr_valid(str)) {
                array_destroy(b);
                return 0;
            }
            uint32_t copy = bstr_copy(str);
            if (str && !copy) {
                array_destroy(b);
                return 0;
            }
            wr32(dst, copy);
        } else if (flags & 0x800) {
            if (variant_copy(dst, src, false)) {
                array_destroy(b);
                return 0;
            }
        } else
            memcpy(g_mem + dst, g_mem + src, step);
    }
    return b;
}
uint32_t variant_clear(uint32_t v) {
    if (!valid(v, 16))
        return INVALID;
    uint16_t vt = rd16(v);
    if (!(vt & BYREF)) {
        if (vt & ARRAY) {
            uint32_t hr = array_destroy(rd32(v + 8));
            if (hr)
                return hr;
        } else if (vt == 8)
            bstr_free(rd32(v + 8));
    }
    memset(g_mem + v, 0, 16);
    return 0;
}
// Snapshot before clearing the destination: self-copy and BYREF into the
// destination are legal. Unsupported COM interface types fail explicitly.
uint32_t variant_copy(uint32_t dst, uint32_t src, bool indirect, unsigned depth) {
    if (!valid(dst, 16) || !valid(src, 16) || depth > 16)
        return INVALID;
    if (dst == src && !indirect)
        return 0;
    uint16_t vt = rd16(src);
    std::array<uint8_t, 16> value{};
    memcpy(value.data(), g_mem + src, 16);
    uint32_t payload = src + 8;
    if (indirect && (vt & BYREF)) {
        payload = rd32(payload);
        vt &= ~BYREF;
        if (vt == 12)
            return variant_copy(dst, payload, true, depth + 1);
        uint32_t size = vt & ARRAY ? 4 : element_size(vt);
        if (!size || !valid(payload, size))
            return INVALID;
        value.fill(0);
        memcpy(value.data() + 8, g_mem + payload, size);
        value[0] = uint8_t(vt);
        value[1] = uint8_t(vt >> 8);
    }
    uint32_t owned = 0;
    if (!(vt & BYREF)) {
        if (vt == 8) {
            uint32_t b = rd32(payload);
            if (!bstr_valid(b))
                return INVALID;
            owned = bstr_copy(b);
            if (b && !owned)
                return OOM;
        } else if (vt & ARRAY) {
            uint32_t a = rd32(payload);
            if (a && !array_valid(a))
                return INVALID;
            owned = a ? array_copy(a) : 0;
            if (a && !owned)
                return OOM;
        } else if (vt != 0 && vt != 1 && !element_size(vt))
            return MISMATCH;
        if (vt == 8 || (vt & ARRAY))
            memcpy(value.data() + 8, &owned, 4);
    }
    uint32_t hr = variant_clear(dst);
    if (hr) {
        if (vt == 8)
            bstr_free(owned);
        else if (vt & ARRAY)
            array_destroy(owned);
        return hr;
    }
    memcpy(g_mem + dst, value.data(), 16);
    return 0;
}
void o_SysAllocStringLen(X86 *c) {
    set_eax(c, bstr_alloc(arg(c, 0), arg(c, 1)));
}
void o_SysFreeString(X86 *c) {
    bstr_free(arg(c, 0));
    set_eax(c, 0);
}
void o_SysReAllocStringLen(X86 *c) {
    uint32_t out = arg(c, 0);
    if (!valid(out, 4)) {
        set_eax(c, 0);
        return;
    }
    uint32_t b = bstr_alloc(arg(c, 1), arg(c, 2));
    if (b) {
        bstr_free(rd32(out));
        wr32(out, b);
    }
    set_eax(c, b != 0);
}
void o_VariantInit(X86 *c) {
    if (valid(arg(c, 0), 16))
        memset(g_mem + arg(c, 0), 0, 16);
    set_eax(c, 0);
}
void o_VariantClear(X86 *c) {
    set_eax(c, variant_clear(arg(c, 0)));
}
void o_VariantCopy(X86 *c) {
    set_eax(c, variant_copy(arg(c, 0), arg(c, 1), false));
}
void o_VariantCopyInd(X86 *c) {
    set_eax(c, variant_copy(arg(c, 0), arg(c, 1), true));
}

// The supported scalar conversions use a fixed locale, independent of the
// host's locale. Integer conversion uses Automation's ties-to-even rounding.
void o_VariantChangeType(X86 *c) {
    uint32_t dst = arg(c, 0), src = arg(c, 1), to = arg(c, 3) & 0xffff;
    if (!valid(dst, 16) || !valid(src, 16)) {
        set_eax(c, INVALID);
        return;
    }
    if (!(to == 3 || to == 5 || to == 8 || to == 11)) {
        set_eax(c, MISMATCH);
        return;
    }
    uint32_t tmp = heap_alloc(16, true);
    if (!tmp) {
        set_eax(c, OOM);
        return;
    }
    uint32_t hr = variant_copy(tmp, src, true);
    uint16_t from = rd16(tmp);
    if (!hr && !(from == 3 || from == 5 || from == 8 || from == 11))
        hr = MISMATCH;
    double number = 0;
    std::string text;
    if (!hr) {
        if (from == 3)
            number = int32_t(rd32(tmp + 8));
        else if (from == 5)
            memcpy(&number, g_mem + tmp + 8, 8);
        else if (from == 11)
            number = int16_t(rd16(tmp + 8));
        else {
            uint32_t b = rd32(tmp + 8);
            text = gm_wstr(b, b ? rd32(b - 4) / 2 : 0);
            if (to != 8) {
                if (to == 11 && (text == "True" || text == "true"))
                    number = -1;
                else if (to == 11 && (text == "False" || text == "false"))
                    number = 0;
                else {
                    std::istringstream in(text);
                    in.imbue(std::locale::classic());
                    if (!(in >> number))
                        hr = MISMATCH;
                    else {
                        in >> std::ws;
                        if (!in.eof())
                            hr = MISMATCH;
                    }
                }
            }
        }
        if (!std::isfinite(number))
            hr = MISMATCH;
    }
    if (!hr && to == 8 && from != 8) {
        std::ostringstream out;
        out.imbue(std::locale::classic());
        if (from == 11 && (arg(c, 2) & 2))
            out << (number ? "True" : "False");
        else
            out << std::setprecision(15) << number;
        text = out.str();
    }
    uint32_t b = 0;
    if (!hr && to == 8) {
        if (from == 8)
            b = bstr_copy(rd32(tmp + 8));
        else {
            b = bstr_alloc(0, uint32_t(text.size()));
            if (b)
                gm_put_wstr(b, text, uint32_t(text.size() + 1));
        }
        if (!b && (from != 8 || rd32(tmp + 8)))
            hr = OOM;
    }
    if (!hr && to == 3) {
        double floor = std::floor(number), fraction = number - floor;
        number = fraction < .5              ? floor
                 : fraction > .5            ? floor + 1
                 : std::fmod(floor, 2) == 0 ? floor
                                            : floor + 1;
        if (number < INT32_MIN || number > INT32_MAX)
            hr = MISMATCH;
    }
    if (!hr)
        hr = variant_clear(dst);
    if (!hr) {
        wr16(dst, uint16_t(to));
        if (to == 8)
            wr32(dst + 8, b);
        else if (to == 3)
            wr32(dst + 8, uint32_t(int32_t(number)));
        else if (to == 11)
            wr16(dst + 8, number ? 0xffff : 0);
        else
            memcpy(g_mem + dst + 8, &number, 8);
    } else
        bstr_free(b);
    variant_clear(tmp);
    heap_free(tmp);
    set_eax(c, hr);
}
void o_SafeArrayCreate(X86 *c) {
    uint32_t dims = arg(c, 1), bounds = arg(c, 2);
    if (dims < 1 || dims > kArrayMaxDims || !valid(bounds, 8 * dims)) {
        set_eax(c, 0);
        return;
    }
    uint32_t counts[kArrayMaxDims];
    int32_t lowers[kArrayMaxDims];
    for (uint32_t i = 0; i < dims; ++i) {
        counts[i] = rd32(bounds + 8 * i);
        lowers[i] = int32_t(rd32(bounds + 8 * i + 4));
    }
    set_eax(c, array_create_dims(uint16_t(arg(c, 0)), dims, counts, lowers));
}
void array_bound(X86 *c, bool upper) {
    uint32_t a = arg(c, 0), out = arg(c, 2);
    if (!array_valid(a) || !valid(out, 4)) {
        set_eax(c, INVALID);
        return;
    }
    // nDim is one based and counts from the left, the way the guest wrote it.
    uint32_t dim = arg(c, 1);
    if (dim < 1 || dim > array_dims(a)) {
        set_eax(c, BADINDEX);
        return;
    }
    uint32_t b = array_bound_at(a, dim - 1);
    wr32(out, rd32(b + 4) + (upper ? rd32(b) - 1 : 0));
    set_eax(c, 0);
}
// Access hands out the element storage and nothing else changes: the kit
// keeps no lock count, so unaccess has nothing to undo.
void o_SafeArrayAccessData(X86 *c) {
    uint32_t a = arg(c, 0), out = arg(c, 1);
    if (!array_valid(a) || !valid(out, 4)) {
        set_eax(c, INVALID);
        return;
    }
    wr32(out, rd32(a + 12));
    set_eax(c, 0);
}
void o_SafeArrayUnaccessData(X86 *c) {
    set_eax(c, array_valid(arg(c, 0)) ? 0 : INVALID);
}
void o_SafeArrayGetLBound(X86 *c) {
    array_bound(c, false);
}
void o_SafeArrayGetUBound(X86 *c) {
    array_bound(c, true);
}
// rgIndices lists the leftmost dimension first; elements run with the
// rightmost dimension varying fastest, so fold left to right.
uint32_t array_index(uint32_t a, uint32_t indices, uint32_t *p) {
    uint32_t dims = array_valid(a) ? array_dims(a) : 0;
    if (!dims || !valid(indices, 4 * dims))
        return INVALID;
    uint64_t offset = 0;
    for (uint32_t i = 0; i < dims; ++i) {
        uint32_t b = array_bound_at(a, i);
        int64_t index = int64_t(int32_t(rd32(indices + 4 * i))) - int32_t(rd32(b + 4));
        if (index < 0 || uint64_t(index) >= rd32(b))
            return BADINDEX;
        offset = offset * rd32(b) + uint64_t(index);
    }
    *p = rd32(a + 12) + uint32_t(offset) * rd32(a + 4);
    return 0;
}
void array_element(X86 *c, bool put, bool pointer) {
    uint32_t a = arg(c, 0), value = arg(c, 2), p = 0;
    uint32_t hr = array_index(a, arg(c, 1), &p);
    if (hr) {
        set_eax(c, hr);
        return;
    }
    uint32_t size = rd32(a + 4);
    if (pointer) {
        if (valid(value, 4))
            wr32(value, p);
        else
            hr = INVALID;
    } else if (rd16(a + 2) & 0x100) {
        uint32_t b = put ? value : rd32(p);
        if (!bstr_valid(b) || (!put && !valid(value, 4)))
            hr = INVALID;
        else {
            uint32_t copy = bstr_copy(b);
            if (b && !copy)
                hr = OOM;
            else {
                if (put)
                    bstr_free(rd32(p));
                wr32(put ? p : value, copy);
            }
        }
    } else if (!valid(value, size))
        hr = INVALID;
    else if (rd16(a + 2) & 0x800)
        hr = variant_copy(put ? p : value, put ? value : p, false);
    else
        memmove(g_mem + (put ? p : value), g_mem + (put ? value : p), size);
    set_eax(c, hr);
}
void o_SafeArrayGetElement(X86 *c) {
    array_element(c, false, false);
}
void o_SafeArrayPutElement(X86 *c) {
    array_element(c, true, false);
}
void o_SafeArrayPtrOfIndex(X86 *c) {
    array_element(c, false, true);
}
void o_GetErrorInfo(X86 *c) {
    if (valid(arg(c, 1), 4))
        wr32(arg(c, 1), 0);
    set_eax(c, 1);
}
const ImportShim shims[] = {
#define O(name, n) {"OLEAUT32.dll", #name, n, o_##name}
    O(VariantInit, 1),           O(VariantClear, 1),        O(VariantCopy, 2),
    O(VariantCopyInd, 2),        O(VariantChangeType, 4),   O(SysAllocStringLen, 2),
    O(SysReAllocStringLen, 3),   O(SysFreeString, 1),       O(SafeArrayCreate, 3),
    O(SafeArrayGetLBound, 3),    O(SafeArrayGetUBound, 3),  O(SafeArrayGetElement, 3),
    O(SafeArrayPutElement, 3),   O(SafeArrayPtrOfIndex, 3), O(SafeArrayAccessData, 2),
    O(SafeArrayUnaccessData, 1), O(GetErrorInfo, 2)
#undef O
};
} // namespace
void oleaut32_register() {
    imports_register(shims, sizeof shims / sizeof shims[0]);
}
