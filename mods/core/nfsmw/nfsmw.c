/* nfsmw.c - Most Wanted's engine rate, resolution and widescreen view.
 *
 * What the community widescreen fix (ThirteenAG, MIT; see NOTICE) did with
 * patched code bytes, done for a recompiled game: game.toml redirects and
 * patches the instructions involved to read slots in the section padding
 * (0x00a37800-0x00a3782f), and this mod fills those slots and hooks whole
 * functions.
 *
 * SIMULATION RATE. The engine steps and caps its frames at 1/60 s. The timer
 * constructor's argument (a code immediate) is rewritten on the stack, three
 * readers of the pooled 1/60 read slot 0x00a37800, and World_Service's initial
 * timestep (.data) is written.
 *
 * RESOLUTION. 0x006c27d0 maps the video option to a width and height. The
 * option offers six sizes in the original; here it offers every common size
 * from 640x480 to 7680x4320 and the screen's own, after an "Auto" entry that
 * is the screen's shape at up to 1080 rows (the renderer draws any of them at
 * the window's size). game.toml points the tables the option is checked
 * against (supported, refresh rate, label) at slots this mod fills, and the
 * wrap-around at the slot holding the count. The saved value is the size
 * packed as 0x80000000 | width << 16 | height, as the widescreen fix saves it,
 * so a list that differs between machines still finds the same size.
 * `width` and `height` override the option.
 *
 * FIELD OF VIEW. 0x006cf400 builds a view's projection. A hook at its entry
 * reads the view id and sets the aspect term and three scale factors the
 * redirected instructions read: hor+ for the player and headlight views, the
 * original values elsewhere, 0.4 for the rear-view mirror.
 *
 * HUD. The game's own widescreen HUD layout is forced on (game.toml). This mod
 * sets its horizontal scale and centre, moves the left and right HUD groups
 * and the minimap out to the screen edges, and scales the front end down when
 * the screen is narrower than it is.
 *
 * CINEMATICS. The movies are 4:3 frames with the picture letterboxed inside
 * (about 1.68:1). Their quad is sized so that picture fills as much of the
 * screen as it can without losing any of it. */
#include "pop_mod_api.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

POP_MOD_DECLARE_ABI();

/* Code */
#define TIMER_CTOR 0x006484e0u
#define GET_RESOLUTION_A 0x006c27d0u
#define GET_RESOLUTION_B 0x006c28b0u
#define LOAD_SETTINGS 0x006c1c00u        /* reads the registry */
#define SAVE_SETTINGS 0x006c1f10u        /* writes it */
#define LOCALIZED_WIDE 0x0057e920u       /* cdecl (wchar_t *out, int size, hash) -> al */
#define VIEW_PROJECTION 0x006cf400u
#define SET_TRANSFORM 0x006c8000u        /* cdecl (D3DMATRIX *, view id) */
#define SET_TRANSFORM_RET_A 0x006e6fbcu
#define SET_TRANSFORM_RET_B 0x006e7016u
#define SET_WIDESCREEN_MODE 0x005696c0u  /* thiscall FEngHud::SetWideScreenMode */
#define QUEUE_PACKAGE_MESSAGE 0x00516c90u /* thiscall (hash, package, arg), ret 0xc */
#define QPM_RET_A 0x005696f6u
#define QPM_RET_B 0x00569717u
#define MINIMAP_ADJUST 0x005678a0u       /* thiscall (char wide), ret 4 */
#define FIND_OBJECT 0x00524850u          /* cdecl (package, hash) */
#define GET_CENTER 0x00524ee0u           /* cdecl (object, float *x, float *y) */
#define SET_CENTER 0x00525050u           /* cdecl (object, float x, float y) */

