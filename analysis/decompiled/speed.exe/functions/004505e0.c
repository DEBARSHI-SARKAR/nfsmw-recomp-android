/* speed.exe 004505e0 FUN_004505e0; analysis pseudocode, not buildable source.
 * calls 0044f220 FUN_0044f220
 */

void __fastcall FUN_004505e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00869c68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00893518;
  local_4 = 0;
  FUN_0044f220();
  *param_1 = &PTR_LAB_008934e4;
  ExceptionList = local_c;
  return;
}

