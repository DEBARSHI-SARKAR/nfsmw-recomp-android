/* speed.exe 005ef040 FUN_005ef040; analysis pseudocode, not buildable source.
 * calls 005ee720 FUN_005ee720
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005ef040(undefined4 param_1,byte param_2)

{
  FUN_005ee720();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

