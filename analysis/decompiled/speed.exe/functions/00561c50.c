/* speed.exe 00561c50 FUN_00561c50; analysis pseudocode, not buildable source.
 * calls 0056c9f0 FUN_0056c9f0
 * calls 00592170 FUN_00592170
 * calls 0079a020 FUN_0079a020
 * calls 0079bac0 FUN_0079bac0
 * calls 0055e700 FUN_0055e700
 * calls 00586290 FUN_00586290
 */

undefined4 * __thiscall FUN_00561c50(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008711f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00586290(param_2);
  puVar1 = param_1 + 0xb;
  *param_1 = &PTR_FUN_0089e8b8;
  *puVar1 = puVar1;
  param_1[0xc] = puVar1;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00592170(param_1[4],0,0,1,1,0,1);
  local_4._0_1_ = 2;
  FUN_0056c9f0();
  param_1[0x41] = &PTR_FUN_0089b098;
  local_4._0_1_ = 3;
  FUN_0056c9f0();
  param_1[0x52] = &PTR_FUN_0089b098;
  local_4._0_1_ = 4;
  FUN_0056c9f0();
  param_1[99] = &PTR_FUN_0089b098;
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_0079bac0();
  FUN_0079a020();
  param_1[0x10] = *(int *)(DAT_0091cf90 + 0x10) + 0x414;
  FUN_0055e700();
  ExceptionList = pvStack_c;
  return param_1;
}

