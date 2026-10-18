#include "../compositor.h"
#include "../gpu/gpu_factory.h"
#include <memory>
#ifdef POPM_COMPOSITOR_TEST_UI_DOUBLE
#include "compositor_ui_double.h"
#else
#include "../ui_layer.h"
#endif
#include <algorithm>
#include <cstdio>
#include <vector>

static int checks, failures;
static void check(bool ok, const char *expr, int line) {
    ++checks;
    if (!ok) {
        ++failures;
        fprintf(stderr, "FAIL compositor_tests.cpp:%d: %s\n", line, expr);
    }
}
#define CHECK(e) check((e), #e, __LINE__)
#define CHECK_EQ(a, b) CHECK((a) == (b))

static UiElement element(uint64_t id, int x, int y, int w, int h, uint8_t r = 0, uint8_t g = 0,
                         uint8_t b = 255) {
    UiElement e{};
    e.id = id;
    e.x = x;
    e.y = y;
    e.w = w;
    e.h = h;
    e.is_hud = true;
    e.first_seq = e.last_seq = uint32_t(id);
    e.mask.assign(size_t(w) * h, 1);
    e.rgba.resize(size_t(w) * h * 4);
    for (size_t i = 0; i < e.mask.size(); ++i) {
        e.rgba[4 * i] = r;
        e.rgba[4 * i + 1] = g;
        e.rgba[4 * i + 2] = b;
        e.rgba[4 * i + 3] = 255;
    }
    return e;
}

static CompositorInput input(UiFrame *ui, int w = 3840, int h = 2160) {
    CompositorInput in{};
    in.cls = HOST_SCREEN_GAMEPLAY;
    in.ui = ui;
    in.guest_w = ui ? ui->guest_w : 640;
    in.guest_h = ui ? ui->guest_h : 480;
    in.drawable_w = w;
    in.drawable_h = h;
    in.scene = {float(w) / in.guest_w, float(h) / in.guest_h, 0, 0, in.guest_w};
    return in;
}

static void rect(const CompositorInput &in, uint64_t id, int x, int y, int w, int h) {
    int rx = -9999, ry = -9999, rw = -9999, rh = -9999;
    CHECK(compositor_element_rect_on_drawable(&in, id, &rx, &ry, &rw, &rh));
    CHECK_EQ(rx, x);
    CHECK_EQ(ry, y);
    CHECK_EQ(rw, w);
    CHECK_EQ(rh, h);
}

static void test_scale_clamps() {
    CHECK_EQ(compositor_ui_scale(2160, 480, 0), 4);
    CHECK_EQ(compositor_ui_scale(400, 480, 0), 1);
    CHECK_EQ(compositor_ui_scale(1080, 480, 3), 3);
    CHECK_EQ(compositor_ui_scale(4000, 480, 0), 4);
    CHECK_EQ(compositor_ui_scale(959, 480, 0), 1);
    CHECK_EQ(compositor_ui_scale(960, 480, 0), 2);
    CHECK_EQ(compositor_ui_scale(-1, 480, 0), 1);
    CHECK_EQ(compositor_ui_scale(480, 480, 9), 4);
    CHECK_EQ(compositor_ui_scale(2160, 480, -1), 1);
    CHECK_EQ(compositor_ui_scale(1080, 600, 0), 1);
    CHECK_EQ(compositor_ui_scale(2160, 600, 0), 3);
    CHECK_EQ(compositor_ui_scale(1200, 600, 0), 2);
    CHECK_EQ(compositor_ui_scale(1080, 600, 3), 3);
}

static void test_selected_resolution_layout() {
    for (int height : {480, 600, 480}) {
        const int width = height * 4 / 3, scale = 1080 / height;
        UiFrame ui{{element(800, width - 32, height - 32, 32, 32)}, width, height};
        auto in = input(&ui, 1920, 1080);
        rect(in, 800, 1920 - 32 * scale, 1080 - 32 * scale, 32 * scale, 32 * scale);
        auto layout = compositor_layout_snapshot(&in);
        CHECK_EQ(layout.guest_w, width);
        CHECK_EQ(layout.guest_h, height);
        CHECK_EQ(layout.ui_scale, scale);
        CHECK_EQ(layout.elements[0].guest.y, height - 32);
        CHECK_EQ(layout.elements[0].drawable.y, 1080 - 32 * scale);
        in.cls = HOST_SCREEN_MENU;
        rect(in, 800, (1920 - width * scale) / 2 + (width - 32) * scale,
             (1080 - height * scale) / 2 + (height - 32) * scale, 32 * scale, 32 * scale);
    }
}

