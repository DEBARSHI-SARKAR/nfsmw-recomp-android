/* speed.exe 0052a600 FUN_0052a600; analysis pseudocode, not buildable source.
 * calls 00527a90 FUN_00527a90
 * calls 00527ac0 FUN_00527ac0
 */

void __fastcall FUN_0052a600(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086eedb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089d204;
  local_4 = 0;
  param_1[0x26] = &PTR_LAB_0089b10c;
  FUN_00527ac0();
  local_4 = 0xffffffff;
  FUN_00527a90();
  ExceptionList = local_c;
  return;
}

