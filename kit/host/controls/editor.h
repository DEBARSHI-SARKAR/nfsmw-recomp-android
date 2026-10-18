// editor.h - the on-screen controls layout editor's model: selection,
// dragging with snap and re-anchoring, pinch resizing, the toolbar and its
// pickers (add, bind, layout), and the results the host acts on (save,
// reset, rename). SDL-, GPU- and filesystem-free; the host feeds it pointer
// and text input in drawable pixels and does all I/O.
// Design: docs/superpowers/specs/2026-09-17-touch-controls-design.md section 9.
#pragma once

#include "binding.h"
#include "layout.h"

#include <cstdint>
#include <string>
#include <vector>

namespace controls {

enum class Tool { None, Add, Delete, Bind, Stick, Snap, Layout, Reset, Done };

struct ToolbarItem {
    Tool tool;
    const char *label;
    Rect rect; // drawable pixels
};

// One row of an open picker. `rect` is clipped to picker_rect(); rows
// scrolled wholly out of view are not listed.
struct PickerItem {
    std::string label;
    std::string value;
    Rect rect;
};

class Editor {
  public:
    // Starts on a copy of `layout`; `mapped` is the current binding table;
    // `native` true hides mapped targets (Bind edits control.button instead).
    void open(const Layout &layout, Form form, const MappedTable &mapped, bool native, bool snap);
    void close();
    bool is_open() const {
        return open_;
    }
    Form form() const {
        return form_;
    }
    // The screen the toolbar is laid out in. The edited layout uses
    // content_screen() instead: the toolbar's band along the top of the
    // anchor area is reserved, so no control is ever drawn or hit under it.
    void set_screen(const Screen &s);
    const Screen &content_screen() const {
        return screen_;
    }
    // Every layout name the host knows (LayoutStore::names()): Duplicate
    // avoids them and a toggle's Bind lists them.
    void set_names(std::vector<std::string> names);

    // Pointer input in drawable pixels. A second finger while one rests on
    // the selected control pinches it. Any tool, picker choice or selection
    // change ends a drag or pinch; its fingers stay inert until they lift.
    // A toggle with stack_on sits on its target group, so a drag can move
    // it sideways only.
    void finger_down(int64_t id, double px, double py);
    void finger_motion(int64_t id, double px, double py);
    void finger_up(int64_t id);
    // The system took one finger away (a call, a gesture the OS claimed):
    // that finger's gesture is dropped rather than finished, so a picker
    // item under it is not chosen and a drag or pinch just ends. The
    // single-id form of cancel_fingers.
    void finger_cancel(int64_t id);
    void wheel(double notches); // desktop: resize the selected control
    // Focus loss: every finger is gone. A moved drag is committed first, the
    // same as any tool would.
    void cancel_fingers();

    // Rename text, once take_rename() handed the host a rename: `text`
    // appends UTF-8, `text_done` commits it (a built-in name is refused).
    void text(const std::string &utf8);
    void text_done();
    // A rename is being typed: the host keeps the system keyboard up only
    // while this holds.
    bool renaming() const {
        return renaming_;
    }

    const Layout &layout() const {
        return layout_;
    }
    const MappedTable &mapped() const {
        return mapped_;
    }
    bool mapped_changed() const {
        return mapped_changed_;
    }
    int selected_group() const {
        return sel_group_;
    }
    int selected_control() const {
        return sel_control_;
    }
    const std::vector<ToolbarItem> &toolbar() const {
        return toolbar_;
    }
    const std::vector<PickerItem> &picker() const {
        return picker_view_;
    }
    Rect picker_rect() const {
        return picker_box_;
    }
    // Snap guide lines (1-px-wide rects) while a drag is snapped. The 10 pt
    // grid's origin is the anchor_area() corner (top-left); the view draws
    // it from there.
    const std::vector<Rect> &guides() const {
        return guides_;
    }
    bool snap() const {
        return snap_;
    }

