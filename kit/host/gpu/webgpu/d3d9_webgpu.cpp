// d3d9_webgpu.cpp - the Direct3D 9 device's renderer on WebGPU: a D9Backend
// (host/gpu/d3d9_backend.h), driven by host/gpu/d3d9_host.cpp on the
// browser's main thread.
//
// It follows the Vulkan renderer: shaders become WGSL (dx/d3d9_wgsl.h),
// resources are mirrored under the shim's ids, draws are recorded into a
// command encoder that Present submits. WebGPU's differences shape the rest:
//
// - A queue write takes effect when it is made, so writing a buffer or
//   texture the open encoder already draws from submits that encoder first.
// - Nothing can be read back synchronously: read() and read_presented()
//   report nothing; occlusion query results arrive a few frames later.
// - There is no partial clear or scaled copy: both draw with small utility
//   pipelines, as the Metal renderer does.
// - Alpha-only textures are stored as red and swizzled in the shader.
#include "webgpu_device.h"

#include "../../../dx/d3d9_shader.h"
#include "../../../dx/d3d9_wgsl.h"
#include "../../../dx/host_d9.h"
#include "../../../platform/os.h"
#include "../../present.h"
#include "../d3d9_backend.h"
#include "../d3d9_common.h"

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <memory>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

bool log_once(const char *key, const char *fmt, ...) __attribute__((format(printf, 2, 3)));

namespace {

using namespace d9gpu;
using gpu::WebGpuDevice;

WGPUStringView sv(const char *s) {
    return WGPUStringView{s, WGPU_STRLEN};
}

WGPUBlendFactor blend_factor(uint32_t b, bool alpha) {
    switch (b) {
    case 1:
        return WGPUBlendFactor_Zero;
    case 2:
        return WGPUBlendFactor_One;
    case 3:
        return alpha ? WGPUBlendFactor_SrcAlpha : WGPUBlendFactor_Src;
    case 4:
        return alpha ? WGPUBlendFactor_OneMinusSrcAlpha : WGPUBlendFactor_OneMinusSrc;
    case 5:
    case 12:
        return WGPUBlendFactor_SrcAlpha;
    case 6:
    case 13:
        return WGPUBlendFactor_OneMinusSrcAlpha;
    case 7:
        return WGPUBlendFactor_DstAlpha;
    case 8:
        return WGPUBlendFactor_OneMinusDstAlpha;
    case 9:
        return alpha ? WGPUBlendFactor_DstAlpha : WGPUBlendFactor_Dst;
    case 10:
        return alpha ? WGPUBlendFactor_OneMinusDstAlpha : WGPUBlendFactor_OneMinusDst;
    case 11:
        return WGPUBlendFactor_SrcAlphaSaturated;
    case 14:
        return WGPUBlendFactor_Constant;
    case 15:
        return WGPUBlendFactor_OneMinusConstant;
    default:
        return WGPUBlendFactor_One;
    }
}
WGPUBlendOperation blend_op(uint32_t op) {
    switch (op) {
    case 2:
        return WGPUBlendOperation_Subtract;
    case 3:
        return WGPUBlendOperation_ReverseSubtract;
    case 4:
        return WGPUBlendOperation_Min;
    case 5:
        return WGPUBlendOperation_Max;
    default:
        return WGPUBlendOperation_Add;
    }
}
WGPUCompareFunction compare_fn(uint32_t f) {
    switch (f) {
    case 1:
        return WGPUCompareFunction_Never;
    case 2:
        return WGPUCompareFunction_Less;
    case 3:
        return WGPUCompareFunction_Equal;
    case 4:
        return WGPUCompareFunction_LessEqual;
    case 5:
        return WGPUCompareFunction_Greater;
    case 6:
        return WGPUCompareFunction_NotEqual;
    case 7:
        return WGPUCompareFunction_GreaterEqual;
    default:
        return WGPUCompareFunction_Always;
    }
}
WGPUStencilOperation stencil_op(uint32_t op) {
    switch (op) {
    case 2:
        return WGPUStencilOperation_Zero;
    case 3:
        return WGPUStencilOperation_Replace;
    case 4:
        return WGPUStencilOperation_IncrementClamp;
    case 5:
        return WGPUStencilOperation_DecrementClamp;
    case 6:
        return WGPUStencilOperation_Invert;
    case 7:
        return WGPUStencilOperation_IncrementWrap;
    case 8:
        return WGPUStencilOperation_DecrementWrap;
    default:
        return WGPUStencilOperation_Keep;
    }
}
WGPUAddressMode address_mode(uint32_t a) {
    switch (a) {
    case 2:
        return WGPUAddressMode_MirrorRepeat;
    case 3:
    case 4:
    case 5:
        return WGPUAddressMode_ClampToEdge; // no border or mirror-once modes
    default:
        return WGPUAddressMode_Repeat;
    }
}

// A D3DDECLTYPE as a WebGPU vertex format, and the scale back to D3D's value.
bool vertex_format(uint32_t type, WGPUVertexFormat *fmt, float scale[4]) {
    for (int k = 0; k < 4; ++k)
        scale[k] = 1.0f;
    switch (type) {
    case 0:
        *fmt = WGPUVertexFormat_Float32;
        return true;
    case 1:
        *fmt = WGPUVertexFormat_Float32x2;
        return true;
    case 2:
        *fmt = WGPUVertexFormat_Float32x3;
        return true;
    case 3:
        *fmt = WGPUVertexFormat_Float32x4;
        return true;
    case 4:
        *fmt = WGPUVertexFormat_Unorm8x4BGRA;
        return true;
    case 5:
        *fmt = WGPUVertexFormat_Unorm8x4;
        for (int k = 0; k < 4; ++k)
            scale[k] = 255.0f;
        return true;
    case 6:
        *fmt = WGPUVertexFormat_Snorm16x2;
        scale[0] = scale[1] = 32767.0f;
        return true;
    case 7:
        *fmt = WGPUVertexFormat_Snorm16x4;
        for (int k = 0; k < 4; ++k)
            scale[k] = 32767.0f;
        return true;
    case 8:
        *fmt = WGPUVertexFormat_Unorm8x4;
        return true;
    case 9:
        *fmt = WGPUVertexFormat_Snorm16x2;
        return true;
    case 10:
        *fmt = WGPUVertexFormat_Snorm16x4;
        return true;
    case 11:
        *fmt = WGPUVertexFormat_Unorm16x2;
        return true;
    case 12:
        *fmt = WGPUVertexFormat_Unorm16x4;
        return true;
    case 13:
        *fmt = WGPUVertexFormat_Unorm10_10_10_2;
        scale[0] = scale[1] = scale[2] = 1023.0f;
        return true;
    case 15:
        *fmt = WGPUVertexFormat_Float16x2;
        return true;
    case 16:
        *fmt = WGPUVertexFormat_Float16x4;
        return true;
    default:
        return false; // DEC3N has no WebGPU format
    }
}

const char *kUtilitySource = R"WGSL(
struct QuadIn { rect: vec4f, uv: vec4f, z: f32, pad0: f32, pad1: f32, pad2: f32, color: vec4f };
@group(0) @binding(0) var<uniform> q: QuadIn;
@group(0) @binding(1) var tex: texture_2d<f32>;
@group(0) @binding(2) var smp: sampler;
struct V2F { @builtin(position) pos: vec4f, @location(0) uv: vec2f };
@vertex fn quad_vs(@builtin(vertex_index) vid: u32) -> V2F {
    let c = vec2f(f32(vid & 1u), f32((vid >> 1u) & 1u));
    var o: V2F;
    o.pos = vec4f(mix(q.rect.xy, q.rect.zw, c), q.z, 1.0);
    o.uv = mix(q.uv.xy, q.uv.zw, c);
    return o;
}
@fragment fn copy_fs(i: V2F) -> @location(0) vec4f { return textureSample(tex, smp, i.uv); }
@fragment fn clear_fs(i: V2F) -> @location(0) vec4f { return q.color; }
)WGSL";

struct QuadIn {
    float rect[4];
    float uv[4];
    float z, pad0, pad1, pad2;
    float color[4];
};

struct WFmt {
    WGPUTextureFormat format = WGPUTextureFormat_BGRA8Unorm;
    Conv conv = Conv::Unsupported;
    uint32_t bytes = 4;
    bool block = false;
    bool alpha_only = false;
    bool depth = false;
    bool rgba16_to_float = false; // stored as RGBA16F, converted on upload
};

// The kind of texture a stage binds, for the bind group layout.
enum class Slot : uint8_t { None, Float2D, FloatCube, Depth2D };

struct Tex {
    HostD9TextureDesc desc{};
    WFmt info;
    WGPUTexture texture = nullptr;
    WGPUTextureView sample_view = nullptr;
    uint32_t width = 0, height = 0, levels = 1, layers = 1;
    std::unordered_map<uint32_t, WGPUTextureView> targets; // level << 8 | face
    gpu::Texture imported;
    uint64_t used = 0; // the encoder serial that last read or wrote it
    float scale = 1.0f;
    bool cube = false, depth = false;
    WGPUTexture msaa = nullptr;
    WGPUTextureView msaa_view = nullptr;
    uint32_t samples = 1;
};

struct Buf {
    WGPUBuffer buffer = nullptr;
    std::vector<uint8_t> shadow;
    uint64_t used = 0;
};

class WebGpuRenderer final : public D9Backend {
  public:
    const char *name() const override {
        return "WebGPU";
    }

    explicit WebGpuRenderer(WebGpuDevice *d)
        : dev_(d), device_(d->native_device()), queue_(d->native_queue()) {
        bc_ = d->has_feature(WGPUFeatureName_TextureCompressionBC);
        unorm16_ = d->has_feature(WGPUFeatureName_Unorm16TextureFormats);
        float32_filterable_ = d->has_feature(WGPUFeatureName_Float32Filterable);
        depth_format_ = d->has_feature(WGPUFeatureName_Depth32FloatStencil8)
                            ? WGPUTextureFormat_Depth32FloatStencil8
                            : WGPUTextureFormat_Depth24PlusStencil8;
        WGPULimits limits = WGPU_LIMITS_INIT;
        wgpuDeviceGetLimits(device_, &limits);
        uniform_align_ = std::max<uint64_t>(limits.minUniformBufferOffsetAlignment, 16);
        max_dimension_ = limits.maxTextureDimension2D;
        WGPUShaderSourceWGSL src = WGPU_SHADER_SOURCE_WGSL_INIT;
        src.code = sv(kUtilitySource);
        WGPUShaderModuleDescriptor md = WGPU_SHADER_MODULE_DESCRIPTOR_INIT;
        md.nextInChain = &src.chain;
        utility_ = wgpuDeviceCreateShaderModule(device_, &md);
        zero_ = make_buffer(64, WGPUBufferUsage_Vertex);
        placeholder(false);
        placeholder(true);
        placeholder_depth();
        ok_ = utility_ && zero_;
    }

    bool ok() const {
        return ok_;
    }

