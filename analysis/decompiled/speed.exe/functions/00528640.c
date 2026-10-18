/* speed.exe 00528640 FUN_00528640; analysis pseudocode, not buildable source.
 * calls 00528660 FUN_00528660
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00528640(undefined4 param_1,byte param_2)

{
  FUN_00528660();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

