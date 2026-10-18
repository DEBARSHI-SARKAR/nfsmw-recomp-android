/* speed.exe 005f8060 FUN_005f8060; analysis pseudocode, not buildable source.
 * calls 005f7030 FUN_005f7030
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005f8060(undefined4 param_1,byte param_2)

{
  FUN_005f7030();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

