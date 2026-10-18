/* speed.exe 00545730 FUN_00545730; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00529280 FUN_00529280
 */

undefined4 __thiscall FUN_00545730(undefined4 param_1,byte param_2)

{
  FUN_00529280();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

