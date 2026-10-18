/* speed.exe 007820c0 FUN_007820c0; analysis pseudocode, not buildable source.
 * calls 00780960 FUN_00780960
 * calls 00772610 FUN_00772610
 */

void __thiscall FUN_007820c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x28) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x28))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00772610(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x28;
    return;
  }
  FUN_00780960(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}

