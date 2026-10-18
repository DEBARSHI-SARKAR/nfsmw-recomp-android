/* speed.exe 004b9c30 FUN_004b9c30; analysis pseudocode, not buildable source.
 * calls 0072e030 FUN_0072e030
 * calls 004eb720 FUN_004eb720
 */

void __fastcall FUN_004b9c30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b7e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00896fa8;
  local_4 = 0;
  FUN_0072e030(&DAT_004afa70);
  local_4 = 0xffffffff;
  FUN_004eb720();
  ExceptionList = local_c;
  return;
}

