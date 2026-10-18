// manifest_types.h - the manifest model and the TOML subset it is built from.
//
// These are C++ types used only inside this task's translation units, which is
// why they are here rather than in mods_internal.h: nothing outside the
// manifest, the resolver and the loader ever names a ModManifest.
#pragma once
#include "pop_mod_api.h"

#include <map>
#include <string>
#include <utility>
#include <vector>

// One "id op version" entry from `requires`.
struct ModRequire {
    std::string id, op, version;
};

// One [settings] entry. `def`, `min` and `max` are the declared range; a bool
// is 0..1 whatever the manifest says, because that is what a bool is.
struct ModSetting {
    std::string key, label;
    int32_t kind = POP_SETTING_INT;
    int64_t def = 0, min = 0, max = 0;
};

// A manifest as parsed. The first seven members are listed first and in this
// order because the resolver's tests build them with aggregate initialisation.
struct ModManifest {
    std::string id, name, version;
    int32_t api = 0;
    std::vector<ModRequire> requires_;
    std::vector<std::string> conflicts;
    bool affects_simulation = false;
    std::string game;
    std::string plugin_path, script_path, assets_path;
    std::vector<ModSetting> settings;
    std::string dir;
    // Set by discovery, never by a manifest. Core is a strict earlier tier.
    bool core_root = false;
};

// ---------------------------------------------------------------------------
// The TOML subset: one assignment per line, values are quoted strings,
// integers, booleans, string arrays and one-line inline tables. A '#' inside a
// string is not a comment. Anything else is an error naming the line.
// ---------------------------------------------------------------------------
struct TomlValue {
    enum Kind { STRING, INT, BOOL, ARRAY, TABLE } kind = STRING;
    std::string str;
    long long num = 0;
    bool boolean = false;
    std::vector<std::string> array;
    std::map<std::string, TomlValue> table;
};

// Keys are "section.key" for anything under a [section] header, and the bare
// key at the top level, so a document is one flat map.
struct TomlDoc {
    std::map<std::string, TomlValue> values;
    // The order [section] headers were seen, so [settings] keeps its order.
    std::vector<std::string> settings_keys;
};

bool mods_toml_parse(const std::string &text, TomlDoc *out, std::string *error);
ModManifest mods_parse_manifest(const std::string &text, std::string *error);
bool mods_semver_valid(const std::string &v);
bool mods_semver_satisfies(const std::string &have, const std::string &op, const std::string &want);
// Sorts `mods` into load order in place, removing every mod it rejects and
// appending (id, reason) for each. False when nothing survives a cycle.
bool mods_resolve_order(std::vector<ModManifest> &mods,
                        std::vector<std::pair<std::string, std::string>> *rejected);
