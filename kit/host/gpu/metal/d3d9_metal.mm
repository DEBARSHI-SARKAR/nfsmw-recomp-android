// d3d9_metal.mm - the Direct3D 9 device's renderer on Metal: a D9Backend
// (host/gpu/d3d9_backend.h), driven by host/gpu/d3d9_host.cpp. It is
// Objective-C++, so the hosts compile it into their present sources.
//
// Shaders are translated to MSL (dx/d3d9_msl.h) and compiled once per
// program. Textures, surfaces and buffers are mirrored under the shim's ids.
// Draws are encoded on the guest thread into one command buffer per frame,
// which Present commits before handing the back buffer to the presenter as a
// GPU texture: a frame never comes back to the CPU unless the game reads a
// render target or a frame dump asks for it.
#import <Metal/Metal.h>
#import <QuartzCore/QuartzCore.h>

#include "../../../dx/d3d9_msl.h"
#include "../../../dx/d3d9_shader.h"
#include "../../../dx/host_d9.h"
#include "../../../platform/os.h"
#include "../../../runtime/guest.h"
#include "../../d3d_render.h"
#include "metal_device.h"
#include "../../present.h"
#include "../d3d9_backend.h"
#include "../d3d9_common.h"

#include <atomic>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <TargetConditionals.h>
#if TARGET_OS_OSX
#include <libproc.h> // not in the iOS SDK
#endif
#include <thread>
#include <deque>
#include <condition_variable>
#include <pthread.h>
#include <map>
#include <set>
#include <memory>
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>

namespace {

using namespace d9gpu;

// How a D3DFORMAT is stored in Metal.
struct MtlFormat {
    MTLPixelFormat pixel = MTLPixelFormatInvalid;
    Conv conv = Conv::Unsupported;
    uint32_t bytes = 4; // bytes per source pixel, or per 4x4 block for DXT
    bool block = false;
};

MtlFormat format_info(uint32_t fmt, bool bc) {
    const FormatInfo f = d9gpu::format_info(fmt, bc);
    MtlFormat m;
    m.conv = f.conv;
    m.bytes = f.bytes;
    m.block = f.block;
    switch (f.store) {
    case Store::BGRA8:
        m.pixel = MTLPixelFormatBGRA8Unorm;
        break;
    case Store::A8:
        m.pixel = MTLPixelFormatA8Unorm;
        break;
    case Store::RGBA16:
        m.pixel = MTLPixelFormatRGBA16Unorm;
        break;
    case Store::R16F:
        m.pixel = MTLPixelFormatR16Float;
        break;
    case Store::RGBA16F:
        m.pixel = MTLPixelFormatRGBA16Float;
        break;
    case Store::R32F:
        m.pixel = MTLPixelFormatR32Float;
        break;
    case Store::RGBA32F:
        m.pixel = MTLPixelFormatRGBA32Float;
        break;
    case Store::BC1:
        m.pixel = MTLPixelFormatBC1_RGBA;
        break;
    case Store::BC2:
        m.pixel = MTLPixelFormatBC2_RGBA;
        break;
    case Store::BC3:
        m.pixel = MTLPixelFormatBC3_RGBA;
        break;
    case Store::Depth:
        m.pixel = MTLPixelFormatDepth32Float_Stencil8;
        break;
    }
    return m;
}

struct Tex {
    HostD9TextureDesc desc{};
    MtlFormat info;
    id<MTLTexture> texture = nil;
    gpu::Texture imported;
    uint64_t used = 0;  // the last frame serial that read or wrote it
    float scale = 1.0f; // physical pixels per guest pixel: render targets are rendered larger
    bool cube = false, depth = false; // what `texture` is, without asking it
    // A multisampled target draws into `msaa` and resolves into `texture`,
    // which is what everything else reads.
    id<MTLTexture> msaa = nil;
    uint32_t samples = 1;
};
// A buffer replaced while a frame still read it, kept for reuse once that
// frame is done. [lo, hi) is what has been written since it was replaced.
struct SpareBuf {
    id<MTLBuffer> buffer = nil;
    uint64_t retired = 0;
    uint32_t lo = 0, hi = 0;
};
struct Buf {
    id<MTLBuffer> buffer = nil;
    std::vector<uint8_t> shadow; // the contents, for fans and for copy-on-write
    uint64_t used = 0;
    std::vector<SpareBuf> spares;
};

MTLBlendFactor blend_factor(uint32_t b, bool alpha) {
    switch (b) {
    case 1:
        return MTLBlendFactorZero;
    case 2:
        return MTLBlendFactorOne;
    case 3:
        return alpha ? MTLBlendFactorSourceAlpha : MTLBlendFactorSourceColor;
    case 4:
        return alpha ? MTLBlendFactorOneMinusSourceAlpha : MTLBlendFactorOneMinusSourceColor;
    case 5:
    case 12:
        return MTLBlendFactorSourceAlpha;
    case 6:
    case 13:
        return MTLBlendFactorOneMinusSourceAlpha;
    case 7:
        return MTLBlendFactorDestinationAlpha;
    case 8:
        return MTLBlendFactorOneMinusDestinationAlpha;
    case 9:
        return alpha ? MTLBlendFactorDestinationAlpha : MTLBlendFactorDestinationColor;
    case 10:
        return alpha ? MTLBlendFactorOneMinusDestinationAlpha
                     : MTLBlendFactorOneMinusDestinationColor;
    case 11:
        return MTLBlendFactorSourceAlphaSaturated;
    case 14:
        return alpha ? MTLBlendFactorBlendAlpha : MTLBlendFactorBlendColor;
    case 15:
        return alpha ? MTLBlendFactorOneMinusBlendAlpha : MTLBlendFactorOneMinusBlendColor;
    default:
        return MTLBlendFactorOne;
    }
}
MTLBlendOperation blend_op(uint32_t op) {
    switch (op) {
    case 2:
        return MTLBlendOperationSubtract;
    case 3:
        return MTLBlendOperationReverseSubtract;
    case 4:
        return MTLBlendOperationMin;
    case 5:
        return MTLBlendOperationMax;
    default:
        return MTLBlendOperationAdd;
    }
}
MTLCompareFunction compare_fn(uint32_t f) {
    switch (f) {
    case 1:
        return MTLCompareFunctionNever;
    case 2:
        return MTLCompareFunctionLess;
    case 3:
        return MTLCompareFunctionEqual;
    case 4:
        return MTLCompareFunctionLessEqual;
    case 5:
        return MTLCompareFunctionGreater;
    case 6:
        return MTLCompareFunctionNotEqual;
    case 7:
        return MTLCompareFunctionGreaterEqual;
    default:
        return MTLCompareFunctionAlways;
    }
}
MTLStencilOperation stencil_op(uint32_t op) {
    switch (op) {
    case 2:
        return MTLStencilOperationZero;
    case 3:
        return MTLStencilOperationReplace;
    case 4:
        return MTLStencilOperationIncrementClamp;
    case 5:
        return MTLStencilOperationDecrementClamp;
    case 6:
        return MTLStencilOperationInvert;
    case 7:
        return MTLStencilOperationIncrementWrap;
    case 8:
        return MTLStencilOperationDecrementWrap;
    default:
        return MTLStencilOperationKeep;
    }
}
MTLSamplerAddressMode address_mode(uint32_t a) {
    switch (a) {
    case 2:
        return MTLSamplerAddressModeMirrorRepeat;
    case 3:
        return MTLSamplerAddressModeClampToEdge;
    case 4:
        return MTLSamplerAddressModeClampToBorderColor;
    case 5:
        return MTLSamplerAddressModeMirrorClampToEdge;
    default:
        return MTLSamplerAddressModeRepeat;
    }
}

// A D3DDECLTYPE as a Metal vertex format, and the scale that turns what the
// shader receives back into the value Direct3D would have handed it.
bool vertex_format(uint32_t type, MTLVertexFormat *fmt, float scale[4]) {
    for (int k = 0; k < 4; ++k)
        scale[k] = 1.0f;
    switch (type) {
    case 0:
        *fmt = MTLVertexFormatFloat;
        return true;
    case 1:
        *fmt = MTLVertexFormatFloat2;
        return true;
    case 2:
        *fmt = MTLVertexFormatFloat3;
        return true;
    case 3:
        *fmt = MTLVertexFormatFloat4;
        return true;
    case 4:
        *fmt = MTLVertexFormatUChar4Normalized_BGRA;
        return true;
    case 5:
        *fmt = MTLVertexFormatUChar4Normalized;
        for (int k = 0; k < 4; ++k)
            scale[k] = 255.0f;
        return true;
    case 6:
        *fmt = MTLVertexFormatShort2Normalized;
        scale[0] = scale[1] = 32767.0f;
        return true;
    case 7:
        *fmt = MTLVertexFormatShort4Normalized;
        for (int k = 0; k < 4; ++k)
            scale[k] = 32767.0f;
        return true;
    case 8:
        *fmt = MTLVertexFormatUChar4Normalized;
        return true;
    case 9:
        *fmt = MTLVertexFormatShort2Normalized;
        return true;
    case 10:
        *fmt = MTLVertexFormatShort4Normalized;
        return true;
    case 11:
        *fmt = MTLVertexFormatUShort2Normalized;
        return true;
    case 12:
        *fmt = MTLVertexFormatUShort4Normalized;
        return true;
    case 13:
        *fmt = MTLVertexFormatUInt1010102Normalized;
        scale[0] = scale[1] = scale[2] = 1023.0f;
        return true;
    case 14:
        *fmt = MTLVertexFormatInt1010102Normalized;
        return true;
    case 15:
        *fmt = MTLVertexFormatHalf2;
        return true;
    case 16:
        *fmt = MTLVertexFormatHalf4;
        return true;
    default:
        return false;
    }
}

const char *kUtilitySource = R"MSL(#include <metal_stdlib>
using namespace metal;
struct QuadOut { float4 pos [[position]]; float2 uv; };
struct QuadIn { float4 rect; float4 uv; float z; float pad0; float pad1; float pad2; float4 color; };
vertex QuadOut quad_vs(uint vid [[vertex_id]], constant QuadIn &q [[buffer(0)]]) {
    float2 c = float2(float(vid & 1), float((vid >> 1) & 1));
    QuadOut o;
    o.pos = float4(mix(q.rect.xy, q.rect.zw, c), q.z, 1.0);
    o.uv = mix(q.uv.xy, q.uv.zw, c);
    return o;
}
fragment float4 copy_fs(QuadOut i [[stage_in]], texture2d<float> t [[texture(0)]], sampler s [[sampler(0)]]) {
    return t.sample(s, i.uv);
}
fragment float4 clear_fs(QuadOut i [[stage_in]], constant QuadIn &q [[buffer(0)]]) {
    return q.color;
}
)MSL";

struct QuadIn {
    float rect[4];
    float uv[4];
    float z, pad0, pad1, pad2;
    float color[4];
};

class Renderer final : public D9Backend {
  public:
    const char *name() const override {
        return "Metal";
    }
    explicit Renderer(gpu::MetalDevice *device)
        : device_(device), mtl_(device->native()), queue_(device->native_queue()) {
        bc_ = false;
        if (@available(macOS 11.0, iOS 16.4, *))
            bc_ = mtl_.supportsBCTextureCompression;
#if TARGET_OS_OSX
        bc_ = true;
#endif
        NSError *error = nil;
        utility_ = [mtl_ newLibraryWithSource:[NSString stringWithUTF8String:kUtilitySource]
                                      options:nil
                                        error:&error];
        if (!utility_)
            fprintf(stderr, "d3d9 metal: utility shaders failed: %s\n",
                    error.localizedDescription.UTF8String);
        frames_ = dispatch_semaphore_create(3);
        MTLVertexDescriptor *vd = nil;
        (void)vd;
        zero_ = [mtl_ newBufferWithLength:64 options:MTLResourceStorageModeShared];
        memset(zero_.contents, 0, 64);
    }

