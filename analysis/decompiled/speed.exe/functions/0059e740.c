/* speed.exe 0059e740 FUN_0059e740; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0059e760 FUN_0059e760
 */

undefined4 __thiscall FUN_0059e740(undefined4 param_1,byte param_2)

{
  FUN_0059e760();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

