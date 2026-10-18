// controls_tests.cpp - the on-screen controls: json, layouts, router, pad, binding, editor.
#include "../../platform/os.h"
#include "../controls/binding.h"
#include "../controls/builtin_layouts.h"
#include "../controls/editor.h"
#include "../controls/editor_actions.h"
#include "../controls/haptics.h"
#include "../controls/json.h"
#include "../controls/layout.h"
#include "../controls/layout_fallback.h"
#include "../controls/layout_store.h"
#include "../controls/overlay.h"
#include "../controls/overlay_paint.h"
#include "../controls/pad_art.h"
#include "../controls/raster.h"
#include "../controls/router.h"
#include "../controls/vpad.h"
#include "../keypad_layout.h"
#include "keypad_legacy_oracle.h"

#include <SDL3/SDL_gamepad.h>

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <filesystem>
#include <stdio.h>
#include <string.h>
#include <string>
#include <utility>
#include <vector>

static int g_failures = 0;
#define CHECK(c)                                                                                   \
    do {                                                                                           \
        if (!(c)) {                                                                                \
            fprintf(stderr, "FAIL %s:%d: %s\n", __FILE__, __LINE__, #c);                           \
            ++g_failures;                                                                          \
        }                                                                                          \
    } while (0)

using namespace controls;

static void test_json_round_trip() {
    Json v;
    std::string err;
    CHECK(json_parse(R"({"a": 1, "b": [true, false, null], "c": "x\"y\\né", "d": -2.5e1})", &v,
                     &err));
    CHECK(v.type == Json::Object);
    CHECK(v.num("a", 0) == 1);
    CHECK(v.get("b") && v.get("b")->a.size() == 3 && v.get("b")->a[0].b);
    CHECK(v.str("c", "") == "x\"y\\n\xc3\xa9");
    CHECK(v.num("d", 0) == -25);
    Json again;
    CHECK(json_parse(json_write(v), &again, &err));
    CHECK(json_write(again) == json_write(v));
    CHECK(json_write(Json::number(3)) == "3");
}

static void test_json_errors_name_the_line() {
    Json v;
    std::string err;
    CHECK(!json_parse("{\n\"a\": 1,\n\"b\" 2}", &v, &err));
    CHECK(err.rfind("line 3:", 0) == 0);
    CHECK(!json_parse("[1, 2", &v, &err));
    CHECK(!json_parse("{} trailing", &v, &err));
    CHECK(v.num("missing", 7) == 7); // a failed parse leaves a usable value
}

static const char *kTinyLayout = R"({
  "version": 1, "name": "tiny", "opacity": 0.5, "safe_inset": false, "future_field": 3,
  "groups": [
    {"id": "g", "grid": {"cols": 2, "rows": 1, "key": 36, "gap": 4}, "anchor": "bottom-right",
     "controls": [
       {"kind": "key", "scancode": "LShift", "col": 0, "row": 0},
       {"kind": "key", "scancode": "Space", "col": 1, "row": 0, "label": "SP"}]},
    {"id": "loose", "controls": [
       {"kind": "button", "button": "cross", "anchor": "top-left", "x": 10, "y": 20, "size": 50},
       {"kind": "stick", "stick": "right", "mode": "fixed", "anchor": "center", "radius": 30},
       {"kind": "hologram"},
       {"kind": "toggle", "target": "g", "label": "HIDE", "label_off": "KEYS",
        "anchor": "bottom-right", "w": 64, "h": 20, "stack_on": "g"}]}
  ]})";

// A layout file is the player's to edit, so a document nested past the
// parser's depth limit has to come back as an error rather than run the
// recursion into the stack's end.
static void test_json_depth_is_bounded() {
    Json v;
    std::string err;
    CHECK(json_parse(std::string(60, '[') + std::string(60, ']'), &v, &err));
    err.clear();
    CHECK(!json_parse(std::string(2000, '[') + std::string(2000, ']'), &v, &err));
    CHECK(err.find("too deeply nested") != std::string::npos);
    err.clear();
    std::string deep_object;
    for (int i = 0; i < 2000; ++i)
        deep_object += "{\"a\":";
    deep_object += "1";
    for (int i = 0; i < 2000; ++i)
        deep_object += "}";
    CHECK(!json_parse(deep_object, &v, &err));
    CHECK(err.find("too deeply nested") != std::string::npos);
    CHECK(v.type == Json::Null); // a failed parse leaves nothing half-built
}

static void test_layout_parse_and_write() {
    Layout l;
    std::string err;
    std::vector<std::string> warnings;
    CHECK(parse_layout(kTinyLayout, &l, &err, &warnings));
    CHECK(warnings.size() == 1 && warnings[0].find("hologram") != std::string::npos);
    CHECK(l.name == "tiny" && l.opacity == 0.5 && !l.safe_inset);
    CHECK(l.groups.size() == 2 && l.groups[0].has_grid && l.groups[0].grid.cols == 2);
    CHECK(l.groups[0].controls[0].scancode == kScanLShift);
    CHECK(l.groups[0].controls[0].label == "LShift");
    CHECK(l.groups[0].controls[1].label == "SP");
    const Control &stick = l.groups[1].controls[1];
    CHECK(stick.kind == Kind::Stick && stick.stick == 1 && !stick.floating && stick.w == 60);
    CHECK(stick.radius == 30);               // no "zone": the zone defaults to 2 * radius
    CHECK(l.groups[1].controls.size() == 3); // the unknown kind was skipped
    Layout again;
    CHECK(parse_layout(write_layout(l), &again, &err));
    CHECK(write_layout(again) == write_layout(l));
    CHECK(!parse_layout("{\"groups\": 5}", &l, &err));
    CHECK(scancode_from_name("F5") == kScanF5 && std::string(scancode_name(kScanUp)) == "Up");
    CHECK(scancode_from_name("NotAKey") == 0);
}

// A stick's "radius" (knob travel) and "zone" (w/h, the hit-test/base rect)
// are independent: without "zone" the zone defaults to 2 * radius (as
// "radius" alone used to size the whole control); with one, it is exactly
// what is given. Both round-trip through write_layout.
static const char *kStickZoneLayout = R"({
  "version": 1, "name": "sticks",
  "groups": [
    {"id": "g", "controls": [
       {"kind": "stick", "stick": "left", "mode": "floating", "anchor": "top-left",
        "radius": 40},
       {"kind": "stick", "stick": "right", "mode": "fixed", "anchor": "top-left",
        "x": 300, "radius": 40, "zone": [300, 150]}
    ]}
  ]})";

static void test_stick_radius_and_zone_round_trip() {
    Layout l;
    std::string err;
    CHECK(parse_layout(kStickZoneLayout, &l, &err));
    const Control &no_zone = l.groups[0].controls[0];
    CHECK(no_zone.radius == 40 && no_zone.w == 80 && no_zone.h == 80);
    const Control &explicit_zone = l.groups[0].controls[1];
    CHECK(explicit_zone.radius == 40 && explicit_zone.w == 300 && explicit_zone.h == 150);

    Layout again;
    CHECK(parse_layout(write_layout(l), &again, &err));
    CHECK(write_layout(again) == write_layout(l));
    const Control &no_zone2 = again.groups[0].controls[0];
    CHECK(no_zone2.radius == 40 && no_zone2.w == 80 && no_zone2.h == 80);
    const Control &explicit_zone2 = again.groups[0].controls[1];
    CHECK(explicit_zone2.radius == 40 && explicit_zone2.w == 300 && explicit_zone2.h == 150);
}

static Screen screen(int dw, int dh, double scale) {
    Screen s;
    s.dw = dw;
    s.dh = dh;
    s.scale = scale;
    s.safe = {0, 0, dw, dh};
    return s;
}

static void test_layout_geometry_and_hits() {
    Layout l;
    std::string err;
    CHECK(parse_layout(kTinyLayout, &l, &err));
    const Screen s = screen(2000, 1000, 2.0);
    // Grid: pitch = lround((36 + 4) * 2) = 80, box 160x80 in the bottom-right corner.
    const Rect box = group_rect(l, 0, s);
    CHECK(box.x == 1840 && box.y == 920 && box.w == 160 && box.h == 80);
    const Rect k1 = control_rect(l, 0, 1, s);
    CHECK(k1.x == 1840 + 80 + 4 && k1.y == 924 && k1.w == 72 && k1.h == 72);
    const Rect cross = control_rect(l, 1, 0, s);
    CHECK(cross.x == 20 && cross.y == 40 && cross.w == 100 && cross.h == 100);
    const Rect stick = control_rect(l, 1, 1, s);
    CHECK(stick.x == 940 && stick.y == 440 && stick.w == 120);
    // The toggle sits on the visible group, and in the corner once it is hidden.
    CHECK(control_rect(l, 1, 2, s).y == 920 - 40);
    l.groups[0].visible = false;
    CHECK(control_rect(l, 1, 2, s).y == 1000 - 40);
    Hit h = hit_test(l, s, 1990, 990);
    CHECK(h.group == 1 && h.control == 2);        // the tab, even with its group hidden
    CHECK(hit_test(l, s, 1850, 950).group == -1); // hidden group: the game's
    l.groups[0].visible = true;
    h = hit_test(l, s, 1930, 960);
    CHECK(h.group == 0 && h.control == 1);
    h = hit_test(l, s, 1841, 921); // the half-gap at the box's corner
    CHECK(h.group == 0 && h.gap);
    CHECK(hit_test(l, s, 500, 900).group == -1); // non-grid groups never claim gaps
    l.scale = 40.0 / 36.0;
    CHECK(control_rect(l, 0, 0, s).w == lround((40 + 4) * 2.0) - 8);
    Screen none;
    CHECK(hit_test(l, none, 0, 0).group == -1);
}

// Two cycles a hand-edited layout file can hold: a toggle stacked on its own
// group, and two groups whose toggles stack on each other. Both have to
// resolve to a rect instead of recursing control_rect -> group_rect ->
// control_rect until the stack runs out.
static const char *kStackCycleLayout = R"({
  "version": 1, "name": "cycles", "safe_inset": false,
  "groups": [
    {"id": "a", "controls": [
       {"kind": "toggle", "target": "b", "label": "B", "stack_on": "b",
        "anchor": "bottom-left", "x": 8, "y": 0, "w": 44, "h": 18}]},
    {"id": "b", "controls": [
       {"kind": "toggle", "target": "a", "label": "A", "stack_on": "a",
        "anchor": "bottom-right", "x": 8, "y": 0, "w": 44, "h": 18}]},
    {"id": "self", "controls": [
       {"kind": "toggle", "target": "self", "label": "S", "stack_on": "self",
        "anchor": "top-left", "x": 10, "y": 10, "w": 40, "h": 16}]}
  ]})";

static void test_stack_on_cycles_are_bounded() {
    Layout l;
    std::string err;
    CHECK(parse_layout(kStackCycleLayout, &l, &err));
    const Screen s = screen(2000, 1000, 2.0);
    // Self-reference: stacking is skipped, so the plain anchored rect stands.
    const Rect self = control_rect(l, 2, 0, s);
    CHECK(self.x == 20 && self.y == 20 && self.w == 80 && self.h == 32);
    // Mutual stacking: whatever the depth limit settles on, both rects are
    // real and on screen -- the test is that this returns at all.
    const Rect a = control_rect(l, 0, 0, s);
    const Rect b = control_rect(l, 1, 0, s);
    CHECK(!a.empty() && !b.empty());
    CHECK(a.x == 16 && a.w == 88 && a.h == 36);
    CHECK(b.x == 2000 - 16 - 88 && b.w == 88 && b.h == 36);
    CHECK(a.y > -10000 && a.y < 10000 && b.y > -10000 && b.y < 10000);
    // group_rect and hit_test walk the same path.
    CHECK(!group_rect(l, 0, s).empty());
    CHECK(hit_test(l, s, a.x + 1, a.y + 1).group >= 0);
}

// The built-in "keys" tablet layout must reproduce host/keypad_layout.cpp's
// geometry exactly, at every size step and screen scale: same key rects,
// same scancodes and labels, same tab rects shown and hidden.
static void test_builtin_keys_matches_the_old_keypad() {
    Layout l;
    std::string err;
    CHECK(parse_layout(builtin_layout("keys", Form::Tablet), &l, &err));
    const double scales[] = {1.0, 2.0, 3.0};
    const int sizes_pt[] = {32, 36, 40};
    for (double sc : scales)
        for (int size = 0; size < 3; ++size) {
            l.scale = sizes_pt[size] / 36.0;
            const Screen s = screen(int(1180 * sc), int(820 * sc), sc);
            for (int side = 0; side < 2; ++side) {
                int n = 0;
                const KeypadKey *keys = legacy_keypad_keys(KeypadSide(side), &n);
                const Group &g = l.groups[side];
                CHECK(int(g.controls.size()) == n);
                for (int i = 0; i < n; ++i) {
                    const KeypadRect old =
                        legacy_keypad_key_rect(KeypadSide(side), keys[i], size, sc, s.dw, s.dh);
                    const Rect now = control_rect(l, side, i, s);
                    CHECK(now.x == old.x && now.y == old.y && now.w == old.w && now.h == old.h);
                    CHECK(g.controls[i].scancode == keys[i].scancode);
                    CHECK(g.controls[i].label == keys[i].label);
                }
                if (size == 1) { // tabs do not scale with key size in the old keypad
                    for (int shown = 0; shown < 2; ++shown) {
                        l.groups[side].visible = shown != 0;
                        const KeypadRect old = legacy_keypad_tab_rect(KeypadSide(side), shown != 0,
                                                                      size, sc, s.dw, s.dh);
                        const Rect now = control_rect(l, 2, side, s);
                        CHECK(now.x == old.x && now.y == old.y && now.w == old.w && now.h == old.h);
                    }
                    l.groups[side].visible = true;
                }
            }
        }
}

static void write_file(const std::filesystem::path &path, const std::string &text) {
    std::error_code ec;
    std::filesystem::create_directories(path.parent_path(), ec);
    const int fd = os_fd_open(path.string().c_str(), OS_O_WRONLY | OS_O_CREAT | OS_O_TRUNC);
    CHECK(fd >= 0);
    if (fd >= 0) {
        CHECK(os_fd_write(fd, text.data(), text.size()) == int64_t(text.size()));
        os_fd_close(fd);
    }
}

static void test_form_for() {
    CHECK(form_for(2360, 1640, 2.0) == Form::Tablet);
    CHECK(form_for(2532, 1170, 3.0) == Form::PhoneLandscape);
    CHECK(form_for(1170, 2532, 3.0) == Form::PhonePortrait);
}

// Exercises the profile-then-game-then-built-in search, names() and the
// save/delete round trip against a scratch directory tree.
static void test_layout_store() {
    char dir[512];
    snprintf(dir, sizeof dir, "%s/controls-store-test-XXXXXX", os_temp_dir());
    CHECK(os_mkdtemp(dir) == 0);
    const std::filesystem::path root = dir;
    const std::filesystem::path profile_dir = root / "profile";
    const std::filesystem::path game_dir = root / "game";

    // The tiny layout, renamed "keys" so it round-trips through keys.json.
    std::string keys_json = kTinyLayout;
    size_t pos = keys_json.find("\"tiny\"");
    CHECK(pos != std::string::npos);
    if (pos != std::string::npos)
        keys_json.replace(pos, 6, "\"keys\"");

    write_file(game_dir / "keys.json", keys_json);
    write_file(game_dir / "pad.json", "{");
    write_file(game_dir / "extra.phone-portrait.json", keys_json);

    LayoutStore store;
    store.set_dirs(profile_dir.string(), game_dir.string());

    const std::vector<std::string> expected_names = {"pad", "keys", "pad+keys", "extra"};
    CHECK(store.names() == expected_names);

    Layout game_keys;
    std::string problem;
    CHECK(store.load("keys", Form::Tablet, &game_keys, &problem));
    CHECK(game_keys.name == "keys" && game_keys.opacity == 0.5);
    CHECK(problem.empty());

    problem.clear();
    Layout unused;
    // A broken game pad.json is skipped: the built-in pad loads, and the
    // problem is still reported.
    CHECK(store.load("pad", Form::Tablet, &unused, &problem));
    CHECK(unused.name == "pad");
    CHECK(problem.find("pad.json") != std::string::npos);
    CHECK(problem.find("line 1") != std::string::npos);

    // No file and no built-in for this name/form: a clean miss.
    problem.clear();
    CHECK(!store.load("nope", Form::Tablet, &unused, &problem));
    CHECK(problem.empty());

    // save_user_copy -> load returns the player's copy; has_user_copy sees it.
    Layout mine;
    std::string parse_err;
    CHECK(parse_layout(keys_json, &mine, &parse_err));
    mine.opacity = 0.9;
    std::string save_err;
    CHECK(!store.has_user_copy("keys", Form::Tablet));
    CHECK(store.save_user_copy(mine, Form::Tablet, &save_err));
    CHECK(store.has_user_copy("keys", Form::Tablet));
    Layout loaded;
    problem.clear();
    CHECK(store.load("keys", Form::Tablet, &loaded, &problem));
    CHECK(loaded.opacity == 0.9);

    // delete_user_copy removes it; load falls back to the game copy.
    CHECK(store.delete_user_copy("keys", Form::Tablet));
    CHECK(!store.has_user_copy("keys", Form::Tablet));
    Layout fallback;
    problem.clear();
    CHECK(store.load("keys", Form::Tablet, &fallback, &problem));
    CHECK(fallback.opacity == 0.5);

    std::error_code ec;
    std::filesystem::remove_all(root, ec);
}

// --- Raster: anti-aliased premultiplied primitives -------------------------

static Paint flat_paint(Rgba c) {
    Paint p;
    p.kind = Paint::Flat;
    p.c0 = c;
    return p;
}

static void test_raster_disc() {
    std::vector<uint8_t> px(64 * 64 * 4, 0);
    Canvas c(px, 64, 64);
    c.disc(32, 32, 16, flat_paint(Rgba{255, 255, 255, 255}));

    const Rgba centre = c.at(32, 32);
    CHECK(centre.r == 255 && centre.g == 255 && centre.b == 255 && centre.a == 255);
    CHECK(c.at(32, 10).a == 0);
    const int edge_a = c.at(48, 32).a;
    CHECK(edge_a > 0 && edge_a < 255);

    long sum = 0;
    for (int y = 0; y < 64; ++y)
        for (int x = 0; x < 64; ++x)
            sum += c.at(x, y).a;
    const double expected = 3.14159265358979323846 * 16.0 * 16.0 * 255.0;
    CHECK(std::abs(sum - expected) < expected * 0.02);
}

static void test_raster_ring() {
    std::vector<uint8_t> px(64 * 64 * 4, 0);
    Canvas c(px, 64, 64);
    c.ring(32, 32, 14, 10, flat_paint(Rgba{255, 255, 255, 255}));
    CHECK(c.at(32, 32).a == 0);   // the hole
    CHECK(c.at(32, 20).a == 255); // 12 from centre: between the radii
}

static void test_raster_radial_gradient() {
    std::vector<uint8_t> px(64 * 64 * 4, 0);
    Canvas c(px, 64, 64);
    Paint p;
    p.kind = Paint::Radial;
    p.c0 = Rgba{255, 0, 0, 255};
    p.c1 = Rgba{0, 0, 255, 255};
    p.x0 = 32;
    p.y0 = 32;
    p.x1 = 16; // radius
    c.disc(32, 32, 16, p);
    const Rgba centre = c.at(32, 32);
    CHECK(centre.r > 200 && centre.b < 20);
    const Rgba near_edge = c.at(32, 21); // 11 px from centre, close to the 16 px radius
    CHECK(near_edge.b > near_edge.r);
}

static void test_raster_opacity_premultiplies() {
    std::vector<uint8_t> px(64 * 64 * 4, 0);
    Canvas c(px, 64, 64, 0.5);
    c.disc(32, 32, 16, flat_paint(Rgba{255, 255, 255, 255}));
    const Rgba centre = c.at(32, 32);
    CHECK(centre.a == 127 || centre.a == 128);
    CHECK(centre.r == centre.a); // premultiplied: white * alpha == alpha
}

static void test_raster_polygon() {
    std::vector<uint8_t> px(64 * 64 * 4, 0);
    Canvas c(px, 64, 64);
    const std::vector<std::pair<double, double>> tri = {{0, 0}, {63, 0}, {0, 63}};
    c.polygon(tri, flat_paint(Rgba{255, 255, 255, 255}));
    CHECK(c.at(5, 5).a > 0);
    CHECK(c.at(60, 60).a == 0);
}

static void test_raster_stroke() {
    std::vector<uint8_t> px(64 * 64 * 4, 0);
    Canvas c(px, 64, 64);
    const std::vector<std::pair<double, double>> line = {{0, 32}, {63, 32}};
    c.stroke(line, 4, false, flat_paint(Rgba{255, 255, 255, 255}));
    CHECK(c.at(32, 32).a > 0);
    CHECK(c.at(32, 36).a == 0);
}

static void test_raster_source_over() {
    std::vector<uint8_t> px(64 * 64 * 4, 0);
    Canvas c(px, 64, 64);
    c.disc(32, 32, 20, flat_paint(Rgba{255, 255, 255, 255}));
    Paint black_half;
    black_half.c0 = Rgba{0, 0, 0, 128};
    c.rect(10, 10, 44, 44, black_half); // fully inside the disc
    const Rgba centre = c.at(32, 32);
    CHECK(std::abs(int(centre.r) - 128) <= 2);
    CHECK(std::abs(int(centre.g) - 128) <= 2);
    CHECK(std::abs(int(centre.b) - 128) <= 2);
}

static void test_raster_text() {
    std::vector<uint8_t> px(64 * 64 * 4, 0);
    Canvas c(px, 64, 64);
    c.text(0, 0, "A", Rgba{255, 255, 255, 255});
    bool any_set = false;
    for (int y = 0; y < 16 && !any_set; ++y)
        for (int x = 0; x < 12 && !any_set; ++x)
            if (c.at(x, y).a > 0)
                any_set = true;
    CHECK(any_set);
    CHECK(c.text_width("AB") == 24);
}

// --- Old raster.cpp (pre-Task-8), frozen here as a regression oracle: it
// replaced (never blended) pixels, and Task 7's keypad look depends on that
// replace semantics exactly. Never update this to track raster.h/.cpp.
extern "C" const uint8_t *mods_font6x8_glyph(char c); // mods/font6x8.cpp

namespace legacy_raster {

struct Canvas {
    std::vector<uint8_t> &px;
    int w, h;

    void fill(int x, int y, int fw, int fh, int r, int g, int b, int a) {
        const int x0 = std::max(0, x), y0 = std::max(0, y);
        const int x1 = std::min(w, x + fw), y1 = std::min(h, y + fh);
        for (int yy = y0; yy < y1; ++yy)
            for (int xx = x0; xx < x1; ++xx) {
                uint8_t *p = &px[(size_t(yy) * w + xx) * 4];
                p[0] = uint8_t(r * a / 255);
                p[1] = uint8_t(g * a / 255);
                p[2] = uint8_t(b * a / 255);
                p[3] = uint8_t(a);
            }
    }

    void disc(int cx, int cy, int radius, int r, int g, int b, int a) {
        for (int dy = -radius; dy < radius; ++dy) {
            const double yc = dy + 0.5;
            int half = 0;
            while ((half + 0.5) * (half + 0.5) + yc * yc <= double(radius) * radius)
                ++half;
            fill(cx - half, cy + dy, 2 * half, 1, r, g, b, a);
        }
    }

