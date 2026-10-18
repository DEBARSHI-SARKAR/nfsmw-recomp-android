/* speed.exe 0043c6b0 FUN_0043c6b0; analysis pseudocode, not buildable source.
 * calls 0041dd40 FUN_0041dd40
 * calls 00439840 FUN_00439840
 */

void __thiscall FUN_0043c6b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x1c) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x1c))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_0041dd40(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x1c;
    return;
  }
  FUN_00439840(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}

