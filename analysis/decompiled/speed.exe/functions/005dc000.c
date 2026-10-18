/* speed.exe 005dc000 FUN_005dc000; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

int FUN_005dc000(char *param_1,int *param_2,code *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (iVar2 = (*param_3)(cVar1), iVar2 != 0))) {
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  iVar2 = 0;
  cVar1 = *param_1;
  pcVar6 = param_1;
  while (cVar1 != '\0') {
    iVar3 = (*param_3)(*pcVar6);
    if (iVar3 == 0) {
      cVar1 = *pcVar6;
      iVar2 = iVar2 + 1;
      while( true ) {
        if (cVar1 == '\0') goto LAB_005dc06a;
        iVar3 = (*param_3)(cVar1);
        if (iVar3 != 0) break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 1;
      }
    }
    else {
      pcVar6 = pcVar6 + 1;
    }
    cVar1 = *pcVar6;
  }
LAB_005dc06a:
  pvVar4 = _malloc(iVar2 * 4);
  iVar3 = 0;
  *param_2 = (int)pvVar4;
  if (0 < iVar2) {
    do {
      *(char **)(*param_2 + iVar3 * 4) = param_1;
      cVar1 = *param_1;
      pcVar6 = param_1;
      while ((cVar1 != '\0' && (iVar5 = (*param_3)(*pcVar6), iVar5 == 0))) {
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 1;
      }
      cVar1 = *pcVar6;
      param_1 = pcVar6;
      while ((cVar1 != '\0' && (iVar5 = (*param_3)(*param_1), iVar5 != 0))) {
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      iVar3 = iVar3 + 1;
      *pcVar6 = '\0';
    } while (iVar3 < iVar2);
  }
  return iVar2;
}

