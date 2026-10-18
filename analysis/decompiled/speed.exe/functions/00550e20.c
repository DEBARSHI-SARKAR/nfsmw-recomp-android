/* speed.exe 00550e20 FUN_00550e20; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00550e40 FUN_00550e40
 */

undefined4 __thiscall FUN_00550e20(undefined4 param_1,byte param_2)

{
  FUN_00550e40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

