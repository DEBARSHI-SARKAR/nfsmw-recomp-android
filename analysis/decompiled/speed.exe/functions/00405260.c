/* speed.exe 00405260 FUN_00405260; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_00405260(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00405240,param_1);
  *param_1 = &PTR_FUN_00890c1c;
  return param_1;
}

