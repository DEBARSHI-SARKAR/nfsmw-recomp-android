/* speed.exe 007f1c9c FUN_007f1c9c; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 * __thiscall FUN_007f1c9c(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_LAB_008c2240;
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

