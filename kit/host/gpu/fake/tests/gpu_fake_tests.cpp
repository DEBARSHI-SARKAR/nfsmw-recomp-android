// gpu_fake_tests.cpp - the fake backend's own contract, so the presenter and
// compositor tests that run on it can trust what it reports.
#include "../fake_device.h"

#include <stdio.h>
#include <string.h>
#include <vector>

static int g_checks = 0, g_failures = 0;
#define CHECK(x)                                                                                   \
    do {                                                                                           \
        ++g_checks;                                                                                \
        if (!(x)) {                                                                                \
            ++g_failures;                                                                          \
            fprintf(stderr, "FAIL %s:%d: %s\n", __FILE__, __LINE__, #x);                           \
        }                                                                                          \
    } while (0)

using namespace gpu;

static void test_texture_round_trip() {
    FakeDevice d;
    Texture t = d.create_texture({4, 2, Format::RGBA8, UsageSampled | UsageCpu});
    CHECK(t);
    CHECK(d.describe(t).width == 4 && d.describe(t).height == 2);
    uint8_t in[4 * 2 * 4];
    for (int i = 0; i < 32; ++i)
        in[i] = uint8_t(i);
    CHECK(d.upload(t, {0, 0, 4, 2}, in, 16));
    uint8_t out[32] = {0};
    CHECK(d.readback(t, {0, 0, 4, 2}, out, 16));
    CHECK(memcmp(in, out, 32) == 0);
    uint8_t corner[4] = {0};
    CHECK(d.readback(t, {3, 1, 1, 1}, corner, 4));
    CHECK(corner[0] == 28 && corner[3] == 31);
    d.destroy(t);
    CHECK(d.describe(t).width == 0);
    CHECK(!d.upload(t, {0, 0, 1, 1}, in, 4));
}

static void test_commands_complete_in_commit_order() {
    FakeDevice d;
    std::vector<int> order;
    CommandBuffer a = d.begin(), b = d.begin();
    d.on_complete(b, [&](CommandStatus, double) { order.push_back(2); });
    d.on_complete(a, [&](CommandStatus, double) { order.push_back(1); });
    d.commit(a);
    d.commit(b);
    CHECK(order.size() == 2 && order[0] == 1 && order[1] == 2);
    CHECK(d.status(a) == CommandStatus::Completed);
}

static void test_render_pass_records_draws_and_clears() {
    FakeDevice d;
    Texture t = d.create_texture({8, 8, Format::BGRA8, UsageRenderTarget | UsageCpu});
    RenderPass pass;
    pass.color[0].texture = t;
    pass.color[0].load = Load::Clear;
    pass.color[0].clear[0] = 1.0f; // red
    pass.color[0].clear[1] = 0.0f;
    pass.color[0].clear[2] = 0.0f;
    CommandBuffer cb = d.begin();
    d.begin_render_pass(cb, pass);
    d.set_pipeline(cb, d.render_pipeline("compositor", RenderState{}));
    d.draw(cb, Primitive::TriangleStrip, 0, 4);
    d.end_render_pass(cb);
    d.commit(cb);
    CHECK(d.draws_recorded(cb) == 1);
    uint8_t px[4];
    CHECK(d.readback(t, {0, 0, 1, 1}, px, 4));
    CHECK(px[2] == 255 && px[1] == 0 && px[0] == 0); // BGRA: red in byte 2
}

static void test_blit_copies_bytes() {
    FakeDevice d;
    Texture a = d.create_texture({2, 2, Format::RGBA8, UsageSampled | UsageCpu});
    Texture b = d.create_texture({4, 4, Format::RGBA8, UsageRenderTarget | UsageCpu});
    uint8_t in[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    d.upload(a, {0, 0, 2, 2}, in, 8);
    CommandBuffer cb = d.begin();
    d.blit(cb, a, {0, 0, 2, 2}, b, 1, 1);
    d.commit(cb);
    uint8_t out[4];
    d.readback(b, {2, 2, 1, 1}, out, 4);
    CHECK(out[0] == 13 && out[3] == 16);
}

static void test_swapchain_and_clock() {
    FakeDevice d;
    Swapchain s = d.create_swapchain(nullptr, 16, 8);
    CHECK(s);
    Texture t = d.acquire(s);
    CHECK(t && d.describe(t).width == 16 && d.describe(t).height == 8);
    double shown = -1;
    CommandBuffer cb = d.begin();
    d.advance_clock(0.5);
    d.present(cb, s, t, 1.0 / 60, [&](double ts) { shown = ts; });
    d.commit(cb);
    CHECK(shown == 0.5);
    CHECK(d.now_seconds() == 0.5);
    CHECK(d.refresh_period(s) == 1.0 / 60);
    d.resize(s, 32, 16);
    CHECK(d.describe(d.acquire(s)).width == 32);
    d.destroy(s);
}

static void test_pipeline_cache_and_key() {
    FakeDevice d;
    RenderState a, b;
    b.blend_enabled = true;
    CHECK(a.key() != b.key());
    Pipeline p1 = d.render_pipeline("d3d", a), p2 = d.render_pipeline("d3d", a);
    CHECK(p1.id == p2.id);
    CHECK(d.render_pipeline("d3d", b).id != p1.id);
    CHECK(d.compute_pipeline("guest_readback"));
    CHECK(d.thread_execution_width(d.compute_pipeline("native_brightness")) == 32);
}

int main() {
    test_texture_round_trip();
    test_commands_complete_in_commit_order();
    test_render_pass_records_draws_and_clears();
    test_blit_copies_bytes();
    test_swapchain_and_clock();
    test_pipeline_cache_and_key();
    printf("%d checks, %d failures\n", g_checks, g_failures);
    if (!g_failures)
        printf("all gpu fake tests passed\n");
    return g_failures ? 1 : 0;
}
