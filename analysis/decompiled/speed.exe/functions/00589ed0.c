/* speed.exe 00589ed0 FUN_00589ed0; analysis pseudocode, not buildable source.
 * calls 00589ef0 FUN_00589ef0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00589ed0(undefined4 param_1,byte param_2)

{
  FUN_00589ef0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

