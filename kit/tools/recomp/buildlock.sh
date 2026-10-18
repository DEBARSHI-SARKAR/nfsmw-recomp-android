#!/bin/sh
# A mutex over build/recomp, shared by every script that reads or writes it.
#
# WHO HAS TO TAKE IT
#
#   Any script that reads or writes build/recomp/gen, build/recomp/obj or
#   build/recomp/librecomp_gen.a must hold this lock for as long as it is
#   using them.  That is tools/build.py, which regenerates all three and links
#   every host against them, and the run-only scripts that read the outputs.
#   A reader needs gen/ and the archive to
#   agree with EACH OTHER, not merely to be individually whole, so holding the
#   lock is the requirement - publishing each artifact atomically would not be
#   enough on its own, and is not relied on.
#
# HOW IT WORKS
#
#   `flock` on build/recomp/.lock, held by a python process for exactly as
#   long as the command it wraps. The program is tools/recomp/buildlock.py,
#   which tools/build.py and tools/test.py also import as a module.  The kernel owns the lock: it is released
#   when the holder exits however it exits, so there is no stale state to
#   detect and nothing to reclaim.
#
#   The wrapper passes the locked descriptor down to the command it runs, and
#   the command's own children inherit it in turn.  A flock lives on the open
#   file description, not on the process, so it stands until every descriptor
#   referring to it is closed.  That is what makes killing the wrapper safe:
#   without the hand-down, SIGKILL to the wrapper would free the lock while
#   the compiler it started was still writing into build/recomp, and the next
#   build would walk straight into those files.
#
#   Two earlier versions of this file tried to do it in the shell, with a
#   directory and then with a symlink carrying the owner's pid.  Both had the
#   same shape of bug, and the second one survived a race test: A and B both
#   see a dead owner, A renames the stale lock away and takes a fresh one, and
#   B - still acting on what it saw - renames A's *live* lock away and takes
#   it too.  An atomic rename does not check that what it is renaming is still
#   what was observed, and no sequence of shell primitives closes that without
#   a compare-and-swap.  An advisory lock has no such window because there is
#   nothing to observe: a process either holds it or waits.
#
# USAGE
#
#   From a POSIX sh script, wrapping the whole of it:
#
#       exec "$ROOT/tools/recomp/buildlock.sh" run "$ROOT" "what I am doing" \
#            "$0" --locked "$@"
#
#   or, more usually, source it and let it re-exec:
#
#       BUILDLOCK_SH="$ROOT/tools/recomp/buildlock.sh"
#       . "$BUILDLOCK_SH"
#       buildlock_acquire "$ROOT" "what I am doing" "$SELF" "$@"
#
#   Pass an ABSOLUTE path to the script, resolved before any cd, not "$0".
#   The re-exec runs it by name; a script invoked as ./x.sh that has since
#   changed directory re-execs nothing at all.
#
#   The first argument to buildlock_acquire is where the lock file lives, which
#   is the repository root in normal use but not in the race test, so the path
#   to this script is taken from BUILDLOCK_SH rather than derived from it.
#
#   Set BUILDLOCK_HELD=1 in the environment to declare the lock already held,
#   which is how the re-exec avoids taking it twice, and how a caller that
#   already holds it can invoke another script that wants it.

BUILDLOCK_WAIT=${BUILDLOCK_WAIT:-900}     # seconds to wait for the lock

buildlock_python() {
    if [ -n "$BUILDLOCK_PY" ]; then
        printf '%s' "$BUILDLOCK_PY"
        return
    fi
    for _p in "$1/.venv/bin/python" python3 /usr/bin/python3 python; do
        if [ -x "$_p" ] || command -v "$_p" >/dev/null 2>&1; then
            printf '%s' "$_p"
            return
        fi
    done
    printf '%s' python3
}

# buildlock.sh run ROOT DESCRIPTION COMMAND...
#   Runs COMMAND with build/recomp/.lock held, and exits with its status.
#   The lock itself lives in tools/recomp/buildlock.py; this is the shell entry.
if [ "${1:-}" = "run" ]; then
    _root=$2
    shift 1
    # buildlock.py sits beside this script, which is not always under ROOT:
    # the race test copies only the lock into a scratch root.
    _dir=$(cd "$(dirname "${BUILDLOCK_SH:-$0}")" && pwd)
    exec "$(buildlock_python "$_root")" "$_dir/buildlock.py" run "$@"
fi

# buildlock_acquire ROOT DESCRIPTION COMMAND...
#   Re-executes the calling script under the lock, unless it is already held.
#   BUILDLOCK_HELD is exported across the re-exec, so a script that runs
#   another locked script from inside the lock does not deadlock on itself.
buildlock_acquire() {
    [ "${BUILDLOCK_HELD:-}" = "1" ] && return 0
    _root=$1
    _what=$2
    shift 2
    exec "${BUILDLOCK_SH:-$_root/tools/recomp/buildlock.sh}" run \
         "$_root" "$_what" "$@"
}

# buildlock_release: nothing to do.  The kernel releases the lock when the
# holder exits; this exists so callers that used the old API still work.
buildlock_release() { :; }
