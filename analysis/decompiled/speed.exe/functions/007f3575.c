/* speed.exe 007f3575 FUN_007f3575; analysis pseudocode, not buildable source.
 * calls 007f3534 FUN_007f3534
 */

undefined4 * __thiscall FUN_007f3575(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_008c2370;
  FUN_007f3534();
  param_1[1] = param_2;
  param_1[2] = param_3;
  return param_1;
}

