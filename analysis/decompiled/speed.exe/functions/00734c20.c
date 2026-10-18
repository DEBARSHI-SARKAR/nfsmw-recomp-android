/* speed.exe 00734c20 FUN_00734c20; analysis pseudocode, not buildable source.
 * calls 00760a50 FUN_00760a50
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00734c20(undefined4 param_1,byte param_2)

{
  FUN_00760a50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

