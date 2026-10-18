/* speed.exe 007c03c0 FUN_007c03c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007c03e0 FUN_007c03e0
 */

undefined4 __thiscall FUN_007c03c0(undefined4 param_1,byte param_2)

{
  FUN_007c03e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

