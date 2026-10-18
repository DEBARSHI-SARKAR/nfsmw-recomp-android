/* speed.exe 00534f60 FUN_00534f60; analysis pseudocode, not buildable source.
 * calls 00534f80 FUN_00534f80
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00534f60(undefined4 param_1,byte param_2)

{
  FUN_00534f80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

