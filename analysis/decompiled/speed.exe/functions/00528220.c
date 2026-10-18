/* speed.exe 00528220 FUN_00528220; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00528240 FUN_00528240
 */

undefined4 __thiscall FUN_00528220(undefined4 param_1,byte param_2)

{
  FUN_00528240();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

