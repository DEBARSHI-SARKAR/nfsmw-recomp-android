/* speed.exe 007bf1f0 FUN_007bf1f0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007bf210 FUN_007bf210
 */

undefined4 __thiscall FUN_007bf1f0(undefined4 param_1,byte param_2)

{
  FUN_007bf210();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

