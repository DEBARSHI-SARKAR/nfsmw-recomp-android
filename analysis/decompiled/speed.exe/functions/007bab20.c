/* speed.exe 007bab20 FUN_007bab20; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007b5760 FUN_007b5760
 */

undefined4 __thiscall FUN_007bab20(undefined4 param_1,byte param_2)

{
  FUN_007b5760();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

