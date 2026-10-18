/* speed.exe 0066fc40 FUN_0066fc40; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_0066fc40(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00668430,param_1);
  DAT_0092c670 = DAT_0092c670 + 1;
  *param_1 = &PTR_FUN_008a96cc;
  return param_1;
}

