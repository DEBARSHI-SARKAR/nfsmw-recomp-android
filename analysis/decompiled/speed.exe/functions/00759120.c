/* speed.exe 00759120 FUN_00759120; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007556c0 FUN_007556c0
 */

undefined4 __thiscall FUN_00759120(undefined4 param_1,byte param_2)

{
  FUN_007556c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

