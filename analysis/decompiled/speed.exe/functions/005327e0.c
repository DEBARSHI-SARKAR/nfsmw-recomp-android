/* speed.exe 005327e0 FUN_005327e0; analysis pseudocode, not buildable source.
 * calls 00532800 FUN_00532800
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005327e0(undefined4 param_1,byte param_2)

{
  FUN_00532800();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

