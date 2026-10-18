// launcher_config.cpp - the launcher's Spec from this build's game.toml.
#include "launcher.h"

#include "game_config.h"

namespace launcher {
namespace {
std::vector<std::string> strings(const char *const *list) {
    std::vector<std::string> out;
    for (; *list; ++list)
        out.push_back(*list);
    return out;
}
} // namespace

const Spec &spec_from_config() {
    static const Spec spec = [] {
        static const char *const required[] = RECOMP_REQUIRED_DIRS;
        static const char *const exclude[] = RECOMP_BUNDLE_EXCLUDE;
        static const char *const names[] = RECOMP_LAUNCHER_INSTALL_NAMES;
        static const char *const gog[] = RECOMP_LAUNCHER_GOG_IDS;
        static const char *const steam[] = RECOMP_LAUNCHER_STEAM_IDS;
        Spec s;
        s.title = RECOMP_LAUNCHER_TITLE;
        s.store_url = RECOMP_LAUNCHER_STORE_URL;
        s.executable = RECOMP_EXECUTABLE;
        s.sha256 = RECOMP_EXE_SHA256;
        s.required_dirs = strings(required);
        s.exclude = strings(exclude);
        s.install_names = strings(names);
        s.gog_ids = strings(gog);
        s.steam_ids = strings(steam);
        s.min_free_bytes = uint64_t(RECOMP_LAUNCHER_MIN_FREE_MB) * 1024 * 1024;
        return s;
    }();
    return spec;
}

} // namespace launcher
