/* speed.exe 007136e0 FUN_007136e0; analysis pseudocode, not buildable source.
 * calls 00706dd0 FUN_00706dd0
 * calls 00710670 FUN_00710670
 */

void __thiscall FUN_007136e0(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 2) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 2))) {
    iVar1 = *(int *)(param_1 + 8);
    local_4 = param_1 & 0xffffff00;
    FUN_00706dd0(iVar1,1,param_2,param_1,local_4);
    *(int *)(param_1 + 8) = iVar1 + 4;
    return;
  }
  FUN_00710670(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}

