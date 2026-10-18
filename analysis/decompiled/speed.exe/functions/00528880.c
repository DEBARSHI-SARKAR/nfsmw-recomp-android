/* speed.exe 00528880 FUN_00528880; analysis pseudocode, not buildable source.
 * calls 005288a0 FUN_005288a0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00528880(undefined4 param_1,byte param_2)

{
  FUN_005288a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

