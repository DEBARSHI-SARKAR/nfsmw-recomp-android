// Reuse the overlay's glyph shapes in an 8x16 cell: one-pixel side padding
// and doubled rows. The source table has one shared definition.
#pragma once
#include "font6x8.h"
#include <array>
namespace recomp_font {
inline constexpr auto font8x16 = [] {
    std::array<std::array<uint8_t, 16>, 96> glyphs{};
    for (unsigned i = 0; i < 96; ++i)
        for (unsigned y = 0; y < 16; ++y)
            glyphs[i][y] = uint8_t(g_font6x8[i][y / 2] << 1);
    return glyphs;
}();
} // namespace recomp_font