/* Data */
#define REDIRECTED_FRAME_TIME 0x00a37800u
#define SLOT_FOV_H 0x00a37804u
#define SLOT_FOV_HALF 0x00a37808u
#define SLOT_FOV_V 0x00a3780cu
#define SLOT_FOV_ASPECT 0x00a37810u
#define SLOT_SHADOW_H 0x00a37818u
#define SLOT_SHADOW_DISTANCE 0x00a3781cu
#define SLOT_MIRROR_A 0x00a37824u
#define SLOT_MIRROR_B 0x00a37828u
#define SLOT_RES_LAST 0x00a37830u   /* entries - 1 */
#define SLOT_RES_COUNT 0x00a37834u  /* entries */
#define SLOT_RES_SAVED 0x00a37838u  /* the registry value, packed */
#define TABLE_RES_SUPPORTED 0x00a37840u
#define TABLE_RES_REFRESH 0x00a37940u
#define TABLE_RES_LABEL 0x00a37a40u
#define SLOT_FMV_BOTTOM 0x00a37b40u
#define SLOT_FMV_RIGHT 0x00a37b44u
#define SLOT_FMV_TOP 0x00a37b48u
#define SLOT_FMV_LEFT 0x00a37b4cu
/* The part of a movie frame's height its picture covers. */
#define FMV_PICTURE_HEIGHT 0.796f
#define RES_MAX 64
#define RESOLUTION_INDEX 0x0090181cu
#define WORLD_TIMESTEP 0x00903290u
#define HUD_SCALE_X 0x008af9a4u
#define HUD_CENTRE_X 0x00894b40u
#define AUTOSCULPT_SCALE 0x008ae8f8u
#define ARREST_BLUR 0x008afa08u
#define MINIMAP_PIVOT_X 0x0091cf04u
#define MINIMAP_DISP_X 0x0091cf0cu
#define FENG_INSTANCE 0x0091cadcu
#define MOVIE_PLAYER 0x0091cb10u
#define SPLASH_WIDE_NAME 0x0089f828u
#define SPLASH_NAME 0x008a0114u
#define ORIGINAL_FRAME_TIME 0x3c888889u /* 1/60 */

static const PopModApi *g_api;
static uint32_t g_hooks[14];
static uint32_t g_frame_time_bits = ORIGINAL_FRAME_TIME;

static int g_widescreen = 1;
static float g_aspect = 4.0f / 3.0f;
static float g_hor = 1.0f, g_vert = 1.215f, g_half = 0.43434f;
static float g_hud_offset = 0.0f; /* how far the side HUD groups move out */
static float g_fe_scale = 1.0f;
static int g_hud_dirty = 0;
static uint32_t g_matrix = 0, g_floats = 0; /* guest scratch */

static uint32_t float_bits(float f) {
    uint32_t b;
    memcpy(&b, &f, 4);
    return b;
}
static float bits_float(uint32_t b) {
    float f;
    memcpy(&f, &b, 4);
    return f;
}
static void put_float(uint32_t addr, float f) {
    g_api->guest_write_u32(g_api, addr, float_bits(f));
}
static float get_float(uint32_t addr) {
    uint32_t b = 0;
    g_api->guest_read_u32(g_api, addr, &b);
    return bits_float(b);
}
static uint32_t get_u32(uint32_t addr) {
    uint32_t v = 0;
    g_api->guest_read_u32(g_api, addr, &v);
    return v;
}
static int64_t setting(const char *key, int64_t fallback) {
    int64_t v = fallback;
    g_api->settings_get(g_api, key, &v);
    return v;
}

/* ---- simulation rate ---------------------------------------------------- */

static void timer_frame_time(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    uint32_t arg;
    (void)inv;
    (void)user;
    if (api->guest_read_u32(api, cpu->esp + 4, &arg) == POP_OK && arg == ORIGINAL_FRAME_TIME)
        api->guest_write_u32(api, cpu->esp + 4, g_frame_time_bits);
}

/* ---- resolution and everything that follows from it ---------------------- */

/* Entry 0 is "Auto"; w and h are 0 there. */
typedef struct {
    uint16_t w, h;
    uint32_t hash;
    char label[24];
} ResEntry;
static ResEntry g_res[RES_MAX];
static int g_res_count = 0;

