// font6x8.cpp - the settings page's built-in font.
//
// Ninety-six glyphs, ASCII 32 to 127, eight rows of six pixels each. A row is
// a bitmask with bit 5 leftmost, so a glyph reads as its own picture in the
// shared table and a renderer walks it with `row & (1 << (5 - x))`.
//
// It is built in rather than loaded because the page has to draw before any
// mod has been given a chance to supply anything, and because a settings page
// that cannot render its own labels when an overlay is broken is a settings
// page nobody can use to fix the overlay. The shapes are the classic 5x7 cell
// left-aligned in six columns, which leaves one column of spacing between
// characters and one empty row under them for the line spacing to sit in.
#include "mods_internal.h"
#include "../runtime/font6x8.h"

const uint8_t *mods_font6x8_glyph(char c) {
    // Anything outside the printable range draws as '?', which is visible and
    // says the string had something in it this font cannot show - unlike a
    // space, which reads as a gap the caller meant to be there.
    unsigned i = (unsigned char)c;
    if (i < 32 || i > 127)
        i = '?';
    return recomp_font::g_font6x8[i - 32];
}
