/* speed.exe 00528550 FUN_00528550; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00528570 FUN_00528570
 */

undefined4 __thiscall FUN_00528550(undefined4 param_1,byte param_2)

{
  FUN_00528570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