    bool ok() const {
        return utility_ != nil;
    }

    // ---- textures ------------------------------------------------------
    void define(const HostD9TextureDesc &d) override {
        end_pass();
        Tex &t = textures_[d.id];
        if (t.imported)
            device_->destroy(t.imported);
        t = Tex{};
        t.desc = d;
        t.info = format_info(d.format, bc_);
        if (t.info.conv == Conv::Unsupported) {
            fprintf(stderr, "d3d9 metal: texture format %08x is drawn as BGRA8\n", d.format);
            t.info.conv = Conv::Direct;
        }
        bool depth =
            (d.usage & HOST_D9_USAGE_DEPTH) || t.info.pixel == MTLPixelFormatDepth32Float_Stencil8;
        if (depth)
            t.info.pixel = MTLPixelFormatDepth32Float_Stencil8;
        MTLTextureDescriptor *td = [MTLTextureDescriptor new];
        td.textureType = d.kind == HOST_D9_TEX_CUBE ? MTLTextureTypeCube : MTLTextureType2D;
        td.pixelFormat = t.info.pixel;
        td.width = d.width ? d.width : 1;
        td.height = d.kind == HOST_D9_TEX_CUBE ? td.width : (d.height ? d.height : 1);
        // Render targets and depth buffers render at the chosen scale; the
        // guest keeps seeing its own sizes.
        bool target = (d.usage & (HOST_D9_USAGE_RENDERTARGET | HOST_D9_USAGE_DEPTH)) || depth;
        if (target && !scale_chosen_ && d.kind == HOST_D9_TEX_2D) {
            // The first target is the back buffer; its height is what the
            // scale is measured against from then on.
            scale_chosen_ = true;
            base_rows_ = d.height;
            const float want = wanted_scale();
            if (want > 0)
                scale_ = want;
            fprintf(stderr, "d3d9: render targets at %.2fx the game's size\n", scale_);
        }
        if (target && d.kind == HOST_D9_TEX_2D && scale_ != 1.0f) {
            float s = scale_;
            NSUInteger limit = 16384;
            while (s > 1.0f && (td.width * s > limit || td.height * s > limit))
                s -= 0.25f;
            t.scale = std::max(1.0f, s);
            td.width = (NSUInteger)std::lround(td.width * t.scale);
            td.height = (NSUInteger)std::lround(td.height * t.scale);
        }
        uint32_t max_levels = 1;
        for (uint32_t s = (uint32_t)std::max(td.width, td.height); s > 1; s >>= 1)
            ++max_levels;
        td.mipmapLevelCount = std::max<uint32_t>(1, std::min(d.levels ? d.levels : 1, max_levels));
        td.usage = MTLTextureUsageShaderRead;
        if ((d.usage & (HOST_D9_USAGE_RENDERTARGET | HOST_D9_USAGE_DEPTH)) || depth)
            td.usage |= MTLTextureUsageRenderTarget;
        td.storageMode = depth ? MTLStorageModePrivate : MTLStorageModeShared;
        if (t.info.block)
            td.usage = MTLTextureUsageShaderRead;
        t.texture = [mtl_ newTextureWithDescriptor:td];
        t.cube = td.textureType == MTLTextureTypeCube;
        t.depth = td.pixelFormat == MTLPixelFormatDepth32Float_Stencil8;
        if (d.samples > 1 && target && d.kind == HOST_D9_TEX_2D && !t.info.block && t.texture) {
            NSUInteger n = d.samples >= 4 ? 4 : 2;
            while (n > 1 && ![mtl_ supportsTextureSampleCount:n])
                n /= 2;
            if (n > 1) {
                MTLTextureDescriptor *md = [MTLTextureDescriptor new];
                md.textureType = MTLTextureType2DMultisample;
                md.pixelFormat = td.pixelFormat;
                md.width = td.width;
                md.height = td.height;
                md.sampleCount = n;
                md.usage = MTLTextureUsageRenderTarget;
                md.storageMode = MTLStorageModePrivate;
                t.msaa = [mtl_ newTextureWithDescriptor:md];
                t.samples = t.msaa ? (uint32_t)n : 1;
            }
        }
        index_texture(d.id, &t);
        if (!t.texture)
            fprintf(stderr, "d3d9 metal: texture %u (%ux%u fmt %08x) was not created\n", d.id,
                    d.width, d.height, d.format);
    }

    void drop(uint32_t id) override {
        auto it = textures_.find(id);
        if (it == textures_.end())
            return;
        end_pass();
        if (it->second.imported)
            device_->destroy(it->second.imported);
        index_texture(id, nullptr);
        textures_.erase(it);
    }

    void upload(uint32_t id, uint32_t face, uint32_t level, const uint8_t *bytes,
                uint32_t pitch) override {
        auto it = textures_.find(id);
        if (it == textures_.end() || !it->second.texture || !bytes)
            return;
        Tex &t = it->second;
        if (level >= t.texture.mipmapLevelCount)
            return;
        if (t.info.pixel == MTLPixelFormatDepth32Float_Stencil8)
            return;     // the game's view of a depth buffer is not uploaded
        settle(t.used); // draws already encoded read the old contents
        uint32_t w = std::max<uint32_t>((uint32_t)t.desc.width >> level, 1);
        uint32_t h = std::max<uint32_t>(
            (uint32_t)(t.desc.kind == HOST_D9_TEX_CUBE ? t.desc.width : t.desc.height) >> level, 1);
        MTLRegion region = MTLRegionMake2D(0, 0, w, h);
        if (t.scale != 1.0f) {
            // The game wrote a scaled target: stretch its pixels to the target's size.
            std::vector<uint8_t> packed;
            const uint8_t *src = bytes;
            uint32_t src_pitch = pitch;
            if (t.info.conv != Conv::Direct) {
                convert(t.info.conv, bytes, w, h, pitch, scratch_);
                src = scratch_.data();
                src_pitch = w * 4;
            }
            uint32_t pw = std::max<uint32_t>((uint32_t)t.texture.width >> level, 1);
            uint32_t ph = std::max<uint32_t>((uint32_t)t.texture.height >> level, 1);
            uint32_t bpp = t.info.conv == Conv::Direct ? t.info.bytes : 4;
            packed.resize((size_t)pw * ph * bpp);
            for (uint32_t y = 0; y < ph; ++y) {
                uint32_t sy = std::min(h - 1, (uint32_t)(y * (uint64_t)h / ph));
                for (uint32_t x = 0; x < pw; ++x) {
                    uint32_t sx = std::min(w - 1, (uint32_t)(x * (uint64_t)w / pw));
                    memcpy(&packed[((size_t)y * pw + x) * bpp],
                           src + (size_t)sy * src_pitch + (size_t)sx * bpp, bpp);
                }
            }
            [t.texture replaceRegion:MTLRegionMake2D(0, 0, pw, ph)
                         mipmapLevel:level
                               slice:face
                           withBytes:packed.data()
                         bytesPerRow:pw * bpp
                       bytesPerImage:0];
            return;
        }
        if (t.info.block) {
            [t.texture replaceRegion:region
                         mipmapLevel:level
                               slice:face
                           withBytes:bytes
                         bytesPerRow:pitch
                       bytesPerImage:0];
        } else if (t.info.conv == Conv::Direct) {
            [t.texture replaceRegion:region
                         mipmapLevel:level
                               slice:face
                           withBytes:bytes
                         bytesPerRow:pitch
                       bytesPerImage:0];
        } else {
            convert(t.info.conv, bytes, w, h, pitch, scratch_);
            [t.texture replaceRegion:region
                         mipmapLevel:level
                               slice:face
                           withBytes:scratch_.data()
                         bytesPerRow:w * 4
                       bytesPerImage:0];
        }
    }

    bool read(uint32_t id, uint32_t face, uint32_t level, uint8_t *bytes, uint32_t pitch) override {
        auto it = textures_.find(id);
        if (it == textures_.end() || !it->second.texture)
            return false;
        Tex &t = it->second;
        if (t.texture.storageMode == MTLStorageModePrivate || t.info.block)
            return false;
        settle(t.used);
        uint32_t pw = std::max<uint32_t>((uint32_t)t.texture.width >> level, 1);
        uint32_t ph = std::max<uint32_t>((uint32_t)t.texture.height >> level, 1);
        if (t.scale == 1.0f) {
            [t.texture getBytes:bytes
                    bytesPerRow:pitch
                  bytesPerImage:0
                     fromRegion:MTLRegionMake2D(0, 0, pw, ph)
                    mipmapLevel:level
                          slice:face];
            return true;
        }
        // A scaled target reads back at the game's size, one sample per pixel.
        uint32_t w = std::max<uint32_t>(t.desc.width >> level, 1);
        uint32_t h = std::max<uint32_t>(t.desc.height >> level, 1);
        std::vector<uint8_t> full((size_t)pw * ph * 4);
        [t.texture getBytes:full.data()
                bytesPerRow:pw * 4
              bytesPerImage:0
                 fromRegion:MTLRegionMake2D(0, 0, pw, ph)
                mipmapLevel:level
                      slice:face];
        for (uint32_t y = 0; y < h; ++y) {
            uint32_t sy = std::min(ph - 1, (uint32_t)((y + 0.5) * ph / h));
            for (uint32_t x = 0; x < w; ++x) {
                uint32_t sx = std::min(pw - 1, (uint32_t)((x + 0.5) * pw / w));
                memcpy(bytes + (size_t)y * pitch + (size_t)x * 4, &full[((size_t)sy * pw + sx) * 4],
                       4);
            }
        }
        return true;
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
        const uint32_t end = offset + size;
        for (SpareBuf &s : b.spares) {
            s.lo = s.hi > s.lo ? std::min(s.lo, offset) : offset;
            s.hi = std::max(s.hi, end);
        }
        if (!b.buffer || b.buffer.length < total) {
            b.buffer = [mtl_ newBufferWithBytes:b.shadow.data()
                                         length:std::max<size_t>(b.shadow.size(), 4)
                                        options:MTLResourceStorageModeShared];
            b.used = 0;
            b.spares.clear();
            return;
        }
        // A buffer an unfinished frame reads is replaced rather than written:
        // those draws keep the old one, and nothing waits. The replacement is
        // a spare whose frame has finished, brought up to date by copying
        // only what changed since it was set aside.
        const uint64_t done = completed_.load();
        if (b.used > done) {
            SpareBuf retired{b.buffer, b.used, offset, end};
            size_t pick = b.spares.size();
            for (size_t i = 0; i < b.spares.size(); ++i)
                if (b.spares[i].retired <= done && b.spares[i].buffer.length >= total) {
                    pick = i;
                    break;
                }
            if (pick < b.spares.size()) {
                SpareBuf s = b.spares[pick];
                b.spares.erase(b.spares.begin() + (ptrdiff_t)pick);
                if (s.hi > s.lo)
                    memcpy((uint8_t *)s.buffer.contents + s.lo, b.shadow.data() + s.lo,
                           s.hi - s.lo);
                b.buffer = s.buffer;
            } else {
                b.buffer = [mtl_ newBufferWithBytes:b.shadow.data()
                                             length:std::max<size_t>(b.shadow.size(), 4)
                                            options:MTLResourceStorageModeShared];
            }
            b.spares.push_back(retired);
            if (b.spares.size() > 4)
                b.spares.erase(b.spares.begin());
            b.used = 0;
            return;
        }
        memcpy((uint8_t *)b.buffer.contents + offset, bytes, size);
    }
    void buffer_drop(uint32_t id) override {
        end_pass();
        buffers_.erase(id);
    }

