#include "mods_tests.h"
#include "../manifest_types.h"
#include <string>
#include <vector>

namespace {
const char *GOOD = "id = \"popre.widescreen\"\n"
                   "name = \"Widescreen\"\n"
                   "version = \"1.0.0\"\n"
                   "api = 1\n"
                   "game = \"815ba8a550f571c38b602cf3386f65aab942667a4a2d9c7096b3660deac2eacd\"\n"
                   "requires = [\"core.hooks >= 1.0.0\"]\n"
                   "conflicts = [\"other.widescreen\"]\n"
                   "affects_simulation = false\n"
                   "\n[plugin]\npath = \"widescreen.dylib\"\n"
                   "[script]\npath = \"main.lua\"\n"
                   "[assets]\npath = \"data\"\n"
                   "[settings]\n"
                   "ui_scale = { type = \"int\", default = 2, min = 1, max = 4 }\n"
                   "shadows = { type = \"bool\", default = true, label = \"Shadows\" }\n";
} // namespace

MOD_TEST_SUITE(manifest_parses_every_section) {
    std::string err;
    ModManifest m = mods_parse_manifest(GOOD, &err);
    MOD_CHECK_STR(err.c_str(), "");
    MOD_CHECK_STR(m.id.c_str(), "popre.widescreen");
    MOD_CHECK_EQ(m.api, 1);
    MOD_CHECK_EQ(m.requires_.size(), 1u);
    MOD_CHECK_STR(m.requires_[0].id.c_str(), "core.hooks");
    MOD_CHECK_STR(m.requires_[0].op.c_str(), ">=");
    MOD_CHECK_EQ(m.conflicts.size(), 1u);
    MOD_CHECK(!m.affects_simulation);
    MOD_CHECK_STR(m.plugin_path.c_str(), "widescreen.dylib");
    MOD_CHECK_STR(m.script_path.c_str(), "main.lua");
    MOD_CHECK_STR(m.assets_path.c_str(), "data");
    MOD_CHECK_EQ(m.settings.size(), 2u);
    const ModSetting *scale = nullptr;
    const ModSetting *shadows = nullptr;
    for (const ModSetting &s : m.settings) {
        if (s.key == "ui_scale")
            scale = &s;
        if (s.key == "shadows")
            shadows = &s;
    }
    MOD_CHECK(scale && shadows);
    MOD_CHECK_EQ(scale->kind, POP_SETTING_INT);
    MOD_CHECK_EQ(scale->def, 2);
    MOD_CHECK_EQ(scale->min, 1);
    MOD_CHECK_EQ(scale->max, 4);
    // `default = true` is 1, not 0, and a bool's range is 0..1 by default.
    MOD_CHECK_EQ(shadows->kind, POP_SETTING_BOOL);
    MOD_CHECK_EQ(shadows->def, 1);
    MOD_CHECK_EQ(shadows->min, 0);
    MOD_CHECK_EQ(shadows->max, 1);
    MOD_CHECK_STR(shadows->label.c_str(), "Shadows");

    // All three payload sections are optional.
    std::string minimal = "id = \"a.b\"\nname = \"A\"\nversion = \"0.1.0\"\napi = 1\n"
                          "game = \"815ba8a550f571c3\"\n";
    ModManifest m2 = mods_parse_manifest(minimal, &err);
    MOD_CHECK_STR(err.c_str(), "");
    MOD_CHECK(m2.plugin_path.empty() && m2.script_path.empty() && m2.assets_path.empty());
}

MOD_TEST_SUITE(manifest_rejects_what_it_should) {
    std::string err;
    mods_parse_manifest("id = \"a.b\"\nname = \"A\"\nversion = \"1.0.0\"\napi = 1\n"
                        "game = \"815ba8a5\"\n",
                        &err);
    MOD_CHECK(err.find("game") != std::string::npos); // shorter than 16 hex
    err.clear();
    mods_parse_manifest("name = \"A\"\nversion = \"1.0.0\"\napi = 1\n"
                        "game = \"815ba8a550f571c3\"\n",
                        &err);
    MOD_CHECK(err.find("id") != std::string::npos);
    err.clear();
    mods_parse_manifest("id = \"a.b\"\nname = \"A\"\nversion = \"1.0.0\"\napi = 1\n"
                        "game = \"815ba8a550f571c3\"\nrequires = [\"core.hooks ~ 1\"]\n",
                        &err);
    MOD_CHECK(err.find("requires") != std::string::npos);
    err.clear();
    mods_parse_manifest("id = \"a.b\"\nthis is not toml\n", &err);
    MOD_CHECK(err.find("this is not toml") != std::string::npos);
}