static void test_default_anchor_axes() {
    UiElement e{};
    e.x = 10;
    e.w = 60;
    e.y = 300;
    e.h = 40;
    Anchor a = compositor_default_anchor(&e, 640, 480);
    CHECK_EQ(a.h, -1);
    CHECK_EQ(a.v, 1);
    e.x = 300;
    e.w = 40;
    CHECK_EQ(compositor_default_anchor(&e, 640, 480).h, 0);
    e.y = 220;
    e.h = 40;
    CHECK_EQ(compositor_default_anchor(&e, 640, 480).v, 0);
    e.x = 292;
    e.y = 228; // inclusive eight-pixel centre tolerance
    a = compositor_default_anchor(&e, 640, 480);
    CHECK_EQ(a.h, 0);
    CHECK_EQ(a.v, 0);
    e.x = 291;
    e.y = 229;
    a = compositor_default_anchor(&e, 640, 480);
    CHECK_EQ(a.h, -1);
    CHECK_EQ(a.v, 1);
    e.x = 309;
    CHECK_EQ(compositor_default_anchor(&e, 640, 480).h, 1);
}

static void test_registry_override_places_bottom_right_at_4x() {
    UiFrame ui{{element(71, 608, 448, 32, 32)}, 640, 480};
    auto in = input(&ui);
    compositor_set_anchor(71, {-1, -1});
    rect(in, 71, 2432, 1792, 128, 128); // proves the registry is consulted
    compositor_set_anchor(71, {1, 1});
    rect(in, 71, 3712, 2032, 128, 128);
    compositor_set_anchor(71, {0, 0});
    rect(in, 71, 3072, 1912, 128, 128);
    compositor_clear_anchor(71);
    rect(in, 71, 3712, 2032, 128, 128);
    int x = 55;
    CHECK(!compositor_element_rect_on_drawable(&in, 999, &x, nullptr, nullptr, nullptr));
    CHECK_EQ(x, 55);
}

static void test_class_layout_and_cursor() {
    UiFrame ui{{element(1, 0, 0, 640, 480)}, 640, 480};
    auto in = input(&ui);
    compositor_set_anchor(1, {1, 1});
    in.cls = HOST_SCREEN_MENU;
    rect(in, 1, 640, 120, 2560, 1920);
    in.cls = HOST_SCREEN_FMV;
    rect(in, 1, 480, 0, 2880, 2160);
    ui.guest_w = in.guest_w = 320;
    ui.guest_h = in.guest_h = 200;
    ui.elements[0] = element(1, 0, 0, 320, 200);
    rect(in, 1, 192, 0, 3456, 2160);
    compositor_clear_anchor(1);
    ui = {{element(2, 100, 50, 8, 8)}, 640, 480};
    in = input(&ui);
    in.scene = {4, 4, 214, 120, 853};
    ui.elements[0].is_cursor = true;
    compositor_set_anchor(2, {1, 1});
    rect(in, 2, 614, 320, 32, 32);
    compositor_clear_anchor(2);
    rect(in, 2, 614, 320, 32, 32);
    ui = {{element(5, 300, 220, 40, 40)}, 640, 480};
    in = input(&ui, 1281, 961);
    rect(in, 5, 601, 441, 80, 80);
}

