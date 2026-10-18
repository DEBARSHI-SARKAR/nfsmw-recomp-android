/* speed.exe 00808c12 FUN_00808c12; analysis pseudocode, not buildable source.
 * calls 00801332 FUN_00801332
 * calls 00806f24 FUN_00806f24
 * calls 00806f9d FUN_00806f9d
 */

int FUN_00808c12(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  param_1 = param_1 + 0x150;
  iVar2 = FUN_00806f24(param_1,0xcd);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_00806f9d(param_1);
    iVar3 = iVar3 * -2 + 1;
    iVar2 = FUN_00806f24(param_1,0xab);
    if (iVar2 == 0) {
      cVar1 = FUN_00806f24(param_1,0x53);
      iVar3 = iVar3 << (3U - cVar1 & 0x1f);
    }
    else {
      iVar2 = FUN_00806f24(param_1,199);
      if (iVar2 == 0) {
        iVar2 = FUN_00806f24(param_1,0x8c);
        if (iVar2 == 0) {
          iVar2 = FUN_00806f24(param_1,0x7d);
          if (iVar2 != 0) {
            return iVar3 * 0x10;
          }
          iVar2 = FUN_00806f24(param_1,0x68);
          if (iVar2 == 0) {
            return iVar3 * 0x18;
          }
          iVar3 = iVar3 * 5;
        }
        else {
          iVar3 = iVar3 * 3;
        }
      }
      else {
        iVar2 = FUN_00801332(param_1,7);
        iVar3 = iVar2 * iVar3;
      }
      iVar3 = iVar3 << 2;
    }
  }
  return iVar3;
}

