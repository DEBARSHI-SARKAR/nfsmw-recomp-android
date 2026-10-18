/* speed.exe 0051e3d0 FUN_0051e3d0; analysis pseudocode, not buildable source.
 * calls 0051e3f0 FUN_0051e3f0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0051e3d0(undefined4 param_1,byte param_2)

{
  FUN_0051e3f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

