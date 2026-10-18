// webgpu_device.h - gpu::Device over the browser's WebGPU (Emscripten,
// emdawnwebgpu's webgpu.h).
//
// Everything runs on the browser's main thread, the only thread that owns the
// WebGPU objects; the web host pumps the presenter and the Direct3D 9 queue
// from there. The browser completes work on its own schedule, so the calls
// that would block elsewhere do not: wait() returns at once, readback() and
// map_read() report nothing, and on_complete() callbacks run from the event
// loop once the queue says the work is done.
//
// The device is the page's: it requests the adapter and device (with the
// features the renderers use) and hands it over as
// Module.preinitializedWebGPUDevice before the program starts.
#pragma once
#include "../gpu.h"

#include <webgpu/webgpu.h>

#include <functional>
#include <map>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

namespace gpu {

class WebGpuDevice final : public Device {
  public:
    static std::unique_ptr<WebGpuDevice> create();
    ~WebGpuDevice() override;

    Texture create_texture(const TextureDesc &desc) override;
    bool upload(Texture t, Region region, const void *bytes, int pitch, int level = 0) override;
    bool readback(Texture t, Region region, void *bytes, int pitch) override;
    void destroy(Texture t) override;
    TextureDesc describe(Texture t) override;
    uint64_t allocated_bytes(Texture t) override;
    Buffer create_buffer(uint64_t bytes, const void *contents) override;
    void update(Buffer b, uint64_t offset, const void *bytes, uint64_t count) override;
    const void *map_read(Buffer b) override;
    uint64_t buffer_bytes(Buffer b) override;
    void destroy(Buffer b) override;
    Pipeline render_pipeline(const std::string &shader, const RenderState &state) override;
    Pipeline compute_pipeline(const std::string &shader) override;
    int thread_execution_width(Pipeline p) override;
    CommandBuffer begin() override;
    void begin_render_pass(CommandBuffer cb, const RenderPass &pass) override;
    void set_pipeline(CommandBuffer cb, Pipeline p) override;
    void set_depth(CommandBuffer cb, const DepthState &d) override;
    void set_cull(CommandBuffer cb, Cull c) override;
    void set_viewport(CommandBuffer cb, const Viewport &v) override;
    void set_vertex_buffer(CommandBuffer cb, int slot, Buffer b, uint64_t offset) override;
    void set_bytes(CommandBuffer cb, Stage stage, int slot, const void *bytes,
                   uint64_t count) override;
    void set_buffer(CommandBuffer cb, Stage stage, int slot, Buffer b, uint64_t offset) override;
    void set_texture(CommandBuffer cb, Stage stage, int slot, Texture t) override;
    void set_sampler(CommandBuffer cb, Stage stage, int slot, const SamplerState &s) override;
    void draw(CommandBuffer cb, Primitive primitive, int first, int count) override;
    void end_render_pass(CommandBuffer cb) override;
    void begin_compute_pass(CommandBuffer cb) override;
    void dispatch_threads(CommandBuffer cb, int tx, int ty, int gx, int gy) override;
    void dispatch_groups(CommandBuffer cb, int groups_x, int groups_y, int gx, int gy) override;
    void end_compute_pass(CommandBuffer cb) override;
    void blit(CommandBuffer cb, Texture src, Region src_region, Texture dst, int dst_x,
              int dst_y) override;
    void copy_buffer_to_texture(CommandBuffer cb, Buffer src, uint64_t offset, int pitch,
                                Texture dst, Region dst_region) override;
    void copy_texture_to_buffer(CommandBuffer cb, Texture src, Region src_region, Buffer dst,
                                uint64_t offset, int pitch) override;
    void generate_mipmaps(CommandBuffer cb, Texture t) override;
    void on_complete(CommandBuffer cb,
                     std::function<void(CommandStatus, double gpu_ms)> fn) override;
    void commit(CommandBuffer cb) override;
    void wait(CommandBuffer cb) override;
    CommandStatus status(CommandBuffer cb) override;
    Swapchain create_swapchain(void *native_surface, int width, int height) override;
    void resize(Swapchain s, int width, int height) override;
    Format swapchain_format(Swapchain s) override;
    Texture acquire(Swapchain s) override;
    void release_drawable(Swapchain s, Texture t) override;
    void present(CommandBuffer cb, Swapchain s, Texture t, double min_duration_seconds,
                 std::function<void(double presented_seconds)> presented) override;
    double refresh_period(Swapchain s) override;
    void destroy(Swapchain s) override;
    double now_seconds() override;