static void test_narrow_scene_boxed() {
    // Wide view off on a 16:9 drawable: the 4:3 scene, its HUD and its input
    // mapping share one pillarboxed rectangle, as in Classic.
    UiFrame ui{{element(7, 40, 40, 40, 40)}, 640, 480};
    auto in = input(&ui, 1920, 1080);
    rect(in, 7, 80, 80, 80, 80); // Enhanced: anchored at the integer UI scale
    in.narrow = true;
    rect(in, 7, 330, 90, 90, 90);
    auto layout = compositor_layout_snapshot(&in);
    CHECK(layout.narrow);
    CHECK_EQ(layout.scene.scale_x, 2.25f);
    CHECK_EQ(layout.scene.scale_y, 2.25f);
    CHECK_EQ(layout.scene.offset_x, 240.f);
    CHECK_EQ(layout.scene.offset_y, 0.f);
    auto resized = compositor_resize_layout(layout, 3840, 2160);
    CHECK_EQ(resized.scene.scale_x, 4.5f);
    CHECK_EQ(resized.scene.offset_x, 480.f);
    // A drawable no wider than the guest's aspect is not boxed.
    in.drawable_w = 1440;
    rect(in, 7, 80, 80, 80, 80);
    // Menus, FMV and Classic keep their own framing.
    in.drawable_w = 1920;
    in.cls = HOST_SCREEN_MENU;
    CHECK(!compositor_layout_snapshot(&in).elements.empty());
}

static void test_ids_and_empty_inputs() {
    UiFrame ui{{element(3, 0, 0, 1, 1), element(1, 0, 0, 1, 1), element(2, 0, 0, 1, 1)}, 640, 480};
    uint64_t ids[3] = {99, 99, 99};
    CHECK_EQ(compositor_element_ids(&ui, ids, 2), 3u);
    CHECK_EQ(ids[0], 1u);
    CHECK_EQ(ids[1], 2u);
    CHECK_EQ(ids[2], 99u);
    CHECK_EQ(compositor_element_ids(&ui, nullptr, 0), 3u);
    CHECK_EQ(compositor_element_ids(nullptr, ids, 3), 0u);
    CHECK(!compositor_element_rect_on_drawable(nullptr, 1, nullptr, nullptr, nullptr, nullptr));
    auto in = input(&ui);
    in.drawable_w = 0;
    CHECK(!compositor_element_rect_on_drawable(&in, 1, nullptr, nullptr, nullptr, nullptr));
    compositor_compose(nullptr, nullptr, {}, {});
}

static void test_scene_reuse_policy_without_gpu() {
    // Handle values exercise the presenter's policy without a device. These
    // doubles are NEVER sent to compose.
    CompositorSceneHistory history{};
    auto in = input(nullptr, 640, 480);
    CHECK(!compositor_resolve_scene(&history, &in, false));
    CHECK_EQ(history.scene_reused, 0u);
    const gpu::Texture old_world{101}, old_overlay{102};
    in.world = old_world;
    in.overlay = old_overlay;
    CHECK(!compositor_resolve_scene(&history, &in, true));
    in.world = {};
    in.overlay = {};
    CHECK(history.world == old_world);
    CHECK(history.overlay == old_overlay);
    CHECK(compositor_resolve_scene(&history, &in, false));
    CHECK(in.world == old_world);
    CHECK(in.overlay == old_overlay);
    CHECK_EQ(history.scene_reused, 1u);
    // A real draw replaces both textures, including an absent overlay.
    in.world = gpu::Texture{103};
    in.overlay = {};
    CHECK(!compositor_resolve_scene(&history, &in, true));
    CHECK(history.world == gpu::Texture{103});
    CHECK(!history.overlay);
    CHECK(compositor_resolve_scene(&history, &in, false));
    CHECK_EQ(history.scene_reused, 2u);
    in.cls = HOST_SCREEN_MENU;
    CHECK(!compositor_resolve_scene(&history, &in, false));
    CHECK(!history.world);
    CHECK(!history.overlay);
    in.cls = HOST_SCREEN_GAMEPLAY;
    CHECK(!compositor_resolve_scene(&history, &in, false));
    CHECK(!in.world);
    CHECK(!in.overlay);
    in.world = gpu::Texture{104};
    CHECK(!compositor_resolve_scene(&history, &in, true));
    in.legacy = true;
    CHECK(!compositor_resolve_scene(&history, &in, false));
    CHECK(!history.world);
    CHECK_EQ(history.scene_reused, 2u);
}

