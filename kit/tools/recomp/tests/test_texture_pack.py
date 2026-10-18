import importlib.util
import json
import struct
import tempfile
import unittest
from pathlib import Path
from types import SimpleNamespace

import numpy as np
from PIL import Image

spec = importlib.util.spec_from_file_location('texture_pack', Path(__file__).parents[1] / 'texture_pack.py')
p = importlib.util.module_from_spec(spec)
spec.loader.exec_module(p)


class TexturePackTests(unittest.TestCase):
    def test_rgba_and_complete_mips_survive_file(self):
        with tempfile.TemporaryDirectory() as d:
            path = Path(d) / 'a.popt'
            p.write_texture(path, 0x1234, Image.new('RGBA', (4, 2), (19, 73, 141, 211)))
            raw = path.read_bytes()
            self.assertEqual(struct.unpack('<8sIIIIQ', raw[:32]), (b'POPRGBA1', 4, 2, 3, 1, 0x1234))
            self.assertEqual(len(raw), 32 + (8 + 2 + 1) * 4)
            self.assertEqual(raw[32:36], bytes((19, 73, 141, 211)))

    def test_filtering_transparency_does_not_make_black_fringes(self):
        im = Image.new('RGBA', (2, 1), (0, 0, 0, 0))
        im.putpixel((0, 0), (255, 127, 63, 255))
        enlarged = p.resize_rgba(im, (16, 8))
        pixels = np.asarray(enlarged)
        visible = pixels[:, :, 3] >= 64
        self.assertTrue((pixels[:, :, 0][visible] >= 250).all())
        bled = np.asarray(p.bleed_alpha(im))
        self.assertEqual(tuple(bled[0, 1]), (255, 127, 63, 0))

    def test_recover_reduced_sky_only_when_pixels_match(self):
        source = Image.new('RGBA', (128, 128))
        a = np.zeros((128, 128, 4), np.uint8)
        a[:, :, 0] = np.arange(128)[None, :]
        a[:, :, 1] = 73
        a[:, :, 2] = 141
        a[:, :, 3] = 255
        source = Image.fromarray(a)
        masks = [0xf800, 0x7e0, 0x1f, 0]
        small = source.resize((16, 16), Image.Resampling.BOX)
        capture = Image.fromarray(p.quantize(small, masks))
        path = Path('DSky0-cb.PNG')
        origin, restored = p.restore_source(capture, masks, [(path, source)])
        self.assertEqual(origin, path)
        self.assertEqual(restored.size, (128, 128))
        self.assertEqual(p.target_size(restored, origin, 4), (4096, 4096))
        wrong = Image.new('RGBA', (16, 16), (199, 17, 31, 255))
        self.assertIsNone(p.restore_source(wrong, masks, [(path, source)])[0])

    def test_sprite_dimensions_remain_proportional_and_bounded(self):
        self.assertEqual(p.target_size(Image.new('RGBA', (32, 16)), None, 4), (128, 64))
        self.assertEqual(p.target_size(Image.new('RGBA', (1024, 1024)), None, 4), (1024, 1024))

    def test_capture_rejects_truncated_pixels(self):
        with tempfile.TemporaryDirectory() as d:
            path = Path(d) / 'bad.pam'
            path.write_bytes(b'P7\nWIDTH 4\nHEIGHT 4\nDEPTH 4\nMAXVAL 255\nENDHDR\n' + bytes(63))
            with self.assertRaises(ValueError):
                p.read_capture(path)

    def test_rebuilding_replacements_keeps_independent_terrain_detail(self):
        with tempfile.TemporaryDirectory() as d:
            source, output = Path(d)/'capture', Path(d)/'pack'
            source.mkdir(); output.mkdir()
            (source/'0000000000001234.pam').write_bytes(
                b'P7\nWIDTH 4\nHEIGHT 4\nDEPTH 4\nMAXVAL 255\nENDHDR\n' + bytes((19, 73, 141, 255))*16)
            (source/'textures.tsv').write_text('')
            detail = dict(file='terrain-detail.popt', sha256='independent-resource')
            (output/'manifest.json').write_text(json.dumps(dict(textures=[], terrain_detail=detail)))
            p.build(SimpleNamespace(capture=source, output=output, original=None, scale=4))
            rebuilt = json.loads((output/'manifest.json').read_text())
            self.assertEqual(rebuilt['terrain_detail'], detail)
            self.assertEqual(len(rebuilt['textures']), 1)


if __name__ == '__main__':
    unittest.main()
