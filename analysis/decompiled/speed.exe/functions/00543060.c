/* speed.exe 00543060 FUN_00543060; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00543080 FUN_00543080
 */

undefined4 __thiscall FUN_00543060(undefined4 param_1,byte param_2)

{
  FUN_00543080();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

