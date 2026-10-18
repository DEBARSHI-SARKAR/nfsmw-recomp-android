# Translator and low-level tools

The contributor entry points are [setup.py](../setup.py), [build.py](../build.py)
and [test.py](../test.py). They check prerequisites and select the commands below.
Use those wrappers for an ordinary first build.

| Tool | Responsibility |
| --- | --- |
| `translate.py` | Decode instruction listings, resolve dispatch entries and emit C plus symbols |
| `runtime/x86.h` | Register/flag/x87 state and instruction semantics used by generated code |
| `symbols/` | Reviewed metadata for stable hooks and guest globals |
| `buildlock.sh`, `buildlock.py` | The shared process lock over build/recomp, as a shell entry and a Python module |
| `build_core.py`, `finish_bundle.py`, `snapshot_gen.py` | Install core mods reproducibly, finish the app bundle, copy one consistent generation of gen/ |
| `mode_probe.py`, `mode_probe.sh` | Exercise candidate modes with isolated settings and explicit evidence |
| `smoke/` | Scripted menu, graphics and gameplay scenarios |
| `texture_pack.py`, `terrain_detail.py`, `package_texture_pack.py` | Prepare and package local texture inputs |
| `presentation_smoke.py`, `performance_run.py` | Bounded presentation measurements and diagnostics |
| `oracle.py` | Low-level deterministic capture helpers for original/translated comparisons; `pop_fixture` is a CMake target (`tools/build.py --target fixture`) |
| `tests/` | Differential instruction tests and tooling regressions |

Generated functions preserve addresses, symbol names and instruction comments.
They are a mechanical translation, so register operations are expected. Add
meaningful names in reviewed symbol metadata and comments in the translator;
do not hand-edit generated chunks or publish them.

A normal translation needs the exact executable and listings prepared by setup.
`tools/build.py` publishes the generated directory and `symbols.json` by rename
under the lock, then CMake rebuilds `librecomp_gen.a` from it; a reader under the
same lock never sees half a generation.

The deterministic capture helpers are diagnostic building blocks. Their pinned
clocks and manually constructed level startup do not replace the native gameplay
suite or establish real-time performance. See [Testing](../../docs/testing.md).
