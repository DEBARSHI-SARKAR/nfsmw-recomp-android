/* speed.exe 004cccd0 FUN_004cccd0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004cc6a0 thunk_FUN_004c9240
 */

undefined4 __thiscall FUN_004cccd0(undefined4 param_1,byte param_2)

{
  thunk_FUN_004c9240();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