static void test_scene_reuse_resolution_changes() {
    CompositorSceneHistory history{};
    auto in = input(nullptr, 1920, 1080);
    for (int height : {480, 600, 480}) {
        in.guest_w = height * 4 / 3;
        in.guest_h = height;
        in.scene.domain_w = in.guest_w;
        CHECK(!compositor_resolve_scene(&history, &in, false));
        CHECK(!in.world && !in.overlay);
        in.world = gpu::Texture{uint64_t(200 + height)};
        in.overlay = gpu::Texture{uint64_t(300 + height)};
        CHECK(!compositor_resolve_scene(&history, &in, true));
        CHECK(compositor_resolve_scene(&history, &in, false));
    }
    in.scene.domain_w += 200;
    CHECK(!compositor_resolve_scene(&history, &in, false));
    CHECK(!in.world && !in.overlay);
}

static std::unique_ptr<gpu::Device> device;
static gpu::Texture texture(int w, int h, uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255,
                            gpu::Format format = gpu::Format::RGBA8) {
    gpu::Texture tex = device->create_texture(
        {w, h, format, gpu::UsageSampled | gpu::UsageRenderTarget | gpu::UsageCpu, 1});
    CHECK(bool(tex));
    if (!tex)
        return {};
    std::vector<uint8_t> pixels(size_t(w) * h * 4);
    for (size_t i = 0; i < pixels.size(); i += 4) {
        pixels[i] = r;
        pixels[i + 1] = g;
        pixels[i + 2] = b;
        pixels[i + 3] = a;
    }
    device->upload(tex, {0, 0, w, h}, pixels.data(), w * 4);
    return tex;
}
static void put(gpu::Texture tex, int x, int y, const uint8_t rgba[4]) {
    device->upload(tex, {x, y, 1, 1}, rgba, 4);
}
static void pixel(gpu::Texture tex, int x, int y, int r, int g, int b) {
    uint8_t p[4] = {};
    CHECK(bool(tex));
    if (!tex)
        return;
    device->readback(tex, {x, y, 1, 1}, p, 4);
    if (device->describe(tex).format == gpu::Format::BGRA8)
        std::swap(p[0], p[2]);
    CHECK_EQ(p[0], r);
    CHECK_EQ(p[1], g);
    CHECK_EQ(p[2], b);
}
static gpu::Texture compose(const CompositorInput &in, gpu::Format format = gpu::Format::RGBA8) {
    gpu::Texture out = texture(in.drawable_w, in.drawable_h, 255, 0, 255, 255, format);
    gpu::CommandBuffer cb = device->begin();
    CHECK(bool(cb));
    compositor_compose(device.get(), &in, out, cb);
    device->commit(cb);
    device->wait(cb); // test readback only
    CHECK(device->status(cb) == gpu::CommandStatus::Completed);
    return out;
}
static void bounds(gpu::Texture tex, int x, int y, int w, int h) {
    const gpu::TextureDesc desc = device->describe(tex);
    pixel(tex, x, y, 0, 0, 255);
    pixel(tex, x + w - 1, y + h - 1, 0, 0, 255);
    if (x > 0)
        pixel(tex, x - 1, y + h / 2, 0, 0, 0);
    if (y > 0)
        pixel(tex, x + w / 2, y - 1, 0, 0, 0);
    if (x + w < desc.width)
        pixel(tex, x + w, y + h / 2, 0, 0, 0);
    if (y + h < desc.height)
        pixel(tex, x + w / 2, y + h, 0, 0, 0);
}

static void test_menu_centred_and_fmv_letterboxed() {
    UiFrame ui{{element(1, 0, 0, 640, 480)}, 640, 480};
    auto in = input(&ui);
    in.cls = HOST_SCREEN_MENU;
    in.world = texture(1, 1, 255, 0, 0);
    in.overlay = texture(1, 1, 0, 255, 0);
    compositor_set_anchor(1, {1, 1});
    bounds(compose(in), 640, 120, 2560, 1920);
    in.cls = HOST_SCREEN_FMV;
    bounds(compose(in), 480, 0, 2880, 2160);
    ui = {{element(1, 0, 0, 320, 200)}, 320, 200};
    in.guest_w = 320;
    in.guest_h = 200;
    bounds(compose(in), 192, 0, 3456, 2160);
    compositor_clear_anchor(1);
}

