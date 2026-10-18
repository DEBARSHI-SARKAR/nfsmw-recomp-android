// weanetr.cpp - the MLDPlay networking layer (weanetr.dll).
//
// This build has no networking. The shims report failure so the game takes
// its own "network unavailable" path, which it has and which is reached
// cleanly.
//
// The polarity matters and is not guessed. There are TWO bring-up paths and
// they do not share a failure code, which is worth knowing before changing
// anything here.
//
// At 00413f90 the game does:
//
//     iVar2 = StartupNetwork(FUN_00413280);
//     if (iVar2 == 0) { free_2(mldplay_ptr); mldplay_ptr = NULL; }
//     else { InitializeCriticalSection(...); ... }
//
// so for StartupNetwork zero is failure and non-zero is success. Returning
// zero makes the game release its MLDPlay object and null the pointer it
// tests everywhere else, which is exactly "no networking".
//
// At 00413db0, reached from init_all through 00499800, it does the same job
// through AreWeLobbied instead, and there the failure code is NOT zero:
//
//     00413e45  CALL dword ptr [0x00d0c978]   ; AreWeLobbied
//     00413e4e  CMP  EAX,0x20
//     00413e51  JZ   0x00413f51               ; free_2(mldplay_ptr), return 0
//     ...
//     if (result == 0x1000) DAT_0089569d = 1; ; launched by a lobby
//
// AreWeLobbied is not a predicate: it brings MLDPlay up and reports what kind
// of start this is. 0x20 is the one status the game treats as "MLDPlay is
// unusable"; 0x1000 means the process was launched by a DirectPlay lobby; any
// other value asserts a working MLDPlay that is merely not lobbied. See
// MLD_AreWeLobbied below for why only 0x20 is honest here.
//
// Every method is __thiscall (the `QAE` in the mangled name), so `this`
// arrives in ECX and only the stack arguments count towards the pop. The
// argument counts below are the ones the runtime already derived from the
// mangled signatures.
//
// GetCurrentMs is the exception: it is a plain millisecond clock the game
// calls from dozens of places that have nothing to do with networking
// (00445580, 0043e480, 00415750 and more), so it returns the real time.
#include "com.h"
#include "dx.h"
#include "../runtime/guest.h"
#include "../runtime/imports.h"
#include "../runtime/win32.h"

#include <iterator>

