// webgpu_device.cpp - gpu::Device over WebGPU. See webgpu_device.h.
#include "webgpu_device.h"
#include "shaders_wgsl.h"

#include <emscripten/emscripten.h>
#include <emscripten/proxying.h>
#include <emscripten/threading.h>

#include <algorithm>
#include <cstdio>
#include <cstring>

namespace gpu {

namespace {

WGPUStringView sv(const char *s) {
    return WGPUStringView{s, WGPU_STRLEN};
}

WGPUTextureFormat wgpu_format(Format f) {
    switch (f) {
    case Format::BGRA8:
        return WGPUTextureFormat_BGRA8Unorm;
    case Format::RGBA8:
        return WGPUTextureFormat_RGBA8Unorm;
    case Format::R8:
        return WGPUTextureFormat_R8Unorm;
    case Format::Depth32F:
        return WGPUTextureFormat_Depth32Float;
    }
    return WGPUTextureFormat_BGRA8Unorm;
}
Format format_of(WGPUTextureFormat f) {
    switch (f) {
    case WGPUTextureFormat_RGBA8Unorm:
        return Format::RGBA8;
    case WGPUTextureFormat_R8Unorm:
        return Format::R8;
    case WGPUTextureFormat_Depth32Float:
        return Format::Depth32F;
    default:
        return Format::BGRA8;
    }
}
int bytes_per_pixel(Format f) {
    return f == Format::R8 ? 1 : 4;
}
WGPUBlendFactor blend_factor(Blend b) {
    switch (b) {
    case Blend::Zero:
        return WGPUBlendFactor_Zero;
    case Blend::One:
        return WGPUBlendFactor_One;
    case Blend::SrcAlpha:
        return WGPUBlendFactor_SrcAlpha;
    case Blend::OneMinusSrcAlpha:
        return WGPUBlendFactor_OneMinusSrcAlpha;
    case Blend::DstAlpha:
        return WGPUBlendFactor_DstAlpha;
    case Blend::OneMinusDstAlpha:
        return WGPUBlendFactor_OneMinusDstAlpha;
    case Blend::SrcColor:
        return WGPUBlendFactor_Src;
    case Blend::OneMinusSrcColor:
        return WGPUBlendFactor_OneMinusSrc;
    case Blend::DstColor:
        return WGPUBlendFactor_Dst;
    case Blend::OneMinusDstColor:
        return WGPUBlendFactor_OneMinusDst;
    case Blend::SrcAlphaSaturated:
        return WGPUBlendFactor_SrcAlphaSaturated;
    }
    return WGPUBlendFactor_One;
}
WGPUCompareFunction compare_fn(Compare c) {
    switch (c) {
    case Compare::Never:
        return WGPUCompareFunction_Never;
    case Compare::Less:
        return WGPUCompareFunction_Less;
    case Compare::Equal:
        return WGPUCompareFunction_Equal;
    case Compare::LessEqual:
        return WGPUCompareFunction_LessEqual;
    case Compare::Greater:
        return WGPUCompareFunction_Greater;
    case Compare::NotEqual:
        return WGPUCompareFunction_NotEqual;
    case Compare::GreaterEqual:
        return WGPUCompareFunction_GreaterEqual;
    case Compare::Always:
        return WGPUCompareFunction_Always;
    }
    return WGPUCompareFunction_Always;
}
WGPUPrimitiveTopology topology_of(Primitive p) {
    switch (p) {
    case Primitive::Points:
        return WGPUPrimitiveTopology_PointList;
    case Primitive::Lines:
        return WGPUPrimitiveTopology_LineList;
    case Primitive::Triangles:
        return WGPUPrimitiveTopology_TriangleList;
    case Primitive::TriangleStrip:
        return WGPUPrimitiveTopology_TriangleStrip;
    }
    return WGPUPrimitiveTopology_TriangleList;
}
int binding_index(Stage stage, int slot) {
    if (slot < 0 || slot > 3)
        return -1;
    return stage == Stage::Fragment ? 4 + slot : slot;
}
uint64_t round_up(uint64_t v, uint64_t a) {
    return (v + a - 1) / a * a;
}
constexpr uint64_t kRingChunk = 4u << 20;

void on_error(WGPUDevice const *, WGPUErrorType type, WGPUStringView message, void *, void *) {
    fprintf(stderr, "gpu/webgpu: error %d: %.*s\n", (int)type,
            (int)(message.length == WGPU_STRLEN ? strlen(message.data) : message.length),
            message.data ? message.data : "");
}

// WebGPU objects belong to the main thread. A call from any other thread (the
// game's, reaching the presenter) runs there while the caller waits.
template <class F> auto on_main(F &&f) -> decltype(f()) {
    using R = decltype(f());
    struct Job {
        F *f;
        R *out;
        static void run(void *arg) {
            Job *j = static_cast<Job *>(arg);
            *j->out = (*j->f)();
        }
    };
    R out{};
    Job job{&f, &out};
    emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(),
                          &Job::run, &job);
    return out;
}
template <class F> void on_main_void(F &&f) {
    struct Job {
        F *f;
        static void run(void *arg) {
            (*static_cast<Job *>(arg)->f)();
        }
    };
    Job job{&f};
    emscripten_proxy_sync(emscripten_proxy_get_system_queue(), emscripten_main_runtime_thread_id(),
                          &Job::run, &job);
}
bool off_main() {
    return !emscripten_is_main_runtime_thread();
}

} // namespace

