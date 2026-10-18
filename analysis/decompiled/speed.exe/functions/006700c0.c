/* speed.exe 006700c0 FUN_006700c0; analysis pseudocode, not buildable source.
 * calls 00668c40 FUN_00668c40
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_006700c0(undefined4 param_1,byte param_2)

{
  FUN_00668c40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

