/* speed.exe 0058bc60 FUN_0058bc60; analysis pseudocode, not buildable source.
 * calls 0058bc80 FUN_0058bc80
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0058bc60(undefined4 param_1,byte param_2)

{
  FUN_0058bc80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

