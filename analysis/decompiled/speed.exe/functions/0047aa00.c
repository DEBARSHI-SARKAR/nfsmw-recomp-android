/* speed.exe 0047aa00 FUN_0047aa00; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00474100 FUN_00474100
 */

undefined4 __thiscall FUN_0047aa00(undefined4 param_1,byte param_2)

{
  FUN_00474100();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

