/* speed.exe 00512a60 FUN_00512a60; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00512a80 FUN_00512a80
 */

undefined4 __thiscall FUN_00512a60(undefined4 param_1,byte param_2)

{
  FUN_00512a80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

