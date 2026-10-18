/* speed.exe 00621e60 FUN_00621e60; analysis pseudocode, not buildable source.
 * calls 00621e20 FUN_00621e20
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00621e60(undefined4 param_1,byte param_2)

{
  FUN_00621e20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

