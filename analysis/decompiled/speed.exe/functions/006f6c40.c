/* speed.exe 006f6c40 FUN_006f6c40; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 006f3670 FUN_006f3670
 */

undefined4 * __thiscall FUN_006f6c40(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ec78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_004028f0,param_1);
  local_4 = 0;
  FUN_006f3670();
  *param_1 = &PTR_FUN_008b0730;
  ExceptionList = local_c;
  return param_1;
}

