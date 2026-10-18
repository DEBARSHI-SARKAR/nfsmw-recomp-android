/* speed.exe 0058fe70 FUN_0058fe70; analysis pseudocode, not buildable source.
 * calls 0057f8c0 FUN_0057f8c0
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_0058fe70(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x10);
  iVar2 = 2;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      FUN_0057f8c0();
      thunk_FUN_007c7250(iVar1);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

