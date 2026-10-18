/* speed.exe 008425b0 FUN_008425b0; analysis pseudocode, not buildable source.
 * calls 008424b0 FUN_008424b0
 * calls 0083a630 FUN_0083a630
 * calls 00846110 FUN_00846110
 * calls 00842380 FUN_00842380
 */

void FUN_008425b0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  cVar1 = *param_2;
  pcVar4 = param_2;
  while (cVar1 != '\0') {
    if (*param_2 == ';') {
      *param_2 = '\0';
      cVar1 = *pcVar4;
      while (pcVar3 = pcVar4, cVar1 < '!') {
        pcVar3 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar3;
      }
      for (; (pcVar3 != param_2 && (' ' < *pcVar3)); pcVar3 = pcVar3 + 1) {
      }
      *pcVar3 = '\0';
      for (; (pcVar3 != param_2 && (*pcVar3 < '!')); pcVar3 = pcVar3 + 1) {
      }
      iVar2 = FUN_00846110(pcVar4,&DAT_008c6ab0);
      if (iVar2 == 0) {
        FUN_00842380(param_1,pcVar3);
      }
      else {
        iVar2 = FUN_00846110(pcVar4,"clear");
        if (iVar2 == 0) {
          FUN_008424b0(param_1,pcVar3);
        }
        else {
          iVar2 = FUN_00846110(pcVar4,&DAT_008c6aa0);
          if (iVar2 == 0) {
            FUN_0083a630(param_1 + 8,0x100,pcVar3);
            *(undefined4 *)(param_1 + 0x1210) = 0;
          }
        }
      }
      pcVar4 = param_2 + 1;
    }
    pcVar3 = param_2 + 1;
    param_2 = param_2 + 1;
    cVar1 = *pcVar3;
  }
  return;
}

