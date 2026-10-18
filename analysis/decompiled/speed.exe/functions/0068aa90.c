/* speed.exe 0068aa90 FUN_0068aa90; analysis pseudocode, not buildable source.
 * calls 0068aa50 FUN_0068aa50
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0068aa90(undefined4 param_1,byte param_2)

{
  FUN_0068aa50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

