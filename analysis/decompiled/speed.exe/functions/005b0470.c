/* speed.exe 005b0470 FUN_005b0470; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005b0440 FUN_005b0440
 */

undefined4 __thiscall FUN_005b0470(undefined4 param_1,byte param_2)

{
  FUN_005b0440();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

