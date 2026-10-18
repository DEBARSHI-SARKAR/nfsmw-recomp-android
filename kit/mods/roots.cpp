#include "roots.h"
#include "../runtime/layout.h"
#include <cstdlib>
#include <string>
#include "../platform/os.h"

// The core root defaults to wherever the layout says this executable keeps its
// resources: a bundle's Contents/Resources, resources/ beside the executable,
// or the checkout's build tree.
ModsRoots mods_roots() {
    const char *core = recomp_env("CORE_MODS_DIR");
    const char *user = recomp_env("MODS_DIR");
    std::string core_default = host_resource("mods/core");
    if (core_default.empty())
        core_default = "build/recomp/mods/core";
    return ModsRoots{core && *core ? core : core_default, user && *user ? user : "mods"};
}
