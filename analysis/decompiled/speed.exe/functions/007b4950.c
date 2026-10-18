/* speed.exe 007b4950 FUN_007b4950; analysis pseudocode, not buildable source.
 * calls 007b4970 FUN_007b4970
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_007b4950(undefined4 param_1,byte param_2)

{
  FUN_007b4970();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

