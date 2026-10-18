/* speed.exe 0069b810 FUN_0069b810; analysis pseudocode, not buildable source.
 * calls 006eeb10 FUN_006eeb10
 * calls 005d5a50 FUN_005d5a50
 * calls 005d59e0 FUN_005d59e0
 */

void __fastcall FUN_0069b810(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087c2ef;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008ab398;
  local_4 = 1;
  FUN_006eeb10();
  local_4 = local_4 & 0xffffff00;
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  local_4 = 0xffffffff;
  FUN_005d59e0();
  ExceptionList = pvStack_c;
  return;
}

