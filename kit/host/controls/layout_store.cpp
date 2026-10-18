// layout_store.cpp - see layout_store.h.
#include "layout_store.h"

#include "../../platform/os.h"
#include "builtin_layouts.h"

#include <algorithm>
#include <filesystem>
#include <set>
#include <stdio.h>

namespace controls {

namespace {

// The three built-ins, always first in names() and always tried last in
// load(), in this order.
const char *const kBuiltinNames[] = {"pad", "keys", "pad+keys"};

// Reads a whole file as text; false (leaving *out alone) when it cannot be
// opened. The descriptor comes from the platform layer rather than fopen,
// which the Windows CRT deprecates and this target builds with -Werror.
bool read_file(const std::string &path, std::string *out) {
    const int fd = os_fd_open(path.c_str(), OS_O_RDONLY);
    if (fd < 0)
        return false;
    out->clear();
    char buf[8192];
    int64_t n;
    while ((n = os_fd_read(fd, buf, sizeof buf)) > 0)
        out->append(buf, size_t(n));
    os_fd_close(fd);
    return n >= 0;
}

// "<name>.<form_name(form)>.json" or (form-agnostic) "<name>.json".
std::string file_name(const std::string &name, Form form, bool with_form) {
    if (with_form)
        return name + "." + form_name(form) + ".json";
    return name + ".json";
}

// The layout name a "*.json" directory entry contributes to names(), or ""
// if it is not a ".json" file. "name.form.json" contributes "name"; any
// other ".json" stem is the name as-is.
std::string name_from_filename(const std::string &filename) {
    const std::string suffix = ".json";
    if (filename.size() <= suffix.size() ||
        filename.compare(filename.size() - suffix.size(), suffix.size(), suffix) != 0)
        return "";
    std::string stem = filename.substr(0, filename.size() - suffix.size());
    static const Form kForms[] = {Form::Tablet, Form::PhoneLandscape, Form::PhonePortrait};
    for (Form f : kForms) {
        const std::string form_suffix = std::string(".") + form_name(f);
        if (stem.size() > form_suffix.size() &&
            stem.compare(stem.size() - form_suffix.size(), form_suffix.size(), form_suffix) == 0)
            return stem.substr(0, stem.size() - form_suffix.size());
    }
    return stem;
}

// Collects every "*.json" name in `dir` (silently skipped if it does not
// exist) into `out`.
void collect_names(const std::string &dir, std::set<std::string> *out) {
    if (dir.empty())
        return;
    std::error_code ec;
    for (std::filesystem::directory_iterator it(dir, ec), end; !ec && it != end; it.increment(ec)) {
        if (!it->is_regular_file(ec))
            continue;
        const std::string name = name_from_filename(it->path().filename().string());
        if (!name.empty())
            out->insert(name);
    }
}

// Tries to load and parse `dir`/`filename`. False when the file does not
// exist (not an error); when it exists but fails to parse, *problem is set
// (unless already set, to keep the first failure) and this returns false.
bool try_load_file(const std::string &dir, const std::string &filename, Layout *out,
                   std::string *problem) {
    if (dir.empty())
        return false;
    const std::filesystem::path path = std::filesystem::path(dir) / filename;
    std::string text;
    if (!read_file(path.string(), &text))
        return false;
    std::string error;
    if (parse_layout(text, out, &error))
        return true;
    if (problem->empty())
        *problem = filename + ": " + error;
    return false;
}

} // namespace

Form form_for(int dw, int dh, double scale) {
    const double w_pt = scale > 0 ? dw / scale : dw;
    const double h_pt = scale > 0 ? dh / scale : dh;
    if (std::min(w_pt, h_pt) >= 600.0)
        return Form::Tablet;
    return dh > dw ? Form::PhonePortrait : Form::PhoneLandscape;
}

void LayoutStore::set_dirs(std::string profile_dir, std::string game_dir) {
    profile_dir_ = std::move(profile_dir);
    game_dir_ = std::move(game_dir);
}

std::vector<std::string> LayoutStore::names() const {
    std::set<std::string> builtins(std::begin(kBuiltinNames), std::end(kBuiltinNames));
    std::set<std::string> extra;
    collect_names(game_dir_, &extra);
    collect_names(profile_dir_, &extra);
    for (const char *b : kBuiltinNames)
        extra.erase(b);

    std::vector<std::string> out(std::begin(kBuiltinNames), std::end(kBuiltinNames));
    out.insert(out.end(), extra.begin(), extra.end()); // std::set already sorts
    return out;
}

bool LayoutStore::load(const std::string &name, Form form, Layout *out,
                       std::string *problem) const {
    problem->clear();
    const std::string form_file = file_name(name, form, true);
    const std::string plain_file = file_name(name, form, false);
    if (try_load_file(profile_dir_, form_file, out, problem))
        return true;
    if (try_load_file(profile_dir_, plain_file, out, problem))
        return true;
    if (try_load_file(game_dir_, form_file, out, problem))
        return true;
    if (try_load_file(game_dir_, plain_file, out, problem))
        return true;
    const char *builtin_text = builtin_layout(name, form);
    if (builtin_text) {
        std::string error;
        if (parse_layout(builtin_text, out, &error))
            return true;
        if (problem->empty())
            *problem = plain_file + ": " + error;
    }
    return false;
}

bool LayoutStore::has_user_copy(const std::string &name, Form form) const {
    if (profile_dir_.empty())
        return false;
    const std::filesystem::path path =
        std::filesystem::path(profile_dir_) / file_name(name, form, true);
    std::error_code ec;
    return std::filesystem::is_regular_file(path, ec);
}

bool LayoutStore::save_user_copy(const Layout &l, Form form, std::string *error) const {
    if (profile_dir_.empty()) {
        *error = "no profile directory set";
        return false;
    }
    std::error_code ec;
    std::filesystem::create_directories(profile_dir_, ec);
    if (ec) {
        *error = ec.message();
        return false;
    }
    const std::filesystem::path path =
        std::filesystem::path(profile_dir_) / file_name(l.name, form, true);
    std::string temporary = path.string() + ".tmp.XXXXXX";
    int fd = os_mkstemp(temporary.data());
    if (fd < 0) {
        *error = "could not create a temp file";
        return false;
    }
    FILE *f = (FILE *)os_fdopen(fd, "wb");
    if (!f) {
        os_fd_close(fd);
        os_unlink(temporary.c_str());
        *error = "could not open the temp file";
        return false;
    }
    const std::string text = write_layout(l);
    fwrite(text.data(), 1, text.size(), f);
    bool ok = !ferror(f) && fflush(f) == 0 && os_fd_fsync(fd) == 0;
    if (fclose(f) != 0)
        ok = false;
    if (ok)
        ok = os_rename(temporary.c_str(), path.string().c_str()) == 0;
    if (!ok) {
        os_unlink(temporary.c_str());
        *error = "could not write " + path.string();
    }
    return ok;
}

bool LayoutStore::delete_user_copy(const std::string &name, Form form) const {
    if (profile_dir_.empty())
        return false;
    const std::filesystem::path path =
        std::filesystem::path(profile_dir_) / file_name(name, form, true);
    std::error_code ec;
    return std::filesystem::remove(path, ec);
}

} // namespace controls
