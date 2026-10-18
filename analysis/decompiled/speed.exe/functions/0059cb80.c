/* speed.exe 0059cb80 FUN_0059cb80; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0059cba0 FUN_0059cba0
 */

undefined4 __thiscall FUN_0059cb80(undefined4 param_1,byte param_2)

{
  FUN_0059cba0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

