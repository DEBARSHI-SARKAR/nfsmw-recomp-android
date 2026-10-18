// overlay_tests.cpp - read precedence, write confinement, merged enumeration
// and the owner-scoped push window.
//
// Every check goes through the file shim the game itself uses, because a
// precedence rule that only holds in a unit test is a rule the game never sees.
#include "mods_tests.h"
#include "../../platform/os.h"
#ifndef _WIN32
#include <unistd.h> // symlink, POSIX-only check
#endif
#include "shim_call.h"
#include "../mods_internal.h"
#include "../../runtime/imports.h"
#include "../../runtime/loader.h"
#include "../../runtime/memory.h"
#include "../../runtime/win32.h"

#include <stdio.h>
#include <cctype>
#include <filesystem>
#include <thread>
#include <string>

namespace {

// This suite's own scratch root, created empty: no other suite writes here.
const char *ROOT = nullptr; // set by layers() from mod_test_dir("overlay")

void write_file(const std::string &path, const std::string &text) {
    std::string dir = path.substr(0, path.find_last_of('/')), acc;
    for (size_t i = 0; i < dir.size(); ++i) {
        acc.push_back(dir[i]);
        if (dir[i] == '/' || i + 1 == dir.size())
            os_mkdir(acc.c_str());
    }
    FILE *f = fopen(path.c_str(), "wb");
    MOD_CHECK(f != nullptr);
    if (!f)
        return;
    MOD_CHECK_EQ(fwrite(text.data(), 1, text.size(), f), text.size());
    fclose(f);
}

std::string read_file(const std::string &path) {
    FILE *f = fopen(path.c_str(), "rb");
    if (!f)
        return "";
    char buf[512];
    size_t n = fread(buf, 1, sizeof buf, f);
    fclose(f);
    return std::string(buf, n);
}

void layers() {
    ROOT = mod_test_dir("overlay");
    mem_init();
    loader_load(nullptr); // sets the game dir to original/gog
    mods_overlay_set_profile_dir((std::string(ROOT) + "/profile").c_str());
    mods_overlay_reset();

    std::string base = ROOT;
    write_file(base + "/profile/data/shared.txt", "profile");
    write_file(base + "/moda/data/shared.txt", "mod-a");
    write_file(base + "/moda/data/froma.txt", "a");
    write_file(base + "/modb/data/shared.txt", "mod-b");
    write_file(base + "/modb/data/FROMB.TXT", "b");

    mods_overlay_set_profile_dir((base + "/profile").c_str());
    uint32_t id = 0;
    mods_overlay_begin_init(2);
    MOD_CHECK_EQ(mods_overlay_push(2, (base + "/moda").c_str(), &id), POP_OK);
    mods_overlay_end_init();
    mods_overlay_begin_init(3);
    MOD_CHECK_EQ(mods_overlay_push(3, (base + "/modb").c_str(), &id), POP_OK);
    mods_overlay_end_init();
}

} // namespace

MOD_TEST_SUITE(overlay_read_precedence) {
    layers();
    MOD_CHECK(read_file(win32_host_path_op("data\\shared.txt", WIN32_FILE_READ)) == "profile");
    os_unlink((std::string(ROOT) + "/profile/data/shared.txt").c_str());
    win32_invalidate_dir_cache();
    // A later-loaded mod's file wins over an earlier one's.
    MOD_CHECK(read_file(win32_host_path_op("data\\shared.txt", WIN32_FILE_READ)) == "mod-b");
    // Case does not matter on any tier: the guest asks in the case the
    // original EXE happens to use.
    MOD_CHECK(read_file(win32_host_path_op("DATA\\FROMA.TXT", WIN32_FILE_READ)) == "a");
    MOD_CHECK(read_file(win32_host_path_op("data\\fromb.txt", WIN32_FILE_READ)) == "b");
    // The GOG folder is last but reachable.
    std::string level = win32_host_path_op("levels\\levl2001.dat", WIN32_FILE_READ);
    MOD_CHECK(level.find(win32_game_dir()) == 0);
}

