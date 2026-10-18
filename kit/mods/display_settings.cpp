#include "display_settings.h"
#include "options_menu.h"
#include "mods_internal.h"
#include "game_config.h"
#include "../dx/host_api.h"
#include <atomic>
#include <algorithm>
#include <fstream>
#include <regex>
#include <sstream>
#include <cstring>

namespace {
const char *keys[] = {"rendering",        "ui_scale",    "wide_view",           "window",
                      "classic_mode",     "frame_limit", "performance_overlay", "hd_textures",
                      "texture_filtering"};
int desired[DISPLAY_ROW_COUNT] = {0, 0, 1, 0, 0, 0, 0, 1, 3};
std::atomic<int> classic{0}, scale{0}, wide{1}, fps{0}, overlay{0}, textures{1}, filtering{3};
int scene_w = 0, scene_h = 0; // guest baton only
// -1 not reported (no renderer), 0 empty, 1 replacement textures, 2 terrain detail only
std::atomic<int> pack_contents{-1};
const int rates[] = {0, 40, 60, 120};
bool initialized = false, probed = false;
std::vector<DisplayMode> modes{{640, 480, 16}};
// Publish render/projection choices together at a frame boundary and invalidate stale scene dimensions.
void apply_transition() {
    if (classic.load() != desired[0] || wide.load() != desired[2])
        scene_w = scene_h = 0;
    classic = desired[0];
    wide = desired[2];
}
} // namespace
void mods_display_reset() {
    initialized = false;
    probed = false;
    modes = {{640, 480, 16}};
    desired[0] = desired[1] = desired[3] = desired[4] = 0;
    desired[2] = 1;
    desired[DISPLAY_FPS] = desired[DISPLAY_OVERLAY] = 0;
    desired[DISPLAY_TEXTURES] = 1;
    desired[DISPLAY_FILTERING] = 3;
    textures = 1;
    filtering = 3;
    pack_contents = -1;
    classic = 0;
    scale = 0;
    wide = 1;
    fps = overlay = 0;
    scene_w = scene_h = 0;
}
void mods_display_live_defaults() {
    if (initialized)
        return;
    desired[DISPLAY_FPS] = 2;
    desired[DISPLAY_OVERLAY] = 2;
}
// The overlay a fresh profile starts with, when the host wants something
// other than the live default: a player build starts without the graph.
void mods_display_default_overlay(int mode) {
    if (initialized)
        return;
    desired[DISPLAY_OVERLAY] = std::clamp(mode, 0, 2);
}
namespace {
#ifdef POPM_TESTING
unsigned listed_rows = (2u << DISPLAY_CONTROLS_BIT) - 1;
#else
const unsigned listed_rows = RECOMP_SETTINGS_ROWS;
#endif
} // namespace
bool mods_settings_row_listed(int bit) {
    return bit >= 0 && bit <= DISPLAY_CONTROLS_BIT && (listed_rows >> bit & 1);
}
#ifdef POPM_TESTING
void mods_settings_rows_for_test(unsigned mask) {
    listed_rows = mask;
}
#endif
// Declare display settings, restore saved values within their supported ranges and publish host state.
void mods_display_init() {
    if (initialized)
        return;
    initialized = true;
    const int maximum[] = {1, 4, 1, 2, std::max(0, int(modes.size()) - 1), 3, 2, 1, 4};
    for (int i = 0; i < DISPLAY_ROW_COUNT; ++i) {
        mods_settings_declare(MODS_OWNER_RUNTIME, "host.display", keys[i], keys[i], POP_SETTING_INT,
                              desired[i], 0, maximum[i]);
        int64_t value = desired[i];
        mods_settings_get(MODS_OWNER_RUNTIME, keys[i], &value);
        desired[i] = int(std::clamp<int64_t>(value, 0, maximum[i]));
        // A row this game does not list keeps its neutral value, whatever an
        // older profile saved: Enhanced, automatic scale, wide view, the
        // game's own pacing, the pack and 8x filtering. The saved value stays
        // on disk for a build that lists the row again.
        static const int neutral[DISPLAY_ROW_COUNT] = {0, 0, 1, 0, 0, 0, 0, 1, 3};
        if (!mods_settings_row_listed(i) && i != DISPLAY_WINDOW && i != DISPLAY_OVERLAY)
            desired[i] = neutral[i];
    }
    if (modes.empty())
        desired[DISPLAY_RENDERING] = 0;
    scale = desired[1];
    fps = rates[desired[DISPLAY_FPS]];
    overlay = desired[DISPLAY_OVERLAY];
    apply_transition();
    textures = desired[DISPLAY_TEXTURES];
    filtering = desired[DISPLAY_FILTERING];
    host_display_request_window(desired[3]);
}
// Host controls work without game metadata. Renderer and native Options rows
// need a nonempty symbol map that passed the loader's validation.
bool mods_display_row_applies(DisplayRow row) {
    if (!mods_settings_row_listed(row))
        return false;
    switch (row) {
    case DISPLAY_WINDOW:
    case DISPLAY_FPS:
    case DISPLAY_OVERLAY:
        return true;
    case DISPLAY_RENDERING:
    case DISPLAY_UI_SCALE:
    case DISPLAY_WIDE:
    case DISPLAY_CLASSIC_MODE:
    case DISPLAY_TEXTURES:
    case DISPLAY_FILTERING:
        return mods_symbols_count() != 0;
    default:
        return false;
    }
}
int mods_display_value(DisplayRow row) {
    if (row == DISPLAY_CLASSIC_MODE && mods_options_resolution_count())
        return mods_options_resolution_value();
    return desired[row];
}
PopModStatus mods_display_nudge(DisplayRow row, int delta) {
    const int counts[] = {
        2,
        5,
        2,
        3,
        mods_options_resolution_count() ? mods_options_resolution_count() : int(modes.size()),
        4,
        3,
        2,
        5};
    if (row < 0 || row >= DISPLAY_ROW_COUNT || !counts[row])
        return POP_E_RANGE;
    const int current = mods_display_value(row);
    const int value = row == DISPLAY_UI_SCALE ? std::clamp(current + delta, 0, 4)
                                              : (current + delta + counts[row]) % counts[row];
    return mods_display_set(row, value);
}
bool mods_display_pending(DisplayRow row) {
    return (row == DISPLAY_RENDERING && desired[row] != classic.load()) ||
           (row == DISPLAY_WIDE && desired[row] != wide.load());
}
// Validate and persist a display change on the owning thread, then update its live host service.
// Rendering/projection wait for the next frame boundary; resolution uses the original Options callback.
PopModStatus mods_display_set(DisplayRow row, int value) {
    if (!mods_host_on_main_thread())
        return POP_E_WRONG_THREAD;
    if (row < 0 || row >= DISPLAY_ROW_COUNT)
        return POP_E_INVAL;
    if (!mods_settings_row_listed(row))
        return POP_E_STATE; // this game has no such row
    if (modes.empty() && !mods_options_resolution_count() &&
        ((row == DISPLAY_RENDERING && value) || row == DISPLAY_CLASSIC_MODE))
        return POP_E_STATE;
    const int maximum[] = {1,
                           4,
                           1,
                           2,
                           mods_options_resolution_count() ? mods_options_resolution_count() - 1
                                                           : int(modes.size()) - 1,
                           3,
                           2,
                           1,
                           4};
    if (value < 0 || value > maximum[row])
        return POP_E_RANGE;
    if (row == DISPLAY_CLASSIC_MODE && !mods_options_resolution_count()) {
        const auto m = modes[value];
        if (!host_display_offer_mode(m.w, m.h, m.bpp))
            return POP_E_STATE;
    }
    const auto status = row == DISPLAY_CLASSIC_MODE && mods_options_resolution_count()
                            ? POP_OK
                            : mods_settings_set(MODS_OWNER_RUNTIME, keys[row], value);
    if (status != POP_OK)
        return status;
    desired[row] = value;
    if (row == DISPLAY_CLASSIC_MODE && mods_options_resolution_count())
        mods_options_resolution_request(value);
    if (row == DISPLAY_UI_SCALE)
        scale = value;
    if (row == DISPLAY_FPS)
        fps = rates[value];
    if (row == DISPLAY_OVERLAY)
        overlay = value;
    if (row == DISPLAY_TEXTURES)
        textures = value;
    if (row == DISPLAY_FILTERING)
        filtering = value;
    if (row == DISPLAY_WINDOW)
        host_display_request_window(value);
    // Rendering and projection change together at the next completed frame.
    return POP_OK;
}
extern "C" void mods_display_transition(uint64_t next, int cls) {
    // Called under the guest baton, including level end. No presenter calls:
    // the producer can notify while holding its own service mutex.
    apply_transition();
    (void)next;
    (void)cls;
}
extern "C" int mods_display_classic() {
    return classic.load();
}
extern "C" int mods_display_scale() {
    return scale.load();
}
extern "C" int mods_display_wide() {
    return wide.load();
}
extern "C" void mods_display_scene_domain(int w, int h) {
    scene_w = w;
    scene_h = h;
}
extern "C" int mods_display_scene_width(int w, int h) {
    return !classic.load() && wide.load() && scene_h == h ? std::max(w, scene_w) : w;
}
extern "C" int mods_display_fps() {
    return fps.load();
}
extern "C" void mods_display_texture_pack(uint32_t replacements, int terrain_detail) {
    pack_contents = replacements ? 1 : terrain_detail ? 2 : 0;
}
extern "C" int mods_display_textures() {
    return textures.load();
}
extern "C" int mods_display_filtering() {
    return filtering.load();
}
extern "C" int mods_display_overlay() {
    return overlay.load();
}
std::string mods_display_line(DisplayRow row) {
    std::string result;
    switch (row) {
    case DISPLAY_RENDERING:
        result =
            std::string("Rendering: ") + (desired[row] ? "Classic" : "Enhanced (32-bit color)");
        break;
    case DISPLAY_UI_SCALE:
        result = "UI scale: " + (desired[row] ? std::to_string(desired[row]) : "auto");
        break;
    case DISPLAY_WIDE:
        result = std::string("Wide view: ") + (desired[row] ? "on" : "off");
        break;
    case DISPLAY_WINDOW:
        result = std::string("Display: ") +
                 std::vector<const char *>{"windowed", "borderless", "fullscreen"}[desired[row]];
        break;
    case DISPLAY_FPS:
        result = "Frame limit: " +
                 (desired[row] ? std::to_string(rates[desired[row]]) + " FPS" : "original");
        break;
    case DISPLAY_OVERLAY:
        result = std::string("Performance overlay: ") +
                 std::vector<const char *>{"off", "counters", "graph"}[desired[row]];
        break;
    case DISPLAY_TEXTURES: {
        // Worded by what the pack holds: a pack with only the authored
        // terrain detail switches that, not HD textures.
        const int pack = pack_contents.load();
        if (pack == 2)
            result = std::string("Terrain detail: ") + (desired[row] ? "on" : "off");
        else if (pack == 0)
            result = "Textures: original (no texture pack)";
        else
            result = std::string("Textures: ") + (desired[row] ? "HD pack" : "original");
        break;
    }
    case DISPLAY_FILTERING:
        result = std::string("World filtering: ") +
                 std::vector<const char *>{"original", "trilinear", "4x anisotropic",
                                           "8x anisotropic", "16x anisotropic"}[desired[row]];
        break;
    case DISPLAY_CLASSIC_MODE: {
        if (mods_options_resolution_count()) {
            result = "Resolution: " + mods_options_resolution_label();
            break;
        }
        if (modes.empty()) {
            result = "Resolution: unavailable";
            break;
        }
        const auto m = modes[desired[row]];
        result = "Resolution: " + std::to_string(m.w) + "x" + std::to_string(m.h);
        if (!probed)
            result += " (baseline; probe list unavailable)";
        break;
    }
    default:
        return {};
    }
    return result;
}
// Load passing display modes from a local probe before display initialization.
// An explicit empty result offers no modes; only a missing/unrecognized report keeps the fallback.
bool mods_display_load_modes(const char *path) {
    if (initialized || probed || !path)
        return false;
    std::ifstream file(path);
    if (!file)
        return false;
    std::stringstream buffer;
    buffer << file.rdbuf();
    const auto text = buffer.str();
    std::vector<DisplayMode> passing;
    // Read direct fields of each modes[] object. Surface diagnostics contain
    // nested objects (and their own bpp); they must not hide or redefine a mode.
    std::smatch list;
    if (!std::regex_search(text, list, std::regex("\"modes\"\\s*:\\s*\\[")))
        return false;
    std::vector<std::string> objects;
    std::string item;
    int depth = 1;
    bool quoted = false, escaped = false;
    for (size_t i = list.position() + list.length(); i < text.size() && depth; ++i) {
        const char c = text[i];
        if (quoted) {
            if (depth == 2)
                item += c;
            if (escaped)
                escaped = false;
            else if (c == '\\')
                escaped = true;
            else if (c == '"')
                quoted = false;
        } else if (c == '"') {
            quoted = true;
            if (depth == 2)
                item += c;
        } else if (c == '{' || c == '[') {
            if (depth == 1 && c == '{')
                item.clear();
            if (depth == 2)
                item += ' ';
            ++depth;
        } else if (c == '}' || c == ']') {
            if (depth == 2 && c == '}')
                objects.push_back(item);
            --depth;
        } else if (depth == 2)
            item += c;
    }
    if (depth || quoted)
        return false;
    for (const auto &item : objects) {
        if (!std::regex_search(item,
                               std::regex("\"passed\"\\s*:\\s*true|\"status\"\\s*:\\s*\"pass\"")))
            continue;
        auto number = [&](const char *name) {
            std::smatch m;
            return std::regex_search(item, m,
                                     std::regex(std::string("\"(") + name + ")\"\\s*:\\s*([0-9]+)"))
                       ? strtol(m[2].str().c_str(), nullptr, 10)
                       : 0L;
        };
        long w = number("w|width"), h = number("h|height"), bpp = number("bpp");
        if (w <= 0 || h <= 0 || w > 16384 || h > 16384 || (bpp != 8 && bpp != 16))
            continue;
        if (std::none_of(passing.begin(), passing.end(),
                         [&](auto m) { return m.w == w && m.h == h && m.bpp == bpp; }))
            passing.push_back({int(w), int(h), int(bpp)});
    }
    // A real probe with no survivors offers nothing. Only a missing or
    // unrecognizable file retains the explicitly labelled baseline fallback.
    if (passing.empty() && !std::regex_search(text, std::regex("\"modes\"\\s*:\\s*\\[")))
        return false;
    modes = std::move(passing);
    probed = true;
    return true;
}
