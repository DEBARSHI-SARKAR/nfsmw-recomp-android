/* speed.exe 0075ecb0 FUN_0075ecb0; analysis pseudocode, not buildable source.
 * calls 0075ce70 FUN_0075ce70
 * calls 0074cfc0 FUN_0074cfc0
 */

void __thiscall FUN_0075ecb0(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 2) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 2))) {
    iVar1 = *(int *)(param_1 + 8);
    local_4 = param_1 & 0xffffff00;
    FUN_0074cfc0(iVar1,1,param_2,param_1,local_4);
    *(int *)(param_1 + 8) = iVar1 + 4;
    return;
  }
  FUN_0075ce70(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}