    void text(int x, int y, const char *str, int r, int g, int b, int a) {
        for (; *str; ++str, x += 12) {
            const uint8_t *glyph = mods_font6x8_glyph(*str);
            for (int row = 0; row < 8; ++row)
                for (int col = 0; col < 6; ++col)
                    if (glyph[row] & (0x20 >> col))
                        fill(x + col * 2, y + row * 2, 2, 2, r, g, b, a);
        }
    }
};

int text_width(const char *str) {
    return int(strlen(str)) * 12;
}

// A byte-for-byte copy of overlay.cpp's pre-Task-8 `paint()`.
void paint(Canvas &c, const ControlsView &view, const Rect &r) {
    const auto alpha = [&](int a) { return int(lround(a * std::clamp(view.opacity, 0.0, 1.0))); };
    for (const Rect &b : view.backdrops)
        c.fill(b.x - r.x, b.y - r.y, b.w, b.h, 6, 9, 15, alpha(150));
    for (const DrawControl &d : view.controls) {
        const int x = d.rect.x - r.x, y = d.rect.y - r.y, w = d.rect.w, h = d.rect.h;
        switch (d.kind) {
        case Kind::Key: {
            if (d.lit)
                c.fill(x, y, w, h, 120, 160, 255, alpha(220));
            else
                c.fill(x, y, w, h, 40, 48, 64, alpha(200));
            const char *label = d.label.c_str();
            c.text(x + (w - text_width(label)) / 2, y + (h - 16) / 2, label, d.lit ? 10 : 235,
                   d.lit ? 12 : 242, d.lit ? 20 : 255, alpha(255));
            break;
        }
        case Kind::Toggle: {
            c.fill(x, y, w, h, 6, 9, 15, alpha(150));
            c.fill(x + 2, y + 2, w - 4, h - 4, 40, 48, 64, alpha(200));
            const char *label = d.group_visible ? d.label.c_str() : d.label_off.c_str();
            c.text(x + (w - text_width(label)) / 2, y + (h - 16) / 2, label, 235, 242, 255,
                   alpha(255));
            break;
        }
        default:
            c.disc(x + w / 2, y + h / 2, std::min(w, h) / 2, 40, 48, 64, alpha(200));
            break;
        }
    }
}

} // namespace legacy_raster

// --- Router: fingers, keys, modifiers, toggles ----------------------------

// Records every call as a short string: "k44+", "k44-", "a:settings",
// "sw:next", "vis", "tap".
struct Rec : ControlsSink {
    std::vector<std::string> calls;
    void key(int scancode, bool down) override {
        calls.push_back("k" + std::to_string(scancode) + (down ? "+" : "-"));
    }
    void action(const std::string &name) override {
        calls.push_back("a:" + name);
    }
    void switch_layout(const std::string &target) override {
        calls.push_back("sw:" + target);
    }
    void group_visibility_changed() override {
        calls.push_back("vis");
    }
    void tap() override {
        calls.push_back("tap");
    }
};

static Layout keys_layout() {
    Layout l;
    std::string err;
    CHECK(parse_layout(builtin_layout("keys", Form::Tablet), &l, &err));
    return l;
}

// The tablet "keys" layout, rendered through the frozen legacy_raster::paint
// and through overlay_paint.cpp's new Canvas path, must produce identical
// buffers: the keypad's look must not move a single pixel under Task 8. The
// new path is rasterized the way Overlay does it, one layer at a time into
// its own rect, then composed.
static void test_raster_matches_legacy_keypad_pixels() {
    Layout l = keys_layout();
    const int dw = 2360, dh = 1640;
    const Screen s = screen(dw, dh, 2.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);
    const ControlsView v = make_view(l, r, s, 1.0);
    const Rect full{0, 0, dw, dh};

    std::vector<uint8_t> old_px(size_t(dw) * dh * 4, 0);
    legacy_raster::Canvas old_c{old_px, dw, dh};
    legacy_raster::paint(old_c, v, full);

    std::vector<uint8_t> new_px(size_t(dw) * dh * 4, 0);
    for (int i = 0; i < int(v.layers.size()); ++i) {
        const Rect lr = v.layers[i].rect;
        if (lr.empty())
            continue;
        CHECK(lr.x >= 0 && lr.y >= 0 && lr.x + lr.w <= dw && lr.y + lr.h <= dh);
        std::vector<uint8_t> layer_px(size_t(lr.w) * lr.h * 4, 0);
        Canvas layer_c(layer_px, lr.w, lr.h, v.opacity);
        paint_layer(layer_c, v, i, lr);
        // Layers never overlap here, so composing is copying the drawn pixels.
        for (int y = 0; y < lr.h; ++y)
            for (int x = 0; x < lr.w; ++x) {
                const uint8_t *src = &layer_px[(size_t(y) * lr.w + x) * 4];
                if (src[0] | src[1] | src[2] | src[3])
                    memcpy(&new_px[(size_t(lr.y + y) * dw + lr.x + x) * 4], src, 4);
            }
    }
    CHECK(old_px == new_px);

    // The one-canvas path agrees.
    std::vector<uint8_t> whole_px(size_t(dw) * dh * 4, 0);
    Canvas whole_c(whole_px, dw, dh, v.opacity);
    paint_overlay(whole_c, v, full);
    CHECK(old_px == whole_px);
}

static int find_key(const Layout &l, int group, int scancode) {
    const Group &g = l.groups[group];
    for (size_t i = 0; i < g.controls.size(); ++i)
        if (g.controls[i].kind == Kind::Key && g.controls[i].scancode == scancode)
            return int(i);
    return -1;
}

// The middle of a control's current rect: recompute this right before a
// finger_down when the control (a toggle tab, in particular) may have moved
// since an earlier press changed the layout's visibility.
static void center(const Layout &l, int group, int control, const Screen &s, double *x, double *y) {
    const Rect r = control_rect(l, group, control, s);
    CHECK(!r.empty());
    *x = r.x + r.w / 2.0;
    *y = r.y + r.h / 2.0;
}

// Tablet keyboard tabs must remain in the touchable safe area even when both
// halves are collapsed, then reveal keys that can receive a complete press.
static void test_tablet_keyboard_safe_area() {
    for (const char *name : {"keys", "pad+keys"}) {
        Layout l;
        std::string error;
        CHECK(parse_layout(builtin_layout(name, Form::Tablet), &l, &error));
        Screen s = screen(2420, 1668, 2.0);
        s.safe = {24, 48, 2372, 1572};
        Router r;
        Rec rec;
        r.set_layout(&l, rec);
        r.set_screen(s);
        l.groups[0].visible = l.groups[1].visible = false;
        for (int side = 0; side < 2; ++side) {
            const Rect tab = control_rect(l, 2, side, s);
            CHECK(tab.x >= s.safe.x && tab.y >= s.safe.y);
            CHECK(tab.x + tab.w <= s.safe.x + s.safe.w);
            CHECK(tab.y + tab.h <= s.safe.y + s.safe.h);
            CHECK(r.finger_down(1, tab.x + tab.w / 2., tab.y + tab.h / 2., 0, rec));
            CHECK(r.finger_up(1, 1, rec));
            CHECK(l.groups[side].visible);
            for (int c = 0; c < int(l.groups[side].controls.size()); ++c) {
                const Rect key = control_rect(l, side, c, s);
                CHECK(key.x >= s.safe.x && key.y >= s.safe.y);
                CHECK(key.x + key.w <= s.safe.x + s.safe.w);
                CHECK(key.y + key.h <= s.safe.y + s.safe.h);
            }
        }
        double x, y;
        center(l, 1, find_key(l, 1, kScanReturn), s, &x, &y);
        rec.calls.clear();
        CHECK(r.finger_down(2, x, y, 2, rec));
        CHECK(r.finger_up(2, 3, rec));
        CHECK((rec.calls == std::vector<std::string>{"k40+", "tap", "k40-"}));
    }
}

static void test_router_space_key() {
    Layout l = keys_layout();
    const Screen s = screen(1180, 820, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);
    const uint32_t gen0 = r.generation();

    double x, y;
    center(l, 1, find_key(l, 1, kScanSpace), s, &x, &y); // Space lives on the right half
    CHECK(r.finger_down(1, x, y, 0, rec));
    CHECK((rec.calls == std::vector<std::string>{"k44+", "tap"}));
    CHECK(r.generation() != gen0);
    const uint32_t gen1 = r.generation();
    rec.calls.clear();

    CHECK(r.finger_up(1, 10, rec));
    CHECK((rec.calls == std::vector<std::string>{"k44-"}));
    CHECK(r.generation() != gen1);
}

static void test_router_latched_shift() {
    Layout l = keys_layout();
    const Screen s = screen(1180, 820, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);

    double sx, sy, ax, ay;
    center(l, 0, find_key(l, 0, kScanLShift), s, &sx, &sy);
    center(l, 0, find_key(l, 0, kScanA), s, &ax, &ay);

    uint32_t gen = r.generation();
    CHECK(r.finger_down(1, sx, sy, 0, rec)); // Shift down
    CHECK((rec.calls == std::vector<std::string>{"k225+", "tap"}));
    CHECK(r.lit() == 0); // Held, not latched yet
    CHECK(r.generation() != gen);
    gen = r.generation();
    rec.calls.clear();

    CHECK(r.finger_up(1, 100ull * 1000000ull, rec)); // a 100 ms tap latches
    CHECK(rec.calls.empty());                        // Held->Latched crosses no Off boundary
    CHECK(r.lit() == 1);
    CHECK(r.generation() != gen);
    gen = r.generation();
    rec.calls.clear();

    CHECK(r.finger_down(2, ax, ay, 200ull * 1000000ull, rec));
    CHECK((rec.calls == std::vector<std::string>{"k4+", "tap"}));
    CHECK(r.generation() != gen);
    gen = r.generation();
    rec.calls.clear();

    CHECK(r.finger_up(2, 250ull * 1000000ull, rec)); // A lifts: the latch releases too
    CHECK((rec.calls == std::vector<std::string>{"k4-", "k225-"}));
    CHECK(r.lit() == 0);
    CHECK(r.generation() != gen);
}

static void test_router_left_tab_toggle() {
    Layout l = keys_layout();
    const Screen s = screen(1180, 820, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);
    uint32_t gen = r.generation();

    double x, y;
    center(l, 2, 0, s, &x, &y); // the tabs group's first toggle targets "left"
    CHECK(r.finger_down(1, x, y, 0, rec));
    CHECK((rec.calls == std::vector<std::string>{"vis", "tap"}));
    CHECK(!l.groups[0].visible);
    CHECK(r.generation() != gen);
    gen = r.generation();
    rec.calls.clear();

    CHECK(r.finger_up(1, 0, rec)); // the toggle is claimed and does nothing more
    CHECK(rec.calls.empty());

    center(l, 2, 0, s, &x, &y); // the tab moved: its group is hidden now
    CHECK(r.finger_down(2, x, y, 0, rec));
    CHECK((rec.calls == std::vector<std::string>{"vis", "tap"}));
    CHECK(l.groups[0].visible);
    CHECK(r.generation() != gen);
}

static void test_router_gap_is_claimed_silently() {
    Layout l = keys_layout();
    const Screen s = screen(1180, 820, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);
    const Rect box = group_rect(l, 0, s);
    CHECK(r.finger_down(1, box.x + 1, box.y + 1, 0, rec)); // the half-gap at the box's corner
    CHECK(rec.calls.empty());
    CHECK(r.owns(1));
}

static void test_router_game_area_not_claimed() {
    Layout l = keys_layout();
    const Screen s = screen(1180, 820, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);
    CHECK(!r.finger_down(1, s.dw / 2.0, s.dh / 2.0, 0, rec));
    CHECK(rec.calls.empty());
    CHECK(!r.owns(1));
}

static void test_router_cancel_does_not_release_latch() {
    Layout l = keys_layout();
    const Screen s = screen(1180, 820, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);

    double sx, sy, ax, ay;
    center(l, 0, find_key(l, 0, kScanLShift), s, &sx, &sy);
    CHECK(r.finger_down(1, sx, sy, 0, rec));
    CHECK(r.finger_up(1, 50ull * 1000000ull, rec)); // latches Shift
    CHECK(r.lit() == 1);
    rec.calls.clear();

    center(l, 0, find_key(l, 0, kScanA), s, &ax, &ay);
    CHECK(r.finger_down(2, ax, ay, 100ull * 1000000ull, rec));
    rec.calls.clear();
    const uint32_t gen = r.generation();

    CHECK(r.finger_cancel(2, rec));
    CHECK((rec.calls == std::vector<std::string>{"k4-"}));
    CHECK(r.lit() == 1); // key_lifted never runs on a cancel: the latch survives
    CHECK(!r.owns(2));
    CHECK(r.generation() != gen);
}

static void test_router_two_fingers_shift_held_and_a() {
    Layout l = keys_layout();
    const Screen s = screen(1180, 820, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);

    double sx, sy, ax, ay;
    center(l, 0, find_key(l, 0, kScanLShift), s, &sx, &sy);
    center(l, 0, find_key(l, 0, kScanA), s, &ax, &ay);

    CHECK(r.finger_down(1, sx, sy, 0, rec)); // Shift: finger stays down (chording)
    CHECK((rec.calls == std::vector<std::string>{"k225+", "tap"}));
    rec.calls.clear();

    CHECK(r.finger_down(2, ax, ay, 10ull * 1000000ull, rec));
    CHECK((rec.calls == std::vector<std::string>{"k4+", "tap"}));
    rec.calls.clear();

    CHECK(r.finger_up(2, 20ull * 1000000ull, rec)); // A lifts; Shift is Held, not Latched
    CHECK((rec.calls == std::vector<std::string>{"k4-"}));
    rec.calls.clear();

    CHECK(r.finger_up(1, 300ull * 1000000ull, rec)); // held well past the tap window
    CHECK((rec.calls == std::vector<std::string>{"k225-"}));
}

static void test_router_set_enabled_false_releases_and_blocks() {
    Layout l = keys_layout();
    const Screen s = screen(1180, 820, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);

    double ax, ay;
    center(l, 0, find_key(l, 0, kScanA), s, &ax, &ay);
    CHECK(r.finger_down(1, ax, ay, 0, rec));
    rec.calls.clear();
    const uint32_t gen = r.generation();

    r.set_enabled(false, rec);
    CHECK((rec.calls == std::vector<std::string>{"k4-"}));
    CHECK(!r.enabled());
    CHECK(!r.owns(1));
    CHECK(r.generation() != gen);

    Rec rec2;
    CHECK(!r.finger_down(2, ax, ay, 0, rec2)); // disabled: hits nothing
    CHECK(rec2.calls.empty());
}

static void test_router_cancel_all_releases_everything() {
    Layout l = keys_layout();
    const Screen s = screen(1180, 820, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);

    double sx, sy, ax, ay;
    center(l, 0, find_key(l, 0, kScanLShift), s, &sx, &sy);
    center(l, 0, find_key(l, 0, kScanA), s, &ax, &ay);
    CHECK(r.finger_down(1, sx, sy, 0, rec));
    CHECK(r.finger_down(2, ax, ay, 0, rec));
    rec.calls.clear();
    const uint32_t gen = r.generation();

    r.cancel_all(rec);
    CHECK((rec.calls == std::vector<std::string>{"k4-", "k225-"}));
    CHECK(!r.owns(1) && !r.owns(2));
    CHECK(r.lit() == 0);
    CHECK(r.generation() != gen);
}

// set_layout swaps the layout under a live game: everything the old layout's
// fingers held must let go first, exactly as cancel_all() releases it, or
// the game is left holding a key with no finger (and no way) to release it.
static void test_router_set_layout_releases_held_key() {
    Layout l = keys_layout();
    Layout other = keys_layout();
    const Screen s = screen(1180, 820, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);

    double ax, ay;
    center(l, 0, find_key(l, 0, kScanA), s, &ax, &ay);
    CHECK(r.finger_down(1, ax, ay, 0, rec));
    rec.calls.clear();
    const uint32_t gen = r.generation();

    r.set_layout(&other, rec);
    CHECK((rec.calls == std::vector<std::string>{"k4-"}));
    CHECK(r.layout() == &other);
    CHECK(!r.owns(1));
    CHECK(r.generation() != gen);
}

// A latched modifier has no finger holding it at all (the finger that
// latched it already lifted), so only KeypadModifiers::cancel_all — run
// unconditionally by cancel_all(), not just the per-finger release loop —
// can catch it when the layout swaps out from under it.
static void test_router_set_layout_releases_latched_modifier() {
    Layout l = keys_layout();
    Layout other = keys_layout();
    const Screen s = screen(1180, 820, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);

    double sx, sy;
    center(l, 0, find_key(l, 0, kScanLShift), s, &sx, &sy);
    CHECK(r.finger_down(1, sx, sy, 0, rec));
    CHECK(r.finger_up(1, 50ull * 1000000ull, rec)); // a tap latches Shift; the finger is gone
    CHECK(r.lit() == 1);
    rec.calls.clear();

    r.set_layout(&other, rec);
    CHECK((rec.calls == std::vector<std::string>{"k225-"}));
    CHECK(r.lit() == 0);
}

static void test_router_finger_cancel_on_held_modifier() {
    Layout l = keys_layout();
    const Screen s = screen(1180, 820, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);

    double sx, sy;
    center(l, 0, find_key(l, 0, kScanLShift), s, &sx, &sy);
    CHECK(r.finger_down(1, sx, sy, 0, rec)); // held, not yet a tap: no latch
    rec.calls.clear();
    const uint32_t gen = r.generation();

    CHECK(r.finger_cancel(1, rec));
    CHECK((rec.calls == std::vector<std::string>{"k225-"}));
    CHECK(r.lit() == 0); // it was never latched, so there is no latch to leave behind
    CHECK(!r.owns(1));
    CHECK(r.generation() != gen);
}

// Legacy quirk, ported as-is from host/sdl/main.cpp's g_keypad_fingers map:
// a key's down/up events are not reference-counted across the fingers that
// land on it. Two fingers on the same key each drive their own down event,
// and either one lifting — not just the last one — releases the key; the
// other finger's later lift releases it again.
static void test_router_two_fingers_same_key_first_lift_releases() {
    Layout l = keys_layout();
    const Screen s = screen(1180, 820, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);

    double ax, ay;
    center(l, 0, find_key(l, 0, kScanA), s, &ax, &ay);
    CHECK(r.finger_down(1, ax, ay, 0, rec));
    CHECK(r.finger_down(2, ax, ay, 0, rec));
    CHECK((rec.calls == std::vector<std::string>{"k4+", "tap", "k4+", "tap"}));
    rec.calls.clear();

    CHECK(r.finger_up(1, 10, rec)); // the first lift already releases the key
    CHECK((rec.calls == std::vector<std::string>{"k4-"}));
    CHECK(r.owns(2)); // the second finger is still tracked, sitting on an already-released key
    rec.calls.clear();

    CHECK(r.finger_up(2, 20, rec)); // its own lift releases the key again
    CHECK((rec.calls == std::vector<std::string>{"k4-"}));
}

static void test_router_set_layout_null_disables_hit_testing() {
    Router r;
    Rec rec;
    r.set_screen(screen(1180, 820, 1.0));
    r.set_layout(nullptr, rec);
    CHECK(r.layout() == nullptr);
    CHECK(!r.finger_down(1, 10, 10, 0, rec));
    CHECK(rec.calls.empty());
}

static void test_router_state_out_of_range_is_zero() {
    Router r;
    const ControlState &cs = r.state(5, 5);
    CHECK(!cs.pressed && cs.knob_x == 0 && cs.knob_y == 0 && cs.hat == 0);
}

// --- Vpad: stick/dpad math, source merge, edge queue -----------------------

static void test_stick_output() {
    float x, y;
    stick_output(0, 0, 100, 0.15, &x, &y);
    CHECK(x == 0 && y == 0);

    stick_output(10, 0, 100, 0.15, &x, &y); // 0.1 * radius, inside the deadzone
    CHECK(x == 0 && y == 0);

    stick_output(100, 0, 100, 0.15, &x, &y);
    CHECK(fabs(x - 1.0) < 0.001 && fabs(y) < 0.001);

    stick_output(200, 0, 100, 0.15, &x, &y); // beyond the radius, clamped
    CHECK(fabs(x - 1.0) < 0.001 && fabs(y) < 0.001);

    stick_output(57.5, 0, 100, 0.15, &x, &y); // 0.575 * radius
    CHECK(fabs(x - 0.5) < 0.01 && fabs(y) < 0.01);

    stick_output(100, 100, 100, 0.15, &x, &y); // diagonal: magnitude 1
    CHECK(fabs(std::hypot(double(x), double(y)) - 1.0) < 0.001);
}

static void test_dpad_hat() {
    CHECK(dpad_hat(0, -60, 60) == kHatUp);
    CHECK(dpad_hat(60, 60, 60) == (kHatRight | kHatDown));
    CHECK(dpad_hat(6, 0, 60) == 0); // 0.1 * half, inside the neutral radius
}

static void test_pad_state_merge() {
    PadState a, b;
    a.buttons = kPadCross;
    b.buttons = kPadCircle;
    const PadState m1 = merge(a, b);
    CHECK(m1.buttons == (kPadCross | kPadCircle));

    a = PadState();
    b = PadState();
    a.lx = 0.2f;
    b.lx = -0.7f;
    CHECK(merge(a, b).lx == -0.7f); // larger magnitude wins
}

static void test_vpad_edges() {
    Vpad v;
    PadState cross;
    cross.buttons = kPadCross;
    v.set_source(kPadSourceTouch, cross);
    CHECK(v.packet() != 0);
    PadEdge e{};
    CHECK(v.next_edge(0, &e));
    CHECK(e.kind == 0 && e.index == 0 && e.value == 1);
    const uint32_t after_first = e.sequence;

    // Setting the same state again adds no edge.
    v.set_source(kPadSourceTouch, cross);
    PadEdge e2{};
    CHECK(!v.next_edge(after_first, &e2));

    // A controller source holding cross while the touch source releases it:
    // the merged state still has cross, and no edge is added.
    v.set_source(kPadSourceController, cross);
    v.set_source(kPadSourceTouch, PadState());
    PadEdge e3{};
    CHECK(!v.next_edge(after_first, &e3));
    CHECK(v.state().buttons == kPadCross);

    // 300 changes overflow the 256-entry ring; the oldest surviving edge is
    // number 45 (300 - 256 + 1).
    Vpad v2;
    for (int i = 0; i < 300; ++i) {
        PadState toggled;
        toggled.buttons = (i % 2 == 0) ? kPadCross : 0;
        v2.set_source(kPadSourceTouch, toggled);
    }
    PadEdge e4{};
    CHECK(v2.next_edge(0, &e4));
    CHECK(e4.sequence > 44);
}

// to_host's rounding: lx -1 hits the int16 minimum exactly (-1 * 32767);
// ly 0.5 rounds 16383.5 up to 16384; l2 (a byte-scaled trigger) hits 255.
static void test_to_host_scales_axes() {
    PadState s;
    s.lx = -1.0f;
    s.ly = 0.5f;
    s.l2 = 1.0f;
    const HostPadState h = to_host(s);
    CHECK(h.lx == -32767);
    CHECK(h.ly == 16384);
    CHECK(h.l2 == 255);
}

