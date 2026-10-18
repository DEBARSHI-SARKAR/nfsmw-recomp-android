/* speed.exe 005452e0 FUN_005452e0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00545300 FUN_00545300
 */

undefined4 __thiscall FUN_005452e0(undefined4 param_1,byte param_2)

{
  FUN_00545300();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

