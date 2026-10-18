/* speed.exe 004456c0 FUN_004456c0; analysis pseudocode, not buildable source.
 * calls 00445680 FUN_00445680
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004456c0(undefined4 param_1,byte param_2)

{
  FUN_00445680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

