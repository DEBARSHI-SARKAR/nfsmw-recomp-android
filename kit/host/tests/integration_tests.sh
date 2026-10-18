#!/bin/sh
# Proves the mod runtime SHIPS: a real plugin loads and runs in every host.
#
# The probe mod installs a before hook on main_loop_inner and writes a file
# from pop_mod_exit. If a host does not link the mod runtime, or links it but
# never calls mods_load_all, the file is absent and this fails.
#
# Headless throughout. The windowed app is BUILT and its symbols inspected;
# it is never launched, which is the rule for every gate in this plan.
set -e
ROOT=$(cd "$(dirname "$0")/../.." && pwd)
cd "$ROOT"
BUILDLOCK_SH="$ROOT/tools/recomp/buildlock.sh"
. "$BUILDLOCK_SH"
buildlock_acquire "$(dirname "${RECOMP_BUILD_ROOT:-$ROOT/build}")" "host integration tests" "$ROOT/host/tests/integration_tests.sh" "$@"
PY=${PY:-$ROOT/.venv/bin/python}
GAME=${RECOMP_GAME_DIR:?set RECOMP_GAME_DIR to the game directory}
BUILD=${RECOMP_BUILD_ROOT:-$ROOT/build}
unset RECOMP_CORE_MODS_DIR RECOMP_NO_MODS
"$PY" -m unittest "$ROOT/tools/recomp/tests/test_build_core.py"

OUT=$BUILD/recomp/integration
rm -rf "$OUT"
mkdir -p "$OUT"

"$PY" tools/build.py --game-dir "$GAME" --target plugins >/dev/null

fail=0
check() { if eval "$2"; then echo "  [ok] $1"; else echo "  [FAIL] $1"; fail=1; fi }

echo "== headless host =="
"$PY" tools/build.py --game-dir "$GAME" --target headless >/dev/null
RECOMP_MODS_DIR="$GAME/mods" RECOMP_PROFILE_DIR="$OUT/headless" \
RECOMP_MAX_FRAMES=60 RECOMP_FRAME_EVERY=0 \
    $BUILD/recomp/pop_headless > "$OUT/headless.log" 2>&1 || true
check "the headless reports the packaged core root" \
      "grep -Fq 'mods: roots core=$BUILD/recomp/mods/core user=$GAME/mods' $OUT/headless.log"
check "the headless host loaded the probe mod" \
      "grep -q 'mods: loaded smoke.probe' $OUT/headless.log"
check "its hooks ran inside the game" \
      "[ \$(sed -n 's/^hooks //p' $OUT/headless/probe.txt) -gt 0 ]"
# probe.txt is written BY pop_mod_exit, so its existence is the evidence
# that the exit ran; the warning is what a dropped teardown prints.
check "its pop_mod_exit ran before the process left" \
      "[ -s $OUT/headless/probe.txt ]"
# A hook installed during pop_mod_init, on the very first function the guest
# runs. It fires only because the loader publishes its pending registrations
# before the entry point; a queue applied at the first scheduler checkpoint
# would already be too late.
check "a hook installed at load time fired on the process entry" \
      "[ \$(sed -n 's/^entries //p' $OUT/headless/probe.txt) -gt 0 ]"
# NO TURN ASSERTION FOR THIS HOST, and not by preference. pop_headless links no
# script parser and has no input path at all - its host_input_state is a stub -
# so nothing can click through the menus and reach a level. It boots to the
# front end, where neither main loop runs. The turn assertion lives in the
# smoke host, which can be driven, and in the fixture, which drives the frame
# loop by hand.
check "and the teardown was not left undone" \
      "! grep -q 'did not run' $OUT/headless.log"
# THE ExitProcess-INSIDE-A-HOOKED-CALL CASE, which is what this host does every
# run: the probe's hook on `entry` is open for the whole run because entry never
# returns, and the guest leaves through ExitProcess, which longjmps over that
# frame. The frame is abandoned but the registry still counts it, so without an
# unconditional unwind the teardown waits on a count that never reaches zero and
# every pop_mod_exit is lost. All three have to hold together.
check "a guest ExitProcess inside a hooked call still tore down completely" \
      "grep -q 'guest called ExitProcess' $OUT/headless.log && \
       [ \$(sed -n 's/^entries //p' $OUT/headless/probe.txt) -gt 0 ] && \
       [ -s $OUT/headless/probe.txt ]"

