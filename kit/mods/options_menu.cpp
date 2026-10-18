// Extend the pinned game's Options page without replacing its navigation,
// pause/audio lifecycle, font renderer, hit testing or resolution rebuild.
#include "options_menu.h"
#include "game_config.h"
#include "display_settings.h"
#include "controls_settings.h"
#include "mods_internal.h"
#include "../runtime/imports.h"
#include "../runtime/memory.h"
#include "../runtime/win32.h"
#include <algorithm>
#include <atomic>
#include <cstring>
#include <cmath>
#include <vector>

namespace {
constexpr uint32_t page = 0x5d9e38, current_page = 0x749cd8, controller = 0x5d7368;
constexpr uint32_t original_entries = 0x5d9970, original_update = 0x4c4840;
constexpr uint32_t original_count = 34, rows_per_page = 8, extra_count = 13;
constexpr uint32_t entry_bytes = (original_count + extra_count + 1) * 8;
constexpr uint32_t control_bytes = 64, text_bytes = 512;
constexpr uint32_t resolution_table = 0x89cf1c;
bool installed = false, ready = false;
uint32_t block = 0;
std::atomic<bool> app_request{false};
int open_request = -1, pending_resolution = -1;
bool toggle_request = false;
std::string filter, error;
size_t mod_page = 0;
struct Row {
    bool menu;
    uint32_t index;
    std::string text;
};
std::vector<Row> mod_rows;
float glyph_scale = 1;

// Derive Options text scale from the active guest height while the gameplay menu is open.
// The 640x480 coordinates below are normalized layout units, not a forced rendering resolution.
float font_scale() {
    // The original high-resolution menu keeps 24-pixel glyphs even at 4K.
    // Scale both measurement and the destination quads, leaving sprite UVs
    // and cached font textures intact. This includes the original tabs/Back.
    if (!ready || rd32(current_page) != 13 || rd8(0x88f000) != 2 ||
        !(rd32(0x89c669) & 0x80000000) || rd32(0x5da078))
        return 1;
    return std::max(1.f, float(rd16(0x89c6d1)) / 480.f);
}
// Scale the original font measurement so hit boxes and visible glyphs agree at high resolution.
void measure_font(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    const uint32_t out = rd32(cpu->esp + 8);
    mods_call_next(api, inv, cpu);
    const float scale = font_scale();
    if (scale > 1)
        for (unsigned off : {0u, 4u})
            wr32(out + off, uint32_t(std::lround(rd32(out + off) * scale)));
}
// Scope glyph scaling to the current draw and adjust the returned text advance.
void draw_glyph(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    const float previous = glyph_scale;
    glyph_scale = font_scale();
    mods_call_next(api, inv, cpu);
    if (glyph_scale > 1)
        cpu->eax = uint32_t(std::lround((cpu->eax & 0xffff) * glyph_scale));
    glyph_scale = previous;
}
// Scale only the destination glyph dimensions, then restore guest arguments after delegation.
void glyph_quad(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    if (glyph_scale <= 1) {
        mods_call_next(api, inv, cpu);
        return;
    }
    const uint32_t slot = cpu->esp + 12, width = rd32(slot), height = rd32(slot + 4);
    for (unsigned off : {0u, 4u}) {
        const uint32_t bits = rd32(slot + off);
        float value;
        memcpy(&value, &bits, 4);
        value *= glyph_scale;
        uint32_t scaled;
        memcpy(&scaled, &value, 4);
        wr32(slot + off, scaled);
    }
    mods_call_next(api, inv, cpu);
    wr32(slot, width);
    wr32(slot + 4, height);
}

uint32_t control(unsigned i) {
    return block + entry_bytes + i * control_bytes;
}
uint32_t text_buffer(unsigned i) {
    return block + entry_bytes + extra_count * control_bytes + i * text_bytes;
}
uint32_t original_control(unsigned i) {
    return rd32(block + i * 8 + 4);
}
// Call a translated menu helper while preserving the surrounding guest register context.
uint32_t call(uint32_t address, const uint32_t *args = nullptr, uint32_t count = 0) {
    X86 *c = guest_current_context();
    const X86 saved = *c;
    const uint32_t result = guest_call(c, address, args, count);
    *c = saved;
    return result;
}
void show(uint32_t p) {
    wr32(p, rd32(p) & ~3u);
}
void position(uint32_t p, int x, int y) {
    wr32(p + 16, uint32_t((x - 320) * 65536 / 640));
    wr32(p + 20, y * 65536 / 480);
}
void select_tab(int tab) {
    wr32(controller + 12, tab);
    wr32(page + 16, ~0u);
    wr32(page + 20, ~0u);
    error.clear();
}
// Build the current mod rows from registered menus/settings and clamp the pagination cursor.
void rebuild_mods() {
    mod_rows.clear();
    for (uint32_t i = 0; i < mods_menu_entry_count(); ++i) {
        uint32_t owner;
        const char *path, *label;
        if (!mods_menu_entry(i, &owner, &path, &label))
            continue;
        const auto *api = mods_api_for(owner);
        if (!filter.empty() && (!api || !api->mod_id || filter != api->mod_id))
            continue;
        mod_rows.push_back({true, i, std::string(label) + " >"});
    }
    for (uint32_t i = 0; i < mods_settings_entry_count(); ++i) {
        uint32_t owner;
        const char *id, *key, *label;
        int32_t kind;
        int64_t value, mn, mx;
        if (!mods_settings_entry(i, &owner, &id, &key, &label, &kind, &value, &mn, &mx) ||
            owner == MODS_OWNER_RUNTIME)
            continue;
        if (!filter.empty() && (!id || filter != id))
            continue;
        mod_rows.push_back(
            {false, i,
             std::string(label) + ": " +
                 (kind == POP_SETTING_BOOL ? (value ? "on" : "off") : std::to_string(value))});
    }
    mod_page =
        std::min(mod_page, mod_rows.empty() ? size_t(0) : (mod_rows.size() - 1) / rows_per_page);
}
const DisplayRow enhanced[] = {DISPLAY_RENDERING, DISPLAY_TEXTURES, DISPLAY_FILTERING,
                               DISPLAY_UI_SCALE, DISPLAY_WIDE};
// Resolution stays in the original Graphics tab, with the game's live rebuild.
const DisplayRow display[] = {DISPLAY_WINDOW, DISPLAY_FPS, DISPLAY_OVERLAY};
// An entry of an added tab: a display row, or kControls + a controls row.
constexpr int kControls = 100;
// Tab 5 has room for 8 rows (rows_per_page) and already spends 3 on window,
// frame limit and overlay; these 5 are the ones that fit alongside them.
// pad_with_controller and snap show only on the F10 fallback page
// (settings_page.cpp), which has no such limit.
const ControlsRow native_controls[] = {CONTROLS_LAYOUT_ROW, CONTROLS_SIZE_ROW, CONTROLS_OPACITY_ROW,
                                       CONTROLS_HAPTICS_ROW, CONTROLS_EDIT_ROW};
// The rows a tab shows: the ones game.toml [settings] rows lists, the
// controls rows after the Display tab's own. Eight fit a tab (rows_per_page).
std::vector<int> tab_rows(unsigned tab) {
    std::vector<int> rows;
    if (tab == 4)
        for (auto r : enhanced)
            if (mods_display_row_applies(r))
                rows.push_back(r);
    if (tab == 5) {
        for (auto r : display)
            if (mods_display_row_applies(r))
                rows.push_back(r);
        if (mods_settings_row_listed(DISPLAY_CONTROLS_BIT))
            for (auto r : native_controls)
                rows.push_back(kControls + r);
    }
    return rows;
}
PopModStatus nudge_row(int entry, int delta) {
    return entry >= kControls ? mods_controls_nudge(ControlsRow(entry - kControls), delta)
                              : mods_display_nudge(DisplayRow(entry), delta);
}
std::string row_line(int entry) {
    return entry >= kControls ? mods_controls_line(ControlsRow(entry - kControls))
                              : mods_display_line(DisplayRow(entry));
}
// Dispatch one native Options control to a display setting, mod action or page navigation.
// Use the shared setters so successful changes apply live and follow normal persistence.
void action(X86 *c) {
    const uint32_t p = arg(c, 0);
    if (p < control(0) || p >= control(extra_count) || (p - control(0)) % control_bytes)
        return;
    const unsigned i = (p - control(0)) / control_bytes;
    if (i < 3) {
        filter.clear();
        mod_page = 0;
        select_tab(4 + i);
        return;
    }
    if (i >= 11) {
        if (i == 11 && mod_page)
            --mod_page;
        if (i == 12 && (mod_page + 1) * rows_per_page < mod_rows.size())
            ++mod_page;
        wr32(page + 16, ~0u);
        return;
    }
    const unsigned row = i - 3, tab = rd32(controller + 12);
    const int delta = rd32(0x749ce0) == 3 ? -1 : 1;
    PopModStatus status = POP_OK;
    const auto rows = tab_rows(tab);
    if ((tab == 4 || tab == 5) && row < rows.size())
        status = nudge_row(rows[row], delta);
    else if (tab == 6 && mod_page * rows_per_page + row < mod_rows.size()) {
        const auto r = mod_rows[mod_page * rows_per_page + row];
        if (r.menu) {
            mods_menu_activate(r.index);
            return;
        }
        uint32_t owner;
        const char *id, *key, *label;
        int32_t kind;
        int64_t value, mn, mx;
        if (!mods_settings_entry(r.index, &owner, &id, &key, &label, &kind, &value, &mn, &mx))
            return;
        int64_t want = kind == POP_SETTING_BOOL ? !value
                       : delta > 0              ? (value >= mx ? mx : value + 1)
                                                : (value <= mn ? mn : value - 1);
        status = mods_settings_set(owner, key, std::clamp(want, mn, mx));
    }
    error = status == POP_OK ? "" : "Could not apply setting";
}
// Let the original Options page update first, then position the added tabs and visible rows.
void update(X86 *c) {
    const uint32_t arg0 = arg(c, 0);
    call(original_update, &arg0, 1);
    const unsigned tab = rd32(controller + 12);
    if (tab >= 4) {
        for (unsigned i = 1; i < original_count; ++i)
            wr32(original_control(i), rd32(original_control(i)) | 3u);
        for (unsigned i : {25u, 27u, 29u, 33u})
            show(original_control(i));
        if (tab == 6)
            rebuild_mods();
        // Clamped to rows_per_page on every tab: control(11)/(12) are the
        // paging slots, and nothing built from tab_rows() may reach them.
        const size_t count =
            tab == 4 || tab == 5
                ? std::min(size_t(rows_per_page), tab_rows(tab).size())
                : std::min(size_t(rows_per_page), mod_rows.size() - mod_page * rows_per_page);
        for (unsigned i = 0; i < count; ++i) {
            show(control(3 + i));
            position(control(3 + i), 320, 115 + 30 * i);
        }
        if (tab == 6 && mod_rows.size() > rows_per_page) {
            if (mod_page)
                show(control(11));
            if ((mod_page + 1) * rows_per_page < mod_rows.size())
                show(control(12));
        }
    } else {
        // The legacy Graphics page's Direct3D link occupied this new tab row.
        wr32(original_control(31) + 20, 360 * 65536 / 480);
    }
    for (unsigned i = 0; i < 3; ++i) {
        show(control(i));
        position(control(i), 145 + 175 * i, 390);
    }
    position(control(11), 190, 350);
    position(control(12), 450, 350);
}
std::string label(unsigned i) {
    if (i < 3)
        return std::vector<const char *>{"Enhanced", "Display", "Mods"}[i];
    if (i >= 11)
        return i == 11 ? "< Previous" : "Next >";
    const unsigned row = i - 3, tab = rd32(controller + 12);
    const auto rows = tab_rows(tab);
    if ((tab == 4 || tab == 5) && row < rows.size())
        return row_line(rows[row]);
    if (tab == 6 && mod_page * rows_per_page + row < mod_rows.size())
        return mod_rows[mod_page * rows_per_page + row].text;
    return {};
}
// Encode a bounded label in guest text storage and invoke the original font renderer.
void draw_text(unsigned i, const std::string &value, int x, int y, uint32_t flags,
               uint32_t out = 0) {
    // All coordinates are normalized exactly like the game's own controls;
    // measurement and glyph quads share the active resolution's font scale.
    const uint32_t t = text_buffer(i);
    const size_t n = std::min(value.size(), size_t(250));
    for (size_t j = 0; j < n; ++j)
        wr16(t + j * 2, uint8_t(value[j]));
    wr16(t + n * 2, 0);
    const uint32_t args[] = {out ? out : control(i) + 4,
                             uint32_t((x - 320) * 65536 / 640),
                             uint32_t(y * 65536 / 480),
                             1,
                             1,
                             t,
                             2,
                             flags};
    call(0x4fe730, args, std::size(args));
}
// Draw original Options controls and then the added labels with the same selection semantics.
void draw(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *) {
    if (!ready || rd32(cpu->esp + 4) != 13) {
        mods_call_next(api, inv, cpu);
        return;
    }
    uint32_t flags[extra_count];
    for (unsigned i = 0; i < extra_count; ++i) {
        flags[i] = rd32(control(i));
        wr32(control(i), flags[i] | 2u);
    }
    mods_call_next(api, inv, cpu);
    for (unsigned i = 0; i < extra_count; ++i)
        wr32(control(i), flags[i]);
    for (unsigned i = 0; i < extra_count; ++i)
        if (!(flags[i] & 2)) {
            const bool selected = rd32(page + 20) == ~0u && rd32(page + 16) == original_count + i;
            const bool active_tab = i < 3 && rd32(controller + 12) == 4 + i;
            const int x = i < 3 ? 145 + 175 * i : i == 11 ? 190 : i == 12 ? 450 : 320;
            const int y = i < 3 ? 390 : i >= 11 ? 350 : 115 + 30 * (i - 3);
            draw_text(i, label(i), x, y, active_tab ? 0x13 : selected ? 0x31 : 0x11);
        }
    if (rd32(controller + 12) == 6 && mod_rows.empty())
        draw_text(3, "No mod settings registered", 320, 175, 9);
    if (!error.empty())
        draw_text(10, error, 320, 350, 9);
}
// Extend the original control table once, after verifying its expected layout.
// The extra controls and trampolines live in guest memory and use the original navigation callbacks.
void attach(const PopModApi *, pop_cpu_v1 *, PopHookInvocation *, void *) {
    if (ready)
        return;
    if (rd32(page + 8) != original_entries || rd32(page + 4) != original_count)
        return;
    block = heap_alloc(entry_bytes + extra_count * (control_bytes + text_bytes), true);
    if (!block)
        return;
    memcpy(gm_ptr(block), gm_ptr(original_entries), original_count * 8);
    const uint32_t activate =
        imports_alloc_trampoline("POPM.dll", "OptionsActivate", action, ARGC_CDECL);
    const uint32_t refresh =
        imports_alloc_trampoline("POPM.dll", "OptionsUpdate", update, ARGC_CDECL);
    for (unsigned i = 0; i < extra_count; ++i) {
        const bool setting = i >= 3 && i < 11;
        const uint32_t p = control(i), entry = block + (original_count + i) * 8;
        wr32(entry, setting ? 8 : 5);
        wr32(entry + 4, p);
        wr32(p, 3);
        wr32(p + 24, 1);
        wr32(p + 28, 1);
        wr32(p + 32, 2);
        wr32(p + (setting ? 48 : 40), activate);
    }
    wr32(block + (original_count + extra_count) * 8, 0x80000000);
    wr32(page + 4, original_count + extra_count);
    wr32(page + 8, block);
    wr32(controller + 8, refresh);
    ready = true;
    log_msg(1, "options: native Enhanced, Display and Mods tabs installed");
}
} // namespace

