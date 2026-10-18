/* speed.exe 007b79f0 FUN_007b79f0; analysis pseudocode, not buildable source.
 * calls 007aa190 FUN_007aa190
 * calls 007b3f00 FUN_007b3f00
 */

void __fastcall FUN_007b79f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008833c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b7d4c;
  local_4 = 0;
  FUN_007b3f00();
  local_4 = 0xffffffff;
  FUN_007aa190();
  ExceptionList = local_c;
  return;
}

