/* speed.exe 007eea9a FUN_007eea9a; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 * __thiscall FUN_007eea9a(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_008c1fa4;
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

