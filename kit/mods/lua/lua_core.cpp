// lua_core.cpp - the Lua runtime as a core plugin.
//
// It has its own init, ordered before every user mod, and is torn down last.
// It is linked into the host rather than dlopened because it ships with the
// game; everything else about it is what the spec describes for a core plugin,
// including its own owner id, so nothing it registers is rolled back by a user
// mod's failure.
#include "../mods_internal.h"

extern "C" {
#include "lua.h"
}

// Lifecycle step 2. Announced once; the runtime itself is (re)opened on every
// call, because an init begins a session and a session must not inherit the
// interpreters, the subscriptions or the error count of the one before it.
// In a real process there is only ever one, and this is a no-op past the
// first; in a test process each suite gets a runtime that owes nothing to the
// suite before it.
extern "C" bool mods_lua_core_init(void) {
    static bool announced = false;
    if (!mods_lua_open_runtime())
        return false;
    if (!announced) {
        LOGW("mods: %s core plugin ready", LUA_RELEASE);
        announced = true;
    }
    return true;
}

// True when this translation unit is linked in at all. The loader asks before
// accepting a [script] mod, and a build without Lua answers through the weak
// definition elsewhere rather than through this one.
extern "C" bool mods_lua_available(void) {
    return true;
}
