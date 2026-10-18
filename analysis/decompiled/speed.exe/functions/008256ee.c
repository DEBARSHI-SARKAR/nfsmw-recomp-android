/* speed.exe 008256ee FUN_008256ee; analysis pseudocode, not buildable source.
 * calls 00825413 FUN_00825413
 * calls 008255f3 FUN_008255f3
 * calls 00825509 FUN_00825509
 * calls 00819670 FUN_00819670
 */

int FUN_008256ee(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1;
  param_1 = FUN_008255f3(&param_2);
  iVar3 = 0;
  if ((param_2 != 0) && (0 < param_2)) {
    do {
      iVar2 = *(int *)(iVar1 + 0x2c);
      if (*(int *)(iVar1 + 0x30) < iVar2) break;
      if (*(int *)(iVar1 + 0x30) < iVar2 * 2) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00825413(iVar2,*(undefined4 *)(iVar1 + 0x24));
      }
      FUN_00825509(&param_3);
      iVar2 = FUN_008255f3(&param_2);
      param_1 = param_1 + iVar2;
    } while (0 < param_2);
    iVar2 = param_3;
    if (0 < iVar3) {
      FUN_00819670(iVar1 + 0x40,param_3,*(int *)(iVar1 + 0x2c) << 2);
      *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x2c);
      iVar2 = iVar2 + *(int *)(iVar1 + 0x2c) * 4;
    }
    if (0 < param_2) {
      iVar3 = *(int *)(iVar1 + 0x30);
      if (param_2 <= *(int *)(iVar1 + 0x30)) {
        iVar3 = param_2;
      }
      FUN_00819670(param_4,iVar2,iVar3 << 2);
      *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) - iVar3;
      param_1 = param_1 + iVar3;
    }
  }
  return param_1;
}

