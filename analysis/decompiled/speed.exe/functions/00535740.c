/* speed.exe 00535740 FUN_00535740; analysis pseudocode, not buildable source.
 * calls 00521b50 FUN_00521b50
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00535740(undefined4 param_1,byte param_2)

{
  FUN_00521b50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

