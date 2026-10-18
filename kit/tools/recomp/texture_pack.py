#!/usr/bin/env python3
"""Build full-color, mipmapped texture packs from explicit runtime captures.

The originals and generated pack stay local. Normal gameplay performs no
resizing. Run with the requirements in texture-pack-requirements.txt.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path

import numpy as np
from PIL import Image, ImageFilter

MAGIC = b"POPRGBA1"


def read_capture(path):
    with Path(path).open("rb") as f:
        if f.readline() != b"P7\n":
            raise ValueError("expected RGBA PAM capture")
        fields = {}
        for line in f:
            if line == b"ENDHDR\n":
                break
            k, v = line.decode("ascii").strip().split(" ", 1)
            fields[k] = v
        w, h = int(fields["WIDTH"]), int(fields["HEIGHT"])
        if fields["DEPTH"] != "4" or fields["MAXVAL"] != "255" or not (0 < w <= 4096 and 0 < h <= 4096):
            raise ValueError("invalid capture layout")
        pixels = f.read()
        if len(pixels) != w * h * 4:
            raise ValueError("truncated capture")
        return Image.frombytes("RGBA", (w, h), pixels)


def resize_rgba(image, size, resample=Image.Resampling.LANCZOS):
    # Filter premultiplied channels to prevent transparent black fringes.
    # Store straight alpha because that is the game's texture/blend contract.
    return image.convert("RGBa").resize(size, resample).convert("RGBA")


def bleed_alpha(image):
    """Fill invisible edge colors, without changing alpha or visible pixels."""
    a = np.array(image, dtype=np.uint8)
    valid = a[:, :, 3] > 0
    for _ in range(4):
        if valid.all():
            break
        rgb_sum = np.zeros_like(a[:, :, :3], dtype=np.uint32)
        count = np.zeros(valid.shape, dtype=np.uint16)
        for dy, dx in ((-1, 0), (1, 0), (0, -1), (0, 1)):
            src_y = slice(max(0, dy), min(a.shape[0], a.shape[0] + dy))
            src_x = slice(max(0, dx), min(a.shape[1], a.shape[1] + dx))
            dst_y = slice(max(0, -dy), min(a.shape[0], a.shape[0] - dy))
            dst_x = slice(max(0, -dx), min(a.shape[1], a.shape[1] - dx))
            v = valid[src_y, src_x]
            rgb_sum[dst_y, dst_x] += a[src_y, src_x, :3].astype(np.uint32) * v[:, :, None]
            count[dst_y, dst_x] += v
        fill = ~valid & (count > 0)
        a[fill, :3] = (rgb_sum[fill] // count[fill, None]).astype(np.uint8)
        valid |= fill
    return Image.fromarray(a)


def levels(image):
    current = image.convert("RGBA")
    while True:
        yield bleed_alpha(current)
        if current.size == (1, 1):
            break
        current = resize_rgba(current, (max(1, current.width // 2), max(1, current.height // 2)), Image.Resampling.BOX)


def write_texture(path, source_hash, image):
    if image.width > 4096 or image.height > 4096:
        raise ValueError("maximum texture dimension is 4096")
    n = max(image.size).bit_length()
    alpha = image.getchannel("A").getextrema()[0] < 255
    temp = Path(str(path) + ".tmp")
    with temp.open("wb") as f:
        f.write(struct.pack("<8sIIIIQ", MAGIC, image.width, image.height, n, int(alpha), source_hash))
        for mip in levels(image):
            f.write(mip.tobytes())
    temp.replace(path)


def quantize(image, masks):
    arr = np.array(image, dtype=np.uint32)
    for c, mask in enumerate(masks):
        bits = bin(int(mask)).count("1")
        if not bits:
            if c == 3:
                arr[:, :, c] = 255
            continue
        maximum = (1 << bits) - 1
        arr[:, :, c] = ((arr[:, :, c] * (maximum + 1)) >> 8) * 255 // maximum
    return arr.astype(np.uint8)


def source_library(directory):
    if not directory:
        return []
    return [(p, Image.open(p).convert("RGBA")) for p in sorted(Path(directory).iterdir()) if p.suffix.lower() == ".png"]


def restore_source(capture, masks, library, cache=None):
    """Only replace when quantization explains essentially every visible texel.

    Matching is against pixels, never texture handle or level number. A PNG
    with merely similar colors cannot accidentally replace a unit or terrain.
    """
    captured = np.array(capture, dtype=np.int16)
    best = None
    if cache is None:
        cache = {}
    for path, image in library:
        if image.width < capture.width or image.height < capture.height:
            continue
        filters = (None,) if image.size == capture.size else (Image.Resampling.BOX, Image.Resampling.BILINEAR, Image.Resampling.NEAREST)
        for resample in filters:
            key = (str(path), capture.size, tuple(masks), resample)
            if key not in cache:
                sample = image if resample is None else resize_rgba(image, capture.size, resample)
                cache[key] = quantize(sample, masks).astype(np.int16)
            expected = cache[key]
            diff = np.abs(expected - captured)
            visible = captured[:, :, 3] > 0
            if not visible.any():
                continue
            error = float(diff[:, :, :3][visible].mean())
            alpha_error = float(diff[:, :, 3].mean())
            # At most one 565/4444 quantization step, with under one RGB
            # code of average error. This also recognizes the game's reduced
            # 16x16 sky copy while recovering the original 128/512 PNG.
            if error <= 1.0 and alpha_error <= 1.0 and int(diff.max()) <= 17:
                score = error + alpha_error
                if best is None or score < best[0]:
                    best = (score, path, image)
    return (best[1], best[2]) if best else (None, capture)


def target_size(image, source_path, scale):
    largest = max(image.size)
    # Full sky gradients cover the whole display. Clouds need fewer texels;
    # sprites and small terrain tiles stay proportional, rather than each
    # occupying a 64 MiB allocation.
    if source_path and source_path.name.lower().startswith("dsky"):
        target = 4096 if source_path.stem.lower().endswith("b") else 1024
    else:
        target = min(1024, largest * scale)
    factor = max(1, target // largest)
    return image.width * factor, image.height * factor


def build(args):
    source = Path(args.capture)
    output = Path(args.output)
    output.mkdir(parents=True, exist_ok=True)
    library = source_library(args.original)
    metadata = {}
    for line in (source / "textures.tsv").read_text().splitlines():
        fields = line.split("\t")
        metadata[fields[0]] = [int(x) for x in fields[1:]]
    records = []
    cache = {}
    for i, path in enumerate(sorted(source.glob("*.pam"))):
        capture = read_capture(path)
        if max(capture.size) >= 1024:
            continue  # Dynamic minimap atlas; no useful enlargement.
        info = metadata.get(path.name)
        masks = info[4:8] if info else [0xf800, 0x07e0, 0x001f, 0]
        origin, image = restore_source(capture, masks, library, cache)
        size = target_size(image, origin, args.scale)
        if not origin and size == capture.size:
            continue  # No visual change; do not duplicate a dynamic atlas.
        expanded = resize_rgba(image, size)
        key = int(path.stem, 16)
        dest = output / (path.stem + ".popt")
        # Atlas layouts, tribe colors, and transparency are unchanged. This
        # faithful enlargement is a baseline, not newly painted 4K detail.
        write_texture(dest, key, expanded)
        records.append(dict(hash=path.stem, original_size=list(capture.size), size=list(size),
                            kind="restored-full-color" if origin else "enlarged-original",
                            source=str(origin) if origin else str(path), bytes=dest.stat().st_size,
                            sha256=hashlib.sha256(dest.read_bytes()).hexdigest()))
        if (i + 1) % 100 == 0:
            print(f"built {i + 1} textures", flush=True)
    # Preload restored sky first, then the most costly textures. The runtime
    # stops at 75% of its budget; it never grows without bound to honor a list.
    priority = sorted(records, key=lambda r: (r["kind"] == "restored-full-color", r["bytes"]), reverse=True)
    (output / "preload.txt").write_text("".join(r["hash"] + "\n" for r in priority))
    manifest = dict(version=1, max_dimension=4096, rgba8=True, generator="texture_pack.py",
                    note="Original art enlarged offline; matching PNGs restore pre-RGB565 colors. No invented detail.",
                    textures=records)
    # Rebuilding captured replacements must not disconnect independently
    # compiled material detail from the packaged manifest.
    old_manifest = output / "manifest.json"
    if old_manifest.exists():
        detail = json.loads(old_manifest.read_text()).get("terrain_detail")
        if detail:
            manifest["terrain_detail"] = detail
    (output / "manifest.json").write_text(json.dumps(manifest, indent=2) + "\n")
    print(json.dumps(dict(textures=len(records), restored=sum(r["kind"] == "restored-full-color" for r in records),
                          bytes=sum(r["bytes"] for r in records), output=str(output)), indent=2))


def import_texture(args):
    capture = read_capture(args.reference)
    image = Image.open(args.image).convert("RGBA")
    if capture.width * image.height != capture.height * image.width:
        raise ValueError("replacement must preserve the reference aspect ratio and atlas layout")
    output = Path(args.output)
    output.mkdir(parents=True, exist_ok=True)
    key = int(Path(args.reference).stem, 16)
    path = output / f"{key:016x}.popt"
    write_texture(path, key, image)
    manifest_path = output / "manifest.json"
    manifest = json.loads(manifest_path.read_text()) if manifest_path.exists() else dict(version=1, rgba8=True, textures=[])
    record = dict(hash=f"{key:016x}", original_size=list(capture.size), size=list(image.size),
                  kind="artist-replacement", source=str(Path(args.image)), bytes=path.stat().st_size,
                  sha256=hashlib.sha256(path.read_bytes()).hexdigest())
    manifest["textures"] = [r for r in manifest["textures"] if r["hash"] != record["hash"]] + [record]
    manifest_path.write_text(json.dumps(manifest, indent=2) + "\n")
    preload = output / "preload.txt"
    previous = preload.read_text().splitlines() if preload.exists() else []
    preload.write_text("\n".join(dict.fromkeys([record["hash"], *previous])) + "\n")
    print(path)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest="command", required=True)
    p = sub.add_parser("build")
    p.add_argument("--capture", required=True)
    p.add_argument("--original")
    p.add_argument("--output", required=True)
    p.add_argument("--scale", type=int, choices=(2, 4, 8), default=4)
    p.set_defaults(run=build)
    p = sub.add_parser("import")
    p.add_argument("--reference", required=True)
    p.add_argument("--image", required=True)
    p.add_argument("--output", required=True)
    p.set_defaults(run=import_texture)
    args = parser.parse_args()
    args.run(args)


if __name__ == "__main__":
    main()
