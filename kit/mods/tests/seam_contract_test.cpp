// seam_contract_test.cpp - the runtime's seam header and the module's internal
// header declare the same names. Including both in one translation unit is the
// check: a signature or a linkage that drifts is a compile error here, long
// before it becomes two symbols at link time.
#include "../mods_internal.h"
#include "../../runtime/mods_seam.h"
#include "mods_tests.h"

MOD_TEST_SUITE(seam_contract) {
    // Taking the address through each header must yield the same function.
    void (*a)(uint32_t) = mods_hooks_unwind_to_esp;
    const char *(*b)(void) = mods_active_callback_desc;
    bool (*c)(uint8_t, uint8_t, bool) = mods_input_key;
    void (*d)(void) = mods_registry_pump;
    MOD_CHECK(a != nullptr);
    MOD_CHECK(b != nullptr);
    MOD_CHECK(c != nullptr);
    MOD_CHECK(d != nullptr);
    // And the module, not the weak default, is what is linked here: the weak
    // default returns "" and so does the real one when nothing is running, so
    // the two are told apart by pushing a description and reading it back. The
    // weak default would still say "".
    //
    // This does NOT assert what the description is on entry. Doing so made the
    // suite depend on every suite that ran before it having cleaned up, which
    // is not this test's subject and not something it can enforce: a callback
    // that faults never runs its own restore, and this suite would then report
    // somebody else's problem as its own.
    const char *outer = mods_push_active_callback("seam contract probe");
    MOD_CHECK_STR(mods_active_callback_desc(), "seam contract probe");
    mods_pop_active_callback(outer);
    MOD_CHECK_STR(mods_active_callback_desc(), outer ? outer : "");
}
