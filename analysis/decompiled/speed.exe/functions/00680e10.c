/* speed.exe 00680e10 FUN_00680e10; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006806e0 thunk_FUN_0067cc60
 */

undefined4 __thiscall FUN_00680e10(undefined4 param_1,byte param_2)

{
  thunk_FUN_0067cc60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

