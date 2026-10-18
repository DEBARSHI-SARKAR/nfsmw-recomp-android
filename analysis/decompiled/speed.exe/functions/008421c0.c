/* speed.exe 008421c0 FUN_008421c0; analysis pseudocode, not buildable source.
 * calls 007c97c0 FUN_007c97c0
 * calls 007c6610 FUN_007c6610
 * calls 0085e770 _strtol
 * calls 00846110 FUN_00846110
 * calls 00846040 FUN_00846040
 */

char * FUN_008421c0(int *param_1,char *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  char *local_4;
  
  pcVar3 = param_3;
  bVar2 = false;
  local_4 = (char *)0x0;
  pcVar6 = param_2;
  pcVar4 = param_2;
  pcVar7 = local_4;
  if (param_2 != (char *)0x0) {
    while( true ) {
      pcVar4 = (char *)FUN_007c6610(pcVar6,&DAT_008c6a6c);
      if (pcVar4 == (char *)0x0) {
        do {
          pcVar4 = pcVar6;
          pcVar6 = pcVar4 + 1;
        } while (*pcVar4 != '\0');
      }
      if (((((bVar2) && (iVar5 = FUN_00846110(pcVar3,"$next"), pcVar7 = pcVar4, iVar5 == 0)) ||
           (pcVar7 = local_4, *pcVar4 == '\0')) ||
          (iVar5 = FUN_00846110(pcVar3,"$head"), pcVar7 = pcVar4, iVar5 == 0)) ||
         ((iVar5 = FUN_00846110(pcVar3,"$incl"), iVar5 == 0 && (pcVar4[2] == '*')))) break;
      pcVar6 = (char *)FUN_00846040(pcVar4,pcVar3);
      if (pcVar6 == pcVar4 + 2) {
        pcVar6 = pcVar3;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        if (pcVar4[(int)(pcVar6 + (2 - (int)(pcVar3 + 1)))] < '!') break;
      }
      pcVar7 = (char *)FUN_007c6610(pcVar4,&DAT_008c6a50);
      if (pcVar7 == (char *)0x0) {
        do {
          pcVar7 = pcVar4;
          pcVar4 = pcVar7 + 1;
        } while (*pcVar7 != '\0');
      }
      iVar5 = FUN_00846110(pcVar3,"$tail");
      pcVar4 = pcVar7;
      if (iVar5 == 0) break;
      pcVar4 = (char *)FUN_007c97c0(pcVar7 + 1,0x25);
      if (pcVar4 == (char *)0x0) {
        do {
          pcVar4 = pcVar7;
          pcVar7 = pcVar4 + 1;
        } while (*pcVar4 != '\0');
      }
      pcVar6 = pcVar4;
      if (pcVar4[1] == '$') {
        pcVar7 = local_4;
        if (pcVar4[10] != ':') break;
        lVar8 = _strtol(pcVar4 + 2,&param_2,0x10);
        pcVar6 = pcVar4 + lVar8 + 0xc;
        if (((char *)(param_1[1] + *param_1) <= pcVar6) ||
           (iVar5 = FUN_00846110(pcVar3,"$rsrc"), pcVar7 = pcVar4, iVar5 == 0)) break;
      }
      bVar2 = true;
      iVar5 = FUN_00846110(pcVar3,"$rsrc");
      pcVar4 = pcVar6;
      pcVar7 = local_4;
      if ((iVar5 == 0) || (pcVar6 == (char *)0x0)) break;
    }
  }
  local_4 = pcVar7;
  iVar5 = FUN_00846110(pcVar3,"$last");
  if (iVar5 != 0) {
    pcVar4 = local_4;
  }
  return pcVar4;
}

