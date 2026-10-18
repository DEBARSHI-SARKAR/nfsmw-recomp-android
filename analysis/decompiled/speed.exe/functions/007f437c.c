/* speed.exe 007f437c FUN_007f437c; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 */

void FUN_007f437c(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char local_44 [64];
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_44 + -(int)param_1)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar4 = (char *)0x0;
  pcVar2 = param_1 + 1;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)param_1 - (int)pcVar2;
  do {
    if (iVar3 == 0) break;
    pcVar2 = local_44 + iVar3;
    if ((*pcVar2 == '\\') || (*pcVar2 == '/')) {
      *pcVar2 = '\0';
      pcVar4 = pcVar2;
    }
    iVar3 = iVar3 + -1;
  } while (pcVar4 == (char *)0x0);
  _strncpy(param_2,local_44,0x1f);
  _strncpy(param_3,pcVar4 + 1,0x1f);
  return;
}

