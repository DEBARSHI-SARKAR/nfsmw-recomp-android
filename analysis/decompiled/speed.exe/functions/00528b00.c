/* speed.exe 00528b00 FUN_00528b00; analysis pseudocode, not buildable source.
 * calls 00528b20 FUN_00528b20
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00528b00(undefined4 param_1,byte param_2)

{
  FUN_00528b20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

