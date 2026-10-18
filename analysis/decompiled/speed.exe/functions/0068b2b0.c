/* speed.exe 0068b2b0 FUN_0068b2b0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0068b270 FUN_0068b270
 */

undefined4 __thiscall FUN_0068b2b0(undefined4 param_1,byte param_2)

{
  FUN_0068b270();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

