#define RECOMP_GUEST_MEMORY_OWNER 1 /* points g_mem at a replay arena around each call */
#include "replay.h"
#include "shim_capture.h"
#include "../../runtime/guest.h"
#include "../../runtime/imports.h"
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <set>
#include <stdexcept>

namespace pop_replay {
uint64_t Seams::call(const std::string &name, const std::vector<uint64_t> &args,
                     bool side_effecting) {
    if (failed_)
        throw std::runtime_error("shim sequence already failed");
    if (side_effecting) {
        failed_ = true;
        throw std::runtime_error("side-effecting seam rejected: " + name);
    }
    if (position_ >= max_calls || position_ >= record_.size() ||
        record_[position_].side_effecting || record_[position_].function != name ||
        record_[position_].arguments != args) {
        failed_ = true;
        throw std::runtime_error("shim sequence mismatch at call " + std::to_string(position_));
    }
    return record_[position_++].result;
}
void Seams::finish() const {
    if (failed_ || position_ != record_.size())
        throw std::runtime_error("shim sequence incomplete or failed at call " +
                                 std::to_string(position_));
}
std::string validate(const Capture &c) {
    if (!c.arena_size || c.arena_size > 256u * 1024 * 1024 || !c.page_size ||
        (c.page_size & (c.page_size - 1)) || c.arena_size % c.page_size)
        return "invalid arena/page geometry";
    if (c.entry.size != sizeof(pop_cpu_v1) || c.exit.size != sizeof(pop_cpu_v1))
        return "unsupported CPU size";
    if (c.live_flags & ~63u)
        return "invalid live flag mask";
    if (c.pages.empty())
        return "empty read/write set";
    if (c.pages.size() > max_pages)
        return "capture exceeds 4096 pages";
    if (c.calls.size() > max_calls)
        return "capture exceeds 10000 shim calls";
    std::set<uint32_t> seen;
    for (const auto &p : c.pages) {
        if (p.address % c.page_size || p.address >= c.arena_size ||
            c.page_size > c.arena_size - p.address || !seen.insert(p.address).second)
            return "invalid or duplicate page address";
        if ((!p.read && !p.written) || p.entry.size() != c.page_size ||
            (p.written ? p.exit.size() != c.page_size : !p.exit.empty()))
            return "invalid page contents or access set";
    }
    for (const auto &s : c.calls) {
        if (s.side_effecting)
            return "side-effecting seam rejected: " + s.function;
        if (s.function.empty())
            return "empty seam name";
    }
    return {};
}
static std::string compare_cpu(const pop_cpu_v1 &a, const pop_cpu_v1 &b, uint32_t live) {
    // The values, not just the name. "CPU differs: eax" says a replacement is
    // wrong; "expected 34900, got 0" says how, and the difference between
    // those two is most of the time it takes to find out why.
    char detail[96];
#define FIELD(f)                                                                                   \
    if (std::memcmp(&a.f, &b.f, sizeof a.f)) {                                                     \
        if (sizeof a.f == sizeof(uint32_t)) {                                                      \
            uint32_t want = 0, got = 0;                                                            \
            std::memcpy(&want, &a.f, sizeof(uint32_t));                                            \
            std::memcpy(&got, &b.f, sizeof(uint32_t));                                             \
            std::snprintf(detail, sizeof detail, "CPU differs: " #f " (expected %u, got %u)",      \
                          want, got);                                                              \
            return detail;                                                                         \
        }                                                                                          \
        return "CPU differs: " #f;                                                                 \
    }
    FIELD(size);
    FIELD(eax);
    FIELD(ecx);
    FIELD(edx);
    FIELD(ebx);
    FIELD(esp);
    FIELD(ebp);
    FIELD(esi);
    FIELD(edi);
    FIELD(eip);
    // target/phase are hook metadata, reserved0 and padding are not registers.
    if (live & 1) {
        FIELD(cf);
    }
    if (live & 2) {
        FIELD(zf);
    }
    if (live & 4) {
        FIELD(sf);
    }
    if (live & 8) {
        FIELD(of);
    }
    if (live & 16) {
        FIELD(pf);
    }
    if (live & 32) {
        FIELD(af);
    }
    FIELD(df);
    FIELD(st);
    FIELD(fpu_top);
    FIELD(fpu_cw);
    FIELD(fpu_sw);
    FIELD(fpu_tag);
#undef FIELD
    return {};
}
// Replay a candidate against captured CPU/memory state and compare the resulting effects.
// Return a diagnostic on mismatch; unseen reads and zero stores still require acquisition-time tracking.
std::string run(const Capture &c, const Candidate &candidate) {
    auto error = validate(c);
    if (!error.empty())
        return error;
    if (!candidate)
        return "missing candidate";
    try {
        std::vector<uint8_t> arena(c.arena_size);
        for (const auto &p : c.pages)
            std::copy(p.entry.begin(), p.entry.end(), arena.begin() + p.address);
        pop_cpu_v1 cpu = c.entry;
        Seams seams(c.calls);
        candidate(cpu, arena.data(), arena.size(), seams);
        seams.finish();
        error = compare_cpu(c.exit, cpu, c.live_flags);
        if (!error.empty())
            return error;
        std::vector<const Page *> sorted;
        for (const auto &p : c.pages)
            sorted.push_back(&p);
        std::sort(sorted.begin(), sorted.end(),
                  [](auto a, auto b) { return a->address < b->address; });
        for (const auto *p : sorted) {
            const auto &expected = p->written ? p->exit : p->entry;
            for (size_t i = 0; i < expected.size(); ++i) {
                if (expected[i] == arena[p->address + i])
                    continue;
                char message[160];
                std::snprintf(message, sizeof message,
                              "page 0x%08x byte 0x%zx: expected %02x got %02x", p->address, i,
                              unsigned(expected[i]), unsigned(arena[p->address + i]));
                return message;
            }
        }
        // Catch nonzero final bytes outside the corpus too. This cannot detect
        // unseen reads or stores of zero; acquisition still requires fault tracking.
        for (const auto *p : sorted)
            std::fill(arena.begin() + p->address, arena.begin() + p->address + c.page_size, 0);
        auto extra = std::find_if(arena.begin(), arena.end(), [](uint8_t v) { return v != 0; });
        if (extra != arena.end())
            return "write outside captured pages at " + std::to_string(extra - arena.begin());
        return {};
    } catch (const std::exception &e) {
        return e.what();
    }
}

// ---------------------------------------------------------------------------
// Corpus loading.
//
// A JSON reader for exactly the shape pop_capture_write emits, and not one
// character more. It is written out rather than pulled in because the corpus
// is this project's own file, read by this project's own writer's counterpart,
// and a dependency for one format is a poor trade. Everything it does not
// recognise is an error: a corpus is evidence, and a reader that skips what it
// does not understand is a reader that will one day certify a replacement on a
// field it silently dropped.
// ---------------------------------------------------------------------------
namespace {

struct Json {
    const char *p;
    const char *end;
    std::string error;

