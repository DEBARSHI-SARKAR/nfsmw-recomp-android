/* speed.exe 00432e90 FUN_00432e90; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0076e220 FUN_0076e220
 * calls 005d5a50 FUN_005d5a50
 * calls 0041af70 FUN_0041af70
 * calls 004258d0 FUN_004258d0
 * calls 006f82f0 FUN_006f82f0
 * calls 006466b0 FUN_006466b0
 * calls 0045a430 FUN_0045a430
 * calls 006e9c90 FUN_006e9c90
 */

void __fastcall FUN_00432e90(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0086870e;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x12;
  puVar2 = param_1 + 0x14;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089221c;
  param_1[2] = &PTR_LAB_00892214;
  param_1[0xb] = &PTR_LAB_00892200;
  param_1[0xe] = &PTR_LAB_008921e4;
  *puVar1 = &PTR_LAB_008921dc;
  *puVar2 = &PTR_LAB_008921cc;
  local_4 = 6;
  FUN_006e9c90(param_1[0x17]);
  iVar3 = param_1[0x27];
  if (iVar3 != 0) {
    FUN_006466b0();
    FUN_005d0370(iVar3,0x28c,0);
    param_1[0x27] = 0;
  }
  local_4._0_1_ = 5;
  FUN_0045a430();
  local_4._0_1_ = 4;
  FUN_0076e220();
  iVar3 = param_1[0x2a];
  local_4._0_1_ = 3;
  if (iVar3 != 0) {
    FUN_005d0370(iVar3,(param_1[0x2c] - iVar3 >> 3) * 8,0);
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0041af70();
  if (param_1[0x25] != 0) {
    FUN_005d0370(param_1[0x25],0xc,0);
  }
  param_1[0x25] = 0;
  local_4._0_1_ = 1;
  *puVar2 = &PTR_FUN_0089187c;
  FUN_004258d0();
  *puVar2 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar2);
  DAT_0092c674 = 0;
  *puVar1 = &PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_006f82f0();
  ExceptionList = local_c;
  return;
}