    // ---- textures ------------------------------------------------------
    void define(const HostD9TextureDesc &d) override {
        Tex &t = textures_[d.id];
        retire(t);
        t = Tex{};
        t.desc = d;
        t.info = format_for(d.format);
        if (t.info.conv == Conv::Unsupported) {
            fprintf(stderr, "d3d9 webgpu: texture format %08x is drawn as BGRA8\n", d.format);
            t.info.conv = Conv::Direct;
        }
        bool depth = (d.usage & HOST_D9_USAGE_DEPTH) || t.info.depth;
        if (depth) {
            t.info = WFmt{};
            t.info.format = depth_format_;
            t.info.conv = Conv::Direct;
            t.info.depth = true;
        }
        const bool cube = d.kind == HOST_D9_TEX_CUBE;
        uint32_t width = d.width ? d.width : 1;
        uint32_t height = cube ? width : (d.height ? d.height : 1);
        bool target = (d.usage & (HOST_D9_USAGE_RENDERTARGET | HOST_D9_USAGE_DEPTH)) || depth;
        if (target && !scale_chosen_ && d.kind == HOST_D9_TEX_2D) {
            scale_chosen_ = true;
            base_rows_ = d.height;
            const float want = wanted_scale();
            if (want > 0)
                scale_ = want;
            fprintf(stderr, "d3d9: render targets at %.2fx the game's size\n", scale_);
        }
        if (target && d.kind == HOST_D9_TEX_2D && scale_ != 1.0f) {
            float s = scale_;
            while (s > 1.0f && (width * s > max_dimension_ || height * s > max_dimension_))
                s -= 0.25f;
            t.scale = std::max(1.0f, s);
            width = (uint32_t)std::lround(width * t.scale);
            height = (uint32_t)std::lround(height * t.scale);
        }
        if (t.info.block) {
            // WebGPU wants block-compressed sizes in whole blocks.
            width = (width + 3) & ~3u;
            height = (height + 3) & ~3u;
        }
        uint32_t max_levels = 1;
        for (uint32_t s = std::max(width, height); s > 1; s >>= 1)
            ++max_levels;
        uint32_t levels = std::max<uint32_t>(1, std::min(d.levels ? d.levels : 1, max_levels));
        if (t.info.block)
            while (levels > 1 && (((width >> (levels - 1)) & 3) || ((height >> (levels - 1)) & 3)))
                --levels;
        t.width = width;
        t.height = height;
        t.levels = levels;
        t.layers = cube ? 6 : 1;
        t.cube = cube;
        t.depth = depth;
        WGPUTextureDescriptor td = WGPU_TEXTURE_DESCRIPTOR_INIT;
        td.size = {width, height, t.layers};
        td.format = t.info.format;
        td.mipLevelCount = levels;
        td.usage =
            WGPUTextureUsage_TextureBinding | WGPUTextureUsage_CopyDst | WGPUTextureUsage_CopySrc;
        if (target && !t.info.block)
            td.usage |= WGPUTextureUsage_RenderAttachment;
        t.texture = wgpuDeviceCreateTexture(device_, &td);
        if (!t.texture) {
            fprintf(stderr, "d3d9 webgpu: texture %u (%ux%u fmt %08x) was not created\n", d.id,
                    d.width, d.height, d.format);
            index_texture(d.id, &t);
            return;
        }
        WGPUTextureViewDescriptor vd = WGPU_TEXTURE_VIEW_DESCRIPTOR_INIT;
        vd.dimension = cube ? WGPUTextureViewDimension_Cube : WGPUTextureViewDimension_2D;
        vd.mipLevelCount = levels;
        vd.arrayLayerCount = t.layers;
        vd.aspect = depth ? WGPUTextureAspect_DepthOnly : WGPUTextureAspect_All;
        t.sample_view = wgpuTextureCreateView(t.texture, &vd);
        if (d.samples > 1 && target && d.kind == HOST_D9_TEX_2D && !t.info.block) {
            WGPUTextureDescriptor md = WGPU_TEXTURE_DESCRIPTOR_INIT;
            md.size = {width, height, 1};
            md.format = t.info.format;
            md.sampleCount = 4; // WebGPU offers 1 or 4
            md.usage = WGPUTextureUsage_RenderAttachment;
            t.msaa = wgpuDeviceCreateTexture(device_, &md);
            if (t.msaa) {
                t.samples = 4;
                t.msaa_view = wgpuTextureCreateView(t.msaa, nullptr);
            }
        }
        index_texture(d.id, &t);
    }

    void drop(uint32_t id) override {
        auto it = textures_.find(id);
        if (it == textures_.end())
            return;
        if (pass_uses(&it->second))
            end_pass();
        retire(it->second);
        index_texture(id, nullptr);
        textures_.erase(it);
    }

    void upload(uint32_t id, uint32_t face, uint32_t level, const uint8_t *bytes,
                uint32_t pitch) override {
        Tex *tp = tex_ptr(id);
        if (!tp || !tp->texture || !bytes)
            return;
        Tex &t = *tp;
        if (level >= t.levels || t.depth)
            return;
        if (t.used == serial_ && encoder_)
            submit(); // draws already recorded read the old contents
        uint32_t w = std::max<uint32_t>(t.desc.width >> level, 1);
        uint32_t h = std::max<uint32_t>((t.cube ? t.desc.width : t.desc.height) >> level, 1);
        WGPUTexelCopyTextureInfo dst = WGPU_TEXEL_COPY_TEXTURE_INFO_INIT;
        dst.texture = t.texture;
        dst.mipLevel = level;
        dst.origin = {0, 0, face};
        WGPUTexelCopyBufferLayout layout = WGPU_TEXEL_COPY_BUFFER_LAYOUT_INIT;
        if (t.info.block) {
            const uint32_t bw = (w + 3) / 4, bh = (h + 3) / 4;
            scratch_.assign((size_t)bw * bh * t.info.bytes, 0);
            for (uint32_t y = 0; y < bh; ++y)
                memcpy(&scratch_[(size_t)y * bw * t.info.bytes], bytes + (size_t)y * pitch,
                       (size_t)bw * t.info.bytes);
            layout.bytesPerRow = bw * t.info.bytes;
            WGPUExtent3D size = {bw * 4, bh * 4, 1};
            size.width = std::min(size.width, std::max<uint32_t>(t.width >> level, 1));
            size.height = std::min(size.height, std::max<uint32_t>(t.height >> level, 1));
            size.width = (size.width + 3) & ~3u;
            size.height = (size.height + 3) & ~3u;
            wgpuQueueWriteTexture(queue_, &dst, scratch_.data(), scratch_.size(), &layout, &size);
            return;
        }
        const uint8_t *src = bytes;
        uint32_t row = pitch;
        uint32_t bpp = t.info.bytes;
        if (is_dxt(t.desc.format)) {
            decode_dxt(bytes, w, h, t.desc.format, scratch_);
            src = scratch_.data();
            row = w * 4;
            bpp = 4;
        } else if (t.info.conv != Conv::Direct) {
            convert(t.info.conv, bytes, w, h, pitch, scratch_);
            src = scratch_.data();
            row = w * 4;
            bpp = 4;
        }
        uint32_t pw = std::max<uint32_t>(t.width >> level, 1),
                 ph = std::max<uint32_t>(t.height >> level, 1);
        std::vector<uint8_t> &packed = packed_;
        uint32_t out_bpp = bpp;
        if (t.info.rgba16_to_float)
            out_bpp = 8;
        packed.resize((size_t)pw * ph * out_bpp);
        for (uint32_t y = 0; y < ph; ++y) {
            uint32_t sy =
                pw == w && ph == h ? y : std::min(h - 1, (uint32_t)(y * (uint64_t)h / ph));
            for (uint32_t x = 0; x < pw; ++x) {
                uint32_t sx =
                    pw == w && ph == h ? x : std::min(w - 1, (uint32_t)(x * (uint64_t)w / pw));
                const uint8_t *p = src + (size_t)sy * row + (size_t)sx * bpp;
                uint8_t *o = &packed[((size_t)y * pw + x) * out_bpp];
                if (t.info.rgba16_to_float) {
                    for (int k = 0; k < 4; ++k) {
                        uint16_t v = (uint16_t)(p[2 * k] | p[2 * k + 1] << 8);
                        uint16_t f = half_of(v / 65535.0f);
                        o[2 * k] = (uint8_t)f;
                        o[2 * k + 1] = (uint8_t)(f >> 8);
                    }
                } else {
                    memcpy(o, p, bpp);
                }
            }
        }
        layout.bytesPerRow = pw * out_bpp;
        WGPUExtent3D size = {pw, ph, 1};
        wgpuQueueWriteTexture(queue_, &dst, packed.data(), packed.size(), &layout, &size);
    }

    bool read(uint32_t, uint32_t, uint32_t, uint8_t *, uint32_t) override {
        log_once("d3d9.webgpu.read",
                 "d3d9 webgpu: a render target read is not supported in the browser");
        return false;
    }

    // ---- buffers --------------------------------------------------------
    void buffer_upload(uint32_t id, uint32_t total, uint32_t offset, const uint8_t *bytes,
                       uint32_t size) override {
        Buf &b = buffers_[id];
        if (offset + size > total || !bytes)
            return;
        if (b.shadow.size() < total)
            b.shadow.resize(total, 0);
        memcpy(b.shadow.data() + offset, bytes, size);
        const uint64_t need = (total + 3) & ~3u;
        if (!b.buffer || wgpuBufferGetSize(b.buffer) < need) {
            if (b.buffer)
                wgpuBufferRelease(b.buffer);
            b.buffer = make_buffer(std::max<uint64_t>(need, 4),
                                   WGPUBufferUsage_Vertex | WGPUBufferUsage_Index);
            write_padded(b.buffer, 0, b.shadow.data(), b.shadow.size());
            b.used = 0;
            return;
        }
        if (b.used == serial_ && encoder_)
            submit(); // draws already recorded read the old contents
        write_padded(b.buffer, offset, bytes, size);
    }
    void buffer_drop(uint32_t id) override {
        auto it = buffers_.find(id);
        if (it == buffers_.end())
            return;
        if (it->second.buffer)
            wgpuBufferRelease(it->second.buffer);
        buffers_.erase(it);
    }

