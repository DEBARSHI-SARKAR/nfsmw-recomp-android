/* speed.exe 00643be0 FUN_00643be0; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 0063f9f0 FUN_0063f9f0
 */

undefined4 * __thiscall FUN_00643be0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00879bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00620fc0,param_1);
  local_4 = 0;
  FUN_0063f9f0();
  *param_1 = &PTR_FUN_008a7e18;
  ExceptionList = local_c;
  return param_1;
}

