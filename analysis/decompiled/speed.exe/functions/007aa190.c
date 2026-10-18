/* speed.exe 007aa190 FUN_007aa190; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007aa190(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00882aa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b7570;
  local_4 = 0;
  if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x13])(1);
  }
  *param_1 = &PTR_FUN_0089b8c8;
  ExceptionList = local_c;
  return;
}

