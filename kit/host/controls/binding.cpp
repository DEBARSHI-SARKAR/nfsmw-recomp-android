// binding.cpp - see binding.h.
#include "binding.h"

#include "../keypad_layout.h"

#include <algorithm>
#include <cmath>
#include <cstdlib>

namespace controls {

namespace {

// ---------------------------------------------------------------------------
// Target parsing/writing: "key:<scancode_name>", "mouse_left" etc, "none".
// ---------------------------------------------------------------------------

bool parse_target(const std::string &v, Target *out) {
    if (v == "none") {
        *out = Target();
        return true;
    }
    if (v == "mouse_left") {
        *out = Target{Target::Mouse, 0, ""};
        return true;
    }
    if (v == "mouse_right") {
        *out = Target{Target::Mouse, 1, ""};
        return true;
    }
    if (v == "mouse_middle") {
        *out = Target{Target::Mouse, 2, ""};
        return true;
    }
    if (v == "wheel_up") {
        *out = Target{Target::Wheel, 1, ""};
        return true;
    }
    if (v == "wheel_down") {
        *out = Target{Target::Wheel, -1, ""};
        return true;
    }
    if (v.rfind("key:", 0) == 0) {
        const int sc = scancode_from_name(v.substr(4));
        if (sc == 0)
            return false;
        *out = Target{Target::Key, sc, ""};
        return true;
    }
    if (v.rfind("action:", 0) == 0) {
        const std::string name = v.substr(7);
        if (name != "settings" && name != "system_keyboard" && name != "edit_layout")
            return false;
        Target t;
        t.type = Target::Action;
        t.action = name;
        *out = t;
        return true;
    }
    return false;
}

bool stick_mode_from_name(const std::string &s, StickMode *out) {
    if (s == "cursor")
        *out = StickMode::Cursor;
    else if (s == "arrows")
        *out = StickMode::Arrows;
    else if (s == "horizontal_arrows")
        *out = StickMode::HorizontalArrows;
    else if (s == "wasd")
        *out = StickMode::Wasd;
    else if (s == "scroll")
        *out = StickMode::Scroll;
    else if (s == "wheel")
        *out = StickMode::Wheel;
    else if (s == "none")
        *out = StickMode::None;
    else
        return false;
    return true;
}

const char *stick_mode_name(StickMode m) {
    switch (m) {
    case StickMode::Cursor:
        return "cursor";
    case StickMode::Arrows:
        return "arrows";
    case StickMode::HorizontalArrows:
        return "horizontal_arrows";
    case StickMode::Wasd:
        return "wasd";
    case StickMode::Scroll:
        return "scroll";
    case StickMode::Wheel:
        return "wheel";
    case StickMode::None:
        return "none";
    }
    return "none";
}

bool dpad_mode_from_name(const std::string &s, StickMode *out) {
    if (s == "arrows")
        *out = StickMode::Arrows;
    else if (s == "wasd")
        *out = StickMode::Wasd;
    else if (s == "none")
        *out = StickMode::None;
    else
        return false;
    return true;
}

bool parse_positive_double(const std::string &s, double *out) {
    if (s.empty())
        return false;
    char *end = nullptr;
    const double v = strtod(s.c_str(), &end);
    if (end != s.c_str() + s.size() || !(v > 0))
        return false;
    *out = v;
    return true;
}

// An integer prints with no decimal point; anything else with %g, which is
// enough precision for a cursor speed and reads back exactly with strtod.
std::string format_number(double v) {
    char buf[64];
    if (v == double((long long)v))
        snprintf(buf, sizeof buf, "%lld", (long long)v);
    else
        snprintf(buf, sizeof buf, "%g", v);
    return buf;
}

} // namespace

std::string target_name(const Target &t) {
    switch (t.type) {
    case Target::Key: {
        const char *nm = scancode_name(t.value);
        return std::string("key:") + (nm ? nm : "");
    }
    case Target::Mouse:
        return t.value == 1 ? "mouse_right" : t.value == 2 ? "mouse_middle" : "mouse_left";
    case Target::Wheel:
        return t.value > 0 ? "wheel_up" : "wheel_down";
    case Target::Action:
        return "action:" + t.action;
    case Target::None:
        break;
    }
    return "none";
}

bool parse_mapped(const std::string &text, MappedTable *table, std::string *error) {
    std::string local_error;
    std::string *err = error ? error : &local_error;
    MappedTable next = *table;
    size_t pos = 0;
    while (pos <= text.size()) {
        const size_t semi = text.find(';', pos);
        const std::string entry =
            text.substr(pos, semi == std::string::npos ? std::string::npos : semi - pos);
        pos = semi == std::string::npos ? text.size() + 1 : semi + 1;
        if (entry.empty())
            continue;
        const size_t eq = entry.find('=');
        if (eq == std::string::npos) {
            *err = "missing '=' in \"" + entry + "\"";
            return false;
        }
        const std::string key = entry.substr(0, eq);
        const std::string value = entry.substr(eq + 1);
        PadButton pb;
        if (pad_button_from_name(key, &pb)) {
            Target t;
            if (!parse_target(value, &t)) {
                *err = "bad target for \"" + key + "\": \"" + value + "\"";
                return false;
            }
            next.buttons[int(pb)] = t;
        } else if (key == "left_stick" || key == "right_stick") {
            StickMode m;
            if (!stick_mode_from_name(value, &m)) {
                *err = "bad stick mode for \"" + key + "\": \"" + value + "\"";
                return false;
            }
            (key == "left_stick" ? next.left : next.right) = m;
        } else if (key == "dpad") {
            StickMode m;
            if (!dpad_mode_from_name(value, &m)) {
                *err = "bad dpad mode: \"" + value + "\"";
                return false;
            }
            next.dpad = m;
        } else if (key == "cursor_speed") {
            double v;
            if (!parse_positive_double(value, &v)) {
                *err = "bad cursor_speed: \"" + value + "\"";
                return false;
            }
            next.cursor_speed = v;
        } else {
            *err = "unknown key \"" + key + "\"";
            return false;
        }
    }
    *table = next;
    return true;
}

namespace {

// Every key of a table, in write order: the same spellings parse_mapped reads.
std::vector<std::pair<std::string, std::string>> mapped_pairs(const MappedTable &t) {
    std::vector<std::pair<std::string, std::string>> kv;
    for (int i = 0; i < int(PadButton::Count); ++i)
        kv.emplace_back(pad_button_name(PadButton(i)), target_name(t.buttons[i]));
    kv.emplace_back("left_stick", stick_mode_name(t.left));
    kv.emplace_back("right_stick", stick_mode_name(t.right));
    kv.emplace_back("dpad", stick_mode_name(t.dpad));
    kv.emplace_back("cursor_speed", format_number(t.cursor_speed));
    std::sort(kv.begin(), kv.end());
    return kv;
}

std::string join_pairs(const std::vector<std::pair<std::string, std::string>> &kv) {
    std::string out;
    for (size_t i = 0; i < kv.size(); ++i) {
        if (i)
            out += ';';
        out += kv[i].first + "=" + kv[i].second;
    }
    return out;
}

} // namespace

std::string write_mapped(const MappedTable &t) {
    return join_pairs(mapped_pairs(t));
}

std::string write_mapped_diff(const MappedTable &base, const MappedTable &t) {
    const std::vector<std::pair<std::string, std::string>> want = mapped_pairs(t);
    const std::vector<std::pair<std::string, std::string>> have = mapped_pairs(base);
    std::vector<std::pair<std::string, std::string>> kv;
    for (size_t i = 0; i < want.size() && i < have.size(); ++i)
        if (want[i].second != have[i].second)
            kv.push_back(want[i]);
    return join_pairs(kv);
}

// ---------------------------------------------------------------------------
// Binding
// ---------------------------------------------------------------------------

void Binding::clamp_cursor() {
    // The window's last valid point is one short of its size on each axis;
    // bounds <= 0 means "unset", so nothing is clamped on that axis.
    if (bounds_w_ > 0)
        cursor_x_ = std::clamp(cursor_x_, 0.0, bounds_w_ - 1);
    if (bounds_h_ > 0)
        cursor_y_ = std::clamp(cursor_y_, 0.0, bounds_h_ - 1);
}

void Binding::set_bounds(double w, double h) {
    bounds_w_ = w;
    bounds_h_ = h;
    if (!cursor_known_) {
        // No real position has ever been reported: start in the middle of
        // the window rather than at its top-left corner, so a button press
        // with no prior pointer event still lands somewhere sane.
        cursor_x_ = bounds_w_ > 0 ? (bounds_w_ - 1) / 2.0 : 0;
        cursor_y_ = bounds_h_ > 0 ? (bounds_h_ - 1) / 2.0 : 0;
        emit_x_ = cursor_x_;
        emit_y_ = cursor_y_;
        cursor_known_ = true;
    } else {
        clamp_cursor();
    }
}

void Binding::set_cursor(double x, double y) {
    cursor_x_ = x;
    cursor_y_ = y;
    cursor_known_ = true;
    clamp_cursor();
    emit_x_ = cursor_x_;
    emit_y_ = cursor_y_;
}

void Binding::press_key(int scancode, std::vector<TouchAction> *out) {
    if (scancode == 0)
        return;
    for (KeyHold &h : held_keys_)
        if (h.scancode == scancode) {
            ++h.count;
            return;
        }
    held_keys_.push_back({scancode, 1});
    TouchAction a;
    a.kind = TouchAction::Key;
    a.scancode = scancode;
    a.down = true;
    out->push_back(a);
}

void Binding::release_key(int scancode, std::vector<TouchAction> *out) {
    if (scancode == 0)
        return;
    for (size_t i = 0; i < held_keys_.size(); ++i) {
        if (held_keys_[i].scancode != scancode)
            continue;
        if (--held_keys_[i].count > 0)
            return; // another source still wants it held
        held_keys_.erase(held_keys_.begin() + i);
        TouchAction a;
        a.kind = TouchAction::Key;
        a.scancode = scancode;
        a.down = false;
        out->push_back(a);
        return;
    }
}

bool Binding::key_held(int scancode) const {
    for (const KeyHold &h : held_keys_)
        if (h.scancode == scancode)
            return true;
    return false;
}

void Binding::tap_key(int scancode, std::vector<TouchAction> *out) {
    // A sustained hold (Arrows/Wasd/dpad) already has the key down; a tap
    // here would send a spurious Up the hold does not know about.
    if (key_held(scancode))
        return;
    TouchAction a;
    a.kind = TouchAction::Key;
    a.scancode = scancode;
    a.down = true;
    out->push_back(a);
    a.down = false;
    out->push_back(a);
}

void Binding::emit_wheel(int notches, std::vector<TouchAction> *out) {
    TouchAction a;
    a.kind = TouchAction::Wheel;
    a.wheel = notches;
    a.x = cursor_x_;
    a.y = cursor_y_;
    out->push_back(a);
}

void Binding::apply_button_edge(const Target &t, bool down, std::vector<TouchAction> *out,
                                std::vector<std::string> *actions) {
    switch (t.type) {
    case Target::Key:
        if (down)
            press_key(t.value, out);
        else
            release_key(t.value, out);
        break;
    case Target::Mouse:
        // Ref-counted: a second button also mapped to this one is a no-op
        // press and does not release it on its own later.
        if (down) {
            if (mouse_hold_[t.value] == 0) {
                TouchAction m;
                m.kind = TouchAction::Motion;
                m.place = true;
                m.x = cursor_x_;
                m.y = cursor_y_;
                out->push_back(m);
                TouchAction b;
                b.kind = TouchAction::Button;
                b.button = t.value;
                b.down = true;
                b.x = cursor_x_;
                b.y = cursor_y_;
                out->push_back(b);
            }
            ++mouse_hold_[t.value];
        } else if (mouse_hold_[t.value] > 0 && --mouse_hold_[t.value] == 0) {
            TouchAction b;
            b.kind = TouchAction::Button;
            b.button = t.value;
            b.down = false;
            b.x = cursor_x_;
            b.y = cursor_y_;
            out->push_back(b);
        }
        break;
    case Target::Wheel:
        if (down)
            emit_wheel(t.value, out);
        break;
    case Target::Action:
        if (down && actions)
            actions->push_back(t.action);
        break;
    case Target::None:
        break;
    }
}

void Binding::apply_dpad(uint8_t hat, std::vector<TouchAction> *out) {
    static const uint8_t kMasks[4] = {kHatUp, kHatRight, kHatDown, kHatLeft};
    static const int kArrow[4] = {kScanUp, kScanRight, kScanDown, kScanLeft};
    static const int kWasd[4] = {kScanW, kScanD, kScanS, kScanA};
    const bool none = table_.dpad == StickMode::None;
    const bool wasd = table_.dpad == StickMode::Wasd;
    for (int i = 0; i < 4; ++i) {
        const int want = !none && (hat & kMasks[i]) ? (wasd ? kWasd[i] : kArrow[i]) : 0;
        if (want == dpad_active_sc_[i])
            continue;
        if (dpad_active_sc_[i])
            release_key(dpad_active_sc_[i], out);
        if (want)
            press_key(want, out);
        dpad_active_sc_[i] = want;
    }
}

void Binding::update_axis(int index, bool y_axis, float v, bool wasd,
                          std::vector<TouchAction> *out) {
    AxisDir &dir = y_axis ? stick_y_dir_[index] : stick_x_dir_[index];
    int &sc = y_axis ? stick_y_sc_[index] : stick_x_sc_[index];
    AxisDir want = dir;
    if (dir == AxisDir::Pos)
        want = v < 0.35f ? AxisDir::None : AxisDir::Pos;
    else if (dir == AxisDir::Neg)
        want = v > -0.35f ? AxisDir::None : AxisDir::Neg;
    else if (v >= 0.5f)
        want = AxisDir::Pos;
    else if (v <= -0.5f)
        want = AxisDir::Neg;
    if (want == dir)
        return;
    if (sc) {
        release_key(sc, out);
        sc = 0;
    }
    dir = want;
    if (want == AxisDir::Neg)
        sc = y_axis ? (wasd ? kScanW : kScanUp) : (wasd ? kScanA : kScanLeft);
    else if (want == AxisDir::Pos)
        sc = y_axis ? (wasd ? kScanS : kScanDown) : (wasd ? kScanD : kScanRight);
    if (sc)
        press_key(sc, out);
}

void Binding::release_axis(int index, std::vector<TouchAction> *out) {
    if (stick_x_sc_[index]) {
        release_key(stick_x_sc_[index], out);
        stick_x_sc_[index] = 0;
    }
    if (stick_y_sc_[index]) {
        release_key(stick_y_sc_[index], out);
        stick_y_sc_[index] = 0;
    }
    stick_x_dir_[index] = AxisDir::None;
    stick_y_dir_[index] = AxisDir::None;
}

void Binding::apply_stick(int index, float vx, float vy, double dt, std::vector<TouchAction> *out) {
    const StickMode mode = index == 0 ? table_.left : table_.right;
    switch (mode) {
    case StickMode::Cursor: {
        const double mag = std::sqrt(double(vx) * vx + double(vy) * vy);
        if (mag > 0 && dt > 0) {
            const double f = table_.cursor_speed * dt * mag;
            cursor_x_ += f * vx;
            cursor_y_ += f * vy;
            clamp_cursor();
        }
        const double dx = cursor_x_ - emit_x_, dy = cursor_y_ - emit_y_;
        if (std::sqrt(dx * dx + dy * dy) >= 0.5) {
            emit_x_ = cursor_x_;
            emit_y_ = cursor_y_;
            TouchAction m;
            m.kind = TouchAction::Motion;
            m.place = true;
            m.x = cursor_x_;
            m.y = cursor_y_;
            out->push_back(m);
        }
        release_axis(index, out);
        break;
    }
    case StickMode::Arrows:
    case StickMode::HorizontalArrows:
    case StickMode::Wasd: {
        const bool wasd = mode == StickMode::Wasd;
        update_axis(index, false, vx, wasd, out);
        // A steering stick must not also press throttle/brake on diagonals.
        update_axis(index, true, mode == StickMode::HorizontalArrows ? 0 : vy, wasd, out);
        break;
    }
    case StickMode::Scroll: {
        pan_acc_x_[index] += vx * dt * 20.0 * kTouchPanStep;
        pan_acc_y_[index] += vy * dt * 20.0 * kTouchPanStep;
        while (pan_acc_x_[index] >= kTouchPanStep) {
            pan_acc_x_[index] -= kTouchPanStep;
            tap_key(kScanRight, out);
        }
        while (pan_acc_x_[index] <= -kTouchPanStep) {
            pan_acc_x_[index] += kTouchPanStep;
            tap_key(kScanLeft, out);
        }
        while (pan_acc_y_[index] >= kTouchPanStep) {
            pan_acc_y_[index] -= kTouchPanStep;
            tap_key(kScanDown, out);
        }
        while (pan_acc_y_[index] <= -kTouchPanStep) {
            pan_acc_y_[index] += kTouchPanStep;
            tap_key(kScanUp, out);
        }
        release_axis(index, out);
        break;
    }
    case StickMode::Wheel: {
        wheel_acc_[index] += -double(vy) * dt * 8.0;
        while (wheel_acc_[index] >= 1.0) {
            wheel_acc_[index] -= 1.0;
            emit_wheel(1, out);
        }
        while (wheel_acc_[index] <= -1.0) {
            wheel_acc_[index] += 1.0;
            emit_wheel(-1, out);
        }
        release_axis(index, out);
        break;
    }
    case StickMode::None:
        release_axis(index, out);
        break;
    }
}

void Binding::tick(const PadState &pad, uint64_t now_ns, std::vector<TouchAction> *out,
                   std::vector<std::string> *actions) {
    double dt = 0.0;
    if (has_last_) {
        const uint64_t delta = now_ns > last_ns_ ? now_ns - last_ns_ : 0;
        dt = double(delta) / 1e9;
        if (dt > 0.05)
            dt = 0.05;
    }
    has_last_ = true;
    last_ns_ = now_ns;

    for (int i = 0; i < int(PadButton::Count); ++i) {
        const uint16_t bit = uint16_t(1u << i);
        const bool now_down = (pad.buttons & bit) != 0;
        if (release_latch_ & bit) {
            // Forced up by release_all while the pad still held it: no edge
            // fires until the pad itself reports it released.
            if (!now_down) {
                release_latch_ &= ~bit;
                prev_buttons_ &= ~bit;
            } else {
                prev_buttons_ |= bit;
            }
            continue;
        }
        const bool was = (prev_buttons_ & bit) != 0;
        if (was != now_down) {
            apply_button_edge(table_.buttons[i], now_down, out, actions);
            prev_buttons_ = now_down ? (prev_buttons_ | bit) : uint16_t(prev_buttons_ & ~bit);
        }
    }

    apply_dpad(pad.hat, out);
    apply_stick(0, pad.lx, pad.ly, dt, out);
    apply_stick(1, pad.rx, pad.ry, dt, out);
}

void Binding::release_all(std::vector<TouchAction> *out) {
    for (const KeyHold &h : held_keys_) {
        TouchAction a;
        a.kind = TouchAction::Key;
        a.scancode = h.scancode;
        a.down = false;
        out->push_back(a);
    }
    held_keys_.clear();
    for (int i = 0; i < 3; ++i) {
        if (mouse_hold_[i] > 0) {
            TouchAction a;
            a.kind = TouchAction::Button;
            a.button = i;
            a.down = false;
            a.x = cursor_x_;
            a.y = cursor_y_;
            out->push_back(a);
            mouse_hold_[i] = 0;
        }
    }
    // Latch whatever the pad still holds: apply_button_edge stays quiet for
    // those bits until tick() sees them go up (see the loop in tick()).
    release_latch_ |= prev_buttons_;
    prev_buttons_ = 0;
    for (int i = 0; i < 4; ++i)
        dpad_active_sc_[i] = 0;
    for (int i = 0; i < 2; ++i) {
        stick_x_dir_[i] = AxisDir::None;
        stick_y_dir_[i] = AxisDir::None;
        stick_x_sc_[i] = 0;
        stick_y_sc_[i] = 0;
        pan_acc_x_[i] = pan_acc_y_[i] = 0;
        wheel_acc_[i] = 0;
    }
}

} // namespace controls
