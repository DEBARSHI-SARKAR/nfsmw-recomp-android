#!/bin/sh
# build_android.sh - check the Android build prerequisites, then run the kit's
#     .venv/bin/python tools/build.py --target android ...
#
# Usage: tools/build_android.sh [--link=GAME] [tools/build.py options...]
#
#   --link=GAME    before the build, use tools/setup.py --install GAME
#                  --link-only to link your game installation (the directory
#                  with speed.exe, whose SHA-256 the kit verifies) into this
#                  repository. Needed once before --regenerate or --push-game.
#                  Must be the first option; every option after it is passed
#                  through to tools/build.py exactly as given.
#   the rest       tools/build.py's own options: --jobs, --stub, --push-game,
#                  --console, --device, --no-install, --regenerate,
#                  --allow-table-gaps, ... (see kit/tools/build.py --help)
#
# Environment (the kit's README documents the same three):
#   ANDROID_HOME      the Android SDK (platform-tools, platforms;android-36,
#                     build-tools;37.0.0); defaults to ~/Android/Sdk
#   ANDROID_NDK_HOME  the NDK root, r28 or newer; defaults to the newest
#                     ndk/<version> under $ANDROID_HOME
#   JAVA_HOME         a JDK 17 or newer for Gradle; when unset, Gradle falls
#                     back to `java` on PATH, so this is only guessed at
#
# The APK lands at build/android/app/build/outputs/apk/debug/app-debug.apk.

set -eu

repo_root=$(CDPATH= cd -- "$(dirname -- "$0")/.." && pwd)
cd "$repo_root"

venv="$repo_root/.venv/bin/python"
if [ ! -x "$venv" ]; then
    echo "No .venv: create it with Python 3.9 or later and install kit/requirements-dev.txt." >&2
    echo "See CONTRIBUTING.md \"Prerequisites\"." >&2
    exit 1
fi

# The --link=GAME pre-step must come before the pass-through options, so the
# rest of "$@" reaches tools/build.py with its quoting intact.
game=""
while [ "$#" -gt 0 ]; do
    case "$1" in
        --link=*) game=${1#--link=}; shift ;;
        --link) echo "--link is --link=GAME now: a directory with speed.exe." >&2; exit 2 ;;
        *) break ;;
    esac
done
if [ -n "$game" ]; then
    echo "[android] linking the game installation under original/retail"
    "$venv" tools/setup.py --install "$game" --link-only
fi

if [ -z "${ANDROID_HOME:-}" ] && [ -d "$HOME/Android/Sdk" ]; then
    ANDROID_HOME="$HOME/Android/Sdk"
    export ANDROID_HOME
fi
if [ -n "${ANDROID_HOME:-}" ]; then
    if [ -z "${ANDROID_NDK_HOME:-}" ]; then
        newest=""
        for dir in "$ANDROID_HOME"/ndk/*; do
            [ -d "$dir" ] || continue
            newest=$dir
        done
        if [ -n "$newest" ]; then
            ANDROID_NDK_HOME="$newest"
            export ANDROID_NDK_HOME
        fi
    fi
    [ -d "$ANDROID_HOME/platform-tools" ] \
        || echo "[android] note: no platform-tools yet; adb push/install and --console need them" >&2
fi

if [ -z "${ANDROID_NDK_HOME:-}" ] \
    || [ ! -f "$ANDROID_NDK_HOME/build/cmake/android.toolchain.cmake" ]; then
    echo "ANDROID_NDK_HOME is not an NDK root (r28 or newer)." >&2
    echo "Install one with: sdkmanager --sdk_root=\"\$ANDROID_HOME\" 'ndk;<version>'" >&2
    exit 1
fi

if [ -z "${JAVA_HOME:-}" ]; then
    java_path=$(command -v java 2>/dev/null || true)
    if [ -n "$java_path" ]; then
        java_path=$(readlink -f "$java_path" 2>/dev/null || echo "$java_path")
    fi
    case "$java_path" in
        */bin/java)
            candidate=$(dirname "$(dirname "$java_path")")
            if [ -x "$candidate/bin/java" ] && [ "$candidate" != "/" ]; then
                JAVA_HOME=$candidate
                export JAVA_HOME
            fi
            ;;
    esac
fi
if [ -z "${JAVA_HOME:-}" ] && ! command -v java >/dev/null; then
    echo "JAVA_HOME is unset and \`java\` is not on PATH: Gradle needs a JDK 17+." >&2
    exit 1
fi

echo "[android] ANDROID_HOME=${ANDROID_HOME:-<unset>}" >&2
echo "[android] ANDROID_NDK_HOME=$ANDROID_NDK_HOME" >&2
echo "[android] JAVA_HOME=${JAVA_HOME:-<unset: Gradle uses \`java\` on PATH>}" >&2
exec "$venv" tools/build.py --target android "$@"
