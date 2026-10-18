/* speed.exe 00534570 FUN_00534570; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00534590 FUN_00534590
 */

undefined4 __thiscall FUN_00534570(undefined4 param_1,byte param_2)

{
  FUN_00534590();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

