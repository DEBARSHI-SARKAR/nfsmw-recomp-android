#!/bin/sh
# Loads the example mods headless and asserts each observable effect.
set -e
ROOT=$(cd "$(dirname "$0")/../.." && pwd)
# Absolute, resolved before the cd: the lock re-execs this script by name.
SELF=$ROOT/tools/recomp/$(basename "$0")
cd "$ROOT"
GAME=${RECOMP_GAME_DIR:?set RECOMP_GAME_DIR to the game directory}
BUILD=${RECOMP_BUILD_ROOT:-$ROOT/build}

# The whole run under the build lock, not just the builds inside it. This
# script owns $BUILD/recomp/mods and $BUILD/recomp/profile-mods-test by fixed
# name for its whole run, and two copies of it clobber each other: one run's
# `rm -rf $BUILD/recomp/mods` deletes the log another is asserting on, and the
# failure lands on whichever check was reading at the time. That happened -
# "F10 opened the drawn settings page" failed against a log a second run had
# just truncated, while the surviving log contained the line. Serialising is
# the fix; the builds inside see BUILDLOCK_HELD and do not take it again.
BUILDLOCK_SH="$ROOT/tools/recomp/buildlock.sh"
. "$BUILDLOCK_SH"
buildlock_acquire "$(dirname "$BUILD")" "tools/recomp/mods_test.sh" "$SELF" "$@"

PROFILE=$BUILD/recomp/profile-mods-test
# A record path of this script's own. Every host defaults to
# $RECORD, so any other pop_smoke on this tree - a gate run,
# an agent's one-off, a make target - writes the same file and the .tmp beside
# it, and this script would assert against whichever finished last. The build
# lock above serialises the scripts that take it; a path of its own does not
# need the other run to have agreed to anything.
RECORD=$BUILD/recomp/mods/mods-test-run.json
rm -rf "$PROFILE" $BUILD/recomp/mods
mkdir -p "$PROFILE" $BUILD/recomp/mods

PY=${PY:-$ROOT/.venv/bin/python}
"$PY" tools/build.py --game-dir "$GAME" --target plugins
"$PY" tools/build.py --game-dir "$GAME" --target smoke

RECOMP_MODS_DIR=mods/examples RECOMP_PROFILE_DIR="$PROFILE" \
RECOMP_SCRIPT=$GAME/smoke/mods.script \
RECOMP_HOST_DUMP_DIR=$BUILD/recomp/mods/frames \
RECOMP_RUN_RECORD="$RECORD" \
    $BUILD/recomp/pop_smoke > $BUILD/recomp/mods/run.log 2>&1 || {
        echo "mods_test: the smoke run failed; see $BUILD/recomp/mods/run.log" >&2
        tail -40 $BUILD/recomp/mods/run.log >&2
        exit 1
    }

fail=0
check() { if eval "$2"; then echo "  [ok] $1"; else echo "  [FAIL] $1"; fail=1; fi }
value() { sed -n "s/^$1 //p" "$2"; }

echo "== example mods =="
check "all five example mods loaded" \
      "[ \$(grep -c '^mods: loaded example\\.' $BUILD/recomp/mods/run.log) -eq 5 ]"
check "none was rejected" "! grep -q '^mods: rejected' $BUILD/recomp/mods/run.log"
check "the overlay file was read through the game's file shim" \
      "grep -q 'readfile data\\\\mods-example.txt: ok' $BUILD/recomp/mods/run.log"
check "the before-hook logger counted turns" \
      "[ \"\$(value turns $PROFILE/example-logger.txt)\" -gt 0 ]"
check "the replace hook ran" \
      "[ \"\$(value replaced $PROFILE/example-constant.txt)\" -gt 0 ]"
check "and substituted its constant at least once" \
      "[ \"\$(value substituted $PROFILE/example-constant.txt)\" -gt 0 ]"
check "the Lua mod decoded entities" \
      "grep -qE 'luawalk saw [1-9][0-9]* entities of [1-9]' $BUILD/recomp/mods/run.log"
# The loader prints the mod's NAME, which is "Settings example" too, so
# grepping for that alone passed whether or not the registration worked. These
# check what the mod itself reported after a POP_OK.
check "the settings mod registered its menu entry" \
      "grep -q 'settingsmenu: menu entry \"Settings example\" registered' \
       $BUILD/recomp/mods/run.log && \
       [ \"\$(value menu_registered $PROFILE/example-settingsmenu.txt)\" = 1 ]"
# hud_rows is read at exit through the live API, so this also says the API is
# still usable there: a revoked context would have written -1.
check "the setting it registered from code reached the store" \
      "grep -q 'example.settingsmenu/hud_rows' $PROFILE/mod-settings.json && \
       [ \"\$(value hud_rows $PROFILE/example-settingsmenu.txt)\" = 3 ]"
