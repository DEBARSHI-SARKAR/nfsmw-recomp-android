// launcher_platform_desktop.cpp - the launcher's platform on macOS, Windows
// and Linux: SDL's native dialogs (the desktop portal on Flatpak), installs
// played where they are, and a copy in the profile when the player asks.
#include "launcher_sdl.h"

#include "../../runtime/layout.h"

#include <cctype>
#include <cstdio>
#include <memory>

namespace launcher {
namespace {

struct Pending {
    PickDone done;
    bool folder;
};

void SDLCALL on_dialog(void *userdata, const char *const *files, int) {
    std::unique_ptr<Pending> pending(static_cast<Pending *>(userdata));
    std::vector<Picked> picked;
    std::string error;
    if (!files)
        error = SDL_GetError();
    else
        for (const char *const *f = files; *f; ++f) {
            Picked p;
            p.path = *f;
            p.name = *f;
            picked.push_back(p);
        }
    pending->done(picked, error);
}

std::string file_url(const std::string &path) {
    std::string url = "file://";
    for (unsigned char c : path) {
        if (std::isalnum(c) || c == '/' || c == '-' || c == '_' || c == '.' || c == '~' || c == ':')
            url.push_back(char(c));
        else {
            char hex[4];
            snprintf(hex, sizeof hex, "%%%02X", c);
            url += hex;
        }
    }
#ifdef _WIN32
    if (url.size() > 7 && url[7] != '/')
        url.insert(7, "/");
#endif
    return url;
}

class DesktopPlatform final : public Platform {
  public:
    explicit DesktopPlatform(SDL_Window *window) : window_(window) {}

    PlatformInfo info() override {
        PlatformInfo i;
        const std::string profile = host_layout().profile_dir;
        i.plays_in_place = true;
        i.can_pick_folder = true;
        i.can_pick_zip = true;
        i.can_open_folder = true;
        i.touch = false;
        i.profile_dir = profile;
        i.import_root = profile + "/game";
        i.folders_file = profile + "/launcher-folders.txt";
        i.cache_file = profile + "/launcher-verified.txt";
        i.drop_hint = "You can also drop the game folder or a ZIP of it on this window.";
        return i;
    }
    void pick_folder(PickDone done) override {
        SDL_ShowOpenFolderDialog(on_dialog, new Pending{std::move(done), true}, window_, nullptr,
                                 false);
    }
    void pick_zip(PickDone done) override {
        static const SDL_DialogFileFilter filters[] = {{"ZIP archive", "zip"}};
        SDL_ShowOpenFileDialog(on_dialog, new Pending{std::move(done), false}, window_, filters, 1,
                               nullptr, false);
    }
    void pick_export(const std::string &suggested, PickDone done) override {
        static const SDL_DialogFileFilter filters[] = {{"ZIP archive", "zip"}};
        SDL_ShowSaveFileDialog(on_dialog, new Pending{std::move(done), false}, window_, filters, 1,
                               suggested.c_str());
    }
    void pick_saves(PickDone done) override {
        pick_zip(std::move(done));
    }
    std::vector<std::string> candidates(const Spec &spec) override {
        return detect_installs(spec);
    }
    void open_folder(const std::string &path) override {
        SDL_OpenURL(file_url(path).c_str());
    }
    void open_url(const std::string &url) override {
        SDL_OpenURL(url.c_str());
    }

  private:
    SDL_Window *window_;
};

} // namespace

std::unique_ptr<Platform, PlatformDeleter> make_platform(SDL_Window *window) {
    // Shares make_platform's no-delete contract (see launcher_sdl.h). One
    // small object leaked for the process life keeps both targets to one
    // ownership rule a caller cannot get wrong.
    return std::unique_ptr<Platform, PlatformDeleter>(new DesktopPlatform(window),
                                                      [](Platform *) {});
}

} // namespace launcher
