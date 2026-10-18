// api.cpp - the seam to the optional Lua core.
#include "mods_internal.h"

extern "C" __attribute__((weak)) bool mods_lua_available(void) {
    return false;
}
extern "C" __attribute__((weak)) bool mods_lua_core_init(void) {
    return false;
}
extern "C" __attribute__((weak)) const char *mods_lua_run_script(uint32_t, const char *) {
    return "no Lua runtime in this build";
}
extern "C" __attribute__((weak)) void mods_lua_drop_mod(uint32_t) {}
extern "C" __attribute__((weak)) void mods_lua_shutdown(void) {}
extern "C" __attribute__((weak)) uint32_t mods_lua_errors(void) {
    return 0;
}
// mods_write_run_record's weak default lives in runtime/mods_seam.cpp: a
// second weak definition is a duplicate symbol on COFF.
extern "C" __attribute__((weak)) void mods_run_record_capture_payload(const char *) {}
