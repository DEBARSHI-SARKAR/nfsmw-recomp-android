/* speed.exe 007f326c FUN_007f326c; analysis pseudocode, not buildable source.
 * calls 007f320f FUN_007f320f
 */

undefined4 * __thiscall FUN_007f326c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007f320f(0,param_2);
  param_1[0x119] = param_3;
  *param_1 = &PTR_FUN_008c2328;
  return param_1;
}

