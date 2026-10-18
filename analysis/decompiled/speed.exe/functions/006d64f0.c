/* speed.exe 006d64f0 FUN_006d64f0; analysis pseudocode, not buildable source.
 * calls 006d6510 FUN_006d6510
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_006d64f0(undefined4 param_1,byte param_2)

{
  FUN_006d6510();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