    // ---- drawing --------------------------------------------------------
    void draw(const HostD9Draw &d) override {
        ++stat_calls_;
        if (!ensure_pass(d.target)) {
            skip("no render pass");
            return;
        }
        uint64_t vs_key = d.vs_key ? d.vs_key : d9sh::code_key(d.vs, d.vs_size);
        uint64_t ps_key = d.ps_key ? d.ps_key : d9sh::code_key(d.ps, d.ps_size);
        const d9sh::Program &vp = d9sh::program_for_key(vs_key, d.vs, d.vs_size);
        const d9sh::Program &pp = d9sh::program_for_key(ps_key, d.ps, d.ps_size);
        if (!vp.ok || !pp.ok) {
            skip("undecoded shader");
            return;
        }
        d9msl::PixelVariant variant;
        Tex *bound[16];
        for (uint32_t s = 0; s < 16; ++s) {
            Tex *t = d.sampler_texture[s] ? tex_ptr(d.sampler_texture[s]) : nullptr;
            bound[s] = t;
            if (t && t->texture && t->depth && t->desc.kind == HOST_D9_TEX_2D)
                variant.depth_mask |= (uint16_t)(1u << s);
            if (t && t->texture && t->info.alpha_only)
                variant.alpha_mask |= (uint16_t)(1u << s);
        }
        if (pp.major < 2) {
            for (int s = 0; s < 8; ++s)
                if (bound[s] && bound[s]->desc.kind == HOST_D9_TEX_CUBE)
                    variant.cube_mask |= (uint16_t)(1u << s);
            variant.projected_mask = (uint16_t)d.projected_mask;
        }
        if (pp.sampler_mask < 0) {
            uint32_t cubes = 0;
            for (const auto &kv : pp.samplers)
                if (kv.first < 16 && kv.second == d9sh::S_CUBE)
                    cubes |= 1u << kv.first;
            pp.cube_samplers = cubes;
            pp.sampler_mask = d9msl::pixel_sampler_mask(pp);
        }
        const uint32_t used = (uint32_t)pp.sampler_mask;
        // The layout the pixel program needs: each sampled stage's kind.
        Slot slots[16];
        uint64_t slot_key = 0;
        for (uint32_t s = 0; s < 16; ++s) {
            slots[s] = Slot::None;
            if (used >> s & 1) {
                const bool cube =
                    pp.major >= 2 ? (pp.cube_samplers >> s & 1) : (variant.cube_mask >> s & 1);
                const bool depth = !cube && (variant.depth_mask >> s & 1);
                slots[s] = cube ? Slot::FloatCube : depth ? Slot::Depth2D : Slot::Float2D;
            }
            slot_key = slot_key << 2 | (uint64_t)slots[s];
        }
        WGPUShaderModule vmod = module(vs_key, vp, variant, false);
        WGPUShaderModule fmod = module(ps_key, pp, variant, true);
        if (!vmod || !fmod) {
            skip("untranslated shader");
            return;
        }
        const Layout &layout = layout_for(slot_key, slots);
        count_query();
        const uint32_t *rs = d.render_state;

        uint64_t vkey =
            mix(mix((uint64_t)d.decl_id << 32 | d.decl_size, vs_key), fnv(d.decl, d.decl_size));
        {
            uint64_t strides = 0;
            for (int i = 0; i < 8; ++i)
                strides = strides * 1099511628211ull + d.stream[i].stride;
            vkey = mix(vkey, strides);
        }
        const VLayout &vl = vertex_layout(d, vp, vkey);

        WGPUPrimitiveTopology topology;
        switch (d.primitive) {
        case 1:
            topology = WGPUPrimitiveTopology_PointList;
            break;
        case 2:
            topology = WGPUPrimitiveTopology_LineList;
            break;
        case 3:
            topology = WGPUPrimitiveTopology_LineStrip;
            break;
        case 5:
            topology = WGPUPrimitiveTopology_TriangleStrip;
            break;
        case 4:
        case 6:
            topology = WGPUPrimitiveTopology_TriangleList;
            break;
        default:
            skip("primitive type");
            return;
        }
        float bias, slope;
        memcpy(&bias, &rs[RS_DEPTHBIAS], 4);
        memcpy(&slope, &rs[RS_SLOPESCALEDEPTHBIAS], 4);
        PipeState ps{};
        ps.vmod = vmod;
        ps.fmod = fmod;
        ps.vl = &vl;
        ps.layout = &layout;
        ps.topology = topology;
        ps.rs = rs;
        ps.blend = rs[RS_ALPHABLENDENABLE] != 0;
        ps.zon = rs[RS_ZENABLE] != 0 && pass_depth_view_;
        ps.stencil = rs[RS_STENCILENABLE] != 0 && pass_depth_view_;
        ps.cull = rs[RS_CULLMODE] == 2   ? WGPUCullMode_Front
                  : rs[RS_CULLMODE] == 3 ? WGPUCullMode_Back
                                         : WGPUCullMode_None;
        ps.bias = (int32_t)std::lround(bias * 16777215.0f);
        ps.slope = slope;
        ps.colors = d9msl::pixel_color_outputs(pp);
        WGPURenderPipeline pso = pipeline(ps, vkey);
        if (!pso) {
            skip("no pipeline");
            return;
        }
        if (pso != es_.pipeline) {
            wgpuRenderPassEncoderSetPipeline(pass_, pso);
            es_.pipeline = pso;
        }
        if (ps.stencil && es_.stencil_ref != (rs[RS_STENCILREF] & 0xff)) {
            es_.stencil_ref = rs[RS_STENCILREF] & 0xff;
            wgpuRenderPassEncoderSetStencilReference(pass_, es_.stencil_ref);
        }
        const float s = pass_scale_;
        {
            float x = d.viewport[0] * s, y = d.viewport[1] * s, w = d.viewport[2] * s,
                  h = d.viewport[3] * s;
            // WebGPU wants the viewport inside the target.
            x = std::max(0.0f, x);
            y = std::max(0.0f, y);
            w = std::max(1.0f, std::min(w, (float)pass_width_ - x));
            h = std::max(1.0f, std::min(h, (float)pass_height_ - y));
            const float vp[6] = {x, y, w, h, d.depth_range[0], d.depth_range[1]};
            if (!es_.viewport_valid || memcmp(vp, es_.viewport, sizeof vp) != 0) {
                wgpuRenderPassEncoderSetViewport(pass_, vp[0], vp[1], vp[2], vp[3], vp[4],
                                                 std::max(vp[4], vp[5]));
                memcpy(es_.viewport, vp, sizeof vp);
                es_.viewport_valid = true;
            }
        }
        set_scissor(rs[RS_SCISSORTESTENABLE] != 0, d.scissor);
        if (ps.blend &&
            (uses_blend_factor(rs[RS_SRCBLEND]) || uses_blend_factor(rs[RS_DESTBLEND]) ||
             uses_blend_factor(rs[RS_SRCBLENDALPHA]) || uses_blend_factor(rs[RS_DESTBLENDALPHA]))) {
            uint32_t f = rs[RS_BLENDFACTOR];
            WGPUColor c = {((f >> 16) & 255) / 255.0, ((f >> 8) & 255) / 255.0, (f & 255) / 255.0,
                           ((f >> 24) & 255) / 255.0};
            wgpuRenderPassEncoderSetBlendConstant(pass_, &c);
        }

        // Uniforms, at dynamic offsets into this frame's ring.
        D9VkVSParams vparams{};
        vparams.halfpix[0] = d.viewport[2] ? (63.0f / 64.0f) / d.viewport[2] : 0.0f;
        vparams.halfpix[1] = d.viewport[3] ? -(63.0f / 64.0f) / d.viewport[3] : 0.0f;
        memcpy(vparams.ascale, vl.ascale, sizeof vl.ascale);
        D9PSParams pparams{};
        pparams.alpha_func = rs[RS_ALPHATESTENABLE] ? (int32_t)rs[RS_ALPHAFUNC] : 8;
        pparams.alpha_ref = (rs[RS_ALPHAREF] & 0xff) / 255.0f;
        if (rs[RS_FOGENABLE]) {
            uint32_t table = rs[RS_FOGTABLEMODE];
            pparams.fog_mode = table == 3 ? 2 : table == 1 ? 3 : table == 2 ? 4 : 1;
            uint32_t fc = rs[RS_FOGCOLOR];
            pparams.fog_color[0] = ((fc >> 16) & 255) / 255.0f;
            pparams.fog_color[1] = ((fc >> 8) & 255) / 255.0f;
            pparams.fog_color[2] = (fc & 255) / 255.0f;
            pparams.fog_color[3] = 1.0f;
            memcpy(&pparams.fog_start, &rs[RS_FOGSTART], 4);
            memcpy(&pparams.fog_end, &rs[RS_FOGEND], 4);
            memcpy(&pparams.fog_density, &rs[RS_FOGDENSITY], 4);
        }
        const uint32_t vn = d9glsl::constant_registers(vp), pn = d9glsl::constant_registers(pp);
        const uint64_t vsize = (uint64_t)vn * 16, psize = (uint64_t)pn * 16;
        uint32_t offsets[4];
        WGPUBuffer ubuf = nullptr;
        {
            const uint64_t a = uniform_align_;
            const uint64_t span = round_up(vsize, a) + round_up(sizeof vparams, a) +
                                  round_up(psize, a) + round_up(sizeof pparams, a);
            uniform_bytes_.assign(span, 0);
            uint64_t at = 0;
            offsets[0] = (uint32_t)at;
            fill_constants(uniform_bytes_.data() + at, d.vconst, d.vconst_count, vp, vn);
            at += round_up(vsize, a);
            offsets[1] = (uint32_t)at;
            memcpy(uniform_bytes_.data() + at, &vparams, sizeof vparams);
            at += round_up(sizeof vparams, a);
            offsets[2] = (uint32_t)at;
            fill_constants(uniform_bytes_.data() + at, d.pconst, d.pconst_count, pp, pn);
            at += round_up(psize, a);
            offsets[3] = (uint32_t)at;
            memcpy(uniform_bytes_.data() + at, &pparams, sizeof pparams);
            uint64_t base = 0;
            ubuf = ring_write(uniform_bytes_.data(), span, &base);
            for (uint32_t &o : offsets)
                o += (uint32_t)base;
        }

        // Textures and the bind group.
        GroupKey gk{};
        gk.layout = layout.group;
        gk.uniforms = ubuf;
        gk.ranges[0] = vsize;
        gk.ranges[1] = sizeof vparams;
        gk.ranges[2] = psize;
        gk.ranges[3] = sizeof pparams;
        for (uint32_t st = 0; st < 16; ++st) {
            if (slots[st] == Slot::None)
                continue;
            Tex *t = bound[st];
            const bool cube = slots[st] == Slot::FloatCube, depth = slots[st] == Slot::Depth2D;
            WGPUTextureView view = t ? t->sample_view : nullptr;
            if (view && (t->cube != cube || t->depth != depth))
                view = nullptr;
            if (view && pass_uses(t))
                view = nullptr;
            if (view)
                t->used = serial_;
            gk.views[st] = view ? view : depth ? far_depth_view_ : placeholder(cube);
            gk.samplers[st] = depth ? shadow_sampler() : sampler(d.sampler_state + st * 14, t);
        }
        WGPUBindGroup group = bind_group(gk);
        if (!group) {
            skip("no bind group");
            return;
        }
        wgpuRenderPassEncoderSetBindGroup(pass_, 0, group, 4, offsets);

        for (uint32_t i = 0; i < 8; ++i) {
            if (!(vl.streams >> i & 1))
                continue;
            const HostD9Stream &st = d.stream[i];
            WGPUBuffer vb = nullptr;
            uint64_t off = 0;
            if (st.buffer) {
                auto b = buffers_.find(st.buffer);
                if (b == buffers_.end() || !b->second.buffer) {
                    skip("missing vertex buffer");
                    return;
                }
                b->second.used = serial_;
                vb = b->second.buffer;
                off = st.offset;
            } else if (d.inline_vertices) {
                vb = ring_write(d.inline_vertices, d.inline_bytes, &off, WGPUBufferUsage_Vertex);
            } else {
                vb = zero_;
            }
            wgpuRenderPassEncoderSetVertexBuffer(pass_, vl.slot_of[i], vb, off, WGPU_WHOLE_SIZE);
        }
        if (vl.zero)
            wgpuRenderPassEncoderSetVertexBuffer(pass_, vl.zero_slot, zero_, 0, WGPU_WHOLE_SIZE);
        encode_primitives(d);
        ++draws_;
    }

    // ---- occlusion queries ----------------------------------------------
    static constexpr uint32_t kQuerySlots = 1024;
    struct Query {
        std::vector<std::pair<uint64_t, uint32_t>> slots; // (encoder serial, index)
        uint64_t counted = 0;
        bool overflow = false;
        bool ended = false;
    };
    void query_begin(uint32_t id) override {
        end_query_slot();
        queries_[id] = Query{};
        query_ = id;
    }
    void query_end(uint32_t id) override {
        if (query_ != id)
            return;
        end_query_slot();
        query_ = 0;
        queries_[id].ended = true;
    }
    int query_result(uint32_t id, uint32_t *count) override {
        auto it = queries_.find(id);
        if (it == queries_.end() || !it->second.ended)
            return -1;
        Query &q = it->second;
        if (q.overflow) {
            *count = 1;
            return 1;
        }
        if (!q.slots.empty())
            return 0;
        *count = (uint32_t)std::min<uint64_t>(q.counted, 0xffffffffu);
        return 1;
    }
    void query_drop(uint32_t id) override {
        if (query_ == id)
            query_end(id);
        queries_.erase(id);
    }
    void probe_next(const char *) override {}

    // ---- clears and blits -------------------------------------------------
    void clear(const HostD9Target &target, const int32_t vp[4], uint32_t count,
               const int32_t *rects, uint32_t flags, uint32_t color, float z,
               uint32_t stencil) override {
        Tex *ct = target.color[0].id ? tex_ptr(target.color[0].id) : nullptr;
        if (!ct || !ct->texture)
            return;
        Tex *dt = target.depth.id ? tex_ptr(target.depth.id) : nullptr;
        const bool has_depth = dt && dt->texture;
        int32_t lw = (int32_t)std::max<uint32_t>(ct->desc.width >> target.color[0].level, 1);
        int32_t lh = (int32_t)std::max<uint32_t>(ct->desc.height >> target.color[0].level, 1);
        bool whole = count == 0 && vp[0] <= 0 && vp[1] <= 0 && vp[2] >= lw && vp[3] >= lh;
        bool want_color = flags & 1, want_depth = (flags & 2) && has_depth,
             want_stencil = (flags & 4) && has_depth;
        float rgba[4] = {((color >> 16) & 255) / 255.0f, ((color >> 8) & 255) / 255.0f,
                         (color & 255) / 255.0f, ((color >> 24) & 255) / 255.0f};
        if (whole) {
            end_pass();
            begin_pass(target, want_color, rgba, want_depth, z, want_stencil, stencil);
            return;
        }
        if (!ensure_pass(target))
            return;
        WGPURenderPipeline pso = clear_pipeline(want_color, want_depth, want_stencil);
        if (!pso)
            return;
        es_ = EncoderState{};
        wgpuRenderPassEncoderSetPipeline(pass_, pso);
        wgpuRenderPassEncoderSetStencilReference(pass_, stencil & 0xff);
        wgpuRenderPassEncoderSetViewport(pass_, 0, 0, (float)pass_width_, (float)pass_height_, 0,
                                         1);
        wgpuRenderPassEncoderSetScissorRect(pass_, 0, 0, pass_width_, pass_height_);
        std::vector<int32_t> list;
        if (count && rects)
            list.assign(rects, rects + 4 * count);
        else
            list = {vp[0], vp[1], vp[0] + vp[2], vp[1] + vp[3]};
        for (size_t i = 0; i + 4 <= list.size(); i += 4) {
            int32_t x0 = std::max(list[i], std::max(vp[0], 0));
            int32_t y0 = std::max(list[i + 1], std::max(vp[1], 0));
            int32_t x1 = std::min(list[i + 2], std::min(vp[0] + vp[2], lw));
            int32_t y1 = std::min(list[i + 3], std::min(vp[1] + vp[3], lh));
            if (x1 <= x0 || y1 <= y0)
                continue;
            QuadIn q{};
            q.rect[0] = 2.0f * x0 / lw - 1.0f;
            q.rect[1] = 1.0f - 2.0f * y0 / lh;
            q.rect[2] = 2.0f * x1 / lw - 1.0f;
            q.rect[3] = 1.0f - 2.0f * y1 / lh;
            q.z = z;
            memcpy(q.color, rgba, sizeof rgba);
            draw_quad(q, placeholder(false), sampler(nullptr, nullptr));
        }
        es_ = EncoderState{};
    }

