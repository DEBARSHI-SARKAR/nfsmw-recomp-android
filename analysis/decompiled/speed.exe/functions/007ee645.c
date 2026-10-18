/* speed.exe 007ee645 FUN_007ee645; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 * __thiscall FUN_007ee645(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_LAB_008a894c;
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

