/* speed.exe 006fbb80 FUN_006fbb80; analysis pseudocode, not buildable source.
 * calls 006fa920 FUN_006fa920
 * calls 006f0930 FUN_006f0930
 */

void __thiscall FUN_006fbb80(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 2) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 2))) {
    iVar1 = *(int *)(param_1 + 8);
    local_4 = param_1 & 0xffffff00;
    FUN_006f0930(iVar1,1,param_2,param_1,local_4);
    *(int *)(param_1 + 8) = iVar1 + 4;
    return;
  }
  FUN_006fa920(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}

