/* speed.exe 006683b0 FUN_006683b0; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_006683b0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_004039d0,param_1);
  *param_1 = &PTR_FUN_008a93f4;
  return param_1;
}

