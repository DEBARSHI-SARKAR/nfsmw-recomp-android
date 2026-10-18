/* speed.exe 007137c0 FUN_007137c0; analysis pseudocode, not buildable source.
 * calls 00706bd0 FUN_00706bd0
 * calls 00712a60 FUN_00712a60
 */

void __thiscall FUN_007137c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x2c) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x2c))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00706bd0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x2c;
    return;
  }
  FUN_00712a60(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}

