/* speed.exe 00524830 FUN_00524830; analysis pseudocode, not buildable source.
 * calls 00514c60 FUN_00514c60
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00524830(undefined4 param_1,byte param_2)

{
  FUN_00514c60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

