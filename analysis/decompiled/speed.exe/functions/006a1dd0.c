/* speed.exe 006a1dd0 FUN_006a1dd0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 006ee930 FUN_006ee930
 * calls 005d5a50 FUN_005d5a50
 */

void __fastcall FUN_006a1dd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087c7fd;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x13;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008ab890;
  param_1[2] = &PTR_LAB_008ab884;
  *puVar1 = &PTR_LAB_008ab86c;
  local_4 = 2;
  FUN_0045a430();
  local_4._0_1_ = 1;
  FUN_0045a430();
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