namespace {

// Announces once that networking is unavailable, then stays quiet: the game
// polls several of these every frame while a menu is open.
void note_unavailable() {
    log_once("weanetr", "weanetr: this build has no networking; MLDPlay reports failure "
                        "so the game takes its own network-unavailable path");
}

// Returns 0 (failure) for the int- and unsigned-long-returning methods.
void mld_fail(X86 *c) {
    note_unavailable();
    set_eax(c, 0);
}

// The other gate. AreWeLobbied answers "was this process launched by a
// DirectPlay lobby, and can MLDPlay run at all", and its caller at 00413db0
// compares the result against 0x20 rather than against zero.
//
// Returning zero here is wrong in a way that is invisible until much later.
// Zero is neither 0x20 nor 0x1000, so the game reads it as "MLDPlay came up
// fine and we were not lobbied": it keeps its MLDPlay object, initialises the
// three critical sections, sets _DAT_00599c2c = 1 and returns success to
// 00499800, which then sets DAT_008956aa = 1 and takes the player number from
// an out-parameter this shim never wrote. The front end opens the multiplayer
// lobby screen instead of the main menu, and every later MLDPlay call fails
// against a subsystem the game believes is up.
//
// 0x20 is the only status a build with no networking can honestly return: it
// is the one the game's own bring-up treats as "MLDPlay is unusable", so it
// frees the object and nulls the pointer it tests everywhere else. That is
// the same outcome StartupNetwork's zero produces on the other path.
//
// The out-parameters (the GUID, the MLDPLAY_LOBBYINFO, the player number and
// the two name buffers) are deliberately left alone: the caller reads none of
// them once the result is 0x20, and writing lobby details would be inventing
// a session that does not exist.
const uint32_t MLD_NOT_AVAILABLE = 0x20;

void MLD_AreWeLobbied(X86 *c) {
    log_once("weanetr.lobby", "weanetr: AreWeLobbied reports MLDPlay unavailable (0x20); this "
                              "process was not launched by a lobby and has no networking");
    set_eax(c, MLD_NOT_AVAILABLE);
}

// StartupNetwork is the gate the whole subsystem hangs off, so it gets its
// own body and its own line in the log.
void MLD_StartupNetwork(X86 *c) {
    log_once("weanetr.startup", "weanetr: StartupNetwork reports failure; the game will run "
                                "single-player only");
    set_eax(c, 0);
}

// ShutdownNetwork after a failed startup is legitimate and must not complain.
void MLD_ShutdownNetwork(X86 *c) {
    set_eax(c, 0);
}

// void return; EAX is not read by the caller, but leaving it defined keeps the
// shim contract uniform.
void MLD_EnableNewPlayers(X86 *c) {
    set_eax(c, 0);
}

// An enumeration that finds nothing: the callback is never invoked and the
// count comes back zero. That is a successful enumeration of an empty set,
// which is what "no network hardware" looks like.
void MLD_EnumerateNothing(X86 *c) {
    note_unavailable();
    set_eax(c, 0);
}

// The millisecond clock. Shared with GetTickCount and timeGetTime through the
// runtime's one monotonic source, so every clock the game reads agrees.
void MLD_GetCurrentMs(X86 *c) {
    set_eax(c, host_millis());
}

const ImportShim g_weanetr_shims[] = {
    {"weanetr.dll", "?SendData@MLDPlay@@QAEHKPAXKKPAK@Z", 5, mld_fail},
    {"weanetr.dll", "?GetPlayerInfo@MLDPlay@@QAEHPAUMLDPLAY_PLAYERINFO@@@Z", 1, mld_fail},
    {"weanetr.dll", "?EnumerateServices@MLDPlay@@QAEHP6GXPAXPAGPAU_GUID@@K0@Z0@Z", 2,
     MLD_EnumerateNothing},
    {"weanetr.dll",
     "?AreWeLobbied@MLDPlay@@QAEKP6GXKPAXKK0@ZPAU_GUID@@PAUMLDPLAY_LOBBYINFO@@PAKPAG5KK@Z", 8,
     MLD_AreWeLobbied},
    {"weanetr.dll", "?StartupNetwork@MLDPlay@@QAEHP6GXKPAXKK0@Z@Z", 1, MLD_StartupNetwork},
    {"weanetr.dll", "?ShutdownNetwork@MLDPlay@@QAEHXZ", 0, MLD_ShutdownNetwork},
    {"weanetr.dll", "?SendMSResults@MLDPlay@@QAEKPAD@Z", 1, mld_fail},
    {"weanetr.dll", "?EnumerateNetworkMediums@MLDPlay@@QAEKP6GXPAGPAX@Z1@Z", 2,
     MLD_EnumerateNothing},
    {"weanetr.dll", "?GetCurrentMs@MLDPlay@@QAEKXZ", 0, MLD_GetCurrentMs},
    {"weanetr.dll", "?CreateSession@MLDPlay@@QAEHPAKPAG1PAXK@Z", 5, mld_fail},
    {"weanetr.dll", "?EnumerateSessions@MLDPlay@@QAEHKP6GXPAUMLDPLAY_SESSIONDESC@@PAX@ZK1@Z", 4,
     MLD_EnumerateNothing},
    {"weanetr.dll", "?JoinSession@MLDPlay@@QAEHPAUMLDPLAY_SESSIONDESC@@PAKPAGPAX@Z", 4, mld_fail},
    {"weanetr.dll", "?CreateNetworkAddress@MLDPlay@@QAEHPAXK0PAK@Z", 4, mld_fail},
    {"weanetr.dll", "?EnableNewPlayers@MLDPlay@@QAEXH@Z", 1, MLD_EnableNewPlayers},
    {"weanetr.dll", "?DestroySession@MLDPlay@@QAEHXZ", 0, mld_fail},
    {"weanetr.dll", "?SetupConnection@MLDPlay@@QAEHPAXPAU_GUID@@0@Z", 3, mld_fail},
    {"weanetr.dll", "?SendChat@MLDPlay@@QAEHKPAGKPAK@Z", 4, mld_fail},
};

} // namespace

void weanetr_register() {
    static bool done = false;
    if (done)
        return;
    done = true;
    imports_register(g_weanetr_shims, std::size(g_weanetr_shims));
    // The four data imports (three GUIDs and options_to_parity_table) already
    // have guest storage from the runtime's own registration; nothing here
    // writes to them, so the guest reads zeroed GUIDs, which name no service.
}