std::unique_ptr<WebGpuDevice> WebGpuDevice::create() {
    std::unique_ptr<WebGpuDevice> d(new WebGpuDevice());
    d->instance_ = wgpuCreateInstance(nullptr);
    d->device_ = emscripten_webgpu_get_device();
    if (!d->device_) {
        fprintf(stderr, "gpu/webgpu: the page provided no device\n");
        return nullptr;
    }
    d->queue_ = wgpuDeviceGetQueue(d->device_);
    wgpuDeviceGetLimits(d->device_, &d->limits_);
    d->render_layout_ = d->make_layout(false);
    d->compute_layout_ = d->make_layout(true);
    WGPUPipelineLayoutDescriptor pl = WGPU_PIPELINE_LAYOUT_DESCRIPTOR_INIT;
    pl.bindGroupLayoutCount = 1;
    pl.bindGroupLayouts = &d->render_layout_;
    d->render_pipeline_layout_ = wgpuDeviceCreatePipelineLayout(d->device_, &pl);
    pl.bindGroupLayouts = &d->compute_layout_;
    d->compute_pipeline_layout_ = wgpuDeviceCreatePipelineLayout(d->device_, &pl);

    WGPUBufferDescriptor bd = WGPU_BUFFER_DESCRIPTOR_INIT;
    bd.size = 4096;
    bd.usage = WGPUBufferUsage_Storage | WGPUBufferUsage_CopyDst;
    d->dummy_buffer_ = wgpuDeviceCreateBuffer(d->device_, &bd);
    WGPUTextureDescriptor td = WGPU_TEXTURE_DESCRIPTOR_INIT;
    td.size = {1, 1, 1};
    td.format = WGPUTextureFormat_RGBA8Unorm;
    td.usage = WGPUTextureUsage_TextureBinding | WGPUTextureUsage_CopyDst;
    d->dummy_texture_ = wgpuDeviceCreateTexture(d->device_, &td);
    d->dummy_view_ = wgpuTextureCreateView(d->dummy_texture_, nullptr);
    const uint8_t white[4] = {255, 255, 255, 255};
    WGPUTexelCopyTextureInfo dst = WGPU_TEXEL_COPY_TEXTURE_INFO_INIT;
    dst.texture = d->dummy_texture_;
    WGPUTexelCopyBufferLayout layout = WGPU_TEXEL_COPY_BUFFER_LAYOUT_INIT;
    layout.bytesPerRow = 4;
    WGPUExtent3D one = {1, 1, 1};
    wgpuQueueWriteTexture(d->queue_, &dst, white, 4, &layout, &one);
    d->dummy_sampler_ = d->sampler_for(SamplerState{});
    return d;
}

WebGpuDevice::~WebGpuDevice() {
    // The page outlives the program; nothing needs tearing down.
}

WGPUBindGroupLayout WebGpuDevice::make_layout(bool compute) {
    std::vector<WGPUBindGroupLayoutEntry> e;
    const WGPUShaderStage vis =
        compute ? WGPUShaderStage_Compute
                : (WGPUShaderStage)(WGPUShaderStage_Vertex | WGPUShaderStage_Fragment);
    for (uint32_t i = 0; i < 8; ++i) {
        WGPUBindGroupLayoutEntry b = WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT;
        b.binding = i;
        b.visibility = vis;
        b.buffer.type = compute && i == 0 ? WGPUBufferBindingType_Storage
                                          : WGPUBufferBindingType_ReadOnlyStorage;
        e.push_back(b);
    }
    for (uint32_t i = 0; i < 4; ++i) {
        WGPUBindGroupLayoutEntry t = WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT;
        t.binding = 16 + i;
        t.visibility = compute ? WGPUShaderStage_Compute : WGPUShaderStage_Fragment;
        t.texture.sampleType = WGPUTextureSampleType_Float;
        t.texture.viewDimension = WGPUTextureViewDimension_2D;
        e.push_back(t);
        if (!compute) {
            WGPUBindGroupLayoutEntry s = WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT;
            s.binding = 24 + i;
            s.visibility = WGPUShaderStage_Fragment;
            s.sampler.type = WGPUSamplerBindingType_Filtering;
            e.push_back(s);
        }
    }
    WGPUBindGroupLayoutDescriptor d = WGPU_BIND_GROUP_LAYOUT_DESCRIPTOR_INIT;
    d.entryCount = e.size();
    d.entries = e.data();
    return wgpuDeviceCreateBindGroupLayout(device_, &d);
}

bool WebGpuDevice::has_feature(WGPUFeatureName f) const {
    return wgpuDeviceHasFeature(device_, f);
}

// ---------------------------------------------------------------- textures

Texture WebGpuDevice::create_texture(const TextureDesc &desc) {
    if (off_main())
        return on_main([&] { return create_texture(desc); });
    if (desc.width <= 0 || desc.height <= 0)
        return {};
    Tex t;
    t.desc = desc;
    int levels = 1;
    if (desc.mip_levels > 1)
        for (int w = desc.width, h = desc.height; w > 1 || h > 1;
             w = std::max(1, w / 2), h = std::max(1, h / 2))
            ++levels;
    t.desc.mip_levels = levels;
    WGPUTextureDescriptor td = WGPU_TEXTURE_DESCRIPTOR_INIT;
    td.size = {uint32_t(desc.width), uint32_t(desc.height), 1};
    td.format = wgpu_format(desc.format);
    td.mipLevelCount = uint32_t(levels);
    td.usage =
        WGPUTextureUsage_TextureBinding | WGPUTextureUsage_CopyDst | WGPUTextureUsage_CopySrc;
    if (desc.usage & UsageRenderTarget)
        td.usage |= WGPUTextureUsage_RenderAttachment;
    t.texture = wgpuDeviceCreateTexture(device_, &td);
    if (!t.texture)
        return {};
    t.view = wgpuTextureCreateView(t.texture, nullptr);
    t.bytes = uint64_t(desc.width) * desc.height * bytes_per_pixel(desc.format);
    uint64_t id = next_id_++;
    textures_[id] = t;
    return {id};
}

Texture WebGpuDevice::import_texture(WGPUTexture texture, WGPUTextureView view,
                                     const TextureDesc &desc) {
    if (off_main())
        return on_main([&] { return import_texture(texture, view, desc); });
    Tex t;
    t.texture = texture;
    t.view = view;
    t.desc = desc;
    t.external = true;
    uint64_t id = next_id_++;
    textures_[id] = t;
    return {id};
}

