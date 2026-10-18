// Resolve optional Media Foundation imports without claiming playback support.
// Platform startup succeeds; object creation reports unsupported playback.
// This lets callers distinguish unavailable media from a platform-version error.
//
// A host that links dx/ registers dx/mf.cpp after these, and its factories
// take the mf.dll names over: a later registration wins. What is left here is
// the mfplat platform pair, which has no objects to make, and the E_NOTIMPL
// factories a runtime-only link - the runtime's own tests - still sees.
#include "imports.h"

namespace {
void startup(X86 *c) {
    set_eax(c, 0); // S_OK; factories remain unavailable.
}
void shutdown(X86 *c) {
    set_eax(c, 0); // S_OK; no Media Foundation state was allocated.
}
// Every factory/service export has one final, 32-bit interface out-pointer.
// Clear it on failure so a caller cannot mistake an old value for an object.
template <int Output> void unsupported(X86 *c) {
    uint32_t out = arg(c, Output);
    if (out && gm_valid(out, 4))
        wr32(out, 0);
    set_eax(c, 0x80004001u); // E_NOTIMPL
}
} // namespace

void media_foundation_register() {
    static const ImportShim shims[] = {
        {"mfplat.dll", "MFStartup", 2, startup},
        {"mfplat.dll", "MFShutdown", 0, shutdown},
        {"mf.dll", "MFCreateMediaSession", 2, unsupported<1>},
        {"mf.dll", "MFCreateSourceResolver", 1, unsupported<0>},
        {"mf.dll", "MFCreateTopology", 1, unsupported<0>},
        {"mf.dll", "MFCreateTopologyNode", 2, unsupported<1>},
        {"mf.dll", "MFCreateAudioRendererActivate", 1, unsupported<0>},
        {"mf.dll", "MFCreateVideoRendererActivate", 2, unsupported<1>},
        {"mf.dll", "MFGetService", 4, unsupported<3>},
    };
    imports_register(shims, sizeof shims / sizeof shims[0]);
}
