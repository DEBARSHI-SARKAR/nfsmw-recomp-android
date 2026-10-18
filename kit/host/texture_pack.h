#pragma once
#include "texture_pixels.h"
#include <filesystem>
#include <fstream>
#include <map>
#include <set>
#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include "../platform/os.h"

// Portable on-disk format: POPRGBA1, LE u32 width,height,levels,flags, then
// LE u64 source hash. Tightly packed RGBA8 levels, largest first. flags bit0
// means nonopaque alpha. Pack files are generated offline; no image decoding,
// resizing or mip generation is required while a game is drawing.
namespace pop_hd {
constexpr uint64_t max_file_bytes = 90ull * 1024 * 1024;
inline uint32_t read32(const uint8_t *b) {
    return uint32_t(b[0]) | (uint32_t(b[1]) << 8) | (uint32_t(b[2]) << 16) | (uint32_t(b[3]) << 24);
}
inline uint64_t read64(const uint8_t *b) {
    return read32(b) | (uint64_t(read32(b + 4)) << 32);
}
inline uint64_t mip_bytes(int w, int h, int levels) {
    uint64_t n = 0;
    for (int i = 0; i < levels; ++i) {
        n += uint64_t(w) * h * 4;
        w = std::max(1, w / 2);
        h = std::max(1, h / 2);
    }
    return n;
}
inline int mip_levels(int w, int h) {
    int n = 1;
    while (w > 1 || h > 1) {
        w = std::max(1, w / 2);
        h = std::max(1, h / 2);
        ++n;
    }
    return n;
}
struct File {
    std::filesystem::path path;
    uint32_t width = 0, height = 0, levels = 0, flags = 0;
    uint64_t hash = 0, bytes = 0;
};
inline bool inspect(const std::filesystem::path &path, File &out) {
    std::error_code ec;
    const auto size = std::filesystem::file_size(path, ec);
    if (ec || size < 36 || size > max_file_bytes)
        return false;
    std::ifstream stream(path, std::ios::binary);
    uint8_t h[32]{};
    if (!stream.read(reinterpret_cast<char *>(h), 32) || memcmp(h, "POPRGBA1", 8))
        return false;
    File f{path,           read32(h + 8),  read32(h + 12), read32(h + 16),
           read32(h + 20), read64(h + 24), size - 32};
    if (!f.width || !f.height || f.width > 4096 || f.height > 4096 || f.flags > 1 ||
        f.levels != uint32_t(mip_levels(f.width, f.height)) ||
        f.bytes != mip_bytes(f.width, f.height, f.levels))
        return false;
    out = std::move(f);
    return true;
}
struct Pack {
    std::map<uint64_t, File> files;
    std::set<uint64_t> dumped;
    std::string dump_dir;
    void open(const std::string &dir) {
        files.clear();
        std::error_code ec;
        for (std::filesystem::directory_iterator it(dir, ec), end; !ec && it != end;
             it.increment(ec)) {
            if (it->path().extension() != ".popt")
                continue;
            File f;
            if (!inspect(it->path(), f))
                continue;
            if (it->path().filename() == "terrain-detail.popt" && !f.hash && !f.flags &&
                f.width == f.height && f.width >= 128 && f.width <= 2048) {
                files.emplace(0, std::move(f));
                continue;
            }
            if (!f.hash)
                continue; // zero belongs only to the named data texture
            char expected[32];
            snprintf(expected, sizeof(expected), "%016llx.popt", (unsigned long long)f.hash);
            if (it->path().filename() != expected)
                continue;
            files.emplace(f.hash, std::move(f));
        }
        const char *capture = recomp_env("TEXTURE_DUMP_DIR");
        dump_dir = capture ? capture : "";
        if (!files.empty())
            fprintf(stderr, "[hd] indexed %zu textures in %s\n", files.size(), dir.c_str());
    }
    // Explicit development capture only. One file per content; does not run
    // in normal gameplay. Full RGBA preserves source colorkeys and alpha.
    void capture(const HostD3DTexture &t, const std::vector<uint8_t> &rgba) {
        if (dump_dir.empty() || !t.content_hash || !dumped.insert(t.content_hash).second ||
            dumped.size() > 8192)
            return;
        std::error_code ec;
        std::filesystem::create_directories(dump_dir, ec);
        if (ec)
            return;
        char name[32];
        snprintf(name, sizeof(name), "%016llx.pam", (unsigned long long)t.content_hash);
        std::ofstream f(std::filesystem::path(dump_dir) / name, std::ios::binary);
        f << "P7\nWIDTH " << t.width << "\nHEIGHT " << t.height
          << "\nDEPTH 4\nMAXVAL 255\nTUPLTYPE RGB_ALPHA\nENDHDR\n";
        f.write(reinterpret_cast<const char *>(rgba.data()), rgba.size());
        std::ofstream metadata(std::filesystem::path(dump_dir) / "textures.tsv", std::ios::app);
        metadata << name << '\t' << t.handle << '\t' << t.width << '\t' << t.height << '\t' << t.bpp
                 << '\t' << t.rmask << '\t' << t.gmask << '\t' << t.bmask << '\t' << t.amask << '\t'
                 << t.has_colorkey << '\n';
    }
};
} // namespace pop_hd
