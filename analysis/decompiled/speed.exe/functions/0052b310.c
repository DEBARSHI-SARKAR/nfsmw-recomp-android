/* speed.exe 0052b310 FUN_0052b310; analysis pseudocode, not buildable source.
 * calls 0052b330 FUN_0052b330
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0052b310(undefined4 param_1,byte param_2)

{
  FUN_0052b330();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

