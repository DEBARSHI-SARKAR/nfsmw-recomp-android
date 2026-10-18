/* speed.exe 005a0e40 FUN_005a0e40; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005a0e60 FUN_005a0e60
 */

undefined4 __thiscall FUN_005a0e40(undefined4 param_1,byte param_2)

{
  FUN_005a0e60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

