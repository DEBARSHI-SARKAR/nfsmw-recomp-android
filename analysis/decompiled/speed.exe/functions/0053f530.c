/* speed.exe 0053f530 FUN_0053f530; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0053f550 FUN_0053f550
 */

undefined4 __thiscall FUN_0053f530(undefined4 param_1,byte param_2)

{
  FUN_0053f550();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

