/* speed.exe 0061f6b0 FUN_0061f6b0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0061f590 FUN_0061f590
 */

undefined4 __thiscall FUN_0061f6b0(undefined4 param_1,byte param_2)

{
  FUN_0061f590();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

