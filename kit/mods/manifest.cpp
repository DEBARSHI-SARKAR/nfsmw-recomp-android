// manifest.cpp - the manifest model, semantic versions and load order.
//
// Resolution rejects transitively at every stage: an unmet requirement, a
// conflict and (in the loader) a failed init all take the mods that depended
// on the rejected one with them. The prune-and-sort therefore runs again after
// conflicts are applied, because a conflict creates new unmet requirements.
#include "manifest_types.h"
#include "mods_internal.h"

#include <algorithm>
#include <map>
#include <set>
#include <stdlib.h>
#include <string.h>

namespace {

bool is_hex(const std::string &s) {
    for (char c : s)
        if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F')))
            return false;
    return !s.empty();
}

const TomlValue *find(const TomlDoc &d, const char *key) {
    auto it = d.values.find(key);
    return it == d.values.end() ? nullptr : &it->second;
}

// A parsed semantic version: three numbers and an optional prerelease tag.
// Build metadata after '+' is ignored, as the specification says it must be.
struct Semver {
    long long major = 0, minor = 0, patch = 0;
    std::string prerelease;
    bool valid = false;
};

// Strictly three dot-separated numeric components, each without leading zeros
// unless it is exactly "0". Anything else is not a semantic version, and
// pretending it is one is how "1.2" and "1.2.banana" both came to mean 1.2.0.
Semver semver_parse(const std::string &text) {
    Semver v;
    // Dot-separated identifiers of [0-9A-Za-z-], none of them empty, and a
    // numeric one may not have a leading zero. "1.0.0+" and "1.0.0-alpha..1"
    // are both malformed and were both being accepted.
    auto identifiers_ok = [](const std::string &text_in, bool numeric_rules) {
        if (text_in.empty())
            return false;
        size_t start = 0;
        for (;;) {
            size_t dot = text_in.find('.', start);
            std::string id =
                text_in.substr(start, dot == std::string::npos ? std::string::npos : dot - start);
            if (id.empty())
                return false;
            bool all_digits = true;
            for (char ch : id) {
                bool ok = (ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z') ||
                          (ch >= 'A' && ch <= 'Z') || ch == '-';
                if (!ok)
                    return false;
                if (ch < '0' || ch > '9')
                    all_digits = false;
            }
            if (numeric_rules && all_digits && id.size() > 1 && id[0] == '0')
                return false;
            if (dot == std::string::npos)
                return true;
            start = dot + 1;
        }
    };

    std::string core = text;
    size_t plus = core.find('+');
    if (plus != std::string::npos) {
        if (!identifiers_ok(core.substr(plus + 1), false))
            return v;
        core = core.substr(0, plus);
    }
    size_t dash = core.find('-');
    if (dash != std::string::npos) {
        v.prerelease = core.substr(dash + 1);
        core = core.substr(0, dash);
        if (!identifiers_ok(v.prerelease, true))
            return v;
    }
    long long *out[3] = {&v.major, &v.minor, &v.patch};
    size_t start = 0;
    for (int i = 0; i < 3; ++i) {
        size_t dot = core.find('.', start);
        bool last = (i == 2);
        if (last != (dot == std::string::npos))
            return v; // too few or too many
        std::string part = core.substr(start, last ? std::string::npos : dot - start);
        if (part.empty())
            return v;
        for (char ch : part)
            if (ch < '0' || ch > '9')
                return v;
        if (part.size() > 1 && part[0] == '0')
            return v; // no leading zeros
        *out[i] = strtoll(part.c_str(), nullptr, 10);
        if (!last)
            start = dot + 1;
    }
    v.valid = true;
    return v;
}

// Precedence as the specification defines it: the three numbers first, then a
// version WITH a prerelease is lower than the same version without one, then
// the prerelease identifiers dot by dot, numeric ones compared as numbers and
// numeric ranking below alphanumeric.
int prerelease_cmp(const std::string &a, const std::string &b) {
    if (a.empty() && b.empty())
        return 0;
    if (a.empty())
        return 1; // no prerelease outranks any prerelease
    if (b.empty())
        return -1;
    size_t ia = 0, ib = 0;
    for (;;) {
        if (ia >= a.size() && ib >= b.size())
            return 0;
        if (ia >= a.size())
            return -1; // fewer identifiers ranks lower
        if (ib >= b.size())
            return 1;
        size_t da = a.find('.', ia), db = b.find('.', ib);
        std::string pa = a.substr(ia, da == std::string::npos ? std::string::npos : da - ia);
        std::string pb = b.substr(ib, db == std::string::npos ? std::string::npos : db - ib);
        auto numeric = [](const std::string &t) {
            if (t.empty())
                return false;
            for (char c : t)
                if (c < '0' || c > '9')
                    return false;
            return true;
        };
        bool na = numeric(pa), nb = numeric(pb);
        if (na && nb) {
            long long x = strtoll(pa.c_str(), nullptr, 10);
            long long y = strtoll(pb.c_str(), nullptr, 10);
            if (x != y)
                return x < y ? -1 : 1;
        } else if (na != nb) {
            return na ? -1 : 1; // numeric ranks below alphanumeric
        } else if (pa != pb) {
            return pa < pb ? -1 : 1;
        }
        if (da == std::string::npos)
            ia = a.size();
        else
            ia = da + 1;
        if (db == std::string::npos)
            ib = b.size();
        else
            ib = db + 1;
    }
}

int semver_cmp(const Semver &a, const Semver &b) {
    if (a.major != b.major)
        return a.major < b.major ? -1 : 1;
    if (a.minor != b.minor)
        return a.minor < b.minor ? -1 : 1;
    if (a.patch != b.patch)
        return a.patch < b.patch ? -1 : 1;
    return prerelease_cmp(a.prerelease, b.prerelease);
}

// The built-in capabilities every mod may depend on. They are always present
// and always 1.0.0, so a `requires` on one of them is satisfied by definition.
const char *const BUILTINS[] = {"core.hooks", "core.overlay", "core.lua"};

bool is_builtin(const std::string &id) {
    for (const char *b : BUILTINS)
        if (id == b)
            return true;
    return false;
}

} // namespace

bool mods_semver_valid(const std::string &v) {
    return semver_parse(v).valid;
}

bool mods_semver_satisfies(const std::string &have, const std::string &op,
                           const std::string &want) {
    Semver a = semver_parse(have), b = semver_parse(want);
    // A comparison against something that is not a version has no true answer,
    // and answering "yes" would load a mod on the strength of a typo.
    if (!a.valid || !b.valid)
        return false;
    int c = semver_cmp(a, b);
    if (op == ">=")
        return c >= 0;
    if (op == "=")
        return c == 0;
    if (op == "<")
        return c < 0;
    return false;
}

// Parse and validate a mod manifest, retaining its identity for useful failure reports.
// Check API/game compatibility fields before loader code can act on the manifest.
ModManifest mods_parse_manifest(const std::string &text, std::string *error) {
    ModManifest m;
    std::string local;
    std::string &err = error ? *error : local;
    err.clear();

    TomlDoc doc;
    if (!mods_toml_parse(text, &doc, &err))
        return m;

    // Read the identity first, so a later failure can still be reported
    // against the id the manifest claims.
    if (const TomlValue *v = find(doc, "id"))
        if (v->kind == TomlValue::STRING)
            m.id = v->str;

    auto need_string = [&](const char *key, std::string *into) {
        const TomlValue *v = find(doc, key);
        if (!v || v->kind != TomlValue::STRING || v->str.empty()) {
            if (err.empty())
                err = std::string(key) + " is missing or is not a string";
            return false;
        }
        *into = v->str;
        return true;
    };

    need_string("id", &m.id);
    need_string("name", &m.name);
    if (need_string("version", &m.version) && !mods_semver_valid(m.version))
        if (err.empty())
            err = "version \"" + m.version + "\" is not a semantic version";

    const TomlValue *api = find(doc, "api");
    if (!api || api->kind != TomlValue::INT) {
        if (err.empty())
            err = "api is missing or is not an integer";
    } else {
        m.api = (int32_t)api->num;
    }

    // The game hash. A prefix is accepted so a manifest need not carry all 64
    // characters, but a short one names too many possible images to mean
    // anything, so under 16 is refused as ambiguous rather than trusted.
    if (need_string("game", &m.game)) {
        if (m.game.size() < 16 || m.game.size() > 64 || !is_hex(m.game))
            if (err.empty())
                err = "game must be 16 to 64 hexadecimal characters; \"" + m.game +
                      "\" is too short to identify an image";
    }

    if (const TomlValue *v = find(doc, "requires")) {
        if (v->kind != TomlValue::ARRAY) {
            if (err.empty())
                err = "requires must be an array of strings";
        } else {
            for (const std::string &entry : v->array) {
                // "id op version", exactly three words.
                std::string a, b, c;
                size_t s1 = entry.find(' ');
                size_t s2 = s1 == std::string::npos ? s1 : entry.find(' ', s1 + 1);
                if (s1 == std::string::npos || s2 == std::string::npos) {
                    if (err.empty())
                        err = "requires entry \"" + entry + "\" is not \"id op version\"";
                    continue;
                }
                a = entry.substr(0, s1);
                b = entry.substr(s1 + 1, s2 - s1 - 1);
                c = entry.substr(s2 + 1);
                if (b != ">=" && b != "=" && b != "<") {
                    if (err.empty())
                        err = "requires entry \"" + entry +
                              "\" uses an operator that is not >=, = or <";
                    continue;
                }
                if (!mods_semver_valid(c)) {
                    if (err.empty())
                        err = "requires entry \"" + entry + "\" does not name a semantic version";
                    continue;
                }
                m.requires_.push_back({a, b, c});
            }
        }
    }

    if (const TomlValue *v = find(doc, "conflicts")) {
        if (v->kind != TomlValue::ARRAY) {
            if (err.empty())
                err = "conflicts must be an array of strings";
        } else {
            m.conflicts = v->array;
        }
    }

    if (const TomlValue *v = find(doc, "affects_simulation"))
        m.affects_simulation = (v->kind == TomlValue::BOOL) ? v->boolean : v->num != 0;

    if (const TomlValue *v = find(doc, "plugin.path"))
        if (v->kind == TomlValue::STRING)
            m.plugin_path = v->str;
    if (const TomlValue *v = find(doc, "script.path"))
        if (v->kind == TomlValue::STRING)
            m.script_path = v->str;
    if (const TomlValue *v = find(doc, "assets.path"))
        if (v->kind == TomlValue::STRING)
            m.assets_path = v->str;

    for (const std::string &key : doc.settings_keys) {
        const TomlValue *v = find(doc, ("settings." + key).c_str());
        if (!v || v->kind != TomlValue::TABLE) {
            if (err.empty())
                err = "settings entry \"" + key + "\" is not an inline table";
            continue;
        }
        ModSetting s;
        s.key = key;
        s.label = key;
        auto entry = [&](const char *k) -> const TomlValue * {
            auto it = v->table.find(k);
            return it == v->table.end() ? nullptr : &it->second;
        };
        const TomlValue *type = entry("type");
        s.kind = (type && type->kind == TomlValue::STRING && type->str == "bool") ? POP_SETTING_BOOL
                                                                                  : POP_SETTING_INT;
        if (const TomlValue *d = entry("default"))
            s.def = d->num;
        if (s.kind == POP_SETTING_BOOL) {
            // A bool's range is what a bool is, whatever the manifest says.
            s.min = 0;
            s.max = 1;
            if (s.def)
                s.def = 1;
        } else {
            if (const TomlValue *lo = entry("min"))
                s.min = lo->num;
            if (const TomlValue *hi = entry("max"))
                s.max = hi->num;
        }
        if (const TomlValue *l = entry("label"))
            if (l->kind == TomlValue::STRING)
                s.label = l->str;
        m.settings.push_back(s);
    }
    return m;
}

// Resolve a deterministic dependency order and report rejected mods.
// Prune unsatisfied requirements transitively, then sort surviving core/user groups and detect cycles.
bool mods_resolve_order(std::vector<ModManifest> &mods,
                        std::vector<std::pair<std::string, std::string>> *rejected) {
    auto reject = [&](const ModManifest &m, const std::string &why) {
        if (rejected)
            rejected->push_back({m.id, why});
    };

    // 1. Duplicate ids: the first one seen wins, which is the one discovery
    //    reached first and so is deterministic.
    {
        std::set<std::string> seen;
        std::vector<ModManifest> kept;
        for (ModManifest &m : mods) {
            if (seen.count(m.id)) {
                reject(m, "duplicate id; the first \"" + m.id + "\" was kept");
                continue;
            }
            seen.insert(m.id);
            kept.push_back(m);
        }
        mods.swap(kept);
    }

    // Prune to a fixed point: a mod whose requirement is absent or the wrong
    // version goes, and so does anything that required IT, however deep.
    auto prune = [&]() {
        for (;;) {
            std::map<std::string, std::string> version_of;
            std::set<std::string> core_ids;
            for (const ModManifest &m : mods) {
                version_of[m.id] = m.version;
                if (m.core_root)
                    core_ids.insert(m.id);
            }
            std::vector<ModManifest> kept;
            bool changed = false;
            for (ModManifest &m : mods) {
                std::string why;
                for (const ModRequire &r : m.requires_) {
                    if (is_builtin(r.id)) {
                        if (!mods_semver_satisfies("1.0.0", r.op, r.version))
                            why = "requires " + r.id + " " + r.op + " " + r.version +
                                  ", but the built-in is 1.0.0";
                        continue;
                    }
                    auto it = version_of.find(r.id);
                    if (it == version_of.end()) {
                        why = "requires " + r.id + ", which is not loaded";
                    } else if (m.core_root && !core_ids.count(r.id)) {
                        why = "core mod requires user mod " + r.id;
                    } else if (!mods_semver_satisfies(it->second, r.op, r.version)) {
                        why = "requires " + r.id + " " + r.op + " " + r.version + ", but " +
                              it->second + " is present";
                    }
                }
                if (why.empty())
                    kept.push_back(m);
                else {
                    reject(m, why);
                    changed = true;
                }
            }
            mods.swap(kept);
            if (!changed)
                break;
        }
    };

    // Topological sort within core then user, ties by id ascending.
    // Core-to-user requirements were pruned above. False on a cycle.
    auto topo_sort = [&]() {
        std::vector<ModManifest> order;
        std::set<std::string> placed;
        std::vector<ModManifest> remaining = mods;
        std::sort(remaining.begin(), remaining.end(),
                  [](const ModManifest &a, const ModManifest &b) {
                      if (a.core_root != b.core_root)
                          return a.core_root;
                      return a.id < b.id;
                  });
        while (!remaining.empty()) {
            size_t chosen = remaining.size();
            for (size_t i = 0; i < remaining.size(); ++i) {
                if (remaining[i].core_root != remaining.front().core_root)
                    break;
                bool ready = true;
                for (const ModRequire &r : remaining[i].requires_) {
                    if (is_builtin(r.id))
                        continue;
                    bool still_waiting = false;
                    for (const ModManifest &o : remaining)
                        if (o.id == r.id)
                            still_waiting = true;
                    if (still_waiting && !placed.count(r.id))
                        ready = false;
                }
                if (ready) {
                    chosen = i;
                    break;
                }
            }
            if (chosen == remaining.size()) {
                bool core = remaining.front().core_root;
                std::vector<ModManifest> later;
                for (const ModManifest &m : remaining) {
                    if (m.core_root == core)
                        reject(m, "is in a dependency cycle");
                    else
                        later.push_back(m);
                }
                // Preserve the later tier for pruning and sorting below.
                order.insert(order.end(), later.begin(), later.end());
                mods.swap(order);
                return false;
            }
            placed.insert(remaining[chosen].id);
            order.push_back(remaining[chosen]);
            remaining.erase(remaining.begin() + (ptrdiff_t)chosen);
        }
        mods.swap(order);
        return true;
    };

    // 2. Prune, then sort. Conflicts are resolved AFTER this, against load
    //    order rather than against directory names: a mod that is about to be
    //    pruned for a missing dependency must not get to reject a valid one
    //    first, and which of two conflicting mods loses must not depend on
    //    what their directories happen to be called.
    prune();
    // A cycle rejects the mods in it and everything behind it, and resolution
    // CONTINUES with the survivors. Returning here left the survivors unsorted
    // and skipped conflict resolution entirely, so two mutually conflicting
    // mods both loaded whenever some unrelated pair formed a cycle.
    bool had_cycle = !topo_sort();
    if (had_cycle) {
        prune();
        topo_sort();
    }

    // 3. Conflicts. The LATER mod in load order loses.
    {
        std::set<std::string> present;
        for (const ModManifest &m : mods)
            present.insert(m.id);
        std::set<std::string> dropped;
        for (size_t i = 0; i < mods.size(); ++i) {
            for (const std::string &other : mods[i].conflicts) {
                // Re-checked every iteration, not once before the loop: a mod
                // that loses a conflict stops participating immediately. With
                // A, B, C where B conflicts with both A and C, B loses to A
                // and must not then go on to reject C.
                if (dropped.count(mods[i].id))
                    break;
                if (!present.count(other) || other == mods[i].id)
                    continue;
                size_t j = mods.size();
                for (size_t k = 0; k < mods.size(); ++k)
                    if (mods[k].id == other)
                        j = k;
                if (j == mods.size() || dropped.count(mods[j].id))
                    continue;
                size_t loser = i > j ? i : j;
                size_t winner = i > j ? j : i;
                dropped.insert(mods[loser].id);
                reject(mods[loser], "conflicts with " + mods[winner].id);
            }
        }
        if (!dropped.empty()) {
            std::vector<ModManifest> kept;
            for (ModManifest &m : mods)
                if (!dropped.count(m.id))
                    kept.push_back(m);
            mods.swap(kept);
            // 4. A conflict creates new unmet requirements, so prune and sort
            //    again rather than leaving a dependent of the loser behind.
            prune();
            if (!topo_sort())
                had_cycle = true;
        }
    }
    // False when a cycle was found, which is what it has always meant; the
    // survivors are resolved either way.
    return !had_cycle;
}
