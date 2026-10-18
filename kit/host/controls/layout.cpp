// layout.cpp - see layout.h. Parses/writes the JSON layout schema and
// resolves anchor geometry and hit testing against a Screen.
#include "layout.h"

#include "../keypad_layout.h"
#include "json.h"

#include <algorithm>
#include <cmath>

namespace controls {

namespace {

// --- name tables --------------------------------------------------------

struct ScancodeEntry {
    const char *name;
    int value;
};

// SDL_Scancode values, spelled by their layout-file name. keypad_tests.cpp
// checks the KeypadScan constants themselves against SDL's enumerators.
const ScancodeEntry kScancodes[] = {
    {"A", kScanA},
    {"B", kScanB},
    {"C", kScanC},
    {"D", kScanD},
    {"E", kScanE},
    {"F", kScanF},
    {"G", kScanG},
    {"H", kScanH},
    {"I", kScanI},
    {"J", kScanJ},
    {"K", kScanK},
    {"L", kScanL},
    {"M", kScanM},
    {"N", kScanN},
    {"O", kScanO},
    {"P", kScanP},
    {"Q", kScanQ},
    {"R", kScanR},
    {"S", kScanS},
    {"T", kScanT},
    {"U", kScanU},
    {"V", kScanV},
    {"W", kScanW},
    {"X", kScanX},
    {"Y", kScanY},
    {"Z", kScanZ},
    {"1", kScan1},
    {"2", kScan2},
    {"3", kScan3},
    {"4", kScan4},
    {"5", kScan5},
    {"6", kScan6},
    {"7", kScan7},
    {"8", kScan8},
    {"9", kScan9},
    {"0", kScan0},
    {"Return", kScanReturn},
    {"Escape", kScanEscape},
    {"Backspace", kScanBackspace},
    {"Tab", kScanTab},
    {"Space", kScanSpace},
    {"Minus", kScanMinus},
    {"Equals", kScanEquals},
    {"LeftBracket", kScanLeftBracket},
    {"RightBracket", kScanRightBracket},
    {"Backslash", kScanBackslash},
    {"Semicolon", kScanSemicolon},
    {"Apostrophe", kScanApostrophe},
    {"Grave", kScanGrave},
    {"Comma", kScanComma},
    {"Period", kScanPeriod},
    {"Slash", kScanSlash},
    {"F1", kScanF1},
    {"F2", kScanF2},
    {"F3", kScanF3},
    {"F4", kScanF4},
    {"F5", kScanF5},
    {"F6", kScanF6},
    {"F7", kScanF7},
    {"F8", kScanF8},
    {"F9", kScanF9},
    {"F10", kScanF10},
    {"F11", kScanF11},
    {"F12", kScanF12},
    {"Insert", kScanInsert},
    {"Home", kScanHome},
    {"PageUp", kScanPageUp},
    {"Delete", kScanDelete},
    {"End", kScanEnd},
    {"PageDown", kScanPageDown},
    {"Right", kScanRight},
    {"Left", kScanLeft},
    {"Down", kScanDown},
    {"Up", kScanUp},
    {"LCtrl", kScanLCtrl},
    {"LShift", kScanLShift},
    {"LAlt", kScanLAlt},
};

struct PadButtonEntry {
    const char *name;
    PadButton value;
};

const PadButtonEntry kPadButtons[] = {
    {"cross", PadButton::Cross},   {"circle", PadButton::Circle},
    {"square", PadButton::Square}, {"triangle", PadButton::Triangle},
    {"l1", PadButton::L1},         {"r1", PadButton::R1},
    {"l2", PadButton::L2},         {"r2", PadButton::R2},
    {"l3", PadButton::L3},         {"r3", PadButton::R3},
    {"select", PadButton::Select}, {"start", PadButton::Start},
    {"ps", PadButton::Ps},
};

struct AnchorEntry {
    const char *name;
    Anchor value;
};

const AnchorEntry kAnchors[] = {
    {"top-left", Anchor::TopLeft},
    {"top-center", Anchor::Top},
    {"top-right", Anchor::TopRight},
    {"center-left", Anchor::Left},
    {"center", Anchor::Center},
    {"center-right", Anchor::Right},
    {"bottom-left", Anchor::BottomLeft},
    {"bottom-center", Anchor::Bottom},
    {"bottom-right", Anchor::BottomRight},
};

struct KindEntry {
    const char *name;
    Kind value;
};

const KindEntry kKinds[] = {
    {"key", Kind::Key},     {"button", Kind::Button}, {"dpad", Kind::Dpad},
    {"stick", Kind::Stick}, {"toggle", Kind::Toggle}, {"action", Kind::Action},
};

bool kind_from_name(const std::string &s, Kind *out) {
    for (const auto &e : kKinds)
        if (s == e.name) {
            *out = e.value;
            return true;
        }
    return false;
}

const char *kind_name(Kind k) {
    for (const auto &e : kKinds)
        if (e.value == k)
            return e.name;
    return "key";
}

Anchor anchor_from_name(const std::string &s) {
    for (const auto &e : kAnchors)
        if (s == e.name)
            return e.value;
    return Anchor::BottomLeft;
}

const char *anchor_name(Anchor a) {
    for (const auto &e : kAnchors)
        if (e.value == a)
            return e.name;
    return "bottom-left";
}

// The visible index of a group, for error messages: its id if it has one,
// else its position among the parsed groups.
std::string group_label(const Group &g, size_t index) {
    return g.id.empty() ? ("#" + std::to_string(index)) : g.id;
}

int find_group_index(const Layout &l, const std::string &id) {
    for (size_t i = 0; i < l.groups.size(); ++i)
        if (l.groups[i].id == id)
            return int(i);
    return -1;
}

// --- placement ------------------------------------------------------------

// `px(v) = lround(v * s.scale)`, the drawable-pixel rounding rule shared by
// every geometry computation below.
int px(double v, const Screen &s) {
    return int(lround(v * s.scale));
}

// Places a w x h box inside `area` per the anchor rule: left/right anchors
// (and top/bottom) hug that edge with an inset of ox/oy; the remaining
// anchors centre on that axis.
Rect place(const Rect &area, int w, int h, Anchor anchor, int ox, int oy) {
    Rect r;
    r.w = w;
    r.h = h;
    switch (anchor) {
    case Anchor::TopLeft:
    case Anchor::Left:
    case Anchor::BottomLeft:
        r.x = area.x + ox;
        break;
    case Anchor::TopRight:
    case Anchor::Right:
    case Anchor::BottomRight:
        r.x = area.x + area.w - w - ox;
        break;
    default: // Top, Center, Bottom: horizontal centre
        r.x = area.x + (area.w - w) / 2 + ox;
        break;
    }
    switch (anchor) {
    case Anchor::TopLeft:
    case Anchor::Top:
    case Anchor::TopRight:
        r.y = area.y + oy;
        break;
    case Anchor::BottomLeft:
    case Anchor::Bottom:
    case Anchor::BottomRight:
        r.y = area.y + area.h - h - oy;
        break;
    default: // Left, Center, Right: vertical centre
        r.y = area.y + (area.h - h) / 2 + oy;
        break;
    }
    return r;
}

// --- parsing ---------------------------------------------------------------

bool parse_control(const Json &cj, const Group &grp, size_t group_index, size_t control_index,
                   bool *skip, Control *out, std::string *error,
                   std::vector<std::string> *warnings) {
    *skip = false;
    std::string kind_str = cj.str("kind", "");
    Kind kind;
    if (!kind_from_name(kind_str, &kind)) {
        *skip = true;
        if (warnings)
            warnings->push_back("group " + group_label(grp, group_index) + " control " +
                                std::to_string(control_index) + ": unknown kind \"" + kind_str +
                                "\"");
        return true;
    }

    Control c;
    c.kind = kind;
    c.anchor = anchor_from_name(cj.str("anchor", "bottom-left"));
    c.x = cj.num("x", 0);
    c.y = cj.num("y", 0);
    if (kind == Kind::Stick) {
        // radius is the knob's travel, independent of the zone (w/h): the
        // hit-test and floating-base-clamp rect. "zone" sets it explicitly;
        // without one it defaults to 2r, matching the old round-control size.
        // A stick with a zone but no radius travels half the zone's short
        // side rather than not at all.
        c.radius = cj.num("radius", 0);
        if (const Json *zonej = cj.get("zone");
            zonej && zonej->type == Json::Array && zonej->a.size() == 2) {
            c.w = zonej->a[0].n;
            c.h = zonej->a[1].n;
            if (!cj.get("radius"))
                c.radius = std::min(c.w, c.h) / 2;
        } else {
            c.w = c.h = 2 * c.radius;
        }
    } else if (cj.get("size")) {
        double sz = cj.num("size", 0);
        c.w = c.h = sz;
    } else if (cj.get("radius")) {
        double r = cj.num("radius", 0);
        c.w = c.h = 2 * r;
    } else {
        c.w = cj.num("w", 0);
        c.h = cj.num("h", 0);
    }
    c.col = cj.get("col") ? int(cj.num("col", -1)) : -1;
    c.row = cj.get("row") ? int(cj.num("row", -1)) : -1;
    c.span = int(cj.num("span", 1));
    c.label = cj.str("label", "");
    c.label_off = cj.str("label_off", "");
    c.target = cj.str("target", "");
    c.stack_on = cj.str("stack_on", "");
    c.action = cj.str("action", "");
    c.deadzone = cj.num("deadzone", 0.15);

    if (grp.has_grid && (!cj.get("col") || !cj.get("row"))) {
        if (error)
            *error = "group " + group_label(grp, group_index) + " control " +
                     std::to_string(control_index) + ": a grid control needs col/row";
        return false;
    }

    if (kind == Kind::Key) {
        std::string sc = cj.str("scancode", "");
        int code = scancode_from_name(sc);
        if (code == 0) {
            if (error)
                *error = "group " + group_label(grp, group_index) + " control " +
                         std::to_string(control_index) + ": unknown scancode \"" + sc + "\"";
            return false;
        }
        c.scancode = code;
        if (!cj.get("label")) {
            const char *nm = scancode_name(code);
            c.label = nm ? nm : "";
        }
    } else if (kind == Kind::Button) {
        std::string bn = cj.str("button", "");
        PadButton pb;
        if (!pad_button_from_name(bn, &pb)) {
            if (error)
                *error = "group " + group_label(grp, group_index) + " control " +
                         std::to_string(control_index) + ": unknown button \"" + bn + "\"";
            return false;
        }
        c.button = pb;
    } else if (kind == Kind::Stick) {
        c.stick = cj.str("stick", "left") == "right" ? 1 : 0;
        c.floating = cj.str("mode", "floating") != "fixed";
    }

    *out = std::move(c);
    return true;
}

bool parse_group(const Json &gj, size_t index, Group *out, std::string *error,
                 std::vector<std::string> *warnings) {
    Group grp;
    grp.id = gj.str("id", "");
    grp.visible = gj.boolean("visible", true);
    if (const Json *gridj = gj.get("grid"); gridj && gridj->type == Json::Object) {
        grp.has_grid = true;
        grp.grid.cols = int(gridj->num("cols", 0));
        grp.grid.rows = int(gridj->num("rows", 0));
        grp.grid.key = gridj->num("key", 36);
        grp.grid.gap = gridj->num("gap", 4);
    }
    grp.anchor = anchor_from_name(gj.str("anchor", "bottom-left"));
    grp.x = gj.num("x", 0);
    grp.y = gj.num("y", 0);

    if (const Json *controlsj = gj.get("controls"); controlsj && controlsj->type == Json::Array) {
        for (size_t ci = 0; ci < controlsj->a.size(); ++ci) {
            bool skip = false;
            Control c;
            if (!parse_control(controlsj->a[ci], grp, index, ci, &skip, &c, error, warnings))
                return false;
            if (!skip)
                grp.controls.push_back(std::move(c));
        }
    }
    *out = std::move(grp);
    return true;
}

} // namespace

const char *form_name(Form f) {
    switch (f) {
    case Form::Tablet:
        return "tablet";
    case Form::PhoneLandscape:
        return "phone-landscape";
    case Form::PhonePortrait:
        return "phone-portrait";
    }
    return "";
}

const char *pad_button_name(PadButton b) {
    for (const auto &e : kPadButtons)
        if (e.value == b)
            return e.name;
    return "";
}

bool pad_button_from_name(const std::string &s, PadButton *out) {
    for (const auto &e : kPadButtons)
        if (s == e.name) {
            *out = e.value;
            return true;
        }
    return false;
}

int scancode_from_name(const std::string &name) {
    for (const auto &e : kScancodes)
        if (name == e.name)
            return e.value;
    return 0;
}

const char *scancode_name(int scancode) {
    for (const auto &e : kScancodes)
        if (e.value == scancode)
            return e.name;
    return nullptr;
}

bool parse_layout(const std::string &text, Layout *out, std::string *error,
                  std::vector<std::string> *warnings) {
    std::string local_error;
    std::string *err = error ? error : &local_error;
    Json root;
    if (!json_parse(text, &root, err)) {
        *out = Layout();
        return false;
    }
    if (root.type != Json::Object) {
        *err = "a layout must be a JSON object";
        *out = Layout();
        return false;
    }

    Layout l;
    l.version = int(root.num("version", 1));
    l.name = root.str("name", "");
    l.opacity = root.num("opacity", 1.0);
    l.scale = root.num("scale", 1.0);
    l.safe_inset = root.boolean("safe_inset", true);

    if (const Json *groups = root.get("groups")) {
        if (groups->type != Json::Array) {
            *err = "\"groups\" must be an array";
            *out = Layout();
            return false;
        }
        for (size_t gi = 0; gi < groups->a.size(); ++gi) {
            Group grp;
            if (!parse_group(groups->a[gi], gi, &grp, err, warnings)) {
                *out = Layout();
                return false;
            }
            l.groups.push_back(std::move(grp));
        }
    }
    *out = std::move(l);
    return true;
}

namespace {

Json write_control(const Control &c) {
    Json j = Json::object();
    j.set("kind", Json::string(kind_name(c.kind)));
    j.set("anchor", Json::string(anchor_name(c.anchor)));
    if (c.x != 0)
        j.set("x", Json::number(c.x));
    if (c.y != 0)
        j.set("y", Json::number(c.y));
    if (c.kind == Kind::Stick) {
        j.set("radius", Json::number(c.radius));
        if (c.w != 2 * c.radius || c.h != 2 * c.radius) {
            Json zone = Json::array();
            zone.a.push_back(Json::number(c.w));
            zone.a.push_back(Json::number(c.h));
            j.set("zone", zone);
        }
    } else {
        j.set("w", Json::number(c.w));
        j.set("h", Json::number(c.h));
    }
    if (c.col != -1)
        j.set("col", Json::number(c.col));
    if (c.row != -1)
        j.set("row", Json::number(c.row));
    if (c.span != 1)
        j.set("span", Json::number(c.span));
    if (c.kind == Kind::Key) {
        const char *nm = scancode_name(c.scancode);
        j.set("scancode", Json::string(nm ? nm : ""));
    }
    if (!c.label.empty())
        j.set("label", Json::string(c.label));
    if (c.kind == Kind::Button)
        j.set("button", Json::string(pad_button_name(c.button)));
    if (c.kind == Kind::Stick) {
        j.set("stick", Json::string(c.stick == 1 ? "right" : "left"));
        j.set("mode", Json::string(c.floating ? "floating" : "fixed"));
        if (c.deadzone != 0.15)
            j.set("deadzone", Json::number(c.deadzone));
    }
    if (!c.target.empty())
        j.set("target", Json::string(c.target));
    if (!c.label_off.empty())
        j.set("label_off", Json::string(c.label_off));
    if (!c.stack_on.empty())
        j.set("stack_on", Json::string(c.stack_on));
    if (!c.action.empty())
        j.set("action", Json::string(c.action));
    return j;
}

Json write_group(const Group &g) {
    Json j = Json::object();
    if (!g.id.empty())
        j.set("id", Json::string(g.id));
    if (!g.visible)
        j.set("visible", Json::boolean_value(false));
    if (g.has_grid) {
        Json grid = Json::object();
        grid.set("cols", Json::number(g.grid.cols));
        grid.set("rows", Json::number(g.grid.rows));
        if (g.grid.key != 36)
            grid.set("key", Json::number(g.grid.key));
        if (g.grid.gap != 4)
            grid.set("gap", Json::number(g.grid.gap));
        j.set("grid", grid);
        j.set("anchor", Json::string(anchor_name(g.anchor)));
        if (g.x != 0)
            j.set("x", Json::number(g.x));
        if (g.y != 0)
            j.set("y", Json::number(g.y));
    }
    Json controls = Json::array();
    for (const Control &c : g.controls)
        controls.a.push_back(write_control(c));
    j.set("controls", controls);
    return j;
}

} // namespace

std::string write_layout(const Layout &l) {
    Json root = Json::object();
    root.set("version", Json::number(l.version));
    root.set("name", Json::string(l.name));
    if (l.opacity != 1.0)
        root.set("opacity", Json::number(l.opacity));
    if (l.scale != 1.0)
        root.set("scale", Json::number(l.scale));
    if (!l.safe_inset)
        root.set("safe_inset", Json::boolean_value(false));
    Json groups = Json::array();
    for (const Group &g : l.groups)
        groups.a.push_back(write_group(g));
    root.set("groups", groups);
    return json_write(root);
}

Rect anchor_area(const Layout &l, const Screen &s) {
    if (!s.controls_area.empty())
        return s.controls_area;
    if (l.safe_inset)
        return s.safe;
    return Rect{0, 0, s.dw, s.dh};
}

Rect group_rect(const Layout &l, int group, const Screen &s) {
    if (group < 0 || group >= int(l.groups.size()))
        return Rect();
    const Group &grp = l.groups[group];
    Rect area = anchor_area(l, s);
    if (grp.has_grid) {
        int key_pt = int(lround(grp.grid.key * l.scale));
        int pitch = int(lround((key_pt + grp.grid.gap) * s.scale));
        int w = pitch * grp.grid.cols;
        int h = pitch * grp.grid.rows;
        int ox = px(grp.x, s);
        int oy = px(grp.y, s);
        return place(area, w, h, grp.anchor, ox, oy);
    }
    // Non-grid group: the union of its controls' rects.
    Rect u;
    bool any = false;
    for (size_t c = 0; c < grp.controls.size(); ++c) {
        Rect r = control_rect(l, group, int(c), s);
        if (r.empty())
            continue;
        if (!any) {
            u = r;
            any = true;
            continue;
        }
        int x0 = std::min(u.x, r.x), y0 = std::min(u.y, r.y);
        int x1 = std::max(u.x + u.w, r.x + r.w), y1 = std::max(u.y + u.h, r.y + r.h);
        u = Rect{x0, y0, x1 - x0, y1 - y0};
    }
    return u;
}

Rect control_rect(const Layout &l, int group, int control, const Screen &s) {
    if (group < 0 || group >= int(l.groups.size()))
        return Rect();
    const Group &grp = l.groups[group];
    if (control < 0 || control >= int(grp.controls.size()))
        return Rect();
    const Control &c = grp.controls[control];
    Rect area = anchor_area(l, s);

    if (grp.has_grid && c.col >= 0 && c.row >= 0) {
        Rect box = group_rect(l, group, s);
        int key_pt = int(lround(grp.grid.key * l.scale));
        int pitch = int(lround((key_pt + grp.grid.gap) * s.scale));
        int gap = int(lround(grp.grid.gap * s.scale));
        Rect r;
        r.x = box.x + c.col * pitch + gap / 2;
        r.y = box.y + c.row * pitch + gap / 2;
        r.w = c.span * pitch - gap;
        r.h = pitch - gap;
        return r;
    }

    int w = int(lround(c.w * l.scale * s.scale));
    int h = int(lround(c.h * l.scale * s.scale));
    int ox = px(c.x, s);
    int oy = px(c.y, s);
    Rect r = place(area, w, h, c.anchor, ox, oy);

    if (!c.stack_on.empty()) {
        // A toggle stacked on its own group is the obvious cycle, and
        // `target != group` catches it; two groups whose toggles stack on
        // each other are the same cycle one step longer, and that one would
        // recurse control_rect -> group_rect -> control_rect until the stack
        // ran out. Layout files are the player's to edit and are re-read
        // every load, so a file like that must not be a crash: past two
        // levels of stacking the toggle keeps its plain anchored rect.
        static thread_local int depth = 0;
        if (depth < 2) {
            ++depth;
            int target = find_group_index(l, c.stack_on);
            if (target >= 0 && target != group && l.groups[target].visible) {
                Rect tr = group_rect(l, target, s);
                r.y = tr.y - h;
            }
            --depth;
        }
    }
    return r;
}

Rect controls_area_below(int dw, int dh, const Rect &game, int safe_bottom) {
    if (dh <= dw || game.empty())
        return Rect{};
    const int top = game.y + game.h;
    const Rect area{0, top, dw, dh - top - (safe_bottom > 0 ? safe_bottom : 0)};
    return area.empty() ? Rect{} : area;
}

Hit hit_test(const Layout &l, const Screen &s, double px_, double py_) {
    Hit result;
    if (s.dw <= 0 || s.dh <= 0)
        return result;

    // 1. Toggles in every group, hidden or not: a toggle's tab is always drawn.
    for (size_t g = 0; g < l.groups.size(); ++g) {
        const Group &grp = l.groups[g];
        for (size_t c = 0; c < grp.controls.size(); ++c) {
            if (grp.controls[c].kind != Kind::Toggle)
                continue;
            if (control_rect(l, int(g), int(c), s).contains(px_, py_)) {
                result.group = int(g);
                result.control = int(c);
                return result;
            }
        }
    }

    // 2. Visible groups, last group first, last control first; a grid
    //    group's own box claims a leftover point as a gap.
    for (int g = int(l.groups.size()) - 1; g >= 0; --g) {
        const Group &grp = l.groups[g];
        if (!grp.visible)
            continue;
        for (int c = int(grp.controls.size()) - 1; c >= 0; --c) {
            if (control_rect(l, g, c, s).contains(px_, py_)) {
                result.group = g;
                result.control = c;
                return result;
            }
        }
        if (grp.has_grid && group_rect(l, g, s).contains(px_, py_)) {
            result.group = g;
            result.gap = true;
            return result;
        }
    }
    return result;
}

LayoutContent layout_content(const Layout &l) {
    bool keys = false, pad = false;
    for (const Group &g : l.groups)
        for (const Control &c : g.controls) {
            if (c.kind == Kind::Key)
                keys = true;
            else if (c.kind == Kind::Button || c.kind == Kind::Dpad || c.kind == Kind::Stick)
                pad = true;
        }
    if (!pad)
        return LayoutContent::Keys;
    return keys ? LayoutContent::Mixed : LayoutContent::Pad;
}

bool layout_wanted(LayoutContent c, bool keyboard_present, bool controller_present,
                   bool pad_with_controller, bool forced) {
    if (forced)
        return true;
    switch (c) {
    case LayoutContent::Keys:
        return !keyboard_present;
    case LayoutContent::Pad:
        return !controller_present || pad_with_controller;
    case LayoutContent::Mixed:
        return !keyboard_present || !controller_present || pad_with_controller;
    }
    return true;
}

} // namespace controls
