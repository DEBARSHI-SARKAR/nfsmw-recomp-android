/* speed.exe 00537610 FUN_00537610; analysis pseudocode, not buildable source.
 * calls 00537630 FUN_00537630
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00537610(undefined4 param_1,byte param_2)

{
  FUN_00537630();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

