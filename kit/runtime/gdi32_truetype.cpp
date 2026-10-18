// TrueType faces from AddFontMemResourceEx, measured and rasterized with
// stb_truetype. The data is the program's own - a font resource in its
// executable - and is copied, since the caller may free its buffer. The kit's
// bundled Open Sans stands in for Windows' own interface faces.
#include "gdi32_truetype.h"
#include <algorithm>
#include <cmath>
#include <map>
#include <memory>
#include <tuple>
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wall"
#pragma GCC diagnostic ignored "-Wextra"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wshadow"
#endif
#define STB_TRUETYPE_IMPLEMENTATION
#define STBTT_STATIC
#include "../third_party/stb/stb_truetype.h"
#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

namespace gdi {
extern const unsigned char bundled_sans_regular[];
extern const size_t bundled_sans_regular_size;
extern const unsigned char bundled_sans_semibold[];
extern const size_t bundled_sans_semibold_size;
struct TrueTypeFace {
    std::shared_ptr<std::vector<uint8_t>> data;
    stbtt_fontinfo info{};
    std::string family; // lower case
};
namespace {
std::vector<std::unique_ptr<TrueTypeFace>> &faces() {
    static std::vector<std::unique_ptr<TrueTypeFace>> list;
    return list;
}
std::string lower_ascii(std::string s) {
    for (char &ch : s)
        if (ch >= 'A' && ch <= 'Z')
            ch = char(ch - 'A' + 'a');
    return s;
}
// The family name (name ID 1), from the Windows Unicode record the way GDI
// matches it, else the Macintosh Roman one.
std::string family_of(const stbtt_fontinfo &info) {
    int length = 0;
    if (const char *utf16 =
            stbtt_GetFontNameString(&info, &length, STBTT_PLATFORM_ID_MICROSOFT,
                                    STBTT_MS_EID_UNICODE_BMP, STBTT_MS_LANG_ENGLISH, 1)) {
        std::string name;
        for (int i = 0; i + 1 < length; i += 2) {
            uint16_t unit = uint16_t((uint8_t(utf16[i]) << 8) | uint8_t(utf16[i + 1]));
            name.push_back(unit < 128 ? char(unit) : '?');
        }
        return lower_ascii(name);
    }
    if (const char *roman = stbtt_GetFontNameString(&info, &length, STBTT_PLATFORM_ID_MAC,
                                                    STBTT_MAC_EID_ROMAN, STBTT_MAC_LANG_ENGLISH, 1))
        return lower_ascii(std::string(roman, size_t(length)));
    return {};
}
} // namespace

uint32_t truetype_add_memory(const uint8_t *data, size_t size) {
    if (!data || size < 12 || size > (64u << 20))
        return 0;
    auto copy = std::make_shared<std::vector<uint8_t>>(data, data + size);
    int count = stbtt_GetNumberOfFonts(copy->data());
    uint32_t added = 0;
    for (int i = 0; i < count; ++i) {
        int offset = stbtt_GetFontOffsetForIndex(copy->data(), i);
        if (offset < 0 || size_t(offset) >= size)
            continue;
        auto face = std::make_unique<TrueTypeFace>();
        face->data = copy;
        if (!stbtt_InitFont(&face->info, copy->data(), offset))
            continue;
        face->family = family_of(face->info);
        if (face->family.empty())
            continue;
        faces().push_back(std::move(face));
        ++added;
    }
    return added;
}

const TrueTypeFace *truetype_find(const std::string &family) {
    const std::string key = lower_ascii(family);
    for (auto it = faces().rbegin(); it != faces().rend(); ++it) // the latest registration wins
        if ((*it)->family == key)
            return it->get();
    return nullptr;
}

namespace {
// A bundled face, read once from the embedded bytes. The data is the kit's
// own and lives as long as the process, so it is not copied.
std::unique_ptr<TrueTypeFace> bundled_face(const unsigned char *data, size_t size) {
    auto face = std::make_unique<TrueTypeFace>();
    const int offset = stbtt_GetFontOffsetForIndex(data, 0);
    if (offset < 0 || size_t(offset) >= size || !stbtt_InitFont(&face->info, data, offset))
        return nullptr;
    face->family = family_of(face->info);
    return face;
}
} // namespace

const TrueTypeFace *truetype_windows_substitute(const std::string &family, int32_t weight) {
    // The sans-serif interface faces a Windows 7 installation has, and the
    // names that resolve to them: the dialog aliases, the raster MS Sans
    // Serif, and Helvetica through FontSubstitutes. Serif, fixed-pitch and
    // the system raster fonts (System, Fixedsys, Terminal) are not here -
    // the 8x16 cells are the closer stand-in for those.
    static const char *const windows_sans[] = {
        "segoe ui",      "tahoma",       "microsoft sans serif",
        "ms sans serif", "ms shell dlg", "ms shell dlg 2",
        "arial",         "verdana",      "calibri",
        "trebuchet ms",  "helvetica",
    };
    const std::string key = lower_ascii(family);
    if (std::find(std::begin(windows_sans), std::end(windows_sans), key) == std::end(windows_sans))
        return nullptr;
    static const std::unique_ptr<TrueTypeFace> regular =
        bundled_face(bundled_sans_regular, bundled_sans_regular_size);
    static const std::unique_ptr<TrueTypeFace> semibold =
        bundled_face(bundled_sans_semibold, bundled_sans_semibold_size);
    const TrueTypeFace *face = weight >= 600 && semibold ? semibold.get() : regular.get();
    return face;
}

double truetype_scale(const TrueTypeFace *face, int32_t lf_height) {
    if (lf_height < 0)
        return stbtt_ScaleForMappingEmToPixels(&face->info, -float(lf_height));
    return stbtt_ScaleForPixelHeight(&face->info, lf_height ? float(lf_height) : 16.0f);
}

TrueTypeMetrics truetype_metrics(const TrueTypeFace *face, double scale) {
    int ascent = 0, descent = 0, gap = 0;
    stbtt_GetFontVMetrics(&face->info, &ascent, &descent, &gap);
    TrueTypeMetrics m;
    m.ascent = int32_t(std::lround(ascent * scale));
    m.descent = int32_t(std::lround(-descent * scale));
    m.height = m.ascent + m.descent;
    const uint16_t units_per_em = uint16_t((face->info.data[face->info.head + 18] << 8) |
                                           face->info.data[face->info.head + 19]);
    m.internal = std::max(0, m.height - int32_t(std::lround(units_per_em * scale)));
    m.average = truetype_advance(face, scale, 'x');
    for (uint32_t ch = 32; ch < 127; ++ch)
        m.maximum = std::max(m.maximum, truetype_advance(face, scale, ch));
    return m;
}

int32_t truetype_advance(const TrueTypeFace *face, double scale, uint32_t codepoint) {
    int advance = 0, bearing = 0;
    stbtt_GetCodepointHMetrics(&face->info, int(codepoint), &advance, &bearing);
    return int32_t(std::lround(advance * scale));
}

const TrueTypeGlyph &truetype_glyph(const TrueTypeFace *face, double scale, uint32_t codepoint) {
    static std::map<std::tuple<const TrueTypeFace *, double, uint32_t>, TrueTypeGlyph> cache;
    auto key = std::make_tuple(face, scale, codepoint);
    auto it = cache.find(key);
    if (it != cache.end())
        return it->second;
    if (cache.size() >
        4096) // repaints redraw the same few captions; a bound, not an eviction policy
        cache.clear();
    TrueTypeGlyph glyph;
    int x0 = 0, y0 = 0, x1 = 0, y1 = 0;
    stbtt_GetCodepointBitmapBox(&face->info, int(codepoint), float(scale), float(scale), &x0, &y0,
                                &x1, &y1);
    if (x1 > x0 && y1 > y0 && int64_t(x1 - x0) * (y1 - y0) <= (1 << 22)) {
        glyph.w = x1 - x0;
        glyph.h = y1 - y0;
        glyph.x = x0;
        glyph.y = y0;
        glyph.coverage.assign(size_t(glyph.w) * size_t(glyph.h), 0);
        stbtt_MakeCodepointBitmap(&face->info, glyph.coverage.data(), glyph.w, glyph.h, glyph.w,
                                  float(scale), float(scale), int(codepoint));
    }
    return cache.emplace(key, std::move(glyph)).first->second;
}
} // namespace gdi