echo "== smoke host =="
"$PY" tools/build.py --game-dir "$GAME" --target smoke >/dev/null
RECOMP_MODS_DIR="$GAME/mods" RECOMP_PROFILE_DIR="$OUT/smoke" \
RECOMP_SCRIPT=$GAME/smoke/integration.script \
RECOMP_HOST_DUMP_DIR="$OUT/smoke-frames" \
    $BUILD/recomp/pop_smoke > "$OUT/smoke.log" 2>&1 || true
check "the smoke reports the packaged core root" \
      "grep -Fq 'mods: roots core=$BUILD/recomp/mods/core user=$GAME/mods' $OUT/smoke.log"
check "the smoke host loaded the probe mod" \
      "grep -q 'mods: loaded smoke.probe' $OUT/smoke.log"
check "its hooks ran inside the game" \
      "[ \$(sed -n 's/^hooks //p' $OUT/smoke/probe.txt) -gt 0 ]"
# The script drives this host into the level, so the TURN scheduler runs and a
# hook on it has something to count. That is the binding gameplay check: entry
# and level-load hooks alone would pass without the game ever turning.
check "and the turn scheduler ran with a mod hooked into it" \
      "[ \$(sed -n 's/^turns //p' $OUT/smoke/probe.txt) -gt 0 ]"
# probe.txt is written BY pop_mod_exit, so its existence is the evidence
# that the exit ran; the warning is what a dropped teardown prints.
check "its pop_mod_exit ran before the process left" \
      "[ -s $OUT/smoke/probe.txt ]"
check "and the teardown was not left undone" \
      "! grep -q 'did not run' $OUT/smoke.log"
# F10 is the host's reserved key. The page prints one line when it opens, so
# this is end to end: script -> host gate -> the page's own key handler. It
# also proves a host registered that handler, because the loader no longer does.
check "F10 opened the settings page" \
      "grep -q 'settings page opened' $OUT/smoke.log"

echo "== parity fixture =="
"$PY" tools/build.py --game-dir "$GAME" --target fixture >/dev/null
# Exercise default core discovery directly, without the Python oracle or a
# user-root opt-in. A fixture that retains its old opt-in guard fails this.
(
    unset RECOMP_MODS_DIR
    RECOMP_FIXTURE=frames:4 RECOMP_OUT="$OUT/fixture-default" \
    RECOMP_PROFILE_DIR="$OUT/fixture-default-profile" \
        $BUILD/recomp/pop_fixture > "$OUT/fixture-default.log" 2>&1
) && fixture_default_ok=1 || fixture_default_ok=0
check "the fixture with no user-root override completed" "[ $fixture_default_ok -eq 1 ]"
check "the default fixture reports both roots" \
      "grep -Fq 'mods: roots core=$BUILD/recomp/mods/core user=mods' $OUT/fixture-default.log"
# The fixture with the game's user root: the probe mod loads and its hooks
# run inside the fixture's own startup. (tools/recomp/parity.py, which once
# drove this, left with the M0 consolidation; the fixture is run directly.)
RECOMP_MODS_DIR="$GAME/mods" RECOMP_PROFILE_DIR="$OUT/fixture" \
RECOMP_FIXTURE=frames:4 RECOMP_OUT="$OUT/parity" \
    $BUILD/recomp/pop_fixture > "$OUT/fixture.log" 2>&1 || true
check "the fixture reports the packaged core root" \
      "grep -Fq 'mods: roots core=$BUILD/recomp/mods/core user=$GAME/mods' $OUT/fixture.log"
check "the parity fixture loaded the probe mod" \
      "grep -q 'mods: loaded smoke.probe' $OUT/fixture.log"
check "and its hooks ran inside the fixture's own startup" \
      "[ \$(sed -n 's/^hooks //p' $OUT/fixture/probe.txt) -gt 0 ]"
check "including the turn scheduler it drives by hand" \
      "[ \$(sed -n 's/^turns //p' $OUT/fixture/probe.txt) -gt 0 ]"
check "the fixture ran pop_mod_exit too" \
      "[ -s $OUT/fixture/probe.txt ]"
check "and left no teardown undone" \
      "! grep -q 'did not run' $OUT/fixture.log"
# RECOMP_NO_MODS, properly. A `grep -qv` passes on any line that is not the one
# looked for, including an error line from a run that failed, so it proved
# nothing. This requires the run to SUCCEED, then requires no load message and
# no probe output at all in a profile directory that starts empty.
rm -rf "$OUT/off-profile"
if RECOMP_NO_MODS=1 RECOMP_MODS_DIR="$GAME/mods" RECOMP_PROFILE_DIR="$OUT/off-profile" \
       RECOMP_FIXTURE=frames:4 RECOMP_OUT="$OUT/parity-off" \
       $BUILD/recomp/pop_fixture > "$OUT/off.log" 2>&1; then off_ok=1; else off_ok=0; fi
