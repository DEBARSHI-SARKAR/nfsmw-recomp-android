/* speed.exe 00463d60 FUN_00463d60; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00460750 FUN_00460750
 */

undefined4 __thiscall FUN_00463d60(undefined4 param_1,byte param_2)

{
  FUN_00460750();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

