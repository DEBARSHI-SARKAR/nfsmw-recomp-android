// run_record.cpp - what every test run records, so a run can be replayed and a
// difference attributed.
//
// Determinism is DECLARED, never enforced: affects_simulation is informational
// and this record is written whatever it says.
#include "mods_internal.h"
#include "../runtime/layout.h"
#include "win32.h" /* host_clock_description */
#include "../platform/os.h"

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mutex>
#include <map>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

namespace {

// Function-local statics, not namespace-scope objects with constructors.
// The captures below run from __attribute__((constructor)), and a
// constructor-attribute function can run BEFORE this translation unit's own
// C++ dynamic initialisers - clang emits those as one late entry. Writing into
// a std::string or a std::map that has not been constructed yet is exactly the
// crash that produced: a segfault before a single line of output. A
// function-local static is constructed on first use, which is what makes these
// safe to touch from a constructor.
std::string &initial_settings() {
    static std::string s;
    return s;
}
std::string &input_script() {
    static std::string s;
    return s;
}
std::string &pin_fixture() {
    static std::string s;
    return s;
}
std::string &pin_threads() {
    static std::string s;
    return s;
}
std::string &pin_frames() {
    static std::string s;
    return s;
}
std::string &pin_script() {
    static std::string s;
    return s;
}
std::string &mods_dir() {
    static std::string s;
    return s;
}
// Where this run's record goes, when the run wants somewhere of its own.
std::string &record_path() {
    static std::string s;
    return s;
}

// `name` is a kit switch without its RECOMP_ prefix.
const char *env_or(const char *name, const char *dflt) {
    const char *v = recomp_env(name);
    return v && *v ? v : dflt;
}

// Captured at process start, before anything has run: the settings a replay
// would have to start from, the input it would have to feed, and the pins as
// they were when the run began - not as they read at shutdown, by which time
// the process may have changed its own environment.
bool g_capture_failed = false; // a file was there and could not be read
bool g_mods_enabled = true;
// The build's identity and every mod directory's identity as they were when
// the run STARTED. Hashing at shutdown records whatever is on disk then, which
// is a different run's bytes if anything was rebuilt or replaced meanwhile.
uint64_t g_archive_hash = 0, g_symbols_hash = 0;
bool g_build_hashed = false;
// dir -> (hash, when). "load" is the loader telling us at the moment it
// opened the mod.
//
// Guarded, and by a pthread mutex rather than a std::mutex, for the same
// reason the captures above are function-local statics: PTHREAD_MUTEX_INITIALIZER
// is a constant initialiser, so this lock is usable from the first instruction
// of the process, including from a constructor-attribute function that runs
// before this file's dynamic initialisers. A std::mutex at namespace scope
// would need to be constructed first, which is the ordering hazard this file
// already had once.
//
// The lock is not decoration. ThreadSanitizer on eight threads calling
// mods_run_record_capture_payload showed the unguarded version racing on the
// map's nodes - one thread reading a node another was rewriting, and two
// threads writing the same freshly allocated node. A std::map whose red-black
// tree is torn that way does not fail where it was torn; it fails later,
// somewhere else, differently on every run, which is exactly how a corrupted
// process presents.
std::mutex g_payloads_lock;
std::map<std::string, std::pair<uint64_t, const char *>> &payloads() {
    static std::map<std::string, std::pair<uint64_t, const char *>> m;
    return m;
}

// Capture run inputs and build identity before execution can alter settings or files.
// Distinguish an absent input from a read failure so diagnostics never describe failed reads as empty data.
__attribute__((constructor)) void capture_initial() {
    // A file that is absent is not an error - there may be no settings yet and
    // no input script - but a file that is there and cannot be read is, and it
    // must not become an empty string that reads like "there was nothing".
    // ENOENT is the only failure that means "absent"; a permission error, a
    // directory in the way, too many open files are all failures to READ a
    // file that may well exist, and they fail the record.
    auto slurp = [](const char *path) {
        std::string out;
        if (!path)
            return out;
        errno = 0;
        FILE *f = fopen(path, "rb");
        if (!f) {
            if (errno != ENOENT)
                g_capture_failed = true;
            return out;
        }
        char buf[8192];
        size_t n;
        while ((n = fread(buf, 1, sizeof buf, f)) > 0)
            out.append(buf, n);
        if (ferror(f)) {
            g_capture_failed = true;
            out.clear();
        }
        if (fclose(f) != 0)
            g_capture_failed = true;
        return out;
    };
    std::string settings = host_layout().profile_dir + "/mod-settings.json";
    initial_settings() = slurp(settings.c_str());
    pin_script() = env_or("SCRIPT", "");
    input_script() = slurp(pin_script().empty() ? nullptr : pin_script().c_str());
    pin_fixture() = env_or("FIXTURE", "");
    // RECOMP_RUN_RECORD overrides the path every host passes in.
    //
    // The hosts name one fixed file, so two runs at once write the same path
    // and the same .tmp beside it, and a reader between another run's write
    // and its own read gets whichever finished last. Gate B saw that: it
    // removes the file, runs, and copies the result, and another agent's
    // pop_smoke landing in that window replaced the record it then copied.
    //
    // A lock would serialise the scripts that agree to take one; this does not
    // depend on agreement, because a run given its own path cannot be reached
    // by a run that was not. The paths differ, so the .tmp files differ too.
    record_path() = env_or("RUN_RECORD", "");
    pin_threads() = env_or("CREATETHREAD", "");
    pin_frames() = env_or("MAX_FRAMES", "");
}

// JSON string escaping, for EVERY string this file writes. Lossless: a
// carriage return, a tab or any other control byte is escaped rather than
// dropped, because the input stream and the initial settings are embedded so
// that a replay can feed exactly those bytes back, and "exactly" excludes
// quietly losing the ones that are hard to print. A rejection reason is
// escaped for the other reason: it is a diagnostic string that can contain a
// quote, and one quote would make the whole record unparseable.
// How many bytes a well-formed UTF-8 sequence starts at `i` occupies, or 0 if
// what is there is not one. Rejects what the encoding rejects and not merely
// what the leading byte suggests: an over-long form, a surrogate half encoded
// as three bytes (ED A0 80), anything above U+10FFFF, and a continuation byte
// with no leader.
size_t utf8_len(const std::string &s, size_t i) {
    unsigned char a = (unsigned char)s[i];
    size_t n = s.size();
    auto cont = [&](size_t k) { return k < n && ((unsigned char)s[k] & 0xc0) == 0x80; };
    if (a < 0x80)
        return 1;
    if (a >= 0xc2 && a <= 0xdf)
        return cont(i + 1) ? 2 : 0;
    if (a == 0xe0)
        return cont(i + 2) && (unsigned char)s[i + 1] >= 0xa0 && (unsigned char)s[i + 1] <= 0xbf
                   ? 3
                   : 0;
    if (a >= 0xe1 && a <= 0xec)
        return cont(i + 1) && cont(i + 2) ? 3 : 0;
    if (a == 0xed)
        return cont(i + 2) && (unsigned char)s[i + 1] >= 0x80 && (unsigned char)s[i + 1] <= 0x9f
                   ? 3
                   : 0; // no surrogates
    if (a >= 0xee && a <= 0xef)
        return cont(i + 1) && cont(i + 2) ? 3 : 0;
    if (a == 0xf0)
        return cont(i + 2) && cont(i + 3) && (unsigned char)s[i + 1] >= 0x90 &&
                       (unsigned char)s[i + 1] <= 0xbf
                   ? 4
                   : 0;
    if (a >= 0xf1 && a <= 0xf3)
        return cont(i + 1) && cont(i + 2) && cont(i + 3) ? 4 : 0;
    if (a == 0xf4)
        return cont(i + 2) && cont(i + 3) && (unsigned char)s[i + 1] >= 0x80 &&
                       (unsigned char)s[i + 1] <= 0x8f
                   ? 4
                   : 0; // <= U+10FFFF
    return 0;
}

// Encode a JSON string while preserving valid UTF-8 and escaping invalid bytes.
// Diagnostics may contain arbitrary paths or errors; one malformed byte must not invalidate the record.
std::string quoted(const std::string &text) {
    static const char HEX[] = "0123456789abcdef";
    auto escape_byte = [&](std::string &out, unsigned char u) {
        out += "\\u00";
        out.push_back(HEX[u >> 4]);
        out.push_back(HEX[u & 0xf]);
    };
    std::string out = "\"";
    for (size_t i = 0; i < text.size();) {
        char c = text[i];
        unsigned char u = (unsigned char)c;
        switch (c) {
        case '"':
            out += "\\\"";
            ++i;
            continue;
        case '\\':
            out += "\\\\";
            ++i;
            continue;
        case '\n':
            out += "\\n";
            ++i;
            continue;
        case '\r':
            out += "\\r";
            ++i;
            continue;
        case '\t':
            out += "\\t";
            ++i;
            continue;
        case '\b':
            out += "\\b";
            ++i;
            continue;
        case '\f':
            out += "\\f";
            ++i;
            continue;
        default:
            break;
        }
        if (u < 0x20) {
            escape_byte(out, u);
            ++i;
            continue;
        }
        if (u < 0x80) {
            out.push_back(c);
            ++i;
            continue;
        }
        // Multi-byte: copied through only if it really is well-formed UTF-8.
        // A lone 0x80, an over-long form or an encoded surrogate would make the
        // whole record invalid UTF-8, and a record a parser rejects is not a
        // record. Each bad byte becomes \u00XX, which is valid, reversible and
        // says plainly that the input was not text.
        size_t len = utf8_len(text, i);
        if (len == 0) {
            escape_byte(out, u);
            ++i;
            continue;
        }
        out.append(text, i, len);
        i += len;
    }
    out.push_back('"');
    return out;
}

uint64_t fnv(const void *data, size_t n, uint64_t h) {
    const uint8_t *b = (const uint8_t *)data;
    for (size_t i = 0; i < n; ++i) {
        h ^= b[i];
        h *= 1099511628211ull;
    }
    return h;
}

// `missing` is set for a file that is absent, unreadable or that failed to
// close: a hash over a short read is a hash of something else, and there is no
// way to tell the two apart afterwards.
uint64_t hash_file(const std::string &path, uint64_t h, bool *missing) {
    FILE *f = fopen(path.c_str(), "rb");
    if (!f) {
        if (missing)
            *missing = true;
        return h;
    }
    // 4 KB, not 64. This runs from the loader, on whatever thread and at
    // whatever stack depth the loader happens to be at, and it runs under
    // hash_tree's recursion; a 64 KB frame there is a stack overflow waiting
    // for a small thread stack, and a stack overflow in a mod's directory walk
    // shows up as memory corruption somewhere else entirely. Nothing here is
    // I/O-bound enough for the size to matter.
    unsigned char buf[4096];
    size_t n;
    while ((n = fread(buf, 1, sizeof buf, f)) > 0)
        h = fnv(buf, n, h);
    if (ferror(f) && missing)
        *missing = true;
    if (fclose(f) != 0 && missing)
        *missing = true;
    return h;
}

// Recursive, and in name order, so a pack with subdirectories hashes the same
// on every machine. Depth-limited: a mod tree is a handful of levels, and a
// symlink loop or a pathological pack must not walk the stack off the end of
// whatever thread the loader called this on.
int collect_name(const char *name, void *user) {
    ((std::vector<std::string> *)user)->push_back(name);
    return 0;
}

uint64_t hash_tree(const std::string &dir, uint64_t h, bool *missing, int depth) {
    if (depth > 32) {
        LOGW("mods: run record: %s is nested deeper than 32 levels; refusing "
             "to walk further",
             dir.c_str());
        if (missing)
            *missing = true;
        return h;
    }
    std::vector<std::string> names;
    if (os_listdir(dir.c_str(), collect_name, &names) != 0) {
        if (missing)
            *missing = true;
        return h;
    }
    // Only "." and "..". Every other dot-prefixed file is skipped by nobody
    // else: the overlay resolves and enumerates them, so a mod can ship one
    // and the guest can read it. Skipping them here let two guest-visible
    // asset sets record the same identity.
    std::sort(names.begin(), names.end());
    for (const std::string &n : names) {
        std::string p = dir + "/" + n;
        h = fnv(n.data(), n.size(), h);
        // What this entry IS decides what to do with it, asked once, with
        // stat. The previous version asked by trying: opendir to see whether
        // it was a directory, and fopen for everything else. Opening is the
        // wrong question, because opening is not free of consequences on
        // anything that is not a regular file - fopen on a FIFO BLOCKS until
        // some other process opens the write end, and nothing in a mod pack
        // is obliged not to contain one. A named pipe in a mod directory
        // stopped this walk for as long as the probe was left running.
        //
        // stat, not lstat: a symlink is followed, because the overlay follows
        // it too and the identity has to describe what the guest can read.
        // A symlink cycle therefore still recurses, and the depth limit above
        // is what ends it.
        OsStat st;
        if (os_stat(p.c_str(), &st) != 0) {
            if (missing)
                *missing = true;
            continue;
        }
        if (st.is_dir) {
            h = hash_tree(p, h, missing, depth + 1);
        } else if (st.is_regular) {
            h = hash_file(p, h, missing);
        } else {
            // A device, socket or FIFO: it is part of what is there, so its
            // presence goes into the identity, but it has no contents to read
            // and must not be opened. One code for every such kind: the
            // platform layer does not distinguish them, and no mod pack
            // legitimately ships one.
            uint32_t kind = 0x0000F000u;
            h = fnv(&kind, sizeof kind, h);
        }
    }
    return h;
}

// The BUILD's identity, taken before the run has done anything. This one has
// to be early and cannot be anywhere else: the archive and the symbol index
// are files, and hashing them at shutdown records whatever a rebuild left
// there rather than what this run ran.
//
// It does NOT walk the mods directory. It used to, as a fallback for hosts
// that did not capture payloads themselves; the loader now captures each mod
// when it commits, which is both more precise - the bytes that actually
// loaded, and only for mods that survived their init - and free of a
// directory recursion running before main.
__attribute__((constructor)) void capture_build() {
    // PRESENCE disables, whatever the value, because that is what the hosts
    // do: boot.cpp and fixture.cpp both ask !recomp_env("NO_MODS"). Asking
    // whether the value was non-empty made RECOMP_NO_MODS="" a run with mods
    // off that recorded itself as a run with mods on - the one field whose
    // whole job is to tell those two apart.
    //
    // This reports what the ENVIRONMENT said. A host can also disable mods in
    // its own options (boot.cpp's g_opt.load_mods), and that is not visible
    // from here, at process start, before any host has been constructed. The
    // mods array is what says whether any mod actually loaded.
    g_mods_enabled = recomp_env("NO_MODS") == nullptr;
    mods_dir() = env_or("MODS_DIR", "mods");

    const uint64_t seed = 1469598103934665603ull;
    bool missing = false;
    // The translated archive lives under the checkout's build/recomp (a game
    // repository's, or the kit's for its stub); never relative to the working
    // directory, which is the kit even when the game lives elsewhere.
    uint64_t archive = hash_file(host_state_file("librecomp_gen.a").c_str(), seed, &missing);
    uint64_t symbols = hash_file(host_resource("symbols.json").c_str(), seed, &missing);
    if (!missing) {
        g_archive_hash = archive;
        g_symbols_hash = symbols;
        g_build_hashed = true;
    }
}

} // namespace

