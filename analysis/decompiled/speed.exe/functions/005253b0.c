/* speed.exe 005253b0 FUN_005253b0; analysis pseudocode, not buildable source.
 * calls 004643d0 FUN_004643d0
 * calls 005b1510 FUN_005b1510
 * calls 00515d20 FUN_00515d20
 * calls 00516af0 FUN_00516af0
 */

undefined4 FUN_005253b0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined ***pppuVar1;
  undefined **local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e8c8;
  local_c = ExceptionList;
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_2 + 0x18) == 5) {
    ExceptionList = &local_c;
    FUN_004643d0(&DAT_0091c5c0,param_3,&stack0x00000010);
    local_14 = &PTR_FUN_0089b390;
    pppuVar1 = &local_14;
    local_4 = 0;
    local_10 = &DAT_0091c5c0;
    FUN_00516af0(param_1);
    FUN_005b1510(param_2,pppuVar1);
    ExceptionList = local_c;
    return 0;
  }
  if (*(int *)(param_2 + 0x18) == 2) {
    ExceptionList = &local_c;
    FUN_00515d20();
  }
  ExceptionList = local_c;
  return 0;
}

