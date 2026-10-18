/* speed.exe 0056ee90 FUN_0056ee90; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0056ee80 FUN_0056ee80
 */

undefined4 __thiscall FUN_0056ee90(undefined4 param_1,byte param_2)

{
  FUN_0056ee80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

