/* speed.exe 005dae00 FUN_005dae00; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005dadc0 FUN_005dadc0
 */

undefined4 __thiscall FUN_005dae00(undefined4 param_1,byte param_2)

{
  FUN_005dadc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