check "the run with mods disabled completed" "[ $off_ok -eq 1 ]"
check "and loaded no mod" "! grep -q 'mods: loaded' $OUT/off.log"
check "and no plugin left anything behind" "[ ! -e $OUT/off-profile/probe.txt ]"
# EVERY run records, including this one. A run whose metadata is simply absent
# cannot be told from a run that was never made, so a disabled run records an
# explicit empty mod set rather than nothing at all.
check "and it still recorded the run, with an empty mod set" \
      "[ -s $BUILD/recomp/mods/run.json ] && \
       .venv/bin/python -c \"import json,sys; d=json.load(open('$BUILD/recomp/mods/run.json')); sys.exit(0 if d['mods']==[] else 1)\""

echo "== an empty mods directory behaves as if the foundation were not there =="
# Not the same question as RECOMP_NO_MODS. Here the runtime IS live and the
# directory is simply empty, which is what most players will have. Nothing may
# be loaded, and above all the settings page must not register its keyboard:
# it consumes F10 unconditionally and every navigation key once open, so a run
# with an empty directory would deliver different input from a run without the
# foundation at all. Checked through the presenter, by pressing F10 for real.
mkdir -p "$OUT/empty-mods"
rm -rf "$OUT/empty-profile"
RECOMP_CORE_MODS_DIR="$OUT/empty-mods" RECOMP_MODS_DIR="$OUT/empty-mods" RECOMP_PROFILE_DIR="$OUT/empty-profile" \
RECOMP_SCRIPT=$GAME/smoke/integration.script \
RECOMP_HOST_DUMP_DIR="$OUT/empty-frames" \
    $BUILD/recomp/pop_smoke > "$OUT/empty.log" 2>&1 || true
check "an empty mods directory loaded nothing" \
      "! grep -q 'mods: loaded' $OUT/empty.log"
check "and F10 did not open the settings page" \
      "! grep -q 'settings page opened' $OUT/empty.log"

# The headless host with the same empty directory, because the two hosts reach
# the loader by different routes and the record is written by whichever of the
# loader and the host actually ran. Exactly one of them must, and the run is
# recorded with an explicit empty set either way: a run whose metadata is
# absent cannot be told from a run that was never made.
rm -f $BUILD/recomp/mods/run.json
RECOMP_CORE_MODS_DIR="$OUT/empty-mods" RECOMP_MODS_DIR="$OUT/empty-mods" RECOMP_PROFILE_DIR="$OUT/empty-headless" \
RECOMP_MAX_FRAMES=20 RECOMP_FRAME_EVERY=0 \
    $BUILD/recomp/pop_headless > "$OUT/empty-headless.log" 2>&1 || true
check "the headless host with an empty directory recorded the run" \
      "[ -s $BUILD/recomp/mods/run.json ]"
check "and recorded an empty mod set" \
      ".venv/bin/python -c \"import json,sys; d=json.load(open('$BUILD/recomp/mods/run.json')); sys.exit(0 if d['mods']==[] else 1)\""

echo "== windowed app: links the runtime, never launched here =="
make recomp > "$OUT/app.log" 2>&1
# The installer runs as the bundle's post-build step, which Ninja skips when
# the app is already up to date, so the evidence is the installed plugin.
check "the app build installed its core root" \
      "[ -s $BUILD/PopRecomp.app/Contents/Resources/mods/core/display/display.dylib ]"
check "the app contains the executable-relative roots resolver" \
      "nm -U $BUILD/PopRecomp.app/Contents/MacOS/PopRecomp | grep -q mods_roots"
check "the app core resources were copied" \
      "cmp $GAME/mods/core/README.md $BUILD/PopRecomp.app/Contents/Resources/mods/core/README.md"
check "build/PopRecomp.app built" "[ -x $BUILD/PopRecomp.app/Contents/MacOS/PopRecomp ]"
# Launching the app is the user's, never the build's: check the symbols
# instead, which is what "the runtime ships in it" actually means.
check "the app binary contains the mod loader" \
      "nm -U $BUILD/PopRecomp.app/Contents/MacOS/PopRecomp | grep -q mods_load_all"
# mods_load_all alone is not decisive: mods_seam.cpp defines it weakly, so it
# is present in a binary that has only the seam. mods_symbols_load exists only
# in the module itself, so it is what distinguishes shipped from stubbed.
check "and the module itself, not just the weak seam" \
      "nm -U $BUILD/PopRecomp.app/Contents/MacOS/PopRecomp | grep -q mods_symbols_load"
check "the app binary contains the Lua core" \
      "nm -U $BUILD/PopRecomp.app/Contents/MacOS/PopRecomp | grep -q mods_lua_core_init"

