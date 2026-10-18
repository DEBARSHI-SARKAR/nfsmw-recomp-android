/* speed.exe 004cb200 FUN_004cb200; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004ca150 FUN_004ca150
 */

undefined4 __thiscall FUN_004cb200(undefined4 param_1,byte param_2)

{
  FUN_004ca150();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

