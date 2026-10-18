/* speed.exe 006d66b0 FUN_006d66b0; analysis pseudocode, not buildable source.
 * calls 006d66d0 FUN_006d66d0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_006d66b0(undefined4 param_1,byte param_2)

{
  FUN_006d66d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

