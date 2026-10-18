/* speed.exe 005a3570 FUN_005a3570; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00597d60 FUN_00597d60
 */

undefined4 __thiscall FUN_005a3570(undefined4 param_1,byte param_2)

{
  FUN_00597d60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

