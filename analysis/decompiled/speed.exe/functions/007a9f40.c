/* speed.exe 007a9f40 FUN_007a9f40; analysis pseudocode, not buildable source.
 * calls 007a9f60 FUN_007a9f60
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_007a9f40(undefined4 param_1,byte param_2)

{
  FUN_007a9f60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

