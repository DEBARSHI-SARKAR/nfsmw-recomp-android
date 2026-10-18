/* speed.exe 004d9960 FUN_004d9960; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004d9960(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xec);
  if ((uVar1 & 0x400) != 0) {
    return 10;
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 0x10) == 0) {
      if ((((uVar1 & 2) == 0) || ((uVar1 & 4) == 0)) ||
         (uVar2 = 4, (float)*(int *)(param_1 + 0xd4) <= _DAT_00890fc8)) {
        uVar2 = 3;
      }
      return uVar2;
    }
    if ((uVar1 & 0xc) == 0) {
      if (((uVar1 & 2) == 0) || ((float)*(int *)(param_1 + 0xd4) <= _DAT_00890fc8)) {
        return 4;
      }
    }
    else if (_DAT_00890fc8 < (float)*(int *)(param_1 + 0xd4)) {
      return 6;
    }
    return 5;
  }
  if ((uVar1 & 0xc) != 0) {
    if ((float)*(int *)(param_1 + 0xd4) <= _DAT_00890fc8) {
      return 8;
    }
    return 9;
  }
  if (((uVar1 & 2) != 0) && ((float)*(int *)(param_1 + 0xd4) <= _DAT_00890fc8)) {
    return 6;
  }
  return 7;
}

