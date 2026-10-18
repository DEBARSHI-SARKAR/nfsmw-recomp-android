/* speed.exe 00457d20 FUN_00457d20; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00457cb0 FUN_00457cb0
 */

undefined4 __thiscall FUN_00457d20(undefined4 param_1,byte param_2)

{
  FUN_00457cb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