static void test_layer_order_gameplay() {
    UiFrame ui{{element(1, 0, 0, 32, 32)}, 640, 480};
    auto in = input(&ui, 640, 480);
    in.world = texture(640, 480, 255, 0, 0);
    in.overlay = texture(640, 480, 0, 0, 0, 0);
    uint8_t green[4] = {0, 255, 0, 255};
    put(in.overlay, 4, 4, green);
    auto out = compose(in);
    pixel(out, 2, 2, 0, 0, 255);
    pixel(out, 4, 4, 0, 255, 0);
    pixel(out, 40, 40, 255, 0, 0);
    out = compose(in, gpu::Format::BGRA8);
    pixel(out, 2, 2, 0, 0, 255);
    pixel(out, 4, 4, 0, 255, 0);
}

static void test_anchored_overlay_mask_and_order() {
    UiFrame ui{{element(4, 608, 448, 32, 32)}, 640, 480};
    ui.elements[0].mask[0] = 0;
    auto in = input(&ui);
    in.world = texture(1, 1, 255, 0, 0);
    in.overlay = texture(2560, 1920, 0, 0, 0, 0); // already UI-scaled
    uint8_t green[4] = {0, 255, 0, 255};
    put(in.overlay, 2440, 1800, green);
    compositor_set_anchor(4, {-1, -1});
    auto out = compose(in);
    pixel(out, 2432, 1792, 255, 0, 0);
    pixel(out, 2436, 1792, 0, 0, 255);
    pixel(out, 2440, 1800, 0, 255, 0);
    compositor_set_anchor(4, {1, 1});
    out = compose(in);
    pixel(out, 3712, 2032, 255, 0, 0);
    pixel(out, 3716, 2032, 0, 0, 255);
    pixel(out, 3720, 2040, 0, 255, 0);
    pixel(out, 2440, 1800, 255, 0, 0);
    compositor_clear_anchor(4);
    ui = {{element(9, 0, 0, 8, 8, 255, 255, 0), element(3, 0, 0, 8, 8)}, 640, 480};
    in = input(&ui, 640, 480);
    in.world = texture(1, 1, 255, 0, 0);
    pixel(compose(in), 2, 2, 255, 255, 0); // last_seq, not vector order
}

static void test_nearest_and_cursor() {
    UiFrame ui{{element(1, 0, 0, 2, 1)}, 640, 480};
    ui.elements[0].rgba[0] = 255;
    ui.elements[0].rgba[2] = 0;
    auto in = input(&ui, 1280, 960);
    auto out = compose(in);
    pixel(out, 0, 0, 255, 0, 0);
    pixel(out, 1, 1, 255, 0, 0);
    pixel(out, 2, 0, 0, 0, 255);
    pixel(out, 3, 1, 0, 0, 255);
    ui.elements[0].is_cursor = true;
    ui.elements[0].x = 100;
    ui.elements[0].y = 50;
    in.scene = {2, 2, 10, 20, 640};
    compositor_set_anchor(1, {1, 1});
    out = compose(in);
    pixel(out, 210, 120, 255, 0, 0);
    pixel(out, 212, 120, 0, 0, 255);
    compositor_clear_anchor(1);
    ui = {{element(5, 300, 220, 40, 40)}, 640, 480};
    in = input(&ui, 1281, 961);
    out = compose(in);
    bounds(out, 601, 441, 80, 80);
}

