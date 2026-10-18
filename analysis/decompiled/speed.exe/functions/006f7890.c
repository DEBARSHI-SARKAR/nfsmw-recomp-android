/* speed.exe 006f7890 FUN_006f7890; analysis pseudocode, not buildable source.
 * calls 006ef960 FUN_006ef960
 */

undefined4 * __fastcall FUN_006f7890(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087ed13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_008b0700;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = &PTR_FUN_008b0700;
  local_4 = 1;
  FUN_006ef960(8);
  FUN_006ef960(8);
  ExceptionList = local_c;
  return param_1;
}

