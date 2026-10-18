/* speed.exe 0075c480 FUN_0075c480; analysis pseudocode, not buildable source.
 * calls 0075ae00 thunk_FUN_00758890
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0075c480(undefined4 param_1,byte param_2)

{
  thunk_FUN_00758890();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

