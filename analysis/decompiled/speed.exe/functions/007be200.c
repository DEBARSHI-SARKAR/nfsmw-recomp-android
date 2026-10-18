/* speed.exe 007be200 FUN_007be200; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007be220 FUN_007be220
 */

undefined4 __thiscall FUN_007be200(undefined4 param_1,byte param_2)

{
  FUN_007be220();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

