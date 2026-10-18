/* speed.exe 00704a00 FUN_00704a00; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00700cd0 FUN_00700cd0
 */

undefined4 __thiscall FUN_00704a00(undefined4 param_1,byte param_2)

{
  FUN_00700cd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

