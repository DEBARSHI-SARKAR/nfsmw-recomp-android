/* speed.exe 006b57b0 FUN_006b57b0; analysis pseudocode, not buildable source.
 * calls 006b1270 FUN_006b1270
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_006b57b0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d6f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_004039f0,param_1);
  local_4 = 0;
  FUN_006b1270();
  *param_1 = &PTR_FUN_008ac210;
  ExceptionList = local_c;
  return param_1;
}

