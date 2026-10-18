# Build your own copy

A short, complete walkthrough for building and playing the port on your own
Android phone. Everything here is legal as long as you follow one rule:
**bring your own game**. This project ships no NFS: Most Wanted data — you
must own the original PC game and supply the files yourself.

## 0. What you will build

A debug APK (`app-debug.apk`) containing:

- the recompiled game (the translated guest code), and
- the kit's host: Vulkan renderer, SDL, control layouts, core mod.

It does **not** contain the game. Game data goes onto the phone separately
(step 5) — the app will not run without it.

## 1. Get the code

```sh
git clone fixxx
cd fixxxx
```

## 2. Install the toolchain

 ARM64 only compiled.

| Tool | Version | Notes |
| --- | --- | --- |
| Python | 3.9+ | creates `.venv`; all builds run through it |
| JDK | 17+ (17/21/24/25) | for Gradle; `JAVA_HOME` must point at it |
| Android SDK | API 36 + build-tools 37 + platform-tools | set `ANDROID_HOME` |
| Android NDK | r28 or newer | set `ANDROID_NDK_HOME` |
| adb | in SDK platform-tools | on your PATH, or use full path |

Install the SDK pieces with `sdkmanager`:

```sh
sdkmanager "platforms;android-36" "build-tools;37.0.0" "platform-tools"
```

Now make the Python virtual environment the build scripts expect:

```sh
python3 -m venv .venv
.venv/bin/pip install -r kit/requirements-dev.txt
```

## 2b. One-time: link your game install

The build verifies the game by hash before translating it. Point the kit at
your original PC copy (the folder that contains `speed.exe`):

```sh
.venv/bin/python tools/setup.py --install /path/to/your/nfsmw/install --link-only
```

This writes nothing into your install; it links `original/` in this repo to
it. The known-good retail hash is pinned in `game.toml`; a mismatched install
is refused with the hash it saw.

## 3. Build the APK

```sh
export ANDROID_HOME=~/Android/Sdk
export ANDROID_NDK_HOME=$ANDROID_HOME/ndk/<your-ndk-version>
export JAVA_HOME=/path/to/jdk

tools/build_android.sh --jobs 8
```

This runs, in order: translation of the exe into C (only when needed),
CMake cross-build of `libmain.so` (arm64), FFmpeg cross-build, then Gradle
packaging. First build takes a while; later builds are incremental.

Output: `build/android/app/build/outputs/apk/debug/app-debug.apk`

Useful options:

| Option | Meaning |
| --- | --- |
| `--no-install` | package only, do not touch a phone |
| `--push-game` | also stage+push your game data (step 5, option A) |
| `--console` | stream logcat after launching on the device |
| `--device <serial>` | target one phone when several are attached |

## 4. Install on the phone

Enable **USB debugging**, plug in, then:

```sh
adb install -r build/android/app/build/outputs/apk/debug/app-debug.apk
```

No Google Play signature is needed for `adb install`.

## 5. Put the game on the phone

The app keeps everything under its private folder
`/sdcard/Android/data/dev.recompkit.nfsmw/files/`. Game data must end up in
`files/game/`. Pick one:

- **Option A — from the build host:** run the same build with `--push-game`
  once. It stages your linked install (minus junk excluded in `game.toml`)
  and adb-pushes it.
- **Option B — USB copy**: copy your whole PC game folder to the phone and
  drop it inside the `files/` folder. On first start the launcher finds
  `speed.exe` anywhere under the data root and offers to activate it.
- **Option C — on-device import**: put a ZIP of the game folder on the
  phone's storage, open the app, and import through the launcher (or use
  "Open with" on the ZIP). A notification keeps the copy alive while it runs.

The phone needs roughly the size of your install free. Saves live in
`profile/` and are never overwritten by re-pushing game data.

## 6. Play

Start **RecompKit NFS:MW** from the launcher. The core mod (`core.nfsmw`) —
which carries the widescreen view and per-view FOV — is built into the APK and
loads automatically; a `symbols.json` that ships alongside it lets the mod
loader verify the build. First run takes a while: control layouts plus mod
resources are unpacked to the data root, and the translation cache is warmed.

If the screen stays black in a race: check `files/symbols.json` exists (the
mod loader needs it), and that your game folder really contains `speed.exe`.

## Troubleshooting

| Symptom | Likely cause |
| --- | --- |
| Build fails at Gradle | wrong `JAVA_HOME`, or SDK components missing |
| Build fails at CMake | wrong `ANDROID_NDK_HOME` version (need r28+) |
| APK installs but app crashes at start | no `game/` data — do step 5; check logcat |
| "Game data not found" in-app | files landed a folder too deep (`speed.exe` must be directly under `game/.../speed.exe`) |
| Black race world | the core mod did not load: `files/symbols.json` missing |
| device offline in adb | re-plug; on some phones, enable "File transfer" mode |
