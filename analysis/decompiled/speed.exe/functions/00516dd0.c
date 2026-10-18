/* speed.exe 00516dd0 FUN_00516dd0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0056fd30 FUN_0056fd30
 */

undefined4 __thiscall FUN_00516dd0(undefined4 param_1,byte param_2)

{
  FUN_0056fd30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

