/* speed.exe 007f72c7 FUN_007f72c7; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 * __thiscall FUN_007f72c7(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR___purecall_008c2510;
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