bool WebGpuDevice::upload(Texture tex, Region region, const void *bytes, int pitch, int level) {
    if (off_main())
        return on_main([&] { return upload(tex, region, bytes, pitch, level); });
    auto it = textures_.find(tex.id);
    if (it == textures_.end() || !bytes || region.w <= 0 || region.h <= 0)
        return false;
    const Tex &t = it->second;
    const int bpp = bytes_per_pixel(t.desc.format);
    WGPUTexelCopyTextureInfo dst = WGPU_TEXEL_COPY_TEXTURE_INFO_INIT;
    dst.texture = t.texture;
    dst.mipLevel = uint32_t(level);
    dst.origin = {uint32_t(region.x), uint32_t(region.y), 0};
    WGPUTexelCopyBufferLayout layout = WGPU_TEXEL_COPY_BUFFER_LAYOUT_INIT;
    layout.bytesPerRow = uint32_t(pitch);
    WGPUExtent3D size = {uint32_t(region.w), uint32_t(region.h), 1};
    const size_t total = size_t(pitch) * (region.h - 1) + size_t(region.w) * bpp;
    wgpuQueueWriteTexture(queue_, &dst, bytes, total, &layout, &size);
    return true;
}

bool WebGpuDevice::readback(Texture, Region, void *, int) {
    return false; // the browser maps buffers only asynchronously
}

void WebGpuDevice::destroy(Texture tex) {
    if (off_main())
        return on_main_void([&] { destroy(tex); });
    auto it = textures_.find(tex.id);
    if (it == textures_.end())
        return;
    Tex t = it->second;
    textures_.erase(it);
    if (t.external)
        return;
    // A texture recorded into a command buffer stays valid until that buffer
    // is submitted: WebGPU keeps it alive, so releasing our reference is safe.
    wgpuTextureViewRelease(t.view);
    wgpuTextureRelease(t.texture);
}

TextureDesc WebGpuDevice::describe(Texture tex) {
    if (off_main())
        return on_main([&] { return describe(tex); });
    auto it = textures_.find(tex.id);
    return it == textures_.end() ? TextureDesc{} : it->second.desc;
}

uint64_t WebGpuDevice::allocated_bytes(Texture tex) {
    if (off_main())
        return on_main([&] { return allocated_bytes(tex); });
    auto it = textures_.find(tex.id);
    return it == textures_.end() ? 0 : it->second.bytes;
}

// ----------------------------------------------------------------- buffers

Buffer WebGpuDevice::create_buffer(uint64_t bytes, const void *contents) {
    if (off_main())
        return on_main([&] { return create_buffer(bytes, contents); });
    Buf b;
    b.bytes = std::max<uint64_t>(round_up(bytes, 4), 16);
    WGPUBufferDescriptor bd = WGPU_BUFFER_DESCRIPTOR_INIT;
    bd.size = b.bytes;
    bd.usage = WGPUBufferUsage_Storage | WGPUBufferUsage_CopyDst | WGPUBufferUsage_CopySrc |
               WGPUBufferUsage_Vertex;
    b.buffer = wgpuDeviceCreateBuffer(device_, &bd);
    if (!b.buffer)
        return {};
    if (contents)
        wgpuQueueWriteBuffer(queue_, b.buffer, 0, contents, size_t(bytes));
    uint64_t id = next_id_++;
    buffers_[id] = b;
    return {id};
}

void WebGpuDevice::update(Buffer b, uint64_t offset, const void *bytes, uint64_t count) {
    if (off_main())
        return on_main_void([&] { update(b, offset, bytes, count); });
    auto it = buffers_.find(b.id);
    if (it == buffers_.end() || !bytes || offset + count > it->second.bytes)
        return;
    wgpuQueueWriteBuffer(queue_, it->second.buffer, offset, bytes, size_t(count));
}

const void *WebGpuDevice::map_read(Buffer) {
    return nullptr;
}

uint64_t WebGpuDevice::buffer_bytes(Buffer b) {
    if (off_main())
        return on_main([&] { return buffer_bytes(b); });
    auto it = buffers_.find(b.id);
    return it == buffers_.end() ? 0 : it->second.bytes;
}

void WebGpuDevice::destroy(Buffer b) {
    if (off_main())
        return on_main_void([&] { destroy(b); });
    auto it = buffers_.find(b.id);
    if (it == buffers_.end())
        return;
    wgpuBufferRelease(it->second.buffer);
    buffers_.erase(it);
}

WebGpuDevice::Binding WebGpuDevice::stage_bytes(const void *bytes, uint64_t count) {
    const uint64_t align = std::max<uint64_t>(limits_.minStorageBufferOffsetAlignment, 4);
    const uint64_t size = round_up(count, 4);
    if (size > kRingChunk)
        return {};
    for (;;) {
        if (ring_chunk_ < ring_.size()) {
            const uint64_t at = round_up(ring_used_, align);
            if (at + size <= kRingChunk) {
                ring_used_ = at + size;
                wgpuQueueWriteBuffer(queue_, ring_[ring_chunk_], at, bytes, size_t(count));
                if (size != count) {
                    const uint8_t zero[4] = {};
                    wgpuQueueWriteBuffer(queue_, ring_[ring_chunk_], at + count, zero,
                                         size_t(size - count));
                }
                return {ring_[ring_chunk_], at, size};
            }
            ++ring_chunk_;
            ring_used_ = 0;
            continue;
        }
        WGPUBufferDescriptor bd = WGPU_BUFFER_DESCRIPTOR_INIT;
        bd.size = kRingChunk;
        bd.usage = WGPUBufferUsage_Storage | WGPUBufferUsage_CopyDst;
        ring_.push_back(wgpuDeviceCreateBuffer(device_, &bd));
    }
}

// --------------------------------------------------------------- pipelines

WGPUShaderModule WebGpuDevice::module(const std::string &name) {
    auto it = modules_.find(name);
    if (it != modules_.end())
        return it->second;
    for (const wgsl::Program *p = wgsl::kPrograms; p->name; ++p) {
        if (name != p->name)
            continue;
        WGPUShaderSourceWGSL src = WGPU_SHADER_SOURCE_WGSL_INIT;
        src.code = sv(p->source);
        WGPUShaderModuleDescriptor md = WGPU_SHADER_MODULE_DESCRIPTOR_INIT;
        md.nextInChain = &src.chain;
        md.label = sv(p->name);
        WGPUShaderModule m = wgpuDeviceCreateShaderModule(device_, &md);
        modules_[name] = m;
        return m;
    }
    return nullptr;
}

