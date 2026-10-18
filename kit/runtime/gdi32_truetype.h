// TrueType fonts a program registers from memory (AddFontMemResourceEx),
// rasterized with stb_truetype. The kit carries one family of its own, Open
// Sans, which stands in for the sans-serif faces every Windows installation
// has (truetype_windows_substitute). Any other face the program did not supply
// is not found, and its text keeps the 8x16 bitmap cells.
#pragma once
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>
namespace gdi {
struct TrueTypeFace;
struct TrueTypeMetrics {
    int32_t ascent = 0, descent = 0, height = 0, internal = 0, average = 0, maximum = 0;
};
struct TrueTypeGlyph {
    int32_t w = 0, h = 0, x = 0, y = 0; // offset from the pen on the baseline
    std::vector<uint8_t> coverage;
};
// Registers every font in `data` and returns how many could be read.
uint32_t truetype_add_memory(const uint8_t *data, size_t size);
// The registered face with this family name, compared without case, or null.
const TrueTypeFace *truetype_find(const std::string &family);
// The bundled face that stands in for this Windows face, or null when the name
// is not one of Windows' sans-serif interface faces. A weight of 600 or more
// takes the semibold. Only for a family truetype_find does not know: what a
// program registers itself always wins.
const TrueTypeFace *truetype_windows_substitute(const std::string &family, int32_t weight);
// The scale for a LOGFONT height: negative is the em in pixels, positive the
// cell height, zero a 16-pixel cell.
double truetype_scale(const TrueTypeFace *face, int32_t lf_height);
TrueTypeMetrics truetype_metrics(const TrueTypeFace *face, double scale);
int32_t truetype_advance(const TrueTypeFace *face, double scale, uint32_t codepoint);
// One glyph's coverage, cached; valid until the next call.
const TrueTypeGlyph &truetype_glyph(const TrueTypeFace *face, double scale, uint32_t codepoint);
} // namespace gdi
