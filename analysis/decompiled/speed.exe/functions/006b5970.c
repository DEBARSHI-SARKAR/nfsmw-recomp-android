/* speed.exe 006b5970 FUN_006b5970; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 006b5870 FUN_006b5870
 */

undefined4 __thiscall FUN_006b5970(undefined4 param_1,byte param_2)

{
  FUN_006b5870();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

