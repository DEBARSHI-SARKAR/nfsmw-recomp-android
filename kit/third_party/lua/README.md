# Lua 5.4.6, vendored

The scripting runtime for the mod foundation's `[script]` mods. Vendored rather
than linked against a system Lua so that a build of this repository does not
depend on what happens to be installed, and so the version a mod is tested
against is the version it runs on.

| | |
| --- | --- |
| version | 5.4.6 (`LUA_RELEASE` "Lua 5.4.6", released 2023) |
| source | https://www.lua.org/ftp/lua-5.4.6.tar.gz |
| SHA-256 | `7d5ea1b9cb6aa0b59ca3dde1c6adcb57ef83a1ba8e5432c0ecd06bf439b3ad88` |
| licence | MIT, see `UPSTREAM-README` |

The checksum above is the one lua.org publishes, and it was verified against
the downloaded tarball before anything was copied here:

    curl -sSL -o lua-5.4.6.tar.gz https://www.lua.org/ftp/lua-5.4.6.tar.gz
    echo "7d5ea1b9cb6aa0b59ca3dde1c6adcb57ef83a1ba8e5432c0ecd06bf439b3ad88  lua-5.4.6.tar.gz" \
        | shasum -a 256 -c -

## What is here

Every `.c` and `.h` from the tarball's `src/`, with two files removed:

- `lua.c`, the standalone interpreter's `main`
- `luac.c`, the bytecode compiler's `main`

Both are programs, not library code, and either would collide with the host's
own `main`. What remains is the library: the core, the standard libraries and
`lauxlib`.

`UPSTREAM-README` is the tarball's own README, kept for the licence text.

## The rule

**These sources are never edited.** Not to silence a warning, not to add a
binding, not to change a default. Everything this project needs from Lua is
done from `mods/lua/`, which is ours; a local edit here would be
invisible to anyone reading upstream's 5.4.6 and would be lost the moment the
version is bumped. If something genuinely cannot be done from outside, the
change belongs upstream or in a patch file recorded here with its reason.

Build with the `lua` CMake target (`tools/build.py` does), which compiles these into
`build/recomp/liblua.a` with `-DLUA_USE_MACOSX` on macOS and `-DLUA_USE_LINUX` on Linux.
