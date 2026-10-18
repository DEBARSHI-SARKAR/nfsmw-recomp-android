/* speed.exe 007bf440 FUN_007bf440; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007ba530 FUN_007ba530
 */

undefined4 __thiscall FUN_007bf440(undefined4 param_1,byte param_2)

{
  FUN_007ba530();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

