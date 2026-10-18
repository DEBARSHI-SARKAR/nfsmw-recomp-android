/* speed.exe 005658d0 FUN_005658d0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00565890 FUN_00565890
 */

undefined4 __thiscall FUN_005658d0(undefined4 param_1,byte param_2)

{
  FUN_00565890();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

