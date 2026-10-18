/* speed.exe 004afed0 FUN_004afed0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_004afed0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < 0x3e275e33) {
    if (uVar1 == 0x3e275e32) {
      return 4;
    }
    if (uVar1 < 0x32cce9f6) {
      if (uVar1 == 0x32cce9f5) {
        return 0x20;
      }
      if (uVar1 == 0x47645fb) {
        return 0x400;
      }
      if (uVar1 == 0x15562639) {
        return 0x100;
      }
    }
    else if (uVar1 == 0x336fcacf) {
      return 0x10;
    }
  }
  else if (uVar1 < 0xd5add1ab) {
    if (uVar1 == 0xd5add1aa) {
      return 0x80;
    }
    if (uVar1 == 0x57f6e227) {
      return 2;
    }
    if (uVar1 == 0x8fe44dfe) {
      return 0x40;
    }
  }
  else if (uVar1 == 0xfdc476a6) {
    return 8;
  }
  return 0;
}

