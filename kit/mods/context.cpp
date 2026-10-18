// context.cpp - who a call belongs to.
//
// mods_api_for is defined HERE and nowhere else. Every module that needs a
// mod's API instance asks this; the loader installs the real provider at
// startup and a test installs its own. Defining it per test file is what made
// the globbed test build collide with the loader's definition, so there is one
// definition and one seam.
#include "mods_internal.h"

namespace {
const PopModApi *(*g_provider)(uint32_t) = nullptr;
}

void mods_set_context_provider(const PopModApi *(*fn)(uint32_t)) {
    g_provider = fn;
}

const PopModApi *mods_api_for(uint32_t owner) {
    return g_provider ? g_provider(owner) : nullptr;
}
