/* speed.exe 00546490 FUN_00546490; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005464b0 FUN_005464b0
 */

undefined4 __thiscall FUN_00546490(undefined4 param_1,byte param_2)

{
  FUN_005464b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

