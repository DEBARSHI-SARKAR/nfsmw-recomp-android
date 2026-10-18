/* speed.exe 005b1a70 FUN_005b1a70; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005b1a60 FUN_005b1a60
 */

undefined4 __thiscall FUN_005b1a70(undefined4 param_1,byte param_2)

{
  FUN_005b1a60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

