# Build and run on Android

The Android target is the kit's: `--target android` cross-compiles the host for
`aarch64-linux-android` with the NDK's CMake toolchain (arm64-v8a, API 29,
static libc++), builds it as `libmain.so`, renders a Gradle project from the
kit's template and assembles a debug APK with Gradle. This repository holds the
game's side of it: the config the packaging and game-data staging read and the
commands here. Game files are never bundled: the APK carries the native
library, FFmpeg and the control layouts; the player's own game install arrives
on the device separately (see "Put the game on the device").

## What you need on the build host

| | |
| --- | --- |
| Python 3.9+ | the `.venv` of [the repo's build steps](../CONTRIBUTING.md), with `kit/requirements-dev.txt` |
| JDK 17+ | JAVA_HOME pointed at it (any OpenJDK 17/21/24/25 works; Gradle 9.7.1 runs the packaging) |
| Android SDK | `platforms;android-36`, `build-tools;37.0.0`, `platform-tools`; ANDROID_HOME set |
| Android NDK r28+ | ANDROID_NDK_HOME set at the NDK root (r28c is what the build here used) |
| adb | part of the SDK's platform-tools; a device is optional (see below) |

```sh
export ANDROID_HOME=~/Android/Sdk
export ANDROID_NDK_HOME=$ANDROID_HOME/ndk/28.2.13676358
export JAVA_HOME=/path/to/jdk
.venv/bin/python tools/build_android.sh --jobs 8
```

`tools/build_android.sh` is a wrapper, like `tools/build.py` and
`tools/test.py`: it checks the environment and then calls
`.venv/bin/python tools/build.py` with every option passed to it. All options
are the kit's; the useful ones on Android:

```sh
.venv/bin/python tools/build.py --target android --jobs 8    # build and package
.venv/bin/python tools/build.py --target android --stub      # no game code needed
.venv/bin/python tools/build.py --target android --push-game # + stage and push game data
.venv/bin/python tools/build.py --target android --console   # stream logcat after launch
.venv/bin/python tools/build.py --target android --device <adb serial>  # one phone of several
.venv/bin/python tools/build.py --target android --no-install # package only
```

With no device attached the build stops after the APK and says so; with one
attached it installs, launches `dev.recompkit.nfsmw/dev.recompkit.RecompActivity`
and (with `--console`) streams logcat. `--stub` builds against the kit's stub
game (no translation listed): its CMake tree is separate
(`build/cmake/android-stub/`), but the rendered Gradle project and the APK are
always `build/android/`, so a stub APK replaces a real one in place — don't
install the stub on a phone with game saves.

## What the build produces

- `build/cmake/android/host/libmain.so` — the host (SDL3 statically linked,
  the game's Vulkan renderer through volk, core mods compiled in).
- `build/android/app/src/main/jniLibs/arm64-v8a/libmain.so`,
  `libavformat.so`, `libavcodec.so`, `libavutil.so` — staged for the APK.
- `build/android/app/build/outputs/apk/debug/app-debug.apk` — the artifact to
  install (`adb install -r`).

The Gradle project at `build/android/` is rendered at every build by
`kit/tools/build.py` from `kit/platform/android/` (`AndroidManifest.xml.in`,
`app/build.gradle.kts.in`, the SDL `RecompActivity` subclass at
`kit/platform/android/app/src/main/java/dev/recompkit/`). Gradle never invokes
CMake: its `jniLibs` source set is only where the CMake build's outputs are
copied, and SDL's Java sources are taken from the SDL snapshot the CMake
dependency step checked out (`build/cmake/android/_deps/sdl3-src/android-project/...`).
Delete `build/android/` freely; the next build re-renders it.

The manifest asks for `android.hardware.vulkan.version` 1.1 (`required`), which
gates installation through a store, not through `adb install`: any device
reports the feature its driver advertises, and a device advertising less than
1.1 still sideloads but falls back at start (see "The renderer's Vulkan
requirements").

## Put the game on the device

The app's external files directory (`/sdcard/Android/data/dev.recompkit.nfsmw/files/`)
is its data root: game data under `game/` (checked by
`[setup].required_dirs`), saves and control-layout edits under `profile/`, and
the core mod resources the APK's assets are unpacked to (`mods/core`,
`controls/`). Three ways to fill `game/`:

1. **`--push-game` from the build host** — stages this repository's configured
   install (minus `[bundle].exclude`: the uninstaller, `scripts/`, the
   Windows-only DLLs and readmes, `server.cfg`) under `build/android/game/`,
   then pushes it with adb to `<data root>/game/` before launching. Requires
   `tools/setup.py --install <game> --link-only` first so the kit knows the
   install is right (`speed.exe` hash is verified there).
2. **USB copy** — copy the whole game folder from a computer into the data
   root under any name (`game/`, `NFSMW/`, whatever). At first launch the
   launcher finds a folder containing `speed.exe` and offers to make it
   active: its `candidates` path (launcher_platform_android.cpp) accepts any
   folder in the data root that contains the executable the config pins.
3. **The launcher's import on the device** — pick a game folder (SAF tree) or
   a ZIP of it (also reachable through "Open with" on the ZIP). The import
   copies the files into the data root under a foreground-service
   notification, so it survives the app being in the background.

`--push-game` never deletes device saves: it replaces only the staged
directory (`build/android/game/`), so a second push after a new install
updates files in place without touching the device's `profile/`.

## The renderer's Vulkan requirements

The D3D 9 translation renders on Vulkan with one SPIR-V set committed in the
kit (`host/gpu/vulkan/shaders*`). On a Vulkan 1.1-and-1.3-only device this is
what the backend (`vulkan_device.cpp`) actually requests:

| Requirement | Where it comes from |
| --- | --- |
| device API version ≥ 1.1 | the app instance asks 1.1 unless the loader offers 1.3; 1.0-only devices fail at device creation |
| `VK_KHR_dynamic_rendering` | as the extension on a 1.1/1.2 device, core on 1.3 |
| base features: `samplerAnisotropy`, `largePoints`, `independentBlend`, `fillModeNonSolid`, `occlusionQueryPrecise`, `depthClamp` | each is only enabled if the device reports it; absent ones degrade (no anisotropic filtering, no wireframe mode) |
| `textureCompressionBC` | optional everywhere: off on ASTC-only GPUs (Mali), which makes the game's DXTn textures decode to RGBA8 at upload |
| compute subgroup arithmetic | used by one shader; there is a shared-memory fallback for devices without it |
| descriptor pools/sets, binary semaphores, fences, `VK_KHR_swapchain`, `VK_KHR_android_surface` | Vulkan 1.0/1.1 basics |

There is deliberately **no** `bufferDeviceAddress`, **no** `shaderInt64`, **no**
descriptor indexing, and **no** timeline semaphores anywhere on this path, and
the SPIR-V carries no capability beyond 1.1 cores. That is what keeps a
Bifrost-class GPU like the Moto E13's Mali-G57 (Vulkan 1.1, no bDVA, no
`shaderInt64`) renderable with no kit changes: everything above is either 1.1
core or gates itself off the device's own report.

What to watch on Unisoc phones specifically: their Mali driver build is the
vendor's (r42-era on the T606 by default), and whether it exposes
`VK_KHR_dynamic_rendering` differs between the vendor's pasted driver versions.
If the device is 1.1-only and its driver lacks the extension, logcat shows
`gpu/vulkan: device lacks dynamic rendering` and the app says the device
"has no usable vulkan graphics (Vulkan 1.1)" — the launcher works in
software, but the game does not render. The fixes are device-level (a driver
update), not kit-level; do not add a renderpass fallback without an actual
device to test the 1.1 path against (see the constraints below).

Checks worth doing once on a new phone:

```sh
adb install -r build/android/app/build/outputs/apk/debug/app-debug.apk
adb logcat -s recomp SDL
# expect "[android] game data: ..." once game files exist, then "GPU backend: vulkan"
```

## RECOMP_* switches, profiles and debugging on the device

Switches read from `<data root>/switches.txt` (one `RECOMP_NAME=VALUE` per
line, same rules as the iOS `Documents/switches.txt`):

```sh
echo 'D3D9_STATS=1' > /path/to/data-root/switches.txt   # pushed beside game/
adb push switches.txt /sdcard/Android/data/dev.recompkit.nfsmw/files/
```

stderr reaches logcat under the `recomp` tag. Saves (and edited control
layouts) live in `<data root>/profile/`; `tools/ios_logs.py` is the iOS
equivalent — on Android, pull with `adb pull`. The launcher's export import
flow (pick a saves ZIP, export a ZIP) is wired through the
`RecompActivity`/`ImportService` pickers.

## Moto E13 notes

| | |
| --- | --- |
| SoC | Unisoc T606, 8 × A75/A55, Mali-G57 MP1, Android 13 (API 33) |
| minSdk it needs | 29 (the kit's android preset builds against `android-29`) |
| GPU driver | ARM's Vulkan 1.1 Bifrost driver, vendor build — verify `device lacks dynamic rendering` does *not* appear at startup |
| APK size | the stub APK built here is ~20 MB (`libmain` + three FFmpeg libs; unstripped), well under the ~50 MB a real build is likely to stay near; game data adds its own size when pushed |
| Memory | low-RAM device: do not set 4K render targets in the settings page; the default scaling is what to keep |

The kit's known race-loading blocker is platform-independent, so on-device
behaviour is expected to match the macOS run log until that is fixed, not just
on paper: budget your expectations against `docs/analysis.md` rather than
against the iPad row.

## What has been verified where

On a Linux workstation, 2026-10-18, with SDK 36/build-tools 37 and NDK r28c:
`tools/build_android.sh --stub` ran the whole chain — CMake configure against
the NDK toolchain, the FFmpeg cross-build, the `libmain.so` link and the Gradle
`assembleDebug` — and packaged `app-debug.apk` (~20 MB). `aapt dump badging`
shows package `dev.recompkit.nfsmw`, minSdk 29 and the
`android.hardware.vulkan.version` 1.1 feature (`required`); the APK carries
only `lib/arm64-v8a/*` and app assets, and the `libmain.so` ELF is aarch64
built for Android 29 against `libvulkan.so`, `libOpenSLES.so` and `liblog.so`.
No device was attached, so install, launch and on-device rendering remain
unverified here — as does any Moto E13 driver's extension set.
