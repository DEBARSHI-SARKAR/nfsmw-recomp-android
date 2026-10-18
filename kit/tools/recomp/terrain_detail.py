#!/usr/bin/env python3
"""Compile four authored material quadrants into one mipmapped detail texture.

R=grass, G=sand, B=stone, A=soil. Alpha is data, never transparency.
Only zero-mean material structure is stored; the game supplies color/lighting.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path

import numpy as np
from PIL import Image


def join_edges(a):
    a = a.copy()
    a[:, 0] = a[:, -1] = (a[:, 0] + a[:, -1]) * .5
    a[0, :] = a[-1, :] = (a[0, :] + a[-1, :]) * .5
    return a


def material_channel(image, size):
    a = np.asarray(image.convert('L').resize((size, size), Image.Resampling.LANCZOS), dtype=np.float64)
    # Remove the smooth boundary mismatch through a periodic Poisson solve.
    # Fine structures are retained, rather than mirroring whole grass/rocks.
    v = np.zeros_like(a)
    v[0, :] = a[-1, :] - a[0, :]
    v[-1, :] = -v[0, :]
    v[:, 0] += a[:, -1] - a[:, 0]
    v[:, -1] -= a[:, -1] - a[:, 0]
    freq = np.fft.fftfreq(size)
    denominator = 2*np.cos(2*np.pi*freq[:, None]) + 2*np.cos(2*np.pi*freq[None, :]) - 4
    denominator[0, 0] = 1
    smooth = np.fft.fft2(v) / denominator
    smooth[0, 0] = 0
    a -= np.fft.ifft2(smooth).real
    # Remove broad albedo/shading patches. This layer must not repaint the
    # coastline, baked lighting, fog or any campaign's original palette.
    spectrum = np.fft.fft2(a)
    blur = np.exp(-2*np.pi**2 * (size/64)**2 * (freq[:, None]**2 + freq[None, :]**2))
    a -= np.fft.ifft2(spectrum * blur).real
    a = join_edges(a)
    a -= a.mean()
    if a.std() > 1e-6:
        a *= 36 / a.std()
    return np.clip(np.rint(a+128), 0, 255).astype(np.uint8)


def mip_chain(channels):
    current = channels
    while True:
        yield current
        if current.shape[0] == 1:
            break
        size = current.shape[0] // 2
        # Four independent data channels: premultiplied alpha filtering here
        # would corrupt grass/sand/stone according to the soil channel.
        reduced = [np.asarray(Image.fromarray(current[:, :, i]).resize((size, size), Image.Resampling.BOX), dtype=np.float64) for i in range(4)]
        current = np.stack([np.clip(np.rint(join_edges(c)), 0, 255).astype(np.uint8) for c in reduced], axis=2)
        if size == 1:
            current[:] = 128  # no modulation beyond the material's footprint


def build(source, output, size=1024):
    image = Image.open(source).convert('RGB')
    if image.width != image.height or image.width % 2:
        raise ValueError('expected a square atlas with four equal quadrants')
    if size not in (128, 256, 512, 1024, 2048):
        raise ValueError('unsupported material dimension')
    half = image.width // 2
    channels = np.stack([material_channel(image.crop((x*half, y*half, (x+1)*half, (y+1)*half)), size)
                         for y in range(2) for x in range(2)], axis=2)
    output = Path(output)
    output.mkdir(parents=True, exist_ok=True)
    dest = output/'terrain-detail.popt'
    with dest.open('wb') as f:
        # Hash zero is reserved for the named detail resource, never matched
        # against a guest upload. Flag zero: these channels are opaque data.
        f.write(struct.pack('<8sIIIIQ', b'POPRGBA1', size, size, size.bit_length(), 0, 0))
        for mip in mip_chain(channels):
            f.write(mip.tobytes())
    manifest_path = output/'manifest.json'
    manifest = json.loads(manifest_path.read_text()) if manifest_path.exists() else dict(version=1, rgba8=True, textures=[])
    manifest['terrain_detail'] = dict(file=dest.name, channels=['grass', 'sand', 'stone', 'soil'], size=[size, size],
                                     kind='authored-material-detail', source=str(source),
                                     source_sha256=hashlib.sha256(Path(source).read_bytes()).hexdigest(),
                                     bytes=dest.stat().st_size, sha256=hashlib.sha256(dest.read_bytes()).hexdigest())
    manifest_path.write_text(json.dumps(manifest, indent=2)+'\n')
    if not (output/'preload.txt').exists():
        (output/'preload.txt').write_text('')
    print(json.dumps(manifest['terrain_detail'], indent=2))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source', required=True)
    parser.add_argument('--output', required=True)
    parser.add_argument('--size', type=int, default=1024)
    args = parser.parse_args()
    build(Path(args.source), Path(args.output), args.size)
