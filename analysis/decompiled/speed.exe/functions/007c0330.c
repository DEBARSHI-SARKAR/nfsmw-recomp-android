/* speed.exe 007c0330 FUN_007c0330; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007bd780 FUN_007bd780
 */

undefined4 __thiscall FUN_007c0330(undefined4 param_1,byte param_2)

{
  FUN_007bd780();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