// A layout with a cross button, an l2 button, a dpad, a floating left stick
// and a fixed right stick, all in one non-grid group, at scale 1 so rects
// match points exactly: cross {0,0,60,60}, l2 {100,0,60,60}, dpad
// {200,0,120,120} (centre 260,60, half 60), floating stick {400,0,200,200}
// (centre 500,100), fixed stick {650,0,200,200} (centre 750,100). Both
// sticks have radius 100 (points; the zone is independent of it).
static Layout pad_layout() {
    Layout l;
    l.groups.resize(1);
    Group &g = l.groups[0];
    g.id = "pad";

    Control cross;
    cross.kind = Kind::Button;
    cross.button = PadButton::Cross;
    cross.anchor = Anchor::TopLeft;
    cross.x = 0;
    cross.y = 0;
    cross.w = cross.h = 60;
    g.controls.push_back(cross);

    Control l2;
    l2.kind = Kind::Button;
    l2.button = PadButton::L2;
    l2.anchor = Anchor::TopLeft;
    l2.x = 100;
    l2.y = 0;
    l2.w = l2.h = 60;
    g.controls.push_back(l2);

    Control dpad;
    dpad.kind = Kind::Dpad;
    dpad.anchor = Anchor::TopLeft;
    dpad.x = 200;
    dpad.y = 0;
    dpad.w = dpad.h = 120;
    g.controls.push_back(dpad);

    Control stick;
    stick.kind = Kind::Stick;
    stick.stick = 0;
    stick.floating = true;
    stick.deadzone = 0.15;
    stick.radius = 100;
    stick.anchor = Anchor::TopLeft;
    stick.x = 400;
    stick.y = 0;
    stick.w = stick.h = 200;
    g.controls.push_back(stick);

    Control fixed_stick;
    fixed_stick.kind = Kind::Stick;
    fixed_stick.stick = 1;
    fixed_stick.floating = false;
    fixed_stick.deadzone = 0.15;
    fixed_stick.radius = 100;
    fixed_stick.anchor = Anchor::TopLeft;
    fixed_stick.x = 650;
    fixed_stick.y = 0;
    fixed_stick.w = fixed_stick.h = 200;
    g.controls.push_back(fixed_stick);

    return l;
}

static void test_router_pad_buttons() {
    Layout l = pad_layout();
    const Screen s = screen(2000, 1000, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);

    CHECK(r.finger_down(1, 30, 30, 0, rec)); // cross
    CHECK(r.pad().buttons == kPadCross);

    CHECK(r.finger_down(2, 130, 30, 0, rec)); // l2
    CHECK(r.pad().l2 == 1.0f);

    // Two fingers on cross: pad() and the drawn `pressed` stay set while
    // either one still holds it.
    CHECK(r.finger_down(5, 40, 40, 0, rec));
    CHECK((r.pad().buttons & kPadCross) != 0);
    CHECK(r.finger_up(1, 10, rec));
    CHECK((r.pad().buttons & kPadCross) != 0); // finger 5 still holds it
    CHECK(r.state(0, 0).pressed);
    CHECK(r.finger_up(5, 10, rec));
    CHECK((r.pad().buttons & kPadCross) == 0);
    CHECK(!r.state(0, 0).pressed);

    CHECK(r.finger_up(2, 10, rec));
    CHECK((r.pad() == PadState()));
}

static void test_router_pad_stick_dpad_and_cancel() {
    Layout l = pad_layout();
    const Screen s = screen(2000, 1000, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);

    // A floating stick's base is the off-centre finger position exactly (no
    // clamp to the centre), and the knob starts at 0; a further motion by
    // +radius saturates lx.
    CHECK(r.finger_down(1, 590, 100, 0, rec));
    CHECK(r.state(0, 3).base_x == 590 && r.state(0, 3).base_y == 100);
    CHECK(r.state(0, 3).knob_x == 0 && r.state(0, 3).knob_y == 0);
    CHECK(r.finger_motion(1, 690, 100, 0, rec));
    CHECK(r.pad().lx == 1.0f);
    CHECK(r.state(0, 3).knob_x == 1.0);

    // A fixed stick's base is always its rect centre (750, 100): an
    // off-centre down deflects it immediately.
    CHECK(r.finger_down(6, 830, 100, 0, rec)); // 80pt right of centre
    CHECK(r.state(0, 4).base_x == 750 && r.state(0, 4).base_y == 100);
    CHECK(r.pad().rx > 0.0f);
    CHECK(r.finger_up(6, 10, rec));

    // Dpad motion from up to right changes the hat without a lift.
    CHECK(r.finger_down(2, 260, 0, 0, rec));
    CHECK(r.pad().hat == kHatUp);
    CHECK(r.finger_motion(2, 320, 60, 0, rec));
    CHECK(r.pad().hat == kHatRight);

    // Lifting clears everything; a stick's base returns to its rect centre
    // (not (0, 0)).
    CHECK(r.finger_up(1, 10, rec));
    CHECK(r.finger_up(2, 10, rec));
    CHECK((r.pad() == PadState()));
    CHECK(r.state(0, 3).knob_x == 0.0 && r.state(0, 3).base_x == 500 &&
          r.state(0, 3).base_y == 100);

    // cancel_all clears everything, including a mid-drag stick.
    CHECK(r.finger_down(3, 30, 30, 0, rec));   // cross
    CHECK(r.finger_down(4, 590, 100, 0, rec)); // stick
    CHECK(r.finger_motion(4, 690, 100, 0, rec));
    CHECK(r.pad().buttons == kPadCross);
    r.cancel_all(rec);
    CHECK((r.pad() == PadState()));
    CHECK(r.state(0, 3).knob_x == 0.0 && r.state(0, 3).base_x == 500 &&
          r.state(0, 3).base_y == 100);
}

// A stick or dpad has a single owner: a second finger claimed on top of it
// changes nothing and taps nothing, and its own lift does nothing either.
static void test_router_second_finger_on_stick_or_dpad_is_inert() {
    Layout l = pad_layout();
    const Screen s = screen(2000, 1000, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);

    CHECK(r.finger_down(1, 590, 100, 0, rec)); // primary, floating stick
    const size_t calls_after_primary = rec.calls.size();
    CHECK(r.finger_down(2, 410, 20, 0, rec));       // second finger, same stick's zone
    CHECK(rec.calls.size() == calls_after_primary); // no tap for the second finger
    CHECK(r.state(0, 3).base_x == 590);             // untouched by the second finger
    CHECK(r.finger_up(2, 10, rec));                 // its lift does nothing
    CHECK(r.state(0, 3).base_x == 590);
    CHECK(r.finger_motion(1, 690, 100, 0, rec)); // the owner still drives it
    CHECK(r.pad().lx == 1.0f);

    CHECK(r.finger_down(3, 260, 0, 0, rec)); // primary, dpad: up
    CHECK(r.pad().hat == kHatUp);
    CHECK(r.finger_down(4, 300, 30, 0, rec)); // second finger, same dpad's zone
    CHECK(r.pad().hat == kHatUp);             // unchanged by the second finger
    CHECK(r.finger_up(4, 10, rec));
    CHECK(r.pad().hat == kHatUp);
    CHECK(r.finger_motion(3, 320, 60, 0, rec)); // the owner still drives it
    CHECK(r.pad().hat == kHatRight);
}

// generation() bumps on a stick/dpad motion only when the hat or knob
// actually changed, not on every finger_motion call.
static void test_router_generation_bumps_only_on_hat_or_knob_change() {
    Layout l = pad_layout();
    const Screen s = screen(2000, 1000, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);

    CHECK(r.finger_down(1, 590, 100, 0, rec)); // floating stick, knob at 0
    const uint32_t gen0 = r.generation();
    CHECK(r.finger_motion(1, 590, 100, 0, rec)); // no motion at all
    CHECK(r.generation() == gen0);
    CHECK(r.finger_motion(1, 690, 100, 0, rec)); // now the knob moves
    CHECK(r.generation() != gen0);

    CHECK(r.finger_down(2, 260, 0, 0, rec)); // dpad: up
    const uint32_t gen1 = r.generation();
    CHECK(r.finger_motion(2, 260, -10, 0, rec)); // still "up": same hat
    CHECK(r.generation() == gen1);
    CHECK(r.finger_motion(2, 320, 60, 0, rec)); // now "right": hat changes
    CHECK(r.generation() != gen1);
}

// --- Overlay view: what the presenter draws -------------------------------

static int count_kind(const ControlsView &v, Kind k) {
    int n = 0;
    for (const DrawControl &d : v.controls)
        n += d.kind == k;
    return n;
}

// The keys built-in on an iPad-sized drawable: every key and both tabs, the
// latched Shift lit, and a backdrop behind each visible half.
static void test_make_view_keys() {
    Layout l = keys_layout();
    const Screen s = screen(2360, 1640, 2.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);
    double x, y;
    center(l, 0, find_key(l, 0, kScanLShift), s, &x, &y);
    CHECK(r.finger_down(1, x, y, 0, rec));
    CHECK(r.finger_up(1, 100ull * 1000000ull, rec)); // a short tap latches Shift
    CHECK(r.lit() == 1);

    ControlsView v = make_view(l, r, s, 1.0);
    CHECK(v.dw == 2360 && v.dh == 1640);
    const int left_keys = int(l.groups[0].controls.size());
    CHECK(left_keys + int(l.groups[1].controls.size()) == 77);
    CHECK(count_kind(v, Kind::Key) == 77);
    CHECK(count_kind(v, Kind::Toggle) == 3); // two HIDE tabs and the layout tab
    int lit = 0;
    for (const DrawControl &d : v.controls)
        if (d.lit) {
            ++lit;
            CHECK(d.label == "Shift");
        }
    CHECK(lit == 1);
    CHECK(v.backdrops.size() == 2);
    if (v.backdrops.size() == 2)
        for (int g = 0; g < 2; ++g) {
            const Rect a = v.backdrops[g], b = group_rect(l, g, s);
            CHECK(a.x == b.x && a.y == b.y && a.w == b.w && a.h == b.h);
        }
    int hide_tabs = 0;
    for (const DrawControl &d : v.controls)
        if (d.kind == Kind::Toggle && d.label != "PAD") {
            ++hide_tabs;
            CHECK(d.group_visible && d.label == "HIDE" && d.label_off == "KEYS");
        }
    CHECK(hide_tabs == 2);

    // The revision follows what is drawn.
    const uint64_t rev = v.revision;
    CHECK(make_view(l, r, s, 1.0).revision == rev);
    CHECK(make_view(l, r, s, 0.5).revision != rev);

    // Hide the left half: its keys go, its tab stays and reads KEYS.
    l.groups[0].visible = false;
    v = make_view(l, r, s, 1.0);
    CHECK(v.revision != rev);
    CHECK(count_kind(v, Kind::Key) == 77 - left_keys);
    CHECK(count_kind(v, Kind::Toggle) == 3);
    CHECK(v.backdrops.size() == 1);
    int hidden_tabs = 0;
    for (const DrawControl &d : v.controls)
        if (d.kind == Kind::Toggle && !d.group_visible)
            ++hidden_tabs;
    CHECK(hidden_tabs == 1);
    CHECK(v.controls.size() == size_t(77 - left_keys + 3));
}

// At the default size the drawn rects are exactly the old keypad's.
static void test_make_view_matches_the_old_keypad() {
    Layout l = keys_layout();
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    for (double sc : {1.0, 2.0}) {
        const Screen s = screen(int(1180 * sc), int(820 * sc), sc);
        r.set_screen(s);
        for (int shown = 1; shown >= 0; --shown) {
            l.groups[0].visible = l.groups[1].visible = shown != 0;
            const ControlsView v = make_view(l, r, s, 1.0);
            size_t at = 0;
            for (int side = 0; side < 2; ++side) {
                const KeypadRect half =
                    legacy_keypad_half_rect(KeypadSide(side), 1, sc, s.dw, s.dh);
                if (shown) {
                    int n = 0;
                    const KeypadKey *keys = legacy_keypad_keys(KeypadSide(side), &n);
                    for (int i = 0; i < n && at < v.controls.size(); ++i, ++at) {
                        const KeypadRect old =
                            legacy_keypad_key_rect(KeypadSide(side), keys[i], 1, sc, s.dw, s.dh);
                        const Rect now = v.controls[at].rect;
                        CHECK(now.x == old.x && now.y == old.y && now.w == old.w && now.h == old.h);
                        CHECK(v.controls[at].label == keys[i].label);
                    }
                    CHECK(v.backdrops.size() == 2 && v.backdrops[side].x == half.x &&
                          v.backdrops[side].y == half.y && v.backdrops[side].w == half.w &&
                          v.backdrops[side].h == half.h);
                } else {
                    CHECK(v.backdrops.empty());
                }
            }
            for (int side = 0; side < 2 && at < v.controls.size(); ++side, ++at) {
                const DrawControl &tab = v.controls[at];
                const KeypadRect old =
                    legacy_keypad_tab_rect(KeypadSide(side), shown != 0, 1, sc, s.dw, s.dh);
                CHECK(tab.kind == Kind::Toggle);
                CHECK(tab.rect.x == old.x && tab.rect.y == old.y && tab.rect.w == old.w &&
                      tab.rect.h == old.h);
                CHECK(tab.group_visible == (shown != 0));
                CHECK(tab.label == "HIDE" && tab.label_off == "KEYS");
            }
            // Then the layout tab (group 2 control 2), which the old keypad lacked.
            CHECK(at + 1 == v.controls.size());
            if (at < v.controls.size())
                CHECK(v.controls[at].kind == Kind::Toggle && v.controls[at].label == "PAD");
        }
    }
}

// A plain key's press draws nothing new, so the revision (and the raster)
// stays; a latched modifier lights, so it changes.
static void test_make_view_revision_ignores_undrawn_press() {
    Layout l = keys_layout();
    const Screen s = screen(2360, 1640, 2.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);
    const uint64_t rev = make_view(l, r, s, 1.0).revision;
    double x, y;
    center(l, 1, find_key(l, 1, kScanSpace), s, &x, &y);
    CHECK(r.finger_down(1, x, y, 0, rec));
    CHECK(make_view(l, r, s, 1.0).revision == rev);
    CHECK(r.finger_up(1, 10, rec));
    CHECK(make_view(l, r, s, 1.0).revision == rev);
    center(l, 0, find_key(l, 0, kScanLShift), s, &x, &y);
    CHECK(r.finger_down(2, x, y, 20, rec));
    CHECK(make_view(l, r, s, 1.0).revision == rev); // held, not lit yet
    CHECK(r.finger_up(2, 100ull * 1000000ull, rec));
    CHECK(r.lit() == 1);
    CHECK(make_view(l, r, s, 1.0).revision != rev);
}

// A phone form with no layout of that name anywhere uses the tablet one; a
// form-agnostic or phone file still wins.
static void test_tablet_fallback() {
    char dir[512];
    snprintf(dir, sizeof dir, "%s/controls-fallback-test-XXXXXX", os_temp_dir());
    CHECK(os_mkdtemp(dir) == 0);
    const std::filesystem::path root = dir;
    std::string tiny_json = kTinyLayout;
    write_file(root / "profile" / "mine.tablet.json", tiny_json);
    write_file(root / "profile" / "any.json", tiny_json);
    LayoutStore store;
    store.set_dirs((root / "profile").string(), "");

    Layout l;
    std::string problem;
    bool fell_back = true;
    CHECK(load_with_tablet_fallback(store, "keys", Form::Tablet, &l, &problem, &fell_back));
    CHECK(!fell_back);
    // "keys" has a built-in for every form, so nothing falls back.
    CHECK(load_with_tablet_fallback(store, "keys", Form::PhoneLandscape, &l, &problem, &fell_back));
    CHECK(!fell_back && l.name == "keys");
    CHECK(load_with_tablet_fallback(store, "mine", Form::PhonePortrait, &l, &problem, &fell_back));
    CHECK(fell_back);
    CHECK(load_with_tablet_fallback(store, "any", Form::PhonePortrait, &l, &problem, &fell_back));
    CHECK(!fell_back);
    CHECK(!load_with_tablet_fallback(store, "nope", Form::PhonePortrait, &l, &problem, &fell_back));
    CHECK(!fell_back && problem.empty());

    std::error_code ec;
    std::filesystem::remove_all(root, ec);
}

// A player-edited layout can hand a shape a huge, negative or NaN
// coordinate; fill_shape must clamp before converting to int rather than
// invoke undefined behaviour, and must simply draw nothing.
static void test_raster_shape_bounds_are_clamped() {
    std::vector<uint8_t> px(64 * 64 * 4, 0);
    Canvas c(px, 64, 64);
    c.disc(1e12, -1e12, 1e12, flat_paint(Rgba{255, 255, 255, 255}));
    for (uint8_t b : px)
        CHECK(b == 0);

    c.disc(32, 32, std::nan(""), flat_paint(Rgba{255, 255, 255, 255}));
    for (uint8_t b : px)
        CHECK(b == 0);
}

// parse_mapped changes only the entries it names, and leaves *table alone on
// any error; write_mapped round-trips through parse_mapped.
static void test_binding_parse_mapped() {
    MappedTable t;
    std::string err;
    CHECK(parse_mapped("cross=key:Space;left_stick=cursor", &t, &err));
    CHECK(t.buttons[int(PadButton::Cross)].type == Target::Key);
    CHECK(t.buttons[int(PadButton::Cross)].value == kScanSpace);
    CHECK(t.left == StickMode::Cursor);
    CHECK(t.dpad == StickMode::Arrows); // untouched
    // untouched: MappedTable's own default (tools/game_config.py's MAPPED_DEFAULTS)
    CHECK(t.buttons[int(PadButton::Circle)].type == Target::Mouse &&
          t.buttons[int(PadButton::Circle)].value == 1);

    MappedTable before = t;
    CHECK(!parse_mapped("cross=key:Nope", &t, &err));
    CHECK(write_mapped(t) == write_mapped(before)); // unchanged on error
    CHECK(!parse_mapped("bogus=none", &t, &err));
    CHECK(write_mapped(t) == write_mapped(before));

    MappedTable w;
    w.buttons[int(PadButton::Cross)] = Target{Target::Mouse, 0, ""};
    w.buttons[int(PadButton::Ps)] = Target{Target::Action, 0, "settings"};
    w.buttons[int(PadButton::L1)] = Target{Target::Wheel, 1, ""};
    w.cursor_speed = 450;
    const std::string text = write_mapped(w);
    MappedTable w2;
    CHECK(parse_mapped(text, &w2, &err));
    CHECK(write_mapped(w2) == text);
}

// Cross mapped to mouse_left (the built-in default): a press places the
// cursor and clicks; a release only lifts the button.
static void test_binding_button_mouse() {
    MappedTable t;
    t.buttons[int(PadButton::Cross)] = Target{Target::Mouse, 0, ""};
    Binding b;
    b.set_table(t);
    b.set_bounds(1000, 800);
    b.set_cursor(100, 100);
    PadState p;
    std::vector<TouchAction> out;
    std::vector<std::string> actions;
    p.buttons = kPadCross;
    b.tick(p, 0, &out, &actions);
    CHECK(out.size() == 2);
    CHECK(out[0].kind == TouchAction::Motion && out[0].place && out[0].x == 100 && out[0].y == 100);
    CHECK(out[1].kind == TouchAction::Button && out[1].button == 0 && out[1].down);
    out.clear();
    p.buttons = 0;
    b.tick(p, 10ull * 1000000ull, &out, &actions);
    CHECK(out.size() == 1);
    CHECK(out[0].kind == TouchAction::Button && out[0].button == 0 && !out[0].down);
}

// Right stick on Cursor (the default), speed 900, bounds 1000x800: the
// cursor moves by cursor_speed * |v|^2 * dt each tick and clamps at the edge.
static void test_binding_cursor_stick() {
    MappedTable t; // right_stick=cursor, cursor_speed=900 by default
    Binding b;
    b.set_table(t);
    b.set_bounds(1000, 800);
    b.set_cursor(0, 0);
    PadState p;
    p.rx = 1;
    std::vector<TouchAction> out;
    std::vector<std::string> actions;
    uint64_t now = 0;
    for (int i = 0; i < 3; ++i) {
        out.clear();
        b.tick(p, now, &out, &actions);
        now += 10ull * 1000000ull;
    }
    CHECK(std::fabs(b.cursor_x() - 18.0) <= 0.5);

    Binding b2;
    b2.set_table(t);
    b2.set_bounds(1000, 800);
    b2.set_cursor(0, 0);
    p.rx = 0.5f;
    now = 0;
    for (int i = 0; i < 3; ++i) {
        out.clear();
        b2.tick(p, now, &out, &actions);
        now += 10ull * 1000000ull;
    }
    CHECK(std::fabs(b2.cursor_x() - 4.5) <= 0.3);

    Binding b3;
    b3.set_table(t);
    b3.set_bounds(1000, 800);
    b3.set_cursor(0, 0);
    p.rx = 1;
    now = 0;
    for (int i = 0; i < 200; ++i) {
        out.clear();
        b3.tick(p, now, &out, &actions);
        now += 10ull * 1000000ull;
    }
    CHECK(b3.cursor_x() == 999.0); // clamped to w - 1: no point outside the window
}

// Left stick on Arrows (the default): per-axis hysteresis, 0.5 to press and
// 0.35 to release.
static void test_binding_arrows_stick() {
    MappedTable t; // left_stick=arrows by default
    Binding b;
    b.set_table(t);
    PadState p;
    std::vector<TouchAction> out;
    std::vector<std::string> actions;
    p.lx = 0.6f;
    b.tick(p, 0, &out, &actions);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Key && out[0].scancode == kScanRight &&
          out[0].down);
    out.clear();
    p.lx = 0.4f;
    b.tick(p, 1, &out, &actions);
    CHECK(out.empty());
    out.clear();
    p.lx = 0.3f;
    b.tick(p, 2, &out, &actions);
    CHECK(out.size() == 1 && out[0].scancode == kScanRight && !out[0].down);
    out.clear();
    p.lx = 0;
    p.ly = -0.9f;
    b.tick(p, 3, &out, &actions);
    CHECK(out.size() == 1 && out[0].scancode == kScanUp && out[0].down);
}

// A racing diagonal steers without overriding separately held face buttons.
static void test_binding_horizontal_arrows() {
    MappedTable table;
    std::string error;
    CHECK(
        parse_mapped("left_stick=horizontal_arrows;cross=key:Up;square=key:Down", &table, &error));
    MappedTable copy;
    CHECK(parse_mapped(write_mapped(table), &copy, &error));
    CHECK(copy.left == StickMode::HorizontalArrows);
    Binding binding;
    binding.set_table(copy);
    PadState pad;
    std::vector<TouchAction> out;
    std::vector<std::string> actions;
    pad.ly = -1;
    binding.tick(pad, 0, &out, &actions);
    CHECK(out.empty()); // vertical motion cannot accelerate
    pad.buttons = uint16_t(1u << int(PadButton::Cross));
    binding.tick(pad, 1, &out, &actions);
    CHECK(out.size() == 1 && out[0].scancode == kScanUp && out[0].down);
    out.clear();
    pad.lx = -1;
    pad.ly = 1;
    binding.tick(pad, 2, &out, &actions);
    CHECK(out.size() == 1 && out[0].scancode == kScanLeft && out[0].down);
    out.clear();
    pad.lx = 0;
    binding.tick(pad, 3, &out, &actions);
    CHECK(out.size() == 1 && out[0].scancode == kScanLeft && !out[0].down);
    out.clear();
    pad.buttons = uint16_t(1u << int(PadButton::Square));
    binding.tick(pad, 4, &out, &actions);
    CHECK(out.size() == 2 && out[0].scancode == kScanUp && !out[0].down &&
          out[1].scancode == kScanDown && out[1].down);
    out.clear();
    pad = {};
    binding.tick(pad, 5, &out, &actions);
    CHECK(out.size() == 1 && out[0].scancode == kScanDown && !out[0].down);
}