// Called by the loader when it commits a mod - after the plugin has loaded and
// its init has succeeded - which is the most precise moment there is: exactly
// the bytes this run ran, and only for a mod that is actually part of the run.
//
// SAFE TO CALL AT ANY TIME, from any thread, including before main and with no
// loader state at all. That is a claim this function did not previously earn.
// Called immediately before dlopen instead of at commit, it broke the shared
// test binary intermittently: impl-t6 measured three runs out of three failing,
// two of them crashes, with a different set of unrelated suites failing each
// time.
//
// Which of the properties below their call site actually hit is NOT
// established. Reproducing their placement means editing the loader, and the
// loader was being edited by someone else at the time, so the experiment was
// not run. What was done instead is to remove every property that would let
// this function damage a caller, each one demonstrated separately against the
// code as it stood - three of them in an isolated harness under
// AddressSanitizer and ThreadSanitizer, one of them by measurement from
// impl-t6. The list is therefore a list of real defects, not a diagnosis:
//
//   - hash_file read through a 65536-byte stack buffer, inside hash_tree's
//     recursion, on whatever thread and at whatever depth the caller was at.
//     It is 4096 now.
//   - hash_tree recursed without a limit, so a symlink cycle in a mod pack
//     walked the stack off the end. It stops at 32 levels.
//   - the payload map was read and written with no lock. ThreadSanitizer
//     shows the race directly, and a torn std::map fails later and elsewhere,
//     which is what "a different set of failures every run" looks like. No
//     loader calls this from two threads today, so this one is latent rather
//     than a past cause; it is the property that would make "any thread" false.
//   - the walk decided what an entry was by opening it, and fopen on a FIFO
//     blocks until someone opens the write end. It asks stat instead.
//
// The commit point remains the right one on its own merits - it names the
// bytes that actually loaded, and only for a mod that survived its init - and
// it is where the loader calls it. Nothing now punishes calling it elsewhere.
extern "C" void mods_run_record_capture_payload(const char *dir) {
    if (!dir || !*dir)
        return;
    bool bad = false;
    // Hashed OUTSIDE the lock: the walk is the slow part, it touches nothing
    // shared, and holding a lock across a filesystem traversal would make one
    // slow mod directory stall every other caller.
    uint64_t h = hash_tree(dir, 1469598103934665603ull, &bad, 0);
    if (bad)
        return;
    g_payloads_lock.lock();
    payloads()[dir] = std::make_pair(h, "load");
    g_payloads_lock.unlock();
}

