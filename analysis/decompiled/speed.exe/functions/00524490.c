/* speed.exe 00524490 FUN_00524490; analysis pseudocode, not buildable source.
 * calls 005143a0 FUN_005143a0
 * calls 00524230 FUN_00524230
 * calls 00524390 FUN_00524390
 */

void FUN_00524490(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  
  cVar2 = *param_1;
  pcVar3 = param_1;
  while (cVar2 != '\0') {
    if (*pcVar3 == '^') {
      *pcVar3 = '*';
    }
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar1;
  }
  cVar2 = *param_1;
  while( true ) {
    if (cVar2 == '\0') {
      FUN_00524390();
      return;
    }
    iVar4 = FUN_00524230(param_1);
    if (0xfff < iVar4 + 1) break;
    FUN_005143a0(param_1,iVar4);
    pcVar3 = param_1 + iVar4;
    param_1 = param_1 + iVar4;
    cVar2 = *pcVar3;
    while (cVar2 == ' ') {
      pcVar3 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar3;
    }
    cVar2 = *param_1;
  }
  return;
}