// Two fingers must survive the complete router -> mapped binding path, not
// just work when a test constructs an already-combined PadState. Exercise
// both press orders and both release orders on the shipped tablet layouts.
static void test_tablet_simultaneous_controls() {
    struct HeldKeys : ControlsSink {
        bool keys[512]{};
        void key(int scancode, bool down) override {
            CHECK(scancode > 0 && scancode < 512);
            if (scancode > 0 && scancode < 512)
                keys[scancode] = down;
        }
        void action(const std::string &) override {}
        void switch_layout(const std::string &) override {}
        void group_visibility_changed() override {}
        void tap() override {}
    };
    struct Input {
        Kind kind;
        int id;
        int key;
        int direction = 0; // stick x, in full travel radii
    };
    struct Pair {
        const char *layout;
        Input inputs[2];
    };
    const Pair pairs[] = {
        {"keys", {{Kind::Key, kScanUp, kScanUp}, {Kind::Key, kScanLeft, kScanLeft}}},
        {"keys", {{Kind::Key, kScanW, kScanW}, {Kind::Key, kScanA, kScanA}}},
        {"keys", {{Kind::Key, kScanLShift, kScanLShift}, {Kind::Key, kScanA, kScanA}}},
        {"pad",
         {{Kind::Button, int(PadButton::Cross), kScanUp},
          {Kind::Button, int(PadButton::Square), kScanDown}}},
        {"pad",
         {{Kind::Button, int(PadButton::Cross), kScanUp},
          {Kind::Button, int(PadButton::Circle), kScanSpace}}},
        {"pad", {{Kind::Button, int(PadButton::Cross), kScanUp}, {Kind::Stick, 0, kScanLeft, -1}}},
        {"pad", {{Kind::Button, int(PadButton::Cross), kScanUp}, {Kind::Stick, 0, kScanRight, 1}}},
        {"pad",
         {{Kind::Button, int(PadButton::Square), kScanDown}, {Kind::Stick, 0, kScanLeft, -1}}},
    };
    const Screen s = screen(2420, 1668, 2.0);
    for (const Pair &pair : pairs)
        for (int first_down : {0, 1})
            for (int first_up : {0, 1}) {
                Layout layout;
                std::string error;
                CHECK(parse_layout(builtin_layout(pair.layout, Form::Tablet), &layout, &error));
                Router router;
                HeldKeys sink;
                router.set_layout(&layout, sink);
                router.set_screen(s);
                MappedTable table;
                CHECK(parse_mapped("left_stick=horizontal_arrows;cross=key:Up;"
                                   "square=key:Down;circle=key:Space",
                                   &table, &error));
                Binding binding;
                binding.set_table(table);
                uint64_t now = 0;
                auto pump = [&] {
                    std::vector<TouchAction> output;
                    std::vector<std::string> actions;
                    binding.tick(router.pad(), now, &output, &actions);
                    for (const auto &a : output)
                        if (a.kind == TouchAction::Key)
                            sink.key(a.scancode, a.down);
                    now += 10000000;
                };
                auto press = [&](int index) {
                    const Input &input = pair.inputs[index];
                    for (int g = 0; g < int(layout.groups.size()); ++g)
                        for (int c = 0; c < int(layout.groups[g].controls.size()); ++c) {
                            const Control &ctl = layout.groups[g].controls[c];
                            if (ctl.kind != input.kind)
                                continue;
                            const int id = ctl.kind == Kind::Key      ? ctl.scancode
                                           : ctl.kind == Kind::Button ? int(ctl.button)
                                                                      : ctl.stick;
                            if (id != input.id)
                                continue;
                            double x, y;
                            center(layout, g, c, s, &x, &y);
                            CHECK(router.finger_down(index + 1, x, y, now, sink));
                            if (input.direction)
                                CHECK(router.finger_motion(index + 1,
                                                           x + input.direction * ctl.radius *
                                                                   layout.scale * s.scale,
                                                           y, now, sink));
                            pump();
                            return;
                        }
                    CHECK(false); // every requested control must exist in the built-in
                };
                press(first_down);
                CHECK(sink.keys[pair.inputs[first_down].key]);
                CHECK(!sink.keys[pair.inputs[1 - first_down].key]);
                press(1 - first_down);
                // Hold through many host pumps; neither input may cancel the other.
                for (int i = 0; i < 60; ++i) {
                    pump();
                    CHECK(sink.keys[pair.inputs[0].key] && sink.keys[pair.inputs[1].key]);
                }
                CHECK(router.finger_up(first_up + 1, now, sink));
                pump();
                CHECK(!sink.keys[pair.inputs[first_up].key]);
                CHECK(sink.keys[pair.inputs[1 - first_up].key]);
                CHECK(router.finger_up(2 - first_up, now, sink));
                pump();
                for (bool held : sink.keys)
                    CHECK(!held);
                CHECK(router.pad() == PadState());
            }
}

// l1 = wheel_up: one Wheel(+1) per press, nothing on release.
static void test_binding_wheel_button() {
    MappedTable t;
    std::string err;
    CHECK(parse_mapped("l1=wheel_up", &t, &err));
    Binding b;
    b.set_table(t);
    PadState p;
    p.buttons = kPadL1;
    std::vector<TouchAction> out;
    std::vector<std::string> actions;
    b.tick(p, 0, &out, &actions);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Wheel && out[0].wheel == 1);
    out.clear();
    p.buttons = 0;
    b.tick(p, 1, &out, &actions);
    CHECK(out.empty());
}

// ps = action:settings: the action name once per press, nothing on release.
static void test_binding_action_button() {
    MappedTable t;
    std::string err;
    CHECK(parse_mapped("ps=action:settings", &t, &err));
    Binding b;
    b.set_table(t);
    PadState p;
    p.buttons = kPadPs;
    std::vector<TouchAction> out;
    std::vector<std::string> actions;
    b.tick(p, 0, &out, &actions);
    CHECK(actions.size() == 1 && actions[0] == "settings");
    actions.clear();
    b.tick(p, 1, &out, &actions); // held: no repeat
    CHECK(actions.empty());
    p.buttons = 0;
    b.tick(p, 2, &out, &actions); // release: nothing
    CHECK(actions.empty());
}

// Scroll mode taps the arrow key once per whole kTouchPanStep accumulated.
static void test_binding_scroll_stick() {
    MappedTable t;
    std::string err;
    CHECK(parse_mapped("left_stick=scroll", &t, &err));
    Binding b;
    b.set_table(t);
    PadState p;
    p.lx = 1;
    std::vector<TouchAction> out;
    std::vector<std::string> actions;
    uint64_t now = 0;
    int right_taps = 0;
    for (int i = 0; i < 100; ++i) {
        out.clear();
        b.tick(p, now, &out, &actions);
        for (const TouchAction &a : out)
            if (a.kind == TouchAction::Key && a.scancode == kScanRight && a.down)
                ++right_taps;
        now += 10ull * 1000000ull;
    }
    CHECK(right_taps >= 18 && right_taps <= 22);
}

// release_all lets go of every key and mouse button the binding is holding.
static void test_binding_release_all() {
    MappedTable t; // left_stick=arrows by default
    t.buttons[int(PadButton::Cross)] = Target{Target::Mouse, 0, ""};
    Binding b;
    b.set_table(t);
    b.set_cursor(0, 0);
    PadState p;
    p.buttons = kPadCross;
    p.lx = 1;
    std::vector<TouchAction> out;
    std::vector<std::string> actions;
    b.tick(p, 0, &out, &actions);
    out.clear();
    b.release_all(&out);
    bool key_right_up = false, mouse_left_up = false;
    for (const TouchAction &a : out) {
        if (a.kind == TouchAction::Key && a.scancode == kScanRight && !a.down)
            key_right_up = true;
        if (a.kind == TouchAction::Button && a.button == 0 && !a.down)
            mouse_left_up = true;
    }
    CHECK(key_right_up && mouse_left_up);
}

// The cursor starts unknown; the first set_bounds (no set_cursor yet, as
// happens the first time the host reports the window's size) centres it, so
// a button press with no prior pointer event still lands somewhere sane
// rather than at (0, 0). Bounds 1000x800 centre at (499.5, 399.5), the
// midpoint of [0, 999] x [0, 799].
static void test_binding_cursor_starts_centred() {
    MappedTable t; // cross=mouse_left by default
    Binding b;
    b.set_table(t);
    b.set_bounds(1000, 800); // no set_cursor call at all
    PadState p;
    p.buttons = kPadCross;
    std::vector<TouchAction> out;
    std::vector<std::string> actions;
    b.tick(p, 0, &out, &actions);
    CHECK(out.size() == 2);
    CHECK(out[0].kind == TouchAction::Motion && out[0].x == 499.5 && out[0].y == 399.5);
    CHECK(out[1].kind == TouchAction::Button && out[1].button == 0 && out[1].down);
}

// left_stick=arrows and dpad=arrows both alias onto the Right key (the
// defaults do exactly this): held_keys_ is ref-counted, so the key stays
// down until every source holding it lets go, not just the first to release.
static void test_binding_aliased_key_is_ref_counted() {
    MappedTable t; // left_stick=arrows, dpad=arrows by default
    Binding b;
    b.set_table(t);
    PadState p;
    std::vector<TouchAction> out;
    std::vector<std::string> actions;

    p.lx = 1; // stick right: one Down
    b.tick(p, 0, &out, &actions);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Key && out[0].scancode == kScanRight &&
          out[0].down);

    out.clear();
    p.hat = kHatRight; // dpad-right too, same key: already held, no second Down
    b.tick(p, 1, &out, &actions);
    CHECK(out.empty());

    out.clear();
    p.hat = 0; // dpad-right released: the stick still holds it, no Up
    b.tick(p, 2, &out, &actions);
    CHECK(out.empty());

    out.clear();
    p.lx = 0; // the stick returns to neutral: now it releases
    b.tick(p, 3, &out, &actions);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Key && out[0].scancode == kScanRight &&
          !out[0].down);
}

// Two pad buttons mapped to mouse_left: the mouse button stays down until
// both are released, not just the first.
static void test_binding_aliased_mouse_button_is_ref_counted() {
    MappedTable t;
    t.buttons[int(PadButton::Cross)] = Target{Target::Mouse, 0, ""};
    t.buttons[int(PadButton::Circle)] = Target{Target::Mouse, 0, ""};
    Binding b;
    b.set_table(t);
    b.set_bounds(1000, 800);
    b.set_cursor(50, 50);
    PadState p;
    std::vector<TouchAction> out;
    std::vector<std::string> actions;

    p.buttons = kPadCross;
    b.tick(p, 0, &out, &actions);
    CHECK(out.size() == 2); // Motion + Button down

    out.clear();
    p.buttons |= kPadCircle; // already held: no second Motion/Button
    b.tick(p, 1, &out, &actions);
    CHECK(out.empty());

    out.clear();
    p.buttons &= ~kPadCross; // circle still holds it: no Up
    b.tick(p, 2, &out, &actions);
    CHECK(out.empty());

    out.clear();
    p.buttons &= ~kPadCircle; // both released: now it lifts
    b.tick(p, 3, &out, &actions);
    CHECK(out.size() == 1 && out[0].kind == TouchAction::Button && out[0].button == 0 &&
          !out[0].down);
}

// After release_all, a button release_all forced up but the pad still holds
// does not re-fire until the pad itself reports it released: a one-shot
// Action target must not repeat every tick just because release_all reset
// the internal edge state.
static void test_binding_release_all_latches_still_held_buttons() {
    MappedTable t; // ps=action:settings by default
    Binding b;
    b.set_table(t);
    PadState p;
    p.buttons = kPadPs;
    std::vector<TouchAction> out;
    std::vector<std::string> actions;

    b.tick(p, 0, &out, &actions);
    CHECK(actions.size() == 1 && actions[0] == "settings");

    out.clear();
    b.release_all(&out);

    actions.clear();
    b.tick(p, 1, &out, &actions); // ps is still held: must not re-fire
    CHECK(actions.empty());
    b.tick(p, 2, &out, &actions); // still held on a later tick: still nothing
    CHECK(actions.empty());

    p.buttons = 0;
    b.tick(p, 3, &out, &actions); // now the pad reports it released
    CHECK(actions.empty());

    actions.clear();
    p.buttons = kPadPs; // a fresh press fires normally again
    b.tick(p, 4, &out, &actions);
    CHECK(actions.size() == 1 && actions[0] == "settings");
}

// The rumble decision's whole truth table: a connected controller always
// wins (it has its own motors), the device motor only stands in when there
// is no controller, and neither leaves nothing to rumble.
static void test_rumble_sink_truth_table() {
    CHECK(rumble_sink(true, true) == RumbleSink::Controller);
    CHECK(rumble_sink(true, false) == RumbleSink::Controller);
    CHECK(rumble_sink(false, true) == RumbleSink::Device);
    CHECK(rumble_sink(false, false) == RumbleSink::None);
}

// Portrait on a phone: the space below the game image is the controls area.
// Landscape, or a game image that fills the drawable, has none.
static void test_controls_area_below_the_game() {
    const Rect game{0, 141, 1170, 878};
    const Rect a = controls_area_below(1170, 2532, game, 102);
    CHECK(a.x == 0 && a.y == 141 + 878 && a.w == 1170 && a.h == 2532 - (141 + 878) - 102);
    CHECK(controls_area_below(2532, 1170, Rect{0, 0, 2532, 1170}, 0).empty());
    CHECK(controls_area_below(1170, 2532, Rect{0, 0, 1170, 2532}, 102).empty());
    CHECK(controls_area_below(1170, 2532, Rect{}, 102).empty());
}

// Every touch in the controls area belongs to the controls, even between
// them; a touch outside it that hits no control still goes to the game.
static void test_router_claims_the_controls_area() {
    Layout l = keys_layout();
    const Screen s = screen(1180, 820, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);
    // A point no control covers, inside the claim area, and another outside it.
    CHECK(hit_test(l, s, 590, 20).group < 0);
    CHECK(hit_test(l, s, 590, 300).group < 0);
    CHECK(!r.finger_down(1, 590, 20, 0, rec));
    r.set_claim_area(Rect{0, 0, 1180, 100});
    CHECK(r.finger_down(2, 590, 20, 0, rec));
    CHECK(r.owns(2));
    CHECK(rec.calls.empty()); // claimed, and does nothing
    CHECK(r.finger_motion(2, 600, 30, 5, rec));
    CHECK(r.finger_up(2, 10, rec));
    CHECK(!r.owns(2));
    CHECK(rec.calls.empty());
    CHECK(!r.finger_down(3, 590, 590, 20, rec)); // outside the area: the game's
    CHECK(r.finger_down(4, 590, 20, 30, rec));
    CHECK(r.finger_cancel(4, rec));
    CHECK(r.finger_down(5, 590, 20, 40, rec));
    r.cancel_all(rec);
    CHECK(!r.owns(5));
    CHECK(rec.calls.empty());
    // A control inside the area still works as a control.
    double x, y;
    center(l, 1, find_key(l, 1, kScanSpace), s, &x, &y);
    r.set_claim_area(Rect{0, 0, 1180, 820});
    CHECK(r.finger_down(6, x, y, 50, rec));
    CHECK((rec.calls == std::vector<std::string>{"k44+", "tap"}));
    r.set_claim_area(Rect{});
    CHECK(!r.finger_down(7, 590, 20, 60, rec));
}

// make_view copies the controls area, and a new area is a new raster.
static void test_make_view_carries_the_controls_area() {
    Layout l = keys_layout();
    Screen s = screen(1170, 2532, 3.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);
    const uint64_t rev = make_view(l, r, s, 1.0).revision;
    s.controls_area = Rect{0, 1019, 1170, 1411};
    const ControlsView v = make_view(l, r, s, 1.0);
    CHECK(v.controls_area.x == 0 && v.controls_area.y == 1019 && v.controls_area.w == 1170 &&
          v.controls_area.h == 1411);
    CHECK(v.revision != rev);
}

// A stick with no "radius" travels half its zone, never zero.
static void test_stick_without_radius_uses_half_its_zone() {
    Layout l;
    std::string err;
    CHECK(parse_layout(R"({"version": 1, "name": "z", "groups": [{"id": "g", "controls": [
        {"kind": "stick", "zone": [200, 120]}]}]})",
                       &l, &err));
    const Control &c = l.groups[0].controls[0];
    CHECK(c.w == 200 && c.h == 120 && c.radius == 60);
}

// --- Pad art and the built-in layouts ---------------------------------------

static DrawControl pad_control(Kind kind, PadButton button, int w, int h) {
    DrawControl d;
    d.kind = kind;
    d.button = button;
    d.rect = Rect{0, 0, w, h};
    d.radius_px = std::min(w, h) / 2;
    d.floating = false;
    return d;
}

static void test_pad_art_cross_button() {
    DrawControl d = pad_control(Kind::Button, PadButton::Cross, 128, 128);
    std::vector<uint8_t> px(128 * 128 * 4, 0);
    Canvas c(px, 128, 128);
    paint_control(c, d, 0, 0);
    CHECK(c.at(64, 64).a > 0);
    // Somewhere on the down-right diagonal the glyph's blue shows.
    bool blue = false;
    for (int t = 4; t <= 26 && !blue; ++t) {
        const Rgba p = c.at(64 + t, 64 + t);
        blue = p.a > 0 && p.b > p.r + 40;
    }
    CHECK(blue);

    // Pressed brightens the fill at a point clear of the glyph and the rim.
    const Rgba idle = c.at(64, 105);
    std::vector<uint8_t> px2(128 * 128 * 4, 0);
    Canvas c2(px2, 128, 128);
    d.pressed = true;
    paint_control(c2, d, 0, 0);
    const Rgba lit = c2.at(64, 105);
    CHECK(idle.a > 0 && lit.a > 0);
    CHECK(lit.r > idle.r + 20 && lit.g > idle.g + 20 && lit.b > idle.b + 20);
}

// Every pad kind paints something inside its own rect and nothing outside it
// (up to the one-pixel far edge Canvas's corner sampling may touch).
static void test_pad_art_stays_in_its_rect() {
    const Kind kinds[] = {Kind::Button, Kind::Button, Kind::Button, Kind::Button,
                          Kind::Dpad,   Kind::Stick,  Kind::Action};
    const PadButton buttons[] = {PadButton::Triangle, PadButton::L2,    PadButton::Select,
                                 PadButton::Ps,       PadButton::Cross, PadButton::Cross,
                                 PadButton::Cross};
    for (int i = 0; i < 7; ++i) {
        DrawControl d = pad_control(kinds[i], buttons[i], 80, 60);
        d.rect = Rect{20, 20, 80, 60};
        d.label = kinds[i] == Kind::Action ? "MENU" : "";
        std::vector<uint8_t> px(120 * 100 * 4, 0);
        Canvas c(px, 120, 100);
        paint_control(c, d, 0, 0);
        int inside = 0, outside = 0;
        for (int y = 0; y < 100; ++y)
            for (int x = 0; x < 120; ++x)
                if (c.at(x, y).a) {
                    // Canvas samples from a pixel's own corner, so a shape
                    // ending exactly on the far edge may touch that pixel.
                    const Rect edge{d.rect.x, d.rect.y, d.rect.w + 1, d.rect.h + 1};
                    const bool in = edge.contains(x, y);
                    (in ? inside : outside)++;
                    if (!in && outside == 1)
                        fprintf(stderr, "  kind %d: paint at %d,%d\n", i, x, y);
                }
        CHECK(inside > 0);
        CHECK(outside == 0);
    }
    // The knob fills its own small canvas around its centre.
    std::vector<uint8_t> px(128 * 128 * 4, 0);
    Canvas c(px, 128, 128);
    paint_knob(c, 64, 64, 64, true);
    CHECK(c.at(64, 64).a == 255 && c.at(1, 1).a == 0);
}

// Rects overlap when they share an interior point (touching is fine).
static bool overlaps(const Rect &a, const Rect &b) {
    return a.x < b.x + b.w && b.x < a.x + a.w && a.y < b.y + b.h && b.y < a.y + a.h;
}

// Every built-in parses, fits a 1180x820 pt screen with every group shown,
// and no two non-key controls overlap each other or a keyboard half.
static void test_builtin_layouts_fit_and_do_not_overlap() {
    for (const char *name : {"pad", "keys", "pad+keys"}) {
        const char *text = builtin_layout(name, Form::Tablet);
        CHECK(text != nullptr);
        if (!text)
            continue;
        Layout l;
        std::string err;
        CHECK(parse_layout(text, &l, &err));
        CHECK(l.name == name);
        const Screen s = screen(1180, 820, 1.0);
        const Rect all{0, 0, 1180, 820};
        std::vector<Rect> pads, grids;
        for (int g = 0; g < int(l.groups.size()); ++g) {
            if (l.groups[g].has_grid) {
                const Rect b = group_rect(l, g, s);
                CHECK(b.x >= 0 && b.y >= 0 && b.x + b.w <= all.w && b.y + b.h <= all.h);
                grids.push_back(b);
            }
            for (int c = 0; c < int(l.groups[g].controls.size()); ++c) {
                const Rect r = control_rect(l, g, c, s);
                const bool fits =
                    !r.empty() && r.x >= 0 && r.y >= 0 && r.x + r.w <= all.w && r.y + r.h <= all.h;
                if (!fits)
                    fprintf(stderr, "  %s group %d control %d at %d,%d %dx%d\n", name, g, c, r.x,
                            r.y, r.w, r.h);
                CHECK(fits);
                const Control &ctl = l.groups[g].controls[c];
                if (ctl.kind == Kind::Stick)
                    CHECK(ctl.radius > 0);
                if (ctl.kind != Kind::Key)
                    pads.push_back(r);
            }
        }
        for (size_t i = 0; i < pads.size(); ++i) {
            for (size_t j = i + 1; j < pads.size(); ++j) {
                if (overlaps(pads[i], pads[j]))
                    fprintf(stderr, "  %s: pad controls %zu and %zu overlap\n", name, i, j);
                CHECK(!overlaps(pads[i], pads[j]));
            }
            for (const Rect &b : grids)
                CHECK(!overlaps(pads[i], b));
        }
    }
    // The pad is translucent by default; the keyboard stays opaque.
    Layout pad, keys;
    std::string err;
    CHECK(parse_layout(builtin_layout("pad", Form::Tablet), &pad, &err) && pad.opacity == 0.7);
    CHECK(parse_layout(builtin_layout("keys", Form::Tablet), &keys, &err) && keys.opacity == 1.0);
    const Control &cycle = keys.groups[2].controls[2];
    CHECK(cycle.kind == Kind::Toggle && cycle.target == "next" && cycle.label == "PAD");
}

// The two phone reference screens the built-ins are drawn for: a 844x390 pt
// landscape phone with 47 pt side insets (a notch on its left in landscape),
// and a 390x844 pt portrait one whose controls area is what is left below a
// 4:3 game drawn at full width under a 59 pt top inset.
static Screen phone_landscape_screen() {
    Screen s = screen(844, 390, 1.0);
    s.safe = {47, 0, 844 - 2 * 47, 390};
    return s;
}