echo "== a pinned clock makes a run repeatable =="
# RECOMP_PIN_CLOCK replaces the millisecond clock the guest reads with a
# counter that moves one step per presented frame. The claim is that two runs
# of one script then ask QMixer for very nearly the same sounds with the same
# arguments, which is what a comparison against the original needs.
#
# The numbers this was written against, four pinned and two unpinned runs of
# level1.script on this machine, counting QSWaveMix calls and comparing the two
# runs as multisets - the same call with the same arguments, order ignored:
#
#   pinned    3490, 3490, 3490 and 3493 calls; 0, 0 and 3 calls differed
#   unpinned  5373 and 5390 calls;           967 calls differed
#
# So the threshold below is two per cent of the calls, which is twenty times
# the worst pinned pair and a fortieth of the unpinned one. It is not zero and
# the run above is why: the scheduler runs its deadlines on a real monotonic
# clock by design - see kernel32.cpp sched_now, where a pinned clock would make
# every timed wait either instant or eternal - so which guest thread holds the
# baton still moves a little between runs.
#
# Two other things this comparison had to learn. The trace stamps every line
# with a real millisecond clock of its own (qmixer.cpp qm_trace_ms), so the
# lines are compared without it, by matching the call text only. And a pinned
# run and an unpinned one are not comparable to each other at all: the script's
# waits are in the same pinned milliseconds, so a pinned run covers less guest
# time and makes fewer calls. Only pinned against pinned means anything.
pin_run() {
    RECOMP_MODS_DIR="$GAME/mods" RECOMP_AUDIO_TRACE=100000 RECOMP_PIN_CLOCK=1 \
    RECOMP_SCRIPT=$GAME/smoke/level1.script \
    RECOMP_HOST_DUMP_DIR="$OUT/pin-$1-frames" \
        $BUILD/recomp/pop_smoke > "$OUT/pin-$1.log" 2>&1 || true
    grep -o 'QSWaveMix[A-Za-z]*(.*' "$OUT/pin-$1.log" > "$OUT/pin-$1.calls"
    sort "$OUT/pin-$1.calls" > "$OUT/pin-$1.sorted"
}
pin_run a
pin_run b
pin_calls=$(wc -l < "$OUT/pin-a.calls" | tr -d " ")
pin_moved=$(diff "$OUT/pin-a.sorted" "$OUT/pin-b.sorted" | grep -c "^[<>]" || true)
pin_allowed=$(( pin_calls / 50 ))
# Both runs have to have reached the level. Two runs that failed at the same
# early point would agree about the sounds they never played.
check "the first pinned run played the level through" \
      "grep -q 'all expectations met' $OUT/pin-a.log"
check "so did the second" \
      "grep -q 'all expectations met' $OUT/pin-b.log"
check "and both asked QMixer for something" \
      "[ $pin_calls -gt 1000 ]"
check "the two pinned runs asked for the same sounds with the same arguments" \
      "[ $pin_moved -le $pin_allowed ]"
echo "  ($pin_calls calls, $pin_moved differed, $pin_allowed allowed; the run also"
echo "   said \"$(grep -o 'clock is pinned[^;]*' "$OUT/pin-a.log" | head -1)\")"
check "and the run said which clock it ran on" \
      "grep -q 'the guest clock is pinned' $OUT/pin-a.log"

# And the same fact reaches the run record, through host_set_clock_description,
# which is the field a comparison of two records reads to know whether their
# clocks are even the same kind of thing. The headless host is used for it
# because it tears its mods down through the loader's own shutdown, which is
# what writes the record; sixty frames is enough and takes seconds.
RECOMP_MODS_DIR="$GAME/mods" RECOMP_PIN_CLOCK=1 \
RECOMP_MAX_FRAMES=60 RECOMP_FRAME_EVERY=0 \
    $BUILD/recomp/pop_headless > "$OUT/pin-record.log" 2>&1 || true
check "a pinned run records the clock it ran on" \
      "grep -Fq '\"clock\": \"pinned start=100 step=50\"' $BUILD/recomp/mods/run.json"
RECOMP_MODS_DIR="$GAME/mods" RECOMP_MAX_FRAMES=60 RECOMP_FRAME_EVERY=0 \
    $BUILD/recomp/pop_headless > "$OUT/unpin-record.log" 2>&1 || true
check "and an unpinned one records that it did not" \
      "grep -Fq '\"clock\": \"monotonic\"' $BUILD/recomp/mods/run.json"

[ $fail -eq 0 ] && echo "the mod runtime ships in every host"
exit $fail
