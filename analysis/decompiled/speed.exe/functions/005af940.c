/* speed.exe 005af940 FUN_005af940; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005af940(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 100) * *(int *)(param_1 + 0x60);
  if (iVar2 != 0) {
    iVar3 = 0;
    do {
      if ((*(int *)(*(int *)(param_1 + 0x90) + 0x18 + iVar3) == 2) &&
         (iVar1 = *(int *)(*(int *)(param_1 + 0x90) + iVar3 + 0x20), iVar1 != 0)) {
        thunk_FUN_007c7250(iVar1);
        *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x20 + iVar3) = 0;
      }
      iVar3 = iVar3 + 0x30;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  return;
}

