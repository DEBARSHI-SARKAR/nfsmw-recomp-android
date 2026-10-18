/* speed.exe 00793940 FUN_00793940; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 008428e0 FUN_008428e0
 */

undefined4 * __thiscall FUN_00793940(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_008b68f0;
  if (param_1[1] != 0) {
    FUN_008428e0(param_1[1]);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