Pipeline WebGpuDevice::render_pipeline(const std::string &shader, const RenderState &state) {
    if (off_main())
        return on_main([&] { return render_pipeline(shader, state); });
    const uint64_t key = (std::hash<std::string>{}(shader) * 1315423911u) ^ state.key();
    auto it = family_by_key_.find(key);
    if (it != family_by_key_.end())
        return {it->second};
    WGPUShaderModule m = module(shader);
    if (!m)
        return {};
    uint64_t id = next_id_++;
    families_[id] = Family{shader, state, m, {}};
    family_by_key_[key] = id;
    return {id};
}

WGPURenderPipeline WebGpuDevice::variant_for(Cmd &c) {
    auto fit = families_.find(c.pipeline);
    if (fit == families_.end())
        return nullptr;
    Family &f = fit->second;
    const uint64_t vkey = uint64_t(c.topology) | uint64_t(c.cull) << 2 |
                          uint64_t(c.depth.compare) << 4 | uint64_t(c.depth.write) << 8 |
                          uint64_t(c.pass_depth) << 9;
    auto vit = f.variants.find(vkey);
    if (vit != f.variants.end())
        return vit->second;
    WGPUColorTargetState targets[2] = {WGPU_COLOR_TARGET_STATE_INIT, WGPU_COLOR_TARGET_STATE_INIT};
    WGPUBlendState blend = WGPU_BLEND_STATE_INIT;
    blend.color = {WGPUBlendOperation_Add, blend_factor(f.state.src_rgb),
                   blend_factor(f.state.dst_rgb)};
    blend.alpha = {WGPUBlendOperation_Add, blend_factor(f.state.src_alpha),
                   blend_factor(f.state.dst_alpha)};
    for (int i = 0; i < f.state.color_count; ++i) {
        targets[i].format = wgpu_format(f.state.color_format[i]);
        targets[i].blend = f.state.blend_enabled ? &blend : nullptr;
        targets[i].writeMask =
            f.state.write_color ? WGPUColorWriteMask_All : WGPUColorWriteMask_None;
    }
    WGPUFragmentState fs = WGPU_FRAGMENT_STATE_INIT;
    fs.module = f.module;
    fs.entryPoint = sv("fs_main");
    fs.targetCount = size_t(f.state.color_count);
    fs.targets = targets;
    WGPUDepthStencilState ds = WGPU_DEPTH_STENCIL_STATE_INIT;
    ds.format = WGPUTextureFormat_Depth32Float;
    const bool test = c.depth.compare != Compare::Always || c.depth.write;
    ds.depthCompare = test ? compare_fn(c.depth.compare) : WGPUCompareFunction_Always;
    ds.depthWriteEnabled = c.depth.write ? WGPUOptionalBool_True : WGPUOptionalBool_False;
    WGPURenderPipelineDescriptor pd = WGPU_RENDER_PIPELINE_DESCRIPTOR_INIT;
    pd.label = sv(f.shader.c_str());
    pd.layout = render_pipeline_layout_;
    pd.vertex.module = f.module;
    pd.vertex.entryPoint = sv("vs_main");
    pd.primitive.topology = topology_of(c.topology);
    pd.primitive.frontFace = WGPUFrontFace_CW; // as the Metal backend's winding
    pd.primitive.cullMode = c.cull == Cull::None    ? WGPUCullMode_None
                            : c.cull == Cull::Front ? WGPUCullMode_Front
                                                    : WGPUCullMode_Back;
    pd.depthStencil = c.pass_depth ? &ds : nullptr;
    pd.fragment = &fs;
    WGPURenderPipeline p = wgpuDeviceCreateRenderPipeline(device_, &pd);
    f.variants[vkey] = p;
    return p;
}

Pipeline WebGpuDevice::compute_pipeline(const std::string &shader) {
    if (off_main())
        return on_main([&] { return compute_pipeline(shader); });
    auto it = compute_by_name_.find(shader);
    if (it != compute_by_name_.end())
        return {it->second};
    WGPUShaderModule m = module(shader);
    if (!m)
        return {};
    WGPUComputePipelineDescriptor cd = WGPU_COMPUTE_PIPELINE_DESCRIPTOR_INIT;
    cd.label = sv(shader.c_str());
    cd.layout = compute_pipeline_layout_;
    cd.compute.module = m;
    cd.compute.entryPoint = sv("cs_main");
    ComputePipe cp;
    cp.pipeline = wgpuDeviceCreateComputePipeline(device_, &cd);
    if (!cp.pipeline)
        return {};
    uint64_t id = next_id_++;
    computes_[id] = cp;
    compute_by_name_[shader] = id;
    return {id};
}

int WebGpuDevice::thread_execution_width(Pipeline) {
    return 256; // the shared-memory reduction: one lane per group
}

WGPUSampler WebGpuDevice::sampler_for(const SamplerState &s) {
    auto addr = [](Address a) {
        switch (a) {
        case Address::Repeat:
            return WGPUAddressMode_Repeat;
        case Address::MirrorRepeat:
            return WGPUAddressMode_MirrorRepeat;
        default:
            return WGPUAddressMode_ClampToEdge; // WebGPU has no border mode
        }
    };
    const int aniso = std::min(16, std::max(1, s.anisotropy));
    const uint64_t key = uint64_t(s.u) | uint64_t(s.v) << 3 | uint64_t(s.mag) << 6 |
                         uint64_t(s.min) << 7 | uint64_t(s.mip) << 8 | uint64_t(aniso) << 10;
    auto it = samplers_.find(key);
    if (it != samplers_.end())
        return it->second;
    WGPUSamplerDescriptor sd = WGPU_SAMPLER_DESCRIPTOR_INIT;
    sd.addressModeU = addr(s.u);
    sd.addressModeV = addr(s.v);
    sd.addressModeW = WGPUAddressMode_ClampToEdge;
    sd.magFilter = s.mag == Filter::Linear ? WGPUFilterMode_Linear : WGPUFilterMode_Nearest;
    sd.minFilter = s.min == Filter::Linear ? WGPUFilterMode_Linear : WGPUFilterMode_Nearest;
    sd.mipmapFilter =
        s.mip == MipFilter::Linear ? WGPUMipmapFilterMode_Linear : WGPUMipmapFilterMode_Nearest;
    sd.lodMaxClamp = s.mip == MipFilter::None ? 0.25f : 32.0f;
    // Anisotropy requires linear filtering throughout.
    sd.maxAnisotropy = (aniso > 1 && s.mag == Filter::Linear && s.min == Filter::Linear &&
                        s.mip == MipFilter::Linear)
                           ? uint16_t(aniso)
                           : 1;
    WGPUSampler out = wgpuDeviceCreateSampler(device_, &sd);
    samplers_[key] = out;
    return out;
}

