import importlib.util
import struct
import tempfile
import unittest
from pathlib import Path

import numpy as np
from PIL import Image

spec = importlib.util.spec_from_file_location('terrain_detail', Path(__file__).parents[1]/'terrain_detail.py')
p = importlib.util.module_from_spec(spec)
spec.loader.exec_module(p)


class TerrainDetailTests(unittest.TestCase):
    def test_material_retains_structure_without_tile_seams_or_color_shift(self):
        a = np.random.default_rng(19).integers(0, 255, (128, 128), dtype=np.uint8)
        channel = p.material_channel(Image.fromarray(a), 128)
        np.testing.assert_array_equal(channel[0], channel[-1])
        np.testing.assert_array_equal(channel[:, 0], channel[:, -1])
        self.assertLess(abs(float(channel.mean())-128), 1)
        self.assertGreater(float(channel.std()), 30)
        flat = p.material_channel(Image.new('L', (128, 128), 53), 128)
        self.assertTrue((flat == 128).all())

    def test_soil_alpha_cannot_premultiply_other_materials(self):
        a = np.empty((128, 128, 4), np.uint8)
        a[:] = [30, 80, 190, 0]
        a[::2, :, 3] = 255
        mips = list(p.mip_chain(a))
        for level in mips[1:-1]:
            np.testing.assert_array_equal(level[0, 0, :3], [30, 80, 190])
        self.assertEqual(mips[-1].tolist(), [[[128, 128, 128, 128]]])

    def test_named_data_texture_is_bounded_and_fully_mipmapped(self):
        with tempfile.TemporaryDirectory() as d:
            source = Path(d)/'atlas.png'
            Image.new('RGB', (256, 256), (19, 73, 141)).save(source)
            p.build(source, Path(d)/'pack', 128)
            raw = (Path(d)/'pack/terrain-detail.popt').read_bytes()
            self.assertEqual(struct.unpack('<8sIIIIQ', raw[:32]), (b'POPRGBA1', 128, 128, 8, 0, 0))
            self.assertEqual(len(raw), 32 + sum((128 >> i)**2*4 for i in range(8)))
            self.assertEqual(raw[-4:], bytes([128]*4))
