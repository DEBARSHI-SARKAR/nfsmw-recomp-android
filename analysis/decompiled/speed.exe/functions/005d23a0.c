/* speed.exe 005d23a0 FUN_005d23a0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005d1f90 FUN_005d1f90
 */

undefined4 __thiscall FUN_005d23a0(undefined4 param_1,byte param_2)

{
  FUN_005d1f90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

