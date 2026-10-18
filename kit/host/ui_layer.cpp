#include "ui_layer.h"
#include <algorithm>
#include <climits>
#include <map>
#include <numeric>
#include <set>
#include <utility>

namespace {
struct Rect {
    int64_t x, y, right, bottom;
    int64_t area() const {
        return (right - x) * (bottom - y);
    }
};
Rect rect(const HostBlitRecord &r) {
    return {r.dst_x, r.dst_y, int64_t(r.dst_x) + r.w, int64_t(r.dst_y) + r.h};
}
Rect rect(const UiElement &e) {
    return {e.x, e.y, int64_t(e.x) + e.w, int64_t(e.y) + e.h};
}
bool connected(Rect a, Rect b) {
    // Exclusive ends: equal edges include edge and corner pixel adjacency;
    // a whole uncovered row/column between the rectangles does not connect.
    return a.x <= b.right && b.x <= a.right && a.y <= b.bottom && b.y <= a.bottom;
}
int64_t overlap(Rect a, Rect b) {
    return std::max<int64_t>(0, std::min(a.right, b.right) - std::max(a.x, b.x)) *
           std::max<int64_t>(0, std::min(a.bottom, b.bottom) - std::max(a.y, b.y));
}
uint64_t surface_key(HostSurfaceKey k) {
    return (uint64_t(k.surface) << 32) | k.revision;
}

// These are additional, short-lived leases. The frame's own holds remain
// untouched; the extracted value no longer needs any lease when we return.
struct RevisionLease {
    HostSurfaceKey key{};
    HostPixels pixels{};
    bool held = false;
    explicit RevisionLease(HostSurfaceKey k) : key(k) {
        held = host_revision_lease(k, &pixels) == 0;
    }
    ~RevisionLease() {
        if (held)
            host_revision_release(key);
    }
    RevisionLease(const RevisionLease &) = delete;
};
struct PaletteLease {
    uint32_t version;
    const uint8_t *rgb;
    explicit PaletteLease(uint32_t v) : version(v), rgb(host_palette_lease(v)) {}
    ~PaletteLease() {
        if (rgb)
            host_palette_release(version);
    }
    PaletteLease(const PaletteLease &) = delete;
};
struct Sources {
    std::map<uint64_t, RevisionLease> revisions;
    std::map<uint32_t, PaletteLease> palettes;
    const HostPixels *pixels(HostSurfaceKey key) {
        auto &r = revisions.try_emplace(surface_key(key), key).first->second;
        return r.held ? &r.pixels : nullptr;
    }
    const uint8_t *palette(uint32_t version) {
        return palettes.try_emplace(version, version).first->second.rgb;
    }
};

int storage_bytes(int bpp) {
    return bpp == 8 ? 1 : bpp == 16 ? 2 : (bpp == 24 || bpp == 32) ? 4 : 0;
}
bool valid_pixels(const HostPixels &p) {
    return p.data && p.w > 0 && p.h > 0 && storage_bytes(p.bpp) &&
           p.pitch >= int64_t(p.w) * storage_bytes(p.bpp);
}
uint32_t raw_pixel(const HostPixels &p, int x, int y) {
    const uint8_t *v = p.data + size_t(y) * p.pitch + size_t(x) * storage_bytes(p.bpp);
    uint32_t raw = v[0];
    if (p.bpp > 8)
        raw |= uint32_t(v[1]) << 8;
    if (p.bpp > 16)
        raw |= (uint32_t(v[2]) << 16) | (uint32_t(v[3]) << 24);
    return raw;
}
void expand(uint32_t raw, int bpp, const uint8_t *palette, uint8_t *rgba) {
    if (bpp == 8) {
        uint8_t index = uint8_t(raw);
        for (int c = 0; c != 3; ++c)
            rgba[c] = palette ? palette[index * 3 + c] : index;
    } else if (bpp > 16) {
        rgba[0] = raw >> 16;
        rgba[1] = raw >> 8;
        rgba[2] = raw;
    } else {
        rgba[0] = uint8_t(((raw >> 11) & 31) * 255 / 31);
        rgba[1] = uint8_t(((raw >> 5) & 63) * 255 / 63);
        rgba[2] = uint8_t((raw & 31) * 255 / 31);
    }
    rgba[3] = 255;
}

// Replay a recorded blit into an owned UI element using its captured source and palette.
// Honor recorded coverage so later guest writes cannot change a historical color-key decision.
void replay(const HostBlitRecord &r, UiElement &e, Sources &sources, int fill_bpp) {
    const bool fill = r.src.surface == HOST_SURFACE_NONE;
    HostPixels cpu{r.cpu_pixels, r.w, r.h, r.cpu_pitch, r.cpu_bpp};
    const HostPixels *p = nullptr;
    if (!fill) {
        p = r.src.surface == HOST_SRC_CPU ? &cpu : sources.pixels(r.src);
        if (!p || !valid_pixels(*p))
            return;
    }
    const int bpp = fill ? fill_bpp : p->bpp;
    if (!storage_bytes(bpp))
        return;
    const uint8_t *palette = bpp == 8 ? sources.palette(r.palette_version) : nullptr;
    // Version 0 denotes no palette; match the host's indexed greyscale fallback.
    // A named, unavailable version cannot be replaced with the current palette.
    if (bpp == 8 && r.palette_version && !palette)
        return;
    // The recorder's coverage captures destination-key decisions against the
    // actual destination at submission. Reading another element or final guest
    // storage here would both violate isolation and use the wrong point in time.
    if (r.has_dstkey && !r.coverage)
        return;
    for (int y = 0; y < r.h; ++y) {
        for (int x = 0; x < r.w; ++x) {
            const size_t ri = size_t(y) * r.w + x;
            if (r.coverage && !r.coverage[ri])
                continue;
            uint32_t raw = r.fill_value;
            if (!fill) {
                // CPU payloads describe the changed rectangle itself, with their
                // own pitch; src_x/src_y only locate a retained surface source.
                int64_t sx = x, sy = y;
                if (r.src.surface != HOST_SRC_CPU) {
                    sx += r.src_x;
                    sy += r.src_y;
                }
                if (sx < 0 || sy < 0 || sx >= p->w || sy >= p->h)
                    continue;
                raw = raw_pixel(*p, int(sx), int(sy));
                if (r.has_srckey && raw >= r.src_key_lo && raw <= r.src_key_hi)
                    continue;
            }
            size_t ei =
                size_t(int64_t(r.dst_y) + y - e.y) * e.w + size_t(int64_t(r.dst_x) + x - e.x);
            expand(raw, bpp, palette, e.rgba.data() + ei * 4);
            e.mask[ei] = 1;
        }
    }
}

uint64_t initial_id(const HostBlitRecord &first) {
    // Hash fields explicitly in little-endian order, never struct padding or
    // revision/palette/sequence: animation must not change the anchor's key.
    uint64_t id = UINT64_C(14695981039346656037);
    for (uint32_t v : {first.src.surface, uint32_t(first.dst_x), uint32_t(first.dst_y),
                       uint32_t(first.w), uint32_t(first.h)}) {
        for (int byte = 0; byte < 4; ++byte) {
            id ^= (v >> (byte * 8)) & 255;
            id *= UINT64_C(1099511628211);
        }
    }
    return id;
}

void identify(std::vector<UiElement> &elements, const std::vector<uint64_t> &seeds,
              const UiFrame *previous) {
    std::vector<size_t> order(elements.size());
    std::iota(order.begin(), order.end(), 0);
    std::stable_sort(order.begin(), order.end(), [&](size_t a, size_t b) {
        return rect(elements[a]).area() > rect(elements[b]).area();
    });
    const size_t old_count = previous ? previous->elements.size() : 0;
    std::vector<bool> claimed(old_count, false);
    std::set<uint64_t> used;
    // Reserve ALL old ids, including unmatched ones: the small split at the
    // old first rectangle must not regenerate the id its larger sibling kept.
    if (previous)
        for (const auto &old : previous->elements)
            used.insert(old.id);
    for (size_t i : order) {
        auto &e = elements[i];
        size_t best = old_count;
        int64_t best_overlap = 0;
        for (size_t j = 0; j < old_count; ++j) {
            const auto &old = previous->elements[j];
            if (claimed[j] || !old.id || old.src != e.src || old.w <= 0 || old.h <= 0)
                continue;
            int64_t shared = overlap(rect(e), rect(old));
            // At least half of the smaller rectangle. This also allows a
            // text run to grow/shrink, or split into more than two pieces.
            int64_t smaller = std::min(rect(e).area(), rect(old).area());
            if (shared < (smaller + 1) / 2 || shared <= best_overlap)
                continue;
            best = j;
            best_overlap = shared;
        }
        if (best != old_count) {
            e.id = previous->elements[best].id;
            claimed[best] = true;
        }
    }
    for (size_t i = 0; i < elements.size(); ++i) {
        if (elements[i].id)
            continue;
        uint64_t id = seeds[i];
        while (!id || used.count(id))
            id += UINT64_C(0x9e3779b97f4a7c15);
        elements[i].id = id;
        used.insert(id);
    }
}
} // namespace

