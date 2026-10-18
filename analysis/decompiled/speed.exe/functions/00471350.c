/* speed.exe 00471350 FUN_00471350; analysis pseudocode, not buildable source.
 * calls 00468f80 FUN_00468f80
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00471350(undefined4 param_1,byte param_2)

{
  FUN_00468f80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

