/* speed.exe 005b59a0 FUN_005b59a0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005aee60 FUN_005aee60
 */

undefined4 __thiscall FUN_005b59a0(undefined4 param_1,byte param_2)

{
  FUN_005aee60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