static Screen phone_portrait_screen() {
    Screen s = screen(390, 844, 1.0);
    s.safe = {0, 59, 390, 844 - 59};
    const Rect game{0, 59, 390, int(lround(390 * 3.0 / 4.0))};
    s.controls_area = controls_area_below(s.dw, s.dh, game, 0);
    return s;
}

// Every control of `l` sits inside the rectangle its anchors resolve in, no
// two non-key controls share an interior point, and every grid group's box
// fits too. `min_key_w` (0 for none) is the smallest key width allowed.
static void check_layout_fits(const char *what, const Layout &l, const Screen &s, int min_key_w) {
    const Rect area = anchor_area(l, s);
    CHECK(!area.empty());
    std::vector<Rect> pads, grids;
    for (int g = 0; g < int(l.groups.size()); ++g) {
        if (l.groups[g].has_grid) {
            const Rect b = group_rect(l, g, s);
            const bool fits = b.x >= area.x && b.y >= area.y && b.x + b.w <= area.x + area.w &&
                              b.y + b.h <= area.y + area.h;
            if (!fits)
                fprintf(stderr, "  %s group %d box at %d,%d %dx%d outside %d,%d %dx%d\n", what, g,
                        b.x, b.y, b.w, b.h, area.x, area.y, area.w, area.h);
            CHECK(fits);
            grids.push_back(b);
        }
        for (int c = 0; c < int(l.groups[g].controls.size()); ++c) {
            const Rect r = control_rect(l, g, c, s);
            const bool fits = !r.empty() && r.x >= area.x && r.y >= area.y &&
                              r.x + r.w <= area.x + area.w && r.y + r.h <= area.y + area.h;
            if (!fits)
                fprintf(stderr, "  %s group %d control %d at %d,%d %dx%d outside %d,%d %dx%d\n",
                        what, g, c, r.x, r.y, r.w, r.h, area.x, area.y, area.w, area.h);
            CHECK(fits);
            const Control &ctl = l.groups[g].controls[c];
            if (ctl.kind == Kind::Stick)
                CHECK(ctl.radius > 0);
            if (ctl.kind == Kind::Key) {
                if (min_key_w > 0 && r.w < min_key_w)
                    fprintf(stderr, "  %s group %d control %d is %d wide\n", what, g, c, r.w);
                if (min_key_w > 0)
                    CHECK(r.w >= min_key_w);
            } else {
                pads.push_back(r);
            }
        }
    }
    for (size_t i = 0; i < pads.size(); ++i) {
        for (size_t j = i + 1; j < pads.size(); ++j) {
            if (overlaps(pads[i], pads[j]))
                fprintf(stderr,
                        "  %s: pad controls %zu (%d,%d %dx%d) and %zu (%d,%d %dx%d) "
                        "overlap\n",
                        what, i, pads[i].x, pads[i].y, pads[i].w, pads[i].h, j, pads[j].x,
                        pads[j].y, pads[j].w, pads[j].h);
            CHECK(!overlaps(pads[i], pads[j]));
        }
        for (const Rect &b : grids)
            CHECK(!overlaps(pads[i], b));
    }
}

// Every built-in exists for both phone forms, parses, fits its reference
// screen (the whole safe area in landscape, the controls area below the game
// in portrait) and keeps its pad controls apart. Portrait keys stay thumb
// sized (30 pt or wider) and portrait layouts keep their safe inset.
static void test_phone_builtin_layouts_fit_and_do_not_overlap() {
    for (const Form form : {Form::PhoneLandscape, Form::PhonePortrait}) {
        const Screen s =
            form == Form::PhoneLandscape ? phone_landscape_screen() : phone_portrait_screen();
        for (const char *name : {"pad", "keys", "pad+keys"}) {
            const char *text = builtin_layout(name, form);
            CHECK(text != nullptr);
            if (!text)
                continue;
            Layout l;
            std::string err;
            const bool parsed = parse_layout(text, &l, &err);
            if (!parsed)
                fprintf(stderr, "  %s %s: %s\n", form_name(form), name, err.c_str());
            CHECK(parsed);
            CHECK(l.name == name);
            std::string what = std::string(form_name(form)) + " " + name;
            if (form == Form::PhonePortrait)
                CHECK(l.safe_inset);
            check_layout_fits(what.c_str(), l, s, form == Form::PhonePortrait ? 30 : 0);
            // Each layout can be cycled away from.
            bool cycles = false;
            for (const Group &g : l.groups)
                for (const Control &c : g.controls)
                    if (c.kind == Kind::Toggle && c.target == "next")
                        cycles = true;
            CHECK(cycles);
        }
        // The pad stays translucent on phones too.
        Layout pad;
        std::string err;
        CHECK(parse_layout(builtin_layout("pad", form), &pad, &err) && pad.opacity == 0.7);
    }
}

// The hidden-group bits are stored per layout name, so a layout with fewer
// groups than the one they were written for must not inherit a bit that
// would hide a group it does have; clamp_hidden_bits drops the bits past the
// end and leaves the rest alone.
static void test_hidden_bits_are_clamped_to_the_group_count() {
    CHECK(clamp_hidden_bits(0x7, 3) == 0x7);
    CHECK(clamp_hidden_bits(0x7, 2) == 0x3);
    CHECK(clamp_hidden_bits(0x6, 1) == 0x0);
    CHECK(clamp_hidden_bits(0xffffffffu, 0) == 0);
    CHECK(clamp_hidden_bits(0xffffffffu, 64) == 0xffffu); // only 16 bits are stored

    // Landscape "keys" is two halves and a tab row; portrait is one board
    // and a tab row, so the landscape bit for the right half would land on
    // the portrait tab row. It is dropped, and the board's bit survives.
    Layout land, port;
    std::string err;
    CHECK(parse_layout(builtin_layout("keys", Form::PhoneLandscape), &land, &err));
    CHECK(parse_layout(builtin_layout("keys", Form::PhonePortrait), &port, &err));
    CHECK(land.groups.size() == 3 && port.groups.size() == 2);
    CHECK(hidden_bits_for(land, 0x3) == 0x3); // both halves hidden
    CHECK(hidden_bits_for(land, 0x7) == 0x3); // never the tab row
    CHECK(hidden_bits_for(port, 0x3) == 0x1); // the board, not the tabs
    CHECK(hidden_bits_for(port, 0x4) == 0x0); // nothing past the last group
}

// Every group a toggle can hide in one form of a built-in name.
static uint32_t toggle_reachable_bits(const Layout &l) {
    uint32_t bits = 0;
    for (size_t i = 0; i < l.groups.size() && i < kHiddenBits; ++i)
        for (const Group &g : l.groups)
            for (const Control &c : g.controls)
                if (c.kind == Kind::Toggle && c.target == l.groups[i].id)
                    bits |= 1u << i;
    return bits;
}

// Rotating carries the hidden-group bits, which belong to the layout name,
// into a layout whose groups may be different ones. Whatever a player can
// hide in one form must, in every other form of that name, either survive as
// a group with its own tab or be dropped by hidden_bits_for: a bit that hides
// a group no toggle targets would strand the player there.
static void test_a_hidden_group_survives_a_rotation() {
    for (const char *name : {"pad", "keys", "pad+keys"}) {
        for (const Form from : {Form::Tablet, Form::PhoneLandscape, Form::PhonePortrait}) {
            Layout a;
            std::string err;
            CHECK(parse_layout(builtin_layout(name, from), &a, &err));
            const uint32_t reachable = toggle_reachable_bits(a);
            for (const Form to : {Form::Tablet, Form::PhoneLandscape, Form::PhonePortrait}) {
                if (to == from)
                    continue;
                Layout b;
                CHECK(parse_layout(builtin_layout(name, to), &b, &err));
                const uint32_t recoverable = toggle_reachable_bits(b);
                for (size_t i = 0; i < kHiddenBits; ++i) {
                    const uint32_t bit = 1u << i;
                    if (!(reachable & bit))
                        continue;
                    const bool kept = (hidden_bits_for(b, bit) & bit) != 0;
                    if (kept && !(recoverable & bit))
                        fprintf(stderr,
                                "  %s: group %zu hidden in %s stays hidden in %s with no tab\n",
                                name, i, form_name(from), form_name(to));
                    CHECK(!kept || (recoverable & bit) != 0);
                }
            }
        }
    }
    // The case the rule exists for, both ways round: pad+keys' key group is
    // group 0 in every form, and every form can put it back.
    Layout land, port;
    std::string err;
    CHECK(parse_layout(builtin_layout("pad+keys", Form::PhoneLandscape), &land, &err));
    CHECK(parse_layout(builtin_layout("pad+keys", Form::PhonePortrait), &port, &err));
    CHECK((toggle_reachable_bits(land) & 1u) != 0);
    CHECK((toggle_reachable_bits(port) & 1u) != 0);
    CHECK(hidden_bits_for(land, 0x1) == 0x1 && hidden_bits_for(port, 0x1) == 0x1);
}

// Hiding the keyboard must not hide the sticks/buttons after cycling to pad:
// the saved visibility bits are shared by layouts within each form factor.
static void test_hidden_keyboard_does_not_hide_pad_after_switch() {
    for (const Form form : {Form::Tablet, Form::PhoneLandscape, Form::PhonePortrait}) {
        for (const char *name : {"keys", "pad+keys"}) {
            Layout keyboard, pad;
            std::string error;
            CHECK(parse_layout(builtin_layout(name, form), &keyboard, &error));
            CHECK(parse_layout(builtin_layout("pad", form), &pad, &error));
            const uint32_t saved = toggle_reachable_bits(keyboard);
            CHECK(saved != 0);
            CHECK(hidden_bits_for(pad, saved) == 0);
            // Cycling back still restores the player's hidden keyboard halves.
            CHECK(hidden_bits_for(keyboard, saved) == saved);
        }
    }
}

// A held stick's knob is its own quad, so moving it keeps the layer revision; a
// button press, the dpad's hat and a floating base's move are drawn, so
// they change it. radius_px follows the layout and screen scale.
static void test_make_view_pad_revision() {
    Layout l;
    std::string err;
    CHECK(parse_layout(builtin_layout("pad", Form::Tablet), &l, &err));
    const Screen s = screen(2360, 1640, 2.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);
    ControlsView v = make_view(l, r, s, 1.0);
    int stick = -1, dpad = -1, cross = -1;
    for (int i = 0; i < int(v.controls.size()); ++i) {
        const DrawControl &d = v.controls[i];
        if (d.kind == Kind::Stick && stick < 0)
            stick = i;
        if (d.kind == Kind::Dpad)
            dpad = i;
        if (d.kind == Kind::Button && d.button == PadButton::Cross)
            cross = i;
    }
    CHECK(stick >= 0 && dpad >= 0 && cross >= 0);
    if (stick < 0 || dpad < 0 || cross < 0)
        return;
    CHECK(v.controls[stick].radius_px == 220); // 110 pt at 2x
    const Rect sr = v.controls[stick].rect;
    const uint64_t idle = v.revision;

    CHECK(r.finger_down(1, sr.x + 100, sr.y + 100, 0, rec));
    const ControlsView held_view = make_view(l, r, s, 1.0);
    const uint64_t held = held_view.revision;
    CHECK(held != idle); // the base moved to the finger and lit
    CHECK(r.finger_motion(1, sr.x + 300, sr.y + 100, 1, rec));
    v = make_view(l, r, s, 1.0);
    CHECK(v.controls[stick].knob_x > 0.5);
    CHECK(v.revision != held); // publish the moving knob to the presenter
    CHECK(v.controls[stick].base_x == held_view.controls[stick].base_x);
    CHECK(v.controls[stick].base_y == held_view.controls[stick].base_y);
    CHECK(v.controls[stick].rect.x == sr.x && v.controls[stick].rect.y == sr.y);
    for (size_t i = 0; i < v.layers.size(); ++i)
        CHECK(v.layers[i].revision == held_view.layers[i].revision); // reuse every raster
    const uint64_t moved = v.revision;
    CHECK(r.finger_motion(1, sr.x + 300, sr.y + 200, 1, rec));
    v = make_view(l, r, s, 1.0);
    CHECK(v.revision != moved);                            // vertical motion must publish too
    CHECK(make_view(l, r, s, 1.0).revision == v.revision); // stationary: no new view
    CHECK(r.finger_up(1, 2, rec));
    CHECK(make_view(l, r, s, 1.0).revision == idle);

    const Rect dr = v.controls[dpad].rect;
    CHECK(r.finger_down(2, dr.x + dr.w / 2.0, dr.y + 2, 3, rec));
    CHECK(make_view(l, r, s, 1.0).revision != idle);
    CHECK(r.finger_up(2, 4, rec));

    const Rect cr = v.controls[cross].rect;
    CHECK(r.finger_down(3, cr.x + cr.w / 2.0, cr.y + cr.h / 2.0, 5, rec));
    CHECK(make_view(l, r, s, 1.0).revision != idle);
    CHECK(r.finger_up(3, 6, rec));
    CHECK(make_view(l, r, s, 1.0).revision == idle);
}

// `controls_tests --dump <dir>`: renders every built-in through
// paint_overlay, idle and with a few controls held (the held stick's knob
// composited the way Overlay's quad draws it), as raw premultiplied RGBA
// files "<name>-<state>.<form>.<w>x<h>.rgba" for viewing. Each form gets its
// reference screen: an iPad, a 844x390 pt phone in landscape with its side
// insets, and the same phone in portrait, where only the controls area below
// a 4:3 game is drawn.
static void dump_form(const char *dir, Form form, const Screen &s) {
    const int dw = s.dw, dh = s.dh;
    for (const char *name : {"pad", "keys", "pad+keys"}) {
        for (int held = 0; held < 3; ++held) {
            Layout l;
            std::string err;
            if (!builtin_layout(name, form) || !parse_layout(builtin_layout(name, form), &l, &err))
                continue;
            Router r;
            Rec rec;
            r.set_layout(&l, rec);
            r.set_screen(s);
            if (held == 2) {
                r.set_toggles_only(true, rec);
            } else if (held) {
                // Push the first stick up-right, press the first dpad down
                // and every other L2/R2/cross.
                int64_t id = 1;
                for (int g = 0; g < int(l.groups.size()); ++g)
                    for (int c = 0; c < int(l.groups[g].controls.size()); ++c) {
                        const Control &ctl = l.groups[g].controls[c];
                        const Rect cr = control_rect(l, g, c, s);
                        const double cx = cr.x + cr.w / 2.0, cy = cr.y + cr.h / 2.0;
                        if (ctl.kind == Kind::Stick && ctl.stick == 0) {
                            r.finger_down(id, cx + 20, cy + 30, 0, rec);
                            r.finger_motion(id++, cx + 120, cy - 60, 1, rec);
                        } else if (ctl.kind == Kind::Dpad) {
                            r.finger_down(id++, cx, cy + cr.h * 0.4, 0, rec);
                        } else if (ctl.kind == Kind::Button && (ctl.button == PadButton::L2 ||
                                                                ctl.button == PadButton::Cross)) {
                            r.finger_down(id++, cx, cy, 0, rec);
                        }
                    }
            }
            const double opacity = l.opacity;
            const ControlsView v = make_view(l, r, s, opacity);
            std::vector<uint8_t> px(size_t(dw) * dh * 4, 0);
            Canvas c(px, dw, dh, v.opacity);
            paint_overlay(c, v, Rect{0, 0, dw, dh});
            for (const DrawControl &d : v.controls)
                if (d.kind == Kind::Stick && d.pressed)
                    paint_knob(c, d.base_x + d.knob_x * d.radius_px,
                               d.base_y + d.knob_y * d.radius_px, knob_radius(d.radius_px), true);
            char tail[64];
            snprintf(tail, sizeof tail, ".%s.%dx%d.rgba", form_name(form), dw, dh);
            const char *state = held == 2 ? "-auto-hidden" : held ? "-held" : "-idle";
            std::string file = std::string(dir) + "/" + name + state + tail;
            for (char &ch : file)
                if (ch == '+')
                    ch = '_';
            write_file(file, std::string(px.begin(), px.end()));
            printf("wrote %s\n", file.c_str());
        }
    }
}

// Defined below, with the editor's own tests and their helpers.
static void dump_editor(const char *dir, const Screen &s);

static void dump_builtins(const char *dir) {
    dump_form(dir, Form::Tablet, screen(2360, 1640, 2.0));
    Screen land = screen(1688, 780, 2.0);
    land.safe = {94, 0, 1688 - 2 * 94, 780};
    dump_form(dir, Form::PhoneLandscape, land);
    Screen port = screen(780, 1688, 2.0);
    port.safe = {0, 118, 780, 1688 - 118};
    port.controls_area = controls_area_below(port.dw, port.dh, Rect{0, 118, 780, 585}, 0);
    dump_form(dir, Form::PhonePortrait, port);
    dump_editor(dir, screen(2360, 1640, 2.0));
}

// Each layer's revision follows only its own group: a pad press changes
// one, hiding a keyboard half changes that half's (and its tab's label,
// in the tabs group), never the other half's.
static void test_layer_revisions_are_per_group() {
    Layout l;
    std::string err;
    CHECK(parse_layout(builtin_layout("pad", Form::Tablet), &l, &err));
    const Screen s = screen(2360, 1640, 2.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);
    const ControlsView idle = make_view(l, r, s, 1.0);
    CHECK(idle.layers.size() == l.groups.size() + 1);
    int cross_group = -1, cross = -1;
    for (int g = 0; g < int(l.groups.size()); ++g)
        for (int c = 0; c < int(l.groups[g].controls.size()); ++c)
            if (l.groups[g].controls[c].kind == Kind::Button &&
                l.groups[g].controls[c].button == PadButton::Cross) {
                cross_group = g;
                cross = c;
            }
    CHECK(cross >= 0);
    if (cross < 0)
        return;
    double x, y;
    center(l, cross_group, cross, s, &x, &y);
    CHECK(r.finger_down(1, x, y, 0, rec));
    const ControlsView pressed = make_view(l, r, s, 1.0);
    int changed = 0;
    for (size_t i = 0; i < idle.layers.size(); ++i)
        if (pressed.layers[i].revision != idle.layers[i].revision) {
            ++changed;
            CHECK(int(i) == cross_group + 1);
        }
    CHECK(changed == 1);

    Layout keys = keys_layout();
    Router kr;
    kr.set_layout(&keys, rec);
    kr.set_screen(s);
    const ControlsView shown = make_view(keys, kr, s, 1.0);
    CHECK(shown.layers.size() == 4);
    CHECK(shown.layers[0].rect.empty());
    CHECK(shown.layers[1].rect.w == shown.backdrops[0].w);
    keys.groups[0].visible = false;
    const ControlsView hidden = make_view(keys, kr, s, 1.0);
    CHECK(hidden.layers[0].revision == shown.layers[0].revision);
    CHECK(hidden.layers[1].revision != shown.layers[1].revision); // the left half
    CHECK(hidden.layers[1].rect.empty());
    CHECK(hidden.layers[2].revision == shown.layers[2].revision); // the right half
    CHECK(hidden.layers[3].revision != shown.layers[3].revision); // its tab reads KEYS
}

// A label wider than a small key (Shift on a 30pt key at 2x) drops to the
// 1x font and stays inside the key's 2px margin.
static void test_small_key_label_fits() {
    Layout l = keys_layout();
    l.scale = 30.0 / 36.0;
    const Screen s = screen(2360, 1640, 2.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);
    const ControlsView v = make_view(l, r, s, 1.0);
    const DrawControl *shift = nullptr;
    for (const DrawControl &d : v.controls)
        if (d.label == "Shift")
            shift = &d;
    CHECK(shift != nullptr);
    if (!shift)
        return;
    CHECK(shift->rect.w < 12 * 5 + 4); // too narrow for 2x
    ControlsView one;
    one.controls.push_back(*shift);
    one.controls.back().layer = 0;
    const Rect k = shift->rect;
    const Rect area{k.x - 20, k.y - 20, k.w + 40, k.h + 40};
    std::vector<uint8_t> px(size_t(area.w) * area.h * 4, 0);
    Canvas c(px, area.w, area.h);
    paint_layer(c, one, 0, area);
    int text = 0, outside = 0;
    for (int y = 0; y < area.h; ++y)
        for (int x = 0; x < area.w; ++x) {
            const Rgba p = c.at(x, y);
            if (!p.a)
                continue;
            const double px_ = area.x + x + 0.5, py_ = area.y + y + 0.5;
            if (!k.contains(px_, py_))
                ++outside;
            else if (p.r == 235) {
                ++text;
                // The text keeps the 2px margin inside the key.
                const Rect inner{k.x + 2, k.y + 2, k.w - 4, k.h - 4};
                if (!inner.contains(px_, py_))
                    ++outside;
            }
        }
    CHECK(outside == 0);
    CHECK(text > 0);
}

// --- Physical controllers, auto-hide and rumble routing ---------------------

// pad_from_sdl spells SDL's gamepad enums out to stay SDL-free; keep them honest.
static_assert(int(kSdlPadSouth) == int(SDL_GAMEPAD_BUTTON_SOUTH) &&
              int(kSdlPadEast) == int(SDL_GAMEPAD_BUTTON_EAST) &&
              int(kSdlPadWest) == int(SDL_GAMEPAD_BUTTON_WEST) &&
              int(kSdlPadNorth) == int(SDL_GAMEPAD_BUTTON_NORTH) &&
              int(kSdlPadBack) == int(SDL_GAMEPAD_BUTTON_BACK) &&
              int(kSdlPadGuide) == int(SDL_GAMEPAD_BUTTON_GUIDE) &&
              int(kSdlPadStart) == int(SDL_GAMEPAD_BUTTON_START) &&
              int(kSdlPadLeftStick) == int(SDL_GAMEPAD_BUTTON_LEFT_STICK) &&
              int(kSdlPadRightStick) == int(SDL_GAMEPAD_BUTTON_RIGHT_STICK) &&
              int(kSdlPadLeftShoulder) == int(SDL_GAMEPAD_BUTTON_LEFT_SHOULDER) &&
              int(kSdlPadRightShoulder) == int(SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER) &&
              int(kSdlPadDpadUp) == int(SDL_GAMEPAD_BUTTON_DPAD_UP) &&
              int(kSdlPadDpadDown) == int(SDL_GAMEPAD_BUTTON_DPAD_DOWN) &&
              int(kSdlPadDpadLeft) == int(SDL_GAMEPAD_BUTTON_DPAD_LEFT) &&
              int(kSdlPadDpadRight) == int(SDL_GAMEPAD_BUTTON_DPAD_RIGHT) &&
              int(kSdlPadButtonCount) == int(SDL_GAMEPAD_BUTTON_TOUCHPAD) + 1);
static_assert(int(kSdlAxisLeftX) == int(SDL_GAMEPAD_AXIS_LEFTX) &&
              int(kSdlAxisLeftY) == int(SDL_GAMEPAD_AXIS_LEFTY) &&
              int(kSdlAxisRightX) == int(SDL_GAMEPAD_AXIS_RIGHTX) &&
              int(kSdlAxisRightY) == int(SDL_GAMEPAD_AXIS_RIGHTY) &&
              int(kSdlAxisLeftTrigger) == int(SDL_GAMEPAD_AXIS_LEFT_TRIGGER) &&
              int(kSdlAxisRightTrigger) == int(SDL_GAMEPAD_AXIS_RIGHT_TRIGGER) &&
              int(kSdlAxisCount) == int(SDL_GAMEPAD_AXIS_COUNT));

