/* speed.exe 006a2a90 FUN_006a2a90; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 006ee930 FUN_006ee930
 * calls 005d5a50 FUN_005d5a50
 */

void __fastcall FUN_006a2a90(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087c8a2;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x13;
  puVar2 = param_1 + 0x15;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008ab970;
  param_1[2] = &PTR_LAB_008ab968;
  *puVar1 = &PTR_LAB_008ab938;
  *puVar2 = &PTR_LAB_008ab8f8;
  param_1[0x17] = &PTR_LAB_008ab8f0;
  local_4 = 4;
  FUN_0045a430();
  local_4._0_1_ = 3;
  FUN_0045a430();
  local_4._0_1_ = 2;
  FUN_0045a430();
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

