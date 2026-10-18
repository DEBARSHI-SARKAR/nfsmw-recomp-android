/* speed.exe 00561450 FUN_00561450; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00561470 FUN_00561470
 */

undefined4 __thiscall FUN_00561450(undefined4 param_1,byte param_2)

{
  FUN_00561470();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