    void skip() {
        while (p < end && (*p == ' ' || *p == '\t' || *p == '\n' || *p == '\r'))
            ++p;
    }
    bool fail(const char *why) {
        if (error.empty())
            error = why;
        return false;
    }
    bool lit(char c) {
        skip();
        if (p < end && *p == c) {
            ++p;
            return true;
        }
        return fail("expected a character the corpus does not have");
    }
    bool peek(char c) {
        skip();
        return p < end && *p == c;
    }

    bool string(std::string *out) {
        skip();
        if (p >= end || *p != '"')
            return fail("expected a string");
        ++p;
        out->clear();
        while (p < end && *p != '"') {
            if (*p == '\\') {
                // The writer emits no escapes at all, so any escape here means
                // the file is not one of ours.
                return fail("the corpus contains an escape this reader does not accept");
            }
            *out += *p++;
        }
        if (p >= end)
            return fail("unterminated string");
        ++p;
        return true;
    }

    bool number(uint64_t *out) {
        skip();
        // Every unquoted number is an unsigned integer. Parse it without a
        // double intermediary, which rounded large shim values and allowed
        // negatives/fractions to be cast into unsigned fields.
        if (p >= end || *p < '0' || *p > '9')
            return fail("expected an unsigned integer");
        if (*p == '0' && p + 1 < end && p[1] >= '0' && p[1] <= '9')
            return fail("an integer has a leading zero");
        uint64_t v = 0;
        while (p < end && *p >= '0' && *p <= '9') {
            const unsigned digit = (unsigned)(*p++ - '0');
            if (v > (UINT64_MAX - digit) / 10)
                return fail("an unsigned integer is too large");
            v = v * 10 + digit;
        }
        *out = v;
        return true;
    }

