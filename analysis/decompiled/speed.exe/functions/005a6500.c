/* speed.exe 005a6500 FUN_005a6500; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0059d4a0 FUN_0059d4a0
 */

undefined4 __thiscall FUN_005a6500(undefined4 param_1,byte param_2)

{
  FUN_0059d4a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

