/* speed.exe 00565370 FUN_00565370; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_00565370(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00565350,param_1);
  *param_1 = &PTR_FUN_008a0300;
  return param_1;
}

