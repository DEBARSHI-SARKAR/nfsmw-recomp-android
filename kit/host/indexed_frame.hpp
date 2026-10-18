#pragma once
#include <array>
#include <cstdint>
#include <memory>
#include <span>
#include <vector>

namespace pop {
struct RGBA8 {
    std::uint8_t r, g, b, a;
    bool operator==(const RGBA8 &) const = default;
};
static_assert(sizeof(RGBA8) == 4);
using Palette = std::array<RGBA8, 256>;
struct IndexedFrame {
    std::uint32_t width, height, stride;
    std::span<const std::uint8_t> pixels;
};
// Native replacement boundary for indexed framebuffer palette expansion.
// Window presentation and the reconstructed software rasterizer will feed this later.
class IndexedFrameBackend {
  public:
    virtual ~IndexedFrameBackend() = default;
    virtual std::vector<RGBA8> expand(IndexedFrame frame, const Palette &palette) = 0;
};
std::size_t validate_frame(IndexedFrame frame);
std::unique_ptr<IndexedFrameBackend> make_cpu_frame_backend();
std::unique_ptr<IndexedFrameBackend> make_metal_frame_backend();
} // namespace pop
