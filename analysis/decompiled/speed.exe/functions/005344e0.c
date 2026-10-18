/* speed.exe 005344e0 FUN_005344e0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00534500 FUN_00534500
 */

undefined4 __thiscall FUN_005344e0(undefined4 param_1,byte param_2)

{
  FUN_00534500();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

