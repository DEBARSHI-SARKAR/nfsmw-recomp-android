/* speed.exe 0055ac20 FUN_0055ac20; analysis pseudocode, not buildable source.
 * calls 0052a680 FUN_0052a680
 */

void __fastcall FUN_0055ac20(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00870dd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0089eedc;
  param_1[0xb] = &PTR_LAB_0089eed0;
  local_4 = 0;
  if ((undefined4 *)param_1[0x39] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x39])(1);
  }
  local_4 = 0xffffffff;
  FUN_0052a680();
  ExceptionList = pvStack_c;
  return;
}

