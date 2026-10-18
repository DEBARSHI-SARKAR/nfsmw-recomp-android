// F10 opens the game's native Options tabs once its menus are initialized.
// The host overlay below remains available to fixtures and early mod-init
// callbacks that run before the native menu/font resources exist.
//
// WHERE IT DRAWS, WHICH IS THE ONE THING NOT TO GET WRONG. mods_page_draw is
// given a HOST-OWNED copy of the frame - the presenter's own buffer. The
// pointer a presenter receives from the DirectDraw shim points into the
// guest's surface, which the game is still reading and will read again;
// drawing there would put this page inside the game's own picture and leave it
// there. The test that matters checks a buffer standing in for the guest's
// pixels comes back untouched.
#include "mods_internal.h"
#include "options_menu.h"
#include "display_settings.h"
#include "controls_settings.h"
#include "game_config.h"

#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>

namespace {

bool g_open = false;
uint32_t g_cursor = 0;
std::string g_filter; // "" means every mod
std::vector<std::string> g_lines;
std::vector<uint32_t> g_index; // line -> settings entry index

// A row is either a menu entry or a setting; the page shows the menu entries
// first, because that is what a mod registered for a person to choose.
struct Row {
    bool is_menu;
    uint32_t index;
    bool is_display = false;
    bool is_controls = false;
};
std::vector<Row> g_rows;

// Rebuild the fallback settings-page rows from live display and mod registrations.
// Keep row metadata alongside labels so navigation can dispatch the correct action.
void rebuild() {
    g_lines.clear();
    g_index.clear();
    g_rows.clear();
    if (g_filter.empty()) {
        for (int i = 0; i < DISPLAY_ROW_COUNT; ++i) {
            if (!mods_display_row_applies(DisplayRow(i)))
                continue;
            g_lines.push_back(mods_display_line(DisplayRow(i)));
            g_rows.push_back({false, uint32_t(i), true});
        }
        for (int i = 0; i < CONTROLS_ROW_COUNT && mods_settings_row_listed(DISPLAY_CONTROLS_BIT);
             ++i) {
            g_lines.push_back(mods_controls_line(ControlsRow(i)));
            Row row{false, uint32_t(i)};
            row.is_controls = true;
            g_rows.push_back(row);
        }
    }
    for (uint32_t i = 0; i < mods_menu_entry_count(); ++i) {
        uint32_t owner = 0;
        const char *path = nullptr, *label = nullptr;
        if (!mods_menu_entry(i, &owner, &path, &label))
            continue;
        const PopModApi *api = mods_api_for(owner);
        if (!g_filter.empty() && (!api || !api->mod_id || g_filter != api->mod_id))
            continue;
        char buf[128];
        snprintf(buf, sizeof buf, "%-22s %s", label, ">");
        g_lines.push_back(buf);
        g_rows.push_back({true, i});
    }
    for (uint32_t i = 0; i < mods_settings_entry_count(); ++i) {
        uint32_t owner = 0;
        const char *mod_id = nullptr, *key = nullptr, *label = nullptr;
        int32_t kind = 0;
        int64_t value = 0, mn = 0, mx = 0;
        if (!mods_settings_entry(i, &owner, &mod_id, &key, &label, &kind, &value, &mn, &mx))
            continue;
        if (owner == MODS_OWNER_RUNTIME)
            continue;
        if (!g_filter.empty() && (!mod_id || g_filter != mod_id))
            continue;
        char buf[128];
        if (kind == POP_SETTING_BOOL)
            snprintf(buf, sizeof buf, "%-22s %s", label, value ? "on" : "off");
        else
            snprintf(buf, sizeof buf, "%-22s %lld  [%lld..%lld]", label, (long long)value,
                     (long long)mn, (long long)mx);
        g_lines.push_back(buf);
        g_index.push_back(i);
        g_rows.push_back({false, i});
    }
    if (g_cursor >= g_lines.size())
        g_cursor = g_lines.empty() ? 0 : (uint32_t)g_lines.size() - 1;
}

// Adjust the selected editable row within its declared type/range and persist the value.
// Rebuild labels after the change so callbacks and display state are reflected immediately.
void nudge(int delta) {
    if (g_cursor >= g_rows.size() || g_rows[g_cursor].is_menu)
        return;
    if (g_rows[g_cursor].is_display) {
        mods_display_nudge(DisplayRow(g_rows[g_cursor].index), delta);
        rebuild();
        return;
    }
    if (g_rows[g_cursor].is_controls) {
        mods_controls_nudge(ControlsRow(g_rows[g_cursor].index), delta);
        rebuild();
        return;
    }
    uint32_t entry = g_rows[g_cursor].index;
    uint32_t owner = 0;
    const char *mod_id = nullptr, *key = nullptr, *label = nullptr;
    int32_t kind = 0;
    int64_t value = 0, mn = 0, mx = 0;
    if (!mods_settings_entry(entry, &owner, &mod_id, &key, &label, &kind, &value, &mn, &mx))
        return;
    // Nothing here does arithmetic that can leave the range of the type.
    //
    // The first attempt checked `value > mx - delta`, which moved the overflow
    // into the guard rather than removing it: with mx at INT64_MIN, `mx -
    // delta` is itself undefined. So the bound is a comparison and the step is
    // only taken when there is room for it - `value < mx` makes `value + 1`
    // safe by construction, and `value > mn` makes `value - 1` safe.
    //
    // The page steps by one, which is why one is all this has to handle.
    int64_t want;
    if (kind == POP_SETTING_BOOL)
        want = value ? 0 : 1;
    else if (delta > 0)
        want = (value >= mx) ? mx : value + 1;
    else
        want = (value <= mn) ? mn : value - 1;
    // A stored value can be outside its own declared range - a mod may narrow
    // a range between runs - so the result is clamped as well. Both of these
    // are comparisons; neither can overflow.
    if (want < mn)
        want = mn;
    if (want > mx)
        want = mx;
    mods_settings_set(owner, key, want);
    rebuild();
}

// RETURN on a menu row runs that mod's callback; on a setting row it edits.
void activate() {
    if (g_cursor >= g_rows.size())
        return;
    const Row r = g_rows[g_cursor];
    if (r.is_menu)
        mods_menu_activate(r.index);
    else
        nudge(+1);
}

// The page owns the keyboard while it is open, which is why every key it acts
// on is consumed: the game must not act on the same press.
int32_t on_key(const PopModApi *, int32_t dik, int32_t, int32_t down, void *) {
    if (dik == 0x57) { // F11: native performance counters / graph / off
        if (down)
            mods_display_set(DISPLAY_OVERLAY, (mods_display_value(DISPLAY_OVERLAY) + 1) % 3);
        return 1;
    }
    if (dik == 0x44) { // DIK_F10, reserved
        if (down) {
            if (mods_options_open(nullptr, true))
                mods_page_close();
            else if (g_open)
                mods_page_close();
            else
                mods_page_open(nullptr);
        }
        return 1;
    }
    if (!g_open)
        return 0;
    if (!down)
        return 1;
    switch (dik) {
    case 0xc8:
        if (g_cursor)
            --g_cursor;
        break; // UP
    case 0xd0:
        if (g_cursor + 1 < g_lines.size())
            ++g_cursor;
        break; // DOWN
    case 0xcb:
        nudge(-1);
        break; // LEFT
    case 0xcd:
        nudge(+1);
        break; // RIGHT
    case 0x1c:
        activate();
        break; // RETURN
    case 0x01:
        mods_page_close();
        break; // ESCAPE
    default:
        return 1;
    }
    return 1;
}

// Nearest palette entry, for the 8 bpp modes the front end presents in.
uint8_t nearest(const uint32_t *palette, uint32_t rgb) {
    if (!palette)
        return 0;
    int best = 0;
    long best_d = 1L << 30;
    int r = (rgb >> 16) & 0xff, g = (rgb >> 8) & 0xff, b = rgb & 0xff;
    for (int i = 0; i < 256; ++i) {
        int pr = (palette[i] >> 16) & 0xff, pg = (palette[i] >> 8) & 0xff, pb = palette[i] & 0xff;
        long d = (long)(pr - r) * (pr - r) + (long)(pg - g) * (pg - g) + (long)(pb - b) * (pb - b);
        if (d < best_d) {
            best_d = d;
            best = i;
        }
    }
    return (uint8_t)best;
}

void put_pixel(void *pixels, int w, int h, int bpp, int pitch, int x, int y, uint8_t index8,
               uint16_t rgb565) {
    if (x < 0 || y < 0 || x >= w || y >= h)
        return;
    if (bpp == 8)
        ((uint8_t *)pixels)[y * pitch + x] = index8;
    else
        ((uint16_t *)((uint8_t *)pixels + y * pitch))[x] = rgb565;
}

} // namespace

