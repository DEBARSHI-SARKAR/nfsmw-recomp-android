/* speed.exe 0078b8c0 FUN_0078b8c0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0078b8c0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_2 == 0) {
    if ((0 < param_1) && (param_1 < 5)) {
      return 5;
    }
    if ((4 < param_1) && (param_1 < 9)) {
      return 6;
    }
    if ((8 < param_1) && (param_1 < 0xe)) {
      return 7;
    }
    if ((0xd < param_1) && (param_1 < 0x12)) {
      return 0xb;
    }
    if ((0x11 < param_1) && (param_1 < 0x16)) {
      return 0xc;
    }
    if ((0x15 < param_1) && (param_1 < 0x1b)) {
      return 0xd;
    }
  }
  else {
    if (param_2 == 1) {
      if ((0 < param_1) && (param_1 < 5)) {
        return 8;
      }
      if ((4 < param_1) && (param_1 < 9)) {
        return 9;
      }
      if ((8 < param_1) && (param_1 < 0xe)) {
        return 10;
      }
      if ((0xd < param_1) && (param_1 < 0x12)) {
        return 0xe;
      }
      if ((0x11 < param_1) && (param_1 < 0x16)) {
        return 0xf;
      }
      if ((0x15 < param_1) && (param_1 < 0x1b)) {
        return 0x10;
      }
      if ((0x1a < param_1) && (param_1 < 0x1f)) {
        return 0x14;
      }
      if ((0x1e < param_1) && (param_1 < 0x23)) {
        return 0x15;
      }
      if (param_1 < 0x23) {
        return 0xffffffff;
      }
      if (0x27 < param_1) {
        return 0xffffffff;
      }
      return 0x16;
    }
    if (param_2 == 2) {
      if ((0xd < param_1) && (param_1 < 0x12)) {
        return 0xb;
      }
      if ((0x11 < param_1) && (param_1 < 0x16)) {
        return 0xc;
      }
      if (param_1 < 0x16) {
        return 0xffffffff;
      }
      if (0x1a < param_1) {
        return 0xffffffff;
      }
      return 0xd;
    }
    if (param_2 != 4) {
      return 0xffffffff;
    }
  }
  if ((0x1a < param_1) && (param_1 < 0x1f)) {
    return 0x11;
  }
  if ((0x1e < param_1) && (param_1 < 0x23)) {
    return 0x12;
  }
  if ((0x22 < param_1) && (param_1 < 0x28)) {
    uVar1 = 0x13;
  }
  return uVar1;
}

