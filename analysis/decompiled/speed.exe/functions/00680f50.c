/* speed.exe 00680f50 FUN_00680f50; analysis pseudocode, not buildable source.
 * calls 00680770 thunk_FUN_0067d0c0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00680f50(undefined4 param_1,byte param_2)

{
  thunk_FUN_0067d0c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

