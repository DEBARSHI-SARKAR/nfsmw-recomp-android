/* speed.exe 00528aa0 FUN_00528aa0; analysis pseudocode, not buildable source.
 * calls 00528ac0 FUN_00528ac0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00528aa0(undefined4 param_1,byte param_2)

{
  FUN_00528ac0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

