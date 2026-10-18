/* speed.exe 00667d50 FUN_00667d50; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_00667d50(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00667d30,param_1);
  *param_1 = &PTR_FUN_008a93b8;
  return param_1;
}

