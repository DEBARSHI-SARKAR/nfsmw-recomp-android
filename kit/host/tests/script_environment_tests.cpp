// CPU-only parser checks, executable without Metal or CoreAudio.
#include "game_config.h"
#include "../script.h"
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <sstream>
#include <string>
#include "../../platform/os.h"
int main() {
    HostScriptStep steps[512];
    char error[256];
    auto parse = [&](const char *text) {
        return host_script_parse(text, steps, 512, error, sizeof error);
    };
    assert(parse("dumpat c840 command_frame>=840\ndumpat command_frame>=880 c880\n") == 2);
    for (int i = 0; i < 2; ++i) {
        assert(steps[i].op == HOST_SCRIPT_DUMPAT && steps[i].at_least);
        assert(std::string(steps[i].name) == "command_frame");
        assert(steps[i].threshold == (i ? 880 : 840));
        assert(std::string(steps[i].text) == (i ? "c880" : "c840"));
    }
    // No mod runtime is linked: dispatch must ask guest memory for each global.
    auto guest = +[](uint32_t address) -> uint32_t {
        assert(address == 0x0089d188u || address == 0x0089d184u);
        return address == 0x0089d188u ? 820 : 839;
    };
    assert(host_script_counter_metric("turn", guest) == 820);
    assert(host_script_counter_metric("command_frame", guest) == 839);
    assert(host_script_counter_metric("unknown", guest) == -1);
    static unsigned view_calls = 0;
    auto turn = +[]() -> uint32_t {
        ++view_calls;
        return 820;
    };
    auto command = +[]() -> uint32_t {
        ++view_calls;
        return 839;
    };
    assert(host_script_counter_metric("turn", guest, turn, command) == 820);
    assert(host_script_counter_metric("command_frame", guest, turn, command) == 839);
    assert(view_calls == 2);
    auto stale = +[]() -> uint32_t {
        ++view_calls;
        return 0;
    };
    assert(host_script_counter_metric("turn", guest, stale, stale) == 820);
    assert(host_script_counter_metric("command_frame", guest, stale, stale) == 839);
    assert(host_script_counter_metric("unknown", guest, stale, stale) == -1);
    assert(view_calls == 4);
    for (const char *bad :
         {"dumpat c840 command_frame>=abc\n", "dumpat c840 command_frame>=840 extra\n",
          "dumpat ../c840 command_frame>=840\n"})
        assert(parse(bad) == -1);
    const char *old = getenv("LANDMARK");
    std::string saved = old ? old : "";
    bool had = old;
    os_unsetenv("LANDMARK");
    assert(parse("landmark 41 expect $LANDMARK\n") == -1);
    for (const char *bad : {"", "maybe", "visible hidden", "$OTHER"}) {
        os_setenv("LANDMARK", bad);
        assert(parse("landmark 41 expect $LANDMARK\n") == -1);
    }
    os_setenv("LANDMARK", "visible");
    assert(parse("landmark 41 expect $LANDMARK within 800\n") == 1);
    assert(steps[0].entity_id == 41 && steps[0].want_visible == 1 && steps[0].timeout_ms == 800);
    os_setenv("LANDMARK", "hidden");
    assert(parse("landmark 41 expect $LANDMARK\n") == 1 && steps[0].want_visible == 0);
    for (const char *bad : {"$", "$9BAD", "${LANDMARK}", "$LANDMARK-bad"}) {
        std::string line = "landmark 41 expect " + std::string(bad) + "\n";
        assert(parse(line.c_str()) == -1);
    }
    assert(parse("viewmove -39 208\nviewclick -20 245\ncamera 4600 59000\n") == 3);
    assert(steps[0].op == HOST_SCRIPT_VIEWMOVE && steps[0].x == -39);
    assert(steps[1].op == HOST_SCRIPT_VIEWCLICK && steps[1].button == 0);
    assert(steps[2].op == HOST_SCRIPT_CAMERA && steps[2].y == 59000);
    for (const char *bad : {"camera -1 2\n", "camera 65536 0\n", "viewclick a 3\n"})
        assert(parse(bad) == -1);
    assert(parse("click entity 1815\nclick world 5376 55040 128\n") == 2);
    assert(steps[0].op == HOST_SCRIPT_ENTITYCLICK && steps[0].entity_id == 1815 &&
           steps[0].button == 0);
    assert(steps[1].op == HOST_SCRIPT_WORLDCLICK && steps[1].x == 5376 && steps[1].y == 55040 &&
           steps[1].altitude == 128 && steps[1].button == 0);
    assert(parse("move entity 1815\nwait 800\nclick entity 1815\nwait 1500\n"
                 "move world 5376 55040 128\nwait 800\nclick world 5376 55040 128\n") == 4);
    assert(steps[0].op == HOST_SCRIPT_ENTITYMOVE && steps[0].entity_id == 1815);
    assert(steps[1].at_ms - steps[0].at_ms == 800);
    assert(steps[2].op == HOST_SCRIPT_WORLDMOVE && steps[2].x == 5376 && steps[2].y == 55040);
    assert(steps[3].at_ms - steps[2].at_ms == 800 && steps[3].at_ms - steps[1].at_ms == 2300);
    for (const char *bad :
         {"click entity\n", "click entity -1\n", "click entity 65536\n",
          "click entity 1815 extra\n", "click world 5376 55040\n", "click world 65536 0 0\n",
          "click world 0 0 32768\n", "click world 0 0 0 extra\n", "move entity\n",
          "move entity -1\n", "move entity 1815 extra\n", "move world 5376 55040\n",
          "move world 65536 0 0\n", "move world 0 0 32768\n", "move world 0 0 0 extra\n"})
        assert(parse(bad) == -1);
    assert(parse("simdump turn_820\n") == 1 && steps[0].op == HOST_SCRIPT_SIMDUMP);
    assert(parse("simdump ../bad\n") == -1);
    assert(parse("PLACEHOLDER_MEASURED_CAMERA_INPUT\n") == -1);
    // The game's own scripts, when the build has a game with scripts.
    for (const char *path :
         {RECOMP_GAME_DIR "/smoke/gate-c-fixture.script", RECOMP_GAME_DIR "/smoke/gate-c.script"}) {
        std::ifstream f(path);
        if (!f) {
            fprintf(stderr,
                    "script_environment_tests: no %s; the game's scripts were not checked\n", path);
            continue;
        }
        std::stringstream text;
        text << f.rdbuf();
        assert(text.str().find("PLACEHOLDER") == std::string::npos);
        for (const char *expectation : {"visible", "hidden"}) {
            os_setenv("LANDMARK", expectation);
            int count = parse(text.str().c_str());
            if (count < 0)
                fprintf(stderr, "%s: %s\n", path, error);
            assert(count > 0);
            if (std::string(path).find("fixture.script") == std::string::npos) {
                int dumps = 0, landmarks = 0, entity_clicks = 0, world_clicks = 0, entity_move = -1,
                    world_move = -1, selection = -1;
                for (int i = 0; i < count; ++i) {
                    if (steps[i].op == HOST_SCRIPT_DUMPAT) {
                        assert(dumps < 2 && steps[i].at_least);
                        assert(std::string(steps[i].name) == "command_frame");
                        assert(steps[i].threshold == (dumps ? 880 : 840));
                        assert(std::string(steps[i].text) == (dumps ? "gate_c_t2" : "gate_c_t1"));
                        ++dumps;
                    }
                    if (steps[i].op == HOST_SCRIPT_ENTITYMOVE) {
                        entity_move = i;
                        assert(steps[i].entity_id == 1815);
                    }
                    if (steps[i].op == HOST_SCRIPT_WORLDMOVE) {
                        world_move = i;
                        assert(steps[i].x == 5376 && steps[i].y == 55040 &&
                               steps[i].altitude == 128);
                    }
                    if (steps[i].op == HOST_SCRIPT_ENTITYCLICK) {
                        ++entity_clicks;
                        assert(steps[i].entity_id == 1815);
                        assert(entity_move >= 0 &&
                               steps[i].at_ms - steps[entity_move].at_ms == 800);
                        selection = i;
                    }
                    if (steps[i].op == HOST_SCRIPT_WORLDCLICK) {
                        ++world_clicks;
                        assert(entity_clicks == 1);
                        assert(steps[i].x == 5376 && steps[i].y == 55040 &&
                               steps[i].altitude == 128);
                        assert(world_move >= 0 && steps[i].at_ms - steps[world_move].at_ms == 800);
                        assert(selection >= 0 && steps[i].at_ms - steps[selection].at_ms == 2300);
                    }
                    assert(steps[i].op != HOST_SCRIPT_VIEWCLICK);
                }
                assert(dumps == 2 && entity_clicks == 1 && world_clicks == 1);
                for (int i = 0; i < count; ++i)
                    if (steps[i].op == HOST_SCRIPT_LANDMARK) {
                        ++landmarks;
                        assert(steps[i].entity_id == 1828);
                        assert(steps[i].want_visible == (std::string(expectation) == "visible"));
                        assert(steps[i].timeout_ms == 0);
                    }
                assert(landmarks == 1);
            }
        }
    }
    if (had)
        os_setenv("LANDMARK", saved.c_str());
    else
        os_unsetenv("LANDMARK");
    puts("script environment and fixture parser checks passed");
}
