/* speed.exe 0075a9e0 FUN_0075a9e0; analysis pseudocode, not buildable source.
 * calls 007591b0 FUN_007591b0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0075a9e0(undefined4 param_1,byte param_2)

{
  FUN_007591b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

