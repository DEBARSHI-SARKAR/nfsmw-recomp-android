# A minimal TrueType font for the kit's text tests: family "RecompTest", 1000
# units per em, ascender 800, descender -200. 'A' is a 400x700 box with a 600
# advance and 'B' an 800x700 box with a 1000 advance; every other character
# maps to an empty .notdef with a 500 advance.
import struct, sys
def box(x0, y0, x1, y1):
    flags = bytes([1, 1, 1, 1])
    xs = [x0, x1 - x0, 0, x0 - x1]
    ys = [y0, 0, y1 - y0, 0]
    return (struct.pack('>hhhhh', 1, x0, y0, x1, y1) + struct.pack('>HH', 3, 0) + flags +
            b''.join(struct.pack('>h', v) for v in xs) + b''.join(struct.pack('>h', v) for v in ys))
glyphs = [b'', box(100, 0, 500, 700), box(100, 0, 900, 700)]
advances = [500, 600, 1000]
glyf, loca = b'', [0]
for g in glyphs:
    g += b'\0' * (-len(g) % 4)
    glyf += g
    loca.append(len(glyf))
tables = {
    b'head': struct.pack('>IIIIHHQQhhhhHHhhh', 0x00010000, 0x00010000, 0, 0x5F0F3CF5, 0, 1000, 0, 0,
                         0, 0, 900, 700, 0, 8, 2, 1, 0),
    b'hhea': struct.pack('>IhhhHhhhhhh4hhH', 0x00010000, 800, -200, 0, 1000, 100, 100, 900, 1, 0, 0,
                         0, 0, 0, 0, 0, 3),
    b'maxp': struct.pack('>IH', 0x00005000, 3),
    b'hmtx': b''.join(struct.pack('>Hh', a, 100) for a in advances),
    b'loca': b''.join(struct.pack('>I', o) for o in loca),
    b'glyf': glyf,
}
seg_end, seg_start, seg_delta = [0x42, 0xFFFF], [0x41, 0xFFFF], [(1 - 0x41) & 0xFFFF, 1]
sub = struct.pack('>HHHHHHH', 4, 16 + 8 * 2, 0, 4, 4, 1, 0)
sub += b''.join(struct.pack('>H', v) for v in seg_end) + b'\0\0'
sub += b''.join(struct.pack('>H', v) for v in seg_start)
sub += b''.join(struct.pack('>H', v) for v in seg_delta) + b'\0\0\0\0'
tables[b'cmap'] = struct.pack('>HHHHI', 0, 1, 3, 1, 12) + sub
family = 'RecompTest'.encode('utf-16-be')
tables[b'name'] = struct.pack('>HHH', 0, 1, 18) + struct.pack('>HHHHHH', 3, 1, 0x409, 1, len(family), 0) + family
tags = sorted(tables)
out = struct.pack('>IHHHH', 0x00010000, len(tags), 8 * 4, 3, 16 * len(tags) - 32)
offset = 12 + 16 * len(tags)
body = b''
for t in tags:
    data = tables[t]
    out += t + struct.pack('>III', 0, offset + len(body), len(data))
    body += data + b'\0' * (-len(data) % 4)
font = out + body
open(sys.argv[1], 'wb').write(font)
