/* speed.exe 00516d10 FUN_00516d10; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00516d00 FUN_00516d00
 */

undefined4 __thiscall FUN_00516d10(undefined4 param_1,byte param_2)

{
  FUN_00516d00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