static const uint16_t kCommonSizes[][2] = {
    {640, 480},   {768, 480},   {800, 600},   {854, 480},   {960, 540},   {960, 640},   {1024, 576},
    {1024, 768},  {1152, 864},  {1280, 720},  {1280, 800},  {1280, 960},  {1280, 1024}, {1360, 768},
    {1366, 768},  {1400, 1050}, {1440, 900},  {1600, 900},  {1600, 1200}, {1680, 1050}, {1920, 1080},
    {1920, 1200}, {2048, 1152}, {2048, 1536}, {2560, 1080}, {2560, 1440}, {2560, 1600}, {2880, 1800},
    {3200, 1800}, {3440, 1440}, {3840, 1600}, {3840, 2160}, {3840, 2400}, {4096, 2160}, {5120, 1440},
    {5120, 2160}, {5120, 2880}, {6016, 3384}, {7680, 4320},
};

/* The engine's string hash (bStringHash). */
static uint32_t string_hash(const char *s) {
    uint32_t h = 0xffffffffu;
    while (*s)
        h = h * 33u + (uint8_t)*s++;
    return h;
}

static void screen_shape(uint32_t *w, uint32_t *h) {
    uint32_t screen_w = 0, screen_h = 0;
    if (g_api->screen_size && g_api->screen_size(g_api, &screen_w, &screen_h) == POP_OK && screen_w &&
        screen_h) {
        float aspect = (float)screen_w / (float)screen_h;
        uint32_t rows = screen_h < 1080 ? screen_h : 1080;
        *h = rows;
        *w = ((uint32_t)lroundf(rows * aspect) + 1) & ~1u;
        return;
    }
    *w = 1280;
    *h = 720;
}

static void add_size(uint32_t w, uint32_t h) {
    if (g_res_count >= RES_MAX || !w || !h || w > 0x7fff || h > 0xffff)
        return;
    int at = 1;
    while (at < g_res_count && (g_res[at].w < w || (g_res[at].w == w && g_res[at].h < h)))
        ++at;
    if (at < g_res_count && g_res[at].w == w && g_res[at].h == h)
        return;
    memmove(&g_res[at + 1], &g_res[at], (size_t)(g_res_count - at) * sizeof g_res[0]);
    ResEntry *e = &g_res[at];
    char key[48];
    e->w = (uint16_t)w;
    e->h = (uint16_t)h;
    snprintf(e->label, sizeof e->label, "%ux%u", w, h);
    snprintf(key, sizeof key, "OPT_VO_PC_RES_%uX%u", w, h);
    e->hash = string_hash(key);
    ++g_res_count;
}

static void build_resolution_list(void) {
    uint32_t sw = 0, sh = 0, aw, ah;
    screen_shape(&aw, &ah);
    memset(g_res, 0, sizeof g_res);
    snprintf(g_res[0].label, sizeof g_res[0].label, "Auto (%ux%u)", aw, ah);
    g_res[0].hash = string_hash("OPT_VO_PC_RES_AUTO");
    g_res_count = 1;
    for (size_t i = 0; i < sizeof kCommonSizes / sizeof kCommonSizes[0]; ++i)
        add_size(kCommonSizes[i][0], kCommonSizes[i][1]);
    if (g_api->screen_size && g_api->screen_size(g_api, &sw, &sh) == POP_OK)
        add_size(sw, sh);
    for (int i = 0; i < RES_MAX; ++i) {
        g_api->guest_write_u32(g_api, TABLE_RES_SUPPORTED + 4u * (uint32_t)i, i < g_res_count);
        g_api->guest_write_u32(g_api, TABLE_RES_REFRESH + 4u * (uint32_t)i, 0); /* the default rate */
        g_api->guest_write_u32(g_api, TABLE_RES_LABEL + 4u * (uint32_t)i, i < g_res_count ? g_res[i].hash : 0);
    }
    g_api->guest_write_u32(g_api, SLOT_RES_LAST, (uint32_t)g_res_count - 1);
    g_api->guest_write_u32(g_api, SLOT_RES_COUNT, (uint32_t)g_res_count);
}

static int resolution_index(void) {
    uint32_t i = get_u32(RESOLUTION_INDEX);
    return i < (uint32_t)g_res_count ? (int)i : 0;
}