MOD_TEST_SUITE(manifest_versions_and_order) {
    MOD_CHECK(mods_semver_satisfies("1.2.3", ">=", "1.0.0"));
    MOD_CHECK(!mods_semver_satisfies("0.9.0", ">=", "1.0.0"));
    MOD_CHECK(mods_semver_satisfies("1.0.0", "=", "1.0.0"));
    MOD_CHECK(!mods_semver_satisfies("1.0.1", "=", "1.0.0"));
    MOD_CHECK(mods_semver_satisfies("1.9.9", "<", "2.0.0"));
    MOD_CHECK(mods_semver_satisfies("1.10.0", ">=", "1.9.0")); // not a string compare

    auto make = [](const char *id, std::vector<std::string> reqs) {
        ModManifest m;
        m.id = id;
        m.version = "1.0.0";
        m.api = 1;
        for (const std::string &r : reqs)
            m.requires_.push_back({r, ">=", "1.0.0"});
        return m;
    };
    std::vector<ModManifest> mods = {
        make("z.last", {"m.middle"}),
        make("m.middle", {"a.first"}),
        make("a.first", {"core.hooks"}),
        make("b.also_first", {"core.hooks"}),
    };
    std::vector<std::pair<std::string, std::string>> rejected;
    MOD_CHECK(mods_resolve_order(mods, &rejected));
    MOD_CHECK_EQ(rejected.size(), 0u);
    MOD_CHECK_STR(mods[0].id.c_str(), "a.first");
    MOD_CHECK_STR(mods[1].id.c_str(), "b.also_first");
    MOD_CHECK_STR(mods[2].id.c_str(), "m.middle");
    MOD_CHECK_STR(mods[3].id.c_str(), "z.last");
}

MOD_TEST_SUITE(manifest_rejects_cycles_duplicates_and_conflicts_transitively) {
    std::vector<std::pair<std::string, std::string>> rejected;

    std::vector<ModManifest> cyc = {
        {"a.one", "A", "1.0.0", 1, {{"b.two", ">=", "1.0.0"}}, {}, false},
        {"b.two", "B", "1.0.0", 1, {{"a.one", ">=", "1.0.0"}}, {}, false},
    };
    MOD_CHECK(!mods_resolve_order(cyc, &rejected));
    MOD_CHECK_EQ(rejected.size(), 2u);
    for (const auto &r : rejected)
        MOD_CHECK(r.second.find("cycle") != std::string::npos);

    rejected.clear();
    std::vector<ModManifest> dup = {
        {"a.one", "A", "1.0.0", 1, {}, {}, false},
        {"a.one", "A again", "2.0.0", 1, {}, {}, false},
    };
    mods_resolve_order(dup, &rejected);
    MOD_CHECK_EQ(dup.size(), 1u);
    MOD_CHECK_STR(dup[0].name.c_str(), "A");

    rejected.clear();
    std::vector<ModManifest> unmet = {
        {"a.one", "A", "1.0.0", 1, {{"nobody.here", ">=", "1.0.0"}}, {}, false},
        {"b.two", "B", "1.0.0", 1, {{"a.one", ">=", "1.0.0"}}, {}, false},
        {"c.three", "C", "1.0.0", 1, {}, {}, false},
    };
    mods_resolve_order(unmet, &rejected);
    MOD_CHECK_EQ(unmet.size(), 1u);
    MOD_CHECK_STR(unmet[0].id.c_str(), "c.three");
    MOD_CHECK_EQ(rejected.size(), 2u);

    // A conflict rejects the LATER mod, and anything that depended on it goes
    // too - the pruning has to run again after the conflict is applied.
    rejected.clear();
    std::vector<ModManifest> conf = {
        {"a.first", "A", "1.0.0", 1, {}, {}, false},
        {"m.second", "M", "1.0.0", 1, {{"a.first", ">=", "1.0.0"}}, {"a.first"}, false},
        {"z.third", "Z", "1.0.0", 1, {{"m.second", ">=", "1.0.0"}}, {}, false},
    };
    mods_resolve_order(conf, &rejected);
    MOD_CHECK_EQ(conf.size(), 1u);
    MOD_CHECK_STR(conf[0].id.c_str(), "a.first");
    MOD_CHECK_EQ(rejected.size(), 2u);

    // A mod that loses a conflict stops participating in conflicts. B
    // conflicts with both A and C; it loses to A, so it must not go on to
    // reject C, which has done nothing wrong.
    rejected.clear();
    std::vector<ModManifest> three = {
        {"a.one", "A", "1.0.0", 1, {}, {}, false},
        {"b.two", "B", "1.0.0", 1, {}, {"a.one", "c.three"}, false},
        {"c.three", "C", "1.0.0", 1, {}, {}, false},
    };
    mods_resolve_order(three, &rejected);
    MOD_CHECK_EQ(three.size(), 2u);
    MOD_CHECK_STR(three[0].id.c_str(), "a.one");
    MOD_CHECK_STR(three[1].id.c_str(), "c.three");
    MOD_CHECK_EQ(rejected.size(), 1u);
    MOD_CHECK_STR(rejected[0].first.c_str(), "b.two");
}

