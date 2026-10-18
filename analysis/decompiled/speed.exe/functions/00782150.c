/* speed.exe 00782150 FUN_00782150; analysis pseudocode, not buildable source.
 * calls 0077dd30 FUN_0077dd30
 * calls 00772870 FUN_00772870
 */

void __thiscall FUN_00782150(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 2) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 2))) {
    iVar1 = *(int *)(param_1 + 8);
    local_4 = param_1 & 0xffffff00;
    FUN_00772870(iVar1,1,param_2,param_1,local_4);
    *(int *)(param_1 + 8) = iVar1 + 4;
    return;
  }
  FUN_0077dd30(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}

