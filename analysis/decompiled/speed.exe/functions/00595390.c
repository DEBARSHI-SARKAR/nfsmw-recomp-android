/* speed.exe 00595390 FUN_00595390; analysis pseudocode, not buildable source.
 * calls 005953b0 FUN_005953b0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00595390(undefined4 param_1,byte param_2)

{
  FUN_005953b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

