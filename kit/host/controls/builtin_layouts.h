// builtin_layouts.h - the kit's built-in on-screen controls layouts, as
// layout JSON text (see layout.h for the schema). Design:
// docs/superpowers/specs/2026-09-17-touch-controls-design.md.
#pragma once

#include <string>

#include "layout.h"

namespace controls {

// The JSON text of a built-in layout, or nullptr if `name`/`form` names
// none. name: "keys" | "pad" | "pad+keys".
const char *builtin_layout(const std::string &name, Form form);

} // namespace controls
