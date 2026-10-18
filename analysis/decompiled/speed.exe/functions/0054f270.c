/* speed.exe 0054f270 FUN_0054f270; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005429a0 FUN_005429a0
 */

undefined4 __thiscall FUN_0054f270(undefined4 param_1,byte param_2)

{
  FUN_005429a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

