/* speed.exe 0053dd50 FUN_0053dd50; analysis pseudocode, not buildable source.
 * calls 0053dd70 FUN_0053dd70
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0053dd50(undefined4 param_1,byte param_2)

{
  FUN_0053dd70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

