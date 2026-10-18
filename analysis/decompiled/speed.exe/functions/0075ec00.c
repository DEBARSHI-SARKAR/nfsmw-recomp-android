/* speed.exe 0075ec00 FUN_0075ec00; analysis pseudocode, not buildable source.
 * calls 0074cf90 FUN_0074cf90
 * calls 0075cbe0 FUN_0075cbe0
 */

void __thiscall FUN_0075ec00(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 2) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 2))) {
    iVar1 = *(int *)(param_1 + 8);
    local_4 = param_1 & 0xffffff00;
    FUN_0074cf90(iVar1,1,param_2,param_1,local_4);
    *(int *)(param_1 + 8) = iVar1 + 4;
    return;
  }
  FUN_0075cbe0(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}

