/* speed.exe 006f7cc0 FUN_006f7cc0; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_006f7cc0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_006200d0,param_1);
  *param_1 = &PTR_FUN_008b0798;
  return param_1;
}