// ------------------------------------------------------------ command buffers

WebGpuDevice::Cmd *WebGpuDevice::cmd(CommandBuffer cb) {
    auto it = recording_.find(cb.id);
    return it == recording_.end() ? nullptr : it->second.get();
}

CommandBuffer WebGpuDevice::begin() {
    if (off_main())
        return on_main([&] { return begin(); });
    auto c = std::make_unique<Cmd>();
    c->encoder = wgpuDeviceCreateCommandEncoder(device_, nullptr);
    if (!c->encoder)
        return {};
    uint64_t id = next_id_++;
    recording_[id] = std::move(c);
    status_[id] = CommandStatus::Pending;
    ++recording_count_;
    return {id};
}

void WebGpuDevice::end_passes(Cmd &c) {
    if (c.pass) {
        wgpuRenderPassEncoderEnd(c.pass);
        wgpuRenderPassEncoderRelease(c.pass);
        c.pass = nullptr;
    }
    if (c.compute) {
        wgpuComputePassEncoderEnd(c.compute);
        wgpuComputePassEncoderRelease(c.compute);
        c.compute = nullptr;
    }
    c.bound = nullptr;
}

void WebGpuDevice::begin_render_pass(CommandBuffer cb, const RenderPass &pass) {
    if (off_main())
        return on_main_void([&] { begin_render_pass(cb, pass); });
    Cmd *c = cmd(cb);
    if (!c)
        return;
    end_passes(*c);
    WGPURenderPassColorAttachment color[2] = {WGPU_RENDER_PASS_COLOR_ATTACHMENT_INIT,
                                              WGPU_RENDER_PASS_COLOR_ATTACHMENT_INIT};
    int w = 0, h = 0;
    for (int i = 0; i < pass.color_count; ++i) {
        auto t = textures_.find(pass.color[i].texture.id);
        if (t == textures_.end())
            return;
        color[i].view = t->second.view;
        color[i].loadOp = pass.color[i].load == Load::Clear ? WGPULoadOp_Clear : WGPULoadOp_Load;
        color[i].storeOp =
            pass.color[i].store == Store::Store ? WGPUStoreOp_Store : WGPUStoreOp_Discard;
        color[i].clearValue = {pass.color[i].clear[0], pass.color[i].clear[1],
                               pass.color[i].clear[2], pass.color[i].clear[3]};
        w = t->second.desc.width;
        h = t->second.desc.height;
    }
    WGPURenderPassDepthStencilAttachment depth = WGPU_RENDER_PASS_DEPTH_STENCIL_ATTACHMENT_INIT;
    c->pass_depth = pass.depth.texture.id != 0;
    if (c->pass_depth) {
        auto t = textures_.find(pass.depth.texture.id);
        if (t == textures_.end())
            return;
        depth.view = t->second.view;
        depth.depthLoadOp = pass.depth.load == Load::Clear ? WGPULoadOp_Clear : WGPULoadOp_Load;
        depth.depthStoreOp =
            pass.depth.store == Store::Store ? WGPUStoreOp_Store : WGPUStoreOp_Discard;
        depth.depthClearValue = pass.depth.clear;
        if (!w) {
            w = t->second.desc.width;
            h = t->second.desc.height;
        }
    }
    WGPURenderPassDescriptor rp = WGPU_RENDER_PASS_DESCRIPTOR_INIT;
    rp.colorAttachmentCount = size_t(pass.color_count);
    rp.colorAttachments = color;
    rp.depthStencilAttachment = c->pass_depth ? &depth : nullptr;
    c->pass = wgpuCommandEncoderBeginRenderPass(c->encoder, &rp);
    c->pass_width = w;
    c->pass_height = h;
    c->bound = nullptr;
    c->bindings_dirty = true;
    c->viewport = {0, 0, double(w), double(h), 0, 1};
    c->viewport_set = true;
    c->cull = Cull::None;
    c->depth = DepthState{};
}

void WebGpuDevice::end_render_pass(CommandBuffer cb) {
    if (off_main())
        return on_main_void([&] { end_render_pass(cb); });
    if (Cmd *c = cmd(cb))
        end_passes(*c);
}

void WebGpuDevice::begin_compute_pass(CommandBuffer cb) {
    if (off_main())
        return on_main_void([&] { begin_compute_pass(cb); });
    Cmd *c = cmd(cb);
    if (!c)
        return;
    end_passes(*c);
    c->compute = wgpuCommandEncoderBeginComputePass(c->encoder, nullptr);
    c->bindings_dirty = true;
}

void WebGpuDevice::end_compute_pass(CommandBuffer cb) {
    if (off_main())
        return on_main_void([&] { end_compute_pass(cb); });
    if (Cmd *c = cmd(cb))
        end_passes(*c);
}

