/* speed.exe 00668140 FUN_00668140; analysis pseudocode, not buildable source.
 * calls 00668100 FUN_00668100
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00668140(undefined4 param_1,byte param_2)

{
  FUN_00668100();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