// Install the menu/font hooks as one operation, rolling back earlier hooks if any registration fails.
bool mods_options_init() {
#if !RECOMP_MODS_BUILTIN_POPULOUS
    return true; // this game has none of Populous's routines (game.toml [mods] builtin)
#endif
    if (installed)
        return true;
    const uint32_t addresses[] = {0x459f40, 0x45b6e0, 0x516b80, 0x516bb0, 0x516c80, 0x4f95a0};
    const PopHookFn callbacks[] = {attach, draw, measure_font, draw_glyph, draw_glyph, glyph_quad};
    uint32_t ids[std::size(addresses)]{};
    for (size_t i = 0; i < std::size(addresses); ++i) {
        if (mods_hook_install_ex(MODS_OWNER_RUNTIME, addresses[i], 0, callbacks[i],
                                 i == 0 ? POP_HOOK_AFTER : POP_HOOK_WRAP, POP_HOOK_NO_GAME_VIEW,
                                 nullptr, &ids[i]) != POP_OK) {
            for (size_t j = 0; j < i; ++j)
                mods_hook_remove(MODS_OWNER_RUNTIME, ids[j]);
            return false;
        }
    }
    installed = true;
    return true;
}
// Restore the original control table before freeing the extension and clearing pending requests.
void mods_options_reset() {
    if (ready && rd32(page + 8) == block) {
        wr32(page + 4, original_count);
        wr32(page + 8, original_entries);
        wr32(controller + 8, original_update);
        heap_free(block);
    }
    installed = ready = false;
    block = 0;
    open_request = pending_resolution = -1;
    toggle_request = false;
    glyph_scale = 1;
    app_request = false;
    filter.clear();
    error.clear();
    mod_rows.clear();
    mod_page = 0;
}
// Queue a native Options tab request for the guest frame boundary; optionally filter to one mod.
bool mods_options_open(const char *mod_id, bool toggle) {
    if (!ready)
        return false;
    filter = mod_id ? mod_id : "";
    mod_page = 0;
    open_request = filter.empty() ? 4 : 6;
    toggle_request = toggle;
    return true;
}
// AppKit has no guest baton. Its menu action only publishes a request.
extern "C" void mods_options_request() {
    app_request = true;
}
// Consume menu and resolution requests while holding the guest baton.
// Use the original pause/menu and resolution callbacks so their teardown/rebuild lifecycle remains intact.
void mods_options_frame() {
    if (!ready)
        return;
    if (app_request.exchange(false)) {
        open_request = 4;
        toggle_request = false;
        filter.clear();
    }
    if (open_request >= 0) {
        const bool gameplay = rd8(0x88f000) == 2;
        // Do not enter menus in a movie, a transition or a loading screen.
        if (rd8(0x88f000) != 7 && !gameplay)
            return;
        if (toggle_request && rd32(current_page) == 13)
            call(0x4c3800);
        else {
            if (gameplay && !(rd32(0x89c669) & 0x80000000))
                call(0x458060);
            if (gameplay && !(rd32(0x89c669) & 0x80000000))
                return;
            const uint32_t id = 13;
            call(0x45a3c0, &id, 1);
            select_tab(open_request);
            log_msg(1, "mods: settings page opened in native Options");
        }
        open_request = -1;
        toggle_request = false;
    }
    if (pending_resolution >= 0) {
        const int index = pending_resolution;
        pending_resolution = -1;
        if (index >= mods_options_resolution_count())
            return;
        wr8(0x749cf0, index);
        const uint32_t p = original_control(12);
        call(0x4c4f40, &p, 1);
        log_msg(1, "options: resolution selected %s", mods_options_resolution_label().c_str());
    }
}
int mods_options_resolution_count() {
    return ready ? std::min(int(rd8(0x89d15c)), 48) : 0;
}
int mods_options_resolution_value() {
    return pending_resolution >= 0 ? pending_resolution : rd8(0x749cf0);
}
std::string mods_options_resolution_label() {
    const int index = mods_options_resolution_value();
    if (index < 0 || index >= mods_options_resolution_count())
        return "unavailable";
    const uint32_t p = resolution_table + 12 * index;
    return std::to_string(rd32(p)) + "x" + std::to_string(rd32(p + 4));
}
void mods_options_resolution_request(int index) {
    pending_resolution = index;
}
