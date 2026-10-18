// layout_store.h - finds, loads and edits on-screen controls layouts: which
// form factor a screen calls for, and the three-deep search across a
// player's profile copy, the game's bundled copy and the kit's built-ins.
// Design: docs/superpowers/specs/2026-09-17-touch-controls-design.md.
#pragma once

#include <string>
#include <vector>

#include "layout.h"

namespace controls {

// Phone when the smaller drawable side, in points (pixels / scale), is under
// 600; a phone is portrait when taller than wide, landscape otherwise.
Form form_for(int dw, int dh, double scale);

// Finds and edits on-screen controls layouts across three sources, tried in
// priority order: the player's profile copy, the game's bundled copy, then
// the kit's built-ins (builtin_layouts.h). A layout file is named
// "<name>.json" (any form) or "<name>.<form>.json" (form_name(Form)) -- a
// form-specific file wins over a form-agnostic one from the same source.
class LayoutStore {
  public:
    // profile_dir: "<profile>/controls"; game_dir: the game's bundled
    // controls directory, or "" if the game ships none.
    void set_dirs(std::string profile_dir, std::string game_dir);

    // Every layout name available: the three built-ins first, "pad", "keys",
    // "pad+keys", in that order, whether or not each has a built-in JSON for
    // every form; then every other "*.json" name found in the game
    // directory and the profile directory ("name.form.json" contributes
    // "name"), sorted and deduplicated, skipping any name that repeats a
    // built-in.
    std::vector<std::string> names() const;

    // First match, in order: profile name.form, profile name, game
    // name.form, game name, built-in. A file that exists but fails to parse
    // is skipped, not fatal to the search; its error goes to *problem as
    // "<file name>: <parse error>" (parse_layout's own error text -- a JSON
    // "line N:" position, or a "group N control M:" schema location),
    // keeping the first such failure when more than one file fails.
    // Returns false, leaving *problem empty, when nothing matches and no
    // file failed to parse.
    bool load(const std::string &name, Form form, Layout *out, std::string *problem) const;

    // Whether the player has their own "<name>.<form>.json" under profile_dir.
    bool has_user_copy(const std::string &name, Form form) const;

    // Writes <profile_dir>/<l.name>.<form_name(form)>.json through a temp
    // file and rename, creating profile_dir if needed.
    bool save_user_copy(const Layout &l, Form form, std::string *error) const;

    // Removes the player's copy, if any. True when a file was removed.
    bool delete_user_copy(const std::string &name, Form form) const;

  private:
    std::string profile_dir_;
    std::string game_dir_;
};

} // namespace controls
