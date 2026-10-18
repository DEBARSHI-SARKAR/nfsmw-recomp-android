#!/usr/bin/env python3
"""An advisory lock over build/recomp, shared by every build and game-backed test.

    tools/recomp/buildlock.py run ROOT DESCRIPTION COMMAND...   # from shell scripts
    with buildlock.BuildLock(root, "what I am doing"):          # from Python

The kernel owns the lock and releases it when the holder exits however it
exits, so there is no stale state to detect. BUILDLOCK_HELD=1 in the
environment says a parent already holds it and it must not be taken again;
the context manager sets that for its own children.
"""

import os
import subprocess
import sys
import time

LOCK_RELATIVE = os.path.join("build", "recomp", ".lock")
DEFAULT_WAIT = 900.0


def held():
    """Whether a parent process already holds the lock."""
    return os.environ.get("BUILDLOCK_HELD") == "1"


def _try_lock(fd):
    """Take the lock without waiting; False when somebody else has it."""
    if os.name == "nt":
        import msvcrt
        os.lseek(fd, 0, os.SEEK_SET)
        try:
            msvcrt.locking(fd, msvcrt.LK_NBLCK, 1)
            return True
        except OSError:
            return False
    import fcntl
    try:
        fcntl.flock(fd, fcntl.LOCK_EX | fcntl.LOCK_NB)
        return True
    except OSError:
        return False


def _lock_within(fd, wait):
    """Poll for the lock until `wait` seconds have passed. Polling, not a blocking
    call on a helper thread: a waiter that gave up must not leave a thread
    behind that takes the lock later and never lets go of it."""
    deadline = time.monotonic() + wait
    while True:
        if _try_lock(fd):
            return True
        if time.monotonic() >= deadline:
            return False
        time.sleep(0.05)


def _read_note(fd):
    try:
        os.lseek(fd, 0, os.SEEK_SET)
        note = os.read(fd, 256).decode("utf-8", "replace").replace("\0", "").strip()
        return note or "another build"
    except OSError:
        return "another build"


def _write_note(fd, text):
    # Truncating does not move the offset, and a waiter that sat in the lock
    # still has one from its own read; seek first or the note lands after NULs.
    os.ftruncate(fd, 0)
    os.lseek(fd, 0, os.SEEK_SET)
    os.write(fd, (text + "\n").encode())
    os.fsync(fd)


class BuildLock(object):
    """Holds build/recomp/.lock for a with-block. `fd` is None when a parent held it already."""

    def __init__(self, root, what, wait=DEFAULT_WAIT):
        self.path = os.path.join(str(root), LOCK_RELATIVE)
        self.what = what
        self.wait = wait
        self.fd = None
        self._exported = False

    def __enter__(self):
        if held():
            return self
        os.makedirs(os.path.dirname(self.path), exist_ok=True)
        fd = os.open(self.path, os.O_CREAT | os.O_RDWR, 0o644)
        if not _try_lock(fd):
            # Say who we are waiting for, once. Advisory only: correctness
            # comes from the lock, not from this note.
            print("buildlock: waiting for %s" % _read_note(fd), file=sys.stderr, flush=True)
            if not _lock_within(fd, self.wait):
                os.close(fd)
                raise TimeoutError("buildlock: %s still held after %gs; giving up" % (self.path, self.wait))
        _write_note(fd, "%s (pid %d)" % (self.what, os.getpid()))
        self.fd = fd
        os.environ["BUILDLOCK_HELD"] = "1"
        self._exported = True
        return self

    def __exit__(self, exc_type, exc, tb):
        if self.fd is not None:
            try:
                os.ftruncate(self.fd, 0)
            except OSError:
                pass
            os.close(self.fd)  # the kernel drops the lock with the descriptor
            self.fd = None
        if self._exported:
            os.environ.pop("BUILDLOCK_HELD", None)
            self._exported = False
        return False


def run(root, what, command, wait=DEFAULT_WAIT):
    """Runs `command` with the lock held and returns its exit status.

    On POSIX the locked descriptor is handed to the child, so the lock stands
    for as long as anything the child started is still running, even if this
    wrapper is killed. Windows has no inheritable region lock; there the lock
    lives exactly as long as this process."""
    with BuildLock(root, what, wait) as lock:
        kwargs = {}
        if lock.fd is not None and os.name != "nt":
            kwargs["pass_fds"] = (lock.fd,)
        return subprocess.call(command, **kwargs)


def main(argv):
    if len(argv) < 4 or argv[0] != "run":
        print("usage: buildlock.py run ROOT DESCRIPTION COMMAND...", file=sys.stderr)
        return 2
    wait = float(os.environ.get("BUILDLOCK_WAIT", DEFAULT_WAIT))
    try:
        return run(argv[1], argv[2], argv[3:], wait)
    except TimeoutError as error:
        print(error, file=sys.stderr)
        return 1


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
