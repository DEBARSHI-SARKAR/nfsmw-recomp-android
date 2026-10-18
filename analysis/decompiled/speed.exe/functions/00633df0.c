/* speed.exe 00633df0 FUN_00633df0; analysis pseudocode, not buildable source.
 * calls 005d8660 FUN_005d8660
 */

undefined4 * __thiscall FUN_00633df0(undefined4 *param_1,undefined4 param_2)

{
  FUN_005d8660(4);
  param_1[9] = param_2;
  *param_1 = &PTR_FUN_008a7b50;
  param_1[10] = 0x3f800000;
  return param_1;
}

