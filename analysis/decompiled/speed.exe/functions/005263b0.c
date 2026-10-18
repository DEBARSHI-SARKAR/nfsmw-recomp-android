/* speed.exe 005263b0 FUN_005263b0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007ec1b2 FUN_007ec1b2
 */

undefined4 * __thiscall FUN_005263b0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_0089ccb8;
  FUN_007ec1b2();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

