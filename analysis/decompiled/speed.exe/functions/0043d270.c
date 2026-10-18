/* speed.exe 0043d270 FUN_0043d270; analysis pseudocode, not buildable source.
 * calls 0043b1c0 FUN_0043b1c0
 */

undefined4 * __thiscall FUN_0043d270(undefined4 *param_1,undefined4 param_2)

{
  FUN_0043b1c0(param_2);
  *param_1 = &PTR_FUN_00892560;
  param_1[2] = &PTR_LAB_00892558;
  param_1[0x13] = &PTR_LAB_00892480;
  param_1[0x15] = &PTR_LAB_00892478;
  param_1[0x1d6] = &PTR_LAB_008923e8;
  param_1[0x1e9] = 0xbe99999a;
  *(undefined1 *)(param_1 + 0x1ea) = 0;
  return param_1;
}

