/* speed.exe 004e83c0 FUN_004e83c0; analysis pseudocode, not buildable source.
 * calls 004e83e0 thunk_FUN_004b5d50
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004e83c0(undefined4 param_1,byte param_2)

{
  thunk_FUN_004b5d50();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

