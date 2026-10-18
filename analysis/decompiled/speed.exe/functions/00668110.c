/* speed.exe 00668110 FUN_00668110; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_00668110(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_006680f0,param_1);
  *param_1 = &PTR_FUN_008a93ec;
  return param_1;
}

