/* speed.exe 00565760 FUN_00565760; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_00565760(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00565740,param_1);
  *param_1 = &PTR_FUN_008a03d0;
  return param_1;
}