    // ---- drawing --------------------------------------------------------
    void draw(const HostD9Draw &d) override {
        ++stat_calls_;
        if (!ensure_pass(d.target)) {
            skip("no render pass");
            return;
        }
        count_query();
        uint64_t vs_key = d.vs_key ? d.vs_key : d9sh::code_key(d.vs, d.vs_size);
        uint64_t ps_key = d.ps_key ? d.ps_key : d9sh::code_key(d.ps, d.ps_size);
        const d9sh::Program &vp = d9sh::program_for_key(vs_key, d.vs, d.vs_size);
        const d9sh::Program &pp = d9sh::program_for_key(ps_key, d.ps, d.ps_size);
        if (!vp.ok || !pp.ok) {
            skip("undecoded shader");
            const std::string why =
                std::string(vp.ok ? "pixel shader: " + pp.why : "vertex shader: " + vp.why);
            if (undecoded_.insert(why + (d.label ? d.label : "")).second)
                fprintf(stderr, "d3d9 metal: skipping draws: %s (%s)\n", why.c_str(),
                        d.label ? d.label : "no label");
            return;
        }
        d9msl::PixelVariant variant;
        Tex *bound[16];
        for (uint32_t s = 0; s < 16; ++s) {
            Tex *t = d.sampler_texture[s] ? tex_ptr(d.sampler_texture[s]) : nullptr;
            bound[s] = t;
            if (t && t->texture && t->depth && t->desc.kind == HOST_D9_TEX_2D)
                variant.depth_mask |= (uint16_t)(1u << s);
        }
        if (pp.major < 2) {
            for (int s = 0; s < 8; ++s)
                if (bound[s] && bound[s]->desc.kind == HOST_D9_TEX_CUBE)
                    variant.cube_mask |= (uint16_t)(1u << s);
            variant.projected_mask = (uint16_t)d.projected_mask;
        }
        id<MTLFunction> vfn = function(vs_key, vp, variant, false);
        id<MTLFunction> ffn = function(ps_key, pp, variant, true);
        if (!vfn || !ffn) {
            skip("untranslated shader");
            return;
        }
        const uint32_t *rs = d.render_state;

        // Vertex layout.
        float ascale[16][4];
        for (auto &a : ascale)
            for (float &x : a)
                x = 1.0f;
        uint64_t vkey =
            mix(mix((uint64_t)d.decl_id << 32 | d.decl_size, vs_key), fnv(d.decl, d.decl_size));
        {
            uint64_t strides = 0;
            for (int i = 0; i < 8; ++i)
                strides = strides * 1099511628211ull + d.stream[i].stride;
            vkey = mix(vkey, strides);
        }
        MTLVertexDescriptor *vdesc = vertex_descriptor(d, vp, vkey, ascale);

        // Pipeline.
        uint64_t key = mix(mix(vs_key, ps_key), variant.key());
        key = mix(key, vkey);
        MTLPixelFormat cf[4] = {MTLPixelFormatInvalid, MTLPixelFormatInvalid, MTLPixelFormatInvalid,
                                MTLPixelFormatInvalid};
        for (int i = 0; i < 4; ++i)
            if (id<MTLTexture> t = pass_color_[i]) {
                cf[i] = t.pixelFormat;
                key = mix(key, (uint64_t)cf[i] + 1000 * (uint64_t)i);
            }
        MTLPixelFormat df = pass_depth_ ? pass_depth_.pixelFormat : MTLPixelFormatInvalid;
        key = mix(key, df);
        bool blend = rs[27] != 0;
        uint32_t cw[4] = {rs[168], rs[190], rs[191], rs[192]};
        uint64_t bkey =
            blend ? (1ull | (uint64_t)rs[19] << 1 | (uint64_t)rs[20] << 5 | (uint64_t)rs[171] << 9 |
                     (uint64_t)(rs[206] != 0) << 13 | (uint64_t)rs[207] << 14 |
                     (uint64_t)rs[208] << 18 | (uint64_t)rs[209] << 22)
                  : 0;
        key = mix(key, bkey);
        key = mix(key, (uint64_t)cw[0] | (uint64_t)cw[1] << 4 | (uint64_t)cw[2] << 8 |
                           (uint64_t)cw[3] << 12);
        id<MTLRenderPipelineState> pso = pipeline(key, vfn, ffn, vdesc, cf, df, blend, rs, cw);
        if (!pso) {
            skip("no pipeline");
            return;
        }
        if (pso != es_.pipeline) {
            [enc_ setRenderPipelineState:pso];
            es_.pipeline = pso;
        }

        // Depth and stencil.
        bool zon = rs[7] != 0 && pass_depth_;
        uint64_t dkey = (uint64_t)zon | (uint64_t)(rs[14] != 0) << 1 | (uint64_t)rs[23] << 2 |
                        (uint64_t)(rs[52] != 0) << 6;
        bool stencil = rs[52] != 0 && pass_depth_;
        if (stencil)
            dkey = mix(dkey, fnv(&rs[53], 7 * sizeof(uint32_t)) ^ ((uint64_t)rs[185] << 1) ^
                                 fnv(&rs[186], 4 * sizeof(uint32_t)));
        {
            id<MTLDepthStencilState> dss = depth_state(dkey, zon, rs, stencil);
            if (dss != es_.depth) {
                [enc_ setDepthStencilState:dss];
                es_.depth = dss;
            }
        }
        if (stencil && es_.stencil_ref != (rs[57] & 0xff)) {
            es_.stencil_ref = rs[57] & 0xff;
            [enc_ setStencilReferenceValue:es_.stencil_ref];
        }

        // Rasterizer.
        {
            int cull = rs[22] == 2   ? (int)MTLCullModeFront
                       : rs[22] == 3 ? (int)MTLCullModeBack
                                     : (int)MTLCullModeNone;
            if (cull != es_.cull) {
                [enc_ setCullMode:(MTLCullMode)cull];
                es_.cull = cull;
            }
            int fill = rs[8] == 2 ? (int)MTLTriangleFillModeLines : (int)MTLTriangleFillModeFill;
            if (fill != es_.fill) {
                [enc_ setTriangleFillMode:(MTLTriangleFillMode)fill];
                es_.fill = fill;
            }
        }
        float bias, slope;
        memcpy(&bias, &rs[195], 4);
        memcpy(&slope, &rs[175], 4);
        // D3D's DEPTHBIAS is in depth units; Metal's in units of the minimum resolvable
        // difference, which for a float depth buffer is tiny, so scale it up.
        if (!(bias == es_.bias && slope == es_.slope)) {
            [enc_ setDepthBias:bias * 16777215.0f slopeScale:slope clamp:0.0f];
            es_.bias = bias;
            es_.slope = slope;
        }
        const double s = pass_scale_;
        MTLViewport vpm = {d.viewport[0] * s, d.viewport[1] * s, d.viewport[2] * s,
                           d.viewport[3] * s, d.depth_range[0],  d.depth_range[1]};
        if (!es_.viewport_valid || memcmp(&vpm, &es_.viewport, sizeof vpm) != 0) {
            [enc_ setViewport:vpm];
            es_.viewport = vpm;
            es_.viewport_valid = true;
        }
        set_scissor(rs[174] != 0, d.scissor);
        if (blend && (rs[19] == 14 || rs[19] == 15 || rs[20] == 14 || rs[20] == 15 ||
                      rs[207] == 14 || rs[208] == 14)) {
            uint32_t f = rs[193];
            [enc_ setBlendColorRed:((f >> 16) & 255) / 255.0f
                             green:((f >> 8) & 255) / 255.0f
                              blue:(f & 255) / 255.0f
                             alpha:((f >> 24) & 255) / 255.0f];
        }

        // Constants and parameters.
        D9VSParams vparams{};
        // Direct3D 9 samples a pixel at its integer corner, here at its centre:
        // geometry moves half a pixel right and down to match. 63/64 of it, as
        // Wine does, so an edge never lands exactly on a pixel centre.
        vparams.halfpix[0] = d.viewport[2] ? (63.0f / 64.0f) / d.viewport[2] : 0.0f;
        vparams.halfpix[1] = d.viewport[3] ? -(63.0f / 64.0f) / d.viewport[3] : 0.0f;
        memcpy(vparams.ascale, ascale, sizeof ascale);
        [enc_ setVertexBytes:&vparams length:sizeof vparams atIndex:17];
        set_constants(true, d.vconst, d.vconst_count, vp);
        D9PSParams pparams{};
        pparams.alpha_func = rs[15] ? (int32_t)rs[25] : 8;
        pparams.alpha_ref = (rs[24] & 0xff) / 255.0f;
        if (rs[28]) {
            uint32_t table = rs[35];
            pparams.fog_mode = table == 3 ? 2 : table == 1 ? 3 : table == 2 ? 4 : 1;
            uint32_t fc = rs[34];
            pparams.fog_color[0] = ((fc >> 16) & 255) / 255.0f;
            pparams.fog_color[1] = ((fc >> 8) & 255) / 255.0f;
            pparams.fog_color[2] = (fc & 255) / 255.0f;
            pparams.fog_color[3] = 1.0f;
            memcpy(&pparams.fog_start, &rs[36], 4);
            memcpy(&pparams.fog_end, &rs[37], 4);
            memcpy(&pparams.fog_density, &rs[38], 4);
        }
        [enc_ setFragmentBytes:&pparams length:sizeof pparams atIndex:1];
        set_constants(false, d.pconst, d.pconst_count, pp);

        // Textures and samplers.
        if (pp.sampler_mask < 0) {
            uint32_t cubes = 0;
            for (const auto &kv : pp.samplers)
                if (kv.first < 16 && kv.second == d9sh::S_CUBE)
                    cubes |= 1u << kv.first;
            pp.cube_samplers = cubes;
            pp.sampler_mask = d9msl::pixel_sampler_mask(pp);
        }
        uint32_t used = (uint32_t)pp.sampler_mask;
        for (uint32_t s = 0; s < 16; ++s) {
            if (!(used >> s & 1))
                continue;
            Tex *t = bound[s];
            id<MTLTexture> tex = t ? t->texture : nil;
            bool cube = pp.major >= 2 ? (pp.cube_samplers >> s & 1) : (variant.cube_mask >> s & 1);
            if (tex && t->cube != cube)
                tex = nil;
            const bool depth = variant.depth_mask >> s & 1;
            if (tex && t->depth != depth)
                tex = nil;
            // Nor can the depth buffer this pass writes.
            if (tex && depth && tex == pass_depth_)
                tex = nil;
            // A texture that is also this pass's target cannot be read from.
            for (int i = 0; i < 4 && tex; ++i)
                if (tex == pass_color_[i])
                    tex = nil;
            if (tex)
                t->used = serial_;
            id<MTLTexture> use = tex ? tex : depth ? placeholder_depth() : placeholder(cube);
            if (use != es_.texture[s]) {
                [enc_ setFragmentTexture:use atIndex:s];
                es_.texture[s] = use;
            }
            id<MTLSamplerState> smp = sampler(d.sampler_state + s * 14);
            if (smp != es_.sampler[s]) {
                [enc_ setFragmentSamplerState:smp atIndex:s];
                es_.sampler[s] = smp;
            }
        }

        // Geometry.
        for (int i = 0; i < 8; ++i) {
            if (!(stream_mask_ >> i & 1))
                continue;
            const HostD9Stream &st = d.stream[i];
            if (st.buffer) {
                auto b = buffers_.find(st.buffer);
                if (b == buffers_.end() || !b->second.buffer) {
                    skip("missing vertex buffer");
                    return;
                }
                b->second.used = serial_;
                [enc_ setVertexBuffer:b->second.buffer offset:st.offset atIndex:i];
            } else if (d.inline_vertices) {
                bind_inline(i, d.inline_vertices, d.inline_bytes);
            } else {
                [enc_ setVertexBuffer:zero_ offset:0 atIndex:i];
            }
        }
        if (vdesc_needs_zero_)
            [enc_ setVertexBuffer:zero_ offset:0 atIndex:8];
        encode_primitives(d);
        ++draws_;
        if (probing()) {
            char vs_hash[20], ps_hash[20];
            snprintf(vs_hash, sizeof vs_hash, "%016llx", (unsigned long long)vs_key);
            snprintf(ps_hash, sizeof ps_hash, "%016llx", (unsigned long long)ps_key);
            float c0[4] = {0, 0, 0, 0};
            if (d.vconst && d.vconst_count)
                memcpy(c0, d.vconst, sizeof c0);
            fprintf(
                stderr,
                "probe draw %llu: rt %u/%u/%u depth %u vp %d,%d %dx%d prim %u x%u start %u base %d "
                "ib %u stream0 %u+%u/%u inline %u vs %s ps %s z %u/%u/%u cull %u blend %u %u/%u "
                "cw %x atest %u/%u fog %u tex0 %u c0 %g %g %g %g %s\n",
                (unsigned long long)draws_, d.target.color[0].id, d.target.color[0].face,
                d.target.color[0].level, d.target.depth.id, d.viewport[0], d.viewport[1],
                d.viewport[2], d.viewport[3], d.primitive, d.primitive_count, d.start,
                d.base_vertex, d.index_buffer, d.stream[0].buffer, d.stream[0].offset,
                d.stream[0].stride, d.inline_bytes, vs_hash, ps_hash, rs[7], rs[14], rs[23], rs[22],
                rs[27], rs[19], rs[20], rs[168], rs[15], rs[25], rs[28], d.sampler_texture[0],
                c0[0], c0[1], c0[2], c0[3], d.label ? d.label : "-");
        }
    }

