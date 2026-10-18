// A null Galaxy API asks the guest wrapper to use its offline path.
#include "com.h"
#include "../runtime/imports.h"

namespace {
void get_api(X86 *c) {
    set_eax(c, 0);
}
const ImportShim shims[] = {{"CGalaxy.dll", "cgGetGalaxyAPI", 0, get_api}};
} // namespace

void galaxy_stub_register() {
    imports_register(shims, 1);
}
