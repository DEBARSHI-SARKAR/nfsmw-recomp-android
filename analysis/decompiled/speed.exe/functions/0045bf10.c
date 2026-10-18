/* speed.exe 0045bf10 FUN_0045bf10; analysis pseudocode, not buildable source.
 * calls 00459f80 FUN_00459f80
 */

void __thiscall FUN_0045bf10(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0x1c) < 2) {
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      FUN_00459f80(iVar1,*(int *)(DAT_0090dcbc + 4) + 0x38);
    }
    else {
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) - 1;
    }
    param_1[2] = 0;
  }
  if (param_2 != 0) {
    if (*(undefined4 **)(param_2 + 0x14) == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(undefined4 **)(param_2 + 0x14);
    }
    *param_1 = uVar2;
    param_1[1] = *(undefined4 *)(param_2 + 0x20);
    param_1[2] = param_2;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    return;
  }
  param_1[1] = 0;
  return;
}

