/* speed.exe 004509b0 FUN_004509b0; analysis pseudocode, not buildable source.
 * calls 00450660 FUN_00450660
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004509b0(undefined4 param_1,byte param_2)

{
  FUN_00450660();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

