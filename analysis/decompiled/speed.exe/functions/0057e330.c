/* speed.exe 0057e330 FUN_0057e330; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 */

void __fastcall FUN_0057e330(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00871f58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a0fbc;
  local_4 = 0;
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
  }
  param_1[0xc] = 0;
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = pvStack_c;
  return;
}

