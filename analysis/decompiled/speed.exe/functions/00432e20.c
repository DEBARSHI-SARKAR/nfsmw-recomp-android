/* speed.exe 00432e20 FUN_00432e20; analysis pseudocode, not buildable source.
 * calls 00432e40 FUN_00432e40
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00432e20(undefined4 param_1,byte param_2)

{
  FUN_00432e40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

