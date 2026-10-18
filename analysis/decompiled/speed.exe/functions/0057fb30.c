/* speed.exe 0057fb30 FUN_0057fb30; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0057f8c0 FUN_0057f8c0
 */

undefined4 __thiscall FUN_0057fb30(undefined4 param_1,byte param_2)

{
  FUN_0057f8c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

