/* speed.exe 00589490 FUN_00589490; analysis pseudocode, not buildable source.
 * calls 005894b0 FUN_005894b0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00589490(undefined4 param_1,byte param_2)

{
  FUN_005894b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

