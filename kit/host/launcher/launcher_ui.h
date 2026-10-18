// launcher_ui.h - the launcher screen's model: what it shows, what each
// button does, and the import running behind it. No SDL: the host feeds it
// pointer and key input and presents what it draws (launcher_sdl.cpp), and
// the tests drive it directly. The platform supplies pickers and storage.
#pragma once
#include "launcher.h"
#include "launcher_canvas.h"

#include <atomic>
#include <functional>
#include <memory>
#include <mutex>
#include <string>
#include <vector>

namespace launcher {

// Something the player chose in a picker: a filesystem path, or on Android a
// content URI (a tree for a folder, a document for a ZIP) opened by the
// platform.
struct Picked {
    std::string path;
    std::string uri;
    bool tree = false;
    std::string name; // for messages
};
using PickDone = std::function<void(std::vector<Picked> picked, std::string error)>;

struct PlatformInfo {
    bool plays_in_place = true; // desktop: an install is played where it is
    bool can_pick_folder = true;
    bool can_pick_zip = true;
    bool can_open_folder = false;
    bool touch = false;
    std::string import_root;  // where an import goes (<...>/game)
    std::string profile_dir;  // saves and settings
    std::string folders_file; // remembered installs (desktop)
    std::string cache_file;   // verified digests of installs played in place
    std::string drop_hint;    // how else files can arrive ("copy it into ... with Finder")
    std::string auto_import;  // imported without asking when the game is not found (a bundled copy)
};

class Platform {
  public:
    virtual ~Platform() = default;
    virtual PlatformInfo info() = 0;
    virtual void pick_folder(PickDone done) = 0;
    virtual void pick_zip(PickDone done) = 0;
    // Where exported saves go (a path to write), and a ZIP of saves to read.
    virtual void pick_export(const std::string &suggested_name, PickDone done) = 0;
    virtual void pick_saves(PickDone done) = 0;
    // A source over what was picked. The default opens a path as a folder or a ZIP.
    virtual std::unique_ptr<Source> open(const Picked &p, std::string *error);
    // Folders that may hold the game.
    virtual std::vector<std::string> candidates(const Spec &spec) = 0;
    // Something the app was opened with (Android "Open with" on a ZIP), once.
    virtual bool initial_pick(Picked *) {
        return false;
    }
    virtual void open_folder(const std::string &) {}
    virtual void open_url(const std::string &) {}
    // An import starts, advances or ends: keep the device awake, keep the
    // process alive (Android), show a notification.
    virtual void import_activity(bool /*active*/, const Progress *) {}
    // Whether an import from `p` may move its files and remove what is left:
    // a folder the player copied into app storage.
    virtual bool movable(const Picked &) {
        return false;
    }
    // A finished import: e.g. keep it out of device backups (iPadOS).
    virtual void protect_import(const std::string &) {}
    // The import from `p` ended, whatever the result (security-scoped access).
    virtual void release(const Picked &) {}
    // pick_export's file has been written: hand it to the player (a share
    // sheet, a document the player creates). Desktop wrote it in place.
    virtual void export_ready(const Picked &) {}
    // The import copy runs on this thread; tests run it inline.
    virtual void run_in_background(std::function<void()> work);
};

enum class Screen { Main, Manage, Importing, Message };
enum class Key { Up, Down, Left, Right, Next, Previous, Activate, Back };

enum Action : int {
    kPlay = 1,
    kImportFolder,
    kImportZip,
    kLocate,
    kCopyIntoApp,
    kManage,
    kExportSaves,
    kImportSaves,
    kDeleteData,
    kOpenFolder,
    kStore,
    kBack,
    kCancel,
    kOk,
    kQuit,
    kUseCandidate = 100, // + index
};

struct Button {
    int id;
    std::string label;
    bool enabled = true;
    Rect rect;
};

class Launcher {
  public:
    Launcher(const Spec &spec, Platform &platform);
    ~Launcher();

    // `known` is a folder already resolved (saved path, checkout, data root);
    // it may be "".
    void start(const std::string &known);

    void pointer(int x, int y, bool pressed); // canvas pixels
    // A file or folder dropped on the window.
    void drop(const std::string &path);
    // Mobile: a ready game starts after `seconds` unless the player touches
    // the screen. advance() moves the countdown.
    void set_auto_play(double seconds);
    // The game cannot run here (no GPU): Play explains instead of starting.
    void set_unplayable(const std::string &reason);
    void advance(double seconds);
    bool counting_down() const {
        return countdown_ > 0;
    }
    void key(Key k);
    void activate(int id);
    void tick(); // picker results and import progress, on the host's thread
    void draw(Canvas &canvas, int scale);

    bool finished() const {
        return finished_;
    }
    bool quit() const {
        return quit_;
    }
    std::string exe() const {
        return status_.exe;
    }
    const Status &status() const {
        return status_;
    }
    Screen screen() const {
        return screen_;
    }
    const std::string &message() const {
        return message_;
    }
    const std::vector<std::string> &found() const {
        return found_;
    }
    const std::vector<Button> &buttons();
    bool dirty() const {
        return dirty_;
    }
    int focus() const {
        return focus_;
    }

  private:
    void rebuild();
    void evaluate(const std::string &root);
    void pick_then(bool folder, bool play_in_place);
    void begin_import(const Picked &p);
    void show(const std::string &text);
    void layout(int w, int h, int scale, int top);

    const Spec &spec_;
    Platform &platform_;
    PlatformInfo info_;
    Status status_;
    Screen screen_ = Screen::Main;
    std::string message_;
    std::vector<std::string> found_;
    std::vector<Button> buttons_;
    int focus_ = 0;
    int columns_ = 1; // Up and Down move a whole row
    int pressed_ = -1;
    bool finished_ = false, quit_ = false, dirty_ = true, confirm_delete_ = false;
    double countdown_ = 0;
    std::string unplayable_;
    Picked importing_;

    // Shared with picker callbacks and the import thread.
    struct Shared {
        std::mutex m;
        std::vector<std::function<void()>> posted;
        Progress progress;
        bool importing = false, import_done = false;
        ImportOutcome outcome;
    };
    std::shared_ptr<Shared> shared_;
    std::shared_ptr<std::atomic<bool>> cancel_;
    void post(std::function<void()> fn);
};

std::string human_bytes(uint64_t bytes);

} // namespace launcher
