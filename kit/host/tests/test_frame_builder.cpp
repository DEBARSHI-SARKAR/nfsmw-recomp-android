#include "test_frame_builder.h"
#include <cassert>
#include <utility>

namespace {
std::map<uint64_t, test_frame_builder *> frames;
uint64_t next_frame = 1;
test_frame_builder *active = nullptr;
test_frame_builder *get(HostFrameHandle f) {
    auto it = frames.find(f.id);
    return it == frames.end() ? nullptr : it->second;
}
} // namespace

test_frame_builder::test_frame_builder() : frame{next_frame++} {
    frames[frame.id] = this;
    palette(1, 1, 0xff0000);
}
test_frame_builder::~test_frame_builder() {
    assert(balanced());
    if (active == this)
        active = nullptr;
    frames.erase(frame.id);
}
void test_frame_builder::revision(HostSurfaceKey k, int w, int h, int bpp,
                                  std::vector<uint8_t> bytes, int pitch) {
    revisions[key(k)] = {std::move(bytes), w, h, pitch ? pitch : w * (bpp / 8), bpp};
}
void test_frame_builder::palette(uint32_t version, uint8_t index, uint32_t rgb) {
    auto &p = palettes[version].rgb;
    p[index * 3] = uint8_t(rgb >> 16);
    p[index * 3 + 1] = uint8_t(rgb >> 8);
    p[index * 3 + 2] = uint8_t(rgb);
}
HostBlitRecord &test_frame_builder::blit(HostSurfaceId src, int x, int y, int w, int h,
                                         uint32_t rev, uint32_t pv) {
    records.emplace_back();
    auto &r = records.back().value;
    r.seq = uint32_t(records.size());
    r.dst = render_surface;
    r.dst_generation = 1;
    r.dst_x = x;
    r.dst_y = y;
    r.w = w;
    r.h = h;
    r.src = {src, rev};
    r.palette_version = pv;
    r.after_first_draw = 1;
    r.after_first_hud = records.size() > 1;
    return r;
}
void test_frame_builder::coverage(std::vector<uint8_t> bytes) {
    records.back().coverage = std::move(bytes);
}
void test_frame_builder::cpu(std::vector<uint8_t> bytes, int bpp, int pitch) {
    records.back().cpu_pixels = std::move(bytes);
    records.back().value.cpu_bpp = uint8_t(bpp);
    records.back().value.cpu_pitch = pitch;
}
bool test_frame_builder::balanced() const {
    if (revision_acquires != revision_releases || palette_acquires != palette_releases)
        return false;
    for (const auto &[key, rev] : revisions)
        if (rev.acquires)
            return false;
    for (const auto &[key, pal] : palettes)
        if (pal.acquires)
            return false;
    return true;
}

extern "C" {
HostScreenClass host_frame_class(HostFrameHandle f) {
    active = get(f);
    return active ? active->screen_class : HOST_SCREEN_MENU;
}
uint32_t host_frame_record_count(HostFrameHandle f) {
    active = get(f);
    return active ? uint32_t(active->records.size()) : 0;
}
const HostBlitRecord *host_frame_record(HostFrameHandle f, uint32_t i) {
    active = get(f);
    if (!active || i >= active->records.size())
        return nullptr;
    ++active->record_reads;
    auto &r = active->records[i];
    r.value.coverage = r.coverage.empty() ? nullptr : r.coverage.data();
    r.value.cpu_pixels = r.cpu_pixels.empty() ? nullptr : r.cpu_pixels.data();
    return &r.value;
}
HostSurfaceId host_frame_render_surface(HostFrameHandle f) {
    active = get(f);
    return active ? active->render_surface : HOST_SURFACE_NONE;
}
HostSurfaceId host_cursor_surface(void) {
    return active ? active->cursor_surface : HOST_SURFACE_NONE;
}
int host_revision_lease(HostSurfaceKey key, HostPixels *out) {
    if (out)
        *out = {};
    if (!active)
        return -1;
    auto it = active->revisions.find(test_frame_builder::key(key));
    if (it == active->revisions.end())
        return -1;
    auto &r = it->second;
    ++r.acquires;
    ++active->revision_acquires;
    if (out)
        *out = {r.bytes.data(), r.w, r.h, r.pitch, r.bpp};
    return 0;
}
void host_revision_release(HostSurfaceKey key) {
    assert(active);
    auto &r = active->revisions.at(test_frame_builder::key(key));
    assert(r.acquires > 0);
    --r.acquires;
    ++active->revision_releases;
}
const uint8_t *host_palette_lease(uint32_t version) {
    if (!active)
        return nullptr;
    auto it = active->palettes.find(version);
    if (it == active->palettes.end())
        return nullptr;
    ++it->second.acquires;
    ++active->palette_acquires;
    return it->second.rgb.data();
}
void host_palette_release(uint32_t version) {
    assert(active);
    auto &p = active->palettes.at(version);
    assert(p.acquires > 0);
    --p.acquires;
    ++active->palette_releases;
}
}
