# Need for Speed: Most Wanted Recomp

A work-in-progress recompilation project for **Need for Speed: Most Wanted (2005 PC Black Edition)**, targeting Android and Linux.

The project translates the original game's executable into C ahead of time, then builds it with a native host. The repository contains the game configuration, translation/build tooling, host integration, tests, and project analysis.

> **You must provide your own copy of the game.** This repository does not distribute `speed.exe`, game assets, audio, movies, or other copyrighted game data. The application will not run without compatible files from your own legally obtained PC installation.

## Project status

This is an active work in progress. The host and recompiled code have progressed through substantial bring-up work, but compatibility and platform support are still evolving. Consult the port analysis and testing notes before assuming a particular feature or test is complete.

- **Target game:** Need for Speed: Most Wanted (2005 PC Black Edition)
- **Targets:** Android and Linux (platform-specific build support may vary)
- **Android build:** ARM64
- **Graphics path:** Direct3D 9 compatibility work with native rendering backends
- **Game data:** Supplied separately by the user; not included in this repository

## Repository layout

| Path | Purpose |
| --- | --- |
| `analysis/` | Executable analysis and decompilation outputs or related analysis material |
| `docs/` | Project documentation |
| `kit/` | Recompilation runtime, host/platform code, and build/test infrastructure |
| `mods/` | Game-specific mod/configuration resources |
| `native/` | Native integration and project-specific code |
| `tests/` | Tests for the game configuration and project integration |
| `tools/` | Project wrappers and helper scripts for setup, analysis, building, and testing |
| `game.toml` | Game-specific executable/configuration data |
| `globals.toml` | Global data configuration |
| `analysis.md` | Detailed port analysis and current bring-up notes |
| `build-your-own.md` | Build and Android installation walkthrough |
| `testing.md` | Test commands, test prerequisites, and bring-up checks |

Some generated files and build outputs are created locally during analysis and compilation and should not be committed unless specifically required.

## Getting started

### 1. Clone the repository

```bash
git clone https://github.com/DEBARSHI-SARKAR/nfsmw-recomp-android.git
cd nfsmw-recomp-android
```

### 2. Read the build guide

See **[Build your own copy](build-your-own.md)** for the detailed Android toolchain setup, linking your game installation, building the APK, installing it, and supplying game data.

The build guide currently documents an ARM64 Android debug APK workflow. Check the repository's scripts and platform documentation for the latest supported host targets and requirements.

### 3. Supply your own game files

You need a compatible original PC installation containing `speed.exe` and the game's data files. Follow the build guide to link the installation and copy/import the data to your device. The project checks the executable against its configured hash before translation.

Do not upload your game files, executable, audio, videos, or other copyrighted game data to this repository.

## Build and test

The full commands and prerequisites are documented in [build-your-own.md](build-your-own.md) and [testing.md](testing.md).

Common checks include:

```bash
# Project-specific Python tests
python -m pytest -q tests

# Portable test suite wrapper
tools/test.py

# Configure/build host stubs without translating game code
tools/build.py --stub
```

These commands require the relevant Python dependencies and project toolchain. Some native, graphics, gameplay, and integration tests have additional platform or game-data requirements; a command completing is not proof that every gameplay feature works. See [Testing](testing.md) for the exact prerequisites and limitations.

## Technical notes

- [Port analysis](analysis.md) documents the executable, imported Windows APIs, graphics requirements, and recorded bring-up findings.
- [Build your own copy](build-your-own.md) describes the Android build and install flow.
- [Testing](testing.md) lists automated checks and manual bring-up verification.

## Contributing

Bug reports, reproducible test results, and focused technical contributions are welcome. When reporting a problem, include:

- Host OS and architecture
- Target device and Android version, when relevant
- The exact command used
- Relevant logs and error messages
- Whether you used a clean build and a compatible, user-owned game installation

Please do not attach copyrighted game data or private credentials to issues or pull requests.

## Legal and project disclaimer

This is an independent fan/technical project and is not affiliated with or endorsed by Electronic Arts. **Need for Speed** and related names are trademarks of their respective owners. You are responsible for obtaining and using game files lawfully in your jurisdiction.

## License

Check the repository's license and any notices accompanying third-party components before redistributing code or binaries. Where third-party components are included, their own licenses apply.
