/* speed.exe 00586490 FUN_00586490; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00586490(undefined4 param_1,byte param_2)

{
  FUN_00572360();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

