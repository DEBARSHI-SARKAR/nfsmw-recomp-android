/* speed.exe 00473860 FUN_00473860; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005d59e0 FUN_005d59e0
 * calls 005d5a50 FUN_005d5a50
 * calls 007831e0 FUN_007831e0
 * calls 0046a660 FUN_0046a660
 * calls 006fc060 FUN_006fc060
 */

void __fastcall FUN_00473860(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0086a2ba;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 6;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00894c54;
  *puVar1 = &PTR_LAB_00894c38;
  local_4 = 2;
  if (param_1[0xe] != 0) {
    FUN_006fc060(param_1[0xe]);
  }
  if (param_1[0x10] != 0) {
    FUN_006fc060(param_1[0x10]);
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))(1);
  }
  iVar2 = param_1[9];
  if (iVar2 != 0) {
    FUN_0046a660();
    thunk_FUN_007c7250(iVar2);
  }
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xf])(1);
  }
  local_4._0_1_ = 1;
  FUN_007831e0();
  *puVar1 = &PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00894bac;
  FUN_005d59e0();
  ExceptionList = pvStack_c;
  return;
}