static void test_overlay_alpha_and_overlapping_owners() {
    UiFrame ui{{element(1, 0, 0, 32, 32)}, 640, 480};
    auto in = input(&ui, 640, 480);
    in.world = texture(1, 1, 255, 0, 0);
    in.overlay = texture(640, 480, 0, 0, 0, 0);
    const uint8_t translucent_green[4] = {0, 128, 0, 128}; // premultiplied render target
    put(in.overlay, 4, 4, translucent_green);
    auto out = compose(in);
    pixel(out, 4, 4, 0, 128, 127); // no second multiplication by alpha
    ui = {{element(1, 608, 448, 32, 32), element(2, 608, 448, 32, 32, 255, 255, 0)}, 640, 480};
    in = input(&ui);
    in.world = texture(1, 1, 255, 0, 0);
    in.overlay = texture(640, 480, 0, 0, 0, 0);
    const uint8_t green[4] = {0, 255, 0, 255};
    put(in.overlay, 610, 450, green);
    compositor_set_anchor(1, {-1, -1});
    compositor_set_anchor(2, {1, 1});
    out = compose(in);
    pixel(out, 2440, 1800, 0, 0, 255); // older owner's source crop must not duplicate green
    pixel(out, 3720, 2040, 0, 255, 0);
    compositor_clear_anchor(1);
    compositor_clear_anchor(2);
}

static void test_legacy_frame_scaled() {
    UiFrame ui{{element(1, 0, 0, 640, 480)}, 640, 480};
    auto in = input(&ui);
    in.legacy = true;
    in.legacy_frame = texture(640, 480, 0, 0, 255);
    in.world = texture(1, 1, 255, 0, 0);
    in.overlay = texture(1, 1, 0, 255, 0);
    bounds(compose(in), 480, 0, 2880, 2160);
    rect(in, 1, 480, 0, 2880, 2160);
    in.legacy_frame = {};
    auto out = compose(in);
    pixel(out, 600, 100, 0, 0, 0);
    pixel(out, 2000, 1000, 0, 0, 0);
}

static void test_previous_scene_reused() {
    CompositorSceneHistory history{};
    UiFrame ui{{element(1, 0, 0, 32, 32)}, 640, 480};
    auto in = input(&ui, 640, 480);
    CHECK(!compositor_resolve_scene(&history, &in, false));
    CHECK_EQ(history.scene_reused, 0u);
    gpu::Texture weak_world, weak_overlay;
    {
        in.world = texture(640, 480, 255, 0, 0);
        in.overlay = texture(640, 480, 0, 0, 0, 0);
        uint8_t green[4] = {0, 255, 0, 255};
        put(in.overlay, 4, 4, green);
        weak_world = in.world;
        weak_overlay = in.overlay;
        CHECK(!compositor_resolve_scene(&history, &in, true));
        in.world = {};
        in.overlay = {};
    }
    CHECK(history.world == weak_world);
    CHECK(history.overlay == weak_overlay);
    in.world = texture(1, 1, 255, 255, 0); // a no-draw frame's empty targets are ignored
    CHECK(compositor_resolve_scene(&history, &in, false));
    CHECK_EQ(history.scene_reused, 1u);
    CHECK(in.world == weak_world);
    CHECK(in.overlay == weak_overlay);
    {
        auto out = compose(in);
        pixel(out, 40, 40, 255, 0, 0);
        pixel(out, 2, 2, 0, 0, 255);
        pixel(out, 4, 4, 0, 255, 0);
    }
    in.world = {};
    in.overlay = {};
    CHECK(compositor_resolve_scene(&history, &in, false));
    CHECK_EQ(history.scene_reused, 2u);
    in.cls = HOST_SCREEN_MENU;
    in.world = {};
    in.overlay = {};
    CHECK(!compositor_resolve_scene(&history, &in, false));
    CHECK(!history.world);
    CHECK(!history.overlay);
    in.cls = HOST_SCREEN_GAMEPLAY;
    CHECK(!compositor_resolve_scene(&history, &in, false));
    in.world = texture(1, 1, 255, 255, 0);
    CHECK(!compositor_resolve_scene(&history, &in, true));
    CHECK_EQ(history.scene_reused, 2u);
    in.legacy = true;
    CHECK(!compositor_resolve_scene(&history, &in, false));
    CHECK(!history.world);
}