MOD_TEST_SUITE(overlay_never_mutates_a_lower_tier) {
    layers();
    X86 *c = loader_context();
    loader_init_context(c);

    // A create resolves into the profile.
    std::string fresh = win32_host_path_op("data\\newsave.dat", WIN32_FILE_WRITE);
    MOD_CHECK(fresh.find(mods_overlay_profile_dir()) == 0);

    // Opening a MOD's file for writing copies it up first: the write lands in
    // the profile and the mod's own copy is untouched.
    std::string over = win32_host_path_op("data\\froma.txt", WIN32_FILE_WRITE);
    MOD_CHECK(over.find(mods_overlay_profile_dir()) == 0);
    MOD_CHECK(read_file(over) == "a"); // copied up
    MOD_CHECK(read_file(std::string(ROOT) + "/moda/data/froma.txt") == "a");

    // The same for a GOG file: the original is never opened for writing.
    std::string gog = win32_host_path_op("levels\\levl2001.dat", WIN32_FILE_WRITE);
    MOD_CHECK(gog.find(mods_overlay_profile_dir()) == 0);
    MOD_CHECK(gog.find(win32_game_dir()) != 0);

    // A create in a directory the profile does not have yet works, because the
    // parents are made before anything is written.
    std::string deep = win32_host_path_op("saves\\slot1\\game.sav", WIN32_FILE_WRITE);
    MOD_CHECK(deep.find(mods_overlay_profile_dir()) == 0);
    FILE *f = fopen(deep.c_str(), "wb");
    MOD_CHECK(f != nullptr);
    if (f)
        fclose(f);

    // And the same through the guest's own API, which is what actually matters.
    uint32_t name = mod_test_put_str("levels\\levl2001.dat");
    uint32_t h =
        mod_test_call_import(c, "KERNEL32.dll", "CreateFileA", {name, 0x40000000u, 0, 0, 3, 0, 0});
    MOD_CHECK(h != 0xffffffffu);
    // Whatever handle it got, it is not the GOG file.
    MOD_CHECK(win32_host_path_op("levels\\levl2001.dat", WIN32_FILE_WRITE).find(win32_game_dir()) !=
              0);
    mod_test_call_import(c, "KERNEL32.dll", "CloseHandle", {h});
}

MOD_TEST_SUITE(overlay_deletes_reach_the_profile_only) {
    // Its own fixture: the copy-up test above leaves a profile copy behind,
    // and a delete test that ran after it would be deleting that copy rather
    // than proving anything about the tier below.
    layers();
    // A file only a mod has: nothing in the profile to delete, and v1 has no
    // tombstones, so it cannot be hidden either.
    MOD_CHECK(win32_host_path_op("data\\fromb.txt", WIN32_FILE_DELETE).empty());
    MOD_CHECK(win32_host_path_op("levels\\levl2001.dat", WIN32_FILE_DELETE).empty());
    MOD_CHECK(read_file(win32_host_path_op("data\\fromb.txt", WIN32_FILE_READ)) == "b");
    // A file the profile does have deletes from there, and the mod's copy is
    // then what a read finds.
    write_file(std::string(mods_overlay_profile_dir()) + "/data/fromb.txt", "profile-b");
    win32_invalidate_dir_cache();
    std::string mine = win32_host_path_op("data\\fromb.txt", WIN32_FILE_DELETE);
    MOD_CHECK(mine.find(mods_overlay_profile_dir()) == 0);
    os_unlink(mine.c_str());
    win32_invalidate_dir_cache();
    MOD_CHECK(read_file(win32_host_path_op("data\\fromb.txt", WIN32_FILE_READ)) == "b");
    // A rename destination is a write, so it lands in the profile too.
    MOD_CHECK(win32_host_path_op("data\\newsave.dat", WIN32_FILE_RENAME_DST)
                  .find(mods_overlay_profile_dir()) == 0);
}

