/* speed.exe 004df310 FUN_004df310; analysis pseudocode, not buildable source.
 * calls 004b0000 FUN_004b0000
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004df310(undefined4 param_1,byte param_2)

{
  FUN_004b0000();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