static void choose_resolution(uint32_t *w, uint32_t *h) {
    int64_t sw = setting("width", 0), sh = setting("height", 0);
    if (sw > 0 && sh > 0) {
        *w = (uint32_t)sw;
        *h = (uint32_t)sh;
        return;
    }
    const ResEntry *e = &g_res[resolution_index()];
    if (e->w && e->h) {
        *w = e->w;
        *h = e->h;
        return;
    }
    screen_shape(w, h);
}

/* The registry keeps the size, not its place in the list. */
static void save_settings(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    const ResEntry *e = &g_res[resolution_index()];
    uint32_t packed = e->w ? 0x80000000u | (uint32_t)e->w << 16 | e->h : 0;
    (void)inv;
    (void)user;
    (void)cpu;
    api->guest_write_u32(api, SLOT_RES_SAVED, packed);
}

static void load_settings(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    (void)inv;
    (void)user;
    /* No value, or one the original game saved (a place in its own list of
     * six), leaves "Auto". */
    api->guest_write_u32(api, SLOT_RES_SAVED, 0);
    api->guest_write_u32(api, RESOLUTION_INDEX, 0);
    api->call_original(api, cpu->target, cpu);
    uint32_t packed = get_u32(SLOT_RES_SAVED);
    int index = 0;
    if (packed & 0x80000000u) {
        uint32_t w = (packed >> 16) & 0x7fff, h = packed & 0xffff;
        for (int i = 1; i < g_res_count; ++i)
            if (g_res[i].w == w && g_res[i].h == h)
                index = i;
    }
    api->guest_write_u32(api, RESOLUTION_INDEX, (uint32_t)index);
}

/* The option's labels: the game has strings for its own six sizes only. */
static void localized_wide(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    uint32_t out = 0, size = 0, hash = 0;
    (void)inv;
    (void)user;
    api->guest_read_u32(api, cpu->esp + 4, &out);
    api->guest_read_u32(api, cpu->esp + 8, &size);
    api->guest_read_u32(api, cpu->esp + 12, &hash);
    for (int i = 0; i < g_res_count && out && size; ++i) {
        if (g_res[i].hash != hash)
            continue;
        const char *s = g_res[i].label;
        size_t n = strlen(s);
        if (n + 1 > size)
            n = size - 1;
        void *p;
        if (api->guest_ptr(api, out, (uint32_t)(2 * (n + 1)), &p) != POP_OK)
            break;
        uint8_t *b = (uint8_t *)p;
        for (size_t k = 0; k < n; ++k) {
            b[2 * k] = (uint8_t)s[k];
            b[2 * k + 1] = 0;
        }
        b[2 * n] = b[2 * n + 1] = 0;
        api->hook_return(api, cpu, (cpu->eax & 0xffffff00u) | 1u, 0);
        return;
    }
    api->call_original(api, cpu->target, cpu);
}

static void apply_resolution(uint32_t w, uint32_t h) {
    int64_t scaling = setting("fov_scaling", 1);
    float fe = (float)setting("fe_scale", 100) / 100.0f;
    g_aspect = (float)w / (float)h;
    g_hor = (4.0f / 3.0f) / g_aspect;
    g_vert = 1.215f;
    g_half = 0.43434f;
    if (scaling) {
        g_hor /= 1.047485948f;
        g_vert = scaling == 2 ? 1.27f : 1.21f;
    }
    float hud_scale = (1.0f / (float)w * ((float)h / 480.0f)) * 2.0f;
    float centre = 1.0f / hud_scale; /* 320 at 4:3 */
    put_float(HUD_SCALE_X, hud_scale);
    put_float(HUD_CENTRE_X, centre);
    put_float(AUTOSCULPT_SCALE, 480.0f * g_aspect);
    put_float(ARREST_BLUR, (1.0f / 640.0f) * ((4.0f / 3.0f) / g_aspect));
    put_float(SLOT_MIRROR_A, (centre - 320.0f) + 450.0f);
    put_float(SLOT_MIRROR_B, (centre - 320.0f) + 190.0f);
    put_float(SLOT_SHADOW_H, g_hor);
    g_hud_offset = 240.0f * g_aspect - 320.0f;
    g_fe_scale = fe * g_aspect / (4.0f / 3.0f);
    if (g_fe_scale > fe)
        g_fe_scale = fe;
    {
        /* 0.5 is the 4:3 frame's half size; the screen is aspect / (4/3) of
         * that wide and the picture 1 / FMV_PICTURE_HEIGHT of it tall. */
        float s = g_aspect / (4.0f / 3.0f);
        if (s > 1.0f / FMV_PICTURE_HEIGHT)
            s = 1.0f / FMV_PICTURE_HEIGHT;
        if (s < 1.0f)
            s = 1.0f;
        put_float(SLOT_FMV_BOTTOM, 0.5f * s);
        put_float(SLOT_FMV_RIGHT, 0.5f * s);
        put_float(SLOT_FMV_TOP, -0.5f * s);
        put_float(SLOT_FMV_LEFT, -0.5f * s);
    }
    g_hud_dirty = 1;
}