MOD_TEST_SUITE(overlay_enumeration_merges_and_keeps_metadata) {
    layers();
    X86 *c = loader_context();
    loader_init_context(c);

    // Through the guest's own FindFirstFile: one entry per filename, and the
    // size comes from the tier that actually supplied the match.
    uint32_t pattern = mod_test_put_str("data\\*.txt");
    uint32_t data = mod_test_scratch(0x1000);
    uint32_t h = mod_test_call_import(c, "KERNEL32.dll", "FindFirstFileA", {pattern, data});
    MOD_CHECK(h != 0xffffffffu);
    int seen_shared = 0, seen_froma = 0, seen_fromb = 0;
    do {
        std::string n = gm_str(data + 44);
        uint32_t size = rd32(data + 32);
        for (char &ch : n)
            ch = (char)tolower((unsigned char)ch);
        if (n == "shared.txt") {
            ++seen_shared;
            MOD_CHECK_EQ(size, 7u);
        } // "profile"
        else if (n == "froma.txt") {
            ++seen_froma;
            MOD_CHECK_EQ(size, 1u);
        } else if (n == "fromb.txt") {
            ++seen_fromb;
            MOD_CHECK_EQ(size, 1u);
        }
    } while (mod_test_call_import(c, "KERNEL32.dll", "FindNextFileA", {h, data}) == 1);
    mod_test_call_import(c, "KERNEL32.dll", "FindClose", {h});
    MOD_CHECK_EQ(seen_shared, 1);
    MOD_CHECK_EQ(seen_froma, 1);
    MOD_CHECK_EQ(seen_fromb, 1);
}

MOD_TEST_SUITE(overlay_push_window_is_owner_scoped) {
    layers();
    uint32_t id = 0;
    // Outside any init, a push is refused.
    MOD_CHECK_EQ(mods_overlay_push(4, ROOT, &id), POP_E_STATE);
    // During another mod's init, a push from a different mod is refused.
    mods_overlay_begin_init(5);
    MOD_CHECK_EQ(mods_overlay_push(6, ROOT, &id), POP_E_STATE);
    MOD_CHECK_EQ(mods_overlay_push(5, ROOT, &id), POP_OK);
    mods_overlay_end_init();
    // Once sealed, nobody may push.
    mods_overlay_seal();
    MOD_CHECK(mods_overlay_sealed());
    mods_overlay_begin_init(7);
    MOD_CHECK_EQ(mods_overlay_push(7, ROOT, &id), POP_E_STATE);
    mods_overlay_end_init();

    // Rollback drops a mod's layer and the tier below it comes back.
    layers();
    os_unlink((std::string(ROOT) + "/profile/data/shared.txt").c_str());
    win32_invalidate_dir_cache();
    MOD_CHECK(read_file(win32_host_path_op("data\\shared.txt", WIN32_FILE_READ)) == "mod-b");
    mods_overlay_remove_all(3);
    win32_invalidate_dir_cache();
    MOD_CHECK(read_file(win32_host_path_op("data\\shared.txt", WIN32_FILE_READ)) == "mod-a");
}

MOD_TEST_SUITE(overlay_guest_mutations) {
    layers();
    X86 *c = loader_context();
    loader_init_context(c);
    uint32_t from = mod_test_put_str("DATA\\FROMA.TXT");
    uint32_t to = mod_test_put_str("saves\\slot2\\new.dat");
    MOD_CHECK_EQ(mod_test_call_import(c, "KERNEL32.dll", "DeleteFileA", {from}), 0u);
    MOD_CHECK_EQ(mod_test_call_import(c, "KERNEL32.dll", "MoveFileA", {from, to}), 0u);
    MOD_CHECK_EQ(mod_test_call_import(c, "KERNEL32.dll", "CopyFileA", {from, to, 1}), 1u);
    MOD_CHECK(read_file(std::string(ROOT) + "/profile/saves/slot2/new.dat") == "a");
    // Destination exists only below the profile: fail-if-exists must not see
    // an accidental copy-up made while resolving the destination.
    uint32_t other = mod_test_put_str("data\\fromb.txt");
    MOD_CHECK_EQ(mod_test_call_import(c, "KERNEL32.dll", "CopyFileA", {from, other, 1}), 1u);
    MOD_CHECK(read_file(std::string(ROOT) + "/modb/data/FROMB.TXT") == "b");
    MOD_CHECK_EQ(mod_test_call_import(c, "KERNEL32.dll", "DeleteFileA", {other}), 1u);
    MOD_CHECK(read_file(win32_host_path_op("data\\fromb.txt", WIN32_FILE_READ)) == "b");
    MOD_CHECK_EQ(mod_test_call_import(c, "KERNEL32.dll", "MoveFileA", {to, other}), 1u);
    MOD_CHECK(read_file(win32_host_path_op("data\\fromb.txt", WIN32_FILE_READ)) == "a");

    uint32_t h =
        mod_test_call_import(c, "KERNEL32.dll", "CreateFileA", {from, 0x40000000u, 0, 0, 3, 0, 0});
    MOD_CHECK(h != 0xffffffffu);
    uint32_t text = mod_test_put_str("rewritten");
    uint32_t count = mod_test_scratch(0x1800);
    MOD_CHECK_EQ(mod_test_call_import(c, "KERNEL32.dll", "WriteFile", {h, text, 9, count, 0}), 1u);
    MOD_CHECK_EQ(rd32(count), 9u);
    mod_test_call_import(c, "KERNEL32.dll", "CloseHandle", {h});
    MOD_CHECK(read_file(win32_host_path_op("data\\froma.txt", WIN32_FILE_READ)) == "rewritten");
    MOD_CHECK(read_file(std::string(ROOT) + "/moda/data/froma.txt") == "a");
}

