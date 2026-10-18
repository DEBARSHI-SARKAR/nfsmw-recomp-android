/* speed.exe 00403870 FUN_00403870; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_00403870(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00403850,param_1);
  *param_1 = &PTR_FUN_00890af0;
  return param_1;
}

