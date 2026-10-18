// layout.h - the on-screen controls' layout model: what a JSON layout file
// describes, how it parses and writes back, and the anchor geometry and hit
// test that place it on screen. SDL-free (uses SDL_Scancode values spelled
// out in keypad_layout.h) so it links into the host-free unit tests.
// Design: docs/superpowers/specs/2026-09-17-touch-controls-design.md.
#pragma once

#include <string>
#include <vector>

namespace controls {

enum class Kind { Key, Button, Dpad, Stick, Toggle, Action };
enum class Anchor { TopLeft, Top, TopRight, Left, Center, Right, BottomLeft, Bottom, BottomRight };
enum class PadButton {
    Cross,
    Circle,
    Square,
    Triangle,
    L1,
    R1,
    L2,
    R2,
    L3,
    R3,
    Select,
    Start,
    Ps,
    Count
};
enum class Form { Tablet, PhoneLandscape, PhonePortrait };

const char *form_name(Form f);            // "tablet", "phone-landscape", "phone-portrait"
const char *pad_button_name(PadButton b); // "cross" ... "ps"
bool pad_button_from_name(const std::string &s, PadButton *out);

// SDL_Scancode values by their layout-file spelling: letters, digits,
// F1-F12, punctuation, navigation and the three left modifiers. 0/nullptr
// for anything else.
int scancode_from_name(const std::string &name);
const char *scancode_name(int scancode);

struct Control {
    Kind kind = Kind::Key;
    Anchor anchor = Anchor::BottomLeft;
    // Points. Non-Stick: "size" sets w = h; "radius" sets w = h = 2r. Stick:
    // w/h are the zone (hit test and floating base clamp), independent of
    // `radius` below; "zone": [w, h] sets them, else they default to 2r.
    double x = 0, y = 0, w = 0, h = 0;
    int col = -1, row = -1, span = 1;    // inside a grid group only
    int scancode = 0;                    // Key
    std::string label;                   // drawn text; Key defaults to scancode_name
    PadButton button = PadButton::Cross; // Button
    int stick = 0;                       // Stick: 0 left, 1 right
    bool floating = true;                // Stick
    double deadzone = 0.15;              // Stick
    double radius = 0;                   // Stick: knob travel, points; "radius" sets it
    std::string target;                  // Toggle: group id, layout name, or "next"
    std::string label_off;               // Toggle: label while its target group is hidden
    std::string stack_on;                // Toggle: sits on top of this group while it is visible
    std::string action;                  // Action: "settings" | "system_keyboard" | "edit_layout"
};

struct Grid {
    int cols = 0, rows = 0;
    double key = 36, gap = 4;
};

struct Group {
    std::string id;
    bool visible = true;
    bool has_grid = false;
    Grid grid;
    Anchor anchor = Anchor::BottomLeft; // grid groups only
    double x = 0, y = 0;                // grid groups only
    std::vector<Control> controls;
};

struct Layout {
    int version = 1;
    std::string name;
    double opacity = 1.0;
    double scale = 1.0;     // sizes only (not offsets); the "size" setting multiplies it
    bool safe_inset = true; // anchors resolve inside the safe area
    std::vector<Group> groups;
};

// Parses a layout JSON document into *out. Unknown top-level and control
// fields are ignored; an unknown control kind is skipped and, if `warnings`
// is given, named there. A malformed required field (a non-array "groups",
// a key without a known scancode, a button without a known button, or a
// grid control without col/row) fails the parse and names the group and
// control index in *error, the same way json_parse names a line.
bool parse_layout(const std::string &text, Layout *out, std::string *error,
                  std::vector<std::string> *warnings = nullptr);

// Writes every field needed to round-trip `l`; fields at their struct
// default are omitted.
std::string write_layout(const Layout &l);

struct Rect {
    int x = 0, y = 0, w = 0, h = 0;
    bool contains(double px, double py) const {
        return w > 0 && h > 0 && px >= x && py >= y && px < x + w && py < y + h;
    }
    bool empty() const {
        return w <= 0 || h <= 0;
    }
};

struct Screen {
    int dw = 0, dh = 0; // drawable pixels
    double scale = 1.0; // drawable pixels per point
    Rect safe;          // safe area in drawable pixels
    Rect controls_area; // portrait: the space below the game; empty otherwise
};

// Portrait on a phone: the strip below the game image `game`, down to the
// safe area's bottom inset `safe_bottom`, in drawable pixels. Empty in
// landscape (dh <= dw) or when the game image leaves no room below it.
Rect controls_area_below(int dw, int dh, const Rect &game, int safe_bottom);

// The rectangle anchors resolve in: controls_area if set, else safe (if the
// layout wants it), else the whole drawable.
Rect anchor_area(const Layout &l, const Screen &s);
// A grid group's box, or the union of a non-grid group's controls.
Rect group_rect(const Layout &l, int group, const Screen &s);
Rect control_rect(const Layout &l, int group, int control, const Screen &s);

struct Hit {
    int group = -1, control = -1;
    bool gap = false; // inside a visible grid group, between keys
};
// Finger-down resolution at a drawable-pixel point: every toggle first
// (any group, even a hidden one, since its tab is always drawn), then
// visible groups' controls last-group-first and last-control-first, then a
// visible grid group's own box as a gap.
Hit hit_test(const Layout &l, const Screen &s, double px, double py);

// What a layout is made of, for auto-hide: only key controls, only pad
// controls (button, dpad, stick), or both. Toggles and actions count as
// neither, and a layout with no pad control is Keys.
enum class LayoutContent { Keys, Pad, Mixed };
LayoutContent layout_content(const Layout &l);

// Whether a layout of `c` shows, given the devices present and the
// pad_with_controller setting: a hardware keyboard hides Keys, a controller
// hides Pad unless pad_with_controller, and Mixed hides only when both are
// present (again unless pad_with_controller). `forced` always shows.
bool layout_wanted(LayoutContent c, bool keyboard_present, bool controller_present,
                   bool pad_with_controller, bool forced);

} // namespace controls
