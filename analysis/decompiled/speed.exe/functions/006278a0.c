/* speed.exe 006278a0 FUN_006278a0; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_006278a0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00627880,param_1);
  *param_1 = &PTR_FUN_008a7a1c;
  return param_1;
}

