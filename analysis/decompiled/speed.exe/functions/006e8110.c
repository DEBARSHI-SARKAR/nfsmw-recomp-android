/* speed.exe 006e8110 FUN_006e8110; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_006e8110(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00402840,param_1);
  *param_1 = &PTR_FUN_008b03cc;
  return param_1;
}

