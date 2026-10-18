/* speed.exe 0067e880 FUN_0067e880; analysis pseudocode, not buildable source.
 * calls 00679720 FUN_00679720
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_0067e880(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087b128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00402830,param_1);
  local_4 = 0;
  FUN_00679720();
  *param_1 = &PTR_FUN_008aa098;
  ExceptionList = local_c;
  return param_1;
}

