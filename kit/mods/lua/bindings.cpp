// bindings.cpp - the `pop` table a script mod sees, and the interpreters it
// sees it from.
//
// One lua_State per mod. Not one shared state with per-mod sandboxes: a mod's
// globals are its own, a mod that is dropped takes its whole state with it,
// and a runaway script cannot corrupt another mod's tables because it never
// has a reference to them.
//
// The `pop` table is built by hand, function by function. There is no loop
// over an API struct and no metatable that forwards unknown names, because
// either would expose whatever the API gains next without anyone deciding to.
// What is absent is as deliberate as what is present: no guest-memory write at
// any name, no hooks, no allocation, no file system, no dynamic loading. A mod
// that needs those is a plugin, not a script.
//
// A binding acts through the API instance its mod was handed. Every operation
// PopModApi offers is forwarded to that pointer, never to the module's own
// internals: the API is where per-mod identity, attribution and the guest
// bounds check live, and a second path to the same operation is a second set
// of rules. The three pinned globals PopModApi has no accessor for go through
// mods_lua_read_pinned, which is itself built from api->symbol and
// api->guest_read_*, so that rule holds with no exception.
//
// The standard library is curated the same way. Opened: base without the
// loaders, string, table, math, coroutine, utf8, and os cut down to time and
// clock. Not opened: io and package (a script has no business with either),
// and debug - debug.getregistry() would hand a script the registry, which is
// where every other callback's function reference lives, so it is the one
// standard library that would undo the isolation above.
#include "../mods_internal.h"

extern "C" {
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
}

#include <deque>
#include <map>
#include <set>
#include <string>
#include <string.h>

