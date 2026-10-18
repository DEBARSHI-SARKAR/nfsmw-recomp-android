/* speed.exe 005424f0 FUN_005424f0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005be5d0 FUN_005be5d0
 */

int * __thiscall FUN_005424f0(int *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_005be5d0();
    thunk_FUN_007c7250(iVar1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

