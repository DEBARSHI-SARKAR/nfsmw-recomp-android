/* speed.exe 0067e990 FUN_0067e990; analysis pseudocode, not buildable source.
 * calls 0067e900 FUN_0067e900
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0067e990(undefined4 param_1,byte param_2)

{
  FUN_0067e900();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

