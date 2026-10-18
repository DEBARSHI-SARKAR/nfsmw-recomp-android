/* speed.exe 0069bf40 FUN_0069bf40; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0068c800 FUN_0068c800
 */

undefined4 __thiscall FUN_0069bf40(undefined4 param_1,byte param_2)

{
  FUN_0068c800();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

