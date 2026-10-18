#!/bin/sh
# Races acquirers of tools/recomp/buildlock.sh and asserts a single owner.
#
#   tools/recomp/tests/test_buildlock.sh [ROUNDS] [CONTENDERS]
#
# Each acquirer, while holding the lock, creates a marker directory and fails
# if one is already there.  `mkdir` is itself exclusive, so two processes
# inside the critical section cannot both fail to notice.  Headless; touches
# only a scratch directory under TMPDIR.
set -e

ROOT=$(cd "$(dirname "$0")/../../.." && pwd)
ROUNDS=${1:-50}
CONTENDERS=${2:-4}

WORK=$(mktemp -d "${TMPDIR:-/tmp}/buildlock-test.XXXXXX")
trap 'rm -rf "$WORK"' EXIT
mkdir -p "$WORK/build/recomp"

# One contender: take the lock, prove nobody else is inside, let go.
cat > "$WORK/contender.sh" <<'EOF'
#!/bin/sh
ROOT=$1
WORK=$2
BUILDLOCK_WAIT=${WAIT_OVERRIDE:-30}
export BUILDLOCK_WAIT
BUILDLOCK_SH="$ROOT/tools/recomp/buildlock.sh"
. "$BUILDLOCK_SH"
buildlock_acquire "$WORK" "contender $$" "$0" "$@"
if ! mkdir "$WORK/inside" 2>/dev/null; then
    echo "VIOLATION: pid $$ entered while $(cat "$WORK/inside/owner" 2>/dev/null) was inside" \
        >> "$WORK/violations"
    exit 1
fi
echo $$ > "$WORK/inside/owner"
# Hold it long enough for a contender to overlap if the lock were not working.
sleep 0.01
rm -f "$WORK/inside/owner"
rmdir "$WORK/inside"
echo $$ >> "$WORK/owners"
EOF
chmod +x "$WORK/contender.sh"

: > "$WORK/violations"
: > "$WORK/owners"

round=0
while [ "$round" -lt "$ROUNDS" ]; do
    n=0
    while [ "$n" -lt "$CONTENDERS" ]; do
        "$WORK/contender.sh" "$ROOT" "$WORK" >/dev/null 2>&1 &
        n=$((n + 1))
    done
    wait
    if [ -d "$WORK/inside" ]; then
        echo "FAIL: round $round left the critical section occupied" >&2
        exit 1
    fi
    round=$((round + 1))
done

violations=$(wc -l < "$WORK/violations" | tr -d ' ')
owners=$(wc -l < "$WORK/owners" | tr -d ' ')
expected=$((ROUNDS * CONTENDERS))

if [ "$violations" != "0" ]; then
    echo "FAIL: $violations overlapping critical sections" >&2
    head -5 "$WORK/violations" >&2
    exit 1
fi
if [ "$owners" != "$expected" ]; then
    echo "FAIL: $owners of $expected acquirers completed" >&2
    exit 1
fi

# The kernel releases an advisory lock when its holder dies, however it dies,
# so a build killed mid-flight leaves nothing to reclaim.  There is no stale
# state to detect and no window in which two processes can both decide a lock
# is abandoned - which is what the two shell-implemented predecessors got
# wrong.
sh -c "BUILDLOCK_SH=\"$ROOT/tools/recomp/buildlock.sh\"
       . \"\$BUILDLOCK_SH\"
       buildlock_acquire \"$WORK\" 'about to be killed' sh -c 'kill -9 \$\$'" \
    >/dev/null 2>&1 || true
if ! WAIT_OVERRIDE=5 "$WORK/contender.sh" "$ROOT" "$WORK" >/dev/null 2>&1; then
    echo "FAIL: the lock was not released when its holder was killed" >&2
    exit 1
fi

# Killing the wrapper does not free the lock while the build it started is
# still running: the child holds the same locked descriptor, and the kernel
# keeps the lock until the last holder is gone.  Kill the wrapper, not the
# child - the child dying is the ordinary case and was never in doubt.
"$ROOT/tools/recomp/buildlock.sh" run "$WORK" 'wrapper about to be killed' \
    sleep 6 >/dev/null 2>&1 &
wrapper=$!
child=""
tries=0
while [ "$tries" -lt 100 ]; do
    child=$(pgrep -P "$wrapper" 2>/dev/null | head -1)
    [ -n "$child" ] && break
    sleep 0.05
    tries=$((tries + 1))
done
if [ -z "$child" ]; then
    echo "FAIL: the wrapper never started its command" >&2
    kill -9 "$wrapper" 2>/dev/null || true
    exit 1
fi
kill -9 "$wrapper" 2>/dev/null || true
wait "$wrapper" 2>/dev/null || true
if ! kill -0 "$child" 2>/dev/null; then
    echo "FAIL: killing the wrapper also killed the build it was running" >&2
    exit 1
fi
if WAIT_OVERRIDE=1 "$WORK/contender.sh" "$ROOT" "$WORK" >/dev/null 2>&1; then
    echo "FAIL: the lock was released while the killed wrapper's child was" \
         "still running" >&2
    kill -9 "$child" 2>/dev/null || true
    exit 1
fi
kill -9 "$child" 2>/dev/null || true
tries=0
while kill -0 "$child" 2>/dev/null && [ "$tries" -lt 100 ]; do
    sleep 0.05
    tries=$((tries + 1))
done
if ! WAIT_OVERRIDE=5 "$WORK/contender.sh" "$ROOT" "$WORK" >/dev/null 2>&1; then
    echo "FAIL: the lock outlived every process that held it" >&2
    exit 1
fi

# A live holder is waited for, not walked past.
sh -c "BUILDLOCK_SH=\"$ROOT/tools/recomp/buildlock.sh\"
       . \"\$BUILDLOCK_SH\"
       buildlock_acquire \"$WORK\" 'long holder' sleep 4" >/dev/null 2>&1 &
holder=$!
sleep 1
if WAIT_OVERRIDE=1 "$WORK/contender.sh" "$ROOT" "$WORK" >/dev/null 2>&1; then
    echo "FAIL: a lock held by a live process was taken anyway" >&2
    kill $holder 2>/dev/null || true
    exit 1
fi
wait $holder 2>/dev/null || true

echo "PASS  $ROUNDS rounds x $CONTENDERS contenders: $owners acquisitions," \
     "0 overlaps; a killed holder releases, a killed wrapper keeps the lock" \
     "while its build runs, a live holder is waited for"