// Idempotent by reconstruction rather than by a flag. A caller that has
// dropped the runtime's input registrations - a test tidying up between
// suites, a host restarting the foundation - gets the page's keyboard back by
// calling this again, and calling it twice never leaves two handlers on the
// same key. The page is the only runtime-owned key handler there is; the
// runtime's other registrations are hooks, which this does not touch.
void mods_page_init() {
    // Packaged hosts load their resource before reaching this point. Other
    // hosts use the same committed list from the repository working directory.
    mods_display_load_modes("tools/recomp/baseline/classic-modes.json");
    mods_display_init();
    mods_controls_init(RECOMP_CONTROLS_DEFAULT_LAYOUT);
    mods_input_remove_all(MODS_OWNER_RUNTIME);
    uint32_t id = 0;
    // Owned by the runtime, so no mod's rollback removes the page's keyboard.
    mods_input_add_key(MODS_OWNER_RUNTIME, on_key, nullptr, &id);
}

PopModStatus mods_page_open(const char *mod_id) {
    if (mods_options_open(mod_id)) {
        g_open = false;
        return POP_OK;
    }
    g_filter = mod_id ? mod_id : "";
    g_cursor = 0;
    g_open = true;
    rebuild();
    // One line on stdout, so a headless run can assert the page opened without
    // reading pixels. The page itself is drawn; this is the record that it was.
    printf("mods: settings page opened for %s with %zu rows\n",
           g_filter.empty() ? "every mod" : g_filter.c_str(), g_lines.size());
    fflush(stdout);
    return POP_OK;
}

