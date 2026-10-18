/* speed.exe 004f6960 FUN_004f6960; analysis pseudocode, not buildable source.
 * calls 004ca430 FUN_004ca430
 */

void __fastcall FUN_004f6960(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086d8d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008998b0;
  local_4 = 0;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1);
  }
  param_1[10] = 0;
  *param_1 = &PTR_FUN_008983e8;
  local_4 = 1;
  FUN_004ca430(param_1);
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = pvStack_c;
  return;
}

