/* speed.exe 00588f20 FUN_00588f20; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00588f40 FUN_00588f40
 */

undefined4 __thiscall FUN_00588f20(undefined4 param_1,byte param_2)

{
  FUN_00588f40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

