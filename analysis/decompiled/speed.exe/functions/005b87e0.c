/* speed.exe 005b87e0 FUN_005b87e0; analysis pseudocode, not buildable source.
 * calls 005b1560 FUN_005b1560
 */

void __fastcall FUN_005b87e0(int param_1)

{
  undefined **local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00873f88;
  local_c = ExceptionList;
  local_18 = &PTR_FUN_008a2cd0;
  local_10 = param_1 + 0x68;
  local_4 = 0;
  ExceptionList = &local_c;
  local_14 = param_1;
  FUN_005b1560(&local_18);
  ExceptionList = local_c;
  return;
}

