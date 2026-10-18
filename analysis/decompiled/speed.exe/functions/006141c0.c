/* speed.exe 006141c0 FUN_006141c0; analysis pseudocode, not buildable source.
 * calls 00613eb0 FUN_00613eb0
 */

void FUN_006141c0(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = 0x54;
  do {
    pcVar2 = *(char **)("__pow" + iVar6);
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = FUN_00613eb0(param_1,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
    *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x10)) = uVar5;
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + iVar6);
    iVar6 = iVar6 + 4;
    *(byte *)(iVar3 + 5) = *(byte *)(iVar3 + 5) | 0x10;
  } while (iVar6 < 0x90);
  return;
}

