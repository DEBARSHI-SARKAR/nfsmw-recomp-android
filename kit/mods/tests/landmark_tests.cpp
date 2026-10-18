#include "mods_tests.h"
#include "../../host/landmark.h"

MOD_TEST_SUITE(landmark_requires_own_sprite_in_current_frame) {
    HostD3DDrawSnapshot draw{};
    draw.kind = HOST_DRAW_PRIMITIVE;
    draw.texture_handle = 7;
    draw.texture_revision = 9;
    draw.screen_min_x = 700;
    draw.screen_max_x = 720;
    draw.screen_min_y = 200;
    draw.screen_max_y = 220;
    LandmarkSpriteEvidence sprite{31, 41, 7, 9, true};
    auto observe = [&](bool found = true, float x = 710, bool projected = true) {
        return landmark_visibility(found, 41, 31, projected, x, 210, 852, 480, sprite, &draw, 1);
    };
    MOD_CHECK(observe() == LandmarkVisibility::visible);
    draw.texture_handle = 8; // a different entity or terrain covers the point
    MOD_CHECK(observe() == LandmarkVisibility::not_drawn);
    draw.texture_handle = 7;
    draw.texture_revision = 8;
    MOD_CHECK(observe() == LandmarkVisibility::not_drawn);
    draw.texture_revision = 9;
    draw.kind = HOST_DRAW_CLEAR;
    MOD_CHECK(observe() == LandmarkVisibility::not_drawn);
    draw.kind = HOST_DRAW_PRIMITIVE;
    MOD_CHECK(observe(true, 720) == LandmarkVisibility::not_drawn); // exclusive bound
    MOD_CHECK(observe(true, 700) == LandmarkVisibility::visible);
    MOD_CHECK(observe(false) == LandmarkVisibility::unavailable); // not hidden
    MOD_CHECK(observe(true, NAN) == LandmarkVisibility::unavailable);
    MOD_CHECK(observe(true, 710, false) == LandmarkVisibility::unavailable);
    sprite.complete = false;
    MOD_CHECK(observe() == LandmarkVisibility::unavailable);
    sprite.complete = true;
    sprite.frame = 30;
    MOD_CHECK(observe() == LandmarkVisibility::unavailable);
    sprite.frame = 31;
    sprite.entity_id = 42;
    MOD_CHECK(observe() == LandmarkVisibility::unavailable);
    sprite.entity_id = 41;
    sprite.texture_handle = 0;
    sprite.texture_revision = 0;
    MOD_CHECK(observe() == LandmarkVisibility::not_drawn); // known absent, current frame
    MOD_CHECK(landmark_visibility(true, 41, 31, true, 710, 210, 852, 480, sprite, nullptr, 1) ==
              LandmarkVisibility::unavailable);
}

MOD_TEST_SUITE(entity_click_resolves_current_own_body_centre) {
    HostD3DDrawSnapshot draws[2]{};
    for (auto &d : draws) {
        d.kind = HOST_DRAW_PRIMITIVE;
        d.texture_handle = 7;
        d.texture_revision = 9;
        d.screen_min_x = 800;
        d.screen_max_x = 830;
        d.screen_min_y = 190;
        d.screen_max_y = 222;
    }
    draws[0].texture_handle = 8; // overlapping unrelated draw must be skipped
    LandmarkSpriteEvidence own{31, 1815, 7, 9, true};
    int32_t x = -1, y = -1;
    auto resolve = [&](uint64_t frame = 31, size_t count = 2) {
        return landmark_click_point(true, 1815, frame, true, 710, 210, 852, 480, own, draws, count,
                                    100, 0, &x, &y);
    };
    MOD_CHECK(resolve());
    MOD_CHECK_EQ(x, 815);
    MOD_CHECK_EQ(y, 200);
    // Centre, not the projected anchor (810,210), and no extra HUD offset.
    MOD_CHECK(!resolve(32));
    MOD_CHECK(!resolve(31, 0));
    MOD_CHECK(!resolve(31, 1)); // only the other entity has a draw
    draws[1].texture_revision = 10;
    MOD_CHECK(!resolve());
    draws[1].texture_revision = 9;
    own.entity_id = 1830;
    MOD_CHECK(!resolve());
    own.entity_id = 1815;
    own.complete = false;
    MOD_CHECK(!resolve());
    own.complete = true;
    own.texture_handle = 0;
    MOD_CHECK(!resolve());
    own.texture_handle = 7;
    draws[1].screen_max_x = INT32_MAX;
    MOD_CHECK(!resolve());
    draws[1].screen_max_x = 830;
    MOD_CHECK(landmark_click_point(true, 1815, 31, true, 710, 210, 852, 480, own, draws, 2, 100, 0,
                                   &x, &y));
    // Projection change relocates the same entity's draw; no fixed coordinate.
    draws[1].screen_min_x -= 156;
    draws[1].screen_max_x -= 156;
    MOD_CHECK(landmark_click_point(true, 1815, 31, true, 554, 210, 696, 480, own, draws, 2, 100, 0,
                                   &x, &y));
    MOD_CHECK_EQ(x, 659);
    MOD_CHECK_EQ(y, 200);
}

