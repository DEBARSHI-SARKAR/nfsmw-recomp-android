/* speed.exe 0053aa50 FUN_0053aa50; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0053aa70 FUN_0053aa70
 */

undefined4 __thiscall FUN_0053aa50(undefined4 param_1,byte param_2)

{
  FUN_0053aa70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

