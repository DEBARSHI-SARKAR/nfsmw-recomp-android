/* speed.exe 0054b210 FUN_0054b210; analysis pseudocode, not buildable source.
 * calls 0053aa80 FUN_0053aa80
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0054b210(undefined4 param_1,byte param_2)

{
  FUN_0053aa80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