    bool boolean(bool *out) {
        skip();
        if (end - p >= 4 && !std::strncmp(p, "true", 4)) {
            p += 4;
            *out = true;
            return true;
        }
        if (end - p >= 5 && !std::strncmp(p, "false", 5)) {
            p += 5;
            *out = false;
            return true;
        }
        return fail("expected true or false");
    }
};

// base64 back to bytes, refusing anything that is not exactly what the writer
// produces: no whitespace, no line breaks, correct padding, correct length.
bool unbase64(const std::string &in, std::vector<uint8_t> *out) {
    static int8_t table[256];
    static bool built = false;
    if (!built) {
        for (int i = 0; i < 256; ++i)
            table[i] = -1;
        const char *k = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
        for (int i = 0; i < 64; ++i)
            table[(unsigned char)k[i]] = (int8_t)i;
        built = true;
    }
    if (in.size() % 4)
        return false;
    out->clear();
    out->reserve(in.size() / 4 * 3);
    for (size_t i = 0; i < in.size(); i += 4) {
        int8_t c[4];
        int pad = 0;
        for (int j = 0; j < 4; ++j) {
            const char ch = in[i + j];
            if (ch == '=') {
                // Padding is only ever the last one or two characters.
                if (i + 4 != in.size() || j < 2)
                    return false;
                c[j] = 0;
                ++pad;
            } else {
                c[j] = table[(unsigned char)ch];
                if (c[j] < 0 || pad)
                    return false;
            }
        }
        const uint32_t v =
            (uint32_t)c[0] << 18 | (uint32_t)c[1] << 12 | (uint32_t)c[2] << 6 | (uint32_t)c[3];
        out->push_back((uint8_t)(v >> 16));
        if (pad < 2)
            out->push_back((uint8_t)(v >> 8));
        if (pad < 1)
            out->push_back((uint8_t)v);
    }
    return true;
}

// One "key": value pair of an object whose keys are all known. Returns the key.
bool member(Json &j, std::string *key) {
    if (!j.string(key))
        return false;
    if (!j.lit(':'))
        return false;
    return true;
}

// Read an exact-version CPU snapshot, validating required fields and x87 values.
// Reject ambiguous float spellings and mismatched ABI sizes instead of silently coercing a corpus.
bool read_cpu(Json &j, pop_cpu_v1 *c) {
    pop_cpu_v1_init(c);
    if (!j.lit('{'))
        return false;
    static const char *fields[] = {"size", "eax",     "ecx",    "edx",    "ebx",     "esp",
                                   "ebp",  "esi",     "edi",    "eip",    "target",  "phase",
                                   "cf",   "zf",      "sf",     "of",     "pf",      "af",
                                   "df",   "fpu_top", "fpu_cw", "fpu_sw", "fpu_tag", "st"};
    uint32_t seen = 0;
    for (;;) {
        std::string key;
        if (!member(j, &key))
            return false;
        unsigned field = 0;
        for (; field < std::size(fields) && key != fields[field]; ++field) {
        }
        if (field == std::size(fields))
            return j.fail("the CPU snapshot has a field this reader does not know");
        seen |= 1u << field;
        uint64_t v = 0;
        if (key == "st") {
            if (!j.lit('['))
                return false;
            for (int i = 0; i < 8; ++i) {
                std::string hex;
                if (!j.string(&hex))
                    return false;
                const char *start = hex.c_str();
                if (*start == '-' || *start == '+')
                    ++start;
                // %a emits a hex float, or the special inf/nan spellings.
                // Decimal text must not silently acquire a different value
                // in Python's float.fromhex and C++'s strtod.
                if (std::strncmp(start, "0x", 2) && std::strcmp(start, "inf") &&
                    std::strcmp(start, "nan"))
                    return j.fail("an FPU register is not a hex float");
                char *stop = nullptr;
                c->st[i] = std::strtod(hex.c_str(), &stop);
                if (stop != hex.c_str() + hex.size() || stop == hex.c_str())
                    return j.fail("an FPU register is not a hex float");
                if (i < 7 && !j.lit(','))
                    return false;
            }
            if (!j.lit(']'))
                return false;
        } else {
            if (!j.number(&v))
                return false;
            if (v > UINT32_MAX)
                return j.fail("a CPU scalar exceeds the 32-bit unsigned range");
            const uint32_t u = (uint32_t)v;
            if (key == "size")
                c->size = u;
            else if (key == "eax")
                c->eax = u;
            else if (key == "ecx")
                c->ecx = u;
            else if (key == "edx")
                c->edx = u;
            else if (key == "ebx")
                c->ebx = u;
            else if (key == "esp")
                c->esp = u;
            else if (key == "ebp")
                c->ebp = u;
            else if (key == "esi")
                c->esi = u;
            else if (key == "edi")
                c->edi = u;
            else if (key == "eip")
                c->eip = u;
            else if (key == "target")
                c->target = u;
            else if (key == "phase")
                c->phase = u;
            else if (key == "cf")
                c->cf = u;
            else if (key == "zf")
                c->zf = u;
            else if (key == "sf")
                c->sf = u;
            else if (key == "of")
                c->of = u;
            else if (key == "pf")
                c->pf = u;
            else if (key == "af")
                c->af = u;
            else if (key == "df")
                c->df = u;
            else if (key == "fpu_top")
                c->fpu_top = u;
            else if (key == "fpu_cw")
                c->fpu_cw = (uint16_t)u;
            else if (key == "fpu_sw")
                c->fpu_sw = (uint16_t)u;
            else if (key == "fpu_tag")
                c->fpu_tag = (uint16_t)u;
            else
                return j.fail("the CPU snapshot has a field this reader does not know");
        }
        if (j.peek(',')) {
            j.lit(',');
            continue;
        }
        break;
    }
    if (!j.lit('}'))
        return false;
    if (seen != (1u << std::size(fields)) - 1)
        return j.fail("the CPU snapshot is missing required fields");
    // The exact ABI size and nothing else. A snapshot recording a smaller
    // struct is an older plugin's and its trailing fields are not zero because
    // the writer meant them to be, they are absent.
    if (c->size != (uint32_t)sizeof(pop_cpu_v1))
        return j.fail("the CPU snapshot is not this build's pop_cpu_v1 size");
    return true;
}

} // namespace

// Load and validate a replay corpus before handing it to a candidate.
// Every imported seam is checked against the permitted catalogue again because files can be edited.
std::string load(const std::string &path, Capture *out) {
    if (!out)
        return "no capture to load into";
    std::FILE *f = std::fopen(path.c_str(), "rb");
    if (!f)
        return "cannot open " + path;
    std::string text;
    char buf[65536];
    size_t n;
    while ((n = std::fread(buf, 1, sizeof buf, f)) > 0)
        text.append(buf, n);
    const bool io = std::ferror(f) != 0;
    std::fclose(f);
    if (io)
        return "cannot read " + path;

    Json j{text.data(), text.data() + text.size(), {}};
    Capture c;
    bool have_entry = false, have_exit = false;
    if (!j.lit('{'))
        return j.error;
    for (;;) {
        std::string key;
        if (!member(j, &key))
            return j.error;
        uint64_t v = 0;
        if (key == "version") {
            if (!j.number(&v))
                return j.error;
            if (v != 1)
                return "unknown corpus version";
        } else if (key == "target") {
            if (!j.number(&v))
                return j.error;
            if (v > UINT32_MAX)
                return "target exceeds the 32-bit unsigned range";
            c.entry.target = (uint32_t)v; // overwritten by the entry snapshot
        } else if (key == "arena_size") {
            if (!j.number(&v))
                return j.error;
            if (v > UINT32_MAX)
                return "arena_size exceeds the 32-bit unsigned range";
            c.arena_size = (uint32_t)v;
        } else if (key == "page_size") {
            if (!j.number(&v))
                return j.error;
            if (v > UINT32_MAX)
                return "page_size exceeds the 32-bit unsigned range";
            c.page_size = (uint32_t)v;
        } else if (key == "live_flags") {
            if (!j.number(&v))
                return j.error;
            if (v > UINT32_MAX)
                return "live_flags exceeds the 32-bit unsigned range";
            c.live_flags = (uint32_t)v;
        } else if (key == "entry") {
            if (!read_cpu(j, &c.entry))
                return j.error;
            have_entry = true;
        } else if (key == "exit") {
            if (!read_cpu(j, &c.exit))
                return j.error;
            have_exit = true;
        } else if (key == "pages") {
            if (!j.lit('['))
                return j.error;
            if (!j.peek(']'))
                for (;;) {
                    Page p;
                    if (!j.lit('{'))
                        return j.error;
                    for (;;) {
                        std::string pk;
                        if (!member(j, &pk))
                            return j.error;
                        if (pk == "address") {
                            if (!j.number(&v))
                                return j.error;
                            if (v > UINT32_MAX)
                                return "a page address exceeds the 32-bit unsigned range";
                            p.address = (uint32_t)v;
                        } else if (pk == "read") {
                            if (!j.boolean(&p.read))
                                return j.error;
                        } else if (pk == "written") {
                            if (!j.boolean(&p.written))
                                return j.error;
                        } else if (pk == "entry" || pk == "exit") {
                            std::string b64;
                            if (!j.string(&b64))
                                return j.error;
                            std::vector<uint8_t> bytes;
                            if (!unbase64(b64, &bytes))
                                return "page " + std::to_string(p.address) +
                                       " has malformed base64";
                            (pk == "entry" ? p.entry : p.exit) = std::move(bytes);
                        } else
                            return "a page has a field this reader does not know: " + pk;
                        if (j.peek(',')) {
                            j.lit(',');
                            continue;
                        }
                        break;
                    }
                    if (!j.lit('}'))
                        return j.error;
                    c.pages.push_back(std::move(p));
                    if (j.peek(',')) {
                        j.lit(',');
                        continue;
                    }
                    break;
                }
            if (!j.lit(']'))
                return j.error;
        } else if (key == "calls") {
            if (!j.lit('['))
                return j.error;
            if (!j.peek(']'))
                for (;;) {
                    Call s;
                    // false, not the struct default: a call that came out of a
                    // capture was accepted by the catalogue, and validate() checks
                    // the name against it again below.
                    s.side_effecting = false;
                    if (!j.lit('{'))
                        return j.error;
                    for (;;) {
                        std::string ck;
                        if (!member(j, &ck))
                            return j.error;
                        if (ck == "function") {
                            if (!j.string(&s.function))
                                return j.error;
                        } else if (ck == "result") {
                            if (!j.number(&v))
                                return j.error;
                            if (v > UINT32_MAX)
                                return "a shim result exceeds the 32-bit unsigned range";
                            s.result = v;
                        } else if (ck == "arguments") {
                            if (!j.lit('['))
                                return j.error;
                            if (!j.peek(']'))
                                for (;;) {
                                    if (!j.number(&v))
                                        return j.error;
                                    if (v > UINT32_MAX)
                                        return "a shim argument exceeds the 32-bit unsigned range";
                                    s.arguments.push_back(v);
                                    if (j.peek(',')) {
                                        j.lit(',');
                                        continue;
                                    }
                                    break;
                                }
                            if (!j.lit(']'))
                                return j.error;
                        } else
                            return "a shim call has a field this reader does not know: " + ck;
                        if (j.peek(',')) {
                            j.lit(',');
                            continue;
                        }
                        break;
                    }
                    if (!j.lit('}'))
                        return j.error;
                    c.calls.push_back(std::move(s));
                    if (j.peek(',')) {
                        j.lit(',');
                        continue;
                    }
                    break;
                }
            if (!j.lit(']'))
                return j.error;
        } else {
            return "the corpus has a field this reader does not know: " + key;
        }
        if (j.peek(',')) {
            j.lit(',');
            continue;
        }
        break;
    }
    if (!j.lit('}'))
        return j.error;
    j.skip();
    if (j.p != j.end)
        return "trailing bytes after the corpus object";
    if (!have_entry || !have_exit)
        return "the corpus is missing a CPU snapshot";

    // Every seam named in the corpus is checked against the catalogue again,
    // here and not only at capture time. A corpus is a file; it can be edited,
    // and the whole point of the catalogue is that a side-effecting call is
    // never replayed.
    for (const auto &s : c.calls)
        if (!pop_shimcap::is_pure(s.function.c_str()))
            return "the corpus records a seam the catalogue does not allow: " + s.function;

    auto bad = validate(c);
    if (!bad.empty())
        return bad;
    *out = std::move(c);
    return {};
}

// ---------------------------------------------------------------------------
// The translated candidate, with the recorded shim calls served in its place.
// ---------------------------------------------------------------------------
namespace {

// The replay in progress, for the observer to reach. One at a time, which is
// what the header says: the observer slot is process-wide and the arena
// pointer is swapped for the length of the call.
struct Interception {
    Seams *seams = nullptr;
    std::string error;
    size_t served = 0;
    Interception *saved_intercept = nullptr;
    ImportCallObserver saved_observer = nullptr;
};
Interception *g_intercept = nullptr;
// Kept after the window closes so failed() can still be asked. One replay at
// a time, which is what the header says.
std::string g_last_failure;
size_t g_last_served = 0;

// Called by imports_dispatch before the shim would run. Returning false makes
// the dispatcher skip the shim and use the result we put there, which is how a
// replay reaches a shim's answer without the shim happening again.
bool serve_from_record(const char *desc, const uint32_t *args, uint32_t argc, uint32_t *result) {
    if (!g_intercept)
        return true; // not replaying; let it run
    *result = 0;
    if (!g_intercept->error.empty())
        return false;
    std::vector<uint64_t> as;
    as.reserve(argc);
    for (uint32_t i = 0; i < argc; ++i)
        as.push_back(args[i]);
    try {
        // side_effecting false: the recorded call was accepted by the
        // catalogue at capture time and checked against it again at load.
        // Seams::call still fails if the name, the arguments or the position
        // do not match what was recorded, which is the sequence check.
        const uint64_t got = g_intercept->seams->call(desc ? desc : "", as, false);
        *result = (uint32_t)got;
        ++g_intercept->served;
    } catch (const std::exception &e) {
        // Never thrown through the generated code: the dispatcher is reached
        // from translated C and unwinding it is not defined. The message is
        // carried out and the replay fails on it after the call returns.
        g_intercept->error = e.what();
    }
    return false;
}

} // namespace

ServeRecordedShims::ServeRecordedShims(Seams &record) {
    Interception *in = new Interception();
    in->seams = &record;
    in->saved_intercept = g_intercept;
    in->saved_observer = imports_set_call_observer_get();
    g_intercept = in;
    imports_set_call_observer(serve_from_record);
}

ServeRecordedShims::~ServeRecordedShims() {
    Interception *in = g_intercept;
    if (!in)
        return;
    imports_set_call_observer(in->saved_observer);
    g_intercept = in->saved_intercept;
    g_last_failure = in->error;
    g_last_served = in->served;
    delete in;
}

const std::string &ServeRecordedShims::failed() const {
    return g_intercept ? g_intercept->error : g_last_failure;
}
size_t ServeRecordedShims::served() const {
    return g_intercept ? g_intercept->served : g_last_served;
}

// Adapt a translated guest function to the isolated replay-candidate interface.
// Transfer registers/flags both ways and report seam failures after copying back the resulting CPU state.
Candidate translated(uint32_t target) {
    return [target](pop_cpu_v1 &cpu, uint8_t *arena, size_t, Seams &seams) {
        X86 c{};
#define IN(f, r_) c.r[r_] = cpu.f
        IN(eax, R_EAX);
        IN(ecx, R_ECX);
        IN(edx, R_EDX);
        IN(ebx, R_EBX);
        IN(esp, R_ESP);
        IN(ebp, R_EBP);
        IN(esi, R_ESI);
        IN(edi, R_EDI);
#undef IN
        c.eip = cpu.eip;
#define FLAG(f) c.eflags_##f = cpu.f
        FLAG(cf);
        FLAG(zf);
        FLAG(sf);
        FLAG(of);
        FLAG(pf);
        FLAG(af);
        FLAG(df);
#undef FLAG
        std::memcpy(c.st, cpu.st, sizeof c.st);
        c.fpu_top = cpu.fpu_top;
        c.fpu_cw = cpu.fpu_cw;
        c.fpu_sw = cpu.fpu_sw;
        c.fpu_tag = cpu.fpu_tag;

        std::string failure;
        {
            ServeRecordedShims serving(seams);
            uint8_t *saved_mem = g_mem;
            g_mem = arena;
            recomp_call(&c, target);
            g_mem = saved_mem;
            failure = serving.failed();
        }

#define OUT(f, r_) cpu.f = c.r[r_]
        OUT(eax, R_EAX);
        OUT(ecx, R_ECX);
        OUT(edx, R_EDX);
        OUT(ebx, R_EBX);
        OUT(esp, R_ESP);
        OUT(ebp, R_EBP);
        OUT(esi, R_ESI);
        OUT(edi, R_EDI);
#undef OUT
        cpu.eip = c.eip;
#define FLAG(f) cpu.f = c.eflags_##f
        FLAG(cf);
        FLAG(zf);
        FLAG(sf);
        FLAG(of);
        FLAG(pf);
        FLAG(af);
        FLAG(df);
#undef FLAG
        std::memcpy(cpu.st, c.st, sizeof cpu.st);
        cpu.fpu_top = c.fpu_top;
        cpu.fpu_cw = c.fpu_cw;
        cpu.fpu_sw = c.fpu_sw;
        cpu.fpu_tag = c.fpu_tag;

        // Raised after the guest state is copied back, so run()'s catch turns
        // it into the diagnostic and nothing is left half done.
        if (!failure.empty())
            throw std::runtime_error(failure);
    };
}

} // namespace pop_replay
