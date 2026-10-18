/* speed.exe 005bec10 FUN_005bec10; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005bc0c0 FUN_005bc0c0
 */

undefined4 __thiscall FUN_005bec10(undefined4 param_1,byte param_2)

{
  FUN_005bc0c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