    // ---- occlusion queries ----------------------------------------------
    // Every command buffer with a query in it has a buffer of 64-bit sample
    // counts. Each render pass drawn under a query gets a slot of its own; the
    // query's count is the sum of its slots once the command buffer has run.
    static constexpr NSUInteger kVisSlots = 1024;
    struct Query {
        struct Slot {
            id<MTLBuffer> buffer;
            uint32_t index;
            uint64_t serial;
        };
        std::vector<Slot> slots; // not yet counted
        uint64_t counted = 0;
        bool overflow = false;
        bool ended = false;
    };
    void query_begin(uint32_t id) override {
        Query &q = queries_[id];
        q = Query{};
        query_ = id;
        pass_slot_ = -1;
        if (enc_ && !pass_vis_)
            end_pass(); // the next draw opens a pass that can count
    }
    void query_end(uint32_t id) override {
        if (query_ != id)
            return;
        if (enc_ && pass_slot_ >= 0)
            [enc_ setVisibilityResultMode:MTLVisibilityResultModeDisabled offset:0];
        pass_slot_ = -1;
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
        if (!fold(q))
            return 0; // its frame has not finished on the GPU
        *count = (uint32_t)std::min<uint64_t>(q.counted, 0xffffffffu);
        return 1;
    }
    // Adds the slots whose command buffers have run; true when none is left.
    bool fold(Query &q) {
        uint64_t done = completed_.load();
        size_t keep = 0;
        for (auto &s : q.slots) {
            if (s.serial <= done)
                q.counted += ((const uint64_t *)s.buffer.contents)[s.index];
            else
                q.slots[keep++] = s;
        }
        q.slots.resize(keep);
        return keep == 0;
    }
    void query_drop(uint32_t id) override {
        if (query_ == id)
            query_end(id);
        queries_.erase(id);
    }
    void count_query() {
        if (!query_ || pass_slot_ >= 0)
            return;
        Query &q = queries_[query_];
        if (!pass_vis_ || vis_used_ >= kVisSlots) {
            q.overflow = true;
            return;
        }
        pass_slot_ = (int)vis_used_++;
        ((uint64_t *)vis_.contents)[pass_slot_] = 0;
        [enc_ setVisibilityResultMode:MTLVisibilityResultModeCounting
                               offset:(NSUInteger)pass_slot_ * 8];
        q.slots.push_back({vis_, (uint32_t)pass_slot_, serial_});
    }
    id<MTLBuffer> vis_buffer() {
        if (vis_)
            return vis_;
        if (!vis_pool_.empty() && vis_pool_.front().second <= completed_.load())
            for (auto &[id, q] : queries_)
                fold(q);
        for (size_t i = 0; i < vis_pool_.size(); ++i) {
            if (vis_pool_[i].second <= completed_.load()) {
                vis_ = vis_pool_[i].first;
                vis_pool_.erase(vis_pool_.begin() + i);
                break;
            }
        }
        if (!vis_)
            vis_ = [mtl_ newBufferWithLength:kVisSlots * 8 options:MTLResourceStorageModeShared];
        vis_used_ = 0;
        return vis_;
    }

    bool probing() const {
        return probe_frame_ && presents_ + 1 == probe_frame_;
    }
    void probe_next(const char *tag) override {
        probe_frame_ = presents_ + 2; // the frame after the one in progress, whole
        probe_tag_ = tag ? tag : "";
        fprintf(stderr, "probe %s: frame %llu\n", probe_tag_.c_str(),
                (unsigned long long)probe_frame_);
    }
    void probe_dump() {
        settle(serial_);
        for (auto &kv : textures_) {
            Tex &t = kv.second;
            if (!t.texture || t.info.pixel != MTLPixelFormatBGRA8Unorm ||
                t.desc.kind != HOST_D9_TEX_2D)
                continue;
            uint32_t w = (uint32_t)t.texture.width, h = (uint32_t)t.texture.height;
            std::vector<uint8_t> bgra((size_t)w * h * 4), rgb((size_t)w * h * 3);
            [t.texture getBytes:bgra.data()
                    bytesPerRow:w * 4
                     fromRegion:MTLRegionMake2D(0, 0, w, h)
                    mipmapLevel:0];
            size_t lit = 0;
            for (size_t i = 0, n = (size_t)w * h; i < n; ++i) {
                rgb[i * 3] = bgra[i * 4 + 2];
                rgb[i * 3 + 1] = bgra[i * 4 + 1];
                rgb[i * 3 + 2] = bgra[i * 4];
                lit += (bgra[i * 4] | bgra[i * 4 + 1] | bgra[i * 4 + 2]) > 8;
            }
            char path[1024];
            snprintf(path, sizeof path, "%s/probe%s%s_%u_%ux%u_%s.ppm", host_dump_dir(),
                     probe_tag_.empty() ? "" : "_", probe_tag_.c_str(), kv.first, w, h,
                     (t.desc.usage & HOST_D9_USAGE_RENDERTARGET) ? "rt" : "tex");
            host_write_ppm(path, rgb.data(), (int)w, (int)h);
            fprintf(stderr, "probe texture %u %ux%u fmt %08x usage %u: %zu of %zu lit\n", kv.first,
                    w, h, t.desc.format, t.desc.usage, lit, (size_t)w * h);
        }
    }

    void skip(const char *why) {
        ++skips_[why];
    }
    void report() {
        if (!recomp_env("D3D9_STATS"))
            return;
        double now = CACurrentMediaTime();
        double fps = report_time_ > 0 ? (presents_ - report_frames_) / (now - report_time_) : 0.0;
        double dpf = presents_ > report_frames_
                         ? double(draws_ - report_draws_) / double(presents_ - report_frames_)
                         : 0.0;
        const uint64_t frames = presents_ > report_frames_ ? presents_ - report_frames_ : 1;
        const uint64_t gpu_us = gpu_us_.exchange(0);
        // The thread presenting is the game's: its CPU time is the frame's cost.
        const uint64_t cpu_ns = clock_gettime_nsec_np(CLOCK_THREAD_CPUTIME_ID);
        const double cpu_ms = report_cpu_ns_ ? (cpu_ns - report_cpu_ns_) / 1e6 / frames : 0.0;
        report_cpu_ns_ = cpu_ns;
        // Instructions are what a frame costs whichever core ran it.
        double minstr = 0.0;
#if TARGET_OS_OSX
        rusage_info_v4 ru{};
        if (proc_pid_rusage(getpid(), RUSAGE_INFO_V4, (rusage_info_t *)&ru) == 0) {
            if (report_instructions_)
                minstr = (ru.ri_instructions - report_instructions_) / 1e6 / frames;
            report_instructions_ = ru.ri_instructions;
        }
#endif
        const double waited = gpu_wait_s_;
        gpu_wait_s_ = 0;
        report_time_ = now;
        report_frames_ = presents_;
        report_draws_ = draws_;
        fprintf(stderr,
                "d3d9 metal: frame %llu: %.1f fps, %.0f draws/frame, %llu draw calls, %llu "
                "encoded, %zu textures, %zu pipelines, %.1fM instructions/frame, game thread %.2f "
                "ms/frame, gpu %.2f ms/frame, waited %.2f ms/frame",
                (unsigned long long)presents_, fps, dpf, (unsigned long long)stat_calls_,
                (unsigned long long)draws_, textures_.size(), pipelines_.size(), minstr, cpu_ms,
                gpu_us / 1000.0 / frames, waited * 1000.0 / frames);
        for (auto &s : skips_)
            fprintf(stderr, ", %s %llu", s.first.c_str(), (unsigned long long)s.second);
        fprintf(stderr, "\n");
    }

    void clear(const HostD9Target &target, const int32_t vp[4], uint32_t count,
               const int32_t *rects, uint32_t flags, uint32_t color, float z,
               uint32_t stencil) override {
        if (probing())
            fprintf(
                stderr,
                "probe clear: rt %u depth %u flags %x colour %08x z %g rects %u vp %d,%d %dx%d\n",
                target.color[0].id, target.depth.id, flags, color, z, count, vp[0], vp[1], vp[2],
                vp[3]);
        id<MTLTexture> c0 = texture_for(target.color[0]);
        id<MTLTexture> dz = texture_for(target.depth);
        if (!c0)
            return;
        const Tex &ct = textures_[target.color[0].id];
        int32_t lw = (int32_t)std::max<uint32_t>(ct.desc.width >> target.color[0].level, 1);
        int32_t lh = (int32_t)std::max<uint32_t>(ct.desc.height >> target.color[0].level, 1);
        bool whole = count == 0 && vp[0] <= 0 && vp[1] <= 0 && vp[2] >= lw && vp[3] >= lh;
        bool want_color = flags & 1, want_depth = (flags & 2) && dz,
             want_stencil = (flags & 4) && dz;
        float rgba[4] = {((color >> 16) & 255) / 255.0f, ((color >> 8) & 255) / 255.0f,
                         (color & 255) / 255.0f, ((color >> 24) & 255) / 255.0f};
        if (whole) {
            // Folded into the pass's load actions: a new pass on this target.
            end_pass();
            begin_pass(target, want_color, rgba, want_depth, z, want_stencil, stencil);
            return;
        }
        if (!ensure_pass(target))
            return;
        // A partial clear is a quad per rectangle, written unconditionally.
        MTLPixelFormat cf[4];
        for (int i = 0; i < 4; ++i)
            cf[i] = pass_color_[i] ? pass_color_[i].pixelFormat : MTLPixelFormatInvalid;
        MTLPixelFormat df = pass_depth_ ? pass_depth_.pixelFormat : MTLPixelFormatInvalid;
        uint64_t key = mix(mix(0xc1ea5ull, (uint64_t)want_color), df);
        for (int i = 0; i < 4; ++i)
            key = mix(key, cf[i]);
        id<MTLRenderPipelineState> pso = utility_pipeline(key, @"clear_fs", cf, df, want_color);
        if (!pso)
            return;
        es_ = EncoderState{}; // what follows is not a draw's state
        [enc_ setRenderPipelineState:pso];
        uint64_t dkey = 0xc1ea5000ull | (uint64_t)want_depth | (uint64_t)want_stencil << 1;
        id<MTLDepthStencilState> ds = clear_depth_state(want_depth, want_stencil, dkey);
        [enc_ setDepthStencilState:ds];
        [enc_ setStencilReferenceValue:stencil & 0xff];
        [enc_ setCullMode:MTLCullModeNone];
        [enc_ setTriangleFillMode:MTLTriangleFillModeFill];
        [enc_ setDepthBias:0 slopeScale:0 clamp:0];
        int32_t tw = lw, th = lh; // quads are placed in guest pixels; the viewport scales them
        [enc_ setViewport:(MTLViewport){
                              0, 0,
                              (double)std::max<NSUInteger>(c0.width >> target.color[0].level, 1),
                              (double)std::max<NSUInteger>(c0.height >> target.color[0].level, 1),
                              0, 1}];
        [enc_ setScissorRect:(MTLScissorRect){
                                 0, 0, std::max<NSUInteger>(c0.width >> target.color[0].level, 1),
                                 std::max<NSUInteger>(c0.height >> target.color[0].level, 1)}];
        std::vector<int32_t> list;
        if (count && rects)
            list.assign(rects, rects + 4 * count);
        else
            list = {vp[0], vp[1], vp[0] + vp[2], vp[1] + vp[3]};
        for (size_t i = 0; i + 4 <= list.size(); i += 4) {
            int32_t x0 = std::max(list[i], std::max(vp[0], 0));
            int32_t y0 = std::max(list[i + 1], std::max(vp[1], 0));
            int32_t x1 = std::min(list[i + 2], std::min(vp[0] + vp[2], tw));
            int32_t y1 = std::min(list[i + 3], std::min(vp[1] + vp[3], th));
            if (x1 <= x0 || y1 <= y0)
                continue;
            QuadIn q{};
            q.rect[0] = 2.0f * x0 / tw - 1.0f;
            q.rect[1] = 1.0f - 2.0f * y0 / th;
            q.rect[2] = 2.0f * x1 / tw - 1.0f;
            q.rect[3] = 1.0f - 2.0f * y1 / th;
            q.z = z;
            memcpy(q.color, rgba, sizeof rgba);
            [enc_ setVertexBytes:&q length:sizeof q atIndex:0];
            [enc_ setFragmentBytes:&q length:sizeof q atIndex:0];
            [enc_ drawPrimitives:MTLPrimitiveTypeTriangleStrip vertexStart:0 vertexCount:4];
        }
    }

