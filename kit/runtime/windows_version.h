// Shared reported OS identity. Guest policy comes only from game_config.h.
#pragma once
#include "game_config.h"
#include <stdint.h>

namespace windows_version {
constexpr uint32_t major = RECOMP_WINDOWS_MAJOR;
constexpr uint32_t minor = RECOMP_WINDOWS_MINOR;
constexpr uint32_t platform = RECOMP_WINDOWS_PLATFORM;
constexpr bool nt = platform == 2;
// Win9x's OSVERSIONINFO includes major/minor in the build's upper word.
constexpr uint32_t build =
    nt ? RECOMP_WINDOWS_BUILD : (major << 24) | (minor << 16) | RECOMP_WINDOWS_BUILD;
constexpr uint32_t packed = (nt ? RECOMP_WINDOWS_BUILD << 16 : 0xc0000000u) | (minor << 8) | major;
constexpr uint16_t service_pack = major == 6 && minor == 1 ? 1 : 0;
constexpr const char *csd = service_pack ? "Service Pack 1" : nt ? "" : " A ";
} // namespace windows_version