    void stretch(HostD9Surface src, const int32_t sr[4], HostD9Surface dst, const int32_t dr[4],
                 uint32_t filter) override {
        Tex *st = tex_ptr(src.id);
        Tex *dt = tex_ptr(dst.id);
        if (!st || !dt || !st->texture || !dt->texture || st->depth || dt->depth ||
            st->info.block || dt->info.block || st == dt)
            return;
        end_pass();
        const uint32_t sw = std::max<uint32_t>(st->width >> src.level, 1),
                       sh = std::max<uint32_t>(st->height >> src.level, 1);
        const uint32_t tw = std::max<uint32_t>(dt->width >> dst.level, 1),
                       th = std::max<uint32_t>(dt->height >> dst.level, 1);
        const uint32_t sgw = std::max<uint32_t>(st->desc.width >> src.level, 1);
        const uint32_t sgh =
            std::max<uint32_t>((st->cube ? st->desc.width : st->desc.height) >> src.level, 1);
        const uint32_t dgw = std::max<uint32_t>(dt->desc.width >> dst.level, 1);
        const uint32_t dgh =
            std::max<uint32_t>((dt->cube ? dt->desc.width : dt->desc.height) >> dst.level, 1);
        const float ssx = (float)sw / sgw, ssy = (float)sh / sgh, dsx = (float)tw / dgw,
                    dsy = (float)th / dgh;
        HostD9Target target{};
        target.color[0] = dst;
        if (!begin_pass(target, false, nullptr, false, 0, false, 0))
            return;
        WGPURenderPipeline pso = copy_pipeline(dt->info.format, pass_samples_);
        if (!pso)
            return;
        es_ = EncoderState{};
        wgpuRenderPassEncoderSetPipeline(pass_, pso);
        wgpuRenderPassEncoderSetViewport(pass_, 0, 0, (float)tw, (float)th, 0, 1);
        wgpuRenderPassEncoderSetScissorRect(pass_, 0, 0, tw, th);
        QuadIn q{};
        q.rect[0] = 2.0f * dr[0] * dsx / tw - 1.0f;
        q.rect[1] = 1.0f - 2.0f * dr[1] * dsy / th;
        q.rect[2] = 2.0f * dr[2] * dsx / tw - 1.0f;
        q.rect[3] = 1.0f - 2.0f * dr[3] * dsy / th;
        q.uv[0] = sr[0] * ssx / sw;
        q.uv[1] = sr[1] * ssy / sh;
        q.uv[2] = sr[2] * ssx / sw;
        q.uv[3] = sr[3] * ssy / sh;
        st->used = serial_;
        WGPUTextureViewDescriptor vd = WGPU_TEXTURE_VIEW_DESCRIPTOR_INIT;
        vd.dimension = WGPUTextureViewDimension_2D;
        vd.baseMipLevel = src.level;
        vd.mipLevelCount = 1;
        vd.baseArrayLayer = src.face;
        vd.arrayLayerCount = 1;
        WGPUTextureView view = wgpuTextureCreateView(st->texture, &vd);
        uint32_t ss[14] = {};
        ss[1] = ss[2] = ss[3] = 3;
        ss[5] = ss[6] = filter >= 2 ? 2 : 1;
        draw_quad(q, view, sampler(ss, nullptr));
        wgpuTextureViewRelease(view);
        end_pass();
    }

    void present(uint32_t backbuffer, uint32_t w, uint32_t h) override {
        end_pass();
        Tex *t = tex_ptr(backbuffer);
        if (!t || !t->texture) {
            submit();
            return;
        }
        base_rows_ = t->desc.height;
        submit();
        if (t->info.format == WGPUTextureFormat_BGRA8Unorm) {
            if (!t->imported) {
                WGPUTextureViewDescriptor vd = WGPU_TEXTURE_VIEW_DESCRIPTOR_INIT;
                vd.dimension = WGPUTextureViewDimension_2D;
                vd.mipLevelCount = 1;
                vd.arrayLayerCount = 1;
                WGPUTextureView v = wgpuTextureCreateView(t->texture, &vd);
                t->targets[0xffffffffu] = v;
                gpu::TextureDesc gd;
                gd.width = (int)t->width;
                gd.height = (int)t->height;
                gd.format = gpu::Format::BGRA8;
                t->imported = dev_->import_texture(t->texture, v, gd);
            }
            gpu::CommandBuffer cb = dev_->begin();
            if (host_present_stage_texture(t->imported, (int)t->width, (int)t->height, (int)w,
                                           (int)h, cb))
                host_present_track_command(cb);
            dev_->commit(cb);
        }
        ++presents_;
        if (presents_ % 300 == 1)
            report();
        follow_drawable();
    }

    bool read_presented(uint8_t *, uint32_t, uint32_t *, uint32_t *) override {
        return false;
    }

  private:
    // ---- resources ----------------------------------------------------------------
    static uint64_t round_up(uint64_t v, uint64_t a) {
        return (v + a - 1) / a * a;
    }
    static uint16_t half_of(float f) {
        // [0, 1] only: no sign, no infinities.
        if (f <= 0.0f)
            return 0;
        int e;
        float m = std::frexp(f, &e); // f = m * 2^e, m in [0.5, 1)
        int exp = e - 1 + 15;
        if (exp <= 0)
            return 0;
        uint32_t mant = (uint32_t)std::lround((m * 2.0f - 1.0f) * 1024.0f);
        if (mant >= 1024) {
            mant = 0;
            ++exp;
        }
        return (uint16_t)(exp << 10 | mant);
    }
    WGPUBuffer make_buffer(uint64_t size, WGPUBufferUsage usage) {
        WGPUBufferDescriptor bd = WGPU_BUFFER_DESCRIPTOR_INIT;
        bd.size = round_up(std::max<uint64_t>(size, 4), 4);
        bd.usage = usage | WGPUBufferUsage_CopyDst;
        return wgpuDeviceCreateBuffer(device_, &bd);
    }
    void write_padded(WGPUBuffer b, uint64_t offset, const uint8_t *bytes, uint64_t size) {
        const uint64_t aligned = round_up(size, 4);
        if (aligned == size) {
            wgpuQueueWriteBuffer(queue_, b, offset, bytes, size);
            return;
        }
        pad_.assign(bytes, bytes + size);
        pad_.resize(aligned, 0);
        if (offset + aligned > wgpuBufferGetSize(b))
            return;
        wgpuQueueWriteBuffer(queue_, b, offset, pad_.data(), aligned);
    }
    // Space in this frame's ring buffers; the data is written at once.
    WGPUBuffer ring_write(const void *bytes, uint64_t size, uint64_t *offset,
                          WGPUBufferUsage usage = WGPUBufferUsage_Uniform) {
        Ring &r = usage == WGPUBufferUsage_Uniform ? uniform_ring_ : vertex_ring_;
        const uint64_t align = usage == WGPUBufferUsage_Uniform ? uniform_align_ : 4;
        const uint64_t aligned = round_up(size, 4);
        for (;;) {
            if (r.chunk < r.chunks.size()) {
                const uint64_t at = round_up(r.used, align);
                if (at + aligned <= r.chunk_size) {
                    r.used = at + aligned;
                    write_padded(r.chunks[r.chunk], at, (const uint8_t *)bytes, size);
                    *offset = at;
                    return r.chunks[r.chunk];
                }
                ++r.chunk;
                r.used = 0;
                continue;
            }
            r.chunks.push_back(make_buffer(r.chunk_size, usage | WGPUBufferUsage_Index));
        }
    }
    struct Ring {
        std::vector<WGPUBuffer> chunks;
        size_t chunk = 0;
        uint64_t used = 0;
        uint64_t chunk_size = 8u << 20;
    };

    WFmt format_for(uint32_t fmt) const {
        const FormatInfo f = d9gpu::format_info(fmt, bc_);
        WFmt m;
        m.conv = f.conv;
        m.bytes = f.bytes;
        m.block = f.block;
        switch (f.store) {
        case Store::BGRA8:
            m.format = WGPUTextureFormat_BGRA8Unorm;
            break;
        case Store::A8:
            m.format = WGPUTextureFormat_R8Unorm;
            m.alpha_only = true;
            break;
        case Store::RGBA16:
            if (unorm16_) {
                m.format = WGPUTextureFormat_RGBA16Unorm;
            } else {
                m.format = WGPUTextureFormat_RGBA16Float;
                m.rgba16_to_float = true;
            }
            break;
        case Store::R16F:
            m.format = WGPUTextureFormat_R16Float;
            break;
        case Store::RGBA16F:
            m.format = WGPUTextureFormat_RGBA16Float;
            break;
        case Store::R32F:
            m.format = WGPUTextureFormat_R32Float;
            break;
        case Store::RGBA32F:
            m.format = WGPUTextureFormat_RGBA32Float;
            break;
        case Store::BC1:
            m.format = WGPUTextureFormat_BC1RGBAUnorm;
            break;
        case Store::BC2:
            m.format = WGPUTextureFormat_BC2RGBAUnorm;
            break;
        case Store::BC3:
            m.format = WGPUTextureFormat_BC3RGBAUnorm;
            break;
        case Store::Depth:
            m.format = depth_format_;
            m.depth = true;
            break;
        }
        if (!f.block && is_dxt(fmt)) {
            m.format = WGPUTextureFormat_BGRA8Unorm;
            m.conv = Conv::Direct;
        }
        if (!float32_filterable_ &&
            (m.format == WGPUTextureFormat_R32Float || m.format == WGPUTextureFormat_RGBA32Float))
            m.format = m.format == WGPUTextureFormat_R32Float
                           ? WGPUTextureFormat_R16Float
                           : WGPUTextureFormat_RGBA16Float; // filterable
        return m;
    }

    void retire(Tex &t) {
        if (t.imported) {
            dev_->destroy(t.imported);
            t.imported = {};
        }
        for (auto &kv : t.targets)
            wgpuTextureViewRelease(kv.second);
        t.targets.clear();
        if (t.sample_view)
            wgpuTextureViewRelease(t.sample_view);
        if (t.msaa_view)
            wgpuTextureViewRelease(t.msaa_view);
        if (t.msaa)
            wgpuTextureRelease(t.msaa);
        if (t.texture) {
            // Destroyed once the work that may still read it has finished.
            WGPUTexture texture = t.texture;
            dev_->after_submitted([texture]() {
                wgpuTextureDestroy(texture);
                wgpuTextureRelease(texture);
            });
        }
        t = Tex{};
    }

    // ---- passes ------------------------------------------------------------------
    void index_texture(uint32_t id, Tex *t) {
        if (id >= (1u << 20))
            return;
        if (tex_index_.size() <= id)
            tex_index_.resize(id + 1024, nullptr);
        tex_index_[id] = t;
    }
    Tex *tex_ptr(uint32_t id) {
        if (id < tex_index_.size())
            return tex_index_[id];
        if (!id)
            return nullptr;
        auto it = textures_.find(id);
        return it != textures_.end() ? &it->second : nullptr;
    }
    bool pass_uses(const Tex *t) const {
        if (!pass_)
            return false;
        for (const Tex *c : pass_color_)
            if (c == t)
                return true;
        return pass_depth_tex_ == t;
    }
    WGPUTextureView target_view(Tex &t, uint32_t level, uint32_t face) {
        uint32_t key = level << 8 | face;
        auto it = t.targets.find(key);
        if (it != t.targets.end())
            return it->second;
        WGPUTextureViewDescriptor vd = WGPU_TEXTURE_VIEW_DESCRIPTOR_INIT;
        vd.dimension = WGPUTextureViewDimension_2D;
        vd.baseMipLevel = level;
        vd.mipLevelCount = 1;
        vd.baseArrayLayer = face;
        vd.arrayLayerCount = 1;
        WGPUTextureView v = wgpuTextureCreateView(t.texture, &vd);
        t.targets[key] = v;
        return v;
    }

