/* speed.exe 005a0660 FUN_005a0660; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005a0680 FUN_005a0680
 */

undefined4 __thiscall FUN_005a0660(undefined4 param_1,byte param_2)

{
  FUN_005a0680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

