/* speed.exe 004047b0 FUN_004047b0; analysis pseudocode, not buildable source.
 * calls 00765850 FUN_00765850
 * calls 0076e220 FUN_0076e220
 */

void __fastcall FUN_004047b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00867608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00890bf4;
  local_4 = 0;
  FUN_00765850(0);
  local_4 = 0xffffffff;
  FUN_0076e220();
  ExceptionList = local_c;
  return;
}

