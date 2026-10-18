/* speed.exe 0054d460 FUN_0054d460; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00540c50 FUN_00540c50
 */

undefined4 __thiscall FUN_0054d460(undefined4 param_1,byte param_2)

{
  FUN_00540c50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

