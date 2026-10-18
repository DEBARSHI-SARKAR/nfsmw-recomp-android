/* speed.exe 005378d0 FUN_005378d0; analysis pseudocode, not buildable source.
 * calls 005378f0 FUN_005378f0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005378d0(undefined4 param_1,byte param_2)

{
  FUN_005378f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

