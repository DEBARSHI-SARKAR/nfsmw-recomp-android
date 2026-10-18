/* speed.exe 0075a970 FUN_0075a970; analysis pseudocode, not buildable source.
 * calls 0074cb50 FUN_0074cb50
 */

undefined4 * __fastcall FUN_0075a970(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00881208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008b51a8;
  FUN_0074cb50(0x14);
  ExceptionList = local_c;
  return param_1;
}

