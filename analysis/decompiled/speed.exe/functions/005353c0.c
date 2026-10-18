/* speed.exe 005353c0 FUN_005353c0; analysis pseudocode, not buildable source.
 * calls 005353e0 FUN_005353e0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005353c0(undefined4 param_1,byte param_2)

{
  FUN_005353e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

