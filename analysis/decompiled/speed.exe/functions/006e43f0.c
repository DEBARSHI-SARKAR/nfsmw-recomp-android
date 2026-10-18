/* speed.exe 006e43f0 FUN_006e43f0; analysis pseudocode, not buildable source.
 * calls 006dd9d0 FUN_006dd9d0
 * calls 006e3e70 FUN_006e3e70
 */

void __thiscall FUN_006e43f0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x18) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x18))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_006dd9d0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x18;
    return;
  }
  FUN_006e3e70(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}

