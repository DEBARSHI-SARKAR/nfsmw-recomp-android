/* speed.exe 004c93b0 FUN_004c93b0; analysis pseudocode, not buildable source.
 * calls 004c8f80 FUN_004c8f80
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004c93b0(undefined4 param_1,byte param_2)

{
  FUN_004c8f80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

