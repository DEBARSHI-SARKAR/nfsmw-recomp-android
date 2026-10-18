/* speed.exe 0075da70 FUN_0075da70; analysis pseudocode, not buildable source.
 * calls 0075c8a0 FUN_0075c8a0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0075da70(undefined4 param_1,byte param_2)

{
  FUN_0075c8a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

