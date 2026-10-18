/* speed.exe 004cb9d0 FUN_004cb9d0; analysis pseudocode, not buildable source.
 * calls 004cb080 FUN_004cb080
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_004cb9d0(undefined4 param_1,byte param_2)

{
  FUN_004cb080();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

