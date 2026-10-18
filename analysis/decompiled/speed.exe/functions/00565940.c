/* speed.exe 00565940 FUN_00565940; analysis pseudocode, not buildable source.
 * calls 00565900 FUN_00565900
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00565940(undefined4 param_1,byte param_2)

{
  FUN_00565900();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

