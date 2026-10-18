/* speed.exe 00468410 FUN_00468410; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_00468410(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00402820,param_1);
  *param_1 = &PTR_FUN_00894974;
  return param_1;
}