static void resolution(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    uint32_t w, h, pw, ph;
    (void)inv;
    (void)user;
    choose_resolution(&w, &h);
    if (api->guest_read_u32(api, cpu->esp + 4, &pw) == POP_OK && pw)
        api->guest_write_u32(api, pw, w);
    if (api->guest_read_u32(api, cpu->esp + 8, &ph) == POP_OK && ph)
        api->guest_write_u32(api, ph, h);
    if (g_widescreen)
        apply_resolution(w, h);
    api->hook_return(api, cpu, cpu->eax, 8);
}

/* ---- field of view ------------------------------------------------------ */

static void view_projection(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    uint32_t view = 0, id = 0;
    float h = 1.0f, half = 0.5f, v = 1.0f, aspect = 1.0f;
    (void)inv;
    (void)user;
    if (api->guest_read_u32(api, cpu->esp + 4, &view) != POP_OK || !view ||
        api->guest_read_u32(api, view + 4, &id) != POP_OK)
        return;
    if (id == 1 || id == 4) { /* the player's view and the headlights */
        h = g_hor;
        half = g_half;
        v = g_vert;
    }
    if (id == 3) /* rear-view mirror */
        aspect = 0.4f;
    put_float(SLOT_FOV_H, h);
    put_float(SLOT_FOV_HALF, half);
    put_float(SLOT_FOV_V, v);
    put_float(SLOT_FOV_ASPECT, aspect);
}

/* ---- front end and cinematics scale -------------------------------------- */

static void set_transform(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    uint32_t mat;
    void *src;
    /* A cinematic's quad is sized on its own; the rest of the front end keeps
     * its place, so what sits off screen stays there. */
    float scale = get_u32(MOVIE_PLAYER) ? 1.0f : g_fe_scale;
    (void)inv;
    (void)user;
    if (scale == 1.0f || !g_matrix || api->guest_read_u32(api, cpu->esp + 4, &mat) != POP_OK || !mat)
        return;
    if (api->guest_ptr(api, mat, 64, &src) != POP_OK)
        return;
    void *dst;
    if (api->guest_ptr(api, g_matrix, 64, &dst) != POP_OK)
        return;
    memcpy(dst, src, 64);
    put_float(g_matrix + 0, get_float(mat + 0) * scale);   /* _11 */
    put_float(g_matrix + 20, get_float(mat + 20) * scale); /* _22 */
    api->guest_write_u32(api, cpu->esp + 4, g_matrix);
}

/* ---- HUD groups ---------------------------------------------------------- */

struct Centre {
    uint32_t object;
    float x, y;
};
static struct Centre g_left, g_right;

static void shift_group(uint32_t package, uint32_t hash, struct Centre *cache, float offset) {
    uint32_t object = 0;
    uint32_t args[3] = {package, hash, 0};
    if (g_api->guest_call(g_api, FIND_OBJECT, 0, args, 2, &object) != POP_OK || !object)
        return;
    if (cache->object != object) {
        uint32_t get[3] = {object, g_floats, g_floats + 4};
        if (g_api->guest_call(g_api, GET_CENTER, 0, get, 3, 0) != POP_OK)
            return;
        cache->object = object;
        cache->x = get_float(g_floats);
        cache->y = get_float(g_floats + 4);
    }
    uint32_t set[3] = {object, float_bits(cache->x + offset), float_bits(cache->y)};
    g_api->guest_call(g_api, SET_CENTER, 0, set, 3, 0);
}

