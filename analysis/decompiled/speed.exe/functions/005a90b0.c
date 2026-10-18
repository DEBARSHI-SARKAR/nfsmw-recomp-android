/* speed.exe 005a90b0 FUN_005a90b0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005a90d0 FUN_005a90d0
 */

undefined4 __thiscall FUN_005a90b0(undefined4 param_1,byte param_2)

{
  FUN_005a90d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