void mods_page_close() {
    g_open = false;
}

// ---------------------------------------------------------------------------
// The page is host state, not a registration, so removing a mod's
// registrations does not put it back. A mod that opens its page during init
// and then fails would otherwise leave the page open on its behalf, with the
// filter naming a mod that is not loaded and the runtime page eating input for
// it. The loader saves the page around each mod's init and restores it if that
// init fails.
// ---------------------------------------------------------------------------
namespace {
struct PageState {
    bool open;
    uint32_t cursor;
    std::string filter;
};
std::vector<PageState> &page_states() {
    static std::vector<PageState> v;
    return v;
}
} // namespace

void mods_page_state_push() {
    page_states().push_back({g_open, g_cursor, g_filter});
}

void mods_page_state_restore() {
    if (page_states().empty())
        return;
    const PageState &p = page_states().back();
    g_open = p.open;
    g_cursor = p.cursor;
    g_filter = p.filter;
    page_states().pop_back();
    rebuild();
}

void mods_page_state_discard() {
    if (!page_states().empty())
        page_states().pop_back();
}
bool mods_page_visible() {
    return g_open;
}
uint32_t mods_page_cursor() {
    return g_cursor;
}

uint32_t mods_page_line_count() {
    rebuild();
    return (uint32_t)g_lines.size();
}

const char *mods_page_line(uint32_t i) {
    rebuild();
    return i < g_lines.size() ? g_lines[i].c_str() : "";
}

// Draw the fallback settings panel into host-owned guest-format pixels.
// This path supports indexed and RGB565 frames and leaves absent/unsupported buffers untouched.
void mods_page_draw(void *pixels, int w, int h, int bpp, int pitch, const uint32_t *palette) {
    if (!g_open || !pixels || w <= 0 || h <= 0 || (bpp != 8 && bpp != 16))
        return;
    rebuild();

    const int pad = 6, line_h = 10;
    int rows = (int)g_lines.size() + 1;
    int panel_w = w - 2 * pad;
    int panel_h = pad * 2 + rows * line_h;
    if (panel_h > h - 2 * pad)
        panel_h = h - 2 * pad;

    uint8_t paper8 = nearest(palette, 0x00101010u), ink8 = nearest(palette, 0x00e0e0e0u);
    uint8_t sel8 = nearest(palette, 0x00d0a000u);
    const uint16_t paper16 = 0x0841, ink16 = 0xffff, sel16 = 0xfd00;

    for (int y = pad; y < pad + panel_h; ++y)
        for (int x = pad; x < pad + panel_w; ++x)
            put_pixel(pixels, w, h, bpp, pitch, x, y, paper8, paper16);

    auto text = [&](int x, int y, const char *s, bool selected) {
        for (int i = 0; s[i]; ++i) {
            const uint8_t *glyph = mods_font6x8_glyph(s[i]);
            for (int gy = 0; gy < 8; ++gy)
                for (int gx = 0; gx < 6; ++gx)
                    if (glyph[gy] & (1u << (5 - gx)))
                        put_pixel(pixels, w, h, bpp, pitch, x + i * 6 + gx, y + gy,
                                  selected ? sel8 : ink8, selected ? sel16 : ink16);
        }
    };

    text(pad + 4, pad + 4, "MOD SETTINGS  (arrows change, esc closes)", false);
    for (size_t i = 0; i < g_lines.size(); ++i) {
        int y = pad + 4 + (int)(i + 1) * line_h;
        if (y + 8 > pad + panel_h)
            break;
        text(pad + 4, y, g_lines[i].c_str(), i == g_cursor);
    }
}
