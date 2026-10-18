/* speed.exe 005ef610 FUN_005ef610; analysis pseudocode, not buildable source.
 * calls 005ee0f0 FUN_005ee0f0
 * calls 00652b00 thunk_FUN_007c7250
 */

int * __thiscall FUN_005ef610(int *param_1,byte param_2)

{
  if (*param_1 != 0) {
    FUN_005ee0f0();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

