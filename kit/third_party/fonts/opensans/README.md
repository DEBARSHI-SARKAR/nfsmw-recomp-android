# Open Sans 1.101

Open Sans by Steve Matteson, as released by Google Fonts under the Apache
License, Version 2.0 (see `LICENSE`). Open Sans is a trademark of Google
and may be registered in certain jurisdictions.

The files are unmodified copies of `apache/opensans/` in
https://github.com/google/fonts at commit
`4e24bf1805f1526cd1ce3e39447d5f8e6f1f6b67` ("hotfix-opensans: v1.101
added"), the last Apache-licensed static release before the family moved to
`ofl/`:

| File | SHA-256 |
| --- | --- |
| `OpenSans-Regular.ttf` | `13c03e22a633919beb2847c58c8285fb8a735ee97097d7c48fd403f8294b05f8` |
| `OpenSans-Semibold.ttf` | `b4c2050b25d3d296d5cf58589ca00816dc72df42262c2f629d5c6a984a161aa4` |

## Why the kit carries a font

Windows always has its own user-interface faces - Segoe UI, Tahoma,
Microsoft Sans Serif, Arial - and a program that draws text without naming a
font of its own gets one of them. The kit has no host font services, so text
in those faces used to fall back to fixed 8x16 bitmap cells. The runtime's GDI
now draws those faces with Open Sans instead (`runtime/gdi32_truetype.cpp`).
A face the program registers itself always wins. The build embeds both files
into the runtime (`cmake/EmbedFiles.cmake`), so every platform has them
without a resource bundle.