// Extract UI elements from the sealed frame while still on the guest thread.
// Reuse only dimension-compatible prior UI; decoded movie frames stay complete video surfaces.
void ui_layer_extract(HostFrameHandle f, int guest_w, int guest_h, const UiFrame *previous,
                      UiFrame *out) {
    if (!out)
        return;
    UiFrame result{{}, guest_w, guest_h};
    if (previous && (previous->guest_w != guest_w || previous->guest_h != guest_h))
        previous = nullptr;
    if (guest_w <= 0 || guest_h <= 0) {
        *out = std::move(result);
        return;
    }
    const HostScreenClass cls = host_frame_class(f);
    // FMV is presented from its complete decoded surface. Its changed pixel
    // runs are video content, not movable UI. Pairwise grouping these runs
    // grows quadratically with picture detail and stalls the movie/audio
    // threads while the guest holds the scheduler baton.
    if (cls == HOST_SCREEN_FMV) {
        *out = std::move(result);
        return;
    }
    const HostSurfaceId target = host_frame_render_surface(f);
    const HostSurfaceId cursor = host_cursor_surface();
    std::vector<const HostBlitRecord *> records;
    const uint32_t count = host_frame_record_count(f);
    for (uint32_t i = 0; i < count; ++i) {
        const auto *r = host_frame_record(f, i);
        if (r && target != HOST_SURFACE_NONE && r->dst == target && !r->is_upload && r->w > 0 &&
            r->h > 0)
            records.push_back(r);
    }
    std::stable_sort(records.begin(), records.end(),
                     [](const auto *a, const auto *b) { return a->seq < b->seq; });

    std::vector<size_t> parent(records.size());
    std::iota(parent.begin(), parent.end(), 0);
    auto root = [&](size_t i) {
        while (parent[i] != i) {
            parent[i] = parent[parent[i]];
            i = parent[i];
        }
        return i;
    };
    // Union the ORIGINAL rectangles, not growing bounding boxes, which can
    // contain empty space and would merge disconnected text/icon islands.
    for (size_t i = 0; i < records.size(); ++i) {
        for (size_t j = 0; j < i; ++j) {
            if (records[i]->src.surface == records[j]->src.surface &&
                connected(rect(*records[i]), rect(*records[j])))
                parent[root(i)] = root(j);
        }
    }
    std::vector<std::vector<const HostBlitRecord *>> groups;
    std::map<size_t, size_t> group_index;
    for (size_t i = 0; i < records.size(); ++i) {
        auto [it, added] = group_index.emplace(root(i), groups.size());
        if (added)
            groups.emplace_back();
        groups[it->second].push_back(records[i]);
    }

    Sources sources;
    // HostBlitRecord does not encode a fill's destination bpp. Infer it only
    // when a CPU write or 1:1 surface copy in this frame establishes the format.
    // Fill-only frames need destination format metadata added to the host ABI;
    // leave their masks empty rather than invent indexed/RGB565 colours.
    int fill_bpp = 0;
    for (const auto *r : records) {
        if (r->src.surface == HOST_SRC_CPU)
            fill_bpp = r->cpu_bpp;
        else if (r->src.surface != HOST_SURFACE_NONE) {
            const auto *p = sources.pixels(r->src);
            if (p && valid_pixels(*p))
                fill_bpp = p->bpp;
        }
        if (storage_bytes(fill_bpp))
            break;
    }
    std::vector<uint64_t> seeds;
    for (const auto &group : groups) {
        const auto &first = *group.front();
        Rect bounds = rect(first);
        UiElement e{};
        e.src = first.src.surface;
        e.is_cursor = cursor != HOST_SURFACE_NONE && e.src == cursor;
        e.first_seq = first.seq;
        e.last_seq = group.back()->seq;
        for (const auto *r : group) {
            Rect b = rect(*r);
            bounds.x = std::min(bounds.x, b.x);
            bounds.y = std::min(bounds.y, b.y);
            bounds.right = std::max(bounds.right, b.right);
            bounds.bottom = std::max(bounds.bottom, b.bottom);
            e.is_hud |= cls == HOST_SCREEN_GAMEPLAY && r->dst == target &&
                        r->src.surface != target && r->after_first_draw;
        }
        if (bounds.right - bounds.x > INT_MAX || bounds.bottom - bounds.y > INT_MAX)
            continue;
        e.x = int(bounds.x);
        e.y = int(bounds.y);
        e.w = int(bounds.right - bounds.x);
        e.h = int(bounds.bottom - bounds.y);
        const size_t pixels = size_t(e.w) * e.h;
        if (pixels > e.rgba.max_size() / 4)
            continue;
        e.rgba.resize(pixels * 4, 0);
        e.mask.resize(pixels, 0);
        for (const auto *r : group)
            replay(*r, e, sources, fill_bpp);
        result.elements.push_back(std::move(e));
        seeds.push_back(initial_id(first));
    }
    identify(result.elements, seeds, previous);
    *out = std::move(result);
}
