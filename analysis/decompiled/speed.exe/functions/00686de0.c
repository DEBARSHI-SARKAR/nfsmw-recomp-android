/* speed.exe 00686de0 FUN_00686de0; analysis pseudocode, not buildable source.
 * calls 00669820 FUN_00669820
 * calls 006f8180 FUN_006f8180
 * calls 006697c0 FUN_006697c0
 * calls 0045a430 FUN_0045a430
 * calls 0067af90 FUN_0067af90
 * calls 0067aec0 FUN_0067aec0
 * calls 00686c20 FUN_00686c20
 * calls 00684ae0 FUN_00684ae0
 * calls 005d5a50 FUN_005d5a50
 * calls 006e9c90 FUN_006e9c90
 */

void __fastcall FUN_00686de0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087ba01;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0x2b;
  puVar2 = param_1 + 0x2d;
  puVar3 = param_1 + 0x30;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008aa6d0;
  param_1[2] = &PTR_LAB_008aa6c8;
  param_1[0xb] = &PTR_LAB_008aa638;
  param_1[0xe] = &PTR_LAB_008aa618;
  param_1[0x10] = &PTR_LAB_008aa5fc;
  *puVar1 = &PTR_LAB_008aa5f4;
  *puVar2 = &PTR_LAB_008aa5d8;
  param_1[0x2f] = &PTR_FUN_008aa5d4;
  *puVar3 = &PTR_LAB_008aa5cc;
  param_1[0x32] = &PTR_LAB_008aa5c4;
  local_4 = 7;
  local_10 = param_1;
  (*(code *)PTR_FUN_008aa654)();
  if ((undefined4 *)param_1[0x2a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a])(1);
    param_1[0x2a] = 0;
  }
  if (param_1[0x43] != 0) {
    FUN_006e9c90(param_1[0x43]);
    param_1[0x43] = 0;
  }
  if (param_1[0x41] != 0) {
    FUN_006697c0(param_1[0x41]);
    param_1[0x41] = 0;
  }
  uStack_14 = DAT_0092c5d0;
  FUN_00684ae0(&uStack_14);
  uStack_14 = DAT_0092c5e0;
  FUN_00684ae0(&uStack_14);
  FUN_006f8180(param_1 + 0x2f);
  local_4._0_1_ = 6;
  FUN_0045a430();
  local_4._0_1_ = 5;
  FUN_0045a430();
  param_1[0x32] = &PTR_FUN_00890970;
  local_4._0_1_ = 4;
  FUN_005d5a50(param_1 + 0x32);
  *puVar3 = &PTR_FUN_00890970;
  local_4._0_1_ = 3;
  FUN_005d5a50(puVar3);
  FUN_0067af90();
  *puVar2 = &PTR_FUN_00890970;
  local_4._0_1_ = 1;
  FUN_005d5a50(puVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  *puVar1 = &PTR_FUN_008aa22c;
  FUN_0067aec0();
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_00686c20();
  ExceptionList = pvStack_c;
  return;
}

