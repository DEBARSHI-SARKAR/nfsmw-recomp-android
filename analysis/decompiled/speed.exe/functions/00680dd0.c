/* speed.exe 00680dd0 FUN_00680dd0; analysis pseudocode, not buildable source.
 * calls 00680730 thunk_FUN_0067cb80
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00680dd0(undefined4 param_1,byte param_2)

{
  thunk_FUN_0067cb80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

