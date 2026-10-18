/* speed.exe 007047e0 FUN_007047e0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00700840 FUN_00700840
 */

undefined4 __thiscall FUN_007047e0(undefined4 param_1,byte param_2)

{
  FUN_00700840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

