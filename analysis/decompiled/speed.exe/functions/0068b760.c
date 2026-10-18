/* speed.exe 0068b760 FUN_0068b760; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_0068b760(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00620fd0,param_1);
  *param_1 = &PTR_FUN_008ab104;
  return param_1;
}

