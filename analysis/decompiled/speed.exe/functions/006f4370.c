/* speed.exe 006f4370 thunk_FUN_0069b810; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_0069b810(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_0087c2ef;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008ab398;
  uStack_4 = 1;
  FUN_006eeb10();
  uStack_4 = uStack_4 & 0xffffff00;
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  uStack_4 = 0xffffffff;
  FUN_005d59e0();
  ExceptionList = pvStack_c;
  return;
}

