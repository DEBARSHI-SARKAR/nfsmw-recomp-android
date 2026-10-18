/* speed.exe 00547020 FUN_00547020; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00547040 FUN_00547040
 */

undefined4 __thiscall FUN_00547020(undefined4 param_1,byte param_2)

{
  FUN_00547040();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

