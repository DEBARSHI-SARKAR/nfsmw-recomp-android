/* speed.exe 004039a0 FUN_004039a0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00403960 FUN_00403960
 */

undefined4 __thiscall FUN_004039a0(undefined4 param_1,byte param_2)

{
  FUN_00403960();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

