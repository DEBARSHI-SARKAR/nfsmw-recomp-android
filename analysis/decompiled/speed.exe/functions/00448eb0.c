/* speed.exe 00448eb0 FUN_00448eb0; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

void FUN_00448eb0(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  if (DAT_0090db24 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = (undefined *)(DAT_0090db24 + -4);
  }
  while (puVar3 != &DAT_0090db20) {
    iVar1 = *(int *)(puVar3 + 0x18);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 4);
      iVar4 = 0;
      if (0 < iVar2) {
        do {
          FUN_00460bf0(*(undefined4 *)(*(int *)(iVar1 + 0x14) + iVar4 * 4));
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
      }
    }
    if (*(int *)(puVar3 + 4) == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = (undefined *)(*(int *)(puVar3 + 4) + -4);
    }
  }
  return;
}

