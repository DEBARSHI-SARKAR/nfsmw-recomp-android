/* speed.exe 00565680 FUN_00565680; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_00565680(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00565660,param_1);
  *param_1 = &PTR_FUN_008a039c;
  return param_1;
}

