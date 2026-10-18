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
| `analysis/` | speed.exe analysis decomp |
| `docs/` | Project documentation |
| `kit/` | Recompilation runtime |
| `mods/` | Game-specific mod/configuration resources |
| `native/` | Native integration and project-specific code |
| `tests/` | Tests for the game configuration and project integration |
| `tools/` | Project wrappers and helper scripts for setup, analysis, building, and testing |

Some generated files and build outputs are created locally during analysis and compilation and should not be committed unless specifically required.

## Getting started

### 1. Clone the repository

```bash
git clone https://github.com/DEBARSHI-SARKAR/nfsmw-recomp-android.git
cd nfsmw-recomp-android
```

### 2. Read the build guide

See **[Build your own copy](docs/build-your-own.md)** for the detailed Android toolchain setup, linking your game installation, building the APK, installing it, and supplying game data.

The build guide currently documents an ARM64 Android debug APK workflow. Check the repository's scripts and platform documentation for the latest supported host targets and requirements.

### 3. Supply your own game files

You need a compatible original PC installation containing `speed.exe` and the game's data files. Follow the build guide to link the installation and copy/import the data to your device. The project checks the executable against its configured hash before translation.

Do not upload your game files, executable, audio, videos, or other copyrighted game data to this repository.

## Build and test

The full commands and prerequisites are documented in [build-your-own.md](docs/build-your-own.md) and [testing.md](docs/testing.md).

Common checks include:

```bash
# Project-specific Python tests
python -m pytest -q tests

# Portable test suite wrapper
tools/test.py

# Configure/build host stubs without translating game code
tools/build.py --stub
```

These commands require the relevant Python dependencies and project toolchain. Some native, graphics, gameplay, and integration tests have additional platform or game-data requirements; a command completing is not proof that every gameplay feature works. See [Testing](docs/testing.md) for the exact prerequisites and limitations.

## Technical notes

- [Port analysis](docs/analysis.md) documents the executable.
- [Build your own copy](docs/build-your-own.md) describes the Android build flow.
- [Testing](docs/testing.md) lists automated checks and manual bring-up verification.
