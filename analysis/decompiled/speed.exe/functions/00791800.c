/* speed.exe 00791800 FUN_00791800; analysis pseudocode, not buildable source.
 * calls 0078d9c0 thunk_FUN_00572360
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00791800(undefined4 param_1,byte param_2)

{
  thunk_FUN_00572360();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