MOD_TEST_SUITE(overlay_root_and_failure_paths) {
    layers();
    write_file(std::string(ROOT) + "/profile/ROOT.TXT", "top");
    write_file(std::string(ROOT) + "/modb/root.txt", "lower");
    write_file(std::string(ROOT) + "/moda/.asset", "hidden");
    std::vector<std::pair<std::string, std::string>> entries;
    mods_cpp_overlay_list("", &entries);
    int root_count = 0, hidden_count = 0;
    for (auto &kv : entries) {
        std::string key = kv.first;
        for (char &ch : key)
            ch = (char)tolower((unsigned char)ch);
        if (key == "root.txt") {
            ++root_count;
            MOD_CHECK(read_file(kv.second) == "top");
        }
        if (key == ".asset")
            ++hidden_count;
    }
    MOD_CHECK_EQ(root_count, 1);
    MOD_CHECK_EQ(hidden_count, 1);
    write_file(std::string(ROOT) + "/profile/blocked", "file");
    MOD_CHECK(win32_host_path_op("blocked\\child\\new", WIN32_FILE_WRITE).empty());
    std::string unused;
    MOD_CHECK(!mods_cpp_overlay_resolve("../moda/data/froma.txt", WIN32_FILE_WRITE, &unused));
    MOD_CHECK(!mods_cpp_overlay_resolve("data/froma.txt", 999, &unused));
    std::string link = std::string(ROOT) + "/profile/escape";
    std::string target = std::filesystem::absolute(std::string(ROOT) + "/moda").string();
#ifndef _WIN32
    MOD_CHECK_EQ(symlink(target.c_str(), link.c_str()), 0);
#else
    printf("symlink check skipped on Windows\n");
    return;
#endif
    MOD_CHECK(win32_host_path_op("escape\\data\\froma.txt", WIN32_FILE_WRITE).empty());
    MOD_CHECK(win32_host_path_op("escape\\data\\froma.txt", WIN32_FILE_DELETE).empty());
    PopModApi api{};
    api.mod_index = 8;
    mods_fill_overlay_api(&api);
    uint32_t id = 0;
    mods_overlay_begin_init(8);
    MOD_CHECK_EQ(api.overlay_push(&api, "", &id), POP_E_INVAL);
    MOD_CHECK_EQ(api.overlay_push(&api, (std::string(ROOT) + "/missing").c_str(), &id),
                 POP_E_NOTFOUND);
    PopModStatus threaded = POP_OK;
    std::thread t([&] { threaded = api.overlay_push(&api, ROOT, &id); });
    t.join();
    MOD_CHECK_EQ(threaded, POP_E_STATE);
    MOD_CHECK_EQ(api.overlay_push(&api, ROOT, &id), POP_OK);
    MOD_CHECK(id != 0);
    MOD_CHECK_EQ(mods_overlay_layer_count(), 3u);
    mods_overlay_end_init();
    mods_overlay_remove_all(8);
    MOD_CHECK_EQ(mods_overlay_layer_count(), 2u);
}
