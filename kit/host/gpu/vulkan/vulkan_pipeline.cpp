// vulkan_pipeline.cpp - pipeline families and their lazily built variants,
// render and compute passes, the universal descriptor layout, draws and
// transfers. Every buffer-like binding is a storage buffer; set_bytes goes
// through the command buffer's ring.
#include "vulkan_device.h"

#include "shaders_spv.h"

#include <algorithm>
#include <string.h>

namespace gpu {

namespace {

VkBlendFactor blend_factor(Blend b) {
    switch (b) {
    case Blend::Zero:
        return VK_BLEND_FACTOR_ZERO;
    case Blend::One:
        return VK_BLEND_FACTOR_ONE;
    case Blend::SrcAlpha:
        return VK_BLEND_FACTOR_SRC_ALPHA;
    case Blend::OneMinusSrcAlpha:
        return VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    case Blend::DstAlpha:
        return VK_BLEND_FACTOR_DST_ALPHA;
    case Blend::OneMinusDstAlpha:
        return VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
    case Blend::SrcColor:
        return VK_BLEND_FACTOR_SRC_COLOR;
    case Blend::OneMinusSrcColor:
        return VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
    case Blend::DstColor:
        return VK_BLEND_FACTOR_DST_COLOR;
    case Blend::OneMinusDstColor:
        return VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR;
    case Blend::SrcAlphaSaturated:
        return VK_BLEND_FACTOR_SRC_ALPHA_SATURATE;
    }
    return VK_BLEND_FACTOR_ONE;
}

VkCompareOp compare_op(Compare c) {
    switch (c) {
    case Compare::Never:
        return VK_COMPARE_OP_NEVER;
    case Compare::Less:
        return VK_COMPARE_OP_LESS;
    case Compare::Equal:
        return VK_COMPARE_OP_EQUAL;
    case Compare::LessEqual:
        return VK_COMPARE_OP_LESS_OR_EQUAL;
    case Compare::Greater:
        return VK_COMPARE_OP_GREATER;
    case Compare::NotEqual:
        return VK_COMPARE_OP_NOT_EQUAL;
    case Compare::GreaterEqual:
        return VK_COMPARE_OP_GREATER_OR_EQUAL;
    case Compare::Always:
        return VK_COMPARE_OP_ALWAYS;
    }
    return VK_COMPARE_OP_ALWAYS;
}

VkPrimitiveTopology topology_of(Primitive p) {
    switch (p) {
    case Primitive::Points:
        return VK_PRIMITIVE_TOPOLOGY_POINT_LIST;
    case Primitive::Lines:
        return VK_PRIMITIVE_TOPOLOGY_LINE_LIST;
    case Primitive::Triangles:
        return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    case Primitive::TriangleStrip:
        return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP;
    }
    return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
}

VkAttachmentLoadOp load_op(Load l) {
    return l == Load::Clear  ? VK_ATTACHMENT_LOAD_OP_CLEAR
           : l == Load::Load ? VK_ATTACHMENT_LOAD_OP_LOAD
                             : VK_ATTACHMENT_LOAD_OP_DONT_CARE;
}

VkAttachmentStoreOp store_op(Store s) {
    return s == Store::Store ? VK_ATTACHMENT_STORE_OP_STORE : VK_ATTACHMENT_STORE_OP_DONT_CARE;
}

int binding_index(Stage stage, int slot) {
    if (slot < 0 || slot > 3)
        return -1;
    return stage == Stage::Fragment ? 4 + slot : slot;
}

VkImageAspectFlags aspect_of(Format f) {
    return f == Format::Depth32F ? VK_IMAGE_ASPECT_DEPTH_BIT : VK_IMAGE_ASPECT_COLOR_BIT;
}

int bytes_per_pixel(Format f) {
    return f == Format::R8 ? 1 : 4;
}

// Y flip: Vulkan clip y points down, Metal's up. A negative height maps NDC +1
// to the top row exactly as Metal does, so the shaders are shared.
void apply_viewport(VulkanDevice::Cmd &c) {
    VkViewport v;
    v.x = float(c.viewport.x);
    v.y = float(c.viewport.y + c.viewport.h);
    v.width = float(c.viewport.w);
    v.height = -float(c.viewport.h);
    v.minDepth = float(c.viewport.near_z);
    v.maxDepth = float(c.viewport.far_z);
    vkCmdSetViewport(c.buffer, 0, 1, &v);
}

} // namespace

// ------------------------------------------------------------------ layout

bool VulkanDevice::init_pipeline_layout() {
    VkDescriptorSetLayoutBinding bindings[12];
    for (uint32_t i = 0; i < 12; ++i) {
        bindings[i] = {};
        bindings[i].binding = i;
        bindings[i].descriptorCount = 1;
        bindings[i].stageFlags =
            VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT | VK_SHADER_STAGE_COMPUTE_BIT;
        bindings[i].descriptorType =
            i < 8 ? VK_DESCRIPTOR_TYPE_STORAGE_BUFFER : VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    }
    VkDescriptorSetLayoutCreateInfo lci{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
    lci.bindingCount = 12;
    lci.pBindings = bindings;
    if (vkCreateDescriptorSetLayout(device_, &lci, nullptr, &set_layout_) != VK_SUCCESS)
        return false;
    VkPipelineLayoutCreateInfo pci{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
    pci.setLayoutCount = 1;
    pci.pSetLayouts = &set_layout_;
    if (vkCreatePipelineLayout(device_, &pci, nullptr, &pipeline_layout_) != VK_SUCCESS)
        return false;
    // The dummy buffer is a zeroed storage buffer; create_buffer makes one.
    Buffer zero = create_buffer(16, nullptr);
    if (!zero)
        return false;
    {
        std::lock_guard lock(mutex_);
        dummy_buffer_ = buffers_[zero.id];
        buffers_.erase(zero.id); // owned by the device now, freed in the destructor
    }
    dummy_texture_ = create_texture({1, 1, Format::RGBA8, UsageSampled | UsageCpu});
    if (!dummy_texture_)
        return false;
    uint8_t white[4] = {255, 255, 255, 255};
    upload(dummy_texture_, {0, 0, 1, 1}, white, 4);
    std::lock_guard lock(mutex_);
    dummy_sampler_ = sampler_for(SamplerState{});
    return dummy_sampler_ != VK_NULL_HANDLE;
}

VkShaderModule VulkanDevice::module(const std::string &name) {
    auto it = modules_.find(name);
    if (it != modules_.end())
        return it->second;
    for (const vulkan::SpirvProgram *p = vulkan::kSpirvPrograms; p->name; ++p) {
        if (name != p->name)
            continue;
        VkShaderModuleCreateInfo ci{VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO};
        ci.codeSize = p->count * 4;
        ci.pCode = p->words;
        VkShaderModule m = VK_NULL_HANDLE;
        if (vkCreateShaderModule(device_, &ci, nullptr, &m) != VK_SUCCESS)
            return VK_NULL_HANDLE;
        modules_[name] = m;
        return m;
    }
    return VK_NULL_HANDLE;
}

void VulkanDevice::create_descriptor_pool(Cmd &c) {
    if (c.pool)
        c.extra_pools.push_back(c.pool);
    VkDescriptorPoolSize sizes[2] = {{VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, 8 * 4096},
                                     {VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 4 * 4096}};
    VkDescriptorPoolCreateInfo pci{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
    pci.maxSets = 4096;
    pci.poolSizeCount = 2;
    pci.pPoolSizes = sizes;
    c.pool = VK_NULL_HANDLE;
    vkCreateDescriptorPool(device_, &pci, nullptr, &c.pool);
}

VkSampler VulkanDevice::sampler_for(const SamplerState &s) {
    auto addr = [](Address a) {
        switch (a) {
        case Address::Repeat:
            return VK_SAMPLER_ADDRESS_MODE_REPEAT;
        case Address::ClampToEdge:
            return VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        case Address::MirrorRepeat:
            return VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT;
        case Address::ClampToBorder:
            return VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER;
        }
        return VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    };
    const int aniso = std::min(16, std::max(1, s.anisotropy));
    const uint64_t key = uint64_t(s.u) | uint64_t(s.v) << 3 | uint64_t(s.mag) << 6 |
                         uint64_t(s.min) << 7 | uint64_t(s.mip) << 8 | uint64_t(aniso) << 10;
    auto it = samplers_.find(key);
    if (it != samplers_.end())
        return it->second;
    VkSamplerCreateInfo sci{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
    sci.magFilter = s.mag == Filter::Linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    sci.minFilter = s.min == Filter::Linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    sci.mipmapMode =
        s.mip == MipFilter::Linear ? VK_SAMPLER_MIPMAP_MODE_LINEAR : VK_SAMPLER_MIPMAP_MODE_NEAREST;
    sci.addressModeU = addr(s.u);
    sci.addressModeV = addr(s.v);
    sci.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    sci.maxLod = s.mip == MipFilter::None ? 0.25f : VK_LOD_CLAMP_NONE;
    sci.anisotropyEnable = anisotropy_ && aniso > 1;
    sci.maxAnisotropy = std::min(float(aniso), props_.limits.maxSamplerAnisotropy);
    sci.borderColor = VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK;
    VkSampler out = VK_NULL_HANDLE;
    vkCreateSampler(device_, &sci, nullptr, &out);
    samplers_[key] = out;
    return out;
}

// --------------------------------------------------------------- pipelines

Pipeline VulkanDevice::render_pipeline(const std::string &shader, const RenderState &state) {
    std::lock_guard lock(mutex_);
    const uint64_t key = (std::hash<std::string>{}(shader) * 1315423911u) ^ state.key();
    auto it = family_by_key_.find(key);
    if (it != family_by_key_.end())
        return {it->second};
    if (!module(shader + ".vert") || !module(shader + ".frag"))
        return {};
    uint64_t id = next_id_++;
    families_[id] = Family{shader, state, {}};
    family_by_key_[key] = id;
    return {id};
}

VkPipeline VulkanDevice::variant_for(Cmd &c) {
    auto fit = families_.find(c.pipeline);
    if (fit == families_.end())
        return VK_NULL_HANDLE;
    Family &f = fit->second;
    const uint64_t vkey = uint64_t(c.topology) | uint64_t(c.cull) << 2 |
                          uint64_t(c.depth.compare) << 4 | uint64_t(c.depth.write) << 8 |
                          uint64_t(c.pass_depth) << 9;
    auto vit = f.variants.find(vkey);
    if (vit != f.variants.end())
        return vit->second;

    VkPipelineShaderStageCreateInfo stages[2] = {};
    stages[0].sType = stages[1].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    stages[0].module = module(f.shader + ".vert");
    stages[0].pName = "main";
    stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    stages[1].module = module(f.shader + ".frag");
    stages[1].pName = "main";
    VkPipelineVertexInputStateCreateInfo vi{
        VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
    VkPipelineInputAssemblyStateCreateInfo ia{
        VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
    ia.topology = topology_of(c.topology);
    VkPipelineViewportStateCreateInfo vp{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
    vp.viewportCount = vp.scissorCount = 1;
    VkPipelineRasterizationStateCreateInfo rs{
        VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
    rs.polygonMode = VK_POLYGON_MODE_FILL;
    rs.cullMode = c.cull == Cull::None    ? VK_CULL_MODE_NONE
                  : c.cull == Cull::Front ? VK_CULL_MODE_FRONT_BIT
                                          : VK_CULL_MODE_BACK_BIT;
    rs.frontFace = VK_FRONT_FACE_CLOCKWISE; // Metal backend: MTLWindingClockwise
    rs.lineWidth = 1.0f;
    VkPipelineMultisampleStateCreateInfo ms{
        VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
    ms.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
    VkPipelineDepthStencilStateCreateInfo ds{
        VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
    ds.depthTestEnable = c.pass_depth && (c.depth.compare != Compare::Always || c.depth.write);
    ds.depthWriteEnable = c.pass_depth && c.depth.write;
    ds.depthCompareOp = compare_op(c.depth.compare);
    VkPipelineColorBlendAttachmentState att[2] = {};
    for (int i = 0; i < f.state.color_count; ++i) {
        att[i].blendEnable = f.state.blend_enabled;
        att[i].srcColorBlendFactor = blend_factor(f.state.src_rgb);
        att[i].dstColorBlendFactor = blend_factor(f.state.dst_rgb);
        att[i].srcAlphaBlendFactor = blend_factor(f.state.src_alpha);
        att[i].dstAlphaBlendFactor = blend_factor(f.state.dst_alpha);
        att[i].colorBlendOp = att[i].alphaBlendOp = VK_BLEND_OP_ADD;
        att[i].colorWriteMask = f.state.write_color ? 0xf : 0;
    }
    VkPipelineColorBlendStateCreateInfo cb{
        VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
    cb.attachmentCount = uint32_t(f.state.color_count);
    cb.pAttachments = att;
    VkDynamicState dyn[2] = {VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR};
    VkPipelineDynamicStateCreateInfo dsi{VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
    dsi.dynamicStateCount = 2;
    dsi.pDynamicStates = dyn;
    VkFormat formats[2] = {vk_format(f.state.color_format[0]), vk_format(f.state.color_format[1])};
    VkPipelineRenderingCreateInfo ri{VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO};
    ri.colorAttachmentCount = uint32_t(f.state.color_count);
    ri.pColorAttachmentFormats = formats;
    ri.depthAttachmentFormat = c.pass_depth ? VK_FORMAT_D32_SFLOAT : VK_FORMAT_UNDEFINED;
    VkGraphicsPipelineCreateInfo gci{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
    gci.pNext = &ri;
    gci.stageCount = 2;
    gci.pStages = stages;
    gci.pVertexInputState = &vi;
    gci.pInputAssemblyState = &ia;
    gci.pViewportState = &vp;
    gci.pRasterizationState = &rs;
    gci.pMultisampleState = &ms;
    gci.pDepthStencilState = &ds;
    gci.pColorBlendState = &cb;
    gci.pDynamicState = &dsi;
    gci.layout = pipeline_layout_;
    VkPipeline p = VK_NULL_HANDLE;
    if (vkCreateGraphicsPipelines(device_, VK_NULL_HANDLE, 1, &gci, nullptr, &p) != VK_SUCCESS)
        fail("graphics pipeline creation failed");
    f.variants[vkey] = p;
    return p;
}

Pipeline VulkanDevice::compute_pipeline(const std::string &shader) {
    std::lock_guard lock(mutex_);
    auto it = compute_by_name_.find(shader);
    if (it != compute_by_name_.end())
        return {it->second};
    std::string file = shader + ".comp";
    int width = int(subgroup_size_);
    if (shader == "native_brightness" && !subgroup_arithmetic_) {
        file = "native_brightness_shared.comp";
        width = 256;
    }
    VkShaderModule m = module(file);
    if (!m)
        return {};
    VkComputePipelineCreateInfo cci{VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO};
    cci.stage.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    cci.stage.stage = VK_SHADER_STAGE_COMPUTE_BIT;
    cci.stage.module = m;
    cci.stage.pName = "main";
    // No REQUIRE_FULL_SUBGROUPS: that needs local_size_x to be a multiple of the
    // subgroup size and the kernel is 16x16; 256 lanes fill whole subgroups anyway.
    cci.layout = pipeline_layout_;
    ComputePipe cp;
    cp.width = width;
    if (vkCreateComputePipelines(device_, VK_NULL_HANDLE, 1, &cci, nullptr, &cp.pipeline) !=
        VK_SUCCESS)
        return {};
    uint64_t id = next_id_++;
    computes_[id] = cp;
    compute_by_name_[shader] = id;
    return {id};
}

int VulkanDevice::thread_execution_width(Pipeline p) {
    std::lock_guard lock(mutex_);
    auto it = computes_.find(p.id);
    return it == computes_.end() ? 1 : it->second.width;
}

// ------------------------------------------------------------------ passes

void VulkanDevice::begin_render_pass(CommandBuffer cb, const RenderPass &pass) {
    std::lock_guard lock(mutex_);
    Cmd *c = cmd(cb);
    if (!c)
        return;
    end_passes(*c);
    full_barrier(c->buffer);
    VkRenderingAttachmentInfo color[2] = {};
    VkRenderingAttachmentInfo depth{VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO};
    int w = 0, h = 0;
    for (int i = 0; i < pass.color_count; ++i) {
        auto t = textures_.find(pass.color[i].texture.id);
        if (t == textures_.end())
            return;
        transition_if_external(*c, t->second, VK_IMAGE_LAYOUT_GENERAL);
        color[i].sType = VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO;
        color[i].imageView = t->second.view;
        color[i].imageLayout = VK_IMAGE_LAYOUT_GENERAL;
        color[i].loadOp = load_op(pass.color[i].load);
        color[i].storeOp = store_op(pass.color[i].store);
        memcpy(color[i].clearValue.color.float32, pass.color[i].clear, sizeof(float) * 4);
        w = t->second.desc.width;
        h = t->second.desc.height;
        c->pass_formats[i] = t->second.desc.format;
    }
    c->pass_color_count = pass.color_count;
    c->pass_depth = pass.depth.texture.id != 0;
    if (c->pass_depth) {
        auto t = textures_.find(pass.depth.texture.id);
        if (t == textures_.end())
            return;
        depth.imageView = t->second.view;
        depth.imageLayout = VK_IMAGE_LAYOUT_GENERAL;
        depth.loadOp = load_op(pass.depth.load);
        depth.storeOp = store_op(pass.depth.store);
        depth.clearValue.depthStencil = {pass.depth.clear, 0};
        if (!w) {
            w = t->second.desc.width;
            h = t->second.desc.height;
        }
    }
    VkRenderingInfo info{VK_STRUCTURE_TYPE_RENDERING_INFO};
    info.renderArea = {{0, 0}, {uint32_t(w), uint32_t(h)}};
    info.layerCount = 1;
    info.colorAttachmentCount = uint32_t(pass.color_count);
    info.pColorAttachments = color;
    info.pDepthAttachment = c->pass_depth ? &depth : nullptr;
    vkCmdBeginRendering(c->buffer, &info);
    c->in_render = true;
    c->pass_width = w;
    c->pass_height = h;
    c->bound = VK_NULL_HANDLE;
    c->bindings_dirty = true;
    // Defaults Metal gives a fresh encoder: full viewport, no cull, depth always.
    c->viewport = {0, 0, double(w), double(h), 0, 1};
    c->viewport_set = true;
    c->cull = Cull::None;
    c->depth = DepthState{};
    VkRect2D scissor{{0, 0}, {uint32_t(w), uint32_t(h)}};
    vkCmdSetScissor(c->buffer, 0, 1, &scissor);
}

void VulkanDevice::end_passes(Cmd &c) {
    if (c.in_render)
        vkCmdEndRendering(c.buffer);
    c.in_render = c.in_compute = false;
    c.bound = VK_NULL_HANDLE;
}

void VulkanDevice::end_render_pass(CommandBuffer cb) {
    std::lock_guard lock(mutex_);
    if (Cmd *c = cmd(cb))
        end_passes(*c);
}

void VulkanDevice::begin_compute_pass(CommandBuffer cb) {
    std::lock_guard lock(mutex_);
    Cmd *c = cmd(cb);
    if (!c)
        return;
    end_passes(*c);
    full_barrier(c->buffer);
    c->in_compute = true;
    c->bindings_dirty = true;
}

void VulkanDevice::end_compute_pass(CommandBuffer cb) {
    std::lock_guard lock(mutex_);
    if (Cmd *c = cmd(cb))
        end_passes(*c);
}

// ------------------------------------------------------------------- state

void VulkanDevice::set_pipeline(CommandBuffer cb, Pipeline p) {
    std::lock_guard lock(mutex_);
    if (Cmd *c = cmd(cb)) {
        c->pipeline = p.id;
        c->bound = VK_NULL_HANDLE;
    }
}

void VulkanDevice::set_depth(CommandBuffer cb, const DepthState &d) {
    std::lock_guard lock(mutex_);
    if (Cmd *c = cmd(cb)) {
        c->depth = d;
        c->bound = VK_NULL_HANDLE;
    }
}

void VulkanDevice::set_cull(CommandBuffer cb, Cull cull) {
    std::lock_guard lock(mutex_);
    if (Cmd *c = cmd(cb)) {
        c->cull = cull;
        c->bound = VK_NULL_HANDLE;
    }
}

void VulkanDevice::set_viewport(CommandBuffer cb, const Viewport &v) {
    std::lock_guard lock(mutex_);
    if (Cmd *c = cmd(cb)) {
        c->viewport = v;
        c->viewport_set = true;
    }
}

void VulkanDevice::set_vertex_buffer(CommandBuffer cb, int slot, Buffer b, uint64_t offset) {
    set_buffer(cb, Stage::Vertex, slot, b, offset);
}

void VulkanDevice::set_bytes(CommandBuffer cb, Stage stage, int slot, const void *bytes,
                             uint64_t count) {
    std::lock_guard lock(mutex_);
    Cmd *c = cmd(cb);
    const int i = binding_index(stage, slot);
    if (!c || i < 0 || !bytes || !count)
        return;
    c->buffers[i] = ring_alloc(*c, bytes, count);
    c->bindings_dirty = true;
}

void VulkanDevice::set_buffer(CommandBuffer cb, Stage stage, int slot, Buffer b, uint64_t offset) {
    std::lock_guard lock(mutex_);
    Cmd *c = cmd(cb);
    const int i = binding_index(stage, slot);
    auto it = buffers_.find(b.id);
    if (!c || i < 0 || it == buffers_.end() || offset >= it->second.bytes)
        return;
    c->buffers[i] = {it->second.buffer, offset, it->second.bytes - offset};
    c->bindings_dirty = true;
}

void VulkanDevice::set_texture(CommandBuffer cb, Stage, int slot, Texture t) {
    std::lock_guard lock(mutex_);
    Cmd *c = cmd(cb);
    auto it = textures_.find(t.id);
    if (!c || slot < 0 || slot > 3 || it == textures_.end())
        return;
    transition_if_external(*c, it->second, VK_IMAGE_LAYOUT_GENERAL);
    c->textures[slot].view = it->second.view;
    if (!c->textures[slot].sampler)
        c->textures[slot].sampler = dummy_sampler_;
    c->bindings_dirty = true;
}

void VulkanDevice::set_sampler(CommandBuffer cb, Stage, int slot, const SamplerState &s) {
    std::lock_guard lock(mutex_);
    Cmd *c = cmd(cb);
    if (!c || slot < 0 || slot > 3)
        return;
    c->textures[slot].sampler = sampler_for(s);
    c->bindings_dirty = true;
}

void VulkanDevice::bind_descriptors(Cmd &c, VkPipelineBindPoint point) {
    if (!c.bindings_dirty)
        return;
    VkDescriptorSetAllocateInfo ai{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
    ai.descriptorPool = c.pool;
    ai.descriptorSetCount = 1;
    ai.pSetLayouts = &set_layout_;
    VkDescriptorSet set = VK_NULL_HANDLE;
    if (vkAllocateDescriptorSets(device_, &ai, &set) != VK_SUCCESS) {
        create_descriptor_pool(c); // a level frame can exceed one pool
        ai.descriptorPool = c.pool;
        if (vkAllocateDescriptorSets(device_, &ai, &set) != VK_SUCCESS) {
            fail("descriptor set allocation failed");
            return;
        }
    }
    VkDescriptorBufferInfo bi[8];
    VkDescriptorImageInfo ii[4];
    VkWriteDescriptorSet writes[12];
    for (int i = 0; i < 8; ++i) {
        const Binding &b = c.buffers[i];
        bi[i] = b.buffer ? VkDescriptorBufferInfo{b.buffer, b.offset, b.range}
                         : VkDescriptorBufferInfo{dummy_buffer_.buffer, 0, 16};
        writes[i] = {VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
        writes[i].dstSet = set;
        writes[i].dstBinding = uint32_t(i);
        writes[i].descriptorCount = 1;
        writes[i].descriptorType = VK_DESCRIPTOR_TYPE_STORAGE_BUFFER;
        writes[i].pBufferInfo = &bi[i];
    }
    VkImageView dummy_view = VK_NULL_HANDLE;
    if (auto d = textures_.find(dummy_texture_.id); d != textures_.end())
        dummy_view = d->second.view;
    for (int i = 0; i < 4; ++i) {
        const TexBinding &t = c.textures[i];
        ii[i] = {t.sampler ? t.sampler : dummy_sampler_, t.view ? t.view : dummy_view,
                 VK_IMAGE_LAYOUT_GENERAL};
        writes[8 + i] = {VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
        writes[8 + i].dstSet = set;
        writes[8 + i].dstBinding = uint32_t(8 + i);
        writes[8 + i].descriptorCount = 1;
        writes[8 + i].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        writes[8 + i].pImageInfo = &ii[i];
    }
    vkUpdateDescriptorSets(device_, 12, writes, 0, nullptr);
    if (trace_)
        ++trace_second_.sets;
    vkCmdBindDescriptorSets(c.buffer, point, pipeline_layout_, 0, 1, &set, 0, nullptr);
    c.bindings_dirty = false;
    ++c.binds;
}

// ---------------------------------------------------------- draw, dispatch

void VulkanDevice::draw(CommandBuffer cb, Primitive primitive, int first, int count) {
    std::lock_guard lock(mutex_);
    Cmd *c = cmd(cb);
    if (!c || !c->in_render || count <= 0)
        return;
    if (c->topology != primitive) {
        c->topology = primitive;
        c->bound = VK_NULL_HANDLE;
    }
    if (!c->bound) {
        c->bound = variant_for(*c);
        if (!c->bound)
            return;
        vkCmdBindPipeline(c->buffer, VK_PIPELINE_BIND_POINT_GRAPHICS, c->bound);
        apply_viewport(*c);
    } else if (c->viewport_set) {
        apply_viewport(*c);
    }
    c->viewport_set = false;
    bind_descriptors(*c, VK_PIPELINE_BIND_POINT_GRAPHICS);
    vkCmdDraw(c->buffer, uint32_t(count), 1, uint32_t(first), 0);
    ++c->draws;
}

void VulkanDevice::dispatch_threads(CommandBuffer cb, int tx, int ty, int gx, int gy) {
    if (gx <= 0 || gy <= 0)
        return;
    dispatch_groups(cb, (tx + gx - 1) / gx, (ty + gy - 1) / gy, gx, gy);
}

void VulkanDevice::dispatch_groups(CommandBuffer cb, int groups_x, int groups_y, int, int) {
    std::lock_guard lock(mutex_);
    Cmd *c = cmd(cb);
    if (!c || !c->in_compute || groups_x <= 0 || groups_y <= 0)
        return;
    auto it = computes_.find(c->pipeline);
    if (it == computes_.end())
        return;
    vkCmdBindPipeline(c->buffer, VK_PIPELINE_BIND_POINT_COMPUTE, it->second.pipeline);
    bind_descriptors(*c, VK_PIPELINE_BIND_POINT_COMPUTE);
    vkCmdDispatch(c->buffer, uint32_t(groups_x), uint32_t(groups_y), 1);
    ++c->dispatches;
    full_barrier(c->buffer); // successive dispatches read each other's buffers
}

// --------------------------------------------------------------- transfers

void VulkanDevice::blit(CommandBuffer cb, Texture src, Region src_region, Texture dst, int dst_x,
                        int dst_y) {
    std::lock_guard lock(mutex_);
    Cmd *c = cmd(cb);
    auto s = textures_.find(src.id), d = textures_.find(dst.id);
    if (!c || s == textures_.end() || d == textures_.end())
        return;
    end_passes(*c);
    full_barrier(c->buffer);
    transition_if_external(*c, s->second, VK_IMAGE_LAYOUT_GENERAL);
    transition_if_external(*c, d->second, VK_IMAGE_LAYOUT_GENERAL);
    VkImageCopy copy{};
    copy.srcSubresource = {aspect_of(s->second.desc.format), 0, 0, 1};
    copy.dstSubresource = {aspect_of(d->second.desc.format), 0, 0, 1};
    copy.srcOffset = {src_region.x, src_region.y, 0};
    copy.dstOffset = {dst_x, dst_y, 0};
    copy.extent = {uint32_t(src_region.w), uint32_t(src_region.h), 1};
    vkCmdCopyImage(c->buffer, s->second.image, VK_IMAGE_LAYOUT_GENERAL, d->second.image,
                   VK_IMAGE_LAYOUT_GENERAL, 1, &copy);
    full_barrier(c->buffer);
}

void VulkanDevice::copy_buffer_to_texture(CommandBuffer cb, Buffer src, uint64_t offset, int pitch,
                                          Texture dst, Region dst_region) {
    std::lock_guard lock(mutex_);
    Cmd *c = cmd(cb);
    auto b = buffers_.find(src.id);
    auto d = textures_.find(dst.id);
    if (!c || b == buffers_.end() || d == textures_.end())
        return;
    end_passes(*c);
    full_barrier(c->buffer);
    transition_if_external(*c, d->second, VK_IMAGE_LAYOUT_GENERAL);
    VkBufferImageCopy copy{};
    copy.bufferOffset = offset;
    copy.bufferRowLength = uint32_t(pitch / bytes_per_pixel(d->second.desc.format));
    copy.bufferImageHeight = uint32_t(dst_region.h);
    copy.imageSubresource = {aspect_of(d->second.desc.format), 0, 0, 1};
    copy.imageOffset = {dst_region.x, dst_region.y, 0};
    copy.imageExtent = {uint32_t(dst_region.w), uint32_t(dst_region.h), 1};
    vkCmdCopyBufferToImage(c->buffer, b->second.buffer, d->second.image, VK_IMAGE_LAYOUT_GENERAL, 1,
                           &copy);
    full_barrier(c->buffer);
}

void VulkanDevice::copy_texture_to_buffer(CommandBuffer cb, Texture src, Region src_region,
                                          Buffer dst, uint64_t offset, int pitch) {
    std::lock_guard lock(mutex_);
    Cmd *c = cmd(cb);
    auto s = textures_.find(src.id);
    auto b = buffers_.find(dst.id);
    if (!c || s == textures_.end() || b == buffers_.end())
        return;
    end_passes(*c);
    full_barrier(c->buffer);
    transition_if_external(*c, s->second, VK_IMAGE_LAYOUT_GENERAL);
    VkBufferImageCopy copy{};
    copy.bufferOffset = offset;
    copy.bufferRowLength = uint32_t(pitch / bytes_per_pixel(s->second.desc.format));
    copy.bufferImageHeight = uint32_t(src_region.h);
    copy.imageSubresource = {aspect_of(s->second.desc.format), 0, 0, 1};
    copy.imageOffset = {src_region.x, src_region.y, 0};
    copy.imageExtent = {uint32_t(src_region.w), uint32_t(src_region.h), 1};
    vkCmdCopyImageToBuffer(c->buffer, s->second.image, VK_IMAGE_LAYOUT_GENERAL, b->second.buffer, 1,
                           &copy);
    full_barrier(c->buffer);
}

void VulkanDevice::generate_mipmaps(CommandBuffer cb, Texture t) {
    std::lock_guard lock(mutex_);
    Cmd *c = cmd(cb);
    auto it = textures_.find(t.id);
    if (!c || it == textures_.end() || it->second.desc.mip_levels <= 1)
        return;
    const Tex &tex = it->second;
    end_passes(*c);
    full_barrier(c->buffer);
    int w = tex.desc.width, h = tex.desc.height;
    for (int level = 1; level < tex.desc.mip_levels; ++level) {
        const int nw = std::max(1, w / 2), nh = std::max(1, h / 2);
        VkImageBlit blit{};
        blit.srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, uint32_t(level - 1), 0, 1};
        blit.srcOffsets[1] = {w, h, 1};
        blit.dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, uint32_t(level), 0, 1};
        blit.dstOffsets[1] = {nw, nh, 1};
        vkCmdBlitImage(c->buffer, tex.image, VK_IMAGE_LAYOUT_GENERAL, tex.image,
                       VK_IMAGE_LAYOUT_GENERAL, 1, &blit, VK_FILTER_LINEAR);
        full_barrier(c->buffer);
        w = nw;
        h = nh;
    }
}

} // namespace gpu
