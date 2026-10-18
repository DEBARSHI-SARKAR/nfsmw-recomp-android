/* speed.exe 004cb9f0 FUN_004cb9f0; analysis pseudocode, not buildable source.
 * calls 004cab50 thunk_FUN_004c9240
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004cb9f0(undefined4 param_1,byte param_2)

{
  thunk_FUN_004c9240();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

