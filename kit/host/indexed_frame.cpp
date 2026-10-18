#include "indexed_frame.hpp"
#include <limits>
#include <stdexcept>

namespace pop {
std::size_t validate_frame(IndexedFrame f) {
    if (!f.width || !f.height || f.stride < f.width)
        throw std::invalid_argument("invalid indexed frame dimensions");
    const auto required = static_cast<std::uint64_t>(f.stride) * f.height;
    const auto count = static_cast<std::uint64_t>(f.width) * f.height;
    if (required > f.pixels.size() ||
        count > std::numeric_limits<std::size_t>::max() / sizeof(RGBA8))
        throw std::invalid_argument("indexed frame buffer too small or dimensions overflow");
    return static_cast<std::size_t>(count);
}
class CPUFrameBackend final : public IndexedFrameBackend {
    std::vector<RGBA8> expand(IndexedFrame f, const Palette &palette) override {
        std::vector<RGBA8> output(validate_frame(f));
        for (std::uint32_t y = 0; y < f.height; ++y)
            for (std::uint32_t x = 0; x < f.width; ++x)
                output[static_cast<std::size_t>(y) * f.width + x] =
                    palette[f.pixels[static_cast<std::size_t>(y) * f.stride + x]];
        return output;
    }
};
std::unique_ptr<IndexedFrameBackend> make_cpu_frame_backend() {
    return std::make_unique<CPUFrameBackend>();
}
} // namespace pop
