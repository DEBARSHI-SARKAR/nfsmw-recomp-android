// Guest on_frame/on_turn dispatch surrounds a real DirectDraw Blt and pump
// seal. Only GPU/display acknowledgements are fake; the loader, Lua example,
// event subscriptions, host-services log and stdout capture are production.
// on_frame means the guest outer driver, NOT each seal or display-link tick.
#include "../mods_internal.h"
#include "../../runtime/loader.h"
#include "../../runtime/memory.h"
#include "../../runtime/win32.h"
#include "../../dx/com.h"
#include "../../dx/dx.h"
#include "../../dx/dxtypes.h"
#include "../../dx/ddraw.h"
#include "../../host/present_test.h"

#include <filesystem>
#include <fstream>
#include <chrono>
#include <pthread.h>
#include <unistd.h>
#include "../../platform/os.h"

namespace fs = std::filesystem;
static int checks, failures;
#define CHECK(x)                                                                                   \
    do {                                                                                           \
        ++checks;                                                                                  \
        if (!(x)) {                                                                                \
            ++failures;                                                                            \
            fprintf(stderr, "FAIL %d: %s\n", __LINE__, #x);                                        \
        }                                                                                          \
    } while (0)
static uint32_t surface, effects;
static unsigned callbacks;
static pthread_t guest_thread;
static std::vector<HostFrameHandle> sealed;

extern "C" void host_present(const void *pixels, int w, int h, int bpp, const uint32_t *palette,
                             int pitch) {
    CHECK(bpp == 8);
    std::vector<uint8_t> rgba(size_t(w) * h * 4);
    host_present_expand_indexed(static_cast<const uint8_t *>(pixels), w, h, pitch, palette,
                                rgba.data());
    host_present_stage_rgba(rgba.data(), w, h);
}

static void seal_from_guest_frame(const PopModApi *, void *) {
    CHECK(pthread_equal(pthread_self(), guest_thread));
    ++callbacks;
    X86 c;
    loader_init_context(&c);
    wr32(effects + DDBLTFX_OFF_dwFillColor, callbacks);
    uint32_t args[] = {surface, 0, 0, 0, DDBLT_COLORFILL, effects};
    CHECK(guest_call(&c, rd32(rd32(surface) + 5 * 4), args, 6) == 0);
    auto frame = host_frame_current();
    CHECK(host_frame_record_count(frame) > 0);
    sealed.push_back(frame);
    // Same boundary as the message-loop pump, including renderer seal and
    // host_frame_seal installed through the production callback registration.
    ddraw_frame_pump(&c);
    CHECK(host_frame_current().id == frame.id + 1);
    ddraw_frame_pump(&c); // idle pumps cannot manufacture frames/mod events
    CHECK(host_frame_current().id == frame.id + 1);
}

static std::string read(const fs::path &path) {
    std::ifstream in(path);
    return {std::istreambuf_iterator<char>(in), {}};
}
static size_t occurrences(const std::string &text, const std::string &needle) {
    size_t count = 0, at = 0;
    while ((at = text.find(needle, at)) != std::string::npos) {
        ++count;
        at += needle.size();
    }
    return count;
}

int main(int argc, char **argv) {
    if (argc != 2)
        return 2;
    const fs::path root = argv[1];
    // The luawalk example is the game's; the test runner names the game directory.
    const char *game_env = recomp_env("GAME_DIR");
    if (!game_env || !*game_env) {
        fprintf(stderr, "present_events_tests: RECOMP_GAME_DIR is not set\n");
        return 2;
    }
    const fs::path game = game_env;
    std::string pattern = (root / "build/recomp/present-events-XXXXXX").string();
    if (!mkdtemp(pattern.data()))
        return 2;
    const fs::path scratch = pattern;
    fs::create_directories(scratch / "mods/luawalk");
    fs::create_directories(scratch / "profile");
    fs::copy_file(game / "mods/examples/luawalk/mod.toml", scratch / "mods/luawalk/mod.toml");
    {
        std::ofstream script(scratch / "mods/luawalk/main.lua");
        script << read(game / "mods/examples/luawalk/main.lua") << R"(
pop.on_frame("after", function()
  pop.log("frame event after seal")
end)
)";
    }
    setenv("RECOMP_MODS_DIR", (scratch / "mods").c_str(), 1);
    setenv("RECOMP_CORE_MODS_DIR", (scratch / "absent-core").c_str(), 1);
    setenv("RECOMP_PROFILE_DIR", (scratch / "profile").c_str(), 1);
    unsetenv("RECOMP_NO_MODS");
    mem_init();
    CHECK(loader_load(nullptr));
    dx_register_shims();
    mods_host_set_main_thread();
    CHECK(mods_load_all());
    const PopModApi *api = mods_api_for(MODS_OWNER_FIRST_MOD);
    CHECK(api && !strcmp(api->mod_id, "example.luawalk"));
    if (!api)
        return 1;
    sched_set_guest_thread(true);
    guest_thread = pthread_self();
    uint32_t subscription = 0;
    CHECK(api->on_frame(api, POP_EVENT_BEFORE, seal_from_guest_frame, nullptr, &subscription) ==
          POP_OK);

    // Populate the real game view, as the ordinary mods event tests do.
    uint32_t base = mods_symbol_global("entity_base");
    wr8(0x0089d161u, 20); // outer driver's turns-per-second divisor
    for (uint32_t slot = 1; slot <= 2; ++slot) {
        gm_zero(base + slot * 179, 179);
        wr8(base + slot * 179 + 42, 1);
        wr16(base + slot * 179 + 36, slot);
    }
    auto *primary = com_new(K_SURFACE);
    primary->is_primary = true;
    primary->caps = DDSCAPS_PRIMARYSURFACE;
    primary->width = primary->height = 2;
    primary->bpp = 8;
    primary->pitch = 2;
    primary->pixels_bytes = 4;
    primary->pixels = heap_alloc(4, true);
    surface = com_view(primary, IF_DDSURFACE);
    effects = heap_alloc(DDBLTFX_SIZE, true);
    gm_zero(effects, DDBLTFX_SIZE);
    wr32(effects, DDBLTFX_SIZE);

    // Identical stdout redirection to smoke_run; the real api->log flushes it.
    fflush(stdout);
    int saved = dup(STDOUT_FILENO);
    FILE *capture = fopen((scratch / "smoke.log").c_str(), "w+");
    if (saved < 0 || !capture || dup2(fileno(capture), STDOUT_FILENO) < 0)
        return 2;
    for (bool offscreen : {false, true}) {
        host_present_test_begin(false, offscreen);
        ddraw_set_present_callbacks(host_present_first_write, host_frame_seal);
        for (unsigned i = 0; i < 6; ++i) {
            wr32(mods_symbol_global("simulation_turn"), callbacks * 100 + 1);
            X86 *c = loader_context();
            loader_init_context(c);
            auto started = std::chrono::steady_clock::now();
            guest_call(c, mods_symbol_event("on_frame"));
            // A fixture has not started a level, so the outer driver need not
            // schedule a turn. Enter the real turn dispatcher explicitly;
            // sealing must neither stand in for it nor suppress it.
            loader_init_context(c);
            guest_call(c, mods_symbol_event("on_turn"));
            CHECK(std::chrono::steady_clock::now() - started < std::chrono::seconds(1));
            // No GPU or presentation acknowledgement has happened, yet BOTH
            // Lua hooks have already fired and their log lines are captured.
            auto log = read(scratch / "smoke.log");
            CHECK(occurrences(log, "[mod example.luawalk] frame event after seal") == callbacks);
            CHECK(occurrences(log, "[mod example.luawalk] luawalk saw 2 entities") == callbacks);
            CHECK(host_present_unique_completed() == 0);
        }
        CHECK(host_present_drops() > 0); // mailbox pressure never drops events
        const unsigned before = callbacks;
        if (offscreen)
            host_present_tick_for_test(1);
        else
            CHECK(host_present_test_window_wake(1)); // bootstrap from seal
        CHECK(callbacks == before);                  // worker never dispatches guest callbacks
        CHECK(host_present_test_in_flight() == sealed.back().id);
        host_present_test_command_done(sealed.back().id);
        if (!offscreen)
            host_present_test_presented(sealed.back().id, 1);
        CHECK(host_present_unique_completed() == 1);
        host_present_stop();
        ddraw_set_present_callbacks(nullptr, nullptr);
        for (auto f : sealed)
            host_frame_release(f);
        sealed.clear();
    }
    CHECK(mods_lua_errors() == 0);
    fflush(stdout);
    CHECK(dup2(saved, STDOUT_FILENO) >= 0);
    close(saved);
    fclose(capture);
    fprintf(stderr, "present/mod events: %d checks, %d failures; capture %s\n", checks, failures,
            (scratch / "smoke.log").c_str());
    return failures ? 1 : 0;
}
