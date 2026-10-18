/* speed.exe 007821c0 FUN_007821c0; analysis pseudocode, not buildable source.
 * calls 00780d50 FUN_00780d50
 * calls 00772640 FUN_00772640
 */

void __thiscall FUN_007821c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x30) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x30))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00772640(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x30;
    return;
  }
  FUN_00780d50(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}

