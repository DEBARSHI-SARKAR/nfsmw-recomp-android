/* speed.exe 00667d80 FUN_00667d80; analysis pseudocode, not buildable source.
 * calls 00667d40 FUN_00667d40
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00667d80(undefined4 param_1,byte param_2)

{
  FUN_00667d40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

