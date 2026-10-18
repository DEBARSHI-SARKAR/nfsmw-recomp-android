/* speed.exe 0044f2f0 FUN_0044f2f0; analysis pseudocode, not buildable source.
 * calls 0044df50 FUN_0044df50
 */

void __fastcall FUN_0044f2f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00869bb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00893574;
  local_4 = 0;
  FUN_0044df50();
  *param_1 = &PTR_LAB_008934e4;
  ExceptionList = local_c;
  return;
}

