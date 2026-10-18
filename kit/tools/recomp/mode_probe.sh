#!/bin/sh
# Headless Classic candidates. Default: regenerate under build/recomp and diff
# the committed list (informational). --update installs only complete, verified
# measurements, including rejected candidates; settings offer only survivors.
set -eu
ROOT=$(cd "$(dirname "$0")/../.." && pwd)
SELF="$ROOT/tools/recomp/mode_probe.sh"
if [ "${BUILDLOCK_HELD:-}" != 1 ]; then
    "$ROOT/tools/recomp/buildlock.sh" run "$ROOT" "Classic mode probe" "$SELF" "$@"
    exit $?
fi
cd "$ROOT"
if [ "${RECOMP_MODE_PROBE_NO_BUILD:-}" != 1 ]; then
    "${PY:-$ROOT/.venv/bin/python}" "$ROOT/tools/build.py" --target smoke
fi
python3 "$ROOT/tools/recomp/mode_probe.py" "$@"
