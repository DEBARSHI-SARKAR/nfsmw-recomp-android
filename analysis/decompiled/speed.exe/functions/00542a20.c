/* speed.exe 00542a20 FUN_00542a20; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00525e60 FUN_00525e60
 */

undefined4 __thiscall FUN_00542a20(undefined4 param_1,byte param_2)

{
  FUN_00525e60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

