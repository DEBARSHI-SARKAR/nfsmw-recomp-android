/* speed.exe 00680320 FUN_00680320; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0067eb90 FUN_0067eb90
 */

undefined4 __thiscall FUN_00680320(undefined4 param_1,byte param_2)

{
  FUN_0067eb90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

