/* speed.exe 00525ae0 FUN_00525ae0; analysis pseudocode, not buildable source.
 * calls 006466b0 FUN_006466b0
 * calls 005d0370 FUN_005d0370
 * calls 00652b00 thunk_FUN_007c7250
 */

int * __thiscall FUN_00525ae0(int *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_006466b0();
    FUN_005d0370(iVar1,0x28c,0);
    *param_1 = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

