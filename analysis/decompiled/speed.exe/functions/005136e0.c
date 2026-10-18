/* speed.exe 005136e0 FUN_005136e0; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 00460ca0 FUN_00460ca0
 */

void __thiscall FUN_005136e0(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  
  pcVar1 = (char *)(param_1 + 0x7c);
  pcVar4 = pcVar1;
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  iVar5 = (int)pcVar4 - (param_1 + 0x7d);
  iVar7 = iVar5 + 1 + param_3;
  pcVar4 = pcVar1;
  while (0xfff < iVar7) {
    cVar3 = *pcVar4;
    while (cVar3 != '\n') {
      pcVar2 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
      iVar5 = iVar5 + -1;
      cVar3 = *pcVar2;
    }
    pcVar4 = pcVar4 + 1;
    iVar5 = iVar5 + -1;
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
    iVar7 = param_3 + 1 + iVar5;
  }
  if (pcVar1 < pcVar4) {
    FUN_00460c70(pcVar1,pcVar4);
  }
  iVar7 = iVar5 + 0x7c + param_1;
  FUN_00460ca0(iVar7,param_2,param_3);
  puVar6 = (undefined1 *)(iVar7 + param_3);
  *puVar6 = 10;
  puVar6[1] = 0;
  iVar7 = *(int *)(param_1 + 0x78) + 1;
  *(int *)(param_1 + 0x78) = iVar7;
  if ((2 < *(int *)(param_1 + 0x74)) &&
     (iVar5 = *(int *)(param_1 + 0x74) + 1, *(int *)(param_1 + 0x74) = iVar5, iVar7 < iVar5)) {
    *(int *)(param_1 + 0x74) = iVar7;
  }
  return;
}

