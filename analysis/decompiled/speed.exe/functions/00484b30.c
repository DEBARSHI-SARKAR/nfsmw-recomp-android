/* speed.exe 00484b30 FUN_00484b30; analysis pseudocode, not buildable source.
 * calls 00484540 thunk_FUN_004809b0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00484b30(undefined4 param_1,byte param_2)

{
  thunk_FUN_004809b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

