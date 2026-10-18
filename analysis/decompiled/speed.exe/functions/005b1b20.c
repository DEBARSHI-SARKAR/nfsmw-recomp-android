/* speed.exe 005b1b20 FUN_005b1b20; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005b1af0 FUN_005b1af0
 */

undefined4 __thiscall FUN_005b1b20(undefined4 param_1,byte param_2)

{
  FUN_005b1af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

