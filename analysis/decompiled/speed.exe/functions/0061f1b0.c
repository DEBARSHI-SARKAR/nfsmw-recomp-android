/* speed.exe 0061f1b0 FUN_0061f1b0; analysis pseudocode, not buildable source.
 * calls 0061f170 FUN_0061f170
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0061f1b0(undefined4 param_1,byte param_2)

{
  FUN_0061f170();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

