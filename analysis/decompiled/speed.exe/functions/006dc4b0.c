/* speed.exe 006dc4b0 FUN_006dc4b0; analysis pseudocode, not buildable source.
 * calls 006d9a00 FUN_006d9a00
 * calls 00466330 FUN_00466330
 */

void __fastcall FUN_006dc4b0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087e4a8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00466330(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  local_4 = 0xffffffff;
  FUN_006d9a00();
  ExceptionList = local_c;
  return;
}