    void stretch(HostD9Surface src, const int32_t sr[4], HostD9Surface dst, const int32_t dr[4],
                 uint32_t filter) override {
        if (probing())
            fprintf(stderr,
                    "probe stretch: %u/%u/%u (%d,%d,%d,%d) -> %u/%u/%u (%d,%d,%d,%d) filter %u\n",
                    src.id, src.face, src.level, sr[0], sr[1], sr[2], sr[3], dst.id, dst.face,
                    dst.level, dr[0], dr[1], dr[2], dr[3], filter);
        id<MTLTexture> s = view_for(src);
        id<MTLTexture> t = texture_for(dst);
        if (!s || !t || s.pixelFormat == MTLPixelFormatDepth32Float_Stencil8)
            return;
        end_pass();
        uint32_t tw = std::max<uint32_t>((uint32_t)t.width >> dst.level, 1);
        uint32_t th = std::max<uint32_t>((uint32_t)t.height >> dst.level, 1);
        const Tex &st_ = textures_[src.id];
        const Tex &dt_ = textures_[dst.id];
        // Rectangles are in each surface's guest pixels.
        const float ssx =
            (float)s.width /
            std::max<uint32_t>(1, st_.desc.kind == HOST_D9_TEX_CUBE
                                      ? st_.desc.width >> src.level
                                      : std::max<uint32_t>(st_.desc.width >> src.level, 1));
        const float ssy =
            (float)s.height /
            std::max<uint32_t>(1, st_.desc.kind == HOST_D9_TEX_CUBE
                                      ? st_.desc.width >> src.level
                                      : std::max<uint32_t>(st_.desc.height >> src.level, 1));
        const float dsx = (float)tw / std::max<uint32_t>(dt_.desc.width >> dst.level, 1);
        const float dsy = (float)th / std::max<uint32_t>(dt_.desc.height >> dst.level, 1);
        uint32_t sw = (uint32_t)s.width, sh = (uint32_t)s.height;
        HostD9Target target{};
        target.color[0] = dst;
        begin_pass(target, false, nullptr, false, 0, false, 0);
        MTLPixelFormat cf[4] = {t.pixelFormat, MTLPixelFormatInvalid, MTLPixelFormatInvalid,
                                MTLPixelFormatInvalid};
        id<MTLRenderPipelineState> pso = utility_pipeline(mix(0xb117ull, t.pixelFormat), @"copy_fs",
                                                          cf, MTLPixelFormatInvalid, true);
        if (!pso)
            return;
        es_ = EncoderState{}; // what follows is not a draw's state
        [enc_ setRenderPipelineState:pso];
        [enc_ setCullMode:MTLCullModeNone];
        [enc_ setViewport:(MTLViewport){0, 0, (double)tw, (double)th, 0, 1}];
        [enc_ setScissorRect:(MTLScissorRect){0, 0, tw, th}];
        QuadIn q{};
        q.rect[0] = 2.0f * dr[0] * dsx / tw - 1.0f;
        q.rect[1] = 1.0f - 2.0f * dr[1] * dsy / th;
        q.rect[2] = 2.0f * dr[2] * dsx / tw - 1.0f;
        q.rect[3] = 1.0f - 2.0f * dr[3] * dsy / th;
        q.uv[0] = sr[0] * ssx / sw;
        q.uv[1] = sr[1] * ssy / sh;
        q.uv[2] = sr[2] * ssx / sw;
        q.uv[3] = sr[3] * ssy / sh;
        [enc_ setVertexBytes:&q length:sizeof q atIndex:0];
        textures_[src.id].used = serial_;
        [enc_ setFragmentTexture:s atIndex:0];
        uint32_t st[14] = {};
        st[1] = st[2] = st[3] = 3; // clamp
        st[5] = st[6] = filter >= 2 ? 2 : 1;
        [enc_ setFragmentSamplerState:sampler(st) atIndex:0];
        [enc_ drawPrimitives:MTLPrimitiveTypeTriangleStrip vertexStart:0 vertexCount:4];
        end_pass();
    }

    void present(uint32_t backbuffer, uint32_t w, uint32_t h) override {
        const uint32_t guest_w = w, guest_h = h;
        end_pass();
        auto it = textures_.find(backbuffer);
        if (it == textures_.end() || !it->second.texture) {
            flush();
            return;
        }
        Tex &t = it->second;
        base_rows_ = t.desc.height;
        w = (uint32_t)t.texture.width;
        h = (uint32_t)t.texture.height;
        keep_presented(t, w, h);
        flush();
        if (probing())
            probe_dump();
        uint32_t every = host_dump_every();
        if (every && ((presents_ + 1) % every) == 0)
            dump(t, w, h);
        if (!t.imported)
            t.imported = device_->import_texture(t.texture);
        if (t.info.pixel == MTLPixelFormatBGRA8Unorm) {
            gpu::CommandBuffer cb = device_->begin();
            if (host_present_stage_texture(t.imported, (int)w, (int)h, (int)guest_w, (int)guest_h,
                                           cb))
                host_present_track_command(cb);
            device_->commit(cb);
        }
        ++presents_;
        if (presents_ % 300 == 1)
            report();
        follow_drawable();
        last_presented_ = backbuffer;
        last_w_ = w;
        last_h_ = h;
    }

    // The frame as presented, copied on the GPU when it was presented: the
    // back buffer itself already holds the start of the next frame.
    void keep_presented(Tex &t, uint32_t w, uint32_t h) {
        if (t.info.pixel != MTLPixelFormatBGRA8Unorm || !t.texture)
            return;
        std::lock_guard<std::mutex> lock(kept_mutex_);
        if (!kept_ || kept_.width != w || kept_.height != h) {
            MTLTextureDescriptor *td =
                [MTLTextureDescriptor texture2DDescriptorWithPixelFormat:MTLPixelFormatBGRA8Unorm
                                                                   width:w
                                                                  height:h
                                                               mipmapped:NO];
            td.storageMode = MTLStorageModeShared;
            kept_ = [mtl_ newTextureWithDescriptor:td];
        }
        begin_frame();
        id<MTLBlitCommandEncoder> blit = [cmd_ blitCommandEncoder];
        [blit copyFromTexture:t.texture
                  sourceSlice:0
                  sourceLevel:0
                 sourceOrigin:MTLOriginMake(0, 0, 0)
                   sourceSize:MTLSizeMake(w, h, 1)
                    toTexture:kept_
             destinationSlice:0
             destinationLevel:0
            destinationOrigin:MTLOriginMake(0, 0, 0)];
        [blit endEncoding];
        kept_cmd_ = cmd_;
        kept_w_ = w;
        kept_h_ = h;
    }

    // The scale that fills the drawable's height with the back buffer (at
    // least RECOMP_D3D9_MIN_ROWS rows, for supersampling), or 0 when it is
    // fixed by RECOMP_D3D9_SCALE or unknown.
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
    // Follow the drawable: once a different scale has been wanted for a
    // quarter of a second's worth of frames, every scaled target is made
    // again at the new size, between frames. Their contents are redrawn by
    // the game; a target it only draws now and then shows black once.
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
        flush();
        wait();
        scale_ = want;
        fitted_depth_.clear();
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

    bool read_presented(uint8_t *rgb, uint32_t cap, uint32_t *w, uint32_t *h) override {
        id<MTLTexture> kept;
        id<MTLCommandBuffer> cmd;
        {
            std::lock_guard<std::mutex> lock(kept_mutex_);
            kept = kept_;
            cmd = kept_cmd_;
            *w = kept_w_;
            *h = kept_h_;
        }
        if (!kept)
            return false;
        uint32_t fw = *w, fh = *h;
        if (!rgb || cap < fw * fh * 3)
            return false;
        [cmd waitUntilCompleted];
        std::vector<uint8_t> bgra((size_t)fw * fh * 4);
        std::lock_guard<std::mutex> lock(kept_mutex_);
        [kept getBytes:bgra.data()
            bytesPerRow:fw * 4
             fromRegion:MTLRegionMake2D(0, 0, fw, fh)
            mipmapLevel:0];
        size_t n = (size_t)fw * fh;
        for (size_t i = 0; i < n; ++i) {
            rgb[i * 3] = bgra[i * 4 + 2];
            rgb[i * 3 + 1] = bgra[i * 4 + 1];
            rgb[i * 3 + 2] = bgra[i * 4];
        }
        return true;
    }

  private:
    // ---- passes ---------------------------------------------------------
    // Textures by id without hashing: ids are small, and map nodes stay put.
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

    id<MTLTexture> texture_for(const HostD9Surface &s) {
        if (!s.id)
            return nil;
        Tex *t = tex_ptr(s.id);
        return t ? t->texture : nil;
    }
    // A 2D view of one face and level, for sampling a surface as a texture.
    id<MTLTexture> view_for(const HostD9Surface &s) {
        id<MTLTexture> t = texture_for(s);
        if (!t)
            return nil;
        if (t.textureType == MTLTextureType2D && s.level == 0 && t.mipmapLevelCount == 1)
            return t;
        return [t newTextureViewWithPixelFormat:t.pixelFormat
                                    textureType:MTLTextureType2D
                                         levels:NSMakeRange(s.level, 1)
                                         slices:NSMakeRange(s.face, 1)];
    }