    void begin_encoder() {
        if (encoder_)
            return;
        encoder_ = wgpuDeviceCreateCommandEncoder(device_, nullptr);
        ++serial_;
        queries_used_ = 0;
        query_set_ = nullptr;
    }
    // Submits what is recorded; a new encoder begins with the next command.
    void submit() {
        if (!encoder_)
            return;
        end_pass();
        WGPUQuerySet qs = query_set_;
        WGPUBuffer resolve = nullptr, readback = nullptr;
        const uint32_t nq = queries_used_;
        if (qs && nq) {
            const uint64_t bytes = (uint64_t)nq * 8;
            resolve = make_buffer(
                bytes, (WGPUBufferUsage)(WGPUBufferUsage_QueryResolve | WGPUBufferUsage_CopySrc));
            readback = make_buffer(bytes, WGPUBufferUsage_MapRead);
            wgpuCommandEncoderResolveQuerySet(encoder_, qs, 0, nq, resolve, 0);
            wgpuCommandEncoderCopyBufferToBuffer(encoder_, resolve, 0, readback, 0,
                                                 round_up(bytes, 4));
        }
        WGPUCommandBuffer cb = wgpuCommandEncoderFinish(encoder_, nullptr);
        wgpuCommandEncoderRelease(encoder_);
        encoder_ = nullptr;
        wgpuQueueSubmit(queue_, 1, &cb);
        wgpuCommandBufferRelease(cb);
        if (readback)
            read_queries(serial_, readback, nq, resolve, qs);
        else if (qs)
            wgpuQuerySetRelease(qs);
        query_set_ = nullptr;
        // The rings are free again once the queue has taken their data.
        uniform_ring_.chunk = uniform_ring_.used = 0;
        vertex_ring_.chunk = vertex_ring_.used = 0;
        for (auto &kv : groups_)
            wgpuBindGroupRelease(kv.second);
        groups_.clear();
    }
    void read_queries(uint64_t serial, WGPUBuffer readback, uint32_t n, WGPUBuffer resolve,
                      WGPUQuerySet qs) {
        struct Job {
            WebGpuRenderer *self;
            uint64_t serial;
            WGPUBuffer readback, resolve;
            WGPUQuerySet qs;
            uint32_t n;
        };
        auto *job = new Job{this, serial, readback, resolve, qs, n};
        WGPUBufferMapCallbackInfo info = WGPU_BUFFER_MAP_CALLBACK_INFO_INIT;
        info.mode = WGPUCallbackMode_AllowSpontaneous;
        info.userdata1 = job;
        // The counts are read from the event loop: the binding calls this
        // holding its event lock, which unmapping the buffer takes again.
        info.callback = [](WGPUMapAsyncStatus status, WGPUStringView, void *u1, void *) {
            gpu::WebGpuDevice::later([status, u1] {
                Job *j = static_cast<Job *>(u1);
                std::vector<uint64_t> counts(j->n, 1);
                if (status == WGPUMapAsyncStatus_Success) {
                    const uint64_t *p =
                        (const uint64_t *)wgpuBufferGetConstMappedRange(j->readback, 0, j->n * 8);
                    if (p)
                        memcpy(counts.data(), p, j->n * 8);
                    wgpuBufferUnmap(j->readback);
                }
                for (auto &kv : j->self->queries_) {
                    auto &slots = kv.second.slots;
                    size_t keep = 0;
                    for (auto &s : slots) {
                        if (s.first == j->serial)
                            kv.second.counted += s.second < j->n ? counts[s.second] : 1;
                        else
                            slots[keep++] = s;
                    }
                    slots.resize(keep);
                }
                wgpuBufferRelease(j->readback);
                wgpuBufferRelease(j->resolve);
                wgpuQuerySetRelease(j->qs);
                delete j;
            });
        };
        wgpuBufferMapAsync(readback, WGPUMapMode_Read, 0, n * 8, info);
    }

    bool same_target(const HostD9Target &t) const {
        return pass_ && memcmp(&t, &pass_target_, sizeof t) == 0;
    }
    bool ensure_pass(const HostD9Target &t) {
        if (same_target(t))
            return true;
        end_pass();
        return begin_pass(t, false, nullptr, false, 0, false, 0);
    }
    bool begin_pass(const HostD9Target &t, bool clear_color, const float *rgba, bool clear_depth,
                    float z, bool clear_stencil, uint32_t stencil) {
        begin_encoder();
        WGPURenderPassColorAttachment colors[4];
        size_t ncolor = 0;
        pass_samples_ = 0;
        for (int i = 0; i < 4; ++i) {
            colors[i] = WGPU_RENDER_PASS_COLOR_ATTACHMENT_INIT;
            pass_color_[i] = nullptr;
            pass_formats_[i] = WGPUTextureFormat_Undefined;
            Tex *ct = t.color[i].id ? tex_ptr(t.color[i].id) : nullptr;
            if (!ct || !ct->texture || ct->depth || ct->info.block)
                continue;
            const bool ms = ct->msaa && t.color[i].level == 0 && t.color[i].face == 0;
            const uint32_t samples = ms ? ct->samples : 1;
            if (pass_samples_ && samples != pass_samples_)
                continue;
            const uint32_t w = std::max<uint32_t>(ct->width >> t.color[i].level, 1);
            const uint32_t h = std::max<uint32_t>(ct->height >> t.color[i].level, 1);
            if (i == 0) {
                pass_width_ = w;
                pass_height_ = h;
            } else if (!pass_color_[0] || w != pass_width_ || h != pass_height_) {
                continue; // WebGPU wants every attachment the same size
            }
            pass_samples_ = samples;
            pass_color_[i] = ct;
            pass_formats_[i] = ct->info.format;
            ct->used = serial_;
            WGPURenderPassColorAttachment &a = colors[i];
            if (ms) {
                a.view = ct->msaa_view;
                a.resolveTarget = target_view(*ct, 0, 0);
            } else {
                a.view = target_view(*ct, t.color[i].level, t.color[i].face);
            }
            a.storeOp = WGPUStoreOp_Store;
            if (i == 0 && clear_color) {
                a.loadOp = WGPULoadOp_Clear;
                a.clearValue = {rgba[0], rgba[1], rgba[2], rgba[3]};
            } else {
                a.loadOp = WGPULoadOp_Load;
            }
            ncolor = (size_t)i + 1;
        }
        if (!pass_color_[0])
            return false;
        if (!pass_samples_)
            pass_samples_ = 1;
        pass_color_count_ = (uint32_t)ncolor;
        pass_depth_view_ = nullptr;
        pass_depth_tex_ = nullptr;
        WGPURenderPassDepthStencilAttachment depth = WGPU_RENDER_PASS_DEPTH_STENCIL_ATTACHMENT_INIT;
        Tex *dt = t.depth.id ? tex_ptr(t.depth.id) : nullptr;
        if (dt && dt->texture && dt->depth) {
            WGPUTextureView dv = nullptr;
            if (pass_samples_ > 1)
                dv = dt->msaa && dt->width == pass_width_ && dt->height == pass_height_
                         ? dt->msaa_view
                         : fitted_depth(dt, pass_samples_);
            else if (dt->width == pass_width_ && dt->height == pass_height_)
                dv = target_view(*dt, 0, 0);
            else
                dv = fitted_depth(dt, 1); // WebGPU wants the depth buffer the target's size
            if (dv) {
                pass_depth_view_ = dv;
                pass_depth_tex_ = dt;
                dt->used = serial_;
                depth.view = dv;
                depth.depthLoadOp = clear_depth ? WGPULoadOp_Clear : WGPULoadOp_Load;
                depth.depthStoreOp = WGPUStoreOp_Store;
                depth.depthClearValue = z;
                depth.stencilLoadOp = clear_stencil ? WGPULoadOp_Clear : WGPULoadOp_Load;
                depth.stencilStoreOp = WGPUStoreOp_Store;
                depth.stencilClearValue = stencil & 0xff;
            }
        }
        if (query_ && !query_set_) {
            WGPUQuerySetDescriptor qd = WGPU_QUERY_SET_DESCRIPTOR_INIT;
            qd.type = WGPUQueryType_Occlusion;
            qd.count = kQuerySlots;
            query_set_ = wgpuDeviceCreateQuerySet(device_, &qd);
        }
        WGPURenderPassDescriptor rp = WGPU_RENDER_PASS_DESCRIPTOR_INIT;
        rp.colorAttachmentCount = ncolor;
        rp.colorAttachments = colors;
        rp.depthStencilAttachment = pass_depth_view_ ? &depth : nullptr;
        rp.occlusionQuerySet = query_set_;
        pass_ = wgpuCommandEncoderBeginRenderPass(encoder_, &rp);
        pass_slot_ = -1;
        es_ = EncoderState{};
        pass_target_ = t;
        pass_scale_ = pass_color_[0]->scale;
        return pass_ != nullptr;
    }
    void end_pass() {
        if (!pass_)
            return;
        end_query_slot();
        wgpuRenderPassEncoderEnd(pass_);
        wgpuRenderPassEncoderRelease(pass_);
        pass_ = nullptr;
        memset(&pass_target_, 0, sizeof pass_target_);
        for (auto &c : pass_color_)
            c = nullptr;
        pass_depth_tex_ = nullptr;
        pass_depth_view_ = nullptr;
    }
    WGPUTextureView fitted_depth(Tex *dt, uint32_t samples) {
        uint64_t key = mix(mix(mix((uint64_t)dt->desc.id, pass_width_), pass_height_), samples);
        auto it = fitted_.find(key);
        if (it != fitted_.end())
            return it->second;
        WGPUTextureDescriptor td = WGPU_TEXTURE_DESCRIPTOR_INIT;
        td.size = {pass_width_, pass_height_, 1};
        td.format = depth_format_;
        td.sampleCount = samples;
        td.usage = WGPUTextureUsage_RenderAttachment;
        WGPUTexture tex = wgpuDeviceCreateTexture(device_, &td);
        WGPUTextureView v = tex ? wgpuTextureCreateView(tex, nullptr) : nullptr;
        fitted_[key] = v;
        return v;
    }
    void set_scissor(bool on, const int32_t sc[4]) {
        uint32_t r[4] = {0, 0, pass_width_, pass_height_};
        if (on) {
            const float s = pass_scale_;
            int32_t x0 = std::max(0, (int32_t)std::lround(sc[0] * s)),
                    y0 = std::max(0, (int32_t)std::lround(sc[1] * s));
            int32_t x1 = std::min((int32_t)pass_width_, (int32_t)std::lround(sc[2] * s));
            int32_t y1 = std::min((int32_t)pass_height_, (int32_t)std::lround(sc[3] * s));
            if (x1 <= x0 || y1 <= y0)
                x0 = y0 = x1 = y1 = 0;
            r[0] = (uint32_t)x0;
            r[1] = (uint32_t)y0;
            r[2] = (uint32_t)(x1 - x0);
            r[3] = (uint32_t)(y1 - y0);
        }
        if (!es_.scissor_valid || memcmp(r, es_.scissor, sizeof r) != 0) {
            wgpuRenderPassEncoderSetScissorRect(pass_, r[0], r[1], r[2], r[3]);
            memcpy(es_.scissor, r, sizeof r);
            es_.scissor_valid = true;
        }
    }
    void count_query() {
        if (!query_ || pass_slot_ >= 0 || !pass_)
            return;
        Query &q = queries_[query_];
        if (!query_set_ || queries_used_ >= kQuerySlots) {
            q.overflow = true;
            return;
        }
        pass_slot_ = (int)queries_used_++;
        wgpuRenderPassEncoderBeginOcclusionQuery(pass_, (uint32_t)pass_slot_);
        q.slots.push_back({serial_, (uint32_t)pass_slot_});
    }
    void end_query_slot() {
        if (pass_slot_ < 0 || !pass_)
            return;
        wgpuRenderPassEncoderEndOcclusionQuery(pass_);
        pass_slot_ = -1;
    }

    // ---- shaders and pipelines ---------------------------------------------------
    WGPUShaderModule module(uint64_t code_key, const d9sh::Program &p, const d9msl::PixelVariant &v,
                            bool pixel) {
        uint64_t key = mix(code_key, pixel ? v.key() + 1 : 0);
        auto it = modules_.find(key);
        if (it != modules_.end())
            return it->second;
        std::string src, why;
        bool ok =
            pixel ? d9wgsl::pixel_source(p, v, &src, &why) : d9wgsl::vertex_source(p, &src, &why);
        WGPUShaderModule m = nullptr;
        if (ok) {
            WGPUShaderSourceWGSL s = WGPU_SHADER_SOURCE_WGSL_INIT;
            s.code = sv(src.c_str());
            WGPUShaderModuleDescriptor md = WGPU_SHADER_MODULE_DESCRIPTOR_INIT;
            md.nextInChain = &s.chain;
            m = wgpuDeviceCreateShaderModule(device_, &md);
        } else {
            char key_text[64];
            snprintf(key_text, sizeof key_text, "d3d9.webgpu.untranslated.%llx",
                     (unsigned long long)key);
            log_once(key_text, "d3d9 webgpu: a %s shader is not translated: %s",
                     pixel ? "pixel" : "vertex", why.c_str());
        }
        modules_[key] = m;
        return m;
    }

