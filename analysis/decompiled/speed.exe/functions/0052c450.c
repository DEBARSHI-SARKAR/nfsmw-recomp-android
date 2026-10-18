/* speed.exe 0052c450 FUN_0052c450; analysis pseudocode, not buildable source.
 * calls 00527b80 FUN_00527b80
 * calls 00527b50 FUN_00527b50
 */

void __fastcall FUN_0052c450(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086f37b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089d34c;
  local_4 = 0;
  FUN_00527b80();
  local_4 = 0xffffffff;
  FUN_00527b50();
  ExceptionList = local_c;
  return;
}

