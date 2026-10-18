/* speed.exe 0068abb0 FUN_0068abb0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0068ab70 FUN_0068ab70
 */

undefined4 __thiscall FUN_0068abb0(undefined4 param_1,byte param_2)

{
  FUN_0068ab70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

