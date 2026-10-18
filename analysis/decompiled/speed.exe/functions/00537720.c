/* speed.exe 00537720 FUN_00537720; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00537740 FUN_00537740
 */

undefined4 __thiscall FUN_00537720(undefined4 param_1,byte param_2)

{
  FUN_00537740();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

