// editor_actions.cpp - see editor_actions.h.
#include "editor_actions.h"

#include "editor.h"

namespace controls {

EditorNext apply_editor_results(Editor &e, EditorHost &host, const std::string &opened_name,
                                const MappedTable &base, bool *renamed) {
    if (!e.is_open())
        return EditorNext::Keep;
    // Every result first: close() clears them all, and a save that also
    // renamed has to know both names before anything is written.
    const bool save = e.take_save();
    const bool reset = e.take_reset();
    const bool cancel = e.take_cancel();
    std::string switch_to, delete_name, rename_name;
    const bool want_switch = e.take_switch(&switch_to);
    const bool want_delete = e.take_delete(&delete_name);
    const bool want_rename = e.take_rename(&rename_name);
    const Form form = e.form();

    if (want_rename && renamed)
        *renamed = true;

    if (save) {
        const std::string name = e.layout().name;
        host.save_layout(e.layout(), form);
        if (e.mapped_changed()) {
            host.write_binding(write_mapped_diff(base, e.mapped()));
            host.apply_mapped(e.mapped());
        }
        host.set_snap(e.snap());
        // Saved under a new name: a rename leaves nothing behind, while a
        // duplicate keeps the layout it was copied from.
        if (name != opened_name) {
            if (renamed && *renamed)
                host.delete_layout(opened_name, form);
            host.set_names(host.names());
            host.select_layout(name);
        }
        return EditorNext::Close;
    }
    if (reset) {
        // Back to the game's own layout: the player's copy and their binding
        // both go, and the editor reopens on what is left.
        host.delete_layout(opened_name, form);
        host.write_binding("");
        host.set_names(host.names());
        return EditorNext::Reopen;
    }
    if (want_delete) {
        host.delete_layout(delete_name, form);
        host.set_names(host.names());
        return EditorNext::Reopen;
    }
    if (want_switch) {
        host.select_layout(switch_to);
        return EditorNext::Reopen;
    }
    if (cancel)
        return EditorNext::Close;
    return EditorNext::Keep;
}

} // namespace controls
