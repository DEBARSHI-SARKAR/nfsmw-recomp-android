/* speed.exe 007aa0f0 FUN_007aa0f0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007aa0f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00882a88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b7564;
  local_4 = 0;
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x16])(1);
  }
  *param_1 = &PTR_FUN_0089b8c8;
  ExceptionList = local_c;
  return;
}

