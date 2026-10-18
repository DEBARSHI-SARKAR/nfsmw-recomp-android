/* speed.exe 00512350 FUN_00512350; analysis pseudocode, not buildable source.
 * calls 00586290 FUN_00586290
 * calls 0078b610 FUN_0078b610
 * calls 0078d1b0 FUN_0078d1b0
 * calls 0078d0f0 FUN_0078d0f0
 * calls 0064bab0 FUN_0064bab0
 * calls 0078d1f0 FUN_0078d1f0
 * calls 0078b630 FUN_0078b630
 * calls 0064a1e0 FUN_0064a1e0
 * calls 0064a150 FUN_0064a150
 * calls 0056e340 FUN_0056e340
 */

undefined4 * __thiscall FUN_00512350(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e2d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089b27c;
  FUN_0078d0f0();
  param_1[0xb] = &PTR_FUN_0089b230;
  param_1[0x1d7] = 10;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x1dc] = 0;
  param_1[0x1d9] = param_1;
  FUN_0078d1b0(0x40000);
  local_2c = FUN_0056e340();
  local_28 = FUN_0078b610();
  local_24 = FUN_0078b630();
  local_20 = FUN_0064a1e0();
  local_1c = FUN_0064bab0();
  local_18 = FUN_0064a150();
  local_14 = &DAT_00890978;
  local_10 = &DAT_009b3ea0;
  FUN_0078d1f0(&local_2c);
  ExceptionList = local_c;
  return param_1;
}

