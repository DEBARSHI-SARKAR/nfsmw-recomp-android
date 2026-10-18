/* speed.exe 00680440 FUN_00680440; analysis pseudocode, not buildable source.
 * calls 0067eb50 thunk_FUN_0067c950
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00680440(undefined4 param_1,byte param_2)

{
  thunk_FUN_0067c950();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

