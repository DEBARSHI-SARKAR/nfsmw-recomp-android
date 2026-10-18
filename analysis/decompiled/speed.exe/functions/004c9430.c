/* speed.exe 004c9430 FUN_004c9430; analysis pseudocode, not buildable source.
 * calls 004c9240 FUN_004c9240
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004c9430(undefined4 param_1,byte param_2)

{
  FUN_004c9240();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

