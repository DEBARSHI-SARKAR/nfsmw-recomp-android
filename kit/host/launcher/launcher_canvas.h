// launcher_canvas.h - a CPU canvas the launcher draws on: filled rectangles
// and the kit's 6x8 font at integer sizes. Pixels are BGRA or RGBA to match
// the drawable the canvas is copied to.
#pragma once
#include <cstdint>
#include <string>
#include <vector>

namespace launcher {

struct Rect {
    int x = 0, y = 0, w = 0, h = 0;
    bool contains(int px, int py) const {
        return px >= x && py >= y && px < x + w && py < y + h;
    }
};

struct Color {
    uint8_t r, g, b, a;
};

class Canvas {
  public:
    void resize(int w, int h, bool bgra);
    int width() const {
        return w_;
    }
    int height() const {
        return h_;
    }
    const uint8_t *pixels() const {
        return px_.data();
    }
    void clear(Color c);
    void fill(Rect r, Color c);
    void frame(Rect r, int thickness, Color c);
    // Text at `size` pixels per font pixel; returns the width drawn. Characters
    // outside ASCII 32-126 draw as '?'.
    int text(int x, int y, const std::string &s, int size, Color c);
    static int text_width(const std::string &s, int size) {
        return int(s.size()) * 6 * size;
    }
    static int text_height(int size) {
        return 8 * size;
    }
    // Word-wrapped to `width`; returns the height used.
    int paragraph(int x, int y, int width, const std::string &s, int size, Color c);
    static std::vector<std::string> wrap(const std::string &s, int width, int size);

  private:
    void put(int x, int y, Color c);
    int w_ = 0, h_ = 0;
    bool bgra_ = true;
    std::vector<uint8_t> px_;
};

// The glyph table the settings page uses (mods/font6x8.cpp).
const uint8_t *font_glyph(char c);

} // namespace launcher
