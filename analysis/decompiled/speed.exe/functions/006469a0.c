/* speed.exe 006469a0 FUN_006469a0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00646940 FUN_00646940
 */

undefined4 __thiscall FUN_006469a0(undefined4 param_1,byte param_2)

{
  FUN_00646940();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

