/* speed.exe 004c3e60 FUN_004c3e60; analysis pseudocode, not buildable source.
 * calls 004ba200 FUN_004ba200
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004c3e60(undefined4 param_1,byte param_2)

{
  FUN_004ba200();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

