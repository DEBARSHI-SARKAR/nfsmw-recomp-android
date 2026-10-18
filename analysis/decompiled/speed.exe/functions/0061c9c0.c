/* speed.exe 0061c9c0 FUN_0061c9c0; analysis pseudocode, not buildable source.
 * calls 0060d6b0 FUN_0060d6b0
 * calls 006170d0 FUN_006170d0
 */

void __thiscall FUN_0061c9c0(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 2) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 2))) {
    iVar1 = *(int *)(param_1 + 8);
    local_4 = param_1 & 0xffffff00;
    FUN_0060d6b0(iVar1,1,param_2,param_1,local_4);
    *(int *)(param_1 + 8) = iVar1 + 4;
    return;
  }
  FUN_006170d0(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}

