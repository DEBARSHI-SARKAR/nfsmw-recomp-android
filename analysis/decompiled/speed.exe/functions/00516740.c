/* speed.exe 00516740 FUN_00516740; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00516730 FUN_00516730
 */

undefined4 __thiscall FUN_00516740(undefined4 param_1,byte param_2)

{
  FUN_00516730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

