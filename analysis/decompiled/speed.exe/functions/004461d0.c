/* speed.exe 004461d0 FUN_004461d0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004461d0(int param_1,int param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar2 = (char *)((*(uint *)(param_1 + 8 + param_2 * 8) >> 0x18) * 0x40 + 0x808 + param_1);
  iVar4 = 0;
  cVar3 = *pcVar2;
  while (cVar3 != '_') {
    iVar5 = iVar4 + 1;
    iVar4 = iVar4 + 1;
    cVar3 = pcVar2[iVar5];
  }
  iVar4 = iVar4 + 1;
  pcVar6 = pcVar2 + iVar4;
  cVar3 = pcVar2[iVar4];
  iVar5 = iVar4;
  while (cVar3 != '_') {
    iVar1 = iVar5 + 1;
    iVar5 = iVar5 + 1;
    cVar3 = pcVar2[iVar1];
  }
  iVar5 = iVar5 - iVar4;
  if (iVar5 != 0) {
    do {
      *param_3 = *pcVar6;
      param_3 = param_3 + 1;
      pcVar6 = pcVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *param_3 = '\0';
    return;
  }
  *param_3 = '\0';
  return;
}

