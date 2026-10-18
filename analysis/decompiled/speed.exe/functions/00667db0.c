/* speed.exe 00667db0 FUN_00667db0; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_00667db0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00404ff0,param_1);
  *param_1 = &PTR_FUN_008a93c0;
  return param_1;
}

