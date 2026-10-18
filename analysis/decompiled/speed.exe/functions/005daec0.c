/* speed.exe 005daec0 FUN_005daec0; analysis pseudocode, not buildable source.
 * calls 00605a60 FUN_00605a60
 * calls 005d59e0 FUN_005d59e0
 * calls 00613710 FUN_00613710
 * calls 005d5a50 FUN_005d5a50
 */

void __fastcall FUN_005daec0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00874d1f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a3830;
  local_4 = 1;
  if (*(char *)(param_1 + 9) != '\0') {
    FUN_00605a60(param_1[10],0xfffffffe);
  }
  FUN_00613710();
  local_4 = local_4 & 0xffffff00;
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  local_4 = 0xffffffff;
  FUN_005d59e0();
  ExceptionList = pvStack_c;
  return;
}

