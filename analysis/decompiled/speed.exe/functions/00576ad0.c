/* speed.exe 00576ad0 FUN_00576ad0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00576ad0(uint param_1)

{
  bool bVar1;
  
  if (param_1 < 0x54655134) {
    if (param_1 == 0x54655133) {
      return 1;
    }
    if (param_1 < 0x3d8a6d2) {
      if (param_1 == 0x3d8a6d1) {
        return 1;
      }
      if (param_1 == 0x2d642b8) {
        return 1;
      }
      bVar1 = param_1 == 0x3d3401a;
    }
    else {
      if (param_1 == 0x363a1fea) {
        return 1;
      }
      bVar1 = param_1 == 0x54653c71;
    }
  }
  else if (param_1 < 0xe1075863) {
    if (param_1 == 0xe1075862) {
      return 1;
    }
    if (param_1 == 0x582f21d9) {
      return 1;
    }
    bVar1 = param_1 == 0x634d1bd2;
  }
  else {
    bVar1 = param_1 == 0xe115ead0;
  }
  if (bVar1) {
    return 1;
  }
  return 0;
}