    struct Layout {
        WGPUBindGroupLayout group = nullptr;
        WGPUPipelineLayout pipeline = nullptr;
        Slot slots[16];
    };
    const Layout &layout_for(uint64_t key, const Slot slots[16]) {
        auto it = layouts_.find(key);
        if (it != layouts_.end())
            return it->second;
        std::vector<WGPUBindGroupLayoutEntry> e;
        for (uint32_t i = 0; i < 4; ++i) {
            WGPUBindGroupLayoutEntry b = WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT;
            b.binding = i;
            b.visibility = i < 2 ? WGPUShaderStage_Vertex : WGPUShaderStage_Fragment;
            b.buffer.type = WGPUBufferBindingType_Uniform;
            b.buffer.hasDynamicOffset = true;
            e.push_back(b);
        }
        Layout l;
        for (uint32_t s = 0; s < 16; ++s) {
            l.slots[s] = slots[s];
            if (slots[s] == Slot::None)
                continue;
            WGPUBindGroupLayoutEntry t = WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT;
            t.binding = d9wgsl::kTextureBinding + s;
            t.visibility = WGPUShaderStage_Fragment;
            t.texture.sampleType = slots[s] == Slot::Depth2D ? WGPUTextureSampleType_Depth
                                                             : WGPUTextureSampleType_Float;
            t.texture.viewDimension = slots[s] == Slot::FloatCube ? WGPUTextureViewDimension_Cube
                                                                  : WGPUTextureViewDimension_2D;
            e.push_back(t);
            WGPUBindGroupLayoutEntry m = WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT;
            m.binding = d9wgsl::kSamplerBinding + s;
            m.visibility = WGPUShaderStage_Fragment;
            m.sampler.type = slots[s] == Slot::Depth2D ? WGPUSamplerBindingType_Comparison
                                                       : WGPUSamplerBindingType_Filtering;
            e.push_back(m);
        }
        WGPUBindGroupLayoutDescriptor d = WGPU_BIND_GROUP_LAYOUT_DESCRIPTOR_INIT;
        d.entryCount = e.size();
        d.entries = e.data();
        l.group = wgpuDeviceCreateBindGroupLayout(device_, &d);
        WGPUPipelineLayoutDescriptor pd = WGPU_PIPELINE_LAYOUT_DESCRIPTOR_INIT;
        pd.bindGroupLayoutCount = 1;
        pd.bindGroupLayouts = &l.group;
        l.pipeline = wgpuDeviceCreatePipelineLayout(device_, &pd);
        return layouts_.emplace(key, l).first->second;
    }

    struct VLayout {
        std::vector<WGPUVertexBufferLayout> buffers;
        std::vector<std::vector<WGPUVertexAttribute>> attributes;
        float ascale[16][4] = {};
        uint32_t streams = 0;
        uint32_t slot_of[8] = {};
        bool zero = false;
        uint32_t zero_slot = 0;
    };
    const VLayout &vertex_layout(const HostD9Draw &d, const d9sh::Program &vp, uint64_t key) {
        auto it = vlayouts_.find(key);
        if (it != vlayouts_.end())
            return it->second;
        VLayout v;
        uint32_t stream_end[8] = {};
        std::vector<WGPUVertexAttribute> per_stream[9];
        std::set<uint32_t> regs;
        for (const d9sh::DclIn &in : vp.inputs) {
            if (in.type != d9sh::R_INPUT)
                continue;
            uint32_t reg = in.index & 15;
            if (!regs.insert(reg).second)
                continue;
            bool found = false;
            for (uint32_t i = 0; i + 8 <= d.decl_size; i += 8) {
                const uint8_t *e = d.decl + i;
                uint16_t stream = (uint16_t)(e[0] | e[1] << 8);
                if (stream == 0xff)
                    break;
                uint16_t offset = (uint16_t)(e[2] | e[3] << 8);
                uint8_t type = e[4], usage = e[6], index = e[7];
                if (usage != in.usage || index != in.usage_index || stream >= 8)
                    continue;
                WGPUVertexFormat fmt;
                float scale[4];
                if (!vertex_format(type, &fmt, scale))
                    continue;
                WGPUVertexAttribute a = WGPU_VERTEX_ATTRIBUTE_INIT;
                a.format = fmt;
                a.offset = offset;
                a.shaderLocation = reg;
                per_stream[stream].push_back(a);
                memcpy(v.ascale[reg], scale, sizeof scale);
                v.streams |= 1u << stream;
                stream_end[stream] =
                    std::max<uint32_t>(stream_end[stream], offset + vertex_format_bytes(type));
                found = true;
                break;
            }
            if (!found) {
                WGPUVertexAttribute a = WGPU_VERTEX_ATTRIBUTE_INIT;
                a.format = WGPUVertexFormat_Float32x4;
                a.offset = 0;
                a.shaderLocation = reg;
                per_stream[8].push_back(a);
                v.zero = true;
            }
        }
        uint32_t slot = 0;
        for (uint32_t s = 0; s < 9; ++s) {
            if (per_stream[s].empty())
                continue;
            WGPUVertexBufferLayout b = WGPU_VERTEX_BUFFER_LAYOUT_INIT;
            if (s < 8) {
                uint32_t stride = d.stream[s].stride ? d.stream[s].stride : stream_end[s];
                b.arrayStride = std::max(stride, stream_end[s]);
                b.stepMode = WGPUVertexStepMode_Vertex;
                v.slot_of[s] = slot;
            } else {
                b.arrayStride = 16;
                b.stepMode = WGPUVertexStepMode_Instance;
                v.zero_slot = slot;
            }
            v.attributes.push_back(per_stream[s]);
            v.buffers.push_back(b);
            ++slot;
        }
        for (size_t i = 0; i < v.buffers.size(); ++i) {
            v.buffers[i].attributeCount = v.attributes[i].size();
            v.buffers[i].attributes = v.attributes[i].data();
        }
        for (int r = 0; r < 16; ++r)
            for (int k = 0; k < 4; ++k)
                if (v.ascale[r][k] == 0.0f)
                    v.ascale[r][k] = 1.0f;
        auto &out = vlayouts_.emplace(key, std::move(v)).first->second;
        for (size_t i = 0; i < out.buffers.size(); ++i)
            out.buffers[i].attributes = out.attributes[i].data(); // after the move
        return out;
    }

    struct PipeState {
        WGPUShaderModule vmod, fmod;
        const VLayout *vl;
        const Layout *layout;
        WGPUPrimitiveTopology topology;
        const uint32_t *rs;
        bool blend, zon, stencil;
        WGPUCullMode cull;
        int32_t bias;
        float slope;
        uint32_t colors;
    };
    WGPURenderPipeline pipeline(const PipeState &p, uint64_t vkey) {
        const uint32_t *rs = p.rs;
        uint64_t key = mix(mix((uint64_t)(uintptr_t)p.vmod, (uint64_t)(uintptr_t)p.fmod), vkey);
        key = mix(key, (uint64_t)p.topology | (uint64_t)p.cull << 8 |
                           (uint64_t)pass_samples_ << 16 | (uint64_t)pass_color_count_ << 24);
        key = mix(key, (uint64_t)(uintptr_t)p.layout->pipeline);
        for (int i = 0; i < 4; ++i)
            key = mix(key, (uint64_t)pass_formats_[i] + 1000 * (uint64_t)i);
        key = mix(key, pass_depth_view_ ? (uint64_t)depth_format_ : 0);
        uint64_t bkey =
            p.blend ? (1ull | (uint64_t)rs[RS_SRCBLEND] << 1 | (uint64_t)rs[RS_DESTBLEND] << 5 |
                       (uint64_t)rs[RS_BLENDOP] << 9 |
                       (uint64_t)(rs[RS_SEPARATEALPHABLENDENABLE] != 0) << 13 |
                       (uint64_t)rs[RS_SRCBLENDALPHA] << 14 |
                       (uint64_t)rs[RS_DESTBLENDALPHA] << 18 | (uint64_t)rs[RS_BLENDOPALPHA] << 22)
                    : 0;
        key = mix(key, bkey);
        key = mix(key, (uint64_t)rs[RS_COLORWRITEENABLE] | (uint64_t)rs[RS_COLORWRITEENABLE1] << 4 |
                           (uint64_t)rs[RS_COLORWRITEENABLE2] << 8 |
                           (uint64_t)rs[RS_COLORWRITEENABLE3] << 12);
        uint64_t dkey = (uint64_t)p.zon | (uint64_t)(rs[RS_ZWRITEENABLE] != 0) << 1 |
                        (uint64_t)rs[RS_ZFUNC] << 2 | (uint64_t)p.stencil << 6;
        if (p.stencil)
            dkey = mix(dkey, fnv(&rs[RS_STENCILFAIL], 7 * sizeof(uint32_t)) ^
                                 ((uint64_t)rs[RS_TWOSIDEDSTENCILMODE] << 1) ^
                                 fnv(&rs[RS_CCW_STENCILFAIL], 4 * sizeof(uint32_t)));
        key = mix(key, dkey);
        key = mix(key, (uint64_t)(uint32_t)p.bias << 32 |
                           (uint64_t)(uint32_t)std::lround(p.slope * 4096.0f));
        if (key == last_pipeline_key_ && last_pipeline_)
            return last_pipeline_;
        auto it = pipelines_.find(key);
        if (it != pipelines_.end()) {
            last_pipeline_key_ = key;
            last_pipeline_ = it->second;
            return it->second;
        }
        WGPUBlendState blends[4];
        WGPUColorTargetState targets[4];
        // Every output the program writes needs a target entry, if only an empty one.
        size_t ntarget = std::max<size_t>(pass_color_count_, 32 - __builtin_clz(p.colors | 1));
        for (size_t i = 0; i < ntarget; ++i) {
            targets[i] = WGPU_COLOR_TARGET_STATE_INIT;
            targets[i].format = i < 4 ? pass_formats_[i] : WGPUTextureFormat_Undefined;
            if (targets[i].format == WGPUTextureFormat_Undefined)
                continue;
            const uint32_t cw = (i == 0   ? rs[RS_COLORWRITEENABLE]
                                 : i == 1 ? rs[RS_COLORWRITEENABLE1]
                                 : i == 2 ? rs[RS_COLORWRITEENABLE2]
                                          : rs[RS_COLORWRITEENABLE3]) &
                                0xf;
            targets[i].writeMask = (WGPUColorWriteMask)cw; // D3D's bits are WebGPU's
            if (p.blend) {
                WGPUBlendState &b = blends[i];
                b.color.srcFactor = blend_factor(rs[RS_SRCBLEND], false);
                b.color.dstFactor = blend_factor(rs[RS_DESTBLEND], false);
                if (rs[RS_SRCBLEND] == 12)
                    b.color.dstFactor = WGPUBlendFactor_OneMinusSrcAlpha;
                if (rs[RS_SRCBLEND] == 13)
                    b.color.dstFactor = WGPUBlendFactor_SrcAlpha;
                b.color.operation = blend_op(rs[RS_BLENDOP]);
                if (rs[RS_SEPARATEALPHABLENDENABLE]) {
                    b.alpha.srcFactor = blend_factor(rs[RS_SRCBLENDALPHA], true);
                    b.alpha.dstFactor = blend_factor(rs[RS_DESTBLENDALPHA], true);
                    b.alpha.operation = blend_op(rs[RS_BLENDOPALPHA]);
                } else {
                    b.alpha.srcFactor = blend_factor(rs[RS_SRCBLEND], true);
                    b.alpha.dstFactor = blend_factor(rs[RS_DESTBLEND], true);
                    if (rs[RS_SRCBLEND] == 12)
                        b.alpha.dstFactor = WGPUBlendFactor_OneMinusSrcAlpha;
                    if (rs[RS_SRCBLEND] == 13)
                        b.alpha.dstFactor = WGPUBlendFactor_SrcAlpha;
                    b.alpha.operation = blend_op(rs[RS_BLENDOP]);
                }
                // WebGPU requires One/One for min and max.
                if (b.color.operation == WGPUBlendOperation_Min ||
                    b.color.operation == WGPUBlendOperation_Max)
                    b.color.srcFactor = b.color.dstFactor = WGPUBlendFactor_One;
                if (b.alpha.operation == WGPUBlendOperation_Min ||
                    b.alpha.operation == WGPUBlendOperation_Max)
                    b.alpha.srcFactor = b.alpha.dstFactor = WGPUBlendFactor_One;
                targets[i].blend = &b;
            }
        }
        WGPUFragmentState fs = WGPU_FRAGMENT_STATE_INIT;
        fs.module = p.fmod;
        fs.entryPoint = sv("ps_main");
        fs.targetCount = ntarget;
        fs.targets = targets;
        WGPUDepthStencilState ds = WGPU_DEPTH_STENCIL_STATE_INIT;
        ds.format = depth_format_;
        ds.depthWriteEnabled =
            p.zon && rs[RS_ZWRITEENABLE] ? WGPUOptionalBool_True : WGPUOptionalBool_False;
        ds.depthCompare = p.zon ? compare_fn(rs[RS_ZFUNC]) : WGPUCompareFunction_Always;
        if (p.stencil) {
            ds.stencilFront.failOp = stencil_op(rs[RS_STENCILFAIL]);
            ds.stencilFront.depthFailOp = stencil_op(rs[RS_STENCILZFAIL]);
            ds.stencilFront.passOp = stencil_op(rs[RS_STENCILPASS]);
            ds.stencilFront.compare = compare_fn(rs[RS_STENCILFUNC]);
            ds.stencilBack = ds.stencilFront;
            if (rs[RS_TWOSIDEDSTENCILMODE]) {
                ds.stencilBack.failOp = stencil_op(rs[RS_CCW_STENCILFAIL]);
                ds.stencilBack.depthFailOp = stencil_op(rs[RS_CCW_STENCILZFAIL]);
                ds.stencilBack.passOp = stencil_op(rs[RS_CCW_STENCILPASS]);
                ds.stencilBack.compare = compare_fn(rs[RS_CCW_STENCILFUNC]);
            }
            ds.stencilReadMask = rs[RS_STENCILMASK] & 0xff;
            ds.stencilWriteMask = rs[RS_STENCILWRITEMASK] & 0xff;
        }
        const bool strip = p.topology == WGPUPrimitiveTopology_TriangleStrip ||
                           p.topology == WGPUPrimitiveTopology_LineStrip;
        if (!strip) {
            ds.depthBias = p.bias;
            ds.depthBiasSlopeScale = p.slope;
        }
        WGPURenderPipelineDescriptor pd = WGPU_RENDER_PIPELINE_DESCRIPTOR_INIT;
        pd.layout = p.layout->pipeline;
        pd.vertex.module = p.vmod;
        pd.vertex.entryPoint = sv("vs_main");
        pd.vertex.bufferCount = p.vl->buffers.size();
        pd.vertex.buffers = p.vl->buffers.data();
        pd.primitive.topology = p.topology;
        if (strip)
            pd.primitive.stripIndexFormat = WGPUIndexFormat_Undefined;
        pd.primitive.frontFace = WGPUFrontFace_CW;
        pd.primitive.cullMode = p.cull;
        pd.depthStencil = pass_depth_view_ ? &ds : nullptr;
        pd.multisample.count = pass_samples_;
        pd.fragment = &fs;
        WGPURenderPipeline pso = wgpuDeviceCreateRenderPipeline(device_, &pd);
        pipelines_[key] = pso;
        last_pipeline_key_ = key;
        last_pipeline_ = pso;
        return pso;
    }

