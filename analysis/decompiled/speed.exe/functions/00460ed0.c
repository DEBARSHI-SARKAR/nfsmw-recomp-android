/* speed.exe 00460ed0 FUN_00460ed0; analysis pseudocode, not buildable source.
 */

void FUN_00460ed0(int param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar2 = *param_2;
  iVar3 = 0;
  if (cVar2 != '\0') {
    iVar4 = param_1 - (int)param_2;
    do {
      param_2[iVar4] = cVar2;
      cVar2 = param_2[1];
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 1;
    } while (cVar2 != '\0');
  }
  cVar2 = *param_3;
  while (cVar2 != '\0') {
    *(char *)(iVar3 + param_1) = cVar2;
    pcVar1 = param_3 + 1;
    iVar3 = iVar3 + 1;
    param_3 = param_3 + 1;
    cVar2 = *pcVar1;
  }
  *(undefined1 *)(iVar3 + param_1) = 0;
  return;
}

