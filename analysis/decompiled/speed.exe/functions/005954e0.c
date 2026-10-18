/* speed.exe 005954e0 FUN_005954e0; analysis pseudocode, not buildable source.
 * calls 00595500 FUN_00595500
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005954e0(undefined4 param_1,byte param_2)

{
  FUN_00595500();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

