/* speed.exe 0051f050 FUN_0051f050; analysis pseudocode, not buildable source.
 * calls 0051efc0 FUN_0051efc0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0051f050(undefined4 param_1,byte param_2)

{
  FUN_0051efc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

