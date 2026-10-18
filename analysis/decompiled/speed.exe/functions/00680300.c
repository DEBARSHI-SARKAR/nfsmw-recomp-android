/* speed.exe 00680300 FUN_00680300; analysis pseudocode, not buildable source.
 * calls 0067ec10 FUN_0067ec10
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00680300(undefined4 param_1,byte param_2)

{
  FUN_0067ec10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

