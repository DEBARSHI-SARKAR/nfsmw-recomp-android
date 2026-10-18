// launcher.h - finding, checking and importing the player's copy of the game.
// Portable: no SDL, no UI. The launcher screen (launcher_ui.cpp) and the
// platform pickers sit on top. Design: docs/superpowers/specs/2026-09-17-launcher-design.md.
#pragma once
#include <cstdint>
#include <functional>
#include <memory>
#include <string>
#include <vector>

namespace launcher {

// What this app's game needs. From game.toml through game_config.h in a real
// build (spec_from_config); built by hand in the tests.
struct Spec {
    std::string title, store_url, executable, sha256;
    std::vector<std::string> required_dirs, exclude, install_names, gog_ids, steam_ids;
    uint64_t min_free_bytes = 0;
};
const Spec &spec_from_config();

enum class State { NotFound, WrongVersion, Incomplete, Ready };
const char *state_name(State s);

struct Status {
    State state = State::NotFound;
    std::string root;                 // the folder holding the executable ("" when not found)
    std::string exe;                  // its path as found on disk
    std::string digest;               // its SHA-256 when it was hashed
    std::vector<std::string> missing; // required folders not present
};

// The folder holding spec.executable: `path` itself, or a folder up to two
// levels below it. `path` may also name the executable. Names are compared
// without case. "" when there is none.
std::string find_root(const Spec &spec, const std::string &path);

// The state of the game at `root` (a folder find_root accepts). A stamp from
// an import, or `cache_file` (size, mtime and digest of an install played in
// place, written here after a full hash), spares hashing the executable again.
// `cache_file` may be "".
Status check(const Spec &spec, const std::string &root, const std::string &cache_file = "");

// The name of an entry as it exists in `dir`, found without case; "" if none.
std::string find_name(const std::string &dir, const std::string &name);

// tools/stage_game_files.py's rule: the first path component or the file
// name matches a pattern (fnmatch *, ?, [...]; without case).
bool excluded(const std::string &relative, const std::vector<std::string> &patterns);
bool wildcard_match(const char *pattern, const char *name);

// SHA-256 of a file as lowercase hex; "" when unreadable.
std::string sha256_file(const std::string &path);

// ---------------------------------------------------------------------------
// Import
// ---------------------------------------------------------------------------
struct Entry {
    std::string relative; // '/' separated, relative to the source's root
    bool is_dir = false;
    uint64_t size = 0;
    int64_t mtime = 0;
    uint32_t index = 0; // the source's own handle for the entry
};

class Source {
  public:
    virtual ~Source() = default;
    // Every entry; false with *error set when the source cannot be read.
    virtual bool list(std::vector<Entry> *out, std::string *error) = 0;
    // Streams one file's bytes to `sink`, which returns false to stop.
    virtual bool read(const Entry &e, const std::function<bool(const uint8_t *, size_t)> &sink,
                      std::string *error) = 0;
    // Moves the entry's file to `target` without copying it (same volume);
    // false when the source cannot, and the caller copies instead.
    virtual bool move_to(const Entry &, const std::string &) {
        return false;
    }
};
std::unique_ptr<Source> folder_source(const std::string &root);
// A ZIP by path, or by an open descriptor the source then owns (Android's
// content URIs arrive as descriptors). nullptr when it is not a readable ZIP.
std::unique_ptr<Source> zip_source(const std::string &path, std::string *error);
std::unique_ptr<Source> zip_source_fd(int fd, std::string *error);

struct Progress {
    uint64_t files_done = 0, files_total = 0;
    uint64_t bytes_done = 0, bytes_total = 0;
    std::string current;
};

enum class ImportResult {
    Done,
    Cancelled,
    NoExecutable,
    WrongVersion,
    Incomplete,
    NoSpace,
    Failed
};
const char *import_result_name(ImportResult r);

struct ImportOutcome {
    ImportResult result = ImportResult::Failed;
    std::string error;
    uint64_t files_copied = 0, files_skipped = 0;
    uint64_t bytes_needed = 0, bytes_free = 0; // for NoSpace
};

// Copies the game out of `source` into `dest` (created). The entries used are
// those under the folder holding the executable, minus spec.exclude. Files
// already at `dest` with the same size and mtime are kept, so a cancelled or
// killed import resumes. Each file is written as <name>.part and renamed. The
// stamp is removed first and written last, after the imported executable
// hashes to spec.sha256. `progress` returns false to cancel.
// `move` takes files out of the source instead of copying them where the
// source can (a folder the player already put in app storage).
ImportOutcome import_game(const Spec &spec, Source &source, const std::string &dest,
                          const std::function<bool(const Progress &)> &progress = nullptr,
                          bool move = false);

// Removes `dest` and everything under it; true when nothing is left.
bool remove_tree(const std::string &dest);

// ---------------------------------------------------------------------------
// Remembered folders (desktop) and saves
// ---------------------------------------------------------------------------
// Most recent first, without duplicates, at most 8.
std::vector<std::string> load_folders(const std::string &file);
bool remember_folder(const std::string &file, const std::string &root);
bool forget_folder(const std::string &file, const std::string &root);

// The profile as a ZIP, minus names in `skip` (top-level). Import replaces
// files it carries and keeps the rest.
bool export_profile(const std::string &profile_dir, const std::string &zip_path,
                    const std::vector<std::string> &skip, std::string *error);
bool import_profile(const std::string &zip_path, const std::string &profile_dir,
                    std::string *error);

// ---------------------------------------------------------------------------
// Detection: folders on this machine that may hold the game (desktop).
// ---------------------------------------------------------------------------
std::vector<std::string> detect_installs(const Spec &spec);
// The platform-independent part, for the tests: candidates from these bases.
std::vector<std::string> detect_under(const Spec &spec, const std::vector<std::string> &bases);

} // namespace launcher
