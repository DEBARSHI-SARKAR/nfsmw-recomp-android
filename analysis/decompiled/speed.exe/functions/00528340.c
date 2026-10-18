/* speed.exe 00528340 FUN_00528340; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00528360 FUN_00528360
 */

undefined4 __thiscall FUN_00528340(undefined4 param_1,byte param_2)

{
  FUN_00528360();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

