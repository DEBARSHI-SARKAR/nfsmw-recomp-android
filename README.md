# NFS Most Wanted Recomp

[Build & contribute](CONTRIBUTING.md) · [Port analysis](docs/analysis.md) ·
[Testing](docs/testing.md) · [Android](docs/android.md) · [Changelog](CHANGELOG.md)

A recompilation of **Need for Speed: Most Wanted** (the 2005 PC Black
Edition) for macOS, iPad, Linux, Windows and the browser, in progress.
Original game instructions are translated to C ahead of time and compiled
with the native host, the way
[populous-recomp](https://github.com/veritr1x/populous-recomp) does it.

The runtime, translator, hosts and mod foundation are
[recomp-kit](https://github.com/veritr1x/recomp-kit), pulled in as the git
submodule `kit/`. This repository holds what is Most Wanted's: `game.toml`
and `globals.toml` (identity, addresses, curated symbols), `tests/` (the
config's contract with the kit), `tools/analyze.py` (this game's listing
export) and docs.

**You need your own copy of the game.** Game executables, artwork, sound,
tracks, cinematics, generated game code and replacement packs are prepared
locally and are not included. See [NOTICE](NOTICE) for ownership and
dependency credits.

## Which executable

The 2005 PC Black Edition ships one game executable, **`speed.exe`** (linked
by Microsoft 7.10, Visual C++ .NET 2003, timestamp 2005-12-01). It renders
through **Direct3D 9** with its own effect files, plays sound through
**DirectSound** from `.abk` banks whose heap routines are x86 code the kit
runs in a small interpreter, and reads its tracks and cars from the game
folder. The exact image is pinned by SHA-256 in `game.toml`; no other build
is accepted.

## Status: plays through the menus; a scripted race completes intermittently

The game boots, renders its front end and career menus, reaches track select
and drives a race. What it does not do yet is do so reliably: of five runs of
`smoke/quick-race.script` on macOS, one or two play the script to the end and
exit cleanly, and the rest hang entering race loading and are stopped by the
watchdog. The cause is known to be a timing-dependent failure in the loading
path and is the port's open blocker; the mechanism, the measurements and the
dead ends are in [docs/analysis.md](docs/analysis.md).

## Platform status

Status as of 2026-09-19, from the [run log](docs/analysis.md). macOS is the
only platform re-checked against the current kit pin; the others were
verified against an earlier one and are marked accordingly.

| Platform | Verified status | Build command | Known issues and remaining checks |
| --- | --- | --- | --- |
| macOS 14+ | Boots, renders the front end and career menus on Metal, reaches track select and a race. One to two runs in five play `smoke/quick-race.script` to the end with `guest exit code 0`. | `.venv/bin/python tools/build.py` (app); `--target smoke` | The intermittent hang entering race loading is open and is the blocker. Performance is unmeasured on this pin: the 4K figures below predate it and cannot be re-measured until a run reaches gameplay reliably. |
| iPadOS 17+ | Played by touch on an earlier kit pin, with the core mods compiled into the app, which a stock device needs because it loads no plugins. | `.venv/bin/python tools/build.py --target ios --console` | Not re-checked since the kit gained restored kernel32 imports, new recovery arbitration and 836 static initializers. |
| Android 10+ (arm64-v8a) | The kit's APK packaging is verified; device playback is not (the kit's stub APK is verified on macOS). Vulkan 1.1 needed, e.g. a Moto E13's Mali-G57. | `tools/build_android.sh` (wraps `tools/build.py --target android`) | Needs a device whose driver exposes `VK_KHR_dynamic_rendering`; game data is pushed with `--push-game` or imported by the launcher. See [docs/android.md](docs/android.md). |
| Linux | Rendered the race on an earlier pin, including under software Vulkan (lavapipe). | `.venv/bin/python tools/build.py --regenerate` | Not re-checked on the current pin. |
| Windows | Cross-compiled with llvm-mingw and ran the test script at 100-170 fps under CrossOver on an earlier pin. | `--preset windows-cross` | Never run on Windows hardware. Not re-checked on the current pin. |
| The browser | WebGPU in Chrome and Safari on an earlier pin: the game runs on a worker and reads its files from the browser's private storage; a race ran at 113-166 fps. | `.venv/bin/python tools/build.py --target web` | Reading a render target back is unsupported there. Not re-checked on the current pin. |

### Known issues

- **The race-loading hang.** A scripted race completes one or two runs in
  five. The main thread spins in a translated function rather than deadlocking,
  so the watchdog reports it as the guest no longer calling into the runtime.
  Every instrument tried so far moves it; `sample` on the hung process is the
  one measurement that does not.
- **Shutdown.** A guest worker outlives the run, which the smoke host reports
  as exit code 4. Pharaoh, Siege and Populous have teardown failures of the
  same family; it is a kit-level item rather than this game's.
- **Earlier per-platform figures.** The 4K and browser numbers quoted above
  were measured before the current kit pin and are kept as history, not as
  claims about it.

Direct3D 9 is translated through one shader generator and renders on Metal
(macOS, iPad), Vulkan (Linux, Windows, and macOS through MoltenVK) and WebGPU
(the browser). The simulation runs at 120 Hz and the widescreen fix (FOV, HUD,
minimap) is ported, both in the `core.nfsmw` mod. Online play (`ws2_32`,
`tapi32`, `netapi32`, the bundled `server.dll`) is out of scope and stubbed to
fail cleanly, and the Windows-only extras in the game folder (the ASI loader
and the widescreen fix) are not part of the port; their fixes are native host
behaviour instead.

## Build on macOS

The steps are the kit's. The last of them regenerates the translation and
builds the app.

```sh
git clone --recurse-submodules https://github.com/veritr1x/nfsmw-recomp.git
cd nfsmw-recomp
python3 -m venv .venv
.venv/bin/python -m pip install -r kit/requirements-dev.txt
.venv/bin/python tools/setup.py --install "/path/to/Need For Speed Most Wanted Black Edition" --link-only
.venv/bin/python tools/analyze.py --ghidra-home /path/to/ghidra_12.1.3_PUBLIC
.venv/bin/python tools/build.py --regenerate --allow-table-gaps "MSVC 7.1 switch shapes; see docs/analysis.md"
```

`tools/setup.py`, `tools/build.py`, `tools/test.py` and `tools/ios_logs.py`
are four-line wrappers around the kit's tools; every option is the kit's
(`--help` lists them). `tools/analyze.py` is this game's own: the kit's setup
exports listings from a curated annotation set, and none exists for
`speed.exe`, so this script runs Ghidra's analyzers instead. Outputs (the
translation, the apps, the logs) live under ignored `build/`; your
installation is linked at ignored `original/retail` and the Ghidra listings
live in ignored `analysis/`.

## Build for the other platforms

Linux and Windows builds are the kit's `--target app` (Windows cross-compiles
with llvm-mingw), and `tools/build.py --target web` writes a servable site for
the browser. The kit's [README](kit/README.md) has the prerequisites and the
serving headers the web build needs.

## Play on an iPad

`tools/build.py --target ios --console` builds, signs and installs the app and
streams its console, staging the game directory into the app minus
`[bundle].exclude` in `game.toml` (the uninstaller, the Windows-only DLLs).
The core mods are compiled in, which a stock device needs because it loads no
plugins.

## Check a change

```sh
.venv/bin/python tools/test.py              # the kit's portable suites
.venv/bin/python -m pytest -q tests         # this game's config
.venv/bin/python tools/build.py --stub      # the kit configures against this config, no game code
```

Changes to the runtime, hosts or tools belong in the kit's repository; bump
the submodule here once they land.
