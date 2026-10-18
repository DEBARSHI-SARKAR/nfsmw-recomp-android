/* speed.exe 00533760 FUN_00533760; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00533780 FUN_00533780
 */

undefined4 __thiscall FUN_00533760(undefined4 param_1,byte param_2)

{
  FUN_00533780();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

