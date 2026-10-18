/* speed.exe 006b56b0 FUN_006b56b0; analysis pseudocode, not buildable source.
 * calls 006b5620 FUN_006b5620
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_006b56b0(undefined4 param_1,byte param_2)

{
  FUN_006b5620();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

