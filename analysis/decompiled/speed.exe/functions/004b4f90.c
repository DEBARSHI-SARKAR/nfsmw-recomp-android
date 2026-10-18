/* speed.exe 004b4f90 FUN_004b4f90; analysis pseudocode, not buildable source.
 * calls 004b4e40 FUN_004b4e40
 * calls 004b12b0 FUN_004b12b0
 */

void __fastcall FUN_004b4f90(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b5c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00896d2c;
  local_4 = 0;
  FUN_004b12b0();
  local_4 = 0xffffffff;
  FUN_004b4e40();
  ExceptionList = local_c;
  return;
}

