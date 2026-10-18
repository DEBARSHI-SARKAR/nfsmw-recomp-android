/* speed.exe 00534f00 FUN_00534f00; analysis pseudocode, not buildable source.
 * calls 00534f20 FUN_00534f20
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00534f00(undefined4 param_1,byte param_2)

{
  FUN_00534f20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

