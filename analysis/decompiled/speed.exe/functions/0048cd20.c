/* speed.exe 0048cd20 FUN_0048cd20; analysis pseudocode, not buildable source.
 * calls 0048ca40 FUN_0048ca40
 * calls 005d0370 FUN_005d0370
 */

void FUN_0048cd20(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (DAT_0091132c == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = (undefined *)(DAT_0091132c + -4);
  }
  while (puVar3 = puVar4, puVar3 != &DAT_00911328) {
    if (*(int *)(puVar3 + 4) == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = (undefined *)(*(int *)(puVar3 + 4) + -4);
    }
    if ((param_1 == *(int *)(puVar3 + 0x1c)) || (param_1 == *(int *)(puVar3 + 0x34))) {
      piVar1 = *(int **)(puVar3 + 8);
      iVar2 = *(int *)(puVar3 + 4);
      *piVar1 = iVar2;
      *(int **)(iVar2 + 4) = piVar1;
      FUN_0048ca40();
      FUN_005d0370(puVar3,0x4c,0);
    }
  }
  return;
}

