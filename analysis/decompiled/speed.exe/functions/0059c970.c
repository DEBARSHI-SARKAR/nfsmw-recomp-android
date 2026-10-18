/* speed.exe 0059c970 FUN_0059c970; analysis pseudocode, not buildable source.
 * calls 0059c930 FUN_0059c930
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0059c970(undefined4 param_1,byte param_2)

{
  FUN_0059c930();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

