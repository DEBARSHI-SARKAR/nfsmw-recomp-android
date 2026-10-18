/* speed.exe 007f9a44 FUN_007f9a44; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 * __thiscall FUN_007f9a44(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_008c27a0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

