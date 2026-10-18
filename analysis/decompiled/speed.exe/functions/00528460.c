/* speed.exe 00528460 FUN_00528460; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00528480 FUN_00528480
 */

undefined4 __thiscall FUN_00528460(undefined4 param_1,byte param_2)

{
  FUN_00528480();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

