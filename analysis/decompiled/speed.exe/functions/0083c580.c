/* speed.exe 0083c580 FUN_0083c580; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 */

undefined4 FUN_0083c580(char *param_1,int param_2,undefined4 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar3 = FUN_0083a670(param_1,param_3);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  if (*(char *)(iVar3 + -1) == ' ') {
    iVar3 = iVar3 + -1;
  }
  pcVar4 = (char *)(iVar3 + -1);
  for (pcVar7 = pcVar4; (pcVar7 != param_1 && (0x20 < (byte)pcVar7[-1])); pcVar7 = pcVar7 + -1) {
  }
  pcVar5 = param_4;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  pcVar5 = pcVar7 + (int)(pcVar5 + (-(int)pcVar4 - (int)(param_4 + 1)));
  if ((int)pcVar5 < 0) {
    cVar2 = *pcVar4;
    while (cVar2 != '\0') {
      pcVar5[(int)pcVar4] = cVar2;
      pcVar6 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
      cVar2 = *pcVar6;
    }
    pcVar5[(int)pcVar4] = '\0';
  }
  if (0 < (int)pcVar5) {
    cVar2 = *pcVar4;
    pcVar6 = pcVar4;
    while (cVar2 != '\0') {
      pcVar1 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar1;
    }
    if (param_2 - (int)pcVar5 <= (int)pcVar6 - (int)param_1) {
      return 0xffffffff;
    }
    for (pcVar6 = pcVar6 + 1; pcVar4 <= pcVar6; pcVar6 = pcVar6 + -1) {
      pcVar6[(int)pcVar5] = *pcVar6;
    }
  }
  cVar2 = *param_4;
  while (cVar2 != '\0') {
    *pcVar7 = cVar2;
    pcVar4 = param_4 + 1;
    pcVar7 = pcVar7 + 1;
    param_4 = param_4 + 1;
    cVar2 = *pcVar4;
  }
  return 0;
}

