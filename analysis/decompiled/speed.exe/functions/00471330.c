/* speed.exe 00471330 FUN_00471330; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00468f10 FUN_00468f10
 */

undefined4 __thiscall FUN_00471330(undefined4 param_1,byte param_2)

{
  FUN_00468f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

