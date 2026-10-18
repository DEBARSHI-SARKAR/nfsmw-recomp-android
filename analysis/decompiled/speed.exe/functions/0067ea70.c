/* speed.exe 0067ea70 FUN_0067ea70; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 00675eb0 FUN_00675eb0
 */

undefined4 * __thiscall FUN_0067ea70(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087b168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00668420,param_1);
  local_4 = 0;
  FUN_00675eb0();
  *param_1 = &PTR_FUN_008aa22c;
  ExceptionList = local_c;
  return param_1;
}