void WebGpuDevice::set_pipeline(CommandBuffer cb, Pipeline p) {
    if (off_main())
        return on_main_void([&] { set_pipeline(cb, p); });
    if (Cmd *c = cmd(cb)) {
        c->pipeline = p.id;
        c->bound = nullptr;
    }
}
void WebGpuDevice::set_depth(CommandBuffer cb, const DepthState &d) {
    if (off_main())
        return on_main_void([&] { set_depth(cb, d); });
    if (Cmd *c = cmd(cb)) {
        c->depth = d;
        c->bound = nullptr;
    }
}
void WebGpuDevice::set_cull(CommandBuffer cb, Cull cull) {
    if (off_main())
        return on_main_void([&] { set_cull(cb, cull); });
    if (Cmd *c = cmd(cb)) {
        c->cull = cull;
        c->bound = nullptr;
    }
}
void WebGpuDevice::set_viewport(CommandBuffer cb, const Viewport &v) {
    if (off_main())
        return on_main_void([&] { set_viewport(cb, v); });
    if (Cmd *c = cmd(cb)) {
        c->viewport = v;
        c->viewport_set = true;
    }
}
void WebGpuDevice::set_vertex_buffer(CommandBuffer cb, int slot, Buffer b, uint64_t offset) {
    if (off_main())
        return on_main_void([&] { set_vertex_buffer(cb, slot, b, offset); });
    set_buffer(cb, Stage::Vertex, slot, b, offset);
}
void WebGpuDevice::set_bytes(CommandBuffer cb, Stage stage, int slot, const void *bytes,
                             uint64_t count) {
    if (off_main())
        return on_main_void([&] { set_bytes(cb, stage, slot, bytes, count); });
    Cmd *c = cmd(cb);
    const int i =
        stage == Stage::Compute ? (slot >= 0 && slot < 8 ? slot : -1) : binding_index(stage, slot);
    if (!c || i < 0 || !bytes || !count)
        return;
    c->buffers[i] = stage_bytes(bytes, count);
    c->bindings_dirty = true;
}
void WebGpuDevice::set_buffer(CommandBuffer cb, Stage stage, int slot, Buffer b, uint64_t offset) {
    if (off_main())
        return on_main_void([&] { set_buffer(cb, stage, slot, b, offset); });
    Cmd *c = cmd(cb);
    const int i =
        stage == Stage::Compute ? (slot >= 0 && slot < 8 ? slot : -1) : binding_index(stage, slot);
    auto it = buffers_.find(b.id);
    if (!c || i < 0 || it == buffers_.end() || offset >= it->second.bytes)
        return;
    c->buffers[i] = {it->second.buffer, offset, (it->second.bytes - offset) & ~3ull};
    c->bindings_dirty = true;
}
void WebGpuDevice::set_texture(CommandBuffer cb, Stage stage, int slot, Texture t) {
    if (off_main())
        return on_main_void([&] { set_texture(cb, stage, slot, t); });
    Cmd *c = cmd(cb);
    auto it = textures_.find(t.id);
    if (!c || slot < 0 || slot > 3 || it == textures_.end())
        return;
    c->textures[slot] = it->second.view;
    c->bindings_dirty = true;
}
void WebGpuDevice::set_sampler(CommandBuffer cb, Stage stage, int slot, const SamplerState &s) {
    if (off_main())
        return on_main_void([&] { set_sampler(cb, stage, slot, s); });
    Cmd *c = cmd(cb);
    if (!c || slot < 0 || slot > 3)
        return;
    c->samplers[slot] = sampler_for(s);
    c->bindings_dirty = true;
}

void WebGpuDevice::bind(Cmd &c, bool compute) {
    if (!c.bindings_dirty)
        return;
    std::vector<WGPUBindGroupEntry> e;
    for (uint32_t i = 0; i < 8; ++i) {
        WGPUBindGroupEntry b = WGPU_BIND_GROUP_ENTRY_INIT;
        b.binding = i;
        if (c.buffers[i].buffer) {
            b.buffer = c.buffers[i].buffer;
            b.offset = c.buffers[i].offset;
            b.size = c.buffers[i].size;
        } else {
            b.buffer = dummy_buffer_;
            b.size = 4096;
        }
        e.push_back(b);
    }
    for (uint32_t i = 0; i < 4; ++i) {
        WGPUBindGroupEntry t = WGPU_BIND_GROUP_ENTRY_INIT;
        t.binding = 16 + i;
        t.textureView = c.textures[i] ? c.textures[i] : dummy_view_;
        e.push_back(t);
        if (!compute) {
            WGPUBindGroupEntry s = WGPU_BIND_GROUP_ENTRY_INIT;
            s.binding = 24 + i;
            s.sampler = c.samplers[i] ? c.samplers[i] : dummy_sampler_;
            e.push_back(s);
        }
    }
    WGPUBindGroupDescriptor d = WGPU_BIND_GROUP_DESCRIPTOR_INIT;
    d.layout = compute ? compute_layout_ : render_layout_;
    d.entryCount = e.size();
    d.entries = e.data();
    WGPUBindGroup group = wgpuDeviceCreateBindGroup(device_, &d);
    if (compute)
        wgpuComputePassEncoderSetBindGroup(c.compute, 0, group, 0, nullptr);
    else
        wgpuRenderPassEncoderSetBindGroup(c.pass, 0, group, 0, nullptr);
    wgpuBindGroupRelease(group);
    c.bindings_dirty = false;
}

void WebGpuDevice::draw(CommandBuffer cb, Primitive primitive, int first, int count) {
    if (off_main())
        return on_main_void([&] { draw(cb, primitive, first, count); });
    Cmd *c = cmd(cb);
    if (!c || !c->pass || count <= 0)
        return;
    if (c->topology != primitive) {
        c->topology = primitive;
        c->bound = nullptr;
    }
    if (!c->bound) {
        c->bound = variant_for(*c);
        if (!c->bound)
            return;
        wgpuRenderPassEncoderSetPipeline(c->pass, c->bound);
        c->viewport_set = true;
    }
    if (c->viewport_set) {
        const Viewport &v = c->viewport;
        wgpuRenderPassEncoderSetViewport(c->pass, float(v.x), float(v.y), float(v.w), float(v.h),
                                         float(v.near_z), float(v.far_z));
        c->viewport_set = false;
    }
    bind(*c, false);
    wgpuRenderPassEncoderDraw(c->pass, uint32_t(count), 1, uint32_t(first), 0);
}

void WebGpuDevice::dispatch_threads(CommandBuffer cb, int tx, int ty, int gx, int gy) {
    if (off_main())
        return on_main_void([&] { dispatch_threads(cb, tx, ty, gx, gy); });
    if (gx <= 0 || gy <= 0)
        return;
    dispatch_groups(cb, (tx + gx - 1) / gx, (ty + gy - 1) / gy, gx, gy);
}

