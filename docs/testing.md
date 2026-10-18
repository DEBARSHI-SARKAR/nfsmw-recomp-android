# Testing

For touch targeting, use `smoke/touch-drawable.script` with an isolated copy
of an existing profile, `core.nfsmw/width=1280`, `core.nfsmw/height=720`, and
`RECOMP_SMOKE_DRAWABLE=2420x1668`. Leave GPU scaling automatic. Verify the
captures show title → Load complete → main menu → Quit confirmation, followed
by Start returning to the menu and the cursor appearing at the final touch.
The script uses fixed drawable coordinates so a wrong published input scale
cannot cancel itself through conversion from guest coordinates.

Run checks appropriate to your change. Every suite's output belongs under
ignored `build/`; requested tests must report failure rather than silently
skip prerequisites. Every command is a wrapper around the kit's
`kit/tools/test.py` with this repository as the game directory.

| Command | What it checks | Needs game files? |
| --- | --- | --- |
| `tools/test.py` | The kit's portable Python suites (setup, config, texture and display-mode tooling) | No |
| `python -m pytest -q tests` | This repository's `game.toml` renders the hooks and globals the kit expects, and unidentified ones stay sentinels | No |
| `tools/build.py --stub` | The kit configures and links its hosts against this config without game code | No |
| `tools/test.py --compile-only` | Every native test binary this platform has compiles | No |
| `tools/test.py --native` | Runtime, adapters, offscreen Metal and UI tests; the `game`-labelled suites load the image | Yes for the `game` label |
| `tools/test.py --mods`, `--gameplay`, `--integration` | Game-backed mod, gameplay and integration runs | Yes, plus a translated archive, which this game does not have yet |

Native suites are CTest entries with labels: `nogame` runs everywhere and in
the kit's CI, `game` needs your installation, `gpu` needs a Metal device,
`mods` needs the translated archive. Run one directly with
`.venv/bin/ctest --test-dir build/cmake/macos -L nogame` or `-R dx_tests`.

The game-backed suites are Populous-shaped today (they read the entity table
and camera `game.toml` names, and `--gameplay` wants
`smoke/native-options.script`). They become meaningful for this game once
the sentinels in `game.toml` are real addresses and a smoke script exists;
until then report them as not run, not as passing.

## Bring-up checks

`smoke/pad-race.script` exercises the production mapped-pad binding, menu
confirmation/back, a touch on Quit, steering, acceleration, braking and pause.
Run it through the smoke host with `RECOMP_SMOKE_DRAWABLE=2420x1668`, the
iPad's mod settings (1568x1080 guest frame), and an isolated
`RECOMP_PROFILE_DIR`; never use a player's live save directory. Review the
dumped menu/race frames as well as the exit status and console. Script
completion proves input delivery, not that the intended game state appeared.

The default racing preset uses cross for throttle, square for brake/reverse,
left stick for steering, circle for handbrake, triangle for menu confirmation
and Start for pause/back. The dpad navigates menus. These map to the game's
default PC keyboard bindings; changing those in-game changes their meaning.
The original executable uses DirectInput 8 and has no XInput import.

`tools/analyze.py` leaves `analysis/decompiled/speed.exe/summary.txt` with
the function count Ghidra discovered and how many decompiled.
`tools/build.py --regenerate` writes `build/recomp/translate-report.json`;
its unsupported-instruction and unresolved-target counts are the measure of
translator coverage recorded in [analysis.md](analysis.md).
