/* speed.exe 00481480 FUN_00481480; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005d59e0 FUN_005d59e0
 * calls 005d5a50 FUN_005d5a50
 * calls 007831e0 FUN_007831e0
 * calls 0046a660 FUN_0046a660
 * calls 006fc060 FUN_006fc060
 * calls 0047bdd0 FUN_0047bdd0
 */

void __fastcall FUN_00481480(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0086a761;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 6;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008951d0;
  *puVar1 = &PTR_LAB_008951b4;
  param_1[8] = &PTR_LAB_008951ac;
  local_4 = 3;
  if (param_1[0xf] != 0) {
    FUN_006fc060(param_1[0xf]);
  }
  if (param_1[0x11] != 0) {
    FUN_006fc060(param_1[0x11]);
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))(1);
  }
  iVar2 = param_1[10];
  if (iVar2 != 0) {
    FUN_0046a660();
    thunk_FUN_007c7250(iVar2);
  }
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x10])(1);
  }
  local_4._0_1_ = 2;
  FUN_007831e0();
  param_1[8] = &PTR___purecall_00895120;
  FUN_0047bdd0();
  *puVar1 = &PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00894bac;
  FUN_005d59e0();
  ExceptionList = pvStack_c;
  return;
}

