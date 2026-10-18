/* speed.exe 0050d960 FUN_0050d960; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0050d7f0 FUN_0050d7f0
 */

undefined4 __thiscall FUN_0050d960(undefined4 param_1,byte param_2)

{
  FUN_0050d7f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

