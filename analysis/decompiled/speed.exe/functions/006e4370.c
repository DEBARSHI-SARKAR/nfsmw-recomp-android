/* speed.exe 006e4370 FUN_006e4370; analysis pseudocode, not buildable source.
 * calls 006e3da0 FUN_006e3da0
 * calls 006dd990 FUN_006dd990
 */

void __thiscall FUN_006e4370(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0xc) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0xc))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_006dd990(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0xc;
    return;
  }
  FUN_006e3da0(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}

