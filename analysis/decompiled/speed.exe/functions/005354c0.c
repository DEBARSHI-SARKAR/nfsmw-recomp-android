/* speed.exe 005354c0 FUN_005354c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005354e0 FUN_005354e0
 */

undefined4 __thiscall FUN_005354c0(undefined4 param_1,byte param_2)

{
  FUN_005354e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

