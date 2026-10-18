/* speed.exe 005f3480 FUN_005f3480; analysis pseudocode, not buildable source.
 * calls 005f01a0 FUN_005f01a0
 * calls 005e7b20 FUN_005e7b20
 */

void __thiscall FUN_005f3480(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 2) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 2))) {
    iVar1 = *(int *)(param_1 + 8);
    local_4 = param_1 & 0xffffff00;
    FUN_005e7b20(iVar1,1,param_2,param_1,local_4);
    *(int *)(param_1 + 8) = iVar1 + 4;
    return;
  }
  FUN_005f01a0(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}

