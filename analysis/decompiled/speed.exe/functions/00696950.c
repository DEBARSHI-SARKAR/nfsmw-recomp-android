/* speed.exe 00696950 FUN_00696950; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_00696950(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00622540,param_1);
  param_1[2] = &PTR___purecall_008ab0a8;
  *param_1 = &PTR_FUN_008ab360;
  param_1[2] = &PTR___purecall_008ab070;
  return param_1;
}