namespace {

struct Callback {
    // The mod's MAIN state, never the state that happened to register. A
    // registration can arrive on a coroutine; the registry reference retains
    // the function, not the thread it was created on, so a collected
    // coroutine would leave this pointer dangling. Functions are not bound to
    // a thread, and the registry is shared by every thread of a state, so
    // calling on the main state is both safe and equivalent.
    lua_State *L;
    int ref;
    bool disabled;
    uint32_t owner;
    // Held by value. The record never moves (see below), so the pointer
    // LOGW is handed stays valid for as long as the callback exists.
    std::string desc;
};

// A deque, never a vector: an event subscription holds the address of one of
// these for as long as the mod is loaded, and this container is only ever
// appended to. Dropping a mod disables its records; it never erases them.
std::deque<Callback> &callbacks() {
    static std::deque<Callback> d;
    return d;
}

std::map<uint32_t, lua_State *> &states() {
    static std::map<uint32_t, lua_State *> m;
    return m;
}

// Owners whose interpreter is being torn down. lua_close runs __gc
// finalizers, and a finalizer can call back into these bindings; anything it
// registered would point into the state being destroyed and would outlive it.
// So a mutation from inside a close is refused, and the refusal is visible to
// the script rather than silent.
std::set<uint32_t> &closing() {
    static std::set<uint32_t> s;
    return s;
}
bool is_closing(uint32_t owner) {
    return closing().count(owner) != 0;
}

uint32_t g_errors = 0;
bool g_open = false;

// ---------------------------------------------------------------- helpers --

const char *const OWNER_KEY = "pop.owner";

uint32_t owner_of(lua_State *L) {
    lua_getfield(L, LUA_REGISTRYINDEX, OWNER_KEY);
    uint32_t o = (uint32_t)lua_tointeger(L, -1);
    lua_pop(L, 1);
    return o;
}

const PopModApi *api_of(lua_State *L) {
    return mods_api_for(owner_of(L));
}

lua_State *find_state(uint32_t owner) {
    auto it = states().find(owner);
    return it == states().end() ? nullptr : it->second;
}

// The event dispatcher calls this with the record as its user pointer.
void invoke(const PopModApi *, void *user) {
    Callback *cb = (Callback *)user;
    if (cb->disabled || !cb->L)
        return;
    lua_rawgeti(cb->L, LUA_REGISTRYINDEX, cb->ref);
    if (lua_pcall(cb->L, 0, 0, 0) != LUA_OK) {
        // The error names the mod and disables THIS callback: not the mod, and
        // certainly not the game. A script that throws every turn would
        // otherwise fill the log and cost a pcall each time for nothing.
        const char *msg = lua_tostring(cb->L, -1);
        LOGW("mods: lua error in %s: %s", cb->desc.c_str(), msg ? msg : "?");
        lua_pop(cb->L, 1);
        cb->disabled = true;
        ++g_errors;
    }
}

int32_t phase_arg(lua_State *L, int idx) {
    const char *s = luaL_checkstring(L, idx);
    if (strcmp(s, "before") == 0)
        return POP_EVENT_BEFORE;
    if (strcmp(s, "after") == 0)
        return POP_EVENT_AFTER;
    return luaL_error(L, "phase must be \"before\" or \"after\", got \"%s\"", s);
}

// Registers `fn` (at stack index `argi`) and returns the subscription id, or
// nil with a message. `sub` does the actual subscribing so the four entry
// points differ only in which one they pass.
typedef PopModStatus (*SubFn)(const PopModApi *api, int32_t phase, PopEventFn fn, void *user,
                              uint32_t *id);

// Retain a Lua callback and register it with the owning mod event service.
// Reject subscriptions during VM closing so finalizers cannot create callbacks into a dying state.
int subscribe(lua_State *L, int argi, int32_t phase, SubFn sub, const char *what) {
    luaL_checktype(L, argi, LUA_TFUNCTION);
    uint32_t owner = owner_of(L);
    const PopModApi *api = mods_api_for(owner);

    // A finalizer running inside lua_close is the case this catches.
    if (is_closing(owner)) {
        lua_pushnil(L);
        lua_pushfstring(L, "%s: the mod is closing", what);
        return 2;
    }
    lua_State *main_state = find_state(owner);
    if (!main_state || !api) {
        lua_pushnil(L);
        lua_pushfstring(L, "%s: no runtime for this mod", what);
        return 2;
    }

    lua_pushvalue(L, argi);
    int ref = luaL_ref(L, LUA_REGISTRYINDEX);

    callbacks().push_back(Callback{main_state, ref, false, owner, std::string()});
    Callback *cb = &callbacks().back();
    cb->desc = std::string(api->mod_id ? api->mod_id : "mod") + " " + what;

    uint32_t id = 0;
    PopModStatus st = sub(api, phase, invoke, cb, &id);
    if (st != POP_OK) {
        cb->disabled = true;
        luaL_unref(L, LUA_REGISTRYINDEX, ref);
        cb->ref = LUA_NOREF;
        lua_pushnil(L);
        lua_pushfstring(L, "%s failed (%d)", what, (int)st);
        return 2;
    }
    lua_pushinteger(L, (lua_Integer)id);
    return 1;
}

// ---------------------------------------------------------------- the pop --

int l_log(lua_State *L) {
    const char *text = luaL_checkstring(L, 1);
    const PopModApi *api = api_of(L);
    if (api && api->log)
        api->log(api, text);
    else
        LOGW("mods: [%s] %s", api && api->mod_id ? api->mod_id : "lua", text);
    return 0;
}

int l_mod_id(lua_State *L) {
    const PopModApi *api = api_of(L);
    lua_pushstring(L, api && api->mod_id ? api->mod_id : "");
    return 1;
}

int l_settings_get(lua_State *L) {
    const char *key = luaL_checkstring(L, 1);
    const PopModApi *api = api_of(L);
    int64_t v = 0;
    if (!api || !api->settings_get || api->settings_get(api, key, &v) != POP_OK) {
        lua_pushnil(L);
        return 1;
    }
    lua_pushinteger(L, (lua_Integer)v);
    return 1;
}

int l_settings_set(lua_State *L) {
    const char *key = luaL_checkstring(L, 1);
    lua_Integer v = luaL_checkinteger(L, 2);
    const PopModApi *api = api_of(L);
    // A write, so it is refused while the mod is closing along with the rest.
    bool ok = api && api->settings_set && !is_closing(owner_of(L)) &&
              api->settings_set(api, key, (int64_t)v) == POP_OK;
    lua_pushboolean(L, ok);
    return 1;
}

// Reads go through the API's own bounds check, not through rd8/rd16/rd32
// directly: a script must not be able to read outside the guest image by
// naming a big number, and that check is the API's, in one place.
template <typename T>
int read_guest(lua_State *L, PopModStatus (*fn)(const PopModApi *, uint32_t, T *)) {
    uint32_t addr = (uint32_t)luaL_checkinteger(L, 1);
    const PopModApi *api = api_of(L);
    T v = 0;
    if (!api || !fn || fn(api, addr, &v) != POP_OK) {
        lua_pushnil(L);
        return 1;
    }
    lua_pushinteger(L, (lua_Integer)v);
    return 1;
}

int l_read_u8(lua_State *L) {
    const PopModApi *api = api_of(L);
    return read_guest<uint8_t>(L, api ? api->guest_read_u8 : nullptr);
}
int l_read_u16(lua_State *L) {
    const PopModApi *api = api_of(L);
    return read_guest<uint16_t>(L, api ? api->guest_read_u16 : nullptr);
}
int l_read_u32(lua_State *L) {
    const PopModApi *api = api_of(L);
    return read_guest<uint32_t>(L, api ? api->guest_read_u32 : nullptr);
}

int l_symbol(lua_State *L) {
    const char *name = luaL_checkstring(L, 1);
    const PopModApi *api = api_of(L);
    uint32_t addr = 0;
    if (!api || !api->symbol || api->symbol(api, name, &addr) != POP_OK) {
        lua_pushnil(L);
        return 1;
    }
    lua_pushinteger(L, (lua_Integer)addr);
    return 1;
}

int l_entity_count(lua_State *L) {
    const PopModApi *api = api_of(L);
    lua_pushinteger(L, (lua_Integer)(api && api->entity_count ? api->entity_count(api) : 0));
    return 1;
}

int l_entity_slot(lua_State *L) {
    uint32_t nth = (uint32_t)luaL_checkinteger(L, 1), slot = 0;
    const PopModApi *api = api_of(L);
    if (!api || !api->entity_slot || api->entity_slot(api, nth, &slot) != POP_OK) {
        lua_pushnil(L);
        return 1;
    }
    lua_pushinteger(L, (lua_Integer)slot);
    return 1;
}

void set_int(lua_State *L, const char *k, lua_Integer v) {
    lua_pushinteger(L, v);
    lua_setfield(L, -2, k);
}

// `slot` is the PHYSICAL slot, the same index the C API takes, and `id` is the
// entity's own id - a different number. Keeping the two names apart here is
// what stops a script iterating ids and indexing by them.
int l_entity(lua_State *L) {
    uint32_t slot = (uint32_t)luaL_checkinteger(L, 1);
    const PopModApi *api = api_of(L);
    PopEntityView e;
    memset(&e, 0, sizeof e);
    e.size = (uint32_t)sizeof e;
    if (!api || !api->entity || api->entity(api, slot, &e) != POP_OK) {
        lua_pushnil(L);
        return 1;
    }
    lua_createtable(L, 0, 24);
    set_int(L, "slot", e.slot);
    set_int(L, "guest_addr", e.guest_addr);
    set_int(L, "flags", e.flags);
    set_int(L, "render_flags", e.render_flags);
    set_int(L, "motion_flags", e.motion_flags);
    set_int(L, "animation_tick", e.animation_tick);
    set_int(L, "id", e.id);
    set_int(L, "angle", e.angle);
    set_int(L, "kind", e.kind);
    set_int(L, "model", e.model);
    set_int(L, "state", e.state);
    set_int(L, "state_2", e.state_2);
    set_int(L, "class_counter", e.class_counter);
    set_int(L, "owner", e.owner);
    set_int(L, "index", e.index);
    set_int(L, "counter", e.counter);
    set_int(L, "counter_2", e.counter_2);
    set_int(L, "x", e.x);
    set_int(L, "z", e.z);
    set_int(L, "altitude", e.altitude);
    set_int(L, "dx", e.dx);
    set_int(L, "dz", e.dz);
    set_int(L, "daltitude", e.daltitude);
    // The snapshot's bytes, for the fields nobody has named yet. A string, so
    // it is a copy the script cannot write back through.
    lua_pushlstring(L, (const char *)e.raw, sizeof e.raw);
    lua_setfield(L, -2, "raw");
    return 1;
}

int l_tribe(lua_State *L) {
    uint32_t i = (uint32_t)luaL_checkinteger(L, 1);
    const PopModApi *api = api_of(L);
    PopTribeView t;
    memset(&t, 0, sizeof t);
    t.size = (uint32_t)sizeof t;
    if (!api || !api->tribe || api->tribe(api, i, &t) != POP_OK) {
        lua_pushnil(L);
        return 1;
    }
    lua_createtable(L, 0, 7);
    set_int(L, "index", t.index);
    set_int(L, "guest_addr", t.guest_addr);
    set_int(L, "bytes", t.bytes);
    set_int(L, "type", t.type);
    set_int(L, "active", t.active);
    set_int(L, "tribe_id", t.tribe_id);
    set_int(L, "control_flags", t.control_flags);
    return 1;
}

int pinned(lua_State *L, int32_t which, bool as_bool) {
    int64_t v = 0;
    if (mods_lua_read_pinned(api_of(L), which, &v) != POP_OK) {
        lua_pushnil(L);
        return 1;
    }
    if (as_bool)
        lua_pushboolean(L, v != 0);
    else
        lua_pushinteger(L, (lua_Integer)v);
    return 1;
}
int l_paused(lua_State *L) {
    return pinned(L, MODS_PINNED_PAUSED, true);
}
int l_simulation_turn(lua_State *L) {
    return pinned(L, MODS_PINNED_SIMULATION_TURN, false);
}
int l_command_frame(lua_State *L) {
    return pinned(L, MODS_PINNED_COMMAND_FRAME, false);
}

// One shim per event, so every registration goes through one subscribe and
// through the mod's own API instance.
PopModStatus sub_frame(const PopModApi *a, int32_t p, PopEventFn f, void *u, uint32_t *id) {
    return a->on_frame ? a->on_frame(a, p, f, u, id) : (PopModStatus)POP_E_STATE;
}
PopModStatus sub_turn(const PopModApi *a, int32_t p, PopEventFn f, void *u, uint32_t *id) {
    return a->on_turn ? a->on_turn(a, p, f, u, id) : (PopModStatus)POP_E_STATE;
}
PopModStatus sub_level_load(const PopModApi *a, int32_t, PopEventFn f, void *u, uint32_t *id) {
    return a->on_level_load ? a->on_level_load(a, f, u, id) : (PopModStatus)POP_E_STATE;
}
PopModStatus sub_level_end(const PopModApi *a, int32_t, PopEventFn f, void *u, uint32_t *id) {
    return a->on_level_end ? a->on_level_end(a, f, u, id) : (PopModStatus)POP_E_STATE;
}
int l_on_frame(lua_State *L) {
    int32_t phase = phase_arg(L, 1);
    return subscribe(L, 2, phase, sub_frame, "on_frame");
}
int l_on_turn(lua_State *L) {
    int32_t phase = phase_arg(L, 1);
    return subscribe(L, 2, phase, sub_turn, "on_turn");
}
int l_on_level_load(lua_State *L) {
    return subscribe(L, 1, POP_EVENT_BEFORE, sub_level_load, "on_level_load");
}
int l_on_level_end(lua_State *L) {
    return subscribe(L, 1, POP_EVENT_BEFORE, sub_level_end, "on_level_end");
}

const luaL_Reg POP_FUNCS[] = {
    {"log", l_log},
    {"mod_id", l_mod_id},
    {"settings_get", l_settings_get},
    {"settings_set", l_settings_set},
    {"guest_read_u8", l_read_u8},
    {"guest_read_u16", l_read_u16},
    {"guest_read_u32", l_read_u32},
    {"symbol", l_symbol},
    {"entity_count", l_entity_count},
    {"entity_slot", l_entity_slot},
    {"entity", l_entity},
    {"tribe", l_tribe},
    {"paused", l_paused},
    {"simulation_turn", l_simulation_turn},
    {"command_frame", l_command_frame},
    {"on_frame", l_on_frame},
    {"on_turn", l_on_turn},
    {"on_level_load", l_on_level_load},
    {"on_level_end", l_on_level_end},
    {nullptr, nullptr},
};

// ----------------------------------------------------------- the sandbox --

void open_curated_libs(lua_State *L) {
    struct {
        const char *name;
        lua_CFunction fn;
    } libs[] = {
        {LUA_GNAME, luaopen_base},          {LUA_TABLIBNAME, luaopen_table},
        {LUA_STRLIBNAME, luaopen_string},   {LUA_MATHLIBNAME, luaopen_math},
        {LUA_COLIBNAME, luaopen_coroutine}, {LUA_UTF8LIBNAME, luaopen_utf8},
        {LUA_OSLIBNAME, luaopen_os},
    };
    for (auto &l : libs) {
        luaL_requiref(L, l.name, l.fn, 1);
        lua_pop(L, 1);
    }

    // The base library's own loaders. `require` is not among them because
    // `package` is never opened, which is also why nothing can pull io back in
    // through a C module.
    static const char *drop_globals[] = {"dofile",     "load",    "loadfile",
                                         "loadstring", "require", nullptr};
    for (const char **n = drop_globals; *n; ++n) {
        lua_pushnil(L);
        lua_setglobal(L, *n);
    }

    // os, cut to the two functions a mod has any business with. Everything
    // else it ships either touches the file system, reads the environment, or
    // ends the process.
    lua_getglobal(L, LUA_OSLIBNAME);
    static const char *drop_os[] = {"execute", "exit",      "getenv", "remove",   "rename",
                                    "tmpname", "setlocale", "date",   "difftime", nullptr};
    for (const char **n = drop_os; *n; ++n) {
        lua_pushnil(L);
        lua_setfield(L, -2, *n);
    }
    lua_pop(L, 1);
}

lua_State *create_state(uint32_t owner) {
    lua_State *L = luaL_newstate();
    if (!L)
        return nullptr;
    open_curated_libs(L);

    lua_pushinteger(L, (lua_Integer)owner);
    lua_setfield(L, LUA_REGISTRYINDEX, OWNER_KEY);

    lua_createtable(L, 0, (int)(sizeof POP_FUNCS / sizeof POP_FUNCS[0]));
    for (const luaL_Reg *r = POP_FUNCS; r->name; ++r) {
        lua_pushcfunction(L, r->func);
        lua_setfield(L, -2, r->name);
    }
    lua_setglobal(L, "pop");

    states()[owner] = L;
    return L;
}

// Subscriptions first, then the state. The other order has a window in which
// an event can reach a closed lua_State, and the window is exactly as long as
// the close takes.
void drop(uint32_t owner) {
    closing().insert(owner);
    mods_events_remove_all(owner);
    for (auto &cb : callbacks()) {
        if (cb.owner != owner)
            continue;
        cb.disabled = true;
        cb.L = nullptr; // nothing dereferences it again
    }
    auto it = states().find(owner);
    if (it != states().end()) {
        // Finalizers run here. Anything one of them tries to register is
        // refused by the guard above, so this is the last word.
        lua_close(it->second);
        states().erase(it);
    }
    // Belt and braces: whatever a finalizer reached that this file does not
    // own, the mod leaves with nothing subscribed in its name.
    mods_events_remove_all(owner);
    closing().erase(owner);
}

} // namespace

