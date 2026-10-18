/* speed.exe 005a0120 FUN_005a0120; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005a0140 FUN_005a0140
 */

undefined4 __thiscall FUN_005a0120(undefined4 param_1,byte param_2)

{
  FUN_005a0140();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

