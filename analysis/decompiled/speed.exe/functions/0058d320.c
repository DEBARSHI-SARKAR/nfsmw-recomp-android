/* speed.exe 0058d320 FUN_0058d320; analysis pseudocode, not buildable source.
 * calls 0057d420 FUN_0057d420
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0058d320(undefined4 param_1,byte param_2)

{
  FUN_0057d420();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

