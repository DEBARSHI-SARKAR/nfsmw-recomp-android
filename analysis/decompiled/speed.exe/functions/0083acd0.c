/* speed.exe 0083acd0 FUN_0083acd0; analysis pseudocode, not buildable source.
 * calls 0083a330 FUN_0083a330
 */

int FUN_0083acd0(char *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = DAT_0090d314;
  iVar1 = -1 - DAT_0090d314;
  pcVar3 = (char *)FUN_0083a330(param_1,param_2,param_3,0);
  if (pcVar3 == (char *)0x0) {
    return -1;
  }
  for (pcVar4 = "@ABCDEFGHIJKLMNOPQRSTUVWXYZ0123-"; (param_4 != 0 && (*pcVar4 != '\0'));
      pcVar4 = pcVar4 + 1) {
    if ((param_4 & 1) != 0) {
      if (param_1 + param_2 + iVar1 <= pcVar3) {
        pcVar4 = pcVar3;
        if (pcVar3 != param_1) {
          while (pcVar3 = pcVar4 + -1, 0x1f < (byte)pcVar4[-1]) {
            pcVar4 = pcVar3;
            if (pcVar3 == param_1) {
              *pcVar3 = '\0';
              return -1;
            }
          }
          if (*pcVar3 == '\n') {
            pcVar3 = pcVar4;
          }
        }
        *pcVar3 = '\0';
        return -1;
      }
      *pcVar3 = *pcVar4;
      pcVar3 = pcVar3 + 1;
    }
    param_4 = (int)param_4 >> 1;
  }
  if ((iVar2 != 0) && (param_3 != 0)) {
    *pcVar3 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
    pcVar3 = pcVar3 + 1;
  }
  *pcVar3 = '\0';
  return (int)pcVar3 - (int)param_1;
}

