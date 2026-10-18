/* speed.exe 004b8860 FUN_004b8860; analysis pseudocode, not buildable source.
 * calls 004b8800 FUN_004b8800
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004b8860(undefined4 param_1,byte param_2)

{
  FUN_004b8800();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

