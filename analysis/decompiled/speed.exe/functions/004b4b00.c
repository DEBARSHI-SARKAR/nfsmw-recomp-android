/* speed.exe 004b4b00 FUN_004b4b00; analysis pseudocode, not buildable source.
 * calls 004f4a30 FUN_004f4a30
 * calls 00653a40 FUN_00653a40
 */

void __fastcall FUN_004b4b00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b588;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00896cbc;
  local_4 = 0;
  FUN_00653a40();
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00896af0;
  FUN_004f4a30();
  ExceptionList = local_c;
  return;
}

