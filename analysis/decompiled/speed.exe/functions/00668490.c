/* speed.exe 00668490 FUN_00668490; analysis pseudocode, not buildable source.
 * calls 00668450 FUN_00668450
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00668490(undefined4 param_1,byte param_2)

{
  FUN_00668450();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

