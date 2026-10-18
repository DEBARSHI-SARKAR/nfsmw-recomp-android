/* speed.exe 005b5b90 FUN_005b5b90; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005af210 FUN_005af210
 */

undefined4 __thiscall FUN_005b5b90(undefined4 param_1,byte param_2)

{
  FUN_005af210();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

