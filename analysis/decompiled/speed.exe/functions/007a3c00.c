/* speed.exe 007a3c00 FUN_007a3c00; analysis pseudocode, not buildable source.
 */

undefined4 FUN_007a3c00(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0x2cf370f1) {
    if (uVar1 == 0x2cf370f0) {
      return 0xbd8bac94;
    }
    if (uVar1 < 0x136254) {
      if ((0x13624d < uVar1) || ((0x965e < uVar1 && (uVar1 < 0x9667)))) {
        return 0x4ef2a115;
      }
    }
    else if (uVar1 == 0x3a94520) {
      return 0xbd8bac93;
    }
  }
  else {
    if (uVar1 == 0x2cf385b2) {
      return 0xbd8bac92;
    }
    if (uVar1 == 0xcb6aaf2f) {
      return 0xbd8bac91;
    }
  }
  return 0;
}

