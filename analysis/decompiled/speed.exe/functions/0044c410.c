/* speed.exe 0044c410 FUN_0044c410; analysis pseudocode, not buildable source.
 * calls 00448da0 FUN_00448da0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0044c410(undefined4 param_1,byte param_2)

{
  FUN_00448da0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

