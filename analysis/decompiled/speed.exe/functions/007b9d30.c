/* speed.exe 007b9d30 FUN_007b9d30; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 0051f4b0 FUN_0051f4b0
 */

void __fastcall FUN_007b9d30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00883548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b7df8;
  local_4 = 0;
  FUN_0051f4b0();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

