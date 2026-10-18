/* speed.exe 0081d9e4 FUN_0081d9e4; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0081d9ac FUN_0081d9ac
 */

undefined4 __thiscall FUN_0081d9e4(undefined4 param_1,byte param_2)

{
  FUN_0081d9ac();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

