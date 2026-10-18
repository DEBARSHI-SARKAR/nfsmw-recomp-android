/* speed.exe 00549b80 FUN_00549b80; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00534170 FUN_00534170
 */

undefined4 __thiscall FUN_00549b80(undefined4 param_1,byte param_2)

{
  FUN_00534170();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

