"""Need for Speed: Most Wanted's game.toml renders the values the kit's hooks expect."""
import importlib.util
from pathlib import Path
import unittest

ROOT = Path(__file__).resolve().parents[1]
KIT = ROOT / "kit"

# The zero-filled section padding after .rsrc in the pinned speed.exe: mapped,
# never referenced by the game. Every unidentified hook and global lives here.
SENTINEL_LOW, SENTINEL_HIGH = 0x00A37700, 0x00A38000


def load_module(name):
    spec = importlib.util.spec_from_file_location(name, KIT / "tools" / (name + ".py"))
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


game_config = load_module("game_config")
gen_game_config = load_module("gen_game_config")


class NfsmwConfigTests(unittest.TestCase):
    def setUp(self):
        self.cfg = game_config.load(ROOT)
        self.header = gen_game_config.render_header(self.cfg)

    def test_identity(self):
        self.assertEqual(self.cfg["game"]["id"], "nfsmw")
        self.assertEqual(self.cfg["game"]["executable"], "speed.exe")
        self.assertEqual(self.cfg["game"]["sha256"],
                         "80774c2e5d619b4f120b48d4462896fd504c263399d203a238769cffde1d253c")
        self.assertEqual(self.cfg["game"]["entry_point"], 0x007C4040)
        self.assertEqual(self.cfg["game"]["image_base"], 0x00400000)
        self.assertIn('#define RECOMP_APP_NAME "SpeedRecomp"', self.header)
        self.assertIn('#define RECOMP_GUEST_ROOT "C:\\\\Program Files\\\\EA GAMES\\\\Need for Speed Most Wanted"',
                      self.header)
        self.assertEqual(self.cfg["developer_exe_path"], (ROOT / "original/retail/speed.exe").resolve())
        self.assertEqual(self.cfg["listings_path"], (ROOT / "analysis/decompiled/speed.exe").resolve())

    def test_every_kit_macro_is_rendered(self):
        for macro in ("RECOMP_HOOK_FRAME_CLOCK_BEGIN", "RECOMP_HOOK_FRAME_CLOCK_WAIT",
                      "RECOMP_HOOK_FRAME_CLOCK_WAIT_CLAMP", "RECOMP_HOOK_FRAME_CLOCK_CLAMP_DEADLINE",
                      "RECOMP_HOOK_FRAME_CLOCK_WAIT_DEADLINE", "RECOMP_HOOK_CURSOR_SURFACE_PTRS_COUNT 2",
                      "RECOMP_HOOK_MOUSE_VTABLE", "RECOMP_HOOK_MOUSE_DEVICE_PTR", "RECOMP_HOOK_MOUSE_DEVICE_RIGHT",
                      "RECOMP_HOOK_CAMERA", "RECOMP_GLOBAL_SIMULATION_TURN_ADDR", "RECOMP_GLOBAL_COMMAND_FRAME_ADDR",
                      "RECOMP_GLOBAL_ENTITY_BASE_ADDR", "RECOMP_GLOBAL_ENTITY_BASE_STRIDE",
                      "RECOMP_GLOBAL_ENTITY_BASE_COUNT"):
            self.assertIn("#define " + macro, self.header)

    def test_unidentified_addresses_stay_in_the_sentinel_padding(self):
        """Until a hook is found, it must point where the game never looks."""
        addresses = [self.cfg["translate"]["animation_counter"]]
        for value in self.cfg["hooks"].values():
            addresses += value if isinstance(value, list) else [value]
        addresses += [entry["addr"] for entry in self.cfg["globals"].values()]
        for address in addresses:
            self.assertTrue(SENTINEL_LOW <= address < SENTINEL_HIGH, hex(address))
        self.assertEqual(self.cfg["translate"]["volatile_reads"], [])

    def test_bundle_exclusions_and_setup(self):
        # What the iPad bundle leaves behind: the uninstaller, the installer
        # helpers, and the Windows-only DLLs a device cannot load anyway.
        for pattern in ("Uninstall", "scripts", "*.dll"):
            self.assertIn(pattern, self.cfg["bundle"]["exclude"])
        # And what it keeps. The cinematics are 856 MB and the temptation is
        # to drop them, but the game decodes its own VP6 and plays them on the
        # device, so excluding them would take the intro and the outro with
        # them. This asserted the opposite until the cinematics worked.
        self.assertNotIn("MOVIES", self.cfg["bundle"]["exclude"])
        self.assertEqual(self.cfg["setup"]["required_dirs"], ["CARS", "FRONTEND", "GLOBAL", "SOUND", "TRACKS"])
        self.assertNotIn("annotations_url", self.cfg["setup"])


if __name__ == "__main__":
    unittest.main()
