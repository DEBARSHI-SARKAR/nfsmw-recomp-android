/* speed.exe 00559d10 FUN_00559d10; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00559d30 FUN_00559d30
 */

undefined4 __thiscall FUN_00559d10(undefined4 param_1,byte param_2)

{
  FUN_00559d30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

