/* speed.exe 0042e2f0 FUN_0042e2f0; analysis pseudocode, not buildable source.
 * calls 0042e260 FUN_0042e260
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0042e2f0(undefined4 param_1,byte param_2)

{
  FUN_0042e260();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

