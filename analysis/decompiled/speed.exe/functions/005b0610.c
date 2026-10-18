/* speed.exe 005b0610 FUN_005b0610; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005b0630 FUN_005b0630
 */

undefined4 __thiscall FUN_005b0610(undefined4 param_1,byte param_2)

{
  FUN_005b0630();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

