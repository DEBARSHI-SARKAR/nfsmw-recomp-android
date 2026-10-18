/* speed.exe 00686c20 FUN_00686c20; analysis pseudocode, not buildable source.
 * calls 006697c0 FUN_006697c0
 * calls 0045a430 FUN_0045a430
 * calls 006ee930 FUN_006ee930
 * calls 005d0370 FUN_005d0370
 * calls 0066dd70 FUN_0066dd70
 * calls 0067e800 FUN_0067e800
 * calls 006f81a0 FUN_006f81a0
 * calls 006809f0 FUN_006809f0
 * calls 005d5a50 FUN_005d5a50
 * calls 006eea10 FUN_006eea10
 * calls 00683110 FUN_00683110
 * calls 00682760 FUN_00682760
 * calls 006e9c90 FUN_006e9c90
 * calls 0067da60 FUN_0067da60
 */

void __fastcall FUN_00686c20(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087b902;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008aa5b0;
  param_1[2] = &PTR_LAB_008aa5a8;
  param_1[0xb] = &PTR_LAB_008aa518;
  param_1[0xe] = &PTR_LAB_008aa4f8;
  param_1[0x10] = &PTR_LAB_008aa4dc;
  local_4 = 8;
  FUN_006809f0();
  FUN_006e9c90(param_1[0x1f]);
  if (param_1[0x20] != 0) {
    (**(code **)(param_1[0xb] + 0x10))(param_1[0x20]);
    param_1[0x21] = 0;
    param_1[0x20] = 0;
  }
  if ((undefined4 *)param_1[0x2a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a])(1);
    param_1[0x2a] = 0;
  }
  if (param_1[0x22] != 0) {
    FUN_006eea10(param_1[0x22]);
    param_1[0x22] = 0;
  }
  if (param_1[0x16] != 0) {
    FUN_005d0370(param_1[0x16],0x3c,0);
  }
  FUN_006f81a0(param_1[0xd]);
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_0066dd70();
  if (param_1[0x28] != 0) {
    FUN_005d0370(param_1[0x28],0xc,0);
  }
  param_1[0x28] = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_00683110(auStack_10,*(undefined4 *)param_1[0x25],(undefined4 *)param_1[0x25]);
  if (param_1[0x25] != 0) {
    FUN_005d0370(param_1[0x25],0x18,0);
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  local_4._0_1_ = 5;
  FUN_0045a430();
  local_4._0_1_ = 4;
  FUN_00682760();
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0xffffffb8) {
    puVar1 = (undefined4 *)0x0;
  }
  FUN_0067da60(puVar1);
  param_1[0x10] = &PTR_FUN_00890970;
  local_4._0_1_ = 2;
  FUN_005d5a50(param_1 + 0x10);
  param_1[0xe] = &PTR_FUN_00890970;
  local_4._0_1_ = 1;
  FUN_005d5a50(param_1 + 0xe);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0067e800();
  local_4 = 0xffffffff;
  FUN_006ee930();
  ExceptionList = pvStack_c;
  return;
}

