/* speed.exe 0051f2e0 FUN_0051f2e0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0051f300 FUN_0051f300
 */

undefined4 __thiscall FUN_0051f2e0(undefined4 param_1,byte param_2)

{
  FUN_0051f300();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