    bool same_target(const HostD9Target &t) const {
        return enc_ && memcmp(&t, &pass_target_, sizeof t) == 0;
    }
    bool ensure_pass(const HostD9Target &t) {
        if (same_target(t))
            return true;
        end_pass();
        return begin_pass(t, false, nullptr, false, 0, false, 0);
    }
    bool begin_pass(const HostD9Target &t, bool clear_color, const float *rgba, bool clear_depth,
                    float z, bool clear_stencil, uint32_t stencil) {
        MTLRenderPassDescriptor *rp = [MTLRenderPassDescriptor renderPassDescriptor];
        bool any = false;
        pass_samples_ = 0;
        for (int i = 0; i < 4; ++i) {
            pass_color_[i] = nil;
            Tex *ct = t.color[i].id ? tex_ptr(t.color[i].id) : nullptr;
            id<MTLTexture> tex = ct ? ct->texture : nil;
            if (!tex || ct->depth)
                continue;
            // Multisampled only as a whole surface; every attachment of a
            // pass has one sample count, the first one's.
            const bool ms = ct->msaa && t.color[i].level == 0 && t.color[i].face == 0;
            const uint32_t samples = ms ? ct->samples : 1;
            if (pass_samples_ && samples != pass_samples_)
                continue;
            pass_samples_ = samples;
            pass_color_[i] = tex;
            ct->used = serial_ + (cmd_ ? 0 : 1);
            if (ms) {
                rp.colorAttachments[i].texture = ct->msaa;
                rp.colorAttachments[i].resolveTexture = tex;
                rp.colorAttachments[i].storeAction = MTLStoreActionStoreAndMultisampleResolve;
            } else {
                rp.colorAttachments[i].texture = tex;
                rp.colorAttachments[i].level = t.color[i].level;
                rp.colorAttachments[i].slice = t.color[i].face;
                rp.colorAttachments[i].storeAction = MTLStoreActionStore;
            }
            if (i == 0 && clear_color) {
                rp.colorAttachments[i].loadAction = MTLLoadActionClear;
                rp.colorAttachments[i].clearColor =
                    MTLClearColorMake(rgba[0], rgba[1], rgba[2], rgba[3]);
            } else {
                rp.colorAttachments[i].loadAction = MTLLoadActionLoad;
            }
            any = true;
        }
        if (!pass_samples_)
            pass_samples_ = 1;
        pass_depth_ = nil;
        Tex *dt = t.depth.id ? tex_ptr(t.depth.id) : nullptr;
        id<MTLTexture> dz = dt ? dt->texture : nil;
        if (dz && pass_samples_ > 1)
            dz = (dt->msaa && dt->samples == pass_samples_) ? dt->msaa : nil;
        bool depth_unmatched = false;
        if (!dz && dt && dt->texture && pass_samples_ > 1 && pass_color_[0]) {
            // A single-sampled depth buffer under a multisampled target: the
            // pass gets a depth buffer of its own that matches.
            dz = depth_for_size(dt->texture, pass_color_[0], 0, pass_samples_);
            depth_unmatched = true;
        }
        if (dz && dz.pixelFormat == MTLPixelFormatDepth32Float_Stencil8 && pass_color_[0] &&
            dz.width >= pass_color_[0].width >> t.color[0].level &&
            dz.height >= pass_color_[0].height >> t.color[0].level) {
            pass_depth_ = dz;
            if (dt)
                dt->used = serial_ + (cmd_ ? 0 : 1);
            (void)depth_unmatched;
            rp.depthAttachment.texture = dz;
            rp.depthAttachment.loadAction = clear_depth ? MTLLoadActionClear : MTLLoadActionLoad;
            rp.depthAttachment.clearDepth = z;
            rp.depthAttachment.storeAction = MTLStoreActionStore;
            rp.stencilAttachment.texture = dz;
            rp.stencilAttachment.loadAction =
                clear_stencil ? MTLLoadActionClear : MTLLoadActionLoad;
            rp.stencilAttachment.clearStencil = stencil & 0xff;
            rp.stencilAttachment.storeAction = MTLStoreActionStore;
        }
        if (!any)
            return false;
        // Metal requires every attachment to be the same size.
        if (pass_depth_ &&
            (pass_depth_.width !=
                 std::max<NSUInteger>(pass_color_[0].width >> t.color[0].level, 1) ||
             pass_depth_.height !=
                 std::max<NSUInteger>(pass_color_[0].height >> t.color[0].level, 1))) {
            id<MTLTexture> fit =
                depth_for_size(pass_depth_, pass_color_[0], t.color[0].level, pass_samples_);
            pass_depth_ = fit;
            rp.depthAttachment.texture = fit;
            rp.stencilAttachment.texture = fit;
        }
        begin_frame();
        pass_vis_ = false;
        pass_slot_ = -1;
        if (query_) {
            rp.visibilityResultBuffer = vis_buffer();
            pass_vis_ = true;
        }
        enc_ = [cmd_ renderCommandEncoderWithDescriptor:rp];
        es_ = EncoderState{};
        [enc_ setFrontFacingWinding:MTLWindingClockwise];
        pass_target_ = t;
        pass_scale_ = textures_[t.color[0].id].scale;
        return enc_ != nil;
    }
    void end_pass() {
        if (enc_) {
            [enc_ endEncoding];
            enc_ = nil;
        }
        pass_vis_ = false;
        pass_slot_ = -1;
        memset(&pass_target_, 0, sizeof pass_target_);
    }
    // Direct3D allows a depth buffer larger than the colour target; Metal does
    // not. A draw into a smaller target gets a depth buffer of its own size.
    id<MTLTexture> depth_for_size(id<MTLTexture> depth, id<MTLTexture> color, uint32_t level,
                                  uint32_t samples = 1) {
        NSUInteger w = std::max<NSUInteger>(color.width >> level, 1),
                   h = std::max<NSUInteger>(color.height >> level, 1);
        uint64_t key = mix(mix(mix((uint64_t)(__bridge void *)depth, w), h), samples);
        auto it = fitted_depth_.find(key);
        if (it != fitted_depth_.end())
            return it->second;
        MTLTextureDescriptor *td =
            [MTLTextureDescriptor texture2DDescriptorWithPixelFormat:depth.pixelFormat
                                                               width:w
                                                              height:h
                                                           mipmapped:NO];
        if (samples > 1) {
            td.textureType = MTLTextureType2DMultisample;
            td.sampleCount = samples;
        }
        td.usage = MTLTextureUsageRenderTarget;
        td.storageMode = MTLStorageModePrivate;
        id<MTLTexture> t = [mtl_ newTextureWithDescriptor:td];
        fitted_depth_[key] = t;
        return t;
    }

    void begin_frame() {
        if (cmd_)
            return;
        {
            const double t0 = CACurrentMediaTime();
            dispatch_semaphore_wait(frames_, DISPATCH_TIME_FOREVER);
            gpu_wait_s_ += CACurrentMediaTime() - t0;
        }
        cmd_ = [queue_ commandBuffer];
        ++serial_;
        dispatch_semaphore_t sem = frames_;
        uint64_t serial = serial_;
        std::atomic<uint64_t> *done = &completed_;
        std::atomic<uint64_t> *gpu_us = &gpu_us_;
        [cmd_ addCompletedHandler:^(id<MTLCommandBuffer> cb) {
          if (cb.GPUEndTime > cb.GPUStartTime)
              gpu_us->fetch_add((uint64_t)((cb.GPUEndTime - cb.GPUStartTime) * 1e6));
          if (cb.error)
              fprintf(stderr, "d3d9 metal: command buffer failed: %s\n",
                      cb.error.localizedDescription.UTF8String);
          done->store(serial);
          dispatch_semaphore_signal(sem);
        }];
    }
    void flush() {
        if (!cmd_)
            return;
        end_pass();
        if (vis_) {
            vis_pool_.emplace_back(vis_, serial_);
            vis_ = nil;
        }
        [cmd_ commit];
        last_ = cmd_;
        cmd_ = nil;
        in_flight_ = true;
    }
    void wait() {
        if (last_) {
            const double t0 = CACurrentMediaTime();
            [last_ waitUntilCompleted];
            gpu_wait_s_ += CACurrentMediaTime() - t0;
            last_ = nil;
        }
        in_flight_ = false;
    }
    // Everything up to frame `used` has run, so the resource can be touched.
    void settle(uint64_t used) {
        if (!used || used <= completed_.load())
            return;
        end_pass();
        if (cmd_ && used >= serial_)
            flush();
        wait();
    }

    void set_scissor(bool on, const int32_t sc[4]) {
        NSUInteger tw =
            pass_color_[0]
                ? std::max<NSUInteger>(pass_color_[0].width >> pass_target_.color[0].level, 1)
                : 1;
        NSUInteger th =
            pass_color_[0]
                ? std::max<NSUInteger>(pass_color_[0].height >> pass_target_.color[0].level, 1)
                : 1;
        MTLScissorRect r = {0, 0, tw, th};
        if (on) {
            const float s = pass_scale_;
            int32_t x0 = std::max(0, (int32_t)std::lround(sc[0] * s)),
                    y0 = std::max(0, (int32_t)std::lround(sc[1] * s));
            int32_t x1 = std::min((int32_t)tw, (int32_t)std::lround(sc[2] * s));
            int32_t y1 = std::min((int32_t)th, (int32_t)std::lround(sc[3] * s));
            if (x1 <= x0 || y1 <= y0) {
                x0 = y0 = 0;
                x1 = y1 = 0;
            }
            r = {(NSUInteger)x0, (NSUInteger)y0, (NSUInteger)std::max(0, x1 - x0),
                 (NSUInteger)std::max(0, y1 - y0)};
        }
        if (!es_.scissor_valid || memcmp(&r, &es_.scissor, sizeof r) != 0) {
            [enc_ setScissorRect:r];
            es_.scissor = r;
            es_.scissor_valid = true;
        }
    }

    // ---- shaders --------------------------------------------------------
    id<MTLFunction> function(uint64_t code_key, const d9sh::Program &p,
                             const d9msl::PixelVariant &v, bool pixel) {
        uint64_t key = mix(code_key, pixel ? v.key() + 1 : 0);
        auto it = functions_.find(key);
        if (it != functions_.end())
            return it->second;
        std::string src, why;
        bool ok =
            pixel ? d9msl::pixel_source(p, v, &src, &why) : d9msl::vertex_source(p, &src, &why);
        if (const char *dir = recomp_env("D3D9_SHADER_DUMP"); dir && ok) {
            char path[1024];
            snprintf(path, sizeof path, "%s/%016llx.msl", dir, (unsigned long long)key);
            if (FILE *f = fopen(path, "w")) {
                fputs(src.c_str(), f);
                fclose(f);
            }
        }
        id<MTLFunction> fn = nil;
        if (ok) {
            NSError *error = nil;
            MTLCompileOptions *opts = [MTLCompileOptions new];
            if (@available(macOS 15.0, iOS 18.0, *))
                opts.mathMode = MTLMathModeSafe;
            id<MTLLibrary> lib =
                [mtl_ newLibraryWithSource:[NSString stringWithUTF8String:src.c_str()]
                                   options:opts
                                     error:&error];
            if (lib)
                fn = [lib newFunctionWithName:pixel ? @"ps_main" : @"vs_main"];
            else
                fprintf(stderr, "d3d9 metal: a %s shader failed to compile: %s\n",
                        pixel ? "pixel" : "vertex", error.localizedDescription.UTF8String);
        } else {
            char key_text[64];
            snprintf(key_text, sizeof key_text, "d3d9.metal.untranslated.%llx",
                     (unsigned long long)key);
            log_once(key_text, "d3d9 metal: a %s shader is not translated: %s",
                     pixel ? "pixel" : "vertex", why.c_str());
        }
        functions_[key] = fn;
        return fn;
    }