void WebGpuDevice::dispatch_groups(CommandBuffer cb, int groups_x, int groups_y, int gx, int gy) {
    if (off_main())
        return on_main_void([&] { dispatch_groups(cb, groups_x, groups_y, gx, gy); });
    Cmd *c = cmd(cb);
    if (!c || !c->compute || groups_x <= 0 || groups_y <= 0)
        return;
    auto it = computes_.find(c->pipeline);
    if (it == computes_.end())
        return;
    wgpuComputePassEncoderSetPipeline(c->compute, it->second.pipeline);
    c->bindings_dirty = true;
    bind(*c, true);
    wgpuComputePassEncoderDispatchWorkgroups(c->compute, uint32_t(groups_x), uint32_t(groups_y), 1);
}

void WebGpuDevice::blit(CommandBuffer cb, Texture src, Region src_region, Texture dst, int dst_x,
                        int dst_y) {
    if (off_main())
        return on_main_void([&] { blit(cb, src, src_region, dst, dst_x, dst_y); });
    Cmd *c = cmd(cb);
    auto s = textures_.find(src.id), d = textures_.find(dst.id);
    if (!c || s == textures_.end() || d == textures_.end())
        return;
    end_passes(*c);
    WGPUTexelCopyTextureInfo from = WGPU_TEXEL_COPY_TEXTURE_INFO_INIT;
    from.texture = s->second.texture;
    from.origin = {uint32_t(src_region.x), uint32_t(src_region.y), 0};
    WGPUTexelCopyTextureInfo to = WGPU_TEXEL_COPY_TEXTURE_INFO_INIT;
    to.texture = d->second.texture;
    to.origin = {uint32_t(dst_x), uint32_t(dst_y), 0};
    WGPUExtent3D size = {uint32_t(src_region.w), uint32_t(src_region.h), 1};
    wgpuCommandEncoderCopyTextureToTexture(c->encoder, &from, &to, &size);
}

void WebGpuDevice::copy_buffer_to_texture(CommandBuffer cb, Buffer src, uint64_t offset, int pitch,
                                          Texture dst, Region dst_region) {
    if (off_main())
        return on_main_void(
            [&] { copy_buffer_to_texture(cb, src, offset, pitch, dst, dst_region); });
    Cmd *c = cmd(cb);
    auto b = buffers_.find(src.id);
    auto d = textures_.find(dst.id);
    if (!c || b == buffers_.end() || d == textures_.end())
        return;
    end_passes(*c);
    WGPUTexelCopyBufferInfo from = WGPU_TEXEL_COPY_BUFFER_INFO_INIT;
    from.buffer = b->second.buffer;
    from.layout.offset = offset;
    from.layout.bytesPerRow = uint32_t(pitch);
    WGPUTexelCopyTextureInfo to = WGPU_TEXEL_COPY_TEXTURE_INFO_INIT;
    to.texture = d->second.texture;
    to.origin = {uint32_t(dst_region.x), uint32_t(dst_region.y), 0};
    WGPUExtent3D size = {uint32_t(dst_region.w), uint32_t(dst_region.h), 1};
    wgpuCommandEncoderCopyBufferToTexture(c->encoder, &from, &to, &size);
}

void WebGpuDevice::copy_texture_to_buffer(CommandBuffer cb, Texture src, Region src_region,
                                          Buffer dst, uint64_t offset, int pitch) {
    if (off_main())
        return on_main_void(
            [&] { copy_texture_to_buffer(cb, src, src_region, dst, offset, pitch); });
    Cmd *c = cmd(cb);
    auto s = textures_.find(src.id);
    auto b = buffers_.find(dst.id);
    if (!c || s == textures_.end() || b == buffers_.end())
        return;
    end_passes(*c);
    WGPUTexelCopyTextureInfo from = WGPU_TEXEL_COPY_TEXTURE_INFO_INIT;
    from.texture = s->second.texture;
    from.origin = {uint32_t(src_region.x), uint32_t(src_region.y), 0};
    WGPUTexelCopyBufferInfo to = WGPU_TEXEL_COPY_BUFFER_INFO_INIT;
    to.buffer = b->second.buffer;
    to.layout.offset = offset;
    to.layout.bytesPerRow = uint32_t(pitch);
    WGPUExtent3D size = {uint32_t(src_region.w), uint32_t(src_region.h), 1};
    wgpuCommandEncoderCopyTextureToBuffer(c->encoder, &from, &to, &size);
}

void WebGpuDevice::generate_mipmaps(CommandBuffer, Texture) {
    // WebGPU has no mipmap generation; textures made with a chain keep level 0 only.
}

void WebGpuDevice::on_complete(CommandBuffer cb, std::function<void(CommandStatus, double)> fn) {
    if (off_main())
        return on_main_void([&] { on_complete(cb, std::move(fn)); });
    if (Cmd *c = cmd(cb)) {
        c->callbacks.push_back(std::move(fn));
        return;
    }
    fn(CommandStatus::Completed, 0.0);
}

void WebGpuDevice::after_submitted(std::function<void()> fn) {
    auto *box = new std::function<void()>(std::move(fn));
    WGPUQueueWorkDoneCallbackInfo info = WGPU_QUEUE_WORK_DONE_CALLBACK_INFO_INIT;
    info.mode = WGPUCallbackMode_AllowSpontaneous;
    info.callback = [](WGPUQueueWorkDoneStatus, WGPUStringView, void *u1, void *) {
        auto *f = static_cast<std::function<void()> *>(u1);
        later(std::move(*f));
        delete f;
    };
    info.userdata1 = box;
    wgpuQueueOnSubmittedWorkDone(queue_, info);
}
void WebGpuDevice::later(std::function<void()> fn) {
    auto *box = new std::function<void()>(std::move(fn));
    emscripten_async_call(
        [](void *u) {
            auto *f = static_cast<std::function<void()> *>(u);
            (*f)();
            delete f;
        },
        box, 0);
}

