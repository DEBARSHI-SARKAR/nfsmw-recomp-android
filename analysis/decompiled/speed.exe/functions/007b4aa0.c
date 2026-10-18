/* speed.exe 007b4aa0 FUN_007b4aa0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007b4ac0 FUN_007b4ac0
 */

undefined4 __thiscall FUN_007b4aa0(undefined4 param_1,byte param_2)

{
  FUN_007b4ac0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

