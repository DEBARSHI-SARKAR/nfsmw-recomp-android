#!/usr/bin/env python3
"""Turn the Windows executable's icon into the app's icon files.

    tools/extract_icon.py --exe original/gog/D3DPopTB.exe --dest App.app

Reads the first RT_GROUP_ICON resource and its RT_ICON frames, picks the
largest frame, and writes the PNG sizes iPadOS reads from CFBundleIconFiles
(Icon-<points>@2x.png). The game's own art is the icon, scaled up; no icon
is invented."""

import argparse
from pathlib import Path
import struct
import sys

import pefile
from PIL import Image
import io

# (base name, pixels): the @2x files iPadOS looks up for the names in the plist.
IOS_ICONS = (("Icon-29", 58), ("Icon-40", 80), ("Icon-60", 120), ("Icon-76", 152), ("Icon-83.5", 167))


class MissingIconError(ValueError):
    """The PE is valid but has no icon resource."""


def ico_bytes(exe_path):
    """The first icon group of a PE, rebuilt as a .ico file's bytes."""
    pe = pefile.PE(str(exe_path), fast_load=True)
    pe.parse_data_directories(directories=[pefile.DIRECTORY_ENTRY["IMAGE_DIRECTORY_ENTRY_RESOURCE"]])
    icons, group = {}, None
    resource = getattr(pe, "DIRECTORY_ENTRY_RESOURCE", None)
    for entry in resource.entries if resource else []:
        kind = pefile.RESOURCE_TYPE.get(entry.id)
        if kind not in ("RT_ICON", "RT_GROUP_ICON"):
            continue
        for e in entry.directory.entries:
            lang = e.directory.entries[0].data.struct
            data = pe.get_data(lang.OffsetToData, lang.Size)
            if kind == "RT_ICON":
                icons[e.id] = data
            elif group is None:
                group = data
    if group is None or not icons:
        raise MissingIconError("%s has no icon group" % exe_path)
    count = struct.unpack_from("<H", group, 4)[0]
    header = struct.pack("<HHH", 0, 1, count)
    entries, blobs = b"", b""
    offset = 6 + 16 * count
    for i in range(count):
        w, h, colors, reserved, planes, bpp, size, ordinal = struct.unpack_from("<BBBBHHIH", group, 6 + 14 * i)
        blob = icons[ordinal]
        entries += struct.pack("<BBBBHHII", w, h, colors, reserved, planes, bpp, len(blob), offset)
        blobs += blob
        offset += len(blob)
    return header + entries + blobs


def largest_frame(ico):
    """The biggest image in the .ico, as RGBA."""
    image = Image.open(io.BytesIO(ico))
    best = max(image.info.get("sizes", {image.size}), key=lambda s: s[0] * s[1])
    image.size = best
    image.load()
    return image.convert("RGBA")


def write_icons(exe_path, dest, sizes=IOS_ICONS):
    """Write every icon file into `dest`; returns the paths written."""
    try:
        icon = ico_bytes(exe_path)
    except MissingIconError:
        # Some installers keep the executable's icon beside it instead of
        # embedding a resource. Windows filenames are case insensitive.
        exe_path = Path(exe_path)
        name = exe_path.with_suffix(".ico").name.casefold()
        matches = [p for p in exe_path.parent.iterdir() if p.name.casefold() == name and p.is_file()]
        if len(matches) != 1:
            raise
        icon = matches[0].read_bytes()
    frame = largest_frame(icon)
    dest = Path(dest)
    dest.mkdir(parents=True, exist_ok=True)
    written = []
    for name, px in sizes:
        # Pixel art from 1998: scale by whole multiples first so the pixels
        # stay square, then fit the exact size.
        factor = max(1, px // frame.width)
        scaled = frame.resize((frame.width * factor, frame.height * factor), Image.NEAREST)
        scaled = scaled.resize((px, px), Image.LANCZOS)
        # iOS icons have no alpha: composite onto black, as the Windows shell would on a dark tile.
        flat = Image.new("RGB", (px, px), (0, 0, 0))
        flat.paste(scaled, mask=scaled.split()[3])
        path = dest / ("%s@2x.png" % name)
        flat.save(path, "PNG")
        written.append(path)
    return written


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--exe", type=Path, required=True)
    parser.add_argument("--dest", type=Path, required=True)
    args = parser.parse_args()
    paths = write_icons(args.exe, args.dest)
    print("icon: %d files from %s into %s" % (len(paths), args.exe, args.dest))


if __name__ == "__main__":
    sys.exit(main())
