/* speed.exe 0054bc30 FUN_0054bc30; analysis pseudocode, not buildable source.
 * calls 0053e210 FUN_0053e210
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0054bc30(undefined4 param_1,byte param_2)

{
  FUN_0053e210();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