    struct GroupKey {
        WGPUBindGroupLayout layout;
        WGPUBuffer uniforms;
        uint64_t ranges[4];
        WGPUTextureView views[16];
        WGPUSampler samplers[16];
    };
    WGPUBindGroup bind_group(const GroupKey &k) {
        const uint64_t key = fnv(&k, sizeof k);
        auto it = groups_.find(key);
        if (it != groups_.end())
            return it->second;
        std::vector<WGPUBindGroupEntry> e;
        for (uint32_t i = 0; i < 4; ++i) {
            WGPUBindGroupEntry b = WGPU_BIND_GROUP_ENTRY_INIT;
            b.binding = i;
            b.buffer = k.uniforms;
            b.offset = 0;
            b.size = k.ranges[i];
            e.push_back(b);
        }
        for (uint32_t s = 0; s < 16; ++s) {
            if (!k.views[s])
                continue;
            WGPUBindGroupEntry t = WGPU_BIND_GROUP_ENTRY_INIT;
            t.binding = d9wgsl::kTextureBinding + s;
            t.textureView = k.views[s];
            e.push_back(t);
            WGPUBindGroupEntry m = WGPU_BIND_GROUP_ENTRY_INIT;
            m.binding = d9wgsl::kSamplerBinding + s;
            m.sampler = k.samplers[s];
            e.push_back(m);
        }
        WGPUBindGroupDescriptor d = WGPU_BIND_GROUP_DESCRIPTOR_INIT;
        d.layout = k.layout;
        d.entryCount = e.size();
        d.entries = e.data();
        WGPUBindGroup g = wgpuDeviceCreateBindGroup(device_, &d);
        groups_[key] = g;
        return g;
    }

    WGPUSampler sampler(const uint32_t *st, const Tex *t) {
        static const uint32_t none[14] = {0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0};
        if (!st)
            st = none;
        uint32_t s[14];
        memcpy(s, st, sizeof s);
        // Float formats WebGPU cannot filter are sampled nearest.
        if (t && !float32_filterable_ &&
            (t->info.format == WGPUTextureFormat_R32Float ||
             t->info.format == WGPUTextureFormat_RGBA32Float))
            s[5] = s[6] = s[7] = 1;
        uint64_t key = fnv(s, sizeof s);
        auto it = samplers_.find(key);
        if (it != samplers_.end())
            return it->second;
        WGPUSamplerDescriptor sd = WGPU_SAMPLER_DESCRIPTOR_INIT;
        sd.addressModeU = address_mode(s[1]);
        sd.addressModeV = address_mode(s[2]);
        sd.addressModeW = address_mode(s[3]);
        sd.magFilter = s[5] >= 2 ? WGPUFilterMode_Linear : WGPUFilterMode_Nearest;
        sd.minFilter = s[6] >= 2 ? WGPUFilterMode_Linear : WGPUFilterMode_Nearest;
        sd.mipmapFilter = s[7] == 2 ? WGPUMipmapFilterMode_Linear : WGPUMipmapFilterMode_Nearest;
        sd.lodMinClamp = (float)s[9];
        sd.lodMaxClamp = s[7] == 0 ? sd.lodMinClamp + 0.25f : 32.0f;
        if ((s[6] == 3 || s[5] == 3) && sd.magFilter == WGPUFilterMode_Linear &&
            sd.minFilter == WGPUFilterMode_Linear && sd.mipmapFilter == WGPUMipmapFilterMode_Linear)
            sd.maxAnisotropy = (uint16_t)std::max<uint32_t>(1, std::min<uint32_t>(16, s[10]));
        WGPUSampler out = wgpuDeviceCreateSampler(device_, &sd);
        samplers_[key] = out;
        return out;
    }
    WGPUSampler shadow_sampler() {
        if (shadow_sampler_)
            return shadow_sampler_;
        WGPUSamplerDescriptor sd = WGPU_SAMPLER_DESCRIPTOR_INIT;
        sd.magFilter = sd.minFilter = WGPUFilterMode_Linear;
        sd.compare = WGPUCompareFunction_LessEqual;
        shadow_sampler_ = wgpuDeviceCreateSampler(device_, &sd);
        return shadow_sampler_;
    }
    WGPUTextureView placeholder(bool cube) {
        WGPUTextureView &v = cube ? black_cube_ : black_;
        if (v)
            return v;
        const uint32_t layers = cube ? 6 : 1;
        WGPUTextureDescriptor td = WGPU_TEXTURE_DESCRIPTOR_INIT;
        td.size = {1, 1, layers};
        td.format = WGPUTextureFormat_BGRA8Unorm;
        td.usage = WGPUTextureUsage_TextureBinding | WGPUTextureUsage_CopyDst;
        WGPUTexture tex = wgpuDeviceCreateTexture(device_, &td);
        const uint8_t black[4] = {0, 0, 0, 255};
        for (uint32_t f = 0; f < layers; ++f) {
            WGPUTexelCopyTextureInfo dst = WGPU_TEXEL_COPY_TEXTURE_INFO_INIT;
            dst.texture = tex;
            dst.origin = {0, 0, f};
            WGPUTexelCopyBufferLayout layout = WGPU_TEXEL_COPY_BUFFER_LAYOUT_INIT;
            layout.bytesPerRow = 4;
            WGPUExtent3D one = {1, 1, 1};
            wgpuQueueWriteTexture(queue_, &dst, black, 4, &layout, &one);
        }
        WGPUTextureViewDescriptor vd = WGPU_TEXTURE_VIEW_DESCRIPTOR_INIT;
        vd.dimension = cube ? WGPUTextureViewDimension_Cube : WGPUTextureViewDimension_2D;
        vd.arrayLayerCount = layers;
        v = wgpuTextureCreateView(tex, &vd);
        return v;
    }
    // A depth texture at the far plane: every shadow lookup passes.
    void placeholder_depth() {
        WGPUTextureDescriptor td = WGPU_TEXTURE_DESCRIPTOR_INIT;
        td.size = {1, 1, 1};
        td.format = depth_format_;
        td.usage = WGPUTextureUsage_TextureBinding | WGPUTextureUsage_RenderAttachment;
        WGPUTexture tex = wgpuDeviceCreateTexture(device_, &td);
        WGPUTextureViewDescriptor vd = WGPU_TEXTURE_VIEW_DESCRIPTOR_INIT;
        vd.aspect = WGPUTextureAspect_DepthOnly;
        far_depth_view_ = wgpuTextureCreateView(tex, &vd);
        WGPUTextureView full = wgpuTextureCreateView(tex, nullptr);
        WGPUCommandEncoder enc = wgpuDeviceCreateCommandEncoder(device_, nullptr);
        WGPURenderPassDepthStencilAttachment depth = WGPU_RENDER_PASS_DEPTH_STENCIL_ATTACHMENT_INIT;
        depth.view = full;
        depth.depthLoadOp = WGPULoadOp_Clear;
        depth.depthStoreOp = WGPUStoreOp_Store;
        depth.depthClearValue = 1.0f;
        depth.stencilLoadOp = WGPULoadOp_Clear;
        depth.stencilStoreOp = WGPUStoreOp_Store;
        WGPURenderPassDescriptor rp = WGPU_RENDER_PASS_DESCRIPTOR_INIT;
        rp.depthStencilAttachment = &depth;
        WGPURenderPassEncoder pass = wgpuCommandEncoderBeginRenderPass(enc, &rp);
        wgpuRenderPassEncoderEnd(pass);
        wgpuRenderPassEncoderRelease(pass);
        WGPUCommandBuffer cb = wgpuCommandEncoderFinish(enc, nullptr);
        wgpuQueueSubmit(queue_, 1, &cb);
        wgpuCommandBufferRelease(cb);
        wgpuCommandEncoderRelease(enc);
        wgpuTextureViewRelease(full);
    }

    // ---- utility quads -------------------------------------------------------------
    WGPUBindGroupLayout utility_layout() {
        if (utility_group_layout_)
            return utility_group_layout_;
        WGPUBindGroupLayoutEntry e[3] = {WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT,
                                         WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT,
                                         WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT};
        e[0].binding = 0;
        e[0].visibility = (WGPUShaderStage)(WGPUShaderStage_Vertex | WGPUShaderStage_Fragment);
        e[0].buffer.type = WGPUBufferBindingType_Uniform;
        e[1].binding = 1;
        e[1].visibility = WGPUShaderStage_Fragment;
        e[1].texture.sampleType = WGPUTextureSampleType_Float;
        e[1].texture.viewDimension = WGPUTextureViewDimension_2D;
        e[2].binding = 2;
        e[2].visibility = WGPUShaderStage_Fragment;
        e[2].sampler.type = WGPUSamplerBindingType_Filtering;
        WGPUBindGroupLayoutDescriptor d = WGPU_BIND_GROUP_LAYOUT_DESCRIPTOR_INIT;
        d.entryCount = 3;
        d.entries = e;
        utility_group_layout_ = wgpuDeviceCreateBindGroupLayout(device_, &d);
        WGPUPipelineLayoutDescriptor pd = WGPU_PIPELINE_LAYOUT_DESCRIPTOR_INIT;
        pd.bindGroupLayoutCount = 1;
        pd.bindGroupLayouts = &utility_group_layout_;
        utility_pipeline_layout_ = wgpuDeviceCreatePipelineLayout(device_, &pd);
        return utility_group_layout_;
    }
    WGPURenderPipeline utility_pipeline(uint64_t key, const char *fragment, bool write_color,
                                        bool depth_write, bool stencil_write,
                                        WGPUTextureFormat copy_format) {
        key = mix(mix(key, (uint64_t)pass_samples_), pass_depth_view_ ? 1 : 0);
        for (int i = 0; i < 4; ++i)
            key = mix(key, (uint64_t)pass_formats_[i]);
        auto it = pipelines_.find(key);
        if (it != pipelines_.end())
            return it->second;
        utility_layout();
        WGPUColorTargetState targets[4];
        size_t n = copy_format != WGPUTextureFormat_Undefined ? 1 : pass_color_count_;
        for (size_t i = 0; i < n; ++i) {
            targets[i] = WGPU_COLOR_TARGET_STATE_INIT;
            targets[i].format =
                copy_format != WGPUTextureFormat_Undefined ? copy_format : pass_formats_[i];
            targets[i].writeMask =
                (i == 0 && write_color) ? WGPUColorWriteMask_All : WGPUColorWriteMask_None;
        }
        WGPUFragmentState fs = WGPU_FRAGMENT_STATE_INIT;
        fs.module = utility_;
        fs.entryPoint = sv(fragment);
        fs.targetCount = n;
        fs.targets = targets;
        WGPUDepthStencilState ds = WGPU_DEPTH_STENCIL_STATE_INIT;
        ds.format = depth_format_;
        ds.depthWriteEnabled = depth_write ? WGPUOptionalBool_True : WGPUOptionalBool_False;
        ds.depthCompare = WGPUCompareFunction_Always;
        if (stencil_write) {
            ds.stencilFront.compare = WGPUCompareFunction_Always;
            ds.stencilFront.passOp = WGPUStencilOperation_Replace;
            ds.stencilBack = ds.stencilFront;
        }
        WGPURenderPipelineDescriptor pd = WGPU_RENDER_PIPELINE_DESCRIPTOR_INIT;
        pd.layout = utility_pipeline_layout_;
        pd.vertex.module = utility_;
        pd.vertex.entryPoint = sv("quad_vs");
        pd.primitive.topology = WGPUPrimitiveTopology_TriangleStrip;
        pd.depthStencil =
            (copy_format == WGPUTextureFormat_Undefined && pass_depth_view_) ? &ds : nullptr;
        pd.multisample.count = pass_samples_;
        pd.fragment = &fs;
        WGPURenderPipeline pso = wgpuDeviceCreateRenderPipeline(device_, &pd);
        pipelines_[key] = pso;
        return pso;
    }
    WGPURenderPipeline clear_pipeline(bool color, bool depth, bool stencil) {
        return utility_pipeline(0xc1ea5000ull | (uint64_t)color | (uint64_t)depth << 1 |
                                    (uint64_t)stencil << 2,
                                "clear_fs", color, depth, stencil, WGPUTextureFormat_Undefined);
    }
    WGPURenderPipeline copy_pipeline(WGPUTextureFormat format, uint32_t) {
        return utility_pipeline(mix(0xb117ull, (uint64_t)format), "copy_fs", true, false, false,
                                format);
    }
    void draw_quad(const QuadIn &q, WGPUTextureView view, WGPUSampler smp) {
        uint64_t off = 0;
        WGPUBuffer b = ring_write(&q, sizeof q, &off);
        WGPUBindGroupEntry e[3] = {WGPU_BIND_GROUP_ENTRY_INIT, WGPU_BIND_GROUP_ENTRY_INIT,
                                   WGPU_BIND_GROUP_ENTRY_INIT};
        e[0].binding = 0;
        e[0].buffer = b;
        e[0].offset = off;
        e[0].size = sizeof q;
        e[1].binding = 1;
        e[1].textureView = view;
        e[2].binding = 2;
        e[2].sampler = smp;
        WGPUBindGroupDescriptor d = WGPU_BIND_GROUP_DESCRIPTOR_INIT;
        d.layout = utility_layout();
        d.entryCount = 3;
        d.entries = e;
        WGPUBindGroup g = wgpuDeviceCreateBindGroup(device_, &d);
        wgpuRenderPassEncoderSetBindGroup(pass_, 0, g, 0, nullptr);
        wgpuRenderPassEncoderDraw(pass_, 4, 1, 0, 0);
        wgpuBindGroupRelease(g);
    }

