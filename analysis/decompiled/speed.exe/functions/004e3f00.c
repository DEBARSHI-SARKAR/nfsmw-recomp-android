/* speed.exe 004e3f00 FUN_004e3f00; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004e3f00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086cd78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00898bc4;
  local_4 = 0;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1);
    param_1[10] = 0;
  }
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