// SDL's standard mapping onto the pad: face buttons by position, the
// dpad onto the hat, sticks scaled with a small radial dead zone, and
// triggers scaled with the l2/r2 bit past half travel.
static void test_pad_from_sdl() {
    bool buttons[kSdlPadButtonCount] = {};
    int16_t axes[kSdlAxisCount] = {};
    PadState p = pad_from_sdl(buttons, axes);
    CHECK(p == PadState());

    buttons[kSdlPadSouth] = true;
    p = pad_from_sdl(buttons, axes);
    CHECK(p.buttons == kPadCross);
    buttons[kSdlPadSouth] = false;

    // One of each remaining button, checked together.
    const int sdl[] = {kSdlPadEast,         kSdlPadWest,       kSdlPadNorth,
                       kSdlPadBack,         kSdlPadGuide,      kSdlPadStart,
                       kSdlPadLeftStick,    kSdlPadRightStick, kSdlPadLeftShoulder,
                       kSdlPadRightShoulder};
    const uint16_t bits[] = {kPadCircle, kPadSquare, kPadTriangle, kPadSelect, kPadPs,
                             kPadStart,  kPadL3,     kPadR3,       kPadL1,     kPadR1};
    for (size_t i = 0; i < sizeof sdl / sizeof sdl[0]; ++i) {
        bool one[kSdlPadButtonCount] = {};
        one[sdl[i]] = true;
        CHECK(pad_from_sdl(one, axes).buttons == bits[i]);
    }

    buttons[kSdlPadDpadLeft] = true;
    p = pad_from_sdl(buttons, axes);
    CHECK(p.hat == kHatLeft && p.buttons == 0);
    buttons[kSdlPadDpadLeft] = false;
    buttons[kSdlPadDpadUp] = buttons[kSdlPadDpadRight] = true;
    CHECK(pad_from_sdl(buttons, axes).hat == (kHatUp | kHatRight));
    buttons[kSdlPadDpadUp] = buttons[kSdlPadDpadRight] = false;
    buttons[kSdlPadDpadDown] = true;
    CHECK(pad_from_sdl(buttons, axes).hat == kHatDown);
    buttons[kSdlPadDpadDown] = false;

    axes[kSdlAxisLeftX] = 32767;
    p = pad_from_sdl(buttons, axes);
    CHECK(p.lx == 1.0f && p.ly == 0.0f);
    axes[kSdlAxisLeftX] = -32768; // clamped
    CHECK(pad_from_sdl(buttons, axes).lx == -1.0f);
    axes[kSdlAxisLeftX] = 0;

    // Inside the 0.08 radial dead zone both axes read 0; past it they pass through.
    axes[kSdlAxisRightX] = 1500;
    axes[kSdlAxisRightY] = 1500; // |(0.046, 0.046)| = 0.065
    p = pad_from_sdl(buttons, axes);
    CHECK(p.rx == 0.0f && p.ry == 0.0f);
    axes[kSdlAxisRightY] = 16384;
    p = pad_from_sdl(buttons, axes);
    CHECK(std::fabs(p.rx - 1500 / 32767.0f) < 1e-5f && std::fabs(p.ry - 0.5f) < 1e-3f);
    axes[kSdlAxisRightX] = axes[kSdlAxisRightY] = 0;

    axes[kSdlAxisLeftTrigger] = 20000;
    p = pad_from_sdl(buttons, axes);
    CHECK(std::fabs(p.l2 - 0.6104f) < 1e-3f);
    CHECK(p.buttons == kPadL2);
    axes[kSdlAxisLeftTrigger] = 10000; // under half: analog only
    p = pad_from_sdl(buttons, axes);
    CHECK(p.l2 > 0.3f && p.l2 < 0.31f && p.buttons == 0);
    axes[kSdlAxisLeftTrigger] = 0;
    axes[kSdlAxisRightTrigger] = 32767;
    p = pad_from_sdl(buttons, axes);
    CHECK(p.r2 == 1.0f && p.buttons == kPadR2);
    axes[kSdlAxisRightTrigger] = -5; // below zero clamps to released
    CHECK(pad_from_sdl(buttons, axes).r2 == 0.0f);
}

// The auto-hide rule: key layouts hide under a keyboard, pad layouts under
// a controller (unless the player keeps them), mixed ones only when both
// are present, and forcing always shows.
static void test_layout_wanted_truth_table() {
    for (int bits = 0; bits < 16; ++bits) {
        const bool kb = bits & 1, pad = bits & 2, keep = bits & 4, forced = bits & 8;
        CHECK(layout_wanted(LayoutContent::Keys, kb, pad, keep, forced) == (forced || !kb));
        CHECK(layout_wanted(LayoutContent::Pad, kb, pad, keep, forced) == (forced || !pad || keep));
        CHECK(layout_wanted(LayoutContent::Mixed, kb, pad, keep, forced) ==
              (forced || !kb || !pad || keep));
    }
}

// layout_content reads the kinds of control a layout carries; toggles and
// actions are neither keys nor pad. Only "keys" is a built-in on this
// branch, so the pad and mixed cases are built by hand like the built-ins.
static void test_layout_content() {
    const Layout keys = keys_layout();
    CHECK(layout_content(keys) == LayoutContent::Keys);
    const Layout pad = pad_layout();
    CHECK(layout_content(pad) == LayoutContent::Pad);
    Layout mixed = keys;
    mixed.groups.push_back(pad.groups[0]);
    CHECK(layout_content(mixed) == LayoutContent::Mixed);
    for (const char *name : {"pad", "pad+keys"}) {
        const char *text = builtin_layout(name, Form::Tablet);
        if (!text)
            continue;
        Layout l;
        std::string err;
        CHECK(parse_layout(text, &l, &err));
        CHECK(layout_content(l) ==
              (std::string(name) == "pad" ? LayoutContent::Pad : LayoutContent::Mixed));
    }
    // Only toggles or actions: nothing to hide it for, as with keys.
    Layout tabs;
    tabs.groups.push_back(keys.groups[2]);
    CHECK(layout_content(tabs) == LayoutContent::Keys);
}

// Auto-hide leaves only the layout switch. Keys and their HIDE/KEYS tabs
// pass through without changing saved visibility; disconnecting restores them.
static void test_router_toggles_only() {
    Layout l = keys_layout();
    const Screen s = screen(1180, 820, 1.0);
    Router r;
    Rec rec;
    r.set_layout(&l, rec);
    r.set_screen(s);
    double x, y;
    center(l, 1, find_key(l, 1, kScanSpace), s, &x, &y);
    CHECK(r.finger_down(1, x, y, 0, rec)); // held while the mode switches on
    rec.calls.clear();
    r.set_toggles_only(true, rec);
    CHECK(r.toggles_only());
    CHECK((rec.calls == std::vector<std::string>{"k44-"}));
    CHECK(!r.owns(1));
    rec.calls.clear();

    CHECK(!r.finger_down(2, x, y, 10, rec));
    CHECK(rec.calls.empty());
    // A grid gap is no longer claimed either.
    const Rect left = group_rect(l, 0, s);
    const Rect k0 = control_rect(l, 0, 0, s);
    CHECK(!r.finger_down(3, k0.x + k0.w + 1, k0.y + 1, 10, rec));
    (void)left;

    center(l, 2, 0, s, &x, &y);
    CHECK(!r.finger_down(4, x, y, 20, rec));
    CHECK(rec.calls.empty());
    CHECK(l.groups[0].visible && l.groups[1].visible);
    center(l, 2, 2, s, &x, &y);
    CHECK(r.finger_down(4, x, y, 20, rec));
    CHECK((rec.calls == std::vector<std::string>{"sw:next", "tap"}));
    CHECK(r.finger_up(4, 30, rec));

    ControlsView v = make_view(l, r, s, 1.0);
    CHECK(v.controls.size() == 1); // only the layout-cycle tab
    CHECK(v.backdrops.empty());
    for (const DrawControl &d : v.controls)
        CHECK(d.kind == Kind::Toggle && d.label == "PAD");

    // Portrait: the controls strip is not filled behind the lone tabs.
    Screen portrait = s;
    portrait.controls_area = Rect{0, 400, 1180, 420};
    CHECK(make_view(l, r, portrait, 1.0).controls_area.empty());
    r.set_claim_area(portrait.controls_area);
    CHECK(!r.finger_down(6, 590, 600, 30, rec));
    r.set_toggles_only(false, rec);
    CHECK(!make_view(l, r, portrait, 1.0).controls_area.empty());
    CHECK(r.finger_down(6, 590, 600, 30, rec));
    CHECK(r.finger_up(6, 31, rec));
    r.set_toggles_only(true, rec);

    r.set_toggles_only(false, rec);
    center(l, 1, find_key(l, 1, kScanSpace), s, &x, &y);
    CHECK(r.finger_down(5, x, y, 40, rec));
    v = make_view(l, r, s, 1.0);
    CHECK(count_kind(v, Kind::Key) == 77);
    CHECK(count_kind(v, Kind::Toggle) == 3);
}

// Every built-in form has a usable layout switch while auto-hidden, with
// neither HIDE nor KEYS tabs for individual keyboard halves left behind.
static void test_auto_hidden_layouts_keep_only_layout_switches() {
    for (Form form : {Form::Tablet, Form::PhoneLandscape, Form::PhonePortrait}) {
        const Screen s = form == Form::Tablet           ? screen(2360, 1640, 2.0)
                         : form == Form::PhoneLandscape ? screen(2532, 1170, 3.0)
                                                        : screen(1170, 2532, 3.0);
        for (const char *name : {"pad", "keys", "pad+keys"}) {
            Layout l;
            std::string error;
            CHECK(parse_layout(builtin_layout(name, form), &l, &error));
            Router r;
            Rec rec;
            r.set_layout(&l, rec);
            r.set_screen(s);
            // A previously hidden group remains hidden across auto-hide.
            l.groups[0].visible = false;
            const std::string saved = write_layout(l);
            r.set_toggles_only(true, rec);
            const ControlsView v = make_view(l, r, s, 1.0);
            CHECK(v.controls.size() == 1);
            CHECK(v.backdrops.empty());
            if (v.controls.size() == 1) {
                const Rect box = v.controls[0].rect;
                CHECK(r.finger_down(1, box.x + box.w / 2.0, box.y + box.h / 2.0, 0, rec));
                CHECK((rec.calls == std::vector<std::string>{"sw:next", "tap"}));
                CHECK(r.finger_up(1, 1, rec));
            }
            r.set_toggles_only(false, rec);
            CHECK(write_layout(l) == saved);
            CHECK(make_view(l, r, s, 1.0).controls.size() > 1);
        }
    }
}

// Trigger edges carry the trigger's 0..32767 value, never a signed one: the
// DirectInput joystick reads axis edges 4 and 5 that way.
static void test_vpad_trigger_edges() {
    Vpad v;
    PadState p;
    p.l2 = 1.0f;
    p.r2 = 0.5f;
    v.set_source(kPadSourceController, p);
    PadEdge e{};
    uint32_t after = 0;
    int seen = 0;
    while (v.next_edge(after, &e)) {
        after = e.sequence;
        if (e.kind == 2 && e.index == 4) {
            CHECK(e.value == 32767);
            ++seen;
        } else if (e.kind == 2 && e.index == 5) {
            CHECK(e.value == 16384);
            ++seen;
        }
    }
    CHECK(seen == 2);
    v.set_source(kPadSourceController, PadState());
    seen = 0;
    while (v.next_edge(after, &e)) {
        after = e.sequence;
        if (e.kind == 2 && (e.index == 4 || e.index == 5)) {
            CHECK(e.value == 0);
            ++seen;
        }
    }
    CHECK(seen == 2);
}

// Records what a RumbleRouter drives: "c:low,high,ms" and "d:low,high".
struct RumbleLog {
    std::vector<std::string> calls;
    RumbleOutputs outputs() {
        RumbleOutputs o;
        o.controller = [this](uint16_t low, uint16_t high, uint32_t ms) {
            calls.push_back("c:" + std::to_string(low) + "," + std::to_string(high) + "," +
                            std::to_string(ms));
        };
        o.device = [this](uint16_t low, uint16_t high) {
            calls.push_back("d:" + std::to_string(low) + "," + std::to_string(high));
        };
        return o;
    }
};

using Calls = std::vector<std::string>;

static void test_rumble_router_controller_refresh() {
    RumbleLog log;
    RumbleRouter r(log.outputs());
    const uint64_t ms = 1000000;
    r.update(0, 0, 0, RumbleSink::Controller, 0); // nothing requested yet
    CHECK(log.calls.empty());
    r.update(1, 100, 200, RumbleSink::Controller, 0);
    CHECK((log.calls == Calls{"c:100,200,1000"}));
    r.update(1, 100, 200, RumbleSink::Controller, 499 * ms);
    CHECK(log.calls.size() == 1);
    r.update(1, 100, 200, RumbleSink::Controller, 500 * ms); // refreshed every 500 ms
    CHECK(log.calls.size() == 2 && log.calls[1] == "c:100,200,1000");
    r.update(2, 300, 0, RumbleSink::Controller, 600 * ms); // a new value goes out at once
    CHECK(log.calls.size() == 3 && log.calls[2] == "c:300,0,1000");
    log.calls.clear();
    r.update(3, 0, 0, RumbleSink::Controller, 700 * ms); // zero stops both sinks
    CHECK((log.calls == Calls{"c:0,0,0", "d:0,0"}));
    log.calls.clear();
    r.update(3, 0, 0, RumbleSink::Controller, 5000 * ms); // and nothing refreshes
    CHECK(log.calls.empty());
}

static void test_rumble_router_device_refresh() {
    RumbleLog log;
    RumbleRouter r(log.outputs());
    const uint64_t s = 1000000000ull;
    r.update(1, 0, 65535, RumbleSink::Device, 0);
    CHECK((log.calls == Calls{"d:0,65535"}));
    r.update(1, 0, 65535, RumbleSink::Device, 29 * s);
    CHECK(log.calls.size() == 1);
    r.update(1, 0, 65535, RumbleSink::Device, 30 * s); // re-issued every 30 s
    CHECK(log.calls.size() == 2 && log.calls[1] == "d:0,65535");
    // Nowhere to rumble: the device stops.
    log.calls.clear();
    r.update(1, 0, 65535, RumbleSink::None, 31 * s);
    CHECK((log.calls == Calls{"d:0,0"}));
    log.calls.clear();
    r.update(1, 0, 65535, RumbleSink::None, 90 * s);
    CHECK(log.calls.empty());
}

// The layout editor takes over: stop() silences both motors at once and
// forgets the request, so nothing is refreshed until the guest asks again.
static void test_rumble_router_stop() {
    RumbleLog log;
    RumbleRouter r(log.outputs());
    const uint64_t s = 1000000000ull;
    r.update(1, 40000, 0, RumbleSink::Controller, 0);
    CHECK((log.calls == Calls{"c:40000,0,1000"}));
    log.calls.clear();
    r.stop();
    CHECK((log.calls == Calls{"c:0,0,0", "d:0,0"}));
    log.calls.clear();
    // The same request never restarts, however long the editor stays open.
    r.update(1, 40000, 0, RumbleSink::Controller, 10 * s);
    CHECK(log.calls.empty());
    // The guest's next request (a new serial) does.
    r.update(2, 30000, 0, RumbleSink::Controller, 11 * s);
    CHECK((log.calls == Calls{"c:30000,0,1000"}));
}

// A controller arriving mid-rumble takes it over: the device stops first,
// then the controller starts; leaving hands it back the other way.
static void test_rumble_router_sink_change() {
    RumbleLog log;
    RumbleRouter r(log.outputs());
    r.update(1, 500, 600, RumbleSink::Device, 0);
    log.calls.clear();
    r.update(1, 500, 600, RumbleSink::Controller, 10);
    CHECK((log.calls == Calls{"d:0,0", "c:500,600,1000"}));
    log.calls.clear();
    r.update(1, 500, 600, RumbleSink::Device, 20);
    CHECK((log.calls == Calls{"c:0,0,0", "d:500,600"}));
}

// --- editor ------------------------------------------------------------------

// Stands in for the `pad` built-in (another track adds it): two floating
// sticks, a dpad, four face buttons in a diamond and two shoulders.
static const char *kEditorPadLayout = R"({
  "version": 1, "name": "pad",
  "groups": [
    {"id": "sticks", "controls": [
       {"kind": "stick", "stick": "left", "anchor": "bottom-left", "x": 40, "y": 40, "radius": 60},
       {"kind": "stick", "stick": "right", "anchor": "bottom-right", "x": 300, "y": 40, "radius": 60}]},
    {"id": "dpad", "controls": [
       {"kind": "dpad", "anchor": "bottom-left", "x": 60, "y": 200, "size": 140}]},
    {"id": "face", "controls": [
       {"kind": "button", "button": "cross", "anchor": "bottom-right", "x": 110, "y": 200, "size": 60},
       {"kind": "button", "button": "circle", "anchor": "bottom-right", "x": 40, "y": 270, "size": 60},
       {"kind": "button", "button": "square", "anchor": "bottom-right", "x": 180, "y": 270, "size": 60},
       {"kind": "button", "button": "triangle", "anchor": "bottom-right", "x": 110, "y": 340, "size": 60}]},
    {"id": "shoulders", "controls": [
       {"kind": "button", "button": "l1", "anchor": "top-left", "x": 40, "y": 60, "w": 100, "h": 50},
       {"kind": "button", "button": "r1", "anchor": "top-right", "x": 40, "y": 60, "w": 100, "h": 50}]}
  ]})";

static Screen editor_screen() {
    Screen s;
    s.dw = 2360;
    s.dh = 1640;
    s.scale = 2;
    s.safe = Rect{0, 0, 2360, 1640};
    return s;
}

static Layout editor_pad() {
    Layout l;
    std::string err;
    CHECK(parse_layout(kEditorPadLayout, &l, &err));
    return l;
}

static void tap(Editor &e, double x, double y, int64_t id = 7) {
    e.finger_down(id, x, y);
    e.finger_up(id);
}

static void tap_rect(Editor &e, const Rect &r) {
    tap(e, r.x + r.w / 2.0, r.y + r.h / 2.0);
}

static void tap_tool(Editor &e, Tool t) {
    for (const auto &item : e.toolbar())
        if (item.tool == t) {
            tap_rect(e, item.rect);
            return;
        }
    CHECK(!"tool not on the toolbar");
}

// Taps the picker row whose value is `value`, dragging the list up a row at
// a time until it is in view.
static bool pick(Editor &e, const std::string &value) {
    for (int step = 0; step < 400; ++step) {
        const auto &items = e.picker();
        if (items.empty())
            return false;
        for (const auto &it : items)
            if (it.value == value && it.rect.h >= 32 * 2) {
                tap_rect(e, it.rect);
                return true;
            }
        Rect box = e.picker_rect();
        double x = box.x + box.w / 2.0, y = box.y + box.h / 2.0;
        e.finger_down(9, x, y);
        e.finger_motion(9, x, y - 64);
        e.finger_up(9);
    }
    return false;
}

// The face group's cross, where the editor places it (its content screen).
static Rect cross_rect(const Editor &e, const Screen &) {
    return control_rect(e.layout(), 2, 0, e.content_screen());
}

static void test_editor_open_and_toolbar() {
    Editor e;
    Screen s = editor_screen();
    CHECK(!e.is_open());
    e.set_screen(s);
    e.open(editor_pad(), Form::Tablet, MappedTable{}, false, true);
    CHECK(e.is_open());
    CHECK(e.snap());
    CHECK(e.layout().name == "pad");
    // Ruling: eight visible tools (the brief's nine counted Tool::None).
    const Tool order[] = {Tool::Add,  Tool::Delete, Tool::Bind,  Tool::Stick,
                          Tool::Snap, Tool::Layout, Tool::Reset, Tool::Done};
    CHECK(e.toolbar().size() == 8);
    for (size_t i = 0; i < e.toolbar().size() && i < 8; ++i) {
        const Rect &r = e.toolbar()[i].rect;
        CHECK(e.toolbar()[i].tool == order[i]);
        CHECK(e.toolbar()[i].label && *e.toolbar()[i].label);
        CHECK(r.w == 144 && r.h == 72);
        CHECK(r.y >= 0 && r.y + r.h <= 100);
        if (i > 0)
            CHECK(r.x == e.toolbar()[i - 1].rect.x + 144 + 12);
    }
    // Centred in the safe area.
    const Rect &first = e.toolbar().front().rect;
    const Rect &last = e.toolbar().back().rect;
    CHECK(std::abs((first.x - 0) - (2360 - (last.x + last.w))) <= 1);
    CHECK(e.picker().empty());
    CHECK(e.selected_group() == -1 && e.selected_control() == -1);

    // Portrait: the toolbar sits at the top of the controls area.
    Screen p;
    p.dw = 1170;
    p.dh = 2532;
    p.scale = 3;
    p.safe = Rect{0, 141, 1170, 2289};
    p.controls_area = Rect{0, 1500, 1170, 930};
    e.set_screen(p);
    CHECK(e.toolbar().front().rect.y >= 1500 && e.toolbar().front().rect.y < 1500 + 30);
    CHECK(e.toolbar().front().rect.x >= 0 &&
          e.toolbar().back().rect.x + e.toolbar().back().rect.w <= 1170);
}

static void test_editor_select_drag_and_reanchor() {
    Editor e;
    Screen s = editor_screen();
    e.set_screen(s);
    e.open(editor_pad(), Form::Tablet, MappedTable{}, false, true);
    Rect before = cross_rect(e, s);
    CHECK(before.x == 2020 && before.y == 1120 && before.w == 120);
    CHECK(e.layout().groups[2].controls[0].anchor == Anchor::BottomRight);

    uint32_t gen = e.generation();
    tap_rect(e, before);
    CHECK(e.selected_group() == 2 && e.selected_control() == 0);
    CHECK(e.generation() != gen);

    // Tapping empty space clears the selection.
    tap(e, 1180, 700);
    CHECK(e.selected_group() == -1 && e.selected_control() == -1);

    double cx = before.x + 60, cy = before.y + 60;
    e.finger_down(1, cx, cy);
    CHECK(e.selected_group() == 2 && e.selected_control() == 0);
    e.finger_motion(1, cx - 403, cy - 597);
    Rect moved = cross_rect(e, s);
    CHECK(std::abs(moved.x - (before.x - 400)) <= 12 && std::abs(moved.y - (before.y - 600)) <= 12);
    // The 10 pt grid runs from the content area's corner, which the
    // toolbar's band pushed down.
    const Rect grid_from = anchor_area(e.layout(), e.content_screen());
    CHECK(moved.x % 20 == 0 && (moved.y - grid_from.y) % 20 == 0);
    CHECK(!e.guides().empty());
    e.finger_up(1);
    // The centre is in the right third and, of the area below the toolbar,
    // the top third.
    CHECK(e.layout().groups[2].controls[0].anchor == Anchor::TopRight);
    Rect after = cross_rect(e, s);
    CHECK(after.x == moved.x && after.y == moved.y && after.w == moved.w && after.h == moved.h);
    CHECK(e.guides().empty());
    // Still in place on a different screen size's anchor maths: the offset is
    // measured from the right edge, centred vertically.
    const Control &c = e.layout().groups[2].controls[0];
    CHECK(std::lround(c.x * 2) == 2360 - 120 - after.x);
}

