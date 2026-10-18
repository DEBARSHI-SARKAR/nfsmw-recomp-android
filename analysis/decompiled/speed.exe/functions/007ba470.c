/* speed.exe 007ba470 FUN_007ba470; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007ba490 FUN_007ba490
 */

undefined4 __thiscall FUN_007ba470(undefined4 param_1,byte param_2)

{
  FUN_007ba490();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

