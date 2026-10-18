/* speed.exe 0059ca00 FUN_0059ca00; analysis pseudocode, not buildable source.
 * calls 005947f0 FUN_005947f0
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_0059ca00(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872e88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00565030,param_1);
  local_4 = 0;
  FUN_005947f0();
  *param_1 = &PTR_FUN_008a1e88;
  ExceptionList = local_c;
  return param_1;
}

