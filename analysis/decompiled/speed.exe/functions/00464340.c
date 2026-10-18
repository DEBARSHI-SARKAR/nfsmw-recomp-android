/* speed.exe 00464340 FUN_00464340; analysis pseudocode, not buildable source.
 * calls 00462790 FUN_00462790
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00464340(undefined4 param_1,byte param_2)

{
  FUN_00462790();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

