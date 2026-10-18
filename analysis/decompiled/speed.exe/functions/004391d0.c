/* speed.exe 004391d0 FUN_004391d0; analysis pseudocode, not buildable source.
 * calls 0041e2f0 FUN_0041e2f0
 * calls 004343f0 FUN_004343f0
 */

void __thiscall FUN_004391d0(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 2) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 2))) {
    iVar1 = *(int *)(param_1 + 8);
    local_4 = param_1 & 0xffffff00;
    FUN_0041e2f0(iVar1,1,param_2,param_1,local_4);
    *(int *)(param_1 + 8) = iVar1 + 4;
    return;
  }
  FUN_004343f0(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}

