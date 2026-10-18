/* speed.exe 004b97e0 FUN_004b97e0; analysis pseudocode, not buildable source.
 * calls 00664cc0 FUN_00664cc0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 * __thiscall FUN_004b97e0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_00896a14;
  if (param_1[0xb] != 0) {
    FUN_00664cc0(param_1[0xb]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

