/* speed.exe 0043c630 FUN_0043c630; analysis pseudocode, not buildable source.
 * calls 004397d0 FUN_004397d0
 * calls 0041dd00 FUN_0041dd00
 */

void __thiscall FUN_0043c630(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0xc) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0xc))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_0041dd00(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0xc;
    return;
  }
  FUN_004397d0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}

