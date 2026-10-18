/* speed.exe 00710130 FUN_00710130; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0070f800 FUN_0070f800
 */

undefined4 __thiscall FUN_00710130(undefined4 param_1,byte param_2)

{
  FUN_0070f800();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

