/* speed.exe 008358c4 FUN_008358c4; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00835344 FUN_00835344
 */

undefined4 __thiscall FUN_008358c4(undefined4 param_1,byte param_2)

{
  FUN_00835344();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