static void shift_groups(uint32_t package) {
    if (!package || !g_floats || !g_api->guest_call)
        return;
    shift_group(package, 0x1603009Eu, &g_left, -g_hud_offset);
    shift_group(package, 0x5D0101F1u, &g_right, g_hud_offset);
}

/* The two package messages FEngHud sends when the layout changes. */
static void queue_package_message(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    uint32_t ret = get_u32(cpu->esp);
    uint32_t package = get_u32(cpu->esp + 8);
    (void)inv;
    (void)user;
    api->call_original(api, cpu->target, cpu);
    if (ret == QPM_RET_A || ret == QPM_RET_B)
        shift_groups(package);
}

/* Minimap: its local position, five children and pivot, moved with the HUD. */
struct MinimapCache {
    uint32_t object;
    float local_x;
    float child_x[5];
};
static struct MinimapCache g_minimap;
static const uint32_t kChildOffsets[5] = {60, 64, 68, 72, 144};

static uint32_t child_data(uint32_t object, int i) {
    uint32_t child = get_u32(object + kChildOffsets[i]);
    return child ? get_u32(child + 44) : 0;
}

static void adjust_minimap(uint32_t object, int wide) {
    const float offset = wide ? -g_hud_offset : g_hud_offset;
    put_float(MINIMAP_PIVOT_X, wide ? -g_hud_offset : 0.0f);
    put_float(MINIMAP_DISP_X, wide ? -0.9375f : 0.9375f);
    if (g_minimap.object != object) {
        g_minimap.object = object;
        g_minimap.local_x = get_float(object + 184);
        for (int i = 0; i < 5; ++i) {
            uint32_t data = child_data(object, i);
            g_minimap.child_x[i] = data ? get_float(data + 28) : 0.0f;
        }
    }
    put_float(object + 184, g_minimap.local_x + offset);
    for (int i = 0; i < 5; ++i) {
        uint32_t data = child_data(object, i);
        if (data)
            put_float(data + 28, g_minimap.child_x[i] + offset);
    }
    uint32_t data = child_data(object, 4);
    if (data)
        g_api->guest_write_u32(g_api, data + 32, get_u32(object + 188));
}

static void minimap(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    uint8_t wide = 0;
    (void)inv;
    (void)user;
    api->guest_read_u8(api, cpu->esp + 4, &wide);
    if (cpu->ecx)
        adjust_minimap(cpu->ecx, wide != 0);
    api->hook_return(api, cpu, cpu->eax, 4);
}

static void set_widescreen_mode(const PopModApi *api, pop_cpu_v1 *cpu, PopHookInvocation *inv, void *user) {
    uint32_t self = cpu->ecx;
    (void)inv;
    (void)user;
    if (g_hud_dirty && self) {
        uint8_t wide = 0;
        uint32_t package = get_u32(self + 36);
        uint32_t args[3] = {0, package, 0};
        api->guest_read_u8(api, self + 816, &wide);
        args[0] = wide ? 0x62ED04ECu : 0x53EC068Cu;
        if (api->guest_call(api, QUEUE_PACKAGE_MESSAGE, get_u32(FENG_INSTANCE), args, 3, 0) == POP_OK)
            shift_groups(package);
        uint32_t map = get_u32(self + 800);
        if (map)
            adjust_minimap(map, wide != 0);
        g_hud_dirty = 0;
    }
    api->call_original(api, cpu->target, cpu);
}

/* ---- lifecycle ---------------------------------------------------------- */

static PopModStatus install(uint32_t addr, PopHookFn fn, int32_t mode, int slot) {
    return g_api->hook_install(g_api, addr, fn, mode, 0, &g_hooks[slot]);
}
static PopModStatus install_at(uint32_t addr, uint32_t ret, PopHookFn fn, int32_t mode, int slot) {
    if (!g_api->hook_install_at_callsite)
        return POP_E_STATE;
    return g_api->hook_install_at_callsite(g_api, addr, ret, fn, mode, 0, &g_hooks[slot]);
}