MOD_TEST_SUITE(manifest_semver_is_a_semver) {
    // Complete, and nothing else. A version with too few or too many
    // components, a non-numeric component, a leading zero or trailing junk is
    // not a semantic version, and treating one as 1.2.0 is how a typo becomes
    // a load decision.
    MOD_CHECK(mods_semver_valid("0.0.0"));
    MOD_CHECK(mods_semver_valid("1.2.3"));
    MOD_CHECK(mods_semver_valid("1.2.3-alpha.1"));
    MOD_CHECK(mods_semver_valid("1.2.3+build.7"));
    MOD_CHECK(!mods_semver_valid("1.2"));
    MOD_CHECK(!mods_semver_valid("1.2.3.4"));
    MOD_CHECK(!mods_semver_valid("1.2.banana"));
    MOD_CHECK(!mods_semver_valid("01.2.3"));
    MOD_CHECK(!mods_semver_valid("1.2.3-"));
    MOD_CHECK(!mods_semver_valid("1.0.0+"));         // empty build metadata
    MOD_CHECK(!mods_semver_valid("1.0.0-alpha..1")); // empty identifier
    MOD_CHECK(!mods_semver_valid("1.0.0-alpha.01")); // numeric leading zero
    MOD_CHECK(!mods_semver_valid("1.0.0-al pha"));   // not an identifier
    MOD_CHECK(mods_semver_valid("1.0.0-alpha-1.2")); // a hyphen is allowed
    MOD_CHECK(!mods_semver_valid(""));

    // A comparison against something that is not a version has no true
    // answer, so it is never satisfied.
    MOD_CHECK(!mods_semver_satisfies("1.2", ">=", "1.0.0"));
    MOD_CHECK(!mods_semver_satisfies("1.0.0", ">=", "banana"));

    // Prerelease precedence: a prerelease is BELOW the release it precedes.
    MOD_CHECK(mods_semver_satisfies("1.0.0", ">=", "1.0.0-alpha"));
    MOD_CHECK(!mods_semver_satisfies("1.0.0-alpha", ">=", "1.0.0"));
    MOD_CHECK(!mods_semver_satisfies("1.0.0-alpha", "=", "1.0.0"));
    MOD_CHECK(mods_semver_satisfies("1.0.0-alpha", "<", "1.0.0"));
    // And between prereleases, identifier by identifier.
    MOD_CHECK(mods_semver_satisfies("1.0.0-alpha.2", ">=", "1.0.0-alpha.1"));
    MOD_CHECK(mods_semver_satisfies("1.0.0-alpha.beta", ">=", "1.0.0-alpha.2"));
    MOD_CHECK(mods_semver_satisfies("1.0.0-beta", ">=", "1.0.0-alpha"));
    MOD_CHECK(mods_semver_satisfies("1.0.0-alpha.1", ">=", "1.0.0-alpha"));
    // Build metadata is ignored entirely.
    MOD_CHECK(mods_semver_satisfies("1.0.0+a", "=", "1.0.0+b"));

    // A manifest whose own version is not a semver is refused, and so is a
    // requirement that does not name one.
    std::string err;
    mods_parse_manifest("id = \"a.b\"\nname = \"A\"\nversion = \"1.2\"\napi = 1\n"
                        "game = \"815ba8a550f571c3\"\n",
                        &err);
    MOD_CHECK(err.find("version") != std::string::npos);
    err.clear();
    mods_parse_manifest("id = \"a.b\"\nname = \"A\"\nversion = \"1.0.0\"\napi = 1\n"
                        "game = \"815ba8a550f571c3\"\nrequires = [\"core.hooks >= 1\"]\n",
                        &err);
    MOD_CHECK(err.find("requires") != std::string::npos);
}

