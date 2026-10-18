/* speed.exe 0052a750 FUN_0052a750; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0052a770 FUN_0052a770
 */

undefined4 __thiscall FUN_0052a750(undefined4 param_1,byte param_2)

{
  FUN_0052a770();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

