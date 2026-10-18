/* speed.exe 00483fd0 FUN_00483fd0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004819c0 FUN_004819c0
 */

undefined4 __thiscall FUN_00483fd0(undefined4 param_1,byte param_2)

{
  FUN_004819c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

