/* speed.exe 004ceeb0 FUN_004ceeb0; analysis pseudocode, not buildable source.
 * calls 004cde30 FUN_004cde30
 * calls 004c1950 FUN_004c1950
 */

void __thiscall FUN_004ceeb0(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 2) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 2))) {
    iVar1 = *(int *)(param_1 + 8);
    local_4 = param_1 & 0xffffff00;
    FUN_004c1950(iVar1,1,param_2,param_1,local_4);
    *(int *)(param_1 + 8) = iVar1 + 4;
    return;
  }
  FUN_004cde30(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}

