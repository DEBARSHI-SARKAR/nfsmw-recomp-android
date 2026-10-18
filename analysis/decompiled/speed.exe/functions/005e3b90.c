/* speed.exe 005e3b90 FUN_005e3b90; analysis pseudocode, not buildable source.
 * calls 005e2770 FUN_005e2770
 * calls 005d59e0 FUN_005d59e0
 * calls 005d5a50 FUN_005d5a50
 */

void __fastcall FUN_005e3b90(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_008750f6;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 10;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a39ec;
  *puVar1 = &PTR_LAB_008a39d0;
  local_4 = 2;
  if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1f])(1);
  }
  *puVar1 = &PTR_FUN_00890970;
  local_4._0_1_ = 1;
  FUN_005d5a50(puVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d59e0();
  local_4 = 0xffffffff;
  FUN_005e2770();
  ExceptionList = pvStack_c;
  return;
}

