/* speed.exe 0066fc70 FUN_0066fc70; analysis pseudocode, not buildable source.
 * calls 0066fc20 FUN_0066fc20
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0066fc70(undefined4 param_1,byte param_2)

{
  FUN_0066fc20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

