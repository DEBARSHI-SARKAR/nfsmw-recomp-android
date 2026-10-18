// editor_actions.h - what the host does with the editor's pending results:
// saving, resetting, renaming, switching and deleting a layout. Split out of
// controls_host.cpp so the rules can be tested without SDL, the settings
// store or the presenter -- EditorHost is the only way out, and the tests
// record its calls.
// Design: docs/superpowers/specs/2026-09-17-touch-controls-design.md section 9.
#pragma once

#include "binding.h"
#include "layout.h"

#include <string>
#include <vector>

namespace controls {

class Editor;

// The file and setting operations apply_editor_results asks for.
class EditorHost {
  public:
    virtual ~EditorHost() = default;
    // Writes <profile>/controls/<l.name>.<form>.json.
    virtual void save_layout(const Layout &l, Form form) = 0;
    // Removes the player's own copy of `name` for `form`, if there is one.
    virtual void delete_layout(const std::string &name, Form form) = 0;
    // Writes <profile>/controls/binding.txt, or removes it when `text` is
    // empty (nothing differs from the game's own RECOMP_CONTROLS_MAPPED).
    virtual void write_binding(const std::string &text) = 0;
    // Applies the edited table to the live binding.
    virtual void apply_mapped(const MappedTable &table) = 0;
    // Every layout name there is now, after a save or a delete changed them.
    virtual std::vector<std::string> names() = 0;
    virtual void set_names(const std::vector<std::string> &names) = 0;
    // Makes `name` the active layout (the settings' layout row).
    virtual void select_layout(const std::string &name) = 0;
    virtual void set_snap(bool on) = 0;
};

// What the host does after the results were applied.
enum class EditorNext {
    Keep,   // nothing pending: keep editing
    Reopen, // reload the active layout and open the editor on it again
    Close,  // reload the active layout and leave the editor
};

// Reads every pending result of `e` -- all of them, before close(), which
// clears them -- and asks `host` for the file and setting changes each one
// means. `opened_name` is the layout name the editor was opened on, so a
// rename can remove the old user copy; `base` is RECOMP_CONTROLS_MAPPED's
// table, which binding.txt is written as a difference from.
// *renamed carries one editing session's rename across calls: it is set when
// a rename starts (the host then takes typing, and feeds Editor::text), and
// read on Done, where only a rename -- not a duplicate, which keeps the
// original -- removes the old name's user copy. The host clears it when it
// opens the editor.
EditorNext apply_editor_results(Editor &e, EditorHost &host, const std::string &opened_name,
                                const MappedTable &base, bool *renamed);

} // namespace controls
