/* speed.exe 007f5b1d FUN_007f5b1d; analysis pseudocode, not buildable source.
 * calls 007f4869 FUN_007f4869
 * calls 007f492d FUN_007f492d
 * calls 007f4f11 FUN_007f4f11
 * calls 007f4cb5 FUN_007f4cb5
 * calls 007f4b65 FUN_007f4b65
 * calls 007f5255 FUN_007f5255
 * calls 007f48a4 FUN_007f48a4
 * calls 007f56bc FUN_007f56bc
 */

undefined4 __thiscall FUN_007f5b1d(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x6a) != '\0') {
    FUN_007f4cb5();
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x50))(param_2);
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x6c);
      if (iVar1 < 0x11) {
        if (iVar1 == 0x10) {
          FUN_007f5255(iVar3);
        }
        else if (iVar1 == 1) {
          FUN_007f48a4(iVar3);
        }
        else if (iVar1 == 2) {
          FUN_007f4869(iVar3);
        }
        else if ((iVar1 == 4) || (iVar1 == 8)) {
          FUN_007f4f11(iVar3);
        }
      }
      else if (iVar1 == 0x20) {
        FUN_007f56bc(iVar3);
      }
      else if (iVar1 == 0x40) {
        FUN_007f492d(iVar3);
      }
      else if (iVar1 == 0x80) {
        FUN_007f4b65(iVar3);
      }
    }
    if ((*(int *)(param_1 + 0x88) != 1) || (uVar2 = 0x100, *(int *)(param_1 + 0x6c) != 1)) {
      uVar2 = *(undefined4 *)(param_1 + 0x6c);
    }
  }
  return uVar2;
}

