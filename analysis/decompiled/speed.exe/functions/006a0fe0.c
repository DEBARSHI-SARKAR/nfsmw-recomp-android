/* speed.exe 006a0fe0 FUN_006a0fe0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 006ee930 FUN_006ee930
 * calls 005d5a50 FUN_005d5a50
 */

void __fastcall FUN_006a0fe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087c7b5;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x13;
  puVar2 = param_1 + 0x15;
  puVar3 = param_1 + 0x18;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008ab838;
  param_1[2] = &PTR_LAB_008ab830;
  *puVar1 = &PTR_LAB_008ab800;
  *puVar2 = &PTR_LAB_008ab7c0;
  param_1[0x17] = &PTR_LAB_008ab7bc;
  *puVar3 = &PTR_LAB_008ab7ac;
  local_4 = 7;
  FUN_0045a430();
  local_4._0_1_ = 6;
  FUN_0045a430();
  local_4._0_1_ = 5;
  FUN_0045a430();
  local_4._0_1_ = 4;
  FUN_0045a430();
  local_4._0_1_ = 3;
  FUN_0045a430();
  *puVar3 = &PTR_FUN_00890970;
  local_4._0_1_ = 2;
  FUN_005d5a50(puVar3);
  *puVar2 = &PTR_FUN_00890970;
  local_4._0_1_ = 1;
  FUN_005d5a50(puVar2);
  *puVar1 = &PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f28;
  param_1[2] = &PTR_LAB_00890f20;
  FUN_006ee930();
  ExceptionList = local_c;
  return;
}

