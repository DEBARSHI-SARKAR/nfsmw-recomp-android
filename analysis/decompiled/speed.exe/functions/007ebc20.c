/* speed.exe 007ebc20 FUN_007ebc20; analysis pseudocode, not buildable source.
 * calls 007e9dd0 FUN_007e9dd0
 * calls 007e9d50 FUN_007e9d50
 * calls 007e9de0 FUN_007e9de0
 * calls 007ebab0 FUN_007ebab0
 * calls 007e9bf0 FUN_007e9bf0
 * calls 007e9e20 FUN_007e9e20
 * calls 007e8ca0 FUN_007e8ca0
 * calls 007e9e00 FUN_007e9e00
 */

uint __thiscall FUN_007ebc20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_2 + 4);
  uVar4 = 0;
  iVar2 = 0;
  for (; param_1 != 0; param_1 = param_1 + *(int *)(param_1 + 4)) {
    iVar1 = FUN_007e8ca0();
    if (iVar1 < 0x11) {
      if (iVar1 == 0x10) {
        if (((uVar3 & 0x10) == 0) || (param_3 != 2)) {
          if (iVar2 != 0) {
            uVar4 = uVar4 + 0xf & 0xfffffff0;
          }
          if (((uVar3 & 0x10) == 0) || (param_3 != 3)) {
            uVar4 = uVar4 + 0x20 + *(int *)(param_1 + 0xc);
            uVar3 = uVar3 & 0xffffffef;
          }
          else {
            iVar2 = FUN_007e9e20(param_2);
            uVar4 = uVar4 + iVar2;
            uVar3 = uVar3 & 0xffffffef;
          }
        }
        else {
          uVar3 = uVar3 & 0xffffffef;
        }
      }
      else if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (((uVar3 & 2) == 0) || (param_3 != 2)) {
            if (iVar2 != 0) {
              uVar4 = (uVar4 + 0x7f & 0xffffff80) - 0x20;
            }
            if (((uVar3 & 2) == 0) || (param_3 != 3)) {
              uVar4 = uVar4 + 0x20 + *(int *)(param_1 + 0xc);
              uVar3 = uVar3 & 0xfffffffd;
            }
            else {
              iVar2 = FUN_007e9bf0(param_2);
              uVar4 = uVar4 + iVar2;
              uVar3 = uVar3 & 0xfffffffd;
            }
          }
          else {
            uVar3 = uVar3 & 0xfffffffd;
          }
        }
        else {
          if (iVar1 != 4) {
            return 0;
          }
          if (((uVar3 & 4) == 0) || (param_3 != 2)) {
            if (iVar2 != 0) {
              uVar4 = uVar4 + 0xf & 0xfffffff0;
            }
            if (((uVar3 & 4) == 0) || (param_3 != 3)) {
              uVar4 = uVar4 + 0x20 + *(int *)(param_1 + 0xc);
              uVar3 = uVar3 & 0xfffffffb;
            }
            else {
              iVar2 = FUN_007e9d50(param_2);
              uVar4 = uVar4 + iVar2;
              uVar3 = uVar3 & 0xfffffffb;
            }
          }
          else {
            uVar3 = uVar3 & 0xfffffffb;
          }
        }
      }
    }
    else if (iVar1 == 0x20) {
      if (((uVar3 & 0x20) == 0) || (param_3 != 2)) {
        if (iVar2 != 0) {
          uVar4 = (uVar4 - 1 & 0xfffffff0) + 0x10;
        }
        if (((uVar3 & 0x20) == 0) || (param_3 != 3)) {
          uVar4 = uVar4 + 0x10 + *(int *)(param_1 + 0xc);
        }
        else {
          iVar2 = FUN_007e9de0(param_2);
          uVar4 = uVar4 + iVar2;
        }
      }
      uVar3 = uVar3 & 0xffffffdf;
    }
    else if (iVar1 == 0x80) {
      if (((uVar3 & 0x80) == 0) || (param_3 != 2)) {
        if (iVar2 != 0) {
          uVar4 = (uVar4 - 1 & 0xfffffff0) + 0x10;
        }
        if (((uVar3 & 0x80) == 0) || (param_3 != 3)) {
          uVar4 = uVar4 + 0x10 + *(int *)(param_1 + 0xc);
          uVar3 = uVar3 & 0xffffff7f;
        }
        else {
          iVar2 = FUN_007e9e00(param_2);
          uVar4 = uVar4 + iVar2;
          uVar3 = uVar3 & 0xffffff7f;
        }
      }
      else {
        uVar3 = uVar3 & 0xffffff7f;
      }
    }
    else {
      if (iVar1 != 0x100) {
        return 0;
      }
      if (((uVar3 & 0x100) == 0) || (param_3 != 2)) {
        if (iVar2 != 0) {
          uVar4 = uVar4 + 0xf & 0xfffffff0;
        }
        if (((uVar3 & 0x100) == 0) || (param_3 != 3)) {
          iVar2 = FUN_007ebab0();
          uVar4 = uVar4 + iVar2;
          uVar3 = uVar3 & 0xfffffeff;
        }
        else {
          iVar2 = FUN_007e9dd0(param_2);
          uVar4 = uVar4 + iVar2;
          uVar3 = uVar3 & 0xfffffeff;
        }
      }
      else {
        uVar3 = uVar3 & 0xfffffeff;
      }
    }
    if (*(int *)(param_1 + 4) == 0) break;
    iVar2 = param_1;
  }
  if ((param_3 == 3) || (param_3 == 1)) {
    if ((uVar3 & 2) != 0) {
      iVar2 = FUN_007e9bf0(param_2);
      uVar4 = iVar2 + -0x20 + (uVar4 + 0x7f & 0xffffff80);
    }
    if ((uVar3 & 4) != 0) {
      iVar2 = FUN_007e9d50(param_2);
      uVar4 = (uVar4 + 0xf & 0xfffffff0) + iVar2;
    }
    if ((uVar3 & 0x100) != 0) {
      iVar2 = FUN_007e9dd0(param_2);
      uVar4 = (uVar4 + 0xf & 0xfffffff0) + iVar2;
    }
    if ((uVar3 & 0x10) != 0) {
      iVar2 = FUN_007e9e20(param_2);
      uVar4 = (uVar4 + 0xf & 0xfffffff0) + iVar2;
    }
    if (((byte)uVar3 & 0x80) == 0x80) {
      iVar2 = FUN_007e9e00(param_2);
      uVar4 = iVar2 + 0x10 + (uVar4 - 1 & 0xfffffff0);
    }
    if ((uVar3 & 0x20) != 0) {
      iVar2 = FUN_007e9de0(param_2);
      uVar4 = iVar2 + 0x10 + (uVar4 - 1 & 0xfffffff0);
    }
  }
  return uVar4;
}