MOD_TEST_SUITE(manifest_toml_rejects_what_is_outside_the_subset) {
    std::string err;
    // A repeated key inside an inline table, which was still overwriting.
    mods_parse_manifest("id = \"a.b\"\nname = \"A\"\nversion = \"1.0.0\"\napi = 1\n"
                        "game = \"815ba8a550f571c3\"\n[settings]\n"
                        "x = { type = \"int\", default = 1, default = 2 }\n",
                        &err);
    MOD_CHECK(err.find("duplicate key") != std::string::npos);
    err.clear();
    // A value must be one complete token. `"A" "B"` used to be accepted and
    // silently kept `A" "B`.
    mods_parse_manifest("id = \"a.b\"\nname = \"A\" \"B\"\nversion = \"1.0.0\"\n"
                        "api = 1\ngame = \"815ba8a550f571c3\"\n",
                        &err);
    MOD_CHECK(err.find("trailing text") != std::string::npos);

    err.clear();
    mods_parse_manifest("id = \"a.b\nname = \"A\"\n", &err);
    MOD_CHECK(!err.empty()); // unterminated

    // A repeated key is a mistake, not an update: a manifest that says two
    // different things must not quietly resolve to one of them.
    err.clear();
    mods_parse_manifest("id = \"a.b\"\nid = \"c.d\"\nname = \"A\"\n"
                        "version = \"1.0.0\"\napi = 1\ngame = \"815ba8a550f571c3\"\n",
                        &err);
    MOD_CHECK(err.find("duplicate key") != std::string::npos);
    MOD_CHECK(err.find("id") != std::string::npos);

    // The error names the line it was found on.
    err.clear();
    mods_parse_manifest("id = \"a.b\"\nthis is not toml\n", &err);
    MOD_CHECK(err.find("this is not toml") != std::string::npos);
}

// ---------------------------------------------------------------------------
// A cycle somewhere else must not stop conflict resolution. Two mods that
// conflict both loaded whenever an unrelated pair happened to form a cycle,
// because resolution returned as soon as it found the cycle.
// ---------------------------------------------------------------------------
MOD_TEST_SUITE(manifest_a_cycle_elsewhere_still_resolves_conflicts) {
    std::vector<std::pair<std::string, std::string>> rejected;
    std::vector<ModManifest> mods = {
        {"a.one", "A", "1.0.0", 1, {}, {}, false},
        {"b.two", "B", "1.0.0", 1, {}, {"a.one"}, false},
        {"c.cyc", "C", "1.0.0", 1, {{"d.cyc", ">=", "1.0.0"}}, {}, false},
        {"d.cyc", "D", "1.0.0", 1, {{"c.cyc", ">=", "1.0.0"}}, {}, false},
    };
    // False, because there WAS a cycle.
    MOD_CHECK(!mods_resolve_order(mods, &rejected));
    // The cycle is gone, and so is the conflict's loser: exactly one of the
    // two conflicting mods survives.
    MOD_CHECK_EQ(mods.size(), 1u);
    MOD_CHECK_STR(mods[0].id.c_str(), "a.one");
    // Three rejections: both halves of the cycle, and the conflict's loser.
    MOD_CHECK_EQ(rejected.size(), 3u);
    bool said_cycle = false, said_conflict = false;
    for (const auto &r : rejected) {
        if (r.second.find("cycle") != std::string::npos)
            said_cycle = true;
        if (r.second.find("conflicts") != std::string::npos)
            said_conflict = true;
    }
    MOD_CHECK(said_cycle);
    MOD_CHECK(said_conflict);
}
