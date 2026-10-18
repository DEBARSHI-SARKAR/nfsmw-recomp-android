/* speed.exe 004f4680 FUN_004f4680; analysis pseudocode, not buildable source.
 * calls 004f43f0 FUN_004f43f0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004f4680(undefined4 param_1,byte param_2)

{
  FUN_004f43f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