check "the mod's API is still live inside its own pop_mod_exit" \
      "[ \"\$(value ui_scale_at_exit $PROFILE/example-settingsmenu.txt)\" = 3 ]"
check "F10 opened the drawn settings page" \
      "grep -q 'mods: settings page opened' $BUILD/recomp/mods/run.log"
# The dumps are written as smoke_<tag>_present.ppm. Naming them <tag>.ppm
# compared two files that do not exist, which cmp reports as a difference: the
# check passed without ever looking at a frame. Both files have to be there.
check "both frames were dumped" \
      "[ -s $BUILD/recomp/mods/frames/smoke_before_page_present.ppm ] && \
       [ -s $BUILD/recomp/mods/frames/smoke_settings_page_present.ppm ]"
check "the page frame differs from the frame before it" \
      "! cmp -s $BUILD/recomp/mods/frames/smoke_before_page_present.ppm \
                $BUILD/recomp/mods/frames/smoke_settings_page_present.ppm"
# A write that moved the value, and the same value read back: writing back
# what was already there would pass whether or not the write worked, and
# finding the key in the profile only proves the manifest declared it.
check "a settings write reads back as what was written" \
      "[ \"\$(value ui_scale_written $PROFILE/example-settingsmenu.txt)\" = 3 ] && \
       [ \"\$(value ui_scale_readback $PROFILE/example-settingsmenu.txt)\" = 3 ] && \
       grep -q 'settingsmenu: ui_scale written 3, read back 3' \
            $BUILD/recomp/mods/run.log"
check "and the written value, not the manifest default, is in the profile" \
      "grep -q 'example.settingsmenu/ui_scale' $PROFILE/mod-settings.json && \
       ! grep -q '\"example.settingsmenu/ui_scale\": 2' $PROFILE/mod-settings.json"
check "the run record names every loaded mod" \
      "[ \$(grep -c '\"payload\"' $RECORD) -eq 5 ]"
check "the run record pins the guest EXE and the build" \
      "grep -q '815ba8a550f571c38b602cf3386f65aab942667a4a2d9c7096b3660deac2eacd' \
       $RECORD && grep -q '\"override_set\"' $RECORD"
check "the run record captured the input stream by content" \
      "grep -q '\"bytes\": [1-9]' $RECORD"

# The documentation, checked against the code rather than against a reading of
# it: every api-> call it names has to exist, and no placeholder of any kind
# may survive - a bracketed one, a TBD, or a literal ellipsis standing in for
# code the reader was supposed to be given.
echo "== the documentation =="
grep -o 'api->[a-z_0-9]*' "$GAME/docs/MODDING.md" | sed 's/^api->//' | sort -u \
    > $BUILD/recomp/mods/doc-calls.txt
grep -o '(\*[a-z_0-9]*)' mods/pop_mod_api.h | tr -d '(*)' | sort -u \
    > $BUILD/recomp/mods/api-calls.txt
check "every api call the documentation names exists" \
      "[ -z \"\$(comm -23 $BUILD/recomp/mods/doc-calls.txt $BUILD/recomp/mods/api-calls.txt)\" ]"
check "no placeholder survived into the documentation" \
      "! grep -qE '\\[[Tt]he |TBD|\\.\\.\\.' $GAME/docs/MODDING.md"

# ---------------------------------------------------------------------------
# The recorded identity is what the run LOADED, not what is on disk when it
# stops, and it covers dot-prefixed assets - which the overlay serves, so two
# asset sets that differ only in one must not record the same identity.
#
# One extra run proves both at once. A dot-file is put in the overlay mod's
# assets BEFORE the run and deleted 20 seconds INTO it:
#
#   if the hash ignored dot-files, this run would record the first run's hash;
#   if the hash were taken at shutdown, the file would be gone by then and it
#   would record the first run's hash as well.
#
# So the one thing that must not happen is the two hashes being equal.
echo "== the recorded identity is the one that ran =="
# The probe goes in a mod the loader captures. It went in the logger rather
# than in example.overlay because the capture call used to sit on the plugin
# path, so an assets-only mod was never captured; impl-t6 removed that gate in
# be2c683 and every committed mod is captured now, which is what the last check
# in this phase asserts.
PROBE=mods/examples/logger/.probe
before=$(sed -n 's/.*"id": "example.logger".*"payload": "\([0-9a-f]*\)".*/\1/p' \
         $RECORD)
printf 'a dot-prefixed asset the overlay serves\n' > "$PROBE"
trap 'rm -f "$PROBE"' EXIT INT TERM

