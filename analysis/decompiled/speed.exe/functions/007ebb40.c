/* speed.exe 007ebb40 FUN_007ebb40; analysis pseudocode, not buildable source.
 * calls 007ebab0 FUN_007ebab0
 * calls 007e8ca0 FUN_007e8ca0
 */

uint __fastcall FUN_007ebb40(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (param_1 == 0) {
      return uVar3;
    }
    iVar1 = FUN_007e8ca0();
    if (iVar1 < 0x11) {
      if (iVar1 == 0x10) {
        if (iVar2 != 0) {
          uVar3 = uVar3 + 0xf & 0xfffffff0;
        }
        uVar3 = uVar3 + 0x20 + *(int *)(param_1 + 0xc);
      }
      else if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (iVar2 != 0) {
            uVar3 = (uVar3 + 0x7f & 0xffffff80) - 0x20;
          }
          uVar3 = uVar3 + 0x20 + *(int *)(param_1 + 0xc);
        }
        else {
          if (iVar1 != 4) {
            return 0;
          }
          if (iVar2 != 0) {
            uVar3 = uVar3 + 0xf & 0xfffffff0;
          }
          uVar3 = uVar3 + 0x20 + *(int *)(param_1 + 0xc);
        }
      }
    }
    else if (iVar1 == 0x20) {
      if (iVar2 != 0) {
        uVar3 = (uVar3 - 1 & 0xfffffff0) + 0x10;
      }
      uVar3 = uVar3 + 0x10 + *(int *)(param_1 + 0xc);
    }
    else if (iVar1 == 0x80) {
      if (iVar2 != 0) {
        uVar3 = (uVar3 - 1 & 0xfffffff0) + 0x10;
      }
      uVar3 = uVar3 + 0x10 + *(int *)(param_1 + 0xc);
    }
    else {
      if (iVar1 != 0x100) {
        return 0;
      }
      if (iVar2 != 0) {
        uVar3 = uVar3 + 0xf & 0xfffffff0;
      }
      iVar2 = FUN_007ebab0();
      uVar3 = uVar3 + iVar2;
    }
    if (*(int *)(param_1 + 4) == 0) break;
    iVar2 = param_1;
    param_1 = param_1 + *(int *)(param_1 + 4);
  }
  return uVar3;
}