// ------------------------------------------------------------- the module --

extern "C" bool mods_lua_open_runtime(void) {
    // Starts a session. There is no state shared between mods to create here,
    // so what this does is make sure none is left over from a previous one:
    // its interpreters and its subscriptions go before this session's first
    // script runs, and the error count is this session's.
    while (!states().empty())
        drop(states().begin()->first);
    g_errors = 0;
    g_open = true;
    return true;
}

extern "C" const char *mods_lua_run_script(uint32_t owner, const char *path) {
    static std::string err;
    if (!g_open && !mods_lua_open_runtime())
        return "the lua runtime is not open";
    if (!path || !*path)
        return "no script path";

    lua_State *L = find_state(owner);
    if (!L)
        L = create_state(owner);
    if (!L)
        return "out of memory creating a lua state";

    if (luaL_loadfile(L, path) != LUA_OK || lua_pcall(L, 0, 0, 0) != LUA_OK) {
        const char *msg = lua_tostring(L, -1);
        err = msg ? msg : "unknown lua error";
        lua_pop(L, 1);
        LOGW("mods: lua script %s failed: %s", path, err.c_str());
        return err.c_str();
    }
    return nullptr;
}

#ifdef POPM_TESTING
// Reading a script's globals and evaluating a chunk in its state are how a
// test asks what a script did. Compiled only into a test binary: a production
// host has no business running arbitrary Lua in a mod's own interpreter, and
// an entry point that does is one an exploit would look for first.
extern "C" bool mods_lua_global_int(uint32_t owner, const char *name, int64_t *out) {
    lua_State *L = find_state(owner);
    if (!L || !name)
        return false;
    lua_getglobal(L, name);
    bool ok = lua_isnumber(L, -1) != 0;
    if (ok && out)
        *out = (int64_t)lua_tointeger(L, -1);
    lua_pop(L, 1);
    return ok;
}

