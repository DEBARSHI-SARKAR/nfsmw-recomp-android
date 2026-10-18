/* speed.exe 00433760 FUN_00433760; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0042c990 FUN_0042c990
 * calls 004257d0 FUN_004257d0
 * calls 006e9c40 FUN_006e9c40
 * calls 005d5a50 FUN_005d5a50
 * calls 004330f0 FUN_004330f0
 * calls 006f82f0 FUN_006f82f0
 * calls 006e9c90 FUN_006e9c90
 */

void __fastcall FUN_00433760(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00868866;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0x12;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008928ec;
  param_1[2] = &PTR_LAB_008928e4;
  param_1[0xb] = &PTR_LAB_008928d0;
  param_1[0xe] = &PTR_LAB_008928b4;
  *puVar1 = &PTR_LAB_00892770;
  local_4 = 4;
  FUN_006e9c40();
  FUN_006e9c90(param_1[0x15]);
  FUN_006e9c90(param_1[0x16]);
  if ((undefined4 *)param_1[0x32] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x32])(1);
  }
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2f])(1);
  }
  local_4._0_1_ = 3;
  FUN_004330f0();
  iVar2 = param_1[0x35];
  local_4._0_1_ = 2;
  if (iVar2 != 0) {
    FUN_005d0370(iVar2,(param_1[0x37] - iVar2 >> 3) * 8,0);
  }
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  local_4._0_1_ = 1;
  FUN_0042c990();
  local_4 = (uint)local_4._1_3_ << 8;
  *puVar1 = &PTR_FUN_008916d8;
  FUN_004257d0();
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_006f82f0();
  ExceptionList = pvStack_c;
  return;
}

