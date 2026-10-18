/* speed.exe 00680eb0 FUN_00680eb0; analysis pseudocode, not buildable source.
 * calls 00680760 thunk_FUN_0067ce90
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00680eb0(undefined4 param_1,byte param_2)

{
  thunk_FUN_0067ce90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

