/* speed.exe 0050d780 FUN_0050d780; analysis pseudocode, not buildable source.
 * calls 005bc050 FUN_005bc050
 * calls 005b9170 FUN_005b9170
 */

undefined4 * __fastcall FUN_0050d780(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e1b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bc050();
  local_4 = 0;
  *param_1 = &PTR_FUN_0089b05c;
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffff;
  FUN_005b9170();
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[6] = 2;
  ExceptionList = local_c;
  return param_1;
}