    void fill_constants(uint8_t *out, const float *c, uint32_t count, const d9sh::Program &p,
                        uint32_t n) {
        memset(out, 0, (size_t)n * 16);
        if (c && count)
            memcpy(out, c, (size_t)std::min(count, n) * 16);
        for (const auto &def : p.defs)
            if (def.first < n)
                memcpy(out + (size_t)def.first * 16, def.second.data(), 16);
    }

    void encode_primitives(const HostD9Draw &d) {
        uint32_t count = d.primitive_count;
        bool fan = false;
        switch (d.primitive) {
        case 1:
            break;
        case 2:
            count *= 2;
            break;
        case 3:
            count += 1;
            break;
        case 4:
            count *= 3;
            break;
        case 5:
            count += 2;
            break;
        case 6:
            fan = true;
            break;
        default:
            return;
        }
        if (!d.primitive_count)
            return;
        bool indexed = d.index_buffer || d.inline_indices;
        if (!indexed && !fan) {
            wgpuRenderPassEncoderDraw(pass_, count, 1, d.start, 0);
            return;
        }
        const WGPUIndexFormat itype =
            d.index_size == 4 ? WGPUIndexFormat_Uint32 : WGPUIndexFormat_Uint16;
        const uint32_t isize = d.index_size == 4 ? 4 : 2;
        if (!fan) {
            if (d.index_buffer) {
                auto b = buffers_.find(d.index_buffer);
                if (b == buffers_.end() || !b->second.buffer)
                    return;
                if ((uint64_t)(d.start + count) * isize > b->second.shadow.size())
                    return;
                b->second.used = serial_;
                wgpuRenderPassEncoderSetIndexBuffer(pass_, b->second.buffer, itype, 0,
                                                    WGPU_WHOLE_SIZE);
                wgpuRenderPassEncoderDrawIndexed(pass_, count, 1, d.start, d.base_vertex, 0);
            } else {
                uint64_t off = 0;
                WGPUBuffer b = ring_write(d.inline_indices, (uint64_t)count * isize, &off,
                                          WGPUBufferUsage_Vertex);
                wgpuRenderPassEncoderSetIndexBuffer(pass_, b, itype, off,
                                                    round_up((uint64_t)count * isize, 4));
                wgpuRenderPassEncoderDrawIndexed(pass_, count, 1, 0, 0, 0);
            }
            return;
        }
        fan_.resize((size_t)count * 3);
        auto source = [&](uint32_t i) -> uint32_t {
            if (!indexed)
                return d.start + i;
            const uint8_t *p = nullptr;
            if (d.inline_indices) {
                p = d.inline_indices + (size_t)i * isize;
            } else {
                auto b = buffers_.find(d.index_buffer);
                size_t at = (size_t)(d.start + i) * isize;
                if (b == buffers_.end() || at + isize > b->second.shadow.size())
                    return 0;
                p = b->second.shadow.data() + at;
            }
            uint32_t v = isize == 4
                             ? (uint32_t)(p[0] | p[1] << 8 | p[2] << 16 | (uint32_t)p[3] << 24)
                             : (uint32_t)(p[0] | p[1] << 8);
            return v + (uint32_t)(d.inline_indices ? 0 : d.base_vertex);
        };
        for (uint32_t i = 0; i < count; ++i) {
            fan_[i * 3] = source(0);
            fan_[i * 3 + 1] = source(i + 1);
            fan_[i * 3 + 2] = source(i + 2);
        }
        uint64_t off = 0;
        WGPUBuffer b = ring_write(fan_.data(), fan_.size() * 4, &off, WGPUBufferUsage_Vertex);
        wgpuRenderPassEncoderSetIndexBuffer(pass_, b, WGPUIndexFormat_Uint32, off, fan_.size() * 4);
        wgpuRenderPassEncoderDrawIndexed(pass_, count * 3, 1, 0, 0, 0);
    }

    float wanted_scale() const {
        if (recomp_env("D3D9_SCALE") || !base_rows_)
            return 0.0f;
        int dw = 0, dh = 0;
        if (!host_present_drawable(&dw, &dh) || dh <= 0)
            return 0.0f;
        int rows = dh;
        if (const char *min = recomp_env("D3D9_MIN_ROWS"))
            rows = std::max(rows, atoi(min));
        float s = std::floor(8.0f * rows / base_rows_ + 0.5f) / 8.0f;
        return std::max(1.0f, std::min(8.0f, s));
    }
    void follow_drawable() {
        const float want = wanted_scale();
        if (want <= 0 || std::fabs(want - scale_) < 0.01f) {
            rescale_frames_ = 0;
            return;
        }
        if (++rescale_frames_ < 15)
            return;
        rescale_frames_ = 0;
        end_pass();
        submit();
        scale_ = want;
        fitted_.clear();
        std::vector<HostD9TextureDesc> again;
        for (auto &kv : textures_)
            if (kv.second.scale != 1.0f ||
                ((kv.second.desc.usage & (HOST_D9_USAGE_RENDERTARGET | HOST_D9_USAGE_DEPTH)) &&
                 kv.second.desc.kind == HOST_D9_TEX_2D))
                again.push_back(kv.second.desc);
        for (const HostD9TextureDesc &d : again)
            define(d);
        fprintf(stderr, "d3d9: render targets now at %.2fx the game's size\n", scale_);
    }

    void skip(const char *why) {
        ++skips_[why];
    }
    void report() {
        if (!recomp_env("D3D9_STATS"))
            return;
        double t = (double)os_monotonic_ns() * 1e-9;
        double fps = report_time_ > 0 ? (presents_ - report_frames_) / (t - report_time_) : 0.0;
        const uint64_t frames = presents_ > report_frames_ ? presents_ - report_frames_ : 1;
        fprintf(stderr,
                "d3d9 webgpu: frame %llu: %.1f fps, %.0f draws/frame, %zu textures, %zu pipelines",
                (unsigned long long)presents_, fps, double(draws_ - report_draws_) / double(frames),
                textures_.size(), pipelines_.size());
        for (auto &s : skips_)
            fprintf(stderr, ", %s %llu", s.first.c_str(), (unsigned long long)s.second);
        fprintf(stderr, "\n");
        report_time_ = t;
        report_frames_ = presents_;
        report_draws_ = draws_;
    }

    struct EncoderState {
        WGPURenderPipeline pipeline = nullptr;
        uint32_t stencil_ref = 0xffffffffu;
        bool viewport_valid = false, scissor_valid = false;
        float viewport[6] = {};
        uint32_t scissor[4] = {};
    };

    WebGpuDevice *dev_;
    WGPUDevice device_;
    WGPUQueue queue_;
    bool ok_ = false;
    bool bc_ = false, unorm16_ = false, float32_filterable_ = false;
    WGPUTextureFormat depth_format_ = WGPUTextureFormat_Depth24PlusStencil8;
    uint64_t uniform_align_ = 256;
    uint32_t max_dimension_ = 8192;
    WGPUShaderModule utility_ = nullptr;
    WGPUBindGroupLayout utility_group_layout_ = nullptr;
    WGPUPipelineLayout utility_pipeline_layout_ = nullptr;
    WGPUBuffer zero_ = nullptr;
    Ring uniform_ring_, vertex_ring_;

    WGPUCommandEncoder encoder_ = nullptr;
    uint64_t serial_ = 0;
    WGPURenderPassEncoder pass_ = nullptr;
    HostD9Target pass_target_{};
    Tex *pass_color_[4] = {};
    WGPUTextureFormat pass_formats_[4] = {};
    uint32_t pass_color_count_ = 0;
    Tex *pass_depth_tex_ = nullptr;
    WGPUTextureView pass_depth_view_ = nullptr;
    uint32_t pass_width_ = 0, pass_height_ = 0, pass_samples_ = 1;
    float pass_scale_ = 1.0f;
    int pass_slot_ = -1;
    EncoderState es_;
    WGPUQuerySet query_set_ = nullptr;
    uint32_t queries_used_ = 0;

    bool scale_chosen_ = false;
    uint32_t base_rows_ = 0;
    int rescale_frames_ = 0;
    float scale_ = recomp_env("D3D9_SCALE")
                       ? std::max(1.0f, std::min(8.0f, (float)atof(recomp_env("D3D9_SCALE"))))
                       : 1.0f;

    std::unordered_map<uint32_t, Tex> textures_;
    std::vector<Tex *> tex_index_;
    std::unordered_map<uint32_t, Buf> buffers_;
    std::unordered_map<uint64_t, WGPUShaderModule> modules_;
    std::unordered_map<uint64_t, Layout> layouts_;
    std::unordered_map<uint64_t, VLayout> vlayouts_;
    std::unordered_map<uint64_t, WGPURenderPipeline> pipelines_;
    uint64_t last_pipeline_key_ = 0;
    WGPURenderPipeline last_pipeline_ = nullptr;
    std::unordered_map<uint64_t, WGPUBindGroup> groups_;
    std::unordered_map<uint64_t, WGPUSampler> samplers_;
    WGPUSampler shadow_sampler_ = nullptr;
    std::unordered_map<uint64_t, WGPUTextureView> fitted_;
    WGPUTextureView black_ = nullptr, black_cube_ = nullptr, far_depth_view_ = nullptr;
    std::vector<uint8_t> scratch_, packed_, pad_, uniform_bytes_;
    std::vector<uint32_t> fan_;
    std::unordered_map<uint32_t, Query> queries_;
    uint32_t query_ = 0;

    uint64_t draws_ = 0, presents_ = 0, stat_calls_ = 0;
    double report_time_ = 0;
    uint64_t report_frames_ = 0, report_draws_ = 0;
    std::map<std::string, uint64_t> skips_;
};

} // namespace

D9Backend *d9_webgpu_create(gpu::Device *device) {
    auto *webgpu = dynamic_cast<WebGpuDevice *>(device);
    if (!webgpu)
        return nullptr;
    auto *r = new WebGpuRenderer(webgpu);
    if (!r->ok()) {
        delete r;
        return nullptr;
    }
    return r;
}
