#include "../../tests/mods_tests.h"
#include "../replay.h"
#include <stdexcept>
using namespace pop_replay;
namespace {
Capture sample() {
    Capture c;
    c.arena_size = 8192;
    c.page_size = 4096;
    pop_cpu_v1_init(&c.entry);
    pop_cpu_v1_init(&c.exit);
    Page p;
    p.address = 4096;
    p.read = true;
    p.written = true;
    p.entry.resize(4096);
    p.entry[7] = 41;
    p.exit = p.entry;
    p.exit[7] = 42;
    c.pages.push_back(p);
    return c;
}
void increment(pop_cpu_v1 &, uint8_t *m, size_t, Seams &) {
    ++m[4103];
}
} // namespace
MOD_TEST_SUITE(replay_comparison_and_live_flags) {
    auto c = sample();
    MOD_CHECK(run(c, increment).empty());
    MOD_CHECK(run(c, [](auto &, auto m, auto, auto &) { m[4103] = 43; }) ==
              "page 0x00001000 byte 0x7: expected 2a got 2b");
    auto stale = [](auto &cpu, auto m, auto, auto &) {
        ++m[4103];
        cpu.cf = 1;
    };
    MOD_CHECK(run(c, stale).empty());
    c.live_flags = 1;
    MOD_CHECK(run(c, stale).rfind("CPU differs: cf", 0) == 0);
    MOD_CHECK(run(c, [](auto &cpu, auto m, auto, auto &) {
                  ++m[4103];
                  cpu.df = 1;
              }).rfind("CPU differs: df", 0) == 0);
    MOD_CHECK(run(c, [](auto &cpu, auto m, auto, auto &) {
                  ++m[4103];
                  cpu.st[7] = 1;
              }) == "CPU differs: st");
    MOD_CHECK(!run(c, [](auto &, auto m, auto, auto &) {
                   ++m[4103];
                   m[0] = 1;
               }).empty());
    c.pages[0].written = false;
    c.pages[0].exit.clear();
    MOD_CHECK(!run(c, increment).empty());
}
MOD_TEST_SUITE(replay_seam_rejections) {
    auto c = sample();
    c.calls.push_back({"clock", {17}, 29, false});
    auto good = [](auto &, auto m, auto, auto &seams) {
        if (seams.call("clock", {17}, false) != 29)
            throw std::runtime_error("wrong served result");
        ++m[4103];
    };
    MOD_CHECK(run(c, good).empty());
    MOD_CHECK(!run(c, increment).empty()); // Missing call.
    MOD_CHECK(!run(c, [](auto &, auto, auto, auto &s) { s.call("other", {17}, false); }).empty());
    MOD_CHECK(!run(c, [](auto &, auto, auto, auto &s) { s.call("clock", {18}, false); }).empty());
    MOD_CHECK(!run(c, [](auto &, auto, auto, auto &s) {
                   s.call("clock", {17}, false);
                   s.call("clock", {17}, false);
               }).empty());
    MOD_CHECK(!run(c, [](auto &, auto, auto, auto &s) { s.call("write", {}, true); }).empty());
    // A candidate swallowing an exception cannot turn the failed sequence green.
    MOD_CHECK(!run(c, [](auto &, auto m, auto, auto &s) {
                   try {
                       s.call("other", {}, false);
                   } catch (...) {
                   }
                   ++m[4103];
               }).empty());
    c.calls[0].side_effecting = true;
    bool entered = false;
    MOD_CHECK(!run(c, [&](auto &, auto, auto, auto &) { entered = true; }).empty());
    MOD_CHECK(!entered);
}
MOD_TEST_SUITE(replay_bounds_and_invalid_corpus) {
    auto c = sample();
    c.calls.resize(10000, {"clock", {}, 0, false});
    MOD_CHECK(validate(c).empty());
    MOD_CHECK(run(c, [](auto &, auto m, auto, auto &seams) {
                  for (size_t i = 0; i < 10000; ++i)
                      seams.call("clock", {}, false);
                  ++m[4103];
              }).empty());
    c.calls.push_back({"clock", {}, 0, false});
    MOD_CHECK(validate(c) == "capture exceeds 10000 shim calls");
    c = sample();
    c.pages.push_back(c.pages[0]);
    MOD_CHECK(!validate(c).empty());
    c = sample();
    c.pages[0].entry.pop_back();
    MOD_CHECK(!validate(c).empty());
    c = sample();
    c.live_flags = 64;
    MOD_CHECK(!validate(c).empty());
    c = sample();
    c.entry.size = 0;
    MOD_CHECK(!validate(c).empty());
    c = sample();
    c.pages.clear();
    MOD_CHECK(!validate(c).empty());
    c = sample();
    c.page_size = 3;
    MOD_CHECK(!validate(c).empty());
    c = sample();
    c.arena_size = 4096 * 4097;
    c.pages.clear();
    for (uint32_t i = 0; i < 4096; ++i) {
        Page p;
        p.address = i * 4096;
        p.read = true;
        p.entry.resize(4096);
        c.pages.push_back(std::move(p));
    }
    MOD_CHECK(validate(c).empty());
    c.pages.push_back(c.pages.back());
    MOD_CHECK(validate(c) == "capture exceeds 4096 pages");
}
