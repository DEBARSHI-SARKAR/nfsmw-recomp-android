/* speed.exe 004819d0 FUN_004819d0; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005d59e0 FUN_005d59e0
 * calls 005d5a50 FUN_005d5a50
 * calls 007831e0 FUN_007831e0
 * calls 0047bd50 FUN_0047bd50
 * calls 0046a660 FUN_0046a660
 * calls 0047bdd0 FUN_0047bdd0
 */

void __fastcall FUN_004819d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0086a8a1;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 6;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00895248;
  *puVar1 = &PTR_LAB_00895240;
  param_1[9] = &PTR_LAB_00895238;
  local_4 = 3;
  if (param_1[0xd] != 0) {
    param_1[0x14] = 0;
    FUN_007869c0(0);
  }
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))(1);
  }
  iVar2 = param_1[0xb];
  if (iVar2 != 0) {
    FUN_0046a660();
    thunk_FUN_007c7250(iVar2);
  }
  local_4._0_1_ = 2;
  FUN_007831e0();
  param_1[9] = &PTR___purecall_00895120;
  FUN_0047bdd0();
  local_4 = (uint)local_4._1_3_ << 8;
  *puVar1 = &PTR_FUN_008950fc;
  FUN_0047bd50();
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00894bac;
  FUN_005d59e0();
  ExceptionList = pvStack_c;
  return;
}

