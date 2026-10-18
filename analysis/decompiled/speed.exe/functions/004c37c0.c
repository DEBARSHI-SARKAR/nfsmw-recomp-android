/* speed.exe 004c37c0 FUN_004c37c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004b9390 FUN_004b9390
 */

undefined4 __thiscall FUN_004c37c0(undefined4 param_1,byte param_2)

{
  FUN_004b9390();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