MOD_TEST_SUITE(entity_click_rejects_measured_shaman_shadow) {
    // caa01f6 gate_c_t1/t2: first attributed layer is a ground shadow.
    // It passes visibility, but its centre y=233 is below the feet y=230.
    HostD3DDrawSnapshot draws[2]{};
    for (auto &d : draws)
        d.kind = HOST_DRAW_PRIMITIVE;
    draws[0].texture_handle = 65674;
    draws[0].texture_revision = 17919;
    draws[0].screen_min_x = 165;
    draws[0].screen_max_x = 188;
    draws[0].screen_min_y = 230;
    draws[0].screen_max_y = 235;
    draws[1].texture_handle = 65672;
    draws[1].texture_revision = 18119;
    draws[1].screen_min_x = 168;
    draws[1].screen_max_x = 184;
    draws[1].screen_min_y = 198;
    draws[1].screen_max_y = 235;
    LandmarkSpriteEvidence shadow{1845, 1815, 65674, 17919, true};
    LandmarkSpriteEvidence body{1845, 1815, 65672, 18119, true};
    int32_t x = -1, y = -1;
    MOD_CHECK(landmark_visibility(true, 1815, 1845, true, 75.5f, 230.375f, 852, 480, shadow, draws,
                                  2, 100, 0) == LandmarkVisibility::visible);
    MOD_CHECK(!landmark_click_point(true, 1815, 1845, true, 75.5f, 230.375f, 852, 480, shadow,
                                    draws, 2, 100, 0, &x, &y));
    MOD_CHECK(landmark_click_point(true, 1815, 1845, true, 75.5f, 230.375f, 852, 480, body, draws,
                                   2, 100, 0, &x, &y));
    MOD_CHECK_EQ(x, 176);
    MOD_CHECK_EQ(y, 214);
    // The shadow may share the body atlas handle/revision. It still must not
    // win just because it occurs first in the matching draw list.
    draws[0].texture_handle = body.texture_handle;
    draws[0].texture_revision = body.texture_revision;
    MOD_CHECK(landmark_click_point(true, 1815, 1845, true, 75.5f, 230.375f, 852, 480, body, draws,
                                   2, 100, 0, &x, &y));
    MOD_CHECK_EQ(x, 176);
    MOD_CHECK_EQ(y, 214);
}

MOD_TEST_SUITE(landmark_hidden_requires_present_offscreen_and_no_own_draw) {
    LandmarkSpriteEvidence absent{31, 1815, 0, 0, true};
    MOD_CHECK(landmark_visibility(true, 1815, 31, true, -80.5f, 230.375f, 540, 480, absent, nullptr,
                                  0) == LandmarkVisibility::hidden);
    MOD_CHECK(landmark_visibility(false, 1815, 31, true, -80.5f, 230.375f, 540, 480, absent,
                                  nullptr, 0) == LandmarkVisibility::unavailable);
    MOD_CHECK(landmark_visibility(true, 1815, 31, false, -80.5f, 230.375f, 540, 480, absent,
                                  nullptr, 0) == LandmarkVisibility::unavailable);
    MOD_CHECK(landmark_visibility(true, 1815, 31, true, 75.5f, 230.375f, 852, 480, absent, nullptr,
                                  0) == LandmarkVisibility::not_drawn);
}
