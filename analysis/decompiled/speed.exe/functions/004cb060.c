/* speed.exe 004cb060 FUN_004cb060; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004ca010 FUN_004ca010
 */

undefined4 __thiscall FUN_004cb060(undefined4 param_1,byte param_2)

{
  FUN_004ca010();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