static void test_editor_snap_off_and_snap_to_control() {
    Editor e;
    Screen s = editor_screen();
    e.set_screen(s);
    e.open(editor_pad(), Form::Tablet, MappedTable{}, false, false);
    CHECK(!e.snap());
    Rect before = cross_rect(e, s);
    double cx = before.x + 60, cy = before.y + 60;
    e.finger_down(1, cx, cy);
    e.finger_motion(1, cx - 403, cy - 597);
    e.finger_up(1);
    Rect after = cross_rect(e, s);
    CHECK(after.x == before.x - 403 && after.y == before.y - 597);
    CHECK(e.guides().empty());

    // Snap back on: a drop within 6 pt of the circle's left edge lines up with it.
    tap_tool(e, Tool::Snap);
    CHECK(e.snap());
    Rect circle = control_rect(e.layout(), 2, 1, e.content_screen());
    Rect cr = cross_rect(e, s);
    e.finger_down(1, cr.x + 60, cr.y + 60);
    // Put the cross's left edge 7 px right of the circle's left edge, well
    // below it so nothing else is near; 7 px is off the 20 px grid.
    double tx = circle.x + 7 + 60, ty = 1400 + 3 + 60;
    e.finger_motion(1, tx, ty);
    Rect snapped = cross_rect(e, s);
    CHECK(snapped.x == circle.x);
    bool vertical_guide = false;
    for (const Rect &g : e.guides())
        if (g.w == 1 && g.x == circle.x)
            vertical_guide = true;
    CHECK(vertical_guide);
    e.finger_up(1);
}

static void test_editor_pinch() {
    Editor e;
    Screen s = editor_screen();
    e.set_screen(s);
    e.open(editor_pad(), Form::Tablet, MappedTable{}, false, true);
    Rect r = cross_rect(e, s);
    double cx = r.x + 60, cy = r.y + 60;
    e.finger_down(1, cx, cy);
    e.finger_down(2, cx - 100, cy);
    e.finger_motion(2, cx - 200, cy);
    const Control &c = e.layout().groups[2].controls[0];
    CHECK(c.w == 120 && c.h == 120);
    // The centre stays put.
    Rect grown = cross_rect(e, s);
    CHECK(std::abs(grown.x + grown.w / 2 - cx) <= 2 && std::abs(grown.y + grown.h / 2 - cy) <= 2);
    e.finger_motion(2, cx - 1000, cy);
    CHECK(e.layout().groups[2].controls[0].w == 240);
    e.finger_motion(2, cx - 10, cy);
    CHECK(e.layout().groups[2].controls[0].w == 24);
    e.finger_up(2);
    e.finger_up(1);
    // The wheel resizes the selection too, in 2 pt steps.
    e.wheel(3);
    CHECK(e.layout().groups[2].controls[0].w > 24);
    CHECK(int(e.layout().groups[2].controls[0].w) % 2 == 0);

    // A stick's pinch scales its travel and zone together.
    Rect st = control_rect(e.layout(), 0, 0, e.content_screen());
    double sx = st.x + st.w / 2.0, sy = st.y + st.h / 2.0;
    e.finger_down(1, sx, sy);
    e.finger_down(2, sx + 50, sy);
    e.finger_motion(2, sx + 75, sy);
    const Control &stick = e.layout().groups[0].controls[0];
    CHECK(stick.w == 180 && stick.h == 180 && stick.radius == 90);
    e.finger_up(2);
    e.finger_up(1);
}

static void test_editor_add_delete_bind() {
    Editor e;
    Screen s = editor_screen();
    e.set_screen(s);
    e.open(editor_pad(), Form::Tablet, MappedTable{}, false, true);
    size_t groups = e.layout().groups.size();
    tap_tool(e, Tool::Add);
    CHECK(!e.picker().empty());
    CHECK(e.picker().size() == 7);
    Rect box = e.picker_rect();
    CHECK(box.w == 400);
    CHECK(box.y >= e.toolbar().front().rect.y + e.toolbar().front().rect.h);
    CHECK(pick(e, "button"));
    CHECK(pick(e, "button:circle"));
    CHECK(e.picker().empty());
    CHECK(e.layout().groups.size() == groups + 1);
    const Group &custom = e.layout().groups.back();
    CHECK(custom.id == "custom" && custom.controls.size() == 1);
    CHECK(custom.controls[0].kind == Kind::Button &&
          custom.controls[0].button == PadButton::Circle);
    CHECK(e.selected_group() == int(groups) && e.selected_control() == 0);
    // Placed at the centre of the area the editor works in (below the toolbar).
    Rect nr = control_rect(e.layout(), int(groups), 0, e.content_screen());
    const Rect mid = anchor_area(e.layout(), e.content_screen());
    CHECK(std::abs(nr.x + nr.w / 2 - (mid.x + mid.w / 2)) <= 1 &&
          std::abs(nr.y + nr.h / 2 - (mid.y + mid.h / 2)) <= 1);

    // A second add joins the same group.
    tap_tool(e, Tool::Add);
    CHECK(pick(e, "key"));
    CHECK(e.layout().groups.back().controls.size() == 2);
    CHECK(e.layout().groups.back().controls[1].kind == Kind::Key);
    // Bind the key.
    tap_tool(e, Tool::Bind);
    CHECK(pick(e, "Q"));
    CHECK(e.layout().groups.back().controls[1].scancode == kScanQ);
    tap_tool(e, Tool::Delete);
    CHECK(e.selected_group() == -1);
    CHECK(e.layout().groups.back().controls.size() == 1);
    tap_rect(e, control_rect(e.layout(), int(groups), 0, e.content_screen()));
    tap_tool(e, Tool::Delete);
    CHECK(e.layout().groups.size() == groups);
    for (const auto &g : e.layout().groups)
        CHECK(g.id != "custom");

    // Bind in mapped mode: cross -> key:Space.
    tap_rect(e, cross_rect(e, s));
    tap_tool(e, Tool::Bind);
    CHECK(pick(e, "key:Space"));
    const Target &t = e.mapped().buttons[int(PadButton::Cross)];
    CHECK(t.type == Target::Key && t.value == kScanSpace);
    // A stick binds to a stick mode.
    tap_rect(e, control_rect(e.layout(), 0, 1, e.content_screen()));
    tap_tool(e, Tool::Bind);
    CHECK(pick(e, "wasd"));
    CHECK(e.mapped().right == StickMode::Wasd);
    // Stick cycles floating/fixed and the dead zone.
    double dz = e.layout().groups[0].controls[1].deadzone;
    tap_tool(e, Tool::Stick);
    CHECK(e.layout().groups[0].controls[1].deadzone != dz ||
          !e.layout().groups[0].controls[1].floating);
    for (int i = 0; i < 5; ++i)
        tap_tool(e, Tool::Stick);
    CHECK(e.layout().groups[0].controls[1].floating);
    CHECK(e.layout().groups[0].controls[1].deadzone == dz);

    // Tapping outside an open picker just closes it.
    tap_tool(e, Tool::Add);
    CHECK(!e.picker().empty());
    tap(e, 1180, 1500);
    CHECK(e.picker().empty());
    CHECK(e.layout().groups.size() == groups);
}

static void test_editor_bind_native_button() {
    Editor e;
    Screen s = editor_screen();
    e.set_screen(s);
    e.open(editor_pad(), Form::Tablet, MappedTable{}, true, true);
    tap_rect(e, cross_rect(e, s));
    tap_tool(e, Tool::Bind);
    for (const auto &it : e.picker())
        CHECK(it.value.rfind("key:", 0) != 0);
    CHECK(pick(e, "start"));
    CHECK(e.layout().groups[2].controls[0].button == PadButton::Start);
    CHECK(e.mapped().buttons[int(PadButton::Cross)].type == Target::Mouse);
}

static void test_editor_grid_key_moves_its_group() {
    Editor e;
    Screen s = editor_screen();
    e.set_screen(s);
    Layout l;
    std::string err;
    CHECK(parse_layout(kTinyLayout, &l, &err));
    l.safe_inset = true;
    e.open(l, Form::Tablet, MappedTable{}, false, false);
    Rect box = group_rect(e.layout(), 0, e.content_screen());
    Rect key = control_rect(e.layout(), 0, 0, e.content_screen());
    e.finger_down(1, key.x + 5, key.y + 5);
    CHECK(e.selected_group() == 0 && e.selected_control() == 0);
    e.finger_motion(1, key.x + 5 - 1400, key.y + 5 - 700);
    e.finger_up(1);
    Rect moved = group_rect(e.layout(), 0, e.content_screen());
    CHECK(moved.x == box.x - 1400 && moved.y == box.y - 700);
    CHECK(e.layout().groups[0].anchor == Anchor::Center);
    // Pinch scales the grid's key size, clamped to 24..60.
    Rect k = control_rect(e.layout(), 0, 0, e.content_screen());
    e.finger_down(1, k.x + 5, k.y + 5);
    e.finger_down(2, k.x + 105, k.y + 5);
    e.finger_motion(2, k.x + 505, k.y + 5);
    CHECK(e.layout().groups[0].grid.key == 60);
    e.finger_up(2);
    e.finger_up(1);
    // A grid group survives losing its last control.
    tap_rect(e, control_rect(e.layout(), 0, 1, e.content_screen()));
    tap_tool(e, Tool::Delete);
    tap_rect(e, control_rect(e.layout(), 0, 0, e.content_screen()));
    tap_tool(e, Tool::Delete);
    CHECK(e.layout().groups.size() == 2 && e.layout().groups[0].controls.empty());
}

static void test_editor_done_reset_and_layout_names() {
    Editor e;
    Screen s = editor_screen();
    e.set_screen(s);
    e.set_names({"pad", "keys", "pad+keys", "pad copy"});
    e.open(editor_pad(), Form::Tablet, MappedTable{}, false, true);
    CHECK(!e.take_save());
    tap_tool(e, Tool::Done);
    CHECK(e.take_save());
    CHECK(!e.take_save());
    tap_tool(e, Tool::Reset);
    CHECK(e.take_reset());
    CHECK(!e.take_reset());
    CHECK(!e.take_cancel());

    // A built-in refuses a rename.
    std::string current;
    tap_tool(e, Tool::Layout);
    CHECK(pick(e, "rename"));
    CHECK(!e.take_rename(&current));
    CHECK(e.layout().name == "pad");

    // Duplicate picks the first free "<name> copy N".
    tap_tool(e, Tool::Layout);
    CHECK(pick(e, "duplicate"));
    CHECK(e.layout().name == "pad copy 2");

    tap_tool(e, Tool::Layout);
    CHECK(pick(e, "rename"));
    CHECK(e.take_rename(&current));
    CHECK(current == "pad copy 2");
    CHECK(!e.take_rename(&current));
    e.text("mi");
    e.text("ne");
    e.text_done();
    CHECK(e.layout().name == "mine");
    // Text outside a rename is ignored; a built-in name is refused.
    e.text("x");
    e.text_done();
    CHECK(e.layout().name == "mine");
    tap_tool(e, Tool::Layout);
    CHECK(pick(e, "rename"));
    CHECK(e.take_rename(&current));
    e.text("keys");
    e.text_done();
    CHECK(e.layout().name == "mine");

    // Toggle binding lists the layout names plus next.
    tap_tool(e, Tool::Add);
    CHECK(pick(e, "toggle"));
    tap_tool(e, Tool::Bind);
    CHECK(pick(e, "keys"));
    CHECK(e.layout().groups.back().controls.back().target == "keys");

    e.close();
    CHECK(!e.is_open());
}

static void test_editor_tools_mid_gesture() {
    Screen s = editor_screen();
    {
        // Finger 1 holds the cross, finger 2 taps Delete, then touches empty space.
        Editor e;
        e.set_screen(s);
        e.open(editor_pad(), Form::Tablet, MappedTable{}, false, true);
        Rect cross = cross_rect(e, s);
        std::vector<Rect> before;
        for (int c = 1; c < 4; ++c)
            before.push_back(control_rect(e.layout(), 2, c, e.content_screen()));
        e.finger_down(1, cross.x + 60, cross.y + 60);
        e.finger_motion(1, cross.x + 30, cross.y + 60);
        tap_tool(e, Tool::Delete);
        CHECK(e.selected_group() == -1);
        CHECK(e.layout().groups[2].controls.size() == 3);
        CHECK(e.guides().empty());
        e.finger_down(2, 1180, 700);
        e.finger_motion(2, 1000, 700);
        e.finger_motion(1, cross.x - 300, cross.y - 300);
        e.finger_up(2);
        e.finger_up(1);
        for (int c = 1; c < 4; ++c) {
            Rect r = control_rect(e.layout(), 2, c - 1, e.content_screen());
            CHECK(r.x == before[c - 1].x && r.y == before[c - 1].y && r.w == before[c - 1].w);
        }
        CHECK(e.selected_group() == -1);
    }
    {
        // Add during a drag: the drag is committed and ends; the new control stays put.
        Editor e;
        e.set_screen(s);
        e.open(editor_pad(), Form::Tablet, MappedTable{}, false, false);
        Rect cross = cross_rect(e, s);
        e.finger_down(1, cross.x + 60, cross.y + 60);
        e.finger_motion(1, cross.x + 60 - 1000, cross.y + 60);
        Rect moved = cross_rect(e, s);
        tap_tool(e, Tool::Add);
        CHECK(e.layout().groups[2].controls[0].anchor == Anchor::Bottom);
        CHECK(pick(e, "dpad"));
        const int g = e.selected_group();
        CHECK(g == int(e.layout().groups.size()) - 1);
        Rect added = control_rect(e.layout(), g, 0, e.content_screen());
        e.finger_motion(1, 100, 100);
        e.finger_down(2, 1500, 300); // would pinch if the drag were still live
        e.finger_motion(2, 1800, 300);
        e.finger_up(2);
        e.finger_up(1);
        Rect after = control_rect(e.layout(), g, 0, e.content_screen());
        CHECK(after.x == added.x && after.y == added.y && after.w == added.w);
        Rect c2 = cross_rect(e, s);
        CHECK(c2.x == moved.x && c2.y == moved.y);
        CHECK(std::abs(added.x + added.w / 2 - 1180) <= 1);
    }
    {
        // close() drops the gesture and pending results.
        Editor e;
        e.set_screen(s);
        e.open(editor_pad(), Form::Tablet, MappedTable{}, false, true);
        Rect cross = cross_rect(e, s);
        e.finger_down(1, cross.x + 60, cross.y + 60);
        tap_tool(e, Tool::Done);
        e.close();
        CHECK(!e.take_save());
        CHECK(e.selected_group() == -1 && e.picker().empty() && e.guides().empty());
        e.finger_motion(1, 0, 0);
        e.finger_up(1);
    }
}

static void test_editor_reanchor_every_side() {
    Screen s = editor_screen();
    struct Case {
        double cx, cy;
        Anchor want;
    } cases[] = {
        {300, 800, Anchor::Left},    {1180, 200, Anchor::Top},    {1180, 1400, Anchor::Bottom},
        {300, 200, Anchor::TopLeft}, {1180, 800, Anchor::Center}, {300, 1400, Anchor::BottomLeft},
    };
    for (const Case &k : cases) {
        Editor e;
        e.set_screen(s);
        e.open(editor_pad(), Form::Tablet, MappedTable{}, false, false);
        Rect r = cross_rect(e, s);
        e.finger_down(1, r.x + 60, r.y + 60);
        e.finger_motion(1, k.cx, k.cy);
        Rect moved = cross_rect(e, s);
        e.finger_up(1);
        const Control &c = e.layout().groups[2].controls[0];
        CHECK(c.anchor == k.want);
        Rect after = cross_rect(e, s);
        CHECK(after.x == moved.x && after.y == moved.y);
        CHECK(after.x + 60 == int(k.cx) && after.y + 60 == int(k.cy));
    }
}

static void test_editor_picker_scroll_is_not_a_tap() {
    Editor e;
    Screen s = editor_screen();
    e.set_screen(s);
    e.open(editor_pad(), Form::Tablet, MappedTable{}, false, true);
    CHECK(!e.mapped_changed());
    tap_rect(e, cross_rect(e, s));
    tap_tool(e, Tool::Bind);
    CHECK(e.picker().size() == 12);
    std::string first = e.picker().front().value;
    Rect row = e.picker().front().rect;
    e.finger_down(3, row.x + 10, row.y + 10);
    e.finger_motion(3, row.x + 10, row.y + 10 - 100);
    e.finger_up(3);
    CHECK(!e.picker().empty());
    CHECK(e.picker().front().value != first);
    CHECK(!e.mapped_changed());
    CHECK(e.mapped().buttons[int(PadButton::Cross)].type == Target::Mouse);
    CHECK(pick(e, "wheel_up"));
    CHECK(e.mapped_changed());
    CHECK(e.mapped().buttons[int(PadButton::Cross)].type == Target::Wheel);

    // Native: a button bind leaves the table untouched.
    Editor n;
    n.set_screen(s);
    n.open(editor_pad(), Form::Tablet, MappedTable{}, true, true);
    tap_rect(n, cross_rect(n, s));
    tap_tool(n, Tool::Bind);
    CHECK(pick(n, "circle"));
    CHECK(!n.mapped_changed());
}

static void test_editor_pinch_keeps_aspect_and_area() {
    Editor e;
    Screen s = editor_screen();
    e.set_screen(s);
    e.open(editor_pad(), Form::Tablet, MappedTable{}, false, true);
    // L1 is 100x50 at the top-left: growing is capped where w hits 240,
    // shrinking where h hits 24; the result stays in the area.
    Rect r = control_rect(e.layout(), 3, 0, e.content_screen());
    double cx = r.x + r.w / 2.0, cy = r.y + r.h / 2.0;
    e.finger_down(1, cx, cy);
    e.finger_down(2, cx + 40, cy);
    e.finger_motion(2, cx + 400, cy);
    const Control &c = e.layout().groups[3].controls[0];
    CHECK(c.w == 240 && c.h == 120);
    Rect big = control_rect(e.layout(), 3, 0, e.content_screen());
    CHECK(big.x >= 0 && big.y >= 0);
    e.finger_motion(2, cx + 1, cy);
    CHECK(e.layout().groups[3].controls[0].h == 24);
    CHECK(e.layout().groups[3].controls[0].w == 48);
    e.finger_up(2);
    e.finger_up(1);
}

static void test_editor_custom_group_beside_a_grid_custom() {
    Editor e;
    Screen s = editor_screen();
    e.set_screen(s);
    Layout l;
    std::string err;
    CHECK(parse_layout(kTinyLayout, &l, &err));
    l.groups[0].id = "custom";
    e.open(l, Form::Tablet, MappedTable{}, false, false);
    tap_tool(e, Tool::Add);
    CHECK(pick(e, "dpad"));
    CHECK(e.layout().groups.back().id == "custom-2");
    CHECK(!e.layout().groups.back().has_grid);
    tap_tool(e, Tool::Add);
    CHECK(pick(e, "action"));
    CHECK(e.layout().groups.size() == 3);
    CHECK(e.layout().groups.back().controls.size() == 2);
}

static void test_editor_layout_switch_and_delete() {
    Editor e;
    Screen s = editor_screen();
    e.set_screen(s);
    e.set_names({"pad", "keys", "pad+keys", "mine"});
    e.open(editor_pad(), Form::Tablet, MappedTable{}, false, true);
    std::string name;
    // Built-in: delete is refused.
    tap_tool(e, Tool::Layout);
    CHECK(pick(e, "delete"));
    CHECK(!e.take_delete(&name));
    // Switch lists every other name.
    tap_tool(e, Tool::Layout);
    CHECK(pick(e, "switch"));
    bool has_self = false, has_mine = false;
    for (const auto &it : e.picker()) {
        has_self |= it.value == "pad";
        has_mine |= it.value == "mine";
    }
    CHECK(!has_self && has_mine);
    CHECK(pick(e, "mine"));
    CHECK(e.take_switch(&name));
    CHECK(name == "mine");
    CHECK(!e.take_switch(&name));

    // A user layout can be deleted; a rename replaces its old name.
    Layout mine = editor_pad();
    mine.name = "mine";
    e.open(mine, Form::Tablet, MappedTable{}, false, true);
    tap_tool(e, Tool::Layout);
    CHECK(pick(e, "delete"));
    CHECK(e.take_delete(&name));
    CHECK(name == "mine");
    CHECK(!e.take_delete(&name));
    tap_tool(e, Tool::Layout);
    CHECK(pick(e, "rename"));
    CHECK(e.take_rename(&name));
    e.text("ours");
    e.text_done();
    tap_tool(e, Tool::Layout);
    CHECK(pick(e, "switch"));
    for (const auto &it : e.picker())
        CHECK(it.value != "mine" && it.value != "ours");
    CHECK(e.picker().size() == 3);
}

// --- the editor in the app ---------------------------------------------------

// make_view(Editor, Screen): what the editor's own layer draws.
static void test_editor_view() {
    Editor e;
    const Screen s = editor_screen();
    e.set_screen(s);
    e.open(editor_pad(), Form::Tablet, MappedTable{}, false, true);

    ControlsView v = make_view(e, s);
    CHECK(v.wanted && v.editing);
    CHECK(v.dw == s.dw && v.dh == s.dh);
    CHECK(v.opacity == 1.0);
    // One layer, the whole drawable: the dimmer reaches where no control is.
    CHECK(v.layers.size() == 1);
    CHECK(v.layers[0].rect.x == 0 && v.layers[0].rect.y == 0);
    CHECK(v.layers[0].rect.w == s.dw && v.layers[0].rect.h == s.dh);
    // Every control of every group, even a hidden one: the editor's hit test
    // reaches them all.
    size_t total = 0;
    for (const Group &g : e.layout().groups)
        total += g.controls.size();
    CHECK(v.controls.size() == total);
    for (const DrawControl &d : v.controls)
        CHECK(d.layer == 0);
    CHECK(v.toolbar.size() == 8);
    for (size_t i = 0; i < v.toolbar.size() && i < e.toolbar().size(); ++i) {
        CHECK(v.toolbar[i].rect.w == e.toolbar()[i].rect.w);
        CHECK(!v.toolbar[i].label.empty());
    }
    CHECK(v.selected == -1);
    CHECK(v.guides.empty());
    CHECK(v.picker_rows.empty());
    // Snapping on: the 10 pt grid, from the anchor area's corner.
    CHECK(v.grid_step == 20);
    CHECK(v.grid_area.x == anchor_area(e.layout(), e.content_screen()).x);

    // A tap selects, and the selection names a control of the view.
    const Rect cross = cross_rect(e, s);
    tap_rect(e, cross);
    const uint64_t selected_revision = make_view(e, s).revision;
    CHECK(selected_revision != v.revision);
    v = make_view(e, s);
    CHECK(v.selected >= 0 && v.selected < int(v.controls.size()));
    CHECK(v.controls[v.selected].rect.x == cross.x && v.controls[v.selected].rect.y == cross.y);

    // A drag moves it, so the view changes and the snap guides show.
    e.finger_down(1, cross.x + cross.w / 2.0, cross.y + cross.h / 2.0);
    e.finger_motion(1, cross.x + cross.w / 2.0 - 97, cross.y + cross.h / 2.0 - 43);
    v = make_view(e, s);
    CHECK(v.revision != selected_revision);
    CHECK(v.controls[v.selected].rect.x != cross.x);
    CHECK(v.guides.size() == e.guides().size());
    e.finger_up(1);

    // Snapping off: no grid.
    tap_tool(e, Tool::Snap);
    CHECK(!e.snap());
    CHECK(make_view(e, s).grid_step == 0);

    // An open picker publishes its box and its rows.
    tap_tool(e, Tool::Add);
    v = make_view(e, s);
    CHECK(!v.picker.empty());
    CHECK(!v.picker_rows.empty());
    CHECK(v.picker_rows.size() == e.picker().size());
    CHECK(!v.picker_rows.front().label.empty());
}

