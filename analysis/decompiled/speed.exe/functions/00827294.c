/* speed.exe 00827294 FUN_00827294; analysis pseudocode, not buildable source.
 * calls 00828f10 FUN_00828f10
 */

undefined4 FUN_00827294(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  while (0 < param_2) {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = (*(int *)(param_1 + 0x28) - iVar1) + 1;
    if (param_2 < iVar2) {
      iVar2 = param_2;
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      FUN_00828f10(iVar2,*(int *)(param_1 + 0x1c) + iVar1,param_4);
    }
    else {
      (*DAT_009c2528)(iVar2,*(int *)(param_1 + 0x1c) + iVar1 * 2);
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar2;
    param_2 = param_2 - iVar2;
    param_4 = param_4 + iVar2 * 4;
    if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x20)) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
    }
  }
  return 1;
}

