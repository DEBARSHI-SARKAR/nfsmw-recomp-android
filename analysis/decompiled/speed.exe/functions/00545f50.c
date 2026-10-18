/* speed.exe 00545f50 FUN_00545f50; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0052a780 FUN_0052a780
 */

undefined4 __thiscall FUN_00545f50(undefined4 param_1,byte param_2)

{
  FUN_0052a780();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