PopModStatus pop_mod_init(const PopModApi *api) {
    PopModStatus s;
    g_api = api;
    int64_t rate = setting("sim_rate", 60);
    if (rate < 30)
        rate = 30;
    if (rate > 480)
        rate = 480;
    g_frame_time_bits = float_bits(1.0f / (float)rate);
    g_widescreen = (int)setting("widescreen", 1);
    {
        char line[128];
        snprintf(line, sizeof line, "core.nfsmw: simulation rate %d Hz, widescreen %s", (int)rate,
                 g_widescreen ? "on" : "off");
        api->log(api, line);
    }
    if ((s = api->guest_write_u32(api, REDIRECTED_FRAME_TIME, g_frame_time_bits)) != POP_OK)
        return s;
    if ((s = api->guest_write_u32(api, WORLD_TIMESTEP, g_frame_time_bits)) != POP_OK)
        return s;
    if ((s = install(TIMER_CTOR, timer_frame_time, POP_HOOK_BEFORE, 0)) != POP_OK)
        return s;
    if ((s = install(GET_RESOLUTION_A, resolution, POP_HOOK_REPLACE, 1)) != POP_OK)
        return s;
    /* The twin getter has no callers in this build and no listing entry. */
    if (install(GET_RESOLUTION_B, resolution, POP_HOOK_REPLACE, 2) != POP_OK)
        g_hooks[2] = 0;
    build_resolution_list();
    if ((s = install(LOAD_SETTINGS, load_settings, POP_HOOK_REPLACE, 10)) != POP_OK)
        return s;
    if ((s = install(SAVE_SETTINGS, save_settings, POP_HOOK_BEFORE, 11)) != POP_OK)
        return s;
    if ((s = install(LOCALIZED_WIDE, localized_wide, POP_HOOK_REPLACE, 12)) != POP_OK)
        return s;
    if (!g_widescreen)
        return POP_OK;

    put_float(SLOT_SHADOW_DISTANCE, 10.0f);
    {
        /* The widescreen splash screen's name replaces the 4:3 one. */
        void *wide, *narrow;
        if (api->guest_ptr(api, SPLASH_WIDE_NAME, 20, &wide) == POP_OK &&
            api->guest_ptr(api, SPLASH_NAME, 20, &narrow) == POP_OK)
            memcpy(narrow, wide, strlen((const char *)wide) + 1);
    }
    if (api->guest_alloc(api, 64, &g_matrix) != POP_OK)
        g_matrix = 0;
    if (api->guest_alloc(api, 8, &g_floats) != POP_OK)
        g_floats = 0;
    {
        uint32_t w, h;
        choose_resolution(&w, &h);
        apply_resolution(w, h);
    }
    if ((s = install(VIEW_PROJECTION, view_projection, POP_HOOK_BEFORE, 3)) != POP_OK)
        return s;
    if ((s = install(SET_WIDESCREEN_MODE, set_widescreen_mode, POP_HOOK_REPLACE, 4)) != POP_OK)
        return s;
    if ((s = install(MINIMAP_ADJUST, minimap, POP_HOOK_REPLACE, 5)) != POP_OK)
        return s;
    /* One replacement per function: the two FEngHud call sites are told
     * apart by their return address inside it. */
    if ((s = install(QUEUE_PACKAGE_MESSAGE, queue_package_message, POP_HOOK_REPLACE, 6)) != POP_OK)
        return s;
    if ((s = install_at(SET_TRANSFORM, SET_TRANSFORM_RET_A, set_transform, POP_HOOK_BEFORE, 8)) != POP_OK)
        return s;
    return install_at(SET_TRANSFORM, SET_TRANSFORM_RET_B, set_transform, POP_HOOK_BEFORE, 9);
}

PopModStatus pop_mod_exit(void) {
    for (int i = 0; i < 14; ++i)
        if (g_hooks[i])
            g_api->hook_remove(g_api, g_hooks[i]);
    return POP_OK;
}
