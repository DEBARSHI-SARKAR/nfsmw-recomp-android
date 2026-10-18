/* speed.exe 00524160 FUN_00524160; analysis pseudocode, not buildable source.
 * calls 00514190 FUN_00514190
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00524160(undefined4 param_1,byte param_2)

{
  FUN_00514190();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

