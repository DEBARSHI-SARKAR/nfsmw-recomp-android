/* speed.exe 00565290 FUN_00565290; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_00565290(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00565270,param_1);
  *param_1 = &PTR_FUN_008a02f4;
  return param_1;
}

