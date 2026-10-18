/* speed.exe 005b9580 FUN_005b9580; analysis pseudocode, not buildable source.
 * calls 005b9570 FUN_005b9570
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005b9580(undefined4 param_1,byte param_2)

{
  FUN_005b9570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