    // Results the host acts on; each returns true once.
    bool take_save();   // Done: host saves layout() for form() and mapped() if changed, then closes
    bool take_reset();  // Reset: host deletes the user copy, reloads, reopens
    bool take_cancel(); // back gesture (cancel()): host closes without saving
    void cancel();
    // The Done tool, without a tap on it: the desktop's Escape key.
    void done();
    // Layout > Switch chose another layout: the host saves nothing, loads
    // *name and reopens the editor on it.
    bool take_switch(std::string *name);
    // Layout > Delete on a user layout (built-ins refuse it): the host
    // deletes *name's user copy for form(), then reloads and reopens.
    bool take_delete(std::string *name);
    // Rename was chosen for a non-built-in layout: the host starts text
    // input; *current receives the layout's current name.
    bool take_rename(std::string *current);

    // Bumps on anything the view draws: selection, rects, guides, picker,
    // toolbar and snap.
    uint32_t generation() const {
        return generation_;
    }

  private:
    enum class Picker { None, Add, AddButton, Bind, Layout, Switch };
    struct Finger {
        int64_t id;
        double x0, y0, x, y;
    };

    void changed() {
        ++generation_;
    }
    double pt(double points) const {
        return points * screen_.scale;
    }
    // `s` with the toolbar's band taken off the top of the anchor area.
    Screen content_screen(const Screen &s) const;
    void layout_toolbar();
    void layout_picker();
    void open_picker(Picker kind, Tool from, std::vector<PickerItem> items);
    void close_picker();
    void choose(const PickerItem &item);
    void run_tool(Tool t);
    void reset_transient();
    void end_gesture();
    bool selection_valid() const;
    void drop_stale_guides(const Rect &r);
    void select(int group, int control);
    int hit(double px, double py, int *control) const;
    bool selection_is_grid() const;
    Rect moving_rect() const;
    void set_moving_rect(const Rect &r, bool reanchor);
    Rect snap_rect(Rect r);
    // Scales the selection from `base` (its control as it was) or, for a
    // grid key, from grid key size `key0`, by `factor`, keeping its centre.
    void scale_selection(const Control &base, double key0, double factor);
    void add_control(const std::string &what);
    void delete_selection();
    void bind_items();
    void cycle_stick();
    void duplicate_layout();

    bool open_ = false;
    Layout layout_;
    Form form_ = Form::Tablet;
    MappedTable mapped_;
    bool mapped_changed_ = false;
    bool native_ = false;
    bool snap_ = true;
    Screen screen_;      // the edited layout's: the toolbar band reserved
    Screen full_screen_; // as given: the toolbar and picker are laid out in it
    std::vector<std::string> names_;

    int sel_group_ = -1, sel_control_ = -1;
    std::vector<ToolbarItem> toolbar_;
    std::vector<Rect> guides_;

    Picker picker_ = Picker::None;
    Tool picker_tool_ = Tool::None;
    std::vector<PickerItem> picker_items_; // every row; rects unused
    std::vector<PickerItem> picker_view_;  // the rows in view, clipped
    Rect picker_box_;
    double picker_scroll_ = 0; // pixels
    bool picker_held_ = false; // a finger is on the picker: picker_finger_ drags or taps it
    Finger picker_finger_{};
    double picker_scroll0_ = 0;
    bool picker_moved_ = false;
    int64_t outside_finger_ = -1; // a finger that closed the picker; ignored until up

    std::vector<Finger> fingers_; // at most two: the drag finger, then the pinch finger
    bool dragging_ = false;       // the first finger is on the selection
    bool drag_moved_ = false;
    Rect drag_rect0_; // the moving rect when the drag began
    bool pinching_ = false;
    double pinch_d0_ = 0;
    Control pinch_base_;
    double pinch_key0_ = 0;

    bool save_ = false, reset_ = false, cancel_ = false;
    bool switch_pending_ = false, delete_pending_ = false;
    std::string switch_name_;
    bool rename_pending_ = false, renaming_ = false;
    std::string rename_text_;
    uint32_t generation_ = 1;
};

} // namespace controls
