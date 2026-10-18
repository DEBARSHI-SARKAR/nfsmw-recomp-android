/* speed.exe 00517310 FUN_00517310; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00517300 FUN_00517300
 */

undefined4 __thiscall FUN_00517310(undefined4 param_1,byte param_2)

{
  FUN_00517300();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

