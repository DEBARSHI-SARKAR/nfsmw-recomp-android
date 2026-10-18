/* speed.exe 00432820 FUN_00432820; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006e9c40 FUN_006e9c40
 * calls 005d5a50 FUN_005d5a50
 * calls 00425850 FUN_00425850
 * calls 006f82f0 FUN_006f82f0
 */

void __fastcall FUN_00432820(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00868655;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x12;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008921c4;
  param_1[2] = &PTR_LAB_008921bc;
  param_1[0xb] = &PTR_LAB_008921a8;
  param_1[0xe] = &PTR_LAB_0089218c;
  *puVar1 = &PTR_LAB_00892130;
  local_4 = 3;
  FUN_006e9c40();
  iVar2 = param_1[0x19];
  local_4._0_1_ = 2;
  if (iVar2 != 0) {
    FUN_005d0370(iVar2,(param_1[0x1b] - iVar2 >> 2) << 2,0);
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  iVar2 = param_1[0x15];
  local_4._0_1_ = 1;
  if (iVar2 != 0) {
    FUN_005d0370(iVar2,(param_1[0x17] - iVar2 >> 2) * 4,0);
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  *puVar1 = &PTR_FUN_00891820;
  FUN_00425850();
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_006f82f0();
  ExceptionList = local_c;
  return;
}

