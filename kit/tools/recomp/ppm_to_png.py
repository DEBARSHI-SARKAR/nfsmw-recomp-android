#!/usr/bin/env python3
# tools/recomp/ppm_to_png.py IN.ppm OUT.png
#
# The headless hosts write binary PPM because it needs no library to write and
# none to read. A person looking at one wants a PNG, and every viewer reads
# those, so this converts. No dependencies: zlib and a CRC are the whole of PNG.
import struct, sys, zlib

def main(src, dst):
    data = open(src, 'rb').read()
    if not data.startswith(b'P6'):
        raise SystemExit('%s is not a binary PPM' % src)
    parts = data.split(b'\n', 3)
    w, h = (int(v) for v in parts[1].split())
    pixels = parts[3]
    # PNG wants a filter byte at the start of every row.
    raw = b''.join(b'\x00' + pixels[y * w * 3:(y + 1) * w * 3] for y in range(h))

    def chunk(tag, body):
        return (struct.pack('>I', len(body)) + tag + body +
                struct.pack('>I', zlib.crc32(tag + body) & 0xffffffff))

    png = (b'\x89PNG\r\n\x1a\n'
           + chunk(b'IHDR', struct.pack('>IIBBBBB', w, h, 8, 2, 0, 0, 0))
           + chunk(b'IDAT', zlib.compress(raw, 9))
           + chunk(b'IEND', b''))
    open(dst, 'wb').write(png)
    print('%s -> %s (%dx%d)' % (src, dst, w, h))

if __name__ == '__main__':
    if len(sys.argv) != 3:
        raise SystemExit('usage: ppm_to_png.py IN.ppm OUT.png')
    main(sys.argv[1], sys.argv[2])
