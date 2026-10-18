/* speed.exe 005b7850 FUN_005b7850; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005b7870 FUN_005b7870
 */

undefined4 __thiscall FUN_005b7850(undefined4 param_1,byte param_2)

{
  FUN_005b7870();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

