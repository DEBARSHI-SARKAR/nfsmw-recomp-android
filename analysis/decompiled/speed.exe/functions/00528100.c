/* speed.exe 00528100 FUN_00528100; analysis pseudocode, not buildable source.
 * calls 00528000 FUN_00528000
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00528100(undefined4 param_1,byte param_2)

{
  FUN_00528000();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