// The editor's layer: the dimmer everywhere, the accent outline on the
// selection, a grid dot, and none of it while the view is not editing.
static void test_editor_paints_its_layer() {
    Editor e;
    const Screen s = editor_screen();
    e.set_screen(s);
    e.open(editor_pad(), Form::Tablet, MappedTable{}, false, true);
    const Rect cross = cross_rect(e, s);
    tap_rect(e, cross);
    const ControlsView v = make_view(e, s);

    std::vector<uint8_t> px(size_t(s.dw) * s.dh * 4, 0);
    Canvas c(px, s.dw, s.dh, v.opacity);
    paint_overlay(c, v, Rect{0, 0, s.dw, s.dh});

    // The far corner has no control on it: only the dimmer.
    const Rgba corner = c.at(s.dw - 2, s.dh - 2);
    CHECK(corner.a == 110 && corner.r == 0 && corner.g == 0 && corner.b == 0);
    // The selection's outline, on the control's own edge.
    bool accent = false;
    for (int x = cross.x; x < cross.x + cross.w; ++x) {
        const Rgba p = c.at(x, cross.y + 1);
        if (p.r > 200 && p.g > 150 && p.g < 230 && p.b < 110)
            accent = true;
    }
    CHECK(accent);
    // A grid dot on the anchor area's corner, where no control sits.
    const Rect area = anchor_area(e.layout(), e.content_screen());
    const Rgba dot = c.at(area.x + 4 * v.grid_step, area.y);
    CHECK(dot.a == 40);
    // The play view is unchanged: nothing dims it.
    Router r;
    Rec rec;
    Layout l = editor_pad();
    r.set_layout(&l, rec);
    r.set_screen(s);
    const ControlsView play = make_view(l, r, s, 1.0);
    CHECK(!play.editing);
    std::vector<uint8_t> px2(size_t(s.dw) * s.dh * 4, 0);
    Canvas c2(px2, s.dw, s.dh, 1.0);
    paint_overlay(c2, play, Rect{0, 0, s.dw, s.dh});
    CHECK(c2.at(s.dw - 2, s.dh - 2).a == 0);
}

// binding.txt holds the player's changes alone, not the whole table.
static void test_write_mapped_diff() {
    MappedTable base;
    CHECK(write_mapped_diff(base, base).empty());
    MappedTable changed = base;
    changed.buttons[int(PadButton::Cross)] = Target{Target::Key, kScanSpace, ""};
    changed.left = StickMode::Cursor;
    const std::string text = write_mapped_diff(base, changed);
    CHECK(text == "cross=key:Space;left_stick=cursor");
    // It reads back as the same table, applied over the base.
    MappedTable round = base;
    std::string err;
    CHECK(parse_mapped(text, &round, &err));
    CHECK(round.buttons[int(PadButton::Cross)].type == Target::Key);
    CHECK(round.buttons[int(PadButton::Cross)].value == kScanSpace);
    CHECK(round.left == StickMode::Cursor);
    CHECK(round.right == base.right);
}

// Records what apply_editor_results asks the host for.
namespace {
struct FakeEditorHost : EditorHost {
    std::vector<std::string> calls;
    std::vector<std::string> name_list{"pad", "keys", "pad+keys"};
    void save_layout(const Layout &l, Form form) override {
        calls.push_back("save:" + l.name + "." + form_name(form));
    }
    void delete_layout(const std::string &name, Form form) override {
        calls.push_back("delete:" + name + "." + form_name(form));
    }
    void write_binding(const std::string &text) override {
        calls.push_back(text.empty() ? "binding:none" : "binding:" + text);
    }
    void apply_mapped(const MappedTable &) override {
        calls.push_back("apply_mapped");
    }
    std::vector<std::string> names() override {
        return name_list;
    }
    void set_names(const std::vector<std::string> &) override {
        calls.push_back("set_names");
    }
    void select_layout(const std::string &name) override {
        calls.push_back("select:" + name);
    }
    void set_snap(bool on) override {
        calls.push_back(on ? "snap:on" : "snap:off");
    }
};
} // namespace

// An editor open on the stand-in pad layout, with the built-in names.
static void open_for_results(Editor &e, const Screen &s) {
    e.set_screen(s);
    e.open(editor_pad(), Form::Tablet, MappedTable{}, false, true);
    e.set_names({"pad", "keys", "pad+keys"});
}

// Done saves the layout and leaves; the mapping is written only when it moved.
static void test_apply_results_save() {
    Editor e;
    const Screen s = editor_screen();
    open_for_results(e, s);
    FakeEditorHost host;
    MappedTable base;
    bool renamed = false;
    tap_tool(e, Tool::Done);
    CHECK(apply_editor_results(e, host, "pad", base, &renamed) == EditorNext::Close);
    CHECK(!renamed);
    CHECK((host.calls == std::vector<std::string>{"save:pad.tablet", "snap:on"}));

    // Nothing pending: nothing happens, and the editor stays open.
    host.calls.clear();
    CHECK(apply_editor_results(e, host, "pad", base, &renamed) == EditorNext::Keep);
    CHECK(host.calls.empty());
}

// A bind that changes the mapped table writes the binding difference too.
static void test_apply_results_save_binding() {
    Editor e;
    const Screen s = editor_screen();
    open_for_results(e, s);
    tap_rect(e, cross_rect(e, s));
    tap_tool(e, Tool::Bind);
    CHECK(pick(e, "key:Space"));
    CHECK(e.mapped_changed());
    tap_tool(e, Tool::Done);
    FakeEditorHost host;
    CHECK(apply_editor_results(e, host, "pad", MappedTable{}, nullptr) == EditorNext::Close);
    CHECK(host.calls.size() == 4);
    CHECK(host.calls[0] == "save:pad.tablet");
    CHECK(host.calls[1] == "binding:cross=key:Space");
    CHECK(host.calls[2] == "apply_mapped");
    CHECK(host.calls[3] == "snap:on");
}

// Reset removes the player's copy and the binding, and the editor reopens.
static void test_apply_results_reset() {
    Editor e;
    const Screen s = editor_screen();
    open_for_results(e, s);
    tap_tool(e, Tool::Reset);
    FakeEditorHost host;
    CHECK(apply_editor_results(e, host, "pad", MappedTable{}, nullptr) == EditorNext::Reopen);
    CHECK(
        (host.calls == std::vector<std::string>{"delete:pad.tablet", "binding:none", "set_names"}));
}

// A duplicate keeps the original; a rename replaces it. Both save under the
// new name, refresh the name list and select it.
static void test_apply_results_duplicate_and_rename() {
    Editor e;
    const Screen s = editor_screen();
    open_for_results(e, s);
    tap_tool(e, Tool::Layout);
    CHECK(pick(e, "duplicate"));
    CHECK(e.layout().name == "pad copy");
    FakeEditorHost host;
    bool renamed = false;
    tap_tool(e, Tool::Done);
    host.name_list = {"pad", "keys", "pad+keys", "pad copy"};
    CHECK(apply_editor_results(e, host, "pad", MappedTable{}, &renamed) == EditorNext::Close);
    CHECK(!renamed);
    // No delete: "pad" is still there.
    CHECK((host.calls == std::vector<std::string>{"save:pad copy.tablet", "snap:on", "set_names",
                                                  "select:pad copy"}));

    // Rename: the typing is asked for first, and the old copy goes.
    Editor r;
    open_for_results(r, s);
    tap_tool(r, Tool::Layout);
    CHECK(pick(r, "duplicate"));
    tap_tool(r, Tool::Layout);
    CHECK(pick(r, "rename"));
    FakeEditorHost host2;
    renamed = false;
    CHECK(apply_editor_results(r, host2, "pad copy", MappedTable{}, &renamed) == EditorNext::Keep);
    CHECK(renamed);
    CHECK(host2.calls.empty());
    r.text("mine");
    r.text_done();
    CHECK(r.layout().name == "mine");
    tap_tool(r, Tool::Done);
    host2.name_list = {"pad", "keys", "pad+keys", "mine"};
    CHECK(apply_editor_results(r, host2, "pad copy", MappedTable{}, &renamed) == EditorNext::Close);
    CHECK((host2.calls == std::vector<std::string>{"save:mine.tablet", "snap:on",
                                                   "delete:pad copy.tablet", "set_names",
                                                   "select:mine"}));
}

// Layout > Switch selects that layout and reopens; Delete removes the user
// copy of the edited one.
static void test_apply_results_switch_and_delete() {
    Editor e;
    const Screen s = editor_screen();
    open_for_results(e, s);
    tap_tool(e, Tool::Layout);
    CHECK(pick(e, "switch"));
    CHECK(pick(e, "keys"));
    FakeEditorHost host;
    CHECK(apply_editor_results(e, host, "pad", MappedTable{}, nullptr) == EditorNext::Reopen);
    CHECK((host.calls == std::vector<std::string>{"select:keys"}));

    // Delete works on a user layout: duplicate first, so the name is not a
    // built-in.
    Editor d;
    open_for_results(d, s);
    tap_tool(d, Tool::Layout);
    CHECK(pick(d, "duplicate"));
    tap_tool(d, Tool::Layout);
    CHECK(pick(d, "delete"));
    FakeEditorHost host2;
    CHECK(apply_editor_results(d, host2, "pad", MappedTable{}, nullptr) == EditorNext::Reopen);
    CHECK((host2.calls == std::vector<std::string>{"delete:pad copy.tablet", "set_names"}));
}

// Escape is Done, without a tap on the toolbar.
static void test_editor_done_without_a_tap() {
    Editor e;
    const Screen s = editor_screen();
    open_for_results(e, s);
    e.done();
    FakeEditorHost host;
    CHECK(apply_editor_results(e, host, "pad", MappedTable{}, nullptr) == EditorNext::Close);
    CHECK(host.calls.front() == "save:pad.tablet");
}

// The editor's own layer, for the same viewing: idle, with a control
// selected and dragged (its guides showing), and with the Add picker open.
static void dump_editor(const char *dir, const Screen &s) {
    static const char *const kStates[] = {"idle", "selected", "picker"};
    for (int state = 0; state < 3; ++state) {
        Editor e;
        e.set_screen(s);
        Layout l = editor_pad();
        std::string err;
        if (builtin_layout("pad", Form::Tablet))
            (void)parse_layout(builtin_layout("pad", Form::Tablet), &l, &err);
        e.open(l, Form::Tablet, MappedTable{}, false, true);
        e.set_names({"pad", "keys", "pad+keys"});
        if (state > 0) {
            // Select the first control and drag it a little, so the
            // selection outline and the snap guides both show.
            const Rect first = control_rect(e.layout(), 0, 0, e.content_screen());
            const double cx = first.x + first.w / 2.0, cy = first.y + first.h / 2.0;
            e.finger_down(1, cx, cy);
            e.finger_motion(1, cx + 57, cy - 39);
            if (state == 2)
                e.finger_up(1);
        }
        if (state == 2)
            tap_tool(e, Tool::Add);
        const ControlsView v = make_view(e, s);
        std::vector<uint8_t> px(size_t(s.dw) * s.dh * 4, 0);
        Canvas c(px, s.dw, s.dh, v.opacity);
        paint_overlay(c, v, Rect{0, 0, s.dw, s.dh});
        char tail[96];
        snprintf(tail, sizeof tail, "/editor-%s.%s.%dx%d.rgba", kStates[state],
                 form_name(Form::Tablet), s.dw, s.dh);
        const std::string file = std::string(dir) + tail;
        write_file(file, std::string(px.begin(), px.end()));
        printf("wrote %s\n", file.c_str());
    }
}

// Bottom-anchored: its offset is measured from the area's bottom edge, which
// the reserved band does not move.
static bool anchor_row_is_bottom(Anchor a) {
    return a == Anchor::BottomLeft || a == Anchor::Bottom || a == Anchor::BottomRight;
}

// The toolbar's band is reserved: the pad built-in's top-centre KEYS tab is
// drawn below the toolbar while editing, and a tap on it selects it.
static void test_editor_reserves_the_toolbar_band() {
    const char *text = builtin_layout("pad", Form::Tablet);
    CHECK(text != nullptr);
    if (!text)
        return;
    Layout l;
    std::string err;
    CHECK(parse_layout(text, &l, &err));
    // Find the top-centre toggle.
    int tg = -1, tc = -1;
    for (int g = 0; g < int(l.groups.size()); ++g)
        for (int c = 0; c < int(l.groups[g].controls.size()); ++c)
            if (l.groups[g].controls[c].kind == Kind::Toggle &&
                l.groups[g].controls[c].anchor == Anchor::Top) {
                tg = g;
                tc = c;
            }
    CHECK(tg >= 0);
    if (tg < 0)
        return;

    Editor e;
    const Screen s = editor_screen();
    e.set_screen(s);
    e.open(l, Form::Tablet, MappedTable{}, false, true);
    // The content area starts below the toolbar, and so does the tab.
    const Rect bar = e.toolbar().back().rect;
    const Rect area = anchor_area(e.layout(), e.content_screen());
    CHECK(area.y >= bar.y + bar.h);
    const Rect tab = control_rect(e.layout(), tg, tc, e.content_screen());
    CHECK(tab.y >= bar.y + bar.h);
    // In play it sits under the toolbar's band, which is what made it
    // unreachable before.
    CHECK(control_rect(e.layout(), tg, tc, s).y < bar.y + bar.h);
    // A tap on it selects it, and nothing of the toolbar covers it.
    tap_rect(e, tab);
    CHECK(e.selected_group() == tg && e.selected_control() == tc);
    for (const ToolbarItem &t : e.toolbar())
        CHECK(!overlaps(t.rect, tab));
    // The view draws it where the hit test found it.
    const ControlsView v = make_view(e, s);
    CHECK(v.selected >= 0 && v.selected < int(v.controls.size()));
    if (v.selected >= 0)
        CHECK(v.controls[v.selected].rect.y == tab.y);
    // Bottom-anchored controls do not move: only the top of the area does.
    for (int g = 0; g < int(e.layout().groups.size()); ++g)
        for (int c = 0; c < int(e.layout().groups[g].controls.size()); ++c)
            if (anchor_row_is_bottom(e.layout().groups[g].controls[c].anchor))
                CHECK(control_rect(e.layout(), g, c, e.content_screen()).y ==
                      control_rect(e.layout(), g, c, s).y);
}

// Every finger goes when the window loses focus, and a moved drag is kept.
static void test_editor_cancel_fingers() {
    Editor e;
    const Screen s = editor_screen();
    open_for_results(e, s);
    const Rect cross = cross_rect(e, s);
    e.finger_down(1, cross.x + cross.w / 2.0, cross.y + cross.h / 2.0);
    e.finger_motion(1, cross.x + cross.w / 2.0 - 120, cross.y + cross.h / 2.0);
    const Rect moved = cross_rect(e, s);
    CHECK(moved.x != cross.x);
    e.cancel_fingers();
    CHECK(e.guides().empty());
    CHECK(cross_rect(e, s).x == moved.x); // the drag was committed, not undone
    // A motion after the cancel moves nothing: that finger is gone.
    e.finger_motion(1, cross.x, cross.y);
    CHECK(cross_rect(e, s).x == moved.x);
}

// A finger the system takes away (a call, a gesture the OS claimed) drops
// its gesture: the drag goes back where it started, and a picker item under
// it is not chosen. cancel_fingers, in contrast, commits what was drawn.
static void test_editor_finger_cancel_discards_the_gesture() {
    Editor e;
    const Screen s = editor_screen();
    open_for_results(e, s);
    const Rect cross = cross_rect(e, s);
    e.finger_down(1, cross.x + cross.w / 2.0, cross.y + cross.h / 2.0);
    e.finger_motion(1, cross.x + cross.w / 2.0 - 120, cross.y + cross.h / 2.0);
    CHECK(cross_rect(e, s).x != cross.x);
    e.finger_cancel(1);
    CHECK(e.guides().empty());
    CHECK(cross_rect(e, s).x == cross.x); // the drag was undone, not committed
    // That finger is gone: a motion after the cancel moves nothing.
    e.finger_motion(1, cross.x - 300, cross.y);
    CHECK(cross_rect(e, s).x == cross.x);
}

// renaming() is what the host drives the system keyboard from: it clears on
// text_done, while the rename flag the host keeps for Done does not.
static void test_editor_renaming_clears_on_done() {
    Editor e;
    const Screen s = editor_screen();
    open_for_results(e, s);
    CHECK(!e.renaming());
    tap_tool(e, Tool::Layout);
    CHECK(pick(e, "duplicate"));
    tap_tool(e, Tool::Layout);
    CHECK(pick(e, "rename"));
    CHECK(e.renaming());
    e.text("mine");
    CHECK(e.renaming());
    e.text_done();
    CHECK(!e.renaming());
    CHECK(e.layout().name == "mine");
}

// Every built-in a touch-only player can be on offers a way to the settings
// page: pad and pad+keys carry an F10 action, keys has an F10 key.
static void test_builtins_reach_the_settings_page() {
    static const Form kForms[] = {Form::Tablet, Form::PhoneLandscape, Form::PhonePortrait};
    for (const char *name : {"pad", "keys", "pad+keys"}) {
        for (Form form : kForms) {
            const char *text = builtin_layout(name, form);
            CHECK(text != nullptr);
            if (!text)
                continue;
            Layout l;
            std::string err;
            CHECK(parse_layout(text, &l, &err));
            int actions = 0, f10_keys = 0;
            for (const Group &g : l.groups)
                for (const Control &c : g.controls) {
                    if (c.kind == Kind::Action && c.action == "settings") {
                        ++actions;
                        CHECK(!c.label.empty());
                    }
                    if (c.kind == Kind::Key && c.scancode == kScanF10)
                        ++f10_keys;
                }
            int cycles = 0;
            for (const Group &g : l.groups)
                for (const Control &c : g.controls)
                    if (c.kind == Kind::Toggle && c.target == "next")
                        ++cycles;
            if (actions + f10_keys + cycles < 1)
                fprintf(stderr, "  %s %s reaches no settings page\n", name, form_name(form));
            CHECK(actions + f10_keys + cycles >= 1);
            // pad and pad+keys carry the action; keys has its own F10 key on
            // a tablet and, on a phone, a tab to the layout that does.
            if (std::string(name) != "keys")
                CHECK(actions == 1);
        }
    }
}

int main(int argc, char **argv) {
    if (argc == 3 && strcmp(argv[1], "--dump") == 0) {
        dump_builtins(argv[2]);
        return g_failures ? 1 : 0;
    }
    test_json_round_trip();
    test_json_errors_name_the_line();
    test_json_depth_is_bounded();
    test_layout_parse_and_write();
    test_stick_radius_and_zone_round_trip();
    test_layout_geometry_and_hits();
    test_stack_on_cycles_are_bounded();
    test_builtin_keys_matches_the_old_keypad();
    test_form_for();
    test_layout_store();
    test_raster_disc();
    test_raster_ring();
    test_raster_radial_gradient();
    test_raster_opacity_premultiplies();
    test_raster_polygon();
    test_raster_stroke();
    test_raster_source_over();
    test_raster_text();
    test_raster_matches_legacy_keypad_pixels();
    test_router_space_key();
    test_tablet_keyboard_safe_area();
    test_router_latched_shift();
    test_router_left_tab_toggle();
    test_router_gap_is_claimed_silently();
    test_router_game_area_not_claimed();
    test_router_cancel_does_not_release_latch();
    test_router_two_fingers_shift_held_and_a();
    test_router_set_enabled_false_releases_and_blocks();
    test_router_cancel_all_releases_everything();
    test_router_set_layout_releases_held_key();
    test_router_set_layout_releases_latched_modifier();
    test_router_finger_cancel_on_held_modifier();
    test_router_two_fingers_same_key_first_lift_releases();
    test_router_set_layout_null_disables_hit_testing();
    test_router_state_out_of_range_is_zero();
    test_stick_output();
    test_dpad_hat();
    test_pad_state_merge();
    test_vpad_edges();
    test_to_host_scales_axes();
    test_router_pad_buttons();
    test_router_pad_stick_dpad_and_cancel();
    test_router_second_finger_on_stick_or_dpad_is_inert();
    test_router_generation_bumps_only_on_hat_or_knob_change();
    test_make_view_keys();
    test_make_view_matches_the_old_keypad();
    test_make_view_revision_ignores_undrawn_press();
    test_tablet_fallback();
    test_raster_shape_bounds_are_clamped();
    test_binding_parse_mapped();
    test_binding_button_mouse();
    test_binding_cursor_stick();
    test_binding_arrows_stick();
    test_binding_horizontal_arrows();
    test_tablet_simultaneous_controls();
    test_binding_wheel_button();
    test_binding_action_button();
    test_binding_scroll_stick();
    test_binding_release_all();
    test_binding_cursor_starts_centred();
    test_binding_aliased_key_is_ref_counted();
    test_binding_aliased_mouse_button_is_ref_counted();
    test_binding_release_all_latches_still_held_buttons();
    test_rumble_sink_truth_table();
    test_controls_area_below_the_game();
    test_router_claims_the_controls_area();
    test_make_view_carries_the_controls_area();
    test_stick_without_radius_uses_half_its_zone();
    test_pad_art_cross_button();
    test_pad_art_stays_in_its_rect();
    test_builtin_layouts_fit_and_do_not_overlap();
    test_phone_builtin_layouts_fit_and_do_not_overlap();
    test_hidden_bits_are_clamped_to_the_group_count();
    test_a_hidden_group_survives_a_rotation();
    test_hidden_keyboard_does_not_hide_pad_after_switch();
    test_make_view_pad_revision();
    test_layer_revisions_are_per_group();
    test_small_key_label_fits();
    test_pad_from_sdl();
    test_layout_wanted_truth_table();
    test_layout_content();
    test_router_toggles_only();
    test_auto_hidden_layouts_keep_only_layout_switches();
    test_vpad_trigger_edges();
    test_rumble_router_controller_refresh();
    test_rumble_router_device_refresh();
    test_rumble_router_sink_change();
    test_rumble_router_stop();
    test_editor_open_and_toolbar();
    test_editor_select_drag_and_reanchor();
    test_editor_snap_off_and_snap_to_control();
    test_editor_pinch();
    test_editor_add_delete_bind();
    test_editor_bind_native_button();
    test_editor_grid_key_moves_its_group();
    test_editor_done_reset_and_layout_names();
    test_editor_tools_mid_gesture();
    test_editor_reanchor_every_side();
    test_editor_picker_scroll_is_not_a_tap();
    test_editor_pinch_keeps_aspect_and_area();
    test_editor_custom_group_beside_a_grid_custom();
    test_editor_layout_switch_and_delete();
    test_editor_view();
    test_editor_paints_its_layer();
    test_write_mapped_diff();
    test_apply_results_save();
    test_apply_results_save_binding();
    test_apply_results_reset();
    test_apply_results_duplicate_and_rename();
    test_apply_results_switch_and_delete();
    test_editor_done_without_a_tap();
    test_editor_reserves_the_toolbar_band();
    test_editor_cancel_fingers();
    test_editor_finger_cancel_discards_the_gesture();
    test_editor_renaming_clears_on_done();
    test_builtins_reach_the_settings_page();
    if (g_failures) {
        fprintf(stderr, "%d failures\n", g_failures);
        return 1;
    }
    printf("controls_tests: all passed\n");
    return 0;
}
