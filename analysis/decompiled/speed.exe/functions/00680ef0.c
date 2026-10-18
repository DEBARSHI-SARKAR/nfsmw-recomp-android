/* speed.exe 00680ef0 FUN_00680ef0; analysis pseudocode, not buildable source.
 * calls 006806c0 thunk_FUN_0067cf70
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00680ef0(undefined4 param_1,byte param_2)

{
  thunk_FUN_0067cf70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

