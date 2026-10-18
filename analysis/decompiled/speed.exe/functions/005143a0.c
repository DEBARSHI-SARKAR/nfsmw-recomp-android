/* speed.exe 005143a0 FUN_005143a0; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 00460ca0 FUN_00460ca0
 */

void __thiscall FUN_005143a0(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  
  pcVar2 = (char *)(param_1 + 0x154);
  pcVar4 = pcVar2;
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  iVar5 = (int)pcVar4 - (param_1 + 0x155);
  iVar7 = iVar5 + 1 + param_3;
  pcVar4 = pcVar2;
  while (0xfff < iVar7) {
    cVar3 = *pcVar4;
    while (cVar3 != '\n') {
      pcVar1 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
      iVar5 = iVar5 + -1;
      cVar3 = *pcVar1;
    }
    pcVar4 = pcVar4 + 1;
    iVar5 = iVar5 + -1;
    *(int *)(param_1 + 0x1168) = *(int *)(param_1 + 0x1168) + -1;
    iVar7 = param_3 + 1 + iVar5;
  }
  if (pcVar2 < pcVar4) {
    FUN_00460c70(pcVar2,pcVar4);
  }
  iVar7 = iVar5 + 0x154 + param_1;
  FUN_00460ca0(iVar7,param_2,param_3);
  puVar6 = (undefined1 *)(iVar7 + param_3);
  *puVar6 = 10;
  puVar6[1] = 0;
  iVar7 = *(int *)(param_1 + 0x1168) + 1;
  *(int *)(param_1 + 0x1168) = iVar7;
  if ((0xc < *(int *)(param_1 + 0x1164)) &&
     (iVar5 = *(int *)(param_1 + 0x1164) + 1, *(int *)(param_1 + 0x1164) = iVar5, iVar7 < iVar5)) {
    *(int *)(param_1 + 0x1164) = iVar7;
  }
  return;
}

