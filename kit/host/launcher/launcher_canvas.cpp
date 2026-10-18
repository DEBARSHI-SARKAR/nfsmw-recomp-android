// launcher_canvas.cpp - see launcher_canvas.h.
#include "launcher_canvas.h"

#include <algorithm>

extern "C" const uint8_t *mods_font6x8_glyph(char c); // mods/font6x8.cpp

namespace launcher {

const uint8_t *font_glyph(char c) {
    return mods_font6x8_glyph(c >= 32 && c < 127 ? c : '?');
}

void Canvas::resize(int w, int h, bool bgra) {
    w_ = std::max(0, w);
    h_ = std::max(0, h);
    bgra_ = bgra;
    px_.assign(size_t(w_) * size_t(h_) * 4, 0);
}

void Canvas::put(int x, int y, Color c) {
    if (x < 0 || y < 0 || x >= w_ || y >= h_)
        return;
    uint8_t *p = &px_[(size_t(y) * size_t(w_) + size_t(x)) * 4];
    const uint8_t r = bgra_ ? c.b : c.r, b = bgra_ ? c.r : c.b;
    if (c.a == 255) {
        p[0] = r;
        p[1] = c.g;
        p[2] = b;
        p[3] = 255;
        return;
    }
    const int a = c.a, na = 255 - a;
    p[0] = uint8_t((r * a + p[0] * na) / 255);
    p[1] = uint8_t((c.g * a + p[1] * na) / 255);
    p[2] = uint8_t((b * a + p[2] * na) / 255);
    p[3] = 255;
}

void Canvas::clear(Color c) {
    fill({0, 0, w_, h_}, {c.r, c.g, c.b, 255});
}

void Canvas::fill(Rect r, Color c) {
    const int x0 = std::max(0, r.x), y0 = std::max(0, r.y);
    const int x1 = std::min(w_, r.x + r.w), y1 = std::min(h_, r.y + r.h);
    for (int y = y0; y < y1; ++y)
        for (int x = x0; x < x1; ++x)
            put(x, y, c);
}

void Canvas::frame(Rect r, int t, Color c) {
    fill({r.x, r.y, r.w, t}, c);
    fill({r.x, r.y + r.h - t, r.w, t}, c);
    fill({r.x, r.y + t, t, r.h - 2 * t}, c);
    fill({r.x + r.w - t, r.y + t, t, r.h - 2 * t}, c);
}

int Canvas::text(int x, int y, const std::string &s, int size, Color c) {
    size = std::max(1, size);
    for (size_t i = 0; i < s.size(); ++i) {
        const uint8_t *glyph = font_glyph(s[i]);
        const int gx = x + int(i) * 6 * size;
        if (gx >= w_)
            break;
        for (int row = 0; row < 8; ++row)
            for (int col = 0; col < 6; ++col)
                if (glyph[row] & (1 << (5 - col)))
                    fill({gx + col * size, y + row * size, size, size}, c);
    }
    return text_width(s, size);
}

std::vector<std::string> Canvas::wrap(const std::string &s, int width, int size) {
    const size_t per_line = size_t(std::max(1, width / (6 * std::max(1, size))));
    std::vector<std::string> lines;
    size_t start = 0;
    while (start <= s.size()) {
        size_t newline = s.find('\n', start);
        std::string para =
            s.substr(start, newline == std::string::npos ? std::string::npos : newline - start);
        while (para.size() > per_line) {
            size_t cut = para.rfind(' ', per_line);
            if (cut == std::string::npos || cut == 0) {
                // A path: after a slash rather than inside a name.
                const size_t slash = para.rfind('/', per_line - 1);
                cut = slash != std::string::npos && slash > 0 ? slash + 1 : per_line;
            }
            lines.push_back(para.substr(0, cut));
            para = para.substr(cut + (para[cut] == ' ' ? 1 : 0));
        }
        lines.push_back(para);
        if (newline == std::string::npos)
            break;
        start = newline + 1;
    }
    return lines;
}

int Canvas::paragraph(int x, int y, int width, const std::string &s, int size, Color c) {
    const std::vector<std::string> lines = wrap(s, width, size);
    const int line_h = text_height(size) + size * 3;
    for (size_t i = 0; i < lines.size(); ++i)
        text(x, y + int(i) * line_h, lines[i], size, c);
    return int(lines.size()) * line_h;
}

} // namespace launcher
