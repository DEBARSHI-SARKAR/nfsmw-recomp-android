/* speed.exe 00528280 FUN_00528280; analysis pseudocode, not buildable source.
 * calls 005282a0 FUN_005282a0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00528280(undefined4 param_1,byte param_2)

{
  FUN_005282a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