( sleep 20; rm -f "$PROBE" ) &
prober=$!
RECOMP_MODS_DIR=mods/examples RECOMP_PROFILE_DIR="$PROFILE" \
RECOMP_SCRIPT=$GAME/smoke/mods.script \
RECOMP_HOST_DUMP_DIR=$BUILD/recomp/mods/frames2 \
RECOMP_RUN_RECORD="$RECORD" \
    $BUILD/recomp/pop_smoke > $BUILD/recomp/mods/run2.log 2>&1 || {
        echo "mods_test: the second smoke run failed; see $BUILD/recomp/mods/run2.log" >&2
        wait $prober 2>/dev/null || true
        exit 1
    }
wait $prober 2>/dev/null || true
after=$(sed -n 's/.*"id": "example.logger".*"payload": "\([0-9a-f]*\)".*/\1/p' \
        $RECORD)
at=$(sed -n 's/.*"id": "example.logger".*"payload_at": "\([a-z]*\)".*/\1/p' \
     $RECORD)

check "the first run recorded an identity for the logger mod" \
      "[ -n \"$before\" ]"
check "a dot-prefixed asset changes the recorded identity" \
      "[ \"$before\" != \"$after\" ]"
check "and the identity is the one the run started with, not the one left on disk" \
      "[ \"$at\" = start ] || [ \"$at\" = load ]"
check "the record still names five mods and parses as JSON" \
      ".venv/bin/python -c \"import json,sys; d=json.load(open('$RECORD')); sys.exit(0 if len(d['mods'])==5 else 1)\""
check "a run records whether mods were enabled at all" \
      "grep -q '\"mods_enabled\": true' $RECORD"
check "and says where the build identity came from" \
      "grep -q '\"build_identity_source\": \"archive-at-start\"' $RECORD"
# The clock the run ACTUALLY ran on, not an environment variable. This host is
# boot-based and reads the real monotonic clock, so it must say so; the fixture
# says "pinned start=100 step=50" and Gate B compares the two per host. The
# field this replaced was read from RECOMP_CLOCK_MS, which nothing honoured,
# so it was empty in every run and matched in every comparison.
check "and names the clock the run ran on" \
      "grep -q '\"clock\": \"monotonic\"' $RECORD"
# Every mod that loaded should have been captured when it committed. One whose
# identity was taken at shutdown describes the files as they were at the end of
# the run rather than as they ran, which is the thing the record exists to
# avoid. Names the mod, because which one it is says where the missing call is.
check "no loaded mod had its identity taken at shutdown" \
      ".venv/bin/python -c \"import json,sys; d=json.load(open('$RECORD')); late=[m['id'] for m in d['mods'] if m['payload_at']=='shutdown']; print('captured late:', late) if late else None; sys.exit(1 if late else 0)\""


# ---------------------------------------------------------------------------
# Mods turned OFF. Last, because these runs overwrite $RECORD
# and every check above reads it.
#
# BOTH spellings, because the hosts test for the variable's PRESENCE - boot.cpp
# and fixture.cpp both ask !getenv("RECOMP_NO_MODS") - while the record used to
# ask whether its value was non-empty. RECOMP_NO_MODS= therefore ran with mods
# off and recorded mods_enabled: true, which is the one thing that field is for.
#
# nomods.script only boots and stops: the record is written at shutdown whatever
# the run did, and replaying a level to reach it would cost three minutes for
# two greps.
#
# run.json is DELETED before each run. Without that, a run that fails to start
# leaves the previous record in place and the check reads that and passes. It
# happened while this was being written: a stale record answered for a run that
# had exited on a usage message before writing anything.
echo "== with mods turned off =="
for spelling in 1 ""; do
    rm -f $RECORD
    RECOMP_NO_MODS="$spelling" RECOMP_MODS_DIR=mods/examples \
    RECOMP_PROFILE_DIR="$PROFILE" \
    RECOMP_SCRIPT=$GAME/smoke/nomods.script \
    RECOMP_HOST_DUMP_DIR=$BUILD/recomp/mods/frames-off \
    RECOMP_RUN_RECORD="$RECORD" \
        $BUILD/recomp/pop_smoke > $BUILD/recomp/mods/run-off.log 2>&1 || {
            echo "mods_test: the mods-off run failed; see $BUILD/recomp/mods/run-off.log" >&2
            tail -20 $BUILD/recomp/mods/run-off.log >&2
            exit 1
        }
    check "RECOMP_NO_MODS=[$spelling] still writes a record" \
          "[ -s $RECORD ]"
    check "RECOMP_NO_MODS=[$spelling] records mods_enabled false" \
          "grep -q '\"mods_enabled\": false' $RECORD"
    check "RECOMP_NO_MODS=[$spelling] loaded no mods" \
          ".venv/bin/python -c \"import json,sys; d=json.load(open('$RECORD')); sys.exit(0 if d['mods']==[] else 1)\""
done

[ $fail -eq 0 ] && echo "all mod example checks passed"
exit $fail
