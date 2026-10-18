/* speed.exe 0081d17d FUN_0081d17d; analysis pseudocode, not buildable source.
 * calls 0081ab00 FUN_0081ab00
 * calls 0081ab36 FUN_0081ab36
 * calls 0081f86b FUN_0081f86b
 * calls 008222a1 FUN_008222a1
 * calls 008221d3 FUN_008221d3
 * calls 00819670 FUN_00819670
 * calls 0082221f FUN_0082221f
 */

int FUN_0081d17d(int param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  if (DAT_009c2188 == '\0') {
    return -10;
  }
  local_10 = param_1;
  if (DAT_009c1c10 != (code *)0x0) {
    (*DAT_009c1c10)();
  }
  uVar1 = FUN_0081ab00();
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  if (((*(int *)(param_1 + 0x20) == 0) ||
      (iVar2 = FUN_008222a1(param_1 + 0x40,*(int *)(param_1 + 0x20) + param_1), local_8 = iVar2,
      -1 < iVar2)) &&
     ((*(int *)(param_1 + 0x28) == 0 ||
      (iVar2 = FUN_008222a1(param_1 + 0x44,*(int *)(param_1 + 0x28) + param_1), local_c = iVar2,
      -1 < iVar2)))) {
    iVar2 = *(int *)(param_1 + 0x18);
    if (local_8 == 7) {
      iVar3 = FUN_0082221f(*(undefined4 *)(param_1 + 0x40));
    }
    else {
      iVar3 = *(int *)(param_1 + 0x24);
    }
    iVar2 = iVar2 + iVar3;
    if (local_c == 7) {
      iVar3 = FUN_0082221f(*(undefined4 *)(param_1 + 0x44));
    }
    else {
      iVar3 = *(int *)(param_1 + 0x2c);
    }
    iVar3 = (*param_4)(param_1,iVar3 + iVar2,*(undefined4 *)(param_1 + 0x14));
    if (iVar3 != 0) {
      if ((iVar3 != param_1) &&
         (FUN_00819670(iVar3,param_1,*(undefined4 *)(param_1 + 0x18)), local_10 = iVar3,
         local_8 != 0)) {
        FUN_008221d3(*(int *)(iVar3 + 0x18) + iVar3,*(undefined4 *)(iVar3 + 0x40));
      }
      if ((0 < local_c) && ((iVar3 != param_1 || (local_8 == 7)))) {
        FUN_008221d3(iVar3 + iVar2,*(undefined4 *)(local_10 + 0x44));
      }
      FUN_0081ab36(local_10,*(int *)(local_10 + 0x30) + param_1,param_2,param_3);
      return *(int *)(local_10 + 0x3c);
    }
    iVar2 = -6;
  }
  if (0 < local_8) {
    FUN_0081f86b(*(undefined4 *)(param_1 + 0x40));
  }
  if (0 < local_c) {
    FUN_0081f86b(*(undefined4 *)(param_1 + 0x44));
  }
  return iVar2;
}

