// builtin_mods.h - plugins compiled into the executable.
//
// Where a platform cannot load a plugin at run time (iOS, the web), the game's
// core mods are compiled into the app instead (cmake/BuiltinMods.cmake), each
// with its entry points renamed to recomp_builtin_<stem>_{abi,init,exit}, and
// listed in recomp_builtin_mods. The loader looks a manifest's plugin up here
// by its file's stem before it tries to open the file.
#pragma once
#include "pop_mod_api.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RecompBuiltinMod {
    const char *stem; // the plugin file name without its extension; NULL ends the table
    const PopModAbi *abi;
    PopModStatus (*init)(const PopModApi *api);
    PopModStatus (*exit)(void); // may be NULL
} RecompBuiltinMod;

// Ends with an entry whose stem is NULL. A build without built-in mods links
// an empty table.
extern const RecompBuiltinMod recomp_builtin_mods[];

#ifdef __cplusplus
}
#endif
