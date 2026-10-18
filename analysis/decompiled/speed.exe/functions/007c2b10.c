/* speed.exe 007c2b10 FUN_007c2b10; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007c2b30 FUN_007c2b30
 */

undefined4 __thiscall FUN_007c2b10(undefined4 param_1,byte param_2)

{
  FUN_007c2b30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