void WebGpuDevice::commit(CommandBuffer cb) {
    if (off_main())
        return on_main_void([&] { commit(cb); });
    auto it = recording_.find(cb.id);
    if (it == recording_.end())
        return;
    std::unique_ptr<Cmd> c = std::move(it->second);
    recording_.erase(it);
    end_passes(*c);
    WGPUCommandBuffer buffer = wgpuCommandEncoderFinish(c->encoder, nullptr);
    wgpuCommandEncoderRelease(c->encoder);
    wgpuQueueSubmit(queue_, 1, &buffer);
    wgpuCommandBufferRelease(buffer);
    if (recording_count_ > 0 && --recording_count_ == 0) {
        // Nothing recording can name an earlier ring offset any more.
        ring_chunk_ = 0;
        ring_used_ = 0;
    }
    const double submitted = now_seconds();
    const uint64_t id = cb.id;
    auto callbacks = std::move(c->callbacks);
    after_submitted([this, id, submitted, callbacks = std::move(callbacks)]() {
        status_[id] = CommandStatus::Completed;
        const double ms = (now_seconds() - submitted) * 1000.0;
        for (auto &fn : callbacks)
            fn(CommandStatus::Completed, ms);
        if (status_.size() > 4096)
            status_.clear();
    });
}

void WebGpuDevice::wait(CommandBuffer) {
    // The browser finishes the work once control returns to it.
}

CommandStatus WebGpuDevice::status(CommandBuffer cb) {
    if (off_main())
        return on_main([&] { return status(cb); });
    auto it = status_.find(cb.id);
    return it == status_.end() ? CommandStatus::Completed : it->second;
}

// ---------------------------------------------------------------- swapchain

Swapchain WebGpuDevice::create_swapchain(void *native_surface, int width, int height) {
    if (off_main())
        return on_main([&] { return create_swapchain(native_surface, width, height); });
    const char *selector = native_surface ? static_cast<const char *>(native_surface) : "#canvas";
    WGPUEmscriptenSurfaceSourceCanvasHTMLSelector canvas =
        WGPU_EMSCRIPTEN_SURFACE_SOURCE_CANVAS_HTML_SELECTOR_INIT;
    canvas.selector = sv(selector);
    WGPUSurfaceDescriptor sd = WGPU_SURFACE_DESCRIPTOR_INIT;
    sd.nextInChain = &canvas.chain;
    Chain c;
    c.surface = wgpuInstanceCreateSurface(instance_, &sd);
    if (!c.surface)
        return {};
    WGPUSurfaceCapabilities caps = WGPU_SURFACE_CAPABILITIES_INIT;
    wgpuSurfaceGetCapabilities(c.surface, nullptr, &caps);
    c.format = caps.formatCount ? caps.formats[0] : WGPUTextureFormat_BGRA8Unorm;
    if (c.format != WGPUTextureFormat_BGRA8Unorm && c.format != WGPUTextureFormat_RGBA8Unorm)
        c.format = WGPUTextureFormat_BGRA8Unorm;
    wgpuSurfaceCapabilitiesFreeMembers(caps);
    uint64_t id = next_id_++;
    chains_[id] = c;
    resize({id}, width, height);
    return {id};
}

void WebGpuDevice::resize(Swapchain s, int width, int height) {
    if (off_main())
        return on_main_void([&] { resize(s, width, height); });
    auto it = chains_.find(s.id);
    if (it == chains_.end() || width <= 0 || height <= 0)
        return;
    Chain &c = it->second;
    c.width = width;
    c.height = height;
    WGPUSurfaceConfiguration cfg = WGPU_SURFACE_CONFIGURATION_INIT;
    cfg.device = device_;
    cfg.format = c.format;
    cfg.usage = WGPUTextureUsage_RenderAttachment | WGPUTextureUsage_CopyDst;
    cfg.width = uint32_t(width);
    cfg.height = uint32_t(height);
    cfg.alphaMode = WGPUCompositeAlphaMode_Opaque;
    cfg.presentMode = WGPUPresentMode_Fifo;
    wgpuSurfaceConfigure(c.surface, &cfg);
}

Format WebGpuDevice::swapchain_format(Swapchain s) {
    if (off_main())
        return on_main([&] { return swapchain_format(s); });
    auto it = chains_.find(s.id);
    return it == chains_.end() ? Format::BGRA8 : format_of(it->second.format);
}

Texture WebGpuDevice::acquire(Swapchain s) {
    if (off_main())
        return on_main([&] { return acquire(s); });
    auto it = chains_.find(s.id);
    if (it == chains_.end())
        return {};
    Chain &c = it->second;
    WGPUSurfaceTexture st = WGPU_SURFACE_TEXTURE_INIT;
    wgpuSurfaceGetCurrentTexture(c.surface, &st);
    if (!st.texture || (st.status != WGPUSurfaceGetCurrentTextureStatus_SuccessOptimal &&
                        st.status != WGPUSurfaceGetCurrentTextureStatus_SuccessSuboptimal))
        return {};
    Tex t;
    t.texture = st.texture;
    t.view = wgpuTextureCreateView(st.texture, nullptr);
    t.desc.width = c.width;
    t.desc.height = c.height;
    t.desc.format = format_of(c.format);
    t.desc.usage = UsageRenderTarget;
    uint64_t id = next_id_++;
    textures_[id] = t; // owned: released when presented or released
    c.current = id;
    return {id};
}

void WebGpuDevice::release_drawable(Swapchain s, Texture t) {
    if (off_main())
        return on_main_void([&] { release_drawable(s, t); });
    destroy(t);
}

void WebGpuDevice::present(CommandBuffer cb, Swapchain s, Texture t, double min_duration,
                           std::function<void(double)> presented) {
    if (off_main())
        return on_main_void([&] { present(cb, s, t, min_duration, std::move(presented)); });
    // The browser shows the canvas's current texture when this task returns.
    commit(cb);
    destroy(t);
    (void)s;
    if (presented)
        after_submitted([this, presented]() { presented(now_seconds()); });
}

double WebGpuDevice::refresh_period(Swapchain) {
    return 1.0 / 60.0;
}

void WebGpuDevice::destroy(Swapchain s) {
    if (off_main())
        return on_main_void([&] { destroy(s); });
    auto it = chains_.find(s.id);
    if (it == chains_.end())
        return;
    wgpuSurfaceUnconfigure(it->second.surface);
    wgpuSurfaceRelease(it->second.surface);
    chains_.erase(it);
}

double WebGpuDevice::now_seconds() {
    if (off_main())
        return on_main([&] { return now_seconds(); });
    return emscripten_get_now() / 1000.0;
}

std::unique_ptr<Device> webgpu_create_device() {
    return WebGpuDevice::create();
}

} // namespace gpu
