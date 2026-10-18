// layout_fallback.h - which layout the host actually loads: the one for the
// screen's form factor, or, when a name has no layout for it, its tablet one.
// Also the clamp the saved hidden-group bits need when switching layouts.
// Design: docs/superpowers/specs/2026-09-17-touch-controls-design.md.
#pragma once

#include "layout_store.h"

#include <stddef.h>
#include <stdint.h>
#include <string>

namespace controls {

// store.load(name, form), then, for a phone form that found nothing,
// store.load(name, Form::Tablet). *fell_back says whether the tablet layout
// was used; *problem is the first parse failure either load reported.
inline bool load_with_tablet_fallback(const LayoutStore &store, const std::string &name, Form form,
                                      Layout *out, std::string *problem, bool *fell_back) {
    *fell_back = false;
    if (store.load(name, form, out, problem))
        return true;
    if (form == Form::Tablet)
        return false;
    std::string tablet_problem;
    if (!store.load(name, Form::Tablet, out, &tablet_problem)) {
        if (problem->empty())
            *problem = tablet_problem;
        return false;
    }
    *fell_back = true;
    return true;
}

// The groups the player has hidden, as the settings row stores them: bit i
// is groups[i], for the first kHiddenBits groups.
constexpr size_t kHiddenBits = 16;

// The stored bits as they apply to a layout with `groups` groups. Layouts
// need not have the same groups (portrait "keys" is one block where
// landscape is two halves), so a
// bit past the last group would otherwise hide a group the layout does not
// have, or come back as a phantom difference every pump.
inline uint32_t clamp_hidden_bits(uint32_t bits, size_t groups) {
    const size_t n = groups < kHiddenBits ? groups : kHiddenBits; // at most 16
    return bits & ((1u << n) - 1u);
}

// Visibility is saved per form factor and shared by its layouts. Only apply
// a hidden bit where this layout has a tab that can reveal that group: keys'
// left/right bits otherwise hide pad's sticks/buttons with no way to restore
// them. Never hide a group holding the layout cycle tab. The stored bits stay
// intact so cycling back restores the player's keyboard visibility.
inline uint32_t hidden_bits_for(const Layout &l, uint32_t stored) {
    uint32_t bits = clamp_hidden_bits(stored, l.groups.size());
    for (size_t i = 0; i < l.groups.size() && i < kHiddenBits; ++i) {
        bool can_reveal = false;
        for (const Group &g : l.groups)
            for (const Control &c : g.controls)
                if (c.kind == Kind::Toggle && c.target == l.groups[i].id)
                    can_reveal = true;
        if (!can_reveal)
            bits &= ~(1u << i);
        for (const Control &c : l.groups[i].controls)
            if (c.kind == Kind::Toggle && c.target == "next") {
                bits &= ~(1u << i);
                break;
            }
    }
    return bits;
}

} // namespace controls
