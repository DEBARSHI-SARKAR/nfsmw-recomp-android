/* speed.exe 006f8a20 FUN_006f8a20; analysis pseudocode, not buildable source.
 * calls 00793910 FUN_00793910
 * calls 004258d0 FUN_004258d0
 * calls 005d5a50 FUN_005d5a50
 * calls 006f82f0 FUN_006f82f0
 * calls 007915c0 FUN_007915c0
 */

void __fastcall FUN_006f8a20(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087f134;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x12;
  puVar2 = param_1 + 0x14;
  puVar3 = param_1 + 0x16;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b0ac0;
  param_1[2] = &PTR_LAB_008b0ab8;
  param_1[0xb] = &PTR_LAB_008b0aa4;
  param_1[0xe] = &PTR_LAB_008b0a88;
  *puVar1 = &PTR_LAB_008b0a80;
  *puVar2 = &PTR_LAB_008b0a74;
  *puVar3 = &PTR_LAB_008b0a64;
  param_1[0x18] = &PTR_LAB_008b0a58;
  uVar4 = 0;
  local_4 = 4;
  FUN_00793910(0);
  FUN_007915c0(uVar4);
  DAT_0092c678 = 0;
  param_1[0x18] = &PTR_FUN_00890970;
  local_4._0_1_ = 3;
  FUN_005d5a50(param_1 + 0x18);
  local_4._0_1_ = 2;
  *puVar3 = &PTR_FUN_0089187c;
  FUN_004258d0();
  *puVar3 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar3);
  *puVar2 = &PTR_FUN_00890970;
  local_4._0_1_ = 1;
  FUN_005d5a50(puVar2);
  *puVar1 = &PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_006f82f0();
  ExceptionList = local_c;
  return;
}