static void test_classic_framing_and_settings_overlay() {
    UiFrame ui{{}, 640, 480};
    auto in = input(&ui, 1920, 1080);
    in.classic = true;
    in.world = texture(640, 480, 0, 0, 255);
    auto out = compose(in);
    pixel(out, 0, 100, 0, 0, 0);
    pixel(out, 240, 100, 0, 0, 255);
    pixel(out, 1680, 100, 0, 0, 0);
    in.guest_w = 1920;
    in.guest_h = 1080;
    in.drawable_w = 1024;
    in.drawable_h = 768;
    in.world = texture(1920, 1080, 0, 255, 0);
    out = compose(in);
    pixel(out, 512, 95, 0, 0, 0);
    pixel(out, 512, 96, 0, 255, 0);
    pixel(out, 512, 671, 0, 255, 0);
    pixel(out, 512, 672, 0, 0, 0);
    in.legacy = true;
    in.legacy_frame = in.world;
    out = compose(in);
    pixel(out, 512, 95, 0, 0, 0);
    pixel(out, 512, 96, 0, 255, 0);
    pixel(out, 512, 672, 0, 0, 0);
    in.legacy = false;
    in.guest_w = 640;
    in.guest_h = 480;
    in.world = texture(640, 480, 0, 0, 255);
    in.classic = false;
    in.drawable_w = 640;
    in.drawable_h = 480;
    in.settings_page = texture(640, 480, 0, 0, 0, 0);
    uint8_t red[4] = {255, 0, 0, 255};
    put(in.settings_page, 10, 10, red);
    out = compose(in);
    pixel(out, 10, 10, 255, 0, 0);
    pixel(out, 11, 10, 0, 0, 255);
    in.classic = true;
    in.legacy = true;
    in.legacy_frame = in.world;
    out = compose(in);
    pixel(out, 10, 10, 255, 0, 0);
    pixel(out, 11, 10, 0, 0, 255);
    // A UI scale the drawable cannot hold is capped for the page: at 3 on
    // 1920x1080 the page is drawn at 2, whole, centred.
    in.drawable_w = 1920;
    in.drawable_h = 1080;
    in.scale_override = 3;
    out = compose(in);
    pixel(out, 320 + 20, 60 + 20, 255, 0, 0);
    pixel(out, 320 + 21, 60 + 21, 255, 0, 0);
    pixel(out, 320 + 22, 60 + 20, 0, 0, 255);
}

int main() {
    struct Test {
        const char *name;
        void (*run)();
    };
    Test cpu[] = {
        {"scale clamps", test_scale_clamps},
        {"default anchor axes", test_default_anchor_axes},
        {"selected resolution layout", test_selected_resolution_layout},
        {"registry bottom right at 4x", test_registry_override_places_bottom_right_at_4x},
        {"class layout and cursor", test_class_layout_and_cursor},
        {"narrow scene boxed", test_narrow_scene_boxed},
        {"ids and empty inputs", test_ids_and_empty_inputs},
        {"scene reuse policy and leases", test_scene_reuse_policy_without_gpu},
        {"scene reuse resolution changes", test_scene_reuse_resolution_changes},
    };
    for (auto t : cpu) {
        int before = failures;
        t.run();
        printf("%-38s %s\n", t.name, before == failures ? "ok" : "FAILED");
    }
    {
        device = gpu::create_default_device();
        if (!device) {
            printf("no GPU device: compositor pixel and texture-lease tests did not run\n");
            printf("%d checks, %d failures\n", checks, failures);
            return failures ? 1 : 2;
        }
        Test gpu[] = {
            {"Classic framing and settings page", test_classic_framing_and_settings_overlay},
            {"menu centred and FMV letterboxed", test_menu_centred_and_fmv_letterboxed},
            {"layer order gameplay", test_layer_order_gameplay},
            {"anchored overlay mask and order", test_anchored_overlay_mask_and_order},
            {"nearest sampling and cursor", test_nearest_and_cursor},
            {"overlay alpha and source ownership", test_overlay_alpha_and_overlapping_owners},
            {"legacy frame scaled", test_legacy_frame_scaled},
            {"previous world and overlay reused", test_previous_scene_reused},
        };
        for (auto t : gpu) {
            int before = failures;
            t.run();
            printf("%-38s %s\n", t.name, before == failures ? "ok" : "FAILED");
        }
    }
    printf("%d checks, %d failures\n", checks, failures);
    return failures ? 1 : 0;
}