    // --- for renderers that record their own WebGPU (d3d9_webgpu.cpp) ---
    WGPUDevice native_device() const {
        return device_;
    }
    WGPUQueue native_queue() const {
        return queue_;
    }
    bool has_feature(WGPUFeatureName f) const;
    // A handle the presenter can use for a texture the caller owns; destroy()
    // forgets the handle and leaves the texture alone.
    Texture import_texture(WGPUTexture texture, WGPUTextureView view, const TextureDesc &desc);
    // Runs `fn` once the work submitted so far has finished.
    void after_submitted(std::function<void()> fn);
    // Runs `fn` on the main thread from the event loop. WebGPU callbacks hand
    // their work here: the browser binding calls them holding its event lock,
    // which any WebGPU call that waits for something takes again.
    static void later(std::function<void()> fn);

  private:
    WebGpuDevice() = default;
    struct Tex {
        WGPUTexture texture = nullptr;
        WGPUTextureView view = nullptr;
        TextureDesc desc;
        uint64_t bytes = 0;
        bool external = false;
    };
    struct Buf {
        WGPUBuffer buffer = nullptr;
        uint64_t bytes = 0;
    };
    struct Binding {
        WGPUBuffer buffer = nullptr;
        uint64_t offset = 0, size = 0;
    };
    struct Cmd {
        WGPUCommandEncoder encoder = nullptr;
        WGPURenderPassEncoder pass = nullptr;
        WGPUComputePassEncoder compute = nullptr;
        uint64_t pipeline = 0;
        Primitive topology = Primitive::Triangles;
        Cull cull = Cull::None;
        DepthState depth;
        bool pass_depth = false;
        int pass_width = 0, pass_height = 0;
        Binding buffers[8];
        WGPUTextureView textures[4] = {};
        WGPUSampler samplers[4] = {};
        bool bindings_dirty = true;
        WGPURenderPipeline bound = nullptr;
        std::vector<std::function<void(CommandStatus, double)>> callbacks;
        bool viewport_set = false;
        Viewport viewport{};
    };
    struct Family {
        std::string shader;
        RenderState state;
        WGPUShaderModule module = nullptr;
        std::map<uint64_t, WGPURenderPipeline> variants;
    };
    struct Chain {
        WGPUSurface surface = nullptr;
        WGPUTextureFormat format = WGPUTextureFormat_BGRA8Unorm;
        int width = 0, height = 0;
        uint64_t current = 0; // the acquired texture's handle
    };

    Cmd *cmd(CommandBuffer cb);
    void end_passes(Cmd &c);
    WGPUShaderModule module(const std::string &name);
    WGPURenderPipeline variant_for(Cmd &c);
    WGPUSampler sampler_for(const SamplerState &s);
    void bind(Cmd &c, bool compute);
    Binding stage_bytes(const void *bytes, uint64_t count);
    WGPUBindGroupLayout make_layout(bool compute);

    WGPUInstance instance_ = nullptr;
    WGPUDevice device_ = nullptr;
    WGPUQueue queue_ = nullptr;
    WGPULimits limits_{};
    WGPUBindGroupLayout render_layout_ = nullptr, compute_layout_ = nullptr;
    WGPUPipelineLayout render_pipeline_layout_ = nullptr, compute_pipeline_layout_ = nullptr;
    WGPUBuffer dummy_buffer_ = nullptr;
    WGPUTexture dummy_texture_ = nullptr;
    WGPUTextureView dummy_view_ = nullptr;
    WGPUSampler dummy_sampler_ = nullptr;
    // set_bytes data: a ring of storage buffers, reused once nothing recording
    // can still name an old offset.
    std::vector<WGPUBuffer> ring_;
    size_t ring_chunk_ = 0;
    uint64_t ring_used_ = 0;
    size_t recording_count_ = 0;

    uint64_t next_id_ = 1;
    std::unordered_map<uint64_t, Tex> textures_;
    std::unordered_map<uint64_t, Buf> buffers_;
    std::unordered_map<uint64_t, std::unique_ptr<Cmd>> recording_;
    std::unordered_map<uint64_t, CommandStatus> status_;
    std::unordered_map<uint64_t, Family> families_;
    std::unordered_map<uint64_t, uint64_t> family_by_key_;
    std::unordered_map<std::string, WGPUShaderModule> modules_;
    struct ComputePipe {
        WGPUComputePipeline pipeline = nullptr;
    };
    std::unordered_map<uint64_t, ComputePipe> computes_;
    std::unordered_map<std::string, uint64_t> compute_by_name_;
    std::map<uint64_t, WGPUSampler> samplers_;
    std::unordered_map<uint64_t, Chain> chains_;
};

} // namespace gpu