extern "C" const char *mods_lua_eval(uint32_t owner, const char *chunk) {
    static std::string out;
    lua_State *L = find_state(owner);
    if (!L || !chunk)
        return "";
    if (luaL_loadstring(L, chunk) != LUA_OK || lua_pcall(L, 0, 1, 0) != LUA_OK) {
        const char *msg = lua_tostring(L, -1);
        out = msg ? msg : "unknown lua error";
        lua_pop(L, 1);
        return out.c_str();
    }
    const char *s = lua_tostring(L, -1); // numbers convert; nil does not
    out = s ? s : "";
    lua_pop(L, 1);
    return out.c_str();
}
#endif // POPM_TESTING

// The three pinned globals, read the way every other Lua-reachable guest byte
// is read: the API resolves the symbol and the API does the bounds-checked
// load. PopModApi has no accessor for them, and this is the one seam that
// stands in for one rather than a second way into guest memory.
extern "C" PopModStatus mods_lua_read_pinned(const PopModApi *api, int32_t which, int64_t *out) {
    if (!api || !out || !api->symbol)
        return POP_E_INVAL;
    const char *name = which == MODS_PINNED_PAUSED            ? "pause_flags"
                       : which == MODS_PINNED_SIMULATION_TURN ? "simulation_turn"
                       : which == MODS_PINNED_COMMAND_FRAME   ? "command_frame"
                                                              : nullptr;
    if (!name)
        return POP_E_INVAL;
    uint32_t addr = 0;
    PopModStatus st = api->symbol(api, name, &addr);
    if (st != POP_OK)
        return st;
    if (which == MODS_PINNED_PAUSED) {
        if (!api->guest_read_u8)
            return POP_E_STATE;
        uint8_t b = 0;
        st = api->guest_read_u8(api, addr, &b);
        if (st != POP_OK)
            return st;
        *out = (b & 0x2u) != 0; // bit 1 is pause
        return POP_OK;
    }
    if (!api->guest_read_u32)
        return POP_E_STATE;
    uint32_t v = 0;
    st = api->guest_read_u32(api, addr, &v);
    if (st != POP_OK)
        return st;
    *out = (int64_t)v;
    return POP_OK;
}

extern "C" void mods_lua_drop_mod(uint32_t owner) {
    drop(owner);
}

extern "C" void mods_lua_shutdown(void) {
    while (!states().empty())
        drop(states().begin()->first);
    g_open = false;
}

extern "C" uint32_t mods_lua_errors(void) {
    return g_errors;
}