    MTLVertexDescriptor *vertex_descriptor(const HostD9Draw &d, const d9sh::Program &vp,
                                           uint64_t key, float ascale[16][4]) {
        auto it = vdescs_.find(key);
        if (it != vdescs_.end()) {
            memcpy(ascale, it->second.ascale, sizeof it->second.ascale);
            stream_mask_ = it->second.streams;
            vdesc_needs_zero_ = it->second.zero;
            return it->second.desc;
        }
        VDesc v;
        MTLVertexDescriptor *desc = [MTLVertexDescriptor vertexDescriptor];
        uint32_t streams = 0;
        uint32_t stream_end[8] = {};
        bool zero = false;
        for (const d9sh::DclIn &in : vp.inputs) {
            if (in.type != d9sh::R_INPUT)
                continue;
            uint32_t reg = in.index & 15;
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
                MTLVertexFormat fmt;
                float scale[4];
                if (!vertex_format(type, &fmt, scale))
                    continue;
                desc.attributes[reg].format = fmt;
                desc.attributes[reg].offset = offset;
                desc.attributes[reg].bufferIndex = stream;
                memcpy(v.ascale[reg], scale, sizeof scale);
                streams |= 1u << stream;
                stream_end[stream] =
                    std::max<uint32_t>(stream_end[stream], offset + vertex_format_bytes(type));
                found = true;
                break;
            }
            if (!found) {
                desc.attributes[reg].format = MTLVertexFormatFloat4;
                desc.attributes[reg].offset = 0;
                desc.attributes[reg].bufferIndex = 8;
                zero = true;
            }
        }
        for (uint32_t s = 0; s < 8; ++s) {
            if (!(streams >> s & 1))
                continue;
            uint32_t stride = d.stream[s].stride ? d.stream[s].stride : stream_end[s];
            desc.layouts[s].stride = std::max(stride, stream_end[s]);
            desc.layouts[s].stepFunction = MTLVertexStepFunctionPerVertex;
        }
        if (zero) {
            desc.layouts[8].stride = 16;
            desc.layouts[8].stepFunction = MTLVertexStepFunctionConstant;
            desc.layouts[8].stepRate = 0;
        }
        v.desc = desc;
        v.streams = streams;
        v.zero = zero;
        for (int r = 0; r < 16; ++r)
            for (int k = 0; k < 4; ++k)
                if (v.ascale[r][k] == 0.0f)
                    v.ascale[r][k] = 1.0f;
        memcpy(ascale, v.ascale, sizeof v.ascale);
        stream_mask_ = streams;
        vdesc_needs_zero_ = zero;
        vdescs_[key] = v;
        return desc;
    }

    id<MTLRenderPipelineState> pipeline(uint64_t key, id<MTLFunction> vfn, id<MTLFunction> ffn,
                                        MTLVertexDescriptor *vdesc, const MTLPixelFormat cf[4],
                                        MTLPixelFormat df, bool blend, const uint32_t *rs,
                                        const uint32_t cw[4]) {
        key = mix(key, 0x5a3f0000ull + pass_samples_);
        auto it = pipelines_.find(key);
        if (it != pipelines_.end())
            return it->second;
        MTLRenderPipelineDescriptor *pd = [MTLRenderPipelineDescriptor new];
        pd.rasterSampleCount = std::max<uint32_t>(pass_samples_, 1);
        pd.vertexFunction = vfn;
        pd.fragmentFunction = ffn;
        pd.vertexDescriptor = vdesc;
        for (int i = 0; i < 4; ++i) {
            if (cf[i] == MTLPixelFormatInvalid)
                continue;
            MTLRenderPipelineColorAttachmentDescriptor *a = pd.colorAttachments[i];
            a.pixelFormat = cf[i];
            MTLColorWriteMask m = MTLColorWriteMaskNone;
            if (cw[i] & 1)
                m |= MTLColorWriteMaskRed;
            if (cw[i] & 2)
                m |= MTLColorWriteMaskGreen;
            if (cw[i] & 4)
                m |= MTLColorWriteMaskBlue;
            if (cw[i] & 8)
                m |= MTLColorWriteMaskAlpha;
            a.writeMask = m;
            if (blend) {
                a.blendingEnabled = YES;
                a.sourceRGBBlendFactor = blend_factor(rs[19], false);
                a.destinationRGBBlendFactor = blend_factor(rs[20], false);
                // BOTHSRCALPHA / BOTHINVSRCALPHA override the destination too.
                if (rs[19] == 12)
                    a.destinationRGBBlendFactor = MTLBlendFactorOneMinusSourceAlpha;
                if (rs[19] == 13)
                    a.destinationRGBBlendFactor = MTLBlendFactorSourceAlpha;
                a.rgbBlendOperation = blend_op(rs[171]);
                if (rs[206]) {
                    a.sourceAlphaBlendFactor = blend_factor(rs[207], true);
                    a.destinationAlphaBlendFactor = blend_factor(rs[208], true);
                    a.alphaBlendOperation = blend_op(rs[209]);
                } else {
                    a.sourceAlphaBlendFactor = blend_factor(rs[19], true);
                    a.destinationAlphaBlendFactor = blend_factor(rs[20], true);
                    if (rs[19] == 12)
                        a.destinationAlphaBlendFactor = MTLBlendFactorOneMinusSourceAlpha;
                    if (rs[19] == 13)
                        a.destinationAlphaBlendFactor = MTLBlendFactorSourceAlpha;
                    a.alphaBlendOperation = blend_op(rs[171]);
                }
            }
        }
        if (df != MTLPixelFormatInvalid) {
            pd.depthAttachmentPixelFormat = df;
            pd.stencilAttachmentPixelFormat = df;
        }
        NSError *error = nil;
        id<MTLRenderPipelineState> pso = [mtl_ newRenderPipelineStateWithDescriptor:pd
                                                                              error:&error];
        if (!pso)
            fprintf(stderr, "d3d9 metal: pipeline failed: %s\n",
                    error.localizedDescription.UTF8String);
        pipelines_[key] = pso;
        return pso;
    }

    id<MTLRenderPipelineState> utility_pipeline(uint64_t key, NSString *fragment,
                                                const MTLPixelFormat cf[4], MTLPixelFormat df,
                                                bool write_color) {
        key = mix(key, 0x5a3f0000ull + pass_samples_);
        auto it = pipelines_.find(key);
        if (it != pipelines_.end())
            return it->second;
        MTLRenderPipelineDescriptor *pd = [MTLRenderPipelineDescriptor new];
        pd.rasterSampleCount = std::max<uint32_t>(pass_samples_, 1);
        pd.vertexFunction = [utility_ newFunctionWithName:@"quad_vs"];
        pd.fragmentFunction = [utility_ newFunctionWithName:fragment];
        for (int i = 0; i < 4; ++i)
            if (cf[i] != MTLPixelFormatInvalid) {
                pd.colorAttachments[i].pixelFormat = cf[i];
                pd.colorAttachments[i].writeMask =
                    (i == 0 && write_color) ? MTLColorWriteMaskAll : MTLColorWriteMaskNone;
            }
        if (df != MTLPixelFormatInvalid) {
            pd.depthAttachmentPixelFormat = df;
            pd.stencilAttachmentPixelFormat = df;
        }
        NSError *error = nil;
        id<MTLRenderPipelineState> pso = [mtl_ newRenderPipelineStateWithDescriptor:pd
                                                                              error:&error];
        if (!pso)
            fprintf(stderr, "d3d9 metal: utility pipeline failed: %s\n",
                    error.localizedDescription.UTF8String);
        pipelines_[key] = pso;
        return pso;
    }

    id<MTLDepthStencilState> depth_state(uint64_t key, bool zon, const uint32_t *rs, bool stencil) {
        auto it = depth_states_.find(key);
        if (it != depth_states_.end())
            return it->second;
        MTLDepthStencilDescriptor *dd = [MTLDepthStencilDescriptor new];
        dd.depthCompareFunction = zon ? compare_fn(rs[23]) : MTLCompareFunctionAlways;
        dd.depthWriteEnabled = zon && rs[14] != 0;
        if (stencil) {
            MTLStencilDescriptor *front = [MTLStencilDescriptor new];
            front.stencilFailureOperation = stencil_op(rs[53]);
            front.depthFailureOperation = stencil_op(rs[54]);
            front.depthStencilPassOperation = stencil_op(rs[55]);
            front.stencilCompareFunction = compare_fn(rs[56]);
            front.readMask = rs[58] & 0xff;
            front.writeMask = rs[59] & 0xff;
            dd.frontFaceStencil = front;
            if (rs[185]) {
                MTLStencilDescriptor *back = [MTLStencilDescriptor new];
                back.stencilFailureOperation = stencil_op(rs[186]);
                back.depthFailureOperation = stencil_op(rs[187]);
                back.depthStencilPassOperation = stencil_op(rs[188]);
                back.stencilCompareFunction = compare_fn(rs[189]);
                back.readMask = rs[58] & 0xff;
                back.writeMask = rs[59] & 0xff;
                dd.backFaceStencil = back;
            } else {
                dd.backFaceStencil = front;
            }
        }
        id<MTLDepthStencilState> s = [mtl_ newDepthStencilStateWithDescriptor:dd];
        depth_states_[key] = s;
        return s;
    }
    id<MTLDepthStencilState> clear_depth_state(bool depth, bool stencil, uint64_t key) {
        auto it = depth_states_.find(key);
        if (it != depth_states_.end())
            return it->second;
        MTLDepthStencilDescriptor *dd = [MTLDepthStencilDescriptor new];
        dd.depthCompareFunction = MTLCompareFunctionAlways;
        dd.depthWriteEnabled = depth;
        if (stencil) {
            MTLStencilDescriptor *s = [MTLStencilDescriptor new];
            s.stencilCompareFunction = MTLCompareFunctionAlways;
            s.depthStencilPassOperation = MTLStencilOperationReplace;
            dd.frontFaceStencil = s;
            dd.backFaceStencil = s;
        }
        id<MTLDepthStencilState> st = [mtl_ newDepthStencilStateWithDescriptor:dd];
        depth_states_[key] = st;
        return st;
    }

    id<MTLSamplerState> sampler(const uint32_t *st) {
        uint64_t key = fnv(st, 14 * sizeof(uint32_t));
        auto it = samplers_.find(key);
        if (it != samplers_.end())
            return it->second;
        MTLSamplerDescriptor *sd = [MTLSamplerDescriptor new];
        sd.sAddressMode = address_mode(st[1]);
        sd.tAddressMode = address_mode(st[2]);
        sd.rAddressMode = address_mode(st[3]);
        sd.magFilter = st[5] >= 2 ? MTLSamplerMinMagFilterLinear : MTLSamplerMinMagFilterNearest;
        sd.minFilter = st[6] >= 2 ? MTLSamplerMinMagFilterLinear : MTLSamplerMinMagFilterNearest;
        sd.mipFilter = st[7] == 0   ? MTLSamplerMipFilterNotMipmapped
                       : st[7] == 1 ? MTLSamplerMipFilterNearest
                                    : MTLSamplerMipFilterLinear;
        if (st[6] == 3 || st[5] == 3)
            sd.maxAnisotropy = std::max<NSUInteger>(1, std::min<NSUInteger>(16, st[10]));
        sd.lodMinClamp = (float)st[9];
        uint32_t border = st[4];
        sd.borderColor = (border >> 24) < 128  ? MTLSamplerBorderColorTransparentBlack
                         : (border & 0xffffff) ? MTLSamplerBorderColorOpaqueWhite
                                               : MTLSamplerBorderColorOpaqueBlack;
        id<MTLSamplerState> s = [mtl_ newSamplerStateWithDescriptor:sd];
        samplers_[key] = s;
        return s;
    }

    id<MTLTexture> placeholder(bool cube) {
        __strong id<MTLTexture> &t = cube ? white_cube_ : white_;
        if (t)
            return t;
        MTLTextureDescriptor *td =
            cube ? [MTLTextureDescriptor
                       textureCubeDescriptorWithPixelFormat:MTLPixelFormatBGRA8Unorm
                                                       size:1
                                                  mipmapped:NO]
                 : [MTLTextureDescriptor texture2DDescriptorWithPixelFormat:MTLPixelFormatBGRA8Unorm
                                                                      width:1
                                                                     height:1
                                                                  mipmapped:NO];
        t = [mtl_ newTextureWithDescriptor:td];
        const uint8_t black[4] = {0, 0, 0, 255};
        for (NSUInteger s = 0; s < (cube ? 6u : 1u); ++s)
            [t replaceRegion:MTLRegionMake2D(0, 0, 1, 1)
                  mipmapLevel:0
                        slice:s
                    withBytes:black
                  bytesPerRow:4
                bytesPerImage:0];
        return t;
    }

    // A depth texture at the far plane: every shadow lookup passes.
    id<MTLTexture> placeholder_depth() {
        if (white_depth_)
            return white_depth_;
        MTLTextureDescriptor *td = [MTLTextureDescriptor
            texture2DDescriptorWithPixelFormat:MTLPixelFormatDepth32Float_Stencil8
                                         width:1
                                        height:1
                                     mipmapped:NO];
        td.usage = MTLTextureUsageShaderRead | MTLTextureUsageRenderTarget;
        td.storageMode = MTLStorageModePrivate;
        white_depth_ = [mtl_ newTextureWithDescriptor:td];
        MTLRenderPassDescriptor *rp = [MTLRenderPassDescriptor renderPassDescriptor];
        rp.depthAttachment.texture = white_depth_;
        rp.depthAttachment.loadAction = MTLLoadActionClear;
        rp.depthAttachment.clearDepth = 1.0;
        rp.depthAttachment.storeAction = MTLStoreActionStore;
        id<MTLCommandBuffer> cb = [queue_ commandBuffer];
        [[cb renderCommandEncoderWithDescriptor:rp] endEncoding];
        [cb commit];
        return white_depth_;
    }

    void set_constants(bool vertex, const float *c, uint32_t count, const d9sh::Program &p) {
        // As many as the program reads, so its own defs always land and a
        // read past what the game set is zero rather than past the buffer.
        uint32_t n = std::max<uint32_t>(std::max<uint32_t>(count, p.max_const), 1);
        constants_.assign(n * 4, 0.0f);
        if (c && count)
            memcpy(constants_.data(), c, count * 4 * sizeof(float));
        for (const auto &def : p.defs)
            if (def.first < n)
                memcpy(&constants_[def.first * 4], def.second.data(), 4 * sizeof(float));
        if (vertex)
            [enc_ setVertexBytes:constants_.data()
                          length:constants_.size() * sizeof(float)
                         atIndex:16];
        else
            [enc_ setFragmentBytes:constants_.data()
                            length:constants_.size() * sizeof(float)
                           atIndex:0];
    }

    void bind_inline(int slot, const uint8_t *bytes, uint32_t size) {
        if (size <= 4000) {
            [enc_ setVertexBytes:bytes length:size atIndex:slot];
            return;
        }
        id<MTLBuffer> b = transient(size);
        memcpy((uint8_t *)b.contents + transient_used_ - size, bytes, size);
        [enc_ setVertexBuffer:b offset:transient_used_ - size atIndex:slot];
    }
    // Space in this frame's upload buffer; returns the buffer, with the space
    // ending at transient_used_.
    id<MTLBuffer> transient(uint32_t size) {
        uint32_t aligned = (size + 15) & ~15u;
        if (!transient_ || transient_used_ + aligned > transient_.length) {
            NSUInteger len = std::max<NSUInteger>(4u << 20, aligned);
            transient_ = [mtl_ newBufferWithLength:len options:MTLResourceStorageModeShared];
            transient_used_ = 0;
        }
        transient_used_ += aligned;
        return transient_;
    }

    void encode_primitives(const HostD9Draw &d) {
        MTLPrimitiveType type;
        uint32_t count = d.primitive_count;
        bool fan = false;
        switch (d.primitive) {
        case 1:
            type = MTLPrimitiveTypePoint;
            break;
        case 2:
            type = MTLPrimitiveTypeLine;
            count *= 2;
            break;
        case 3:
            type = MTLPrimitiveTypeLineStrip;
            count += 1;
            break;
        case 4:
            type = MTLPrimitiveTypeTriangle;
            count *= 3;
            break;
        case 5:
            type = MTLPrimitiveTypeTriangleStrip;
            count += 2;
            break;
        case 6:
            type = MTLPrimitiveTypeTriangle;
            fan = true;
            break;
        default:
            return;
        }
        if (!d.primitive_count)
            return;
        bool indexed = d.index_buffer || d.inline_indices;
        if (!indexed && !fan) {
            [enc_ drawPrimitives:type vertexStart:d.start vertexCount:count];
            return;
        }
        MTLIndexType itype = d.index_size == 4 ? MTLIndexTypeUInt32 : MTLIndexTypeUInt16;
        uint32_t isize = d.index_size == 4 ? 4 : 2;
        if (!fan) {
            if (d.index_buffer) {
                auto b = buffers_.find(d.index_buffer);
                if (b == buffers_.end() || !b->second.buffer)
                    return;
                if ((uint64_t)(d.start + count) * isize > b->second.buffer.length)
                    return;
                b->second.used = serial_;
                [enc_ drawIndexedPrimitives:type
                                 indexCount:count
                                  indexType:itype
                                indexBuffer:b->second.buffer
                          indexBufferOffset:d.start * isize
                              instanceCount:1
                                 baseVertex:d.base_vertex
                               baseInstance:0];
            } else {
                id<MTLBuffer> b = transient(count * isize);
                memcpy((uint8_t *)b.contents + transient_used_ - ((count * isize + 15) & ~15u),
                       d.inline_indices, count * isize);
                [enc_ drawIndexedPrimitives:type
                                 indexCount:count
                                  indexType:itype
                                indexBuffer:b
                          indexBufferOffset:transient_used_ - ((count * isize + 15) & ~15u)];
            }
            return;
        }
        // A fan becomes a triangle list over the same vertices.
        std::vector<uint32_t> list;
        list.reserve(count * 3);
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
            list.push_back(source(0));
            list.push_back(source(i + 1));
            list.push_back(source(i + 2));
        }
        uint32_t bytes = (uint32_t)list.size() * 4;
        id<MTLBuffer> b = transient(bytes);
        NSUInteger off = transient_used_ - ((bytes + 15) & ~15u);
        memcpy((uint8_t *)b.contents + off, list.data(), bytes);
        [enc_ drawIndexedPrimitives:MTLPrimitiveTypeTriangle
                         indexCount:list.size()
                          indexType:MTLIndexTypeUInt32
                        indexBuffer:b
                  indexBufferOffset:off];
    }

    void dump(Tex &t, uint32_t w, uint32_t h) {
        if (t.info.pixel != MTLPixelFormatBGRA8Unorm)
            return;
        settle(t.used);
        std::vector<uint8_t> bgra((size_t)w * h * 4);
        [t.texture getBytes:bgra.data()
                bytesPerRow:w * 4
                 fromRegion:MTLRegionMake2D(0, 0, w, h)
                mipmapLevel:0];
        std::vector<uint8_t> rgb((size_t)w * h * 3);
        for (size_t i = 0, n = (size_t)w * h; i < n; ++i) {
            rgb[i * 3] = bgra[i * 4 + 2];
            rgb[i * 3 + 1] = bgra[i * 4 + 1];
            rgb[i * 3 + 2] = bgra[i * 4];
        }
        char path[1024];
        snprintf(path, sizeof path, "%s/present_%05u.ppm", host_dump_dir(),
                 (unsigned)(presents_ + 1));
        host_write_ppm(path, rgb.data(), (int)w, (int)h);
    }

    struct VDesc {
        MTLVertexDescriptor *desc = nil;
        float ascale[16][4] = {};
        uint32_t streams = 0;
        bool zero = false;
    };

    gpu::MetalDevice *device_;
    id<MTLDevice> mtl_;
    id<MTLCommandQueue> queue_;
    id<MTLLibrary> utility_;
    bool bc_ = false;
    dispatch_semaphore_t frames_;
    id<MTLCommandBuffer> cmd_ = nil, last_ = nil;
    uint64_t serial_ = 0;
    std::atomic<uint64_t> completed_{0};
    std::atomic<uint64_t> gpu_us_{0}; // GPU time of finished command buffers since the last report
    double gpu_wait_s_ = 0;           // time the game thread spent waiting for the GPU
    uint64_t report_cpu_ns_ = 0, report_instructions_ = 0;
    bool in_flight_ = false;
    id<MTLRenderCommandEncoder> enc_ = nil;
    std::unordered_map<uint32_t, Query> queries_;
    uint32_t query_ = 0;
    id<MTLBuffer> vis_ = nil;
    NSUInteger vis_used_ = 0;
    std::vector<std::pair<id<MTLBuffer>, uint64_t>> vis_pool_;
    bool pass_vis_ = false;
    int pass_slot_ = -1;
    HostD9Target pass_target_{};
    float pass_scale_ = 1.0f;
    uint32_t pass_samples_ = 1; // sample count of the open pass's attachments
    bool scale_chosen_ = false;
    uint32_t base_rows_ = 0;
    int rescale_frames_ = 0;
    // Render targets are this many times the guest's size (RECOMP_D3D9_SCALE).
    float scale_ = recomp_env("D3D9_SCALE")
                       ? std::max(1.0f, std::min(8.0f, (float)atof(recomp_env("D3D9_SCALE"))))
                       : 1.0f;
    id<MTLTexture> pass_color_[4] = {nil, nil, nil, nil};
    id<MTLTexture> pass_depth_ = nil;
    uint32_t stream_mask_ = 0;
    bool vdesc_needs_zero_ = false;
    id<MTLBuffer> zero_ = nil;
    id<MTLBuffer> transient_ = nil;
    NSUInteger transient_used_ = 0;
    id<MTLTexture> white_ = nil, white_cube_ = nil, white_depth_ = nil;
    std::vector<uint8_t> scratch_;
    std::vector<float> constants_;
    std::unordered_map<uint32_t, Tex> textures_;
    std::vector<Tex *> tex_index_;
    // What the encoder was last told in this pass, so a draw that repeats it
    // makes no call. Reset whenever a new encoder starts or a clear or blit
    // sets state of its own.
    struct EncoderState {
        __unsafe_unretained id<MTLRenderPipelineState> pipeline = nil;
        __unsafe_unretained id<MTLDepthStencilState> depth = nil;
        int cull = -1, fill = -1;
        uint32_t stencil_ref = 0xffffffffu;
        float bias = NAN, slope = NAN;
        bool viewport_valid = false, scissor_valid = false;
        MTLViewport viewport{};
        MTLScissorRect scissor{};
        __unsafe_unretained id<MTLTexture> texture[16] = {};
        __unsafe_unretained id<MTLSamplerState> sampler[16] = {};
    };
    EncoderState es_;
    std::unordered_map<uint32_t, Buf> buffers_;
    std::unordered_map<uint64_t, id<MTLFunction>> functions_;
    std::unordered_map<uint64_t, VDesc> vdescs_;
    std::unordered_map<uint64_t, id<MTLRenderPipelineState>> pipelines_;
    std::unordered_map<uint64_t, id<MTLDepthStencilState>> depth_states_;
    std::unordered_map<uint64_t, id<MTLSamplerState>> samplers_;
    std::unordered_map<uint64_t, id<MTLTexture>> fitted_depth_;
    uint64_t draws_ = 0, presents_ = 0, stat_calls_ = 0;
    double report_time_ = 0;
    uint64_t report_frames_ = 0, report_draws_ = 0;
    std::map<std::string, uint64_t> skips_;
    std::set<std::string> undecoded_;
    uint32_t last_presented_ = 0, last_w_ = 0, last_h_ = 0;
    std::mutex kept_mutex_;
    id<MTLTexture> kept_ = nil;
    id<MTLCommandBuffer> kept_cmd_ = nil;
    uint32_t kept_w_ = 0, kept_h_ = 0;
    std::string probe_tag_;
    uint64_t probe_frame_ =
        recomp_env("D3D9_PROBE") ? strtoull(recomp_env("D3D9_PROBE"), nullptr, 10) : 0;
};

} // namespace

D9Backend *d9_metal_create(gpu::Device *device) {
    auto *metal = dynamic_cast<gpu::MetalDevice *>(device);
    if (!metal)
        return nullptr;
    auto *r = new Renderer(metal);
    if (!r->ok()) {
        delete r;
        return nullptr;
    }
    return r;
}

void d9_autorelease_run(void (*fn)(void *), void *arg) {
    @autoreleasepool {
        fn(arg);
    }
}
