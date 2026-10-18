/* speed.exe 00548600 FUN_00548600; analysis pseudocode, not buildable source.
 * calls 00528e30 FUN_00528e30
 * calls 00527bb0 FUN_00527bb0
 */

void __fastcall FUN_00548600(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00870146;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0089e730;
  local_4 = 1;
  if ((undefined4 *)param_1[0x58] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x58])(1);
  }
  param_1[0x58] = 0;
  if ((DAT_0092d884 != 0) && ((int *)*DAT_0092d87c != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(*(int *)*DAT_0092d87c + 0x20))();
    (**(code **)(*piVar1 + 0x2c))();
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00527bb0();
  local_4 = 0xffffffff;
  FUN_00528e30();
  ExceptionList = pvStack_c;
  return;
}

