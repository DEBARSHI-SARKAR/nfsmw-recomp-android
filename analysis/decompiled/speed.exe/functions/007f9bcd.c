/* speed.exe 007f9bcd FUN_007f9bcd; analysis pseudocode, not buildable source.
 * calls 007f9a97 FUN_007f9a97
 */

undefined4 * __thiscall FUN_007f9bcd(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_008c27a4;
  FUN_007f9a97();
  if ((param_2 & 1) != 0) {
    (*DAT_00909e58)(param_1);
  }
  return param_1;
}

