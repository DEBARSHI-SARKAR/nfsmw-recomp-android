/* speed.exe 00461af0 FUN_00461af0; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_00461af0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < *param_1) {
    do {
      thunk_FUN_007c7250(piVar1[0x15]);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x15;
    } while (iVar2 < *param_1);
  }
  if (param_1[0x57] != 0) {
    thunk_FUN_007c7250(param_1[0x57]);
  }
  return;
}

