/* speed.exe 00528b90 FUN_00528b90; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00528bb0 FUN_00528bb0
 */

undefined4 __thiscall FUN_00528b90(undefined4 param_1,byte param_2)

{
  FUN_00528bb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

