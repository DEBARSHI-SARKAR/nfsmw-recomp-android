/* speed.exe 004e9ab0 FUN_004e9ab0; analysis pseudocode, not buildable source.
 * calls 004e3ab0 FUN_004e3ab0
 * calls 004e3be0 FUN_004e3be0
 */

void __fastcall FUN_004e9ab0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x38) + 4)) {
    iVar2 = *(int *)(param_1 + 0x5c);
    do {
      iVar1 = *(int *)(iVar2 + iVar4 * 4);
      if ((iVar1 != 0) && (iVar3 = 0, 0 < *(int *)(iVar1 + 0x3c))) {
        do {
          FUN_004e3ab0();
          FUN_004e3be0();
          iVar2 = *(int *)(param_1 + 0x5c);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(*(int *)(iVar2 + iVar4 * 4) + 0x3c));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(*(int *)(param_1 + 0x38) + 4));
  }
  return;
}

