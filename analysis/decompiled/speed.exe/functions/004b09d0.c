/* speed.exe 004b09d0 FUN_004b09d0; analysis pseudocode, not buildable source.
 * calls 00466330 FUN_00466330
 */

void __fastcall FUN_004b09d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b348;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00896acc;
  local_4 = 0;
  FUN_00466330(DAT_00911f58);
  DAT_00911f58 = 0;
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

