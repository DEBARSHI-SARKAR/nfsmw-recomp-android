/* speed.exe 004f50c0 FUN_004f50c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004f4c90 FUN_004f4c90
 */

undefined4 __thiscall FUN_004f50c0(undefined4 param_1,byte param_2)

{
  FUN_004f4c90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

