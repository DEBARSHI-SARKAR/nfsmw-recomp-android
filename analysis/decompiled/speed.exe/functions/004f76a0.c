/* speed.exe 004f76a0 FUN_004f76a0; analysis pseudocode, not buildable source.
 * calls 004f6960 FUN_004f6960
 * calls 007831e0 FUN_007831e0
 */

void __fastcall FUN_004f76a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086da38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00899ac0;
  local_4 = 0;
  FUN_007831e0();
  local_4 = 0xffffffff;
  FUN_004f6960();
  ExceptionList = local_c;
  return;
}

