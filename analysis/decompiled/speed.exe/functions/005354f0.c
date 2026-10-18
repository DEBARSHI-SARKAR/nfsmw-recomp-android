/* speed.exe 005354f0 FUN_005354f0; analysis pseudocode, not buildable source.
 * calls 00535510 FUN_00535510
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005354f0(undefined4 param_1,byte param_2)

{
  FUN_00535510();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

