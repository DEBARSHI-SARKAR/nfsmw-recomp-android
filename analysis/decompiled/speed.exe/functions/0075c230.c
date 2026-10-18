/* speed.exe 0075c230 FUN_0075c230; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0075a650 FUN_0075a650
 */

undefined4 __thiscall FUN_0075c230(undefined4 param_1,byte param_2)

{
  FUN_0075a650();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

