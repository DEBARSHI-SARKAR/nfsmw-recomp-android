/* speed.exe 0068a780 FUN_0068a780; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_0068a780(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00403f90,param_1);
  *param_1 = &PTR_FUN_008aae98;
  return param_1;
}

