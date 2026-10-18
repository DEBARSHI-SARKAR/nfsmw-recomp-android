/* speed.exe 00565450 FUN_00565450; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_00565450(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00565430,param_1);
  *param_1 = &PTR_FUN_008a0310;
  return param_1;
}

