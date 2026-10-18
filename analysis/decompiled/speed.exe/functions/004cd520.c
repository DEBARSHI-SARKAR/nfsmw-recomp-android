/* speed.exe 004cd520 FUN_004cd520; analysis pseudocode, not buildable source.
 * calls 004cce50 FUN_004cce50
 */

void __fastcall FUN_004cd520(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086c608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00896ad0;
  local_4 = 0;
  FUN_004cce50();
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

