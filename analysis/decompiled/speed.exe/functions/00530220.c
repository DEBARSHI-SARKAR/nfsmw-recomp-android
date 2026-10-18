/* speed.exe 00530220 FUN_00530220; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0051f4b0 FUN_0051f4b0
 */

undefined4 __thiscall FUN_00530220(undefined4 param_1,byte param_2)

{
  FUN_0051f4b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

