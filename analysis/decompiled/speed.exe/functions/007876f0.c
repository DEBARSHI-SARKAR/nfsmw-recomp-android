/* speed.exe 007876f0 FUN_007876f0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007853f0 FUN_007853f0
 */

undefined4 __thiscall FUN_007876f0(undefined4 param_1,byte param_2)

{
  FUN_007853f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