namespace {

// A fixed-width hex or decimal field, so the record's shape does not depend on
// a printf format string being repeated correctly in eight places.
std::string hex16(uint64_t v) {
    char buf[32];
    snprintf(buf, sizeof buf, "%016llx", (unsigned long long)v);
    return buf;
}
std::string dec(long long v) {
    char buf[32];
    snprintf(buf, sizeof buf, "%lld", v);
    return buf;
}

} // namespace

// Whether this process has already written a record naming at least one mod.
// Every host now calls mods_write_run_record unconditionally, which is what
// finding 8 asked for, and more than one of them may call it for the same run:
// the loader writes at shutdown while the records are still there, and a host
// fallback writes again afterwards for the case where nothing else would. The
// second of those runs when the registry is empty, and without this it erases
// the run's identity at the very last moment - Gate B saw exactly that, a
// fixture run that had loaded five mods recording none.
bool g_wrote_with_mods = false;

// Write the run record from startup identity, settings and current mod diagnostics.
// Use the run-specific destination and retain the populated record across repeated teardown calls.
bool mods_write_run_record(const char *path) {
    bool missing = false;
    const uint64_t seed = 1469598103934665603ull;

    // The run's own path wins over the one the host passed, which is the same
    // fixed name in every host and therefore shared by every concurrent run.
    if (!record_path().empty())
        path = record_path().c_str();
    if (!path || !*path)
        return false;

    uint32_t loaded_now = 0;
    for (uint32_t i = 0; i < mods_record_count(); ++i) {
        const char *id, *version, *dir, *plugin, *script, *assets, *reason;
        int loaded = 0, affects = 0;
        uint32_t owner = 0;
        if (mods_record(i, &id, &version, &dir, &plugin, &script, &assets, &loaded, &reason, &owner,
                        &affects) &&
            loaded)
            ++loaded_now;
    }
    if (g_wrote_with_mods && loaded_now == 0) {
        LOGW("mods: a run record naming this run's mods is already written; "
             "not replacing it with an empty one");
        return true;
    }
    if (g_capture_failed) {
        LOGW("mods: run record incomplete - the settings or the input script "
             "could not be read at start");
        return false;
    }

    // Build identity, as it was when the run STARTED. Hashing here would
    // record whatever is on disk at shutdown, which is a different build's
    // bytes if anything was rebuilt while the run was going - and a run's
    // identity is what it ran.
    if (!g_build_hashed) {
        LOGW("mods: run record incomplete - a build artifact was missing at "
             "start");
        return false;
    }
    uint64_t archive = g_archive_hash;
    uint64_t symbols = g_symbols_hash;
    (void)missing;

    // Serialised in full before anything is written. A record with a hole in
    // it is worse than no record: it looks like an answer. So the failures
    // below - a missing payload, an unreadable file - return without having
    // touched the destination at all.
    std::string out = "{\n";
    out +=
        "  \"exe_sha256\": " + quoted(mods_symbols_exe_sha256() ? mods_symbols_exe_sha256() : "") +
        ",\n";
    out += "  \"generated_archive\": \"" + hex16(archive) + "\",\n";
    // The override set as the BUILD reports it: which functions this binary
    // actually replaced, from the two generated tables. An environment
    // variable would be a claim about the build rather than a fact from it.
    out += "  \"override_count\": " + dec((long long)recomp_override_count()) + ",\n";
    out += "  \"override_set\": \"" + hex16(recomp_override_hash()) + "\",\n";
    out += "  \"symbols\": \"" + hex16(symbols) + "\",\n";
    // Where those two hashes came from, said in the record rather than left
    // for a reader to assume. They are the files on disk as the process
    // started, not the archive the binary was linked against - this build has
    // no way to ask itself what it linked. The two differ only if the archive
    // is rebuilt between linking this binary and launching it, which a build
    // holding the lock does not do to a binary already built; a v1 limitation,
    // recorded so that a reader comparing two runs knows what was compared.
    out += "  \"build_identity_source\": \"archive-at-start\",\n";
    // The scheduler pins as they were when the run STARTED, and the clock as
    // the host actually installed it.
    //
    // The clock is asked HERE and not with the others at process start. The
    // others are environment variables, fixed before anything runs; the clock
    // is a fact about the host, and the host installs its time source from
    // main, after every constructor in this file has already run. Captured
    // early it would read "monotonic" for every run including the pinned ones.
    //
    // It replaces a clock_ms field read from RECOMP_CLOCK_MS, which no
    // host, runtime file or tool ever read. Recording it made the pins block
    // claim something it could not support: two runs with the same empty
    // clock_ms looked like two runs whose clocks agreed, when one may have
    // been pinned and the other on the wall.
    out += "  \"pins\": {\"fixture\": " + quoted(pin_fixture()) +
           ", \"clock\": " + quoted(host_clock_description() ? host_clock_description() : "") +
           ", \"createthread\": " + quoted(pin_threads()) +
           ", \"frames\": " + quoted(pin_frames()) + "},\n";
    // The input STREAM itself, not a path and not only a hash: a replay has to
    // be able to feed exactly these steps back.
    out += "  \"input\": {\"path\": " + quoted(pin_script()) +
           ", \"bytes\": " + dec((long long)input_script().size()) + ", \"hash\": \"" +
           hex16(fnv(input_script().data(), input_script().size(), seed)) +
           "\", \"text\": " + quoted(input_script()) + "},\n";
    // Likewise the settings the run started from, in full.
    out += "  \"initial_settings\": " + quoted(initial_settings()) + ",\n";
    // Whether mods were enabled at all, and where they were looked for. A run
    // with none loaded is a run that recorded an empty set on purpose, which a
    // reader can tell from a run that never wrote a record.
    out += "  \"mods_enabled\": " + std::string(g_mods_enabled ? "true" : "false") + ",\n";
    out += "  \"mods_dir\": " + quoted(mods_dir()) + ",\n";

    out += "  \"mods\": [\n";
    bool first = true;
    for (uint32_t i = 0; i < mods_record_count(); ++i) {
        const char *id, *version, *dir, *plugin, *script, *assets, *reason;
        int loaded = 0, affects = 0;
        uint32_t owner = 0;
        if (!mods_record(i, &id, &version, &dir, &plugin, &script, &assets, &loaded, &reason,
                         &owner, &affects) ||
            !loaded)
            continue;
        // The identity captured when this mod was loaded, or failing that
        // when the run started. Hashing here would describe the file as it is
        // now, not as it was run.
        uint64_t payload = 0;
        const char *when = nullptr;
        bool captured = false;
        // Copied out under the lock, never held across what follows: the
        // iterator is only valid while the lock is, and the fallback below
        // walks a directory.
        g_payloads_lock.lock();
        std::map<std::string, std::pair<uint64_t, const char *>>::const_iterator it =
            payloads().find(dir);
        if (it != payloads().end()) {
            payload = it->second.first;
            when = it->second.second;
            captured = true;
        }
        g_payloads_lock.unlock();
        if (!captured) {
            // A mod from somewhere the start-of-run walk did not see. Better a
            // late hash, said to be late, than no identity at all.
            bool mod_missing = false;
            payload = hash_tree(dir, seed, &mod_missing, 0);
            if (mod_missing) {
                LOGW("mods: run record incomplete - %s has a missing payload "
                     "file",
                     id);
                return false; // nothing has been written yet
            }
            when = "shutdown";
        }
        out += first ? "" : ",\n";
        out += "    {\"id\": " + quoted(id) + ", \"version\": " + quoted(version) +
               ", \"order\": " + dec((long long)owner) + ", \"payload\": \"" + hex16(payload) +
               "\"" + ", \"payload_at\": " + quoted(when) +
               ", \"affects_simulation\": " + (affects ? "true" : "false") + "}";
        first = false;
    }
    out += "\n  ],\n  \"settings\": {\n";
    first = true;
    for (uint32_t i = 0; i < mods_settings_entry_count(); ++i) {
        uint32_t owner = 0;
        const char *mod_id = nullptr, *key = nullptr, *label = nullptr;
        int32_t kind = 0;
        int64_t value = 0, mn = 0, mx = 0;
        if (!mods_settings_entry(i, &owner, &mod_id, &key, &label, &kind, &value, &mn, &mx))
            continue;
        out += first ? "" : ",\n";
        out += "    " + quoted(std::string(mod_id ? mod_id : "") + "/" + (key ? key : "")) + ": " +
               dec((long long)value);
        first = false;
    }
    out += "\n  },\n  \"rejected\": [\n";
    first = true;
    for (uint32_t i = 0; i < mods_record_count(); ++i) {
        const char *id, *version, *dir, *plugin, *script, *assets, *reason;
        int loaded = 0, affects = 0;
        uint32_t owner = 0;
        if (!mods_record(i, &id, &version, &dir, &plugin, &script, &assets, &loaded, &reason,
                         &owner, &affects) ||
            loaded)
            continue;
        out += first ? "" : ",\n";
        // A reason is a diagnostic sentence and can contain anything.
        out += "    {\"id\": " + quoted(id) + ", \"reason\": " + quoted(reason ? reason : "") + "}";
        first = false;
    }
    out += "\n  ]\n}\n";

    // Published by rename, and only after the bytes are on disk: a reader
    // either sees the previous record or this one, never a truncated file, and
    // a write that fails half way leaves the previous record in place.
    // The record's directory is the host's state directory, which a game
    // repository that has never carried a mod does not have yet.
    std::string parent = std::string(path);
    size_t slash = parent.find_last_of('/');
    if (slash != std::string::npos) {
        parent.resize(slash);
        std::string made;
        for (size_t i = 1; i <= parent.size(); ++i) {
            if (i == parent.size() || parent[i] == '/') {
                made = parent.substr(0, i);
                OsStat st;
                if (os_stat(made.c_str(), &st) != 0)
                    os_mkdir(made.c_str());
            }
        }
    }
    std::string tmp = std::string(path) + ".tmp";
    FILE *f = fopen(tmp.c_str(), "wb");
    if (!f) {
        LOGW("mods: run record could not be opened for writing: %s", tmp.c_str());
        return false;
    }
    bool ok = fwrite(out.data(), 1, out.size(), f) == out.size();
    if (ok)
        ok = fflush(f) == 0;
    if (fclose(f) != 0)
        ok = false; // the close is where ENOSPC lands
    if (!ok || os_rename(tmp.c_str(), path) != 0) {
        LOGW("mods: run record could not be written to %s", path);
        remove(tmp.c_str());
        return false;
    }
    if (loaded_now)
        g_wrote_with_mods = true;
    return true;
}
