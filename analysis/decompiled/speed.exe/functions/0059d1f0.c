/* speed.exe 0059d1f0 FUN_0059d1f0; analysis pseudocode, not buildable source.
 * calls 0059d210 FUN_0059d210
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0059d1f0(undefined4 param_1,byte param_2)

{
  FUN_0059d210();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

