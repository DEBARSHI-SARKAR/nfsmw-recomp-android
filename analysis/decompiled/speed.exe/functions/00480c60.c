/* speed.exe 00480c60 FUN_00480c60; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 00479070 FUN_00479070
 */

undefined4 * __thiscall FUN_00480c60(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086a548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_004678b0,param_1);
  local_4 = 0;
  FUN_00479070();
  *param_1 = &PTR_FUN_008950fc;
  ExceptionList = local_c;
  return param_1;
}

