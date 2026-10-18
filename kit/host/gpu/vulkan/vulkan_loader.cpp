// vulkan_loader.cpp - find and load the Vulkan loader through volk. Homebrew's
// loader on macOS is outside the dynamic linker's default search, so a few
// known paths and RECOMP_VULKAN_LIBRARY are tried before giving up.
#include "vulkan_device.h"

#include <mutex>
#include <stdlib.h>
#include <string>
#ifndef _WIN32
#include <dlfcn.h>
#include "../../../platform/os.h"
#endif

namespace gpu {

static std::once_flag g_once;
static bool g_loaded = false;
static std::string g_path;

#ifndef _WIN32
static bool try_path(const char *path) {
    void *h = dlopen(path, RTLD_NOW | RTLD_LOCAL);
    if (!h)
        return false;
    auto gipa = reinterpret_cast<PFN_vkGetInstanceProcAddr>(dlsym(h, "vkGetInstanceProcAddr"));
    if (!gipa)
        return false;
    volkInitializeCustom(gipa);
    g_path = path;
    return true;
}
#endif

bool vulkan_load() {
    std::call_once(g_once, [] {
#ifndef _WIN32
        const char *env = recomp_env("VULKAN_LIBRARY");
        if (env && *env && try_path(env)) {
            g_loaded = true;
            return;
        }
#endif
        if (volkInitialize() == VK_SUCCESS) {
            g_loaded = true;
            return;
        }
#ifdef __APPLE__
        const char *candidates[] = {"/opt/homebrew/lib/libvulkan.1.dylib",
                                    "/usr/local/lib/libvulkan.1.dylib",
                                    "/opt/homebrew/lib/libMoltenVK.dylib"};
        for (const char *c : candidates)
            if (try_path(c)) {
                g_loaded = true;
                return;
            }
#endif
    });
    return g_loaded;
}

bool vulkan_available() {
    return vulkan_load();
}

const char *vulkan_loader_path_impl() {
    vulkan_load();
    return g_path.empty() ? nullptr : g_path.c_str();
}

} // namespace gpu
