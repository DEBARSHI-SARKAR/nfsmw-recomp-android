/* speed.exe 00827338 FUN_00827338; analysis pseudocode, not buildable source.
 * calls 00822050 FUN_00822050
 * calls 00828f10 FUN_00828f10
 */

undefined4 FUN_00827338(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x24);
  if (uVar1 < uVar2) {
    *(uint *)(param_1 + 0x20) = uVar1 + param_2;
    if (uVar1 + param_2 < uVar2) {
      if (*(int *)(param_1 + 0x28) == 0) {
        FUN_00828f10(param_2,*(int *)(param_1 + 0x1c) + uVar1,param_4);
      }
      else {
        (*DAT_009c2528)(param_2,*(int *)(param_1 + 0x1c) + uVar1 * 2);
      }
    }
    else {
      iVar3 = uVar2 - uVar1;
      if (*(int *)(param_1 + 0x28) == 0) {
        FUN_00828f10(iVar3,*(int *)(param_1 + 0x1c) + uVar1,param_4);
      }
      else {
        (*DAT_009c2528)(iVar3,*(int *)(param_1 + 0x1c) + uVar1 * 2);
      }
      FUN_00822050(param_4 + iVar3 * 4,(param_2 - iVar3) * 4);
    }
    return 1;
  }
  return 0xffffffff;
}

