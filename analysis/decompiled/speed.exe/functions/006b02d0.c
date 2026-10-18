/* speed.exe 006b02d0 FUN_006b02d0; analysis pseudocode, not buildable source.
 * calls 006b02f0 thunk_FUN_0069b810
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_006b02d0(undefined4 param_1,byte param_2)

{
  thunk_FUN_0069b810();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

