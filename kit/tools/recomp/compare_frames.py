#!/usr/bin/env python3
"""Compare two binary PPM (P6) frames of the same size: the mean absolute
channel difference must be under --mean, and at most --outliers percent of
the pixels may have a channel differing by more than --max (two rasterisers
disagree about edge pixels, which then differ by a whole colour). Exit 1 when
either bound is exceeded."""
import argparse
import sys
from pathlib import Path


def load_ppm(path):
    data = Path(path).read_bytes()
    fields, pos = [], 0
    while len(fields) < 4:
        while data[pos:pos + 1].isspace():
            pos += 1
        if data[pos:pos + 1] == b"#":
            pos = data.index(b"\n", pos) + 1
            continue
        end = pos
        while not data[end:end + 1].isspace():
            end += 1
        fields.append(data[pos:end])
        pos = end
    if fields[0] != b"P6":
        raise SystemExit(f"{path}: not a binary PPM")
    w, h = int(fields[1]), int(fields[2])
    return w, h, data[pos + 1:pos + 1 + w * h * 3]


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("a")
    ap.add_argument("b")
    ap.add_argument("--mean", type=float, default=2.0)
    ap.add_argument("--max", type=int, default=24)
    ap.add_argument("--outliers", type=float, default=1.0, help="percent of pixels allowed over --max")
    args = ap.parse_args()
    wa, ha, pa = load_ppm(args.a)
    wb, hb, pb = load_ppm(args.b)
    if (wa, ha) != (wb, hb):
        print(f"size mismatch {wa}x{ha} vs {wb}x{hb}")
        return 1
    total, worst, over = 0, 0, 0
    for i in range(0, len(pa), 3):
        d = max(abs(pa[i] - pb[i]), abs(pa[i + 1] - pb[i + 1]), abs(pa[i + 2] - pb[i + 2]))
        total += abs(pa[i] - pb[i]) + abs(pa[i + 1] - pb[i + 1]) + abs(pa[i + 2] - pb[i + 2])
        if d > worst:
            worst = d
        if d > args.max:
            over += 1
    pixels = max(1, wa * ha)
    mean = total / max(1, len(pa))
    outliers = 100.0 * over / pixels
    print(f"mean {mean:.3f} max {worst} outliers {outliers:.2f}% (> {args.max}) over {wa}x{ha}")
    return 0 if mean < args.mean and outliers <= args.outliers else 1


if __name__ == "__main__":
    sys.exit(main())
